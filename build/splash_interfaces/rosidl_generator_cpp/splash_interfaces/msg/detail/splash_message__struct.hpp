// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_HPP_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_HPP_

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
# define DEPRECATED__splash_interfaces__msg__SplashMessage __attribute__((deprecated))
#else
# define DEPRECATED__splash_interfaces__msg__SplashMessage __declspec(deprecated)
#endif

namespace splash_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SplashMessage_
{
  using Type = SplashMessage_<ContainerAllocator>;

  explicit SplashMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body = "";
      this->freshness = 0;
    }
  }

  explicit SplashMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    body(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body = "";
      this->freshness = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _body_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _body_type body;
  using _freshness_type =
    uint16_t;
  _freshness_type freshness;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__body(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->body = _arg;
    return *this;
  }
  Type & set__freshness(
    const uint16_t & _arg)
  {
    this->freshness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    splash_interfaces::msg::SplashMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const splash_interfaces::msg::SplashMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::msg::SplashMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::msg::SplashMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__splash_interfaces__msg__SplashMessage
    std::shared_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__splash_interfaces__msg__SplashMessage
    std::shared_ptr<splash_interfaces::msg::SplashMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SplashMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->body != other.body) {
      return false;
    }
    if (this->freshness != other.freshness) {
      return false;
    }
    return true;
  }
  bool operator!=(const SplashMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SplashMessage_

// alias to use template instance with default allocator
using SplashMessage =
  splash_interfaces::msg::SplashMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace splash_interfaces

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_HPP_
