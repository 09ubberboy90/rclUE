// Copyright 2016-2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW_FASTRTPS_CPP__MESSAGETYPESUPPORT_HPP_
#define RMW_FASTRTPS_CPP__MESSAGETYPESUPPORT_HPP_

#include "TypeSupport.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"

namespace rmw_fastrtps_cpp
{

class MessageTypeSupport : public TypeSupport
{
public:
    explicit MessageTypeSupport(const message_type_support_callbacks_t* members);
};

}    // namespace rmw_fastrtps_cpp

#endif    // RMW_FASTRTPS_CPP__MESSAGETYPESUPPORT_HPP_
