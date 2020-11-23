// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/srv/detail/request_mode_change__rosidl_typesupport_fastrtps_cpp.hpp"
#include "splash_interfaces/srv/detail/request_mode_change__struct.hpp"

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
  const splash_interfaces::srv::RequestModeChange_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: factory
  cdr << ros_message.factory;
  // Member: event
  cdr << ros_message.event;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  splash_interfaces::srv::RequestModeChange_Request & ros_message)
{
  // Member: factory
  cdr >> ros_message.factory;

  // Member: event
  cdr >> ros_message.event;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
get_serialized_size(
  const splash_interfaces::srv::RequestModeChange_Request & ros_message,
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
  // Member: event
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.event.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_splash_interfaces
max_serialized_size_RequestModeChange_Request(
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

  // Member: event
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

static bool _RequestModeChange_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RequestModeChange_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestModeChange_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<splash_interfaces::srv::RequestModeChange_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestModeChange_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RequestModeChange_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestModeChange_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestModeChange_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestModeChange_Request__callbacks = {
  "splash_interfaces::srv",
  "RequestModeChange_Request",
  _RequestModeChange_Request__cdr_serialize,
  _RequestModeChange_Request__cdr_deserialize,
  _RequestModeChange_Request__get_serialized_size,
  _RequestModeChange_Request__max_serialized_size
};

static rosidl_message_type_support_t _RequestModeChange_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestModeChange_Request__callbacks,
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
get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Request>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Request)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange_Request__handle;
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
  const splash_interfaces::srv::RequestModeChange_Response & ros_message,
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
  splash_interfaces::srv::RequestModeChange_Response & ros_message)
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
  const splash_interfaces::srv::RequestModeChange_Response & ros_message,
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
max_serialized_size_RequestModeChange_Response(
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

static bool _RequestModeChange_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RequestModeChange_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestModeChange_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<splash_interfaces::srv::RequestModeChange_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestModeChange_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const splash_interfaces::srv::RequestModeChange_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestModeChange_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestModeChange_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestModeChange_Response__callbacks = {
  "splash_interfaces::srv",
  "RequestModeChange_Response",
  _RequestModeChange_Response__cdr_serialize,
  _RequestModeChange_Response__cdr_deserialize,
  _RequestModeChange_Response__get_serialized_size,
  _RequestModeChange_Response__max_serialized_size
};

static rosidl_message_type_support_t _RequestModeChange_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestModeChange_Response__callbacks,
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
get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Response>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Response)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange_Response__handle;
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

static service_type_support_callbacks_t _RequestModeChange__callbacks = {
  "splash_interfaces::srv",
  "RequestModeChange",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Response)(),
};

static rosidl_service_type_support_t _RequestModeChange__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestModeChange__callbacks,
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
get_service_type_support_handle<splash_interfaces::srv::RequestModeChange>()
{
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange)() {
  return &splash_interfaces::srv::typesupport_fastrtps_cpp::_RequestModeChange__handle;
}

#ifdef __cplusplus
}
#endif
