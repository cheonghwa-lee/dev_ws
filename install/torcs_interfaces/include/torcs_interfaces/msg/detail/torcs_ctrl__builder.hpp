// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__BUILDER_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__BUILDER_HPP_

#include "torcs_interfaces/msg/detail/torcs_ctrl__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torcs_interfaces
{

namespace msg
{

namespace builder
{

class Init_TORCSCtrl_meta
{
public:
  explicit Init_TORCSCtrl_meta(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  ::torcs_interfaces::msg::TORCSCtrl meta(::torcs_interfaces::msg::TORCSCtrl::_meta_type arg)
  {
    msg_.meta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_focus
{
public:
  explicit Init_TORCSCtrl_focus(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_meta focus(::torcs_interfaces::msg::TORCSCtrl::_focus_type arg)
  {
    msg_.focus = std::move(arg);
    return Init_TORCSCtrl_meta(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_steering
{
public:
  explicit Init_TORCSCtrl_steering(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_focus steering(::torcs_interfaces::msg::TORCSCtrl::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_TORCSCtrl_focus(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_gear
{
public:
  explicit Init_TORCSCtrl_gear(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_steering gear(::torcs_interfaces::msg::TORCSCtrl::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_TORCSCtrl_steering(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_clutch
{
public:
  explicit Init_TORCSCtrl_clutch(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_gear clutch(::torcs_interfaces::msg::TORCSCtrl::_clutch_type arg)
  {
    msg_.clutch = std::move(arg);
    return Init_TORCSCtrl_gear(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_brake
{
public:
  explicit Init_TORCSCtrl_brake(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_clutch brake(::torcs_interfaces::msg::TORCSCtrl::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_TORCSCtrl_clutch(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_accel
{
public:
  explicit Init_TORCSCtrl_accel(::torcs_interfaces::msg::TORCSCtrl & msg)
  : msg_(msg)
  {}
  Init_TORCSCtrl_brake accel(::torcs_interfaces::msg::TORCSCtrl::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_TORCSCtrl_brake(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

class Init_TORCSCtrl_header
{
public:
  Init_TORCSCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TORCSCtrl_accel header(::torcs_interfaces::msg::TORCSCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TORCSCtrl_accel(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torcs_interfaces::msg::TORCSCtrl>()
{
  return torcs_interfaces::msg::builder::Init_TORCSCtrl_header();
}

}  // namespace torcs_interfaces

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__BUILDER_HPP_
