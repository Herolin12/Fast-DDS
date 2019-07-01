// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/**
 * @file SampleLostStatus.hpp
*/

#ifndef _FASTRTPS_SAMPLE_LOST_STATUS_HPP_
#define _FASTRTPS_SAMPLE_LOST_STATUS_HPP_

#include <cstdint>

namespace eprosima {
namespace fastrtps {

//! @brief A struct storing the sample lost status
struct SampleLostStatus
{
    uint32_t total_count = 0;

    uint32_t total_count_change = 0;
};

} //end of namespace fastrtps
} //end of namespace eprosima

#endif // _FASTRTPS_SAMPLE_LOST_STATUS_HPP_