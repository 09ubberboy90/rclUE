// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ActionClient.h"


// Sets default values for this component's properties
UROS2ActionClient::UROS2ActionClient() : Super()
{
}

void UROS2ActionClient::InitializeActionComponent()
{
	const rosidl_action_type_support_t * action_type_support = Action->GetTypeSupport();

	client = rcl_action_get_zero_initialized_client();
	rcl_action_client_options_t client_opt = rcl_action_client_get_default_options();
	rcl_ret_t rc = rcl_action_client_init(&client, ownerNode->GetNode(), action_type_support, TCHAR_TO_ANSI(*ActionName), &client_opt);
	
	if (rc != RCL_RET_OK)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (ROS2ActionClient). Terminating."),__LINE__,(int)rc);
		UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
	}

	ensure(rcl_action_client_is_valid(&client));
}

void UROS2ActionClient::Destroy()
{
	Super::Destroy();
	
	if (ownerNode != nullptr)
	{
		RCSOFTCHECK(rcl_action_client_fini(&client, ownerNode->GetNode()));
	}
}


void UROS2ActionClient::ProcessReady(rcl_wait_set_t* wait_set)
{
	TArray<bool, TFixedAllocator<5>> IsReady = {false, false, false, false, false};
	RCSOFTCHECK(rcl_action_client_wait_set_get_entities_ready(wait_set, &client,
		&IsReady[0],
		&IsReady[1],
		&IsReady[2],
		&IsReady[3],
		&IsReady[4]));

	if (IsReady[0])
	{
		UE_LOG(LogROS2Action, Log, TEXT("8. Action Client - Received feedback"));
		void* data = Action->GetFeedbackMessage();
		RCSOFTCHECK(rcl_action_take_feedback(&client, data));
		FeedbackDelegate.ExecuteIfBound(Action);
	}

	if (IsReady[1])
	{
		ensureMsgf(false, TEXT("Action Client take status not implemented yet"));
	}

	if (IsReady[2])
	{
		UE_LOG(LogROS2Action, Log, TEXT("4. Action Client - Received goal response"));
		void* data = Action->GetGoalResponse();
		RCSOFTCHECK(rcl_action_take_goal_response(&client, &goal_res_id, data));
		GoalResponseDelegate.ExecuteIfBound();
	}

	if (IsReady[3])
	{
		UE_LOG(LogROS2Action, Log, TEXT("D. Action Client - Received cancel response"));
		void* data = Action->GetCancelResponse();
		RCSOFTCHECK(rcl_action_take_cancel_response(&client, &cancel_res_id, data));
		CancelDelegate.ExecuteIfBound();
	}

	if (IsReady[4])
	{
		UE_LOG(LogROS2Action, Log, TEXT("10. Action Client - Received result response"));
		void* data = Action->GetResultResponse();
		RCSOFTCHECK(rcl_action_take_result_response(&client, &result_res_id, data));
		ResultDelegate.ExecuteIfBound(Action);
	}
}


void UROS2ActionClient::UpdateAndSendGoal()
{
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));

	bool ActionServerIsAvailable = false;
	RCSOFTCHECK(rcl_action_server_is_available(ownerNode->GetNode(), &client, &ActionServerIsAvailable));
	if (ActionServerIsAvailable)
	{
		UE_LOG(LogROS2Action, Log, TEXT("1. Action Client - Send goal"));
		SetGoalDelegate.ExecuteIfBound(Action);
		const void* goal = Action->GetGoalRequest();

		int64_t seq;
		RCSOFTCHECK(rcl_action_send_goal_request(&client, goal, &seq));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Action Server Unavailable"));
	}
}

void UROS2ActionClient::GetResultRequest()
{	
    UE_LOG(LogROS2Action, Log, TEXT("5. Action Client - Send result request"));
	const void* result = Action->GetResultRequest();

	int64_t seq;
	RCSOFTCHECK(rcl_action_send_result_request(&client, result, &seq));
}

void UROS2ActionClient::CancelActionRequest()
{
    UE_LOG(LogROS2Action, Log, TEXT("A. Action Client - Send cancel action request"));
	action_msgs__srv__CancelGoal_Request* cancel_request = (action_msgs__srv__CancelGoal_Request*) Action->GetCancelRequest();
	float CancelTime = UGameplayStatics::GetTimeSeconds(GWorld);
	cancel_request->goal_info.stamp.sec = (int32_t)CancelTime;
	unsigned long long ns = (unsigned long long)(CancelTime * 1000000000.0f);
	cancel_request->goal_info.stamp.nanosec = (uint32_t)(ns - (cancel_request->goal_info.stamp.sec * 1000000000ul));

	int64_t seq;
	RCSOFTCHECK(rcl_action_send_cancel_request(&client, Action->GetCancelRequest(), &seq));
}

void UROS2ActionClient::SetDelegates(FActionCallback SetGoal, 
									 FActionCallback Feedback, 
									 FActionCallback Result, 
									 FSimpleCallback GoalResponse, 
									 FSimpleCallback Cancel)
{
	SetGoalDelegate = SetGoal;
	GoalResponseDelegate = GoalResponse;
	FeedbackDelegate = Feedback;
	ResultDelegate = Result;
	CancelDelegate = Cancel;
}