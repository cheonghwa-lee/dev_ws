// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/srv/detail/request_mode_change__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "splash_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "splash_interfaces/srv/detail/request_mode_change__struct.h"
#include "splash_interfaces/srv/detail/request_mode_change__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // event, factory
#include "rosidl_runtime_c/string_functions.h"  // event, factory

// forward declare type support functions


using _RequestModeChange_Request__ros_msg_type = splash_interfaces__srv__RequestModeChange_Request;

static bool _RequestModeChange_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RequestModeChange_Request__ros_msg_type * ros_message = static_cast<const _RequestModeChange_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: factory
  {
    const rosidl_runtime_c__String * str = &ros_message->factory;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: event
  {
    const rosidl_runtime_c__String * str = &ros_message->event;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RequestModeChange_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RequestModeChange_Request__ros_msg_type * ros_message = static_cast<_RequestModeChange_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: factory
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->factory.data) {
      rosidl_runtime_c__String__init(&ros_message->factory);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->factory,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'factory'\n");
      return false;
    }
  }

  // Field name: event
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->event.data) {
      rosidl_runtime_c__String__init(&ros_message->event);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->event,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'event'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t get_serialized_size_splash_interfaces__srv__RequestModeChange_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RequestModeChange_Request__ros_msg_type * ros_message = static_cast<const _RequestModeChange_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name factory
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->factory.size + 1);
  // field.name event
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->event.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RequestModeChange_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_splash_interfaces__srv__RequestModeChange_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t max_serialized_size_splash_interfaces__srv__RequestModeChange_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: factory
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: event
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

static size_t _RequestModeChange_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_splash_interfaces__srv__RequestModeChange_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RequestModeChange_Request = {
  "splash_interfaces::srv",
  "RequestModeChange_Request",
  _RequestModeChange_Request__cdr_serialize,
  _RequestModeChange_Request__cdr_deserialize,
  _RequestModeChange_Request__get_serialized_size,
  _RequestModeChange_Request__max_serialized_size
};

static rosidl_message_type_support_t _RequestModeChange_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RequestModeChange_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RequestModeChange_Request)() {
  return &_RequestModeChange_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__struct.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RequestModeChange_Response__ros_msg_type = splash_interfaces__srv__RequestModeChange_Response;

static bool _RequestModeChange_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RequestModeChange_Response__ros_msg_type * ros_message = static_cast<const _RequestModeChange_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  return true;
}

static bool _RequestModeChange_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RequestModeChange_Response__ros_msg_type * ros_message = static_cast<_RequestModeChange_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t get_serialized_size_splash_interfaces__srv__RequestModeChange_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RequestModeChange_Response__ros_msg_type * ros_message = static_cast<const _RequestModeChange_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ok
  {
    size_t item_size = sizeof(ros_message->ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RequestModeChange_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_splash_interfaces__srv__RequestModeChange_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t max_serialized_size_splash_interfaces__srv__RequestModeChange_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RequestModeChange_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_splash_interfaces__srv__RequestModeChange_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RequestModeChange_Response = {
  "splash_interfaces::srv",
  "RequestModeChange_Response",
  _RequestModeChange_Response__cdr_serialize,
  _RequestModeChange_Response__cdr_deserialize,
  _RequestModeChange_Response__get_serialized_size,
  _RequestModeChange_Response__max_serialized_size
};

static rosidl_message_type_support_t _RequestModeChange_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RequestModeChange_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RequestModeChange_Response)() {
  return &_RequestModeChange_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "splash_interfaces/srv/request_mode_change.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RequestModeChange__callbacks = {
  "splash_interfaces::srv",
  "RequestModeChange",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RequestModeChange_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RequestModeChange_Response)(),
};

static rosidl_service_type_support_t RequestModeChange__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RequestModeChange__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RequestModeChange)() {
  return &RequestModeChange__handle;
}

#if defined(__cplusplus)
}
#endif
