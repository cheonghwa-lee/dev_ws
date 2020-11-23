// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__BUILDER_HPP_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__BUILDER_HPP_

#include "splash_interfaces/msg/detail/splash_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace splash_interfaces
{

namespace msg
{

namespace builder
{

class Init_SplashMessage_freshness
{
public:
  explicit Init_SplashMessage_freshness(::splash_interfaces::msg::SplashMessage & msg)
  : msg_(msg)
  {}
  ::splash_interfaces::msg::SplashMessage freshness(::splash_interfaces::msg::SplashMessage::_freshness_type arg)
  {
    msg_.freshness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::splash_interfaces::msg::SplashMessage msg_;
};

class Init_SplashMessage_body
{
public:
  explicit Init_SplashMessage_body(::splash_interfaces::msg::SplashMessage & msg)
  : msg_(msg)
  {}
  Init_SplashMessage_freshness body(::splash_interfaces::msg::SplashMessage::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_SplashMessage_freshness(msg_);
  }

private:
  ::splash_interfaces::msg::SplashMessage msg_;
};

class Init_SplashMessage_header
{
public:
  Init_SplashMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SplashMessage_body header(::splash_interfaces::msg::SplashMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SplashMessage_body(msg_);
  }

private:
  ::splash_interfaces::msg::SplashMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::splash_interfaces::msg::SplashMessage>()
{
  return splash_interfaces::msg::builder::Init_SplashMessage_header();
}

}  // namespace splash_interfaces

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__BUILDER_HPP_
