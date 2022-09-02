// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Inertia.msg - do not modify

#include "Msgs/ROS2InertiaMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2InertiaMsg::Init()
{
	geometry_msgs__msg__Inertia__init(&inertia_msg);
}

void UROS2InertiaMsg::Fini()
{
	geometry_msgs__msg__Inertia__fini(&inertia_msg);
}

const rosidl_message_type_support_t* UROS2InertiaMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Inertia);
}

void UROS2InertiaMsg::SetMsg(const FROSInertia& Inputs)
{
    Inputs.SetROS2(inertia_msg);
}

void UROS2InertiaMsg::GetMsg(FROSInertia& Outputs) const
{
    Outputs.SetFromROS2(inertia_msg);
}

void* UROS2InertiaMsg::Get()
{
	return &inertia_msg;
}

FString UROS2InertiaMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}