// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/srv/detail/register_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "splash_interfaces/srv/detail/register_mode__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace splash_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_serialize(
  const splash_interfaces::srv::RegisterMode_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: factory
  cdr << ros_message.factory;
  // Member: mode_configuration
  cdr << ros_message.mode_configuration;
  // Member: name_space
  cdr << ros_message.name_space;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  splash_interfaces::srv::RegisterMode_Request & ros_message)
{
  // Member: factory
  cdr >> ros_message.factory;

  // Member: mode_configuration
  cdr >> ros_message.mode_configuration;

  // Member: name_space
  cdr >> ros_message.name_space;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
get_serialized_size(
  const splash_interfaces::srv::RegisterMode_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: factory
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.factory.size() + 1);
  // Member: mode_configuration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mode_configuration.size() + 1);
  // Member: name_space
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name_space.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
max_serialized_size_RegisterMode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: factory
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: mode_configuration
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: name_space
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RegisterMode_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<splash_interfaces::srv::RegisterMode_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterMode_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RegisterMode_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterMode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterMode_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterMode_Request__callbacks = {
  "splash_interfaces::srv",
  "RegisterMode_Request",
  _RegisterMode_Request__cdr_serialize,
  _RegisterMode_Request__cdr_deserialize,
  _RegisterMode_Request__get_serialized_size,
  _RegisterMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _RegisterMode_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterMode_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<splash_interfaces::srv::RegisterMode_Request>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RegisterMode_Request)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace splash_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_serialize(
  const splash_interfaces::srv::RegisterMode_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ok
  cdr << (ros_message.ok ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  splash_interfaces::srv::RegisterMode_Response & ros_message)
{
  // Member: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ok = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
get_serialized_size(
  const splash_interfaces::srv::RegisterMode_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ok
  {
    size_t item_size = sizeof(ros_message.ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
max_serialized_size_RegisterMode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RegisterMode_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<splash_interfaces::srv::RegisterMode_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterMode_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RegisterMode_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterMode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterMode_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterMode_Response__callbacks = {
  "splash_interfaces::srv",
  "RegisterMode_Response",
  _RegisterMode_Response__cdr_serialize,
  _RegisterMode_Response__cdr_deserialize,
  _RegisterMode_Response__get_serialized_size,
  _RegisterMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _RegisterMode_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterMode_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<splash_interfaces::srv::RegisterMode_Response>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RegisterMode_Response)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace splash_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RegisterMode__callbacks = {
  "splash_interfaces::srv",
  "RegisterMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RegisterMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RegisterMode_Response)(),
};

static rosidl_service_type_support_t _RegisterMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterMode__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_splash_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<splash_interfaces::srv::RegisterMode>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RegisterMode)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RegisterMode__handle;
}

#ifdef __cplusplus
}
#endif
