// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Twist.msg - do not
// modify

#include "Msgs/ROS2Twist.h"

#include "Kismet/GameplayStatics.h"

void UROS2TwistMsg::Init() { geometry_msgs__msg__Twist__init(&twist_msg); }

void UROS2TwistMsg::Fini() { geometry_msgs__msg__Twist__fini(&twist_msg); }

const rosidl_message_type_support_t *UROS2TwistMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist);
}

void UROS2TwistMsg::SetMsg(const FROSTwist &Inputs) {
  Inputs.SetROS2(twist_msg);
}

void UROS2TwistMsg::GetMsg(FROSTwist &Outputs) const {
  Outputs.SetFromROS2(twist_msg);
}

void *UROS2TwistMsg::Get() { return &twist_msg; }

FString UROS2TwistMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}