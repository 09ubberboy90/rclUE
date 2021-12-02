// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/UInt32.msg - do not modify

#include "Msgs/ROS2UInt32Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2UInt32Msg::Init()
{
	example_interfaces__msg__UInt32__init(&u_int32_msg);
}

void UROS2UInt32Msg::Fini()
{
	example_interfaces__msg__UInt32__fini(&u_int32_msg);
}

const rosidl_message_type_support_t* UROS2UInt32Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt32);
}

void UROS2UInt32Msg::SetMsg(const FROSUInt32& Inputs)
{
    Inputs.SetROS2(u_int32_msg);
}

void UROS2UInt32Msg::GetMsg(FROSUInt32& Outputs) const
{
    Outputs.SetFromROS2(u_int32_msg);
}

void* UROS2UInt32Msg::Get()
{
	return &u_int32_msg;
}

FString UROS2UInt32Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}