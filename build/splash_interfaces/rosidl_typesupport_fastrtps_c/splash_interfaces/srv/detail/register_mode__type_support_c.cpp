// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/srv/detail/register_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "splash_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "splash_interfaces/srv/detail/register_mode__struct.h"
#include "splash_interfaces/srv/detail/register_mode__functions.h"
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

#include "rosidl_runtime_c/string.h"  // factory, mode_configuration, name_space
#include "rosidl_runtime_c/string_functions.h"  // factory, mode_configuration, name_space

// forward declare type support functions


using _RegisterMode_Request__ros_msg_type = splash_interfaces__srv__RegisterMode_Request;

static bool _RegisterMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegisterMode_Request__ros_msg_type * ros_message = static_cast<const _RegisterMode_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode_configuration
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_configuration;
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

  // Field name: name_space
  {
    const rosidl_runtime_c__String * str = &ros_message->name_space;
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

static bool _RegisterMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegisterMode_Request__ros_msg_type * ros_message = static_cast<_RegisterMode_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode_configuration
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode_configuration.data) {
      rosidl_runtime_c__String__init(&ros_message->mode_configuration);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode_configuration,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode_configuration'\n");
      return false;
    }
  }

  // Field name: name_space
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name_space.data) {
      rosidl_runtime_c__String__init(&ros_message->name_space);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name_space,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name_space'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t get_serialized_size_splash_interfaces__srv__RegisterMode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegisterMode_Request__ros_msg_type * ros_message = static_cast<const _RegisterMode_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode_configuration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_configuration.size + 1);
  // field.name name_space
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name_space.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RegisterMode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_splash_interfaces__srv__RegisterMode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t max_serialized_size_splash_interfaces__srv__RegisterMode_Request(
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
  // member: mode_configuration
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name_space
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

static size_t _RegisterMode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_splash_interfaces__srv__RegisterMode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RegisterMode_Request = {
  "splash_interfaces::srv",
  "RegisterMode_Request",
  _RegisterMode_Request__cdr_serialize,
  _RegisterMode_Request__cdr_deserialize,
  _RegisterMode_Request__get_serialized_size,
  _RegisterMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _RegisterMode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegisterMode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RegisterMode_Request)() {
  return &_RegisterMode_Request__type_support;
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
// #include "splash_interfaces/srv/detail/register_mode__struct.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__functions.h"
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


using _RegisterMode_Response__ros_msg_type = splash_interfaces__srv__RegisterMode_Response;

static bool _RegisterMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegisterMode_Response__ros_msg_type * ros_message = static_cast<const _RegisterMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  return true;
}

static bool _RegisterMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegisterMode_Response__ros_msg_type * ros_message = static_cast<_RegisterMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t get_serialized_size_splash_interfaces__srv__RegisterMode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegisterMode_Response__ros_msg_type * ros_message = static_cast<const _RegisterMode_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _RegisterMode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_splash_interfaces__srv__RegisterMode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_splash_interfaces
size_t max_serialized_size_splash_interfaces__srv__RegisterMode_Response(
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

static size_t _RegisterMode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_splash_interfaces__srv__RegisterMode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RegisterMode_Response = {
  "splash_interfaces::srv",
  "RegisterMode_Response",
  _RegisterMode_Response__cdr_serialize,
  _RegisterMode_Response__cdr_deserialize,
  _RegisterMode_Response__get_serialized_size,
  _RegisterMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _RegisterMode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegisterMode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RegisterMode_Response)() {
  return &_RegisterMode_Response__type_support;
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
#include "splash_interfaces/srv/register_mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RegisterMode__callbacks = {
  "splash_interfaces::srv",
  "RegisterMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RegisterMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RegisterMode_Response)(),
};

static rosidl_service_type_support_t RegisterMode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RegisterMode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, srv, RegisterMode)() {
  return &RegisterMode__handle;
}

#if defined(__cplusplus)
}
#endif
