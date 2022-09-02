// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/Odometry.msg - do not modify

#include "Msgs/ROS2OdometryMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2OdometryMsg::Init()
{
	nav_msgs__msg__Odometry__init(&odometry_msg);
}

void UROS2OdometryMsg::Fini()
{
	nav_msgs__msg__Odometry__fini(&odometry_msg);
}

const rosidl_message_type_support_t* UROS2OdometryMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry);
}

void UROS2OdometryMsg::SetMsg(const FROSOdometry& Inputs)
{
    Inputs.SetROS2(odometry_msg);
}

void UROS2OdometryMsg::GetMsg(FROSOdometry& Outputs) const
{
    Outputs.SetFromROS2(odometry_msg);
}

void* UROS2OdometryMsg::Get()
{
	return &odometry_msg;
}

FString UROS2OdometryMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}