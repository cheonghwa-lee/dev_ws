// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "torcs_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "torcs_interfaces/msg/detail/torcs_ctrl__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace torcs_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
cdr_serialize(
  const torcs_interfaces::msg::TORCSCtrl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torcs_interfaces::msg::TORCSCtrl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
get_serialized_size(
  const torcs_interfaces::msg::TORCSCtrl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
max_serialized_size_TORCSCtrl(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace torcs_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torcs_interfaces, msg, TORCSCtrl)();

#ifdef __cplusplus
}
#endif

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
