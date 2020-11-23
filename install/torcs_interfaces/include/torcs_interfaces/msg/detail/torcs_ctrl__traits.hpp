// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__TRAITS_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__TRAITS_HPP_

#include "torcs_interfaces/msg/detail/torcs_ctrl__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torcs_interfaces::msg::TORCSCtrl>()
{
  return "torcs_interfaces::msg::TORCSCtrl";
}

template<>
inline const char * name<torcs_interfaces::msg::TORCSCtrl>()
{
  return "torcs_interfaces/msg/TORCSCtrl";
}

template<>
struct has_fixed_size<torcs_interfaces::msg::TORCSCtrl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<torcs_interfaces::msg::TORCSCtrl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<torcs_interfaces::msg::TORCSCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__TRAITS_HPP_
