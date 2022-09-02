// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Vector3.msg - do not modify

#include "Msgs/ROS2Vector3Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Vector3Msg::Init()
{
	geometry_msgs__msg__Vector3__init(&vector3_msg);
}

void UROS2Vector3Msg::Fini()
{
	geometry_msgs__msg__Vector3__fini(&vector3_msg);
}

const rosidl_message_type_support_t* UROS2Vector3Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3);
}

void UROS2Vector3Msg::SetMsg(const FROSVector3& Inputs)
{
    Inputs.SetROS2(vector3_msg);
}

void UROS2Vector3Msg::GetMsg(FROSVector3& Outputs) const
{
    Outputs.SetFromROS2(vector3_msg);
}

void* UROS2Vector3Msg::Get()
{
	return &vector3_msg;
}

FString UROS2Vector3Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}