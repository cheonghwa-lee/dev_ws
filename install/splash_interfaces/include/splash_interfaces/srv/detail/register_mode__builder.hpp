// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__BUILDER_HPP_
#define SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__BUILDER_HPP_

#include "splash_interfaces/srv/detail/register_mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace splash_interfaces
{

namespace srv
{

namespace builder
{

class Init_RegisterMode_Request_name_space
{
public:
  explicit Init_RegisterMode_Request_name_space(::splash_interfaces::srv::RegisterMode_Request & msg)
  : msg_(msg)
  {}
  ::splash_interfaces::srv::RegisterMode_Request name_space(::splash_interfaces::srv::RegisterMode_Request::_name_space_type arg)
  {
    msg_.name_space = std::move(arg);
    return std::move(msg_);
  }

private:
  ::splash_interfaces::srv::RegisterMode_Request msg_;
};

class Init_RegisterMode_Request_mode_configuration
{
public:
  explicit Init_RegisterMode_Request_mode_configuration(::splash_interfaces::srv::RegisterMode_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterMode_Request_name_space mode_configuration(::splash_interfaces::srv::RegisterMode_Request::_mode_configuration_type arg)
  {
    msg_.mode_configuration = std::move(arg);
    return Init_RegisterMode_Request_name_space(msg_);
  }

private:
  ::splash_interfaces::srv::RegisterMode_Request msg_;
};

class Init_RegisterMode_Request_factory
{
public:
  Init_RegisterMode_Request_factory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterMode_Request_mode_configuration factory(::splash_interfaces::srv::RegisterMode_Request::_factory_type arg)
  {
    msg_.factory = std::move(arg);
    return Init_RegisterMode_Request_mode_configuration(msg_);
  }

private:
  ::splash_interfaces::srv::RegisterMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::splash_interfaces::srv::RegisterMode_Request>()
{
  return splash_interfaces::srv::builder::Init_RegisterMode_Request_factory();
}

}  // namespace splash_interfaces


namespace splash_interfaces
{

namespace srv
{

namespace builder
{

class Init_RegisterMode_Response_ok
{
public:
  Init_RegisterMode_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::splash_interfaces::srv::RegisterMode_Response ok(::splash_interfaces::srv::RegisterMode_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::splash_interfaces::srv::RegisterMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::splash_interfaces::srv::RegisterMode_Response>()
{
  return splash_interfaces::srv::builder::Init_RegisterMode_Response_ok();
}

}  // namespace splash_interfaces

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__BUILDER_HPP_
