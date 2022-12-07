// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from std_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "std_msgs/msg/detail/float64__struct.hpp"
#include "string"
#include "vector"

namespace std_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Float64_init_function(void* message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
    new (message_memory) std_msgs::msg::Float64(_init);
}

void Float64_fini_function(void* message_memory)
{
    auto typed_message = static_cast<std_msgs::msg::Float64*>(message_memory);
    typed_message->~Float64();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Float64_message_member_array[1] = {{
    "data",                                                     // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,    // type
    0,                                                          // upper bound of string
    nullptr,                                                    // members of sub message
    false,                                                      // is array
    0,                                                          // array size
    false,                                                      // is upper bound
    offsetof(std_msgs::msg::Float64, data),                     // bytes offset in struct
    nullptr,                                                    // default value
    nullptr,                                                    // size() function pointer
    nullptr,                                                    // get_const(index) function pointer
    nullptr,                                                    // get(index) function pointer
    nullptr,                                                    // fetch(index, &value) function pointer
    nullptr,                                                    // assign(index, value) function pointer
    nullptr                                                     // resize(index) function pointer
}};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Float64_message_members = {
    "std_msgs::msg",    // message namespace
    "Float64",          // message name
    1,                  // number of fields
    sizeof(std_msgs::msg::Float64),
    Float64_message_member_array,    // message members
    Float64_init_function,           // function to initialize message memory (memory has to be allocated)
    Float64_fini_function            // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Float64_message_type_support_handle = {
    ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    &Float64_message_members,
    get_message_typesupport_handle_function,
};

}    // namespace rosidl_typesupport_introspection_cpp

}    // namespace msg

}    // namespace std_msgs

namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t*
get_message_type_support_handle<std_msgs::msg::Float64>()
{
    return &::std_msgs::msg::rosidl_typesupport_introspection_cpp::Float64_message_type_support_handle;
}

}    // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

    ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
    const rosidl_message_type_support_t* ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp,
                                                                                           std_msgs,
                                                                                           msg,
                                                                                           Float64)()
    {
        return &::std_msgs::msg::rosidl_typesupport_introspection_cpp::Float64_message_type_support_handle;
    }

#ifdef __cplusplus
}
#endif
