// This file is part of CAF, the C++ Actor Framework. See the file LICENSE in
// the main distribution directory for license terms and copyright or visit
// https://github.com/actor-framework/actor-framework/blob/master/LICENSE.

#pragma once

#include "caf/config.hpp"

namespace caf::net {

using setsockopt_ptr = const char*;
using getsockopt_ptr = char*;
using socket_send_ptr = const char*;
using socket_recv_ptr = char*;
using socket_size_type = unsigned;


} // namespace caf::net
