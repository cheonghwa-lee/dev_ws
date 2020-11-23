// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from splash_interfaces:srv/UnregisterMode.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__TRAITS_HPP_
#define SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__TRAITS_HPP_

#include "splash_interfaces/srv/detail/unregister_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::UnregisterMode_Request>()
{
  return "splash_interfaces::srv::UnregisterMode_Request";
}

template<>
inline const char * name<splash_interfaces::srv::UnregisterMode_Request>()
{
  return "splash_interfaces/srv/UnregisterMode_Request";
}

template<>
struct has_fixed_size<splash_interfaces::srv::UnregisterMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<splash_interfaces::srv::UnregisterMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<splash_interfaces::srv::UnregisterMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::UnregisterMode_Response>()
{
  return "splash_interfaces::srv::UnregisterMode_Response";
}

template<>
inline const char * name<splash_interfaces::srv::UnregisterMode_Response>()
{
  return "splash_interfaces/srv/UnregisterMode_Response";
}

template<>
struct has_fixed_size<splash_interfaces::srv::UnregisterMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<splash_interfaces::srv::UnregisterMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<splash_interfaces::srv::UnregisterMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::UnregisterMode>()
{
  return "splash_interfaces::srv::UnregisterMode";
}

template<>
inline const char * name<splash_interfaces::srv::UnregisterMode>()
{
  return "splash_interfaces/srv/UnregisterMode";
}

template<>
struct has_fixed_size<splash_interfaces::srv::UnregisterMode>
  : std::integral_constant<
    bool,
    has_fixed_size<splash_interfaces::srv::UnregisterMode_Request>::value &&
    has_fixed_size<splash_interfaces::srv::UnregisterMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<splash_interfaces::srv::UnregisterMode>
  : std::integral_constant<
    bool,
    has_bounded_size<splash_interfaces::srv::UnregisterMode_Request>::value &&
    has_bounded_size<splash_interfaces::srv::UnregisterMode_Response>::value
  >
{
};

template<>
struct is_service<splash_interfaces::srv::UnregisterMode>
  : std::true_type
{
};

template<>
struct is_service_request<splash_interfaces::srv::UnregisterMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<splash_interfaces::srv::UnregisterMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__TRAITS_HPP_
