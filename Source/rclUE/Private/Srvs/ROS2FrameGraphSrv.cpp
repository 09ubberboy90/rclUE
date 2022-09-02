// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/srv/FrameGraph.srv - do not modify

#include "Srvs/ROS2FrameGraphSrv.h"

const rosidl_service_type_support_t* UROS2FrameGraphSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(tf2_msgs, srv, FrameGraph);
}

void UROS2FrameGraphSrv::Init()
{
    tf2_msgs__srv__FrameGraph_Request__init(&FrameGraph_req);
    tf2_msgs__srv__FrameGraph_Response__init(&FrameGraph_res);
}

void UROS2FrameGraphSrv::Fini()
{
    tf2_msgs__srv__FrameGraph_Request__fini(&FrameGraph_req);
    tf2_msgs__srv__FrameGraph_Response__fini(&FrameGraph_res);
}

void UROS2FrameGraphSrv::SetRequest(const FROSFrameGraphRequest& Request)
{
    Request.SetROS2(FrameGraph_req);
}

void UROS2FrameGraphSrv::GetRequest(FROSFrameGraphRequest& Request) const
{
    Request.SetFromROS2(FrameGraph_req);
}

void UROS2FrameGraphSrv::SetResponse(const FROSFrameGraphResponse& Response)
{
    Response.SetROS2(FrameGraph_res);
}

void UROS2FrameGraphSrv::GetResponse(FROSFrameGraphResponse& Response) const
{
    Response.SetFromROS2(FrameGraph_res);
}

void* UROS2FrameGraphSrv::GetRequest()
{
    return &FrameGraph_req;
}

void* UROS2FrameGraphSrv::GetResponse()
{
    return &FrameGraph_res;
}

FString UROS2FrameGraphSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2FrameGraphSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}