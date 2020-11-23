// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__TRAITS_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__TRAITS_HPP_

#include "torcs_interfaces/msg/detail/torcs_sensors__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torcs_interfaces::msg::TORCSSensors>()
{
  return "torcs_interfaces::msg::TORCSSensors";
}

template<>
inline const char * name<torcs_interfaces::msg::TORCSSensors>()
{
  return "torcs_interfaces/msg/TORCSSensors";
}

template<>
struct has_fixed_size<torcs_interfaces::msg::TORCSSensors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<torcs_interfaces::msg::TORCSSensors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<torcs_interfaces::msg::TORCSSensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__TRAITS_HPP_
