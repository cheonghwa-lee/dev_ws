// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__torcs_interfaces__msg__TORCSSensors __attribute__((deprecated))
#else
# define DEPRECATED__torcs_interfaces__msg__TORCSSensors __declspec(deprecated)
#endif

namespace torcs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TORCSSensors_
{
  using Type = TORCSSensors_<ContainerAllocator>;

  explicit TORCSSensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
      this->current_lap_time = 0.0;
      this->damage = 0.0;
      this->dist_from_start = 0.0;
      this->dist_raced = 0.0;
      this->dist_to_middle = 0.0;
      this->dist_to_left = 0.0;
      this->dist_to_right = 0.0;
      this->fuel = 0.0;
      this->gear = 0;
      this->last_lap_time = 0.0;
      this->race_pos = 0;
      this->rpm = 0.0;
      this->track_pos = 0.0;
      this->z = 0.0;
    }
  }

  explicit TORCSSensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
      this->current_lap_time = 0.0;
      this->damage = 0.0;
      this->dist_from_start = 0.0;
      this->dist_raced = 0.0;
      this->dist_to_middle = 0.0;
      this->dist_to_left = 0.0;
      this->dist_to_right = 0.0;
      this->fuel = 0.0;
      this->gear = 0;
      this->last_lap_time = 0.0;
      this->race_pos = 0;
      this->rpm = 0.0;
      this->track_pos = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_type =
    double;
  _angle_type angle;
  using _current_lap_time_type =
    double;
  _current_lap_time_type current_lap_time;
  using _damage_type =
    double;
  _damage_type damage;
  using _dist_from_start_type =
    double;
  _dist_from_start_type dist_from_start;
  using _dist_raced_type =
    double;
  _dist_raced_type dist_raced;
  using _dist_to_middle_type =
    double;
  _dist_to_middle_type dist_to_middle;
  using _dist_to_left_type =
    double;
  _dist_to_left_type dist_to_left;
  using _dist_to_right_type =
    double;
  _dist_to_right_type dist_to_right;
  using _fuel_type =
    double;
  _fuel_type fuel;
  using _gear_type =
    int8_t;
  _gear_type gear;
  using _last_lap_time_type =
    double;
  _last_lap_time_type last_lap_time;
  using _race_pos_type =
    uint8_t;
  _race_pos_type race_pos;
  using _rpm_type =
    double;
  _rpm_type rpm;
  using _track_pos_type =
    double;
  _track_pos_type track_pos;
  using _wheel_spin_vel_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _wheel_spin_vel_type wheel_spin_vel;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__current_lap_time(
    const double & _arg)
  {
    this->current_lap_time = _arg;
    return *this;
  }
  Type & set__damage(
    const double & _arg)
  {
    this->damage = _arg;
    return *this;
  }
  Type & set__dist_from_start(
    const double & _arg)
  {
    this->dist_from_start = _arg;
    return *this;
  }
  Type & set__dist_raced(
    const double & _arg)
  {
    this->dist_raced = _arg;
    return *this;
  }
  Type & set__dist_to_middle(
    const double & _arg)
  {
    this->dist_to_middle = _arg;
    return *this;
  }
  Type & set__dist_to_left(
    const double & _arg)
  {
    this->dist_to_left = _arg;
    return *this;
  }
  Type & set__dist_to_right(
    const double & _arg)
  {
    this->dist_to_right = _arg;
    return *this;
  }
  Type & set__fuel(
    const double & _arg)
  {
    this->fuel = _arg;
    return *this;
  }
  Type & set__gear(
    const int8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__last_lap_time(
    const double & _arg)
  {
    this->last_lap_time = _arg;
    return *this;
  }
  Type & set__race_pos(
    const uint8_t & _arg)
  {
    this->race_pos = _arg;
    return *this;
  }
  Type & set__rpm(
    const double & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__track_pos(
    const double & _arg)
  {
    this->track_pos = _arg;
    return *this;
  }
  Type & set__wheel_spin_vel(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->wheel_spin_vel = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torcs_interfaces__msg__TORCSSensors
    std::shared_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torcs_interfaces__msg__TORCSSensors
    std::shared_ptr<torcs_interfaces::msg::TORCSSensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TORCSSensors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->current_lap_time != other.current_lap_time) {
      return false;
    }
    if (this->damage != other.damage) {
      return false;
    }
    if (this->dist_from_start != other.dist_from_start) {
      return false;
    }
    if (this->dist_raced != other.dist_raced) {
      return false;
    }
    if (this->dist_to_middle != other.dist_to_middle) {
      return false;
    }
    if (this->dist_to_left != other.dist_to_left) {
      return false;
    }
    if (this->dist_to_right != other.dist_to_right) {
      return false;
    }
    if (this->fuel != other.fuel) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->last_lap_time != other.last_lap_time) {
      return false;
    }
    if (this->race_pos != other.race_pos) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->track_pos != other.track_pos) {
      return false;
    }
    if (this->wheel_spin_vel != other.wheel_spin_vel) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const TORCSSensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TORCSSensors_

// alias to use template instance with default allocator
using TORCSSensors =
  torcs_interfaces::msg::TORCSSensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torcs_interfaces

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_HPP_
