// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int32.msg - do not modify

#include "Msgs/ROS2Int32Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Int32Msg::Init()
{
	example_interfaces__msg__Int32__init(&int32_msg);
}

void UROS2Int32Msg::Fini()
{
	example_interfaces__msg__Int32__fini(&int32_msg);
}

const rosidl_message_type_support_t* UROS2Int32Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int32);
}

void UROS2Int32Msg::SetMsg(const FROSInt32& Inputs)
{
    Inputs.SetROS2(int32_msg);
}

void UROS2Int32Msg::GetMsg(FROSInt32& Outputs) const
{
    Outputs.SetFromROS2(int32_msg);
}

void* UROS2Int32Msg::Get()
{
	return &int32_msg;
}

FString UROS2Int32Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}