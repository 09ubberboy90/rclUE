// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// geometry_msgs/msg/TwistWithCovariance.msg - do not modify

#include "Msgs/ROS2TwistCov.h"

#include "Kismet/GameplayStatics.h"

void UROS2TwistCovMsg::Init() {
  geometry_msgs__msg__TwistWithCovariance__init(&twist_with_covariance_msg);
}

void UROS2TwistCovMsg::Fini() {
  geometry_msgs__msg__TwistWithCovariance__fini(&twist_with_covariance_msg);
}

const rosidl_message_type_support_t *UROS2TwistCovMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TwistWithCovariance);
}

void UROS2TwistCovMsg::SetMsg(const FROSTwistCov &Inputs) {
  Inputs.SetROS2(twist_with_covariance_msg);
}

void UROS2TwistCovMsg::GetMsg(FROSTwistCov &Outputs) const {
  Outputs.SetFromROS2(twist_with_covariance_msg);
}

void *UROS2TwistCovMsg::Get() { return &twist_with_covariance_msg; }

FString UROS2TwistCovMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}