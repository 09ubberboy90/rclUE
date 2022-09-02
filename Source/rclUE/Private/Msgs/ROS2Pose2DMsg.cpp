// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Pose2D.msg - do not modify

#include "Msgs/ROS2Pose2DMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Pose2DMsg::Init()
{
	geometry_msgs__msg__Pose2D__init(&pose2_d_msg);
}

void UROS2Pose2DMsg::Fini()
{
	geometry_msgs__msg__Pose2D__fini(&pose2_d_msg);
}

const rosidl_message_type_support_t* UROS2Pose2DMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Pose2D);
}

void UROS2Pose2DMsg::SetMsg(const FROSPose2D& Inputs)
{
    Inputs.SetROS2(pose2_d_msg);
}

void UROS2Pose2DMsg::GetMsg(FROSPose2D& Outputs) const
{
    Outputs.SetFromROS2(pose2_d_msg);
}

void* UROS2Pose2DMsg::Get()
{
	return &pose2_d_msg;
}

FString UROS2Pose2DMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}