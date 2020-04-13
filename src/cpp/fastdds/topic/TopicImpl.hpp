// Copyright 2020 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*
 * TopicImpl.hpp
 *
 */

#ifndef _FASTDDS_TOPICIMPL_HPP_
#define _FASTDDS_TOPICIMPL_HPP_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

// #include <fastdds/dds/topic/TopicListener.hpp>
#include <fastdds/dds/topic/qos/TopicQos.hpp>
#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastrtps/types/TypesBase.h>

using eprosima::fastrtps::types::ReturnCode_t;

namespace eprosima {
namespace fastdds {
namespace dds {

class DomainParticipantImpl;
class DomainParticipant;
class TopicListener;
class Topic;

class TopicImpl
{
    friend class DomainParticipantImpl;

    TopicImpl(
            DomainParticipantImpl* p,
            TypeSupport type_support,
            const TopicQos& qos,
            TopicListener* listen);

public:

    static ReturnCode_t check_qos(
            const TopicQos& qos);

    static bool can_qos_be_updated(
            const TopicQos& to,
            const TopicQos& from);

    static void set_qos(
            TopicQos& to,
            const TopicQos& from,
            bool first_time);

    virtual ~TopicImpl();

    const TopicQos& get_qos() const;

    ReturnCode_t set_qos(
            const TopicQos& qos);

    const TopicListener* get_listener() const;

    ReturnCode_t set_listener(
            TopicListener* listener);

    DomainParticipant* get_participant() const;

    const Topic* get_topic() const;

    const TypeSupport& get_type() const;

    // TODO (Miguel C)
    // const InstanceHandle_t& get_instance_handle() const;

private:

    DomainParticipantImpl* participant_;
    TypeSupport type_support_;
    TopicQos qos_;
    TopicListener* listener_;
    Topic* user_topic_;
    fastrtps::rtps::InstanceHandle_t handle_;

};

} // dds
} // fastdds
} // eprosima

#endif
#endif /* _FASTDDS_TOPICIMPL_HPP_ */
