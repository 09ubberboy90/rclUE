// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_srvs/srv/Empty.srv - do not modify

#include "Srvs/ROS2EmptySrv.h"

const rosidl_service_type_support_t* UROS2EmptySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(std_srvs, srv, Empty);
}

void UROS2EmptySrv::Init()
{
    std_srvs__srv__Empty_Request__init(&Empty_req);
    std_srvs__srv__Empty_Response__init(&Empty_res);
}

void UROS2EmptySrv::Fini()
{
    std_srvs__srv__Empty_Request__fini(&Empty_req);
    std_srvs__srv__Empty_Response__fini(&Empty_res);
}

void UROS2EmptySrv::SetRequest(const FROSEmptyRequest& Request)
{
    Request.SetROS2(Empty_req);
}

void UROS2EmptySrv::GetRequest(FROSEmptyRequest& Request) const
{
    Request.SetFromROS2(Empty_req);
}

void UROS2EmptySrv::SetResponse(const FROSEmptyResponse& Response)
{
    Response.SetROS2(Empty_res);
}

void UROS2EmptySrv::GetResponse(FROSEmptyResponse& Response) const
{
    Response.SetFromROS2(Empty_res);
}

void* UROS2EmptySrv::GetRequest()
{
    return &Empty_req;
}

void* UROS2EmptySrv::GetResponse()
{
    return &Empty_res;
}

FString UROS2EmptySrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2EmptySrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}