// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "splash_interfaces/msg/detail/splash_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace splash_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SplashMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) splash_interfaces::msg::SplashMessage(_init);
}

void SplashMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<splash_interfaces::msg::SplashMessage *>(message_memory);
  typed_message->~SplashMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SplashMessage_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces::msg::SplashMessage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces::msg::SplashMessage, body),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "freshness",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces::msg::SplashMessage, freshness),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SplashMessage_message_members = {
  "splash_interfaces::msg",  // message namespace
  "SplashMessage",  // message name
  3,  // number of fields
  sizeof(splash_interfaces::msg::SplashMessage),
  SplashMessage_message_member_array,  // message members
  SplashMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  SplashMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SplashMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SplashMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace splash_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<splash_interfaces::msg::SplashMessage>()
{
  return &::splash_interfaces::msg::rosidl_typesupport_introspection_cpp::SplashMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, splash_interfaces, msg, SplashMessage)() {
  return &::splash_interfaces::msg::rosidl_typesupport_introspection_cpp::SplashMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
