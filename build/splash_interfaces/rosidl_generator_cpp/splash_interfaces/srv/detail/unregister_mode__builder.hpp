// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from splash_interfaces:srv/UnregisterMode.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__BUILDER_HPP_
#define SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__BUILDER_HPP_

#include "splash_interfaces/srv/detail/unregister_mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace splash_interfaces
{

namespace srv
{

namespace builder
{

class Init_UnregisterMode_Request_factory
{
public:
  Init_UnregisterMode_Request_factory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::splash_interfaces::srv::UnregisterMode_Request factory(::splash_interfaces::srv::UnregisterMode_Request::_factory_type arg)
  {
    msg_.factory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::splash_interfaces::srv::UnregisterMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::splash_interfaces::srv::UnregisterMode_Request>()
{
  return splash_interfaces::srv::builder::Init_UnregisterMode_Request_factory();
}

}  // namespace splash_interfaces


namespace splash_interfaces
{

namespace srv
{

namespace builder
{

class Init_UnregisterMode_Response_ok
{
public:
  Init_UnregisterMode_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::splash_interfaces::srv::UnregisterMode_Response ok(::splash_interfaces::srv::UnregisterMode_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::splash_interfaces::srv::UnregisterMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::splash_interfaces::srv::UnregisterMode_Response>()
{
  return splash_interfaces::srv::builder::Init_UnregisterMode_Response_ok();
}

}  // namespace splash_interfaces

#endif  // SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__BUILDER_HPP_
