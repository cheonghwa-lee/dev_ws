// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__TRAITS_HPP_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__TRAITS_HPP_

#include "splash_interfaces/msg/detail/splash_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::msg::SplashMessage>()
{
  return "splash_interfaces::msg::SplashMessage";
}

template<>
inline const char * name<splash_interfaces::msg::SplashMessage>()
{
  return "splash_interfaces/msg/SplashMessage";
}

template<>
struct has_fixed_size<splash_interfaces::msg::SplashMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<splash_interfaces::msg::SplashMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<splash_interfaces::msg::SplashMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__TRAITS_HPP_
