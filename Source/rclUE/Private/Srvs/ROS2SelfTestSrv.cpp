// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/srv/SelfTest.srv - do not modify

#include "Srvs/ROS2SelfTestSrv.h"

const rosidl_service_type_support_t* UROS2SelfTestSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(diagnostic_msgs, srv, SelfTest);
}

void UROS2SelfTestSrv::Init()
{
    diagnostic_msgs__srv__SelfTest_Request__init(&SelfTest_req);
    diagnostic_msgs__srv__SelfTest_Response__init(&SelfTest_res);
}

void UROS2SelfTestSrv::Fini()
{
    diagnostic_msgs__srv__SelfTest_Request__fini(&SelfTest_req);
    diagnostic_msgs__srv__SelfTest_Response__fini(&SelfTest_res);
}

void UROS2SelfTestSrv::SetRequest(const FROSSelfTestRequest& Request)
{
    Request.SetROS2(SelfTest_req);
}

void UROS2SelfTestSrv::GetRequest(FROSSelfTestRequest& Request) const
{
    Request.SetFromROS2(SelfTest_req);
}

void UROS2SelfTestSrv::SetResponse(const FROSSelfTestResponse& Response)
{
    Response.SetROS2(SelfTest_res);
}

void UROS2SelfTestSrv::GetResponse(FROSSelfTestResponse& Response) const
{
    Response.SetFromROS2(SelfTest_res);
}

void* UROS2SelfTestSrv::GetRequest()
{
    return &SelfTest_req;
}

void* UROS2SelfTestSrv::GetResponse()
{
    return &SelfTest_res;
}

FString UROS2SelfTestSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2SelfTestSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}