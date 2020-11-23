// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "splash_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "splash_interfaces/msg/detail/splash_message__struct.hpp"

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

namespace splash_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_serialize(
  const splash_interfaces::msg::SplashMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  splash_interfaces::msg::SplashMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
get_serialized_size(
  const splash_interfaces::msg::SplashMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
max_serialized_size_SplashMessage(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace splash_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, msg, SplashMessage)();

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
