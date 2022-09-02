// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/msg/EntityState.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "ue_msgs/msg/entity_state.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2EntityStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSEntityState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PosePosition = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat PoseOrientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TwistLinear = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TwistAngular = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ReferenceFrame;

	

	void SetFromROS2(const ue_msgs__msg__EntityState& in_ros_data)
	{
    	Name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);

		PosePosition.X = in_ros_data.pose.position.x;
		PosePosition.Y = in_ros_data.pose.position.y;
		PosePosition.Z = in_ros_data.pose.position.z;

		PoseOrientation.X = in_ros_data.pose.orientation.x;
		PoseOrientation.Y = in_ros_data.pose.orientation.y;
		PoseOrientation.Z = in_ros_data.pose.orientation.z;
		PoseOrientation.W = in_ros_data.pose.orientation.w;

		TwistLinear.X = in_ros_data.twist.linear.x;
		TwistLinear.Y = in_ros_data.twist.linear.y;
		TwistLinear.Z = in_ros_data.twist.linear.z;

		TwistAngular.X = in_ros_data.twist.angular.x;
		TwistAngular.Y = in_ros_data.twist.angular.y;
		TwistAngular.Z = in_ros_data.twist.angular.z;

		ReferenceFrame.AppendChars(in_ros_data.reference_frame.data, in_ros_data.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__msg__EntityState& out_ros_data) const
	{
    	{
			FTCHARToUTF8 strUtf8( *Name );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.name.data != nullptr)
		{
			free(out_ros_data.name.data);
		}
		out_ros_data.name.data = (decltype(out_ros_data.name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.name.data)));
		memcpy(out_ros_data.name.data, TCHAR_TO_UTF8(*Name), (strLength+1)*sizeof(char));
			out_ros_data.name.size = strLength;
			out_ros_data.name.capacity = strLength + 1;
		}

		out_ros_data.pose.position.x = PosePosition.X;
		out_ros_data.pose.position.y = PosePosition.Y;
		out_ros_data.pose.position.z = PosePosition.Z;

		out_ros_data.pose.orientation.x = PoseOrientation.X;
		out_ros_data.pose.orientation.y = PoseOrientation.Y;
		out_ros_data.pose.orientation.z = PoseOrientation.Z;
		out_ros_data.pose.orientation.w = PoseOrientation.W;

		out_ros_data.twist.linear.x = TwistLinear.X;
		out_ros_data.twist.linear.y = TwistLinear.Y;
		out_ros_data.twist.linear.z = TwistLinear.Z;

		out_ros_data.twist.angular.x = TwistAngular.X;
		out_ros_data.twist.angular.y = TwistAngular.Y;
		out_ros_data.twist.angular.z = TwistAngular.Z;

		{
			FTCHARToUTF8 strUtf8( *ReferenceFrame );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.reference_frame.data != nullptr)
		{
			free(out_ros_data.reference_frame.data);
		}
		out_ros_data.reference_frame.data = (decltype(out_ros_data.reference_frame.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.reference_frame.data)));
		memcpy(out_ros_data.reference_frame.data, TCHAR_TO_UTF8(*ReferenceFrame), (strLength+1)*sizeof(char));
			out_ros_data.reference_frame.size = strLength;
			out_ros_data.reference_frame.capacity = strLength + 1;
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSEntityState& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSEntityState& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	ue_msgs__msg__EntityState entity_state_msg;
};