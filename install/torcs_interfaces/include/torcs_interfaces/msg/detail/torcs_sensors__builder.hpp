// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__BUILDER_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__BUILDER_HPP_

#include "torcs_interfaces/msg/detail/torcs_sensors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torcs_interfaces
{

namespace msg
{

namespace builder
{

class Init_TORCSSensors_z
{
public:
  explicit Init_TORCSSensors_z(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  ::torcs_interfaces::msg::TORCSSensors z(::torcs_interfaces::msg::TORCSSensors::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_wheel_spin_vel
{
public:
  explicit Init_TORCSSensors_wheel_spin_vel(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_z wheel_spin_vel(::torcs_interfaces::msg::TORCSSensors::_wheel_spin_vel_type arg)
  {
    msg_.wheel_spin_vel = std::move(arg);
    return Init_TORCSSensors_z(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_track_pos
{
public:
  explicit Init_TORCSSensors_track_pos(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_wheel_spin_vel track_pos(::torcs_interfaces::msg::TORCSSensors::_track_pos_type arg)
  {
    msg_.track_pos = std::move(arg);
    return Init_TORCSSensors_wheel_spin_vel(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_rpm
{
public:
  explicit Init_TORCSSensors_rpm(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_track_pos rpm(::torcs_interfaces::msg::TORCSSensors::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_TORCSSensors_track_pos(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_race_pos
{
public:
  explicit Init_TORCSSensors_race_pos(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_rpm race_pos(::torcs_interfaces::msg::TORCSSensors::_race_pos_type arg)
  {
    msg_.race_pos = std::move(arg);
    return Init_TORCSSensors_rpm(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_last_lap_time
{
public:
  explicit Init_TORCSSensors_last_lap_time(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_race_pos last_lap_time(::torcs_interfaces::msg::TORCSSensors::_last_lap_time_type arg)
  {
    msg_.last_lap_time = std::move(arg);
    return Init_TORCSSensors_race_pos(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_gear
{
public:
  explicit Init_TORCSSensors_gear(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_last_lap_time gear(::torcs_interfaces::msg::TORCSSensors::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_TORCSSensors_last_lap_time(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_fuel
{
public:
  explicit Init_TORCSSensors_fuel(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_gear fuel(::torcs_interfaces::msg::TORCSSensors::_fuel_type arg)
  {
    msg_.fuel = std::move(arg);
    return Init_TORCSSensors_gear(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_dist_to_right
{
public:
  explicit Init_TORCSSensors_dist_to_right(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_fuel dist_to_right(::torcs_interfaces::msg::TORCSSensors::_dist_to_right_type arg)
  {
    msg_.dist_to_right = std::move(arg);
    return Init_TORCSSensors_fuel(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_dist_to_left
{
public:
  explicit Init_TORCSSensors_dist_to_left(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_dist_to_right dist_to_left(::torcs_interfaces::msg::TORCSSensors::_dist_to_left_type arg)
  {
    msg_.dist_to_left = std::move(arg);
    return Init_TORCSSensors_dist_to_right(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_dist_to_middle
{
public:
  explicit Init_TORCSSensors_dist_to_middle(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_dist_to_left dist_to_middle(::torcs_interfaces::msg::TORCSSensors::_dist_to_middle_type arg)
  {
    msg_.dist_to_middle = std::move(arg);
    return Init_TORCSSensors_dist_to_left(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_dist_raced
{
public:
  explicit Init_TORCSSensors_dist_raced(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_dist_to_middle dist_raced(::torcs_interfaces::msg::TORCSSensors::_dist_raced_type arg)
  {
    msg_.dist_raced = std::move(arg);
    return Init_TORCSSensors_dist_to_middle(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_dist_from_start
{
public:
  explicit Init_TORCSSensors_dist_from_start(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_dist_raced dist_from_start(::torcs_interfaces::msg::TORCSSensors::_dist_from_start_type arg)
  {
    msg_.dist_from_start = std::move(arg);
    return Init_TORCSSensors_dist_raced(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_damage
{
public:
  explicit Init_TORCSSensors_damage(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_dist_from_start damage(::torcs_interfaces::msg::TORCSSensors::_damage_type arg)
  {
    msg_.damage = std::move(arg);
    return Init_TORCSSensors_dist_from_start(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_current_lap_time
{
public:
  explicit Init_TORCSSensors_current_lap_time(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_damage current_lap_time(::torcs_interfaces::msg::TORCSSensors::_current_lap_time_type arg)
  {
    msg_.current_lap_time = std::move(arg);
    return Init_TORCSSensors_damage(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_angle
{
public:
  explicit Init_TORCSSensors_angle(::torcs_interfaces::msg::TORCSSensors & msg)
  : msg_(msg)
  {}
  Init_TORCSSensors_current_lap_time angle(::torcs_interfaces::msg::TORCSSensors::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_TORCSSensors_current_lap_time(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

class Init_TORCSSensors_header
{
public:
  Init_TORCSSensors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TORCSSensors_angle header(::torcs_interfaces::msg::TORCSSensors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TORCSSensors_angle(msg_);
  }

private:
  ::torcs_interfaces::msg::TORCSSensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torcs_interfaces::msg::TORCSSensors>()
{
  return torcs_interfaces::msg::builder::Init_TORCSSensors_header();
}

}  // namespace torcs_interfaces

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__BUILDER_HPP_
