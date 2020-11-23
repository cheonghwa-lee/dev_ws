// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_HPP_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_HPP_

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
# define DEPRECATED__torcs_interfaces__msg__TORCSCtrl __attribute__((deprecated))
#else
# define DEPRECATED__torcs_interfaces__msg__TORCSCtrl __declspec(deprecated)
#endif

namespace torcs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TORCSCtrl_
{
  using Type = TORCSCtrl_<ContainerAllocator>;

  explicit TORCSCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel = 0.0;
      this->brake = 0.0;
      this->clutch = 0.0;
      this->gear = 0;
      this->steering = 0.0;
      this->focus = 0.0;
      this->meta = 0;
    }
  }

  explicit TORCSCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel = 0.0;
      this->brake = 0.0;
      this->clutch = 0.0;
      this->gear = 0;
      this->steering = 0.0;
      this->focus = 0.0;
      this->meta = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _accel_type =
    double;
  _accel_type accel;
  using _brake_type =
    double;
  _brake_type brake;
  using _clutch_type =
    double;
  _clutch_type clutch;
  using _gear_type =
    int8_t;
  _gear_type gear;
  using _steering_type =
    double;
  _steering_type steering;
  using _focus_type =
    double;
  _focus_type focus;
  using _meta_type =
    uint8_t;
  _meta_type meta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__accel(
    const double & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__clutch(
    const double & _arg)
  {
    this->clutch = _arg;
    return *this;
  }
  Type & set__gear(
    const int8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__focus(
    const double & _arg)
  {
    this->focus = _arg;
    return *this;
  }
  Type & set__meta(
    const uint8_t & _arg)
  {
    this->meta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torcs_interfaces__msg__TORCSCtrl
    std::shared_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torcs_interfaces__msg__TORCSCtrl
    std::shared_ptr<torcs_interfaces::msg::TORCSCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TORCSCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->clutch != other.clutch) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->focus != other.focus) {
      return false;
    }
    if (this->meta != other.meta) {
      return false;
    }
    return true;
  }
  bool operator!=(const TORCSCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TORCSCtrl_

// alias to use template instance with default allocator
using TORCSCtrl =
  torcs_interfaces::msg::TORCSCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torcs_interfaces

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_HPP_
