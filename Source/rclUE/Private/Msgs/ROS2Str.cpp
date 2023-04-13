// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/String.msg - do
// not modify

#include "Msgs/ROS2Str.h"

#include "Kismet/GameplayStatics.h"

void UROS2StrMsg::Init() { example_interfaces__msg__String__init(&string_msg); }

void UROS2StrMsg::Fini() { example_interfaces__msg__String__fini(&string_msg); }

const rosidl_message_type_support_t *UROS2StrMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, String);
}

void UROS2StrMsg::SetMsg(const FROSStr &Inputs) { Inputs.SetROS2(string_msg); }

void UROS2StrMsg::GetMsg(FROSStr &Outputs) const {
  Outputs.SetFromROS2(string_msg);
}

void *UROS2StrMsg::Get() { return &string_msg; }

FString UROS2StrMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}