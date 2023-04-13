// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/GetBoolFromId.srv - do not
// modify

#include "Srvs/ROS2GetBoolFromId.h"

const rosidl_service_type_support_t *
UROS2GetBoolFromIdSrv::GetTypeSupport() const {
  return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, GetBoolFromId);
}

void UROS2GetBoolFromIdSrv::Init() {
  ue_msgs__srv__GetBoolFromId_Request__init(&GetBoolFromId_req);
  ue_msgs__srv__GetBoolFromId_Response__init(&GetBoolFromId_res);
}

void UROS2GetBoolFromIdSrv::Fini() {
  ue_msgs__srv__GetBoolFromId_Request__fini(&GetBoolFromId_req);
  ue_msgs__srv__GetBoolFromId_Response__fini(&GetBoolFromId_res);
}

void UROS2GetBoolFromIdSrv::SetRequest(const FROSGetBoolFromIdReq &Request) {
  Request.SetROS2(GetBoolFromId_req);
}

void UROS2GetBoolFromIdSrv::GetRequest(FROSGetBoolFromIdReq &Request) const {
  Request.SetFromROS2(GetBoolFromId_req);
}

void UROS2GetBoolFromIdSrv::SetResponse(const FROSGetBoolFromIdRes &Response) {
  Response.SetROS2(GetBoolFromId_res);
}

void UROS2GetBoolFromIdSrv::GetResponse(FROSGetBoolFromIdRes &Response) const {
  Response.SetFromROS2(GetBoolFromId_res);
}

void *UROS2GetBoolFromIdSrv::GetRequest() { return &GetBoolFromId_req; }

void *UROS2GetBoolFromIdSrv::GetResponse() { return &GetBoolFromId_res; }

FString UROS2GetBoolFromIdSrv::SrvRequestToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}

FString UROS2GetBoolFromIdSrv::SrvResponseToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}