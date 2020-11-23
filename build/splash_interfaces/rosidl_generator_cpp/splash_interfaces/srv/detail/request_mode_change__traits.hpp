// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__TRAITS_HPP_
#define SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__TRAITS_HPP_

#include "splash_interfaces/srv/detail/request_mode_change__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::RequestModeChange_Request>()
{
  return "splash_interfaces::srv::RequestModeChange_Request";
}

template<>
inline const char * name<splash_interfaces::srv::RequestModeChange_Request>()
{
  return "splash_interfaces/srv/RequestModeChange_Request";
}

template<>
struct has_fixed_size<splash_interfaces::srv::RequestModeChange_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<splash_interfaces::srv::RequestModeChange_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<splash_interfaces::srv::RequestModeChange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::RequestModeChange_Response>()
{
  return "splash_interfaces::srv::RequestModeChange_Response";
}

template<>
inline const char * name<splash_interfaces::srv::RequestModeChange_Response>()
{
  return "splash_interfaces/srv/RequestModeChange_Response";
}

template<>
struct has_fixed_size<splash_interfaces::srv::RequestModeChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<splash_interfaces::srv::RequestModeChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<splash_interfaces::srv::RequestModeChange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<splash_interfaces::srv::RequestModeChange>()
{
  return "splash_interfaces::srv::RequestModeChange";
}

template<>
inline const char * name<splash_interfaces::srv::RequestModeChange>()
{
  return "splash_interfaces/srv/RequestModeChange";
}

template<>
struct has_fixed_size<splash_interfaces::srv::RequestModeChange>
  : std::integral_constant<
    bool,
    has_fixed_size<splash_interfaces::srv::RequestModeChange_Request>::value &&
    has_fixed_size<splash_interfaces::srv::RequestModeChange_Response>::value
  >
{
};

template<>
struct has_bounded_size<splash_interfaces::srv::RequestModeChange>
  : std::integral_constant<
    bool,
    has_bounded_size<splash_interfaces::srv::RequestModeChange_Request>::value &&
    has_bounded_size<splash_interfaces::srv::RequestModeChange_Response>::value
  >
{
};

template<>
struct is_service<splash_interfaces::srv::RequestModeChange>
  : std::true_type
{
};

template<>
struct is_service_request<splash_interfaces::srv::RequestModeChange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<splash_interfaces::srv::RequestModeChange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__TRAITS_HPP_
