// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_HPP_
#define SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__splash_interfaces__srv__RequestModeChange_Request __attribute__((deprecated))
#else
# define DEPRECATED__splash_interfaces__srv__RequestModeChange_Request __declspec(deprecated)
#endif

namespace splash_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestModeChange_Request_
{
  using Type = RequestModeChange_Request_<ContainerAllocator>;

  explicit RequestModeChange_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->factory = "";
      this->event = "";
    }
  }

  explicit RequestModeChange_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : factory(_alloc),
    event(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->factory = "";
      this->event = "";
    }
  }

  // field types and members
  using _factory_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _factory_type factory;
  using _event_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _event_type event;

  // setters for named parameter idiom
  Type & set__factory(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->factory = _arg;
    return *this;
  }
  Type & set__event(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__splash_interfaces__srv__RequestModeChange_Request
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__splash_interfaces__srv__RequestModeChange_Request
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestModeChange_Request_ & other) const
  {
    if (this->factory != other.factory) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestModeChange_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestModeChange_Request_

// alias to use template instance with default allocator
using RequestModeChange_Request =
  splash_interfaces::srv::RequestModeChange_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace splash_interfaces


#ifndef _WIN32
# define DEPRECATED__splash_interfaces__srv__RequestModeChange_Response __attribute__((deprecated))
#else
# define DEPRECATED__splash_interfaces__srv__RequestModeChange_Response __declspec(deprecated)
#endif

namespace splash_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestModeChange_Response_
{
  using Type = RequestModeChange_Response_<ContainerAllocator>;

  explicit RequestModeChange_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit RequestModeChange_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__splash_interfaces__srv__RequestModeChange_Response
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__splash_interfaces__srv__RequestModeChange_Response
    std::shared_ptr<splash_interfaces::srv::RequestModeChange_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestModeChange_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestModeChange_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestModeChange_Response_

// alias to use template instance with default allocator
using RequestModeChange_Response =
  splash_interfaces::srv::RequestModeChange_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace splash_interfaces

namespace splash_interfaces
{

namespace srv
{

struct RequestModeChange
{
  using Request = splash_interfaces::srv::RequestModeChange_Request;
  using Response = splash_interfaces::srv::RequestModeChange_Response;
};

}  // namespace srv

}  // namespace splash_interfaces

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_HPP_
