// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_

#include "rosidl_runtime_cpp/message_initialization.hpp"
#include "ue_msgs/srv/detail/set_entity_state__struct.hpp"

#include <algorithm>
#include <utility>

namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Request_state
{
public:
    Init_SetEntityState_Request_state() : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
    {
    }
    ::ue_msgs::srv::SetEntityState_Request state(::ue_msgs::srv::SetEntityState_Request::_state_type arg)
    {
        msg_.state = std::move(arg);
        return std::move(msg_);
    }

private:
    ::ue_msgs::srv::SetEntityState_Request msg_;
};

}    // namespace builder

}    // namespace srv

template<typename MessageType>
auto build();

template<>
inline auto build<::ue_msgs::srv::SetEntityState_Request>()
{
    return ue_msgs::srv::builder::Init_SetEntityState_Request_state();
}

}    // namespace ue_msgs

namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Response_success
{
public:
    Init_SetEntityState_Response_success() : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
    {
    }
    ::ue_msgs::srv::SetEntityState_Response success(::ue_msgs::srv::SetEntityState_Response::_success_type arg)
    {
        msg_.success = std::move(arg);
        return std::move(msg_);
    }

private:
    ::ue_msgs::srv::SetEntityState_Response msg_;
};

}    // namespace builder

}    // namespace srv

template<typename MessageType>
auto build();

template<>
inline auto build<::ue_msgs::srv::SetEntityState_Response>()
{
    return ue_msgs::srv::builder::Init_SetEntityState_Response_success();
}

}    // namespace ue_msgs

#endif    // UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_
