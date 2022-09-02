// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Float64.msg - do not modify

#include "Msgs/ROS2Float64Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Float64Msg::Init()
{
	example_interfaces__msg__Float64__init(&float64_msg);
}

void UROS2Float64Msg::Fini()
{
	example_interfaces__msg__Float64__fini(&float64_msg);
}

const rosidl_message_type_support_t* UROS2Float64Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Float64);
}

void UROS2Float64Msg::SetMsg(const FROSFloat64& Inputs)
{
    Inputs.SetROS2(float64_msg);
}

void UROS2Float64Msg::GetMsg(FROSFloat64& Outputs) const
{
    Outputs.SetFromROS2(float64_msg);
}

void* UROS2Float64Msg::Get()
{
	return &float64_msg;
}

FString UROS2Float64Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}