// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/Float32.msg - do not modify

#include "Msgs/ROS2Float32Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Float32Msg::Init()
{
	example_interfaces__msg__Float32__init(&float32_msg);
}

void UROS2Float32Msg::Fini()
{
	example_interfaces__msg__Float32__fini(&float32_msg);
}

const rosidl_message_type_support_t* UROS2Float32Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Float32);
}

void UROS2Float32Msg::SetMsg(const FROSFloat32& Inputs)
{
    Inputs.SetROS2(float32_msg);
}

void UROS2Float32Msg::GetMsg(FROSFloat32& Outputs) const
{
    Outputs.SetFromROS2(float32_msg);
}

void* UROS2Float32Msg::Get()
{
	return &float32_msg;
}

FString UROS2Float32Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}