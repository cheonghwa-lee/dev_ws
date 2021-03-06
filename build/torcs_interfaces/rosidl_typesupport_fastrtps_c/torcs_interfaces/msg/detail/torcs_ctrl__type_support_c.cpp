// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice
#include "torcs_interfaces/msg/detail/torcs_ctrl__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "torcs_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "torcs_interfaces/msg/detail/torcs_ctrl__struct.h"
#include "torcs_interfaces/msg/detail/torcs_ctrl__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_torcs_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_torcs_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_torcs_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TORCSCtrl__ros_msg_type = torcs_interfaces__msg__TORCSCtrl;

static bool _TORCSCtrl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TORCSCtrl__ros_msg_type * ros_message = static_cast<const _TORCSCtrl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: accel
  {
    cdr << ros_message->accel;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: clutch
  {
    cdr << ros_message->clutch;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: focus
  {
    cdr << ros_message->focus;
  }

  // Field name: meta
  {
    cdr << ros_message->meta;
  }

  return true;
}

static bool _TORCSCtrl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TORCSCtrl__ros_msg_type * ros_message = static_cast<_TORCSCtrl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: accel
  {
    cdr >> ros_message->accel;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: clutch
  {
    cdr >> ros_message->clutch;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: focus
  {
    cdr >> ros_message->focus;
  }

  // Field name: meta
  {
    cdr >> ros_message->meta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torcs_interfaces
size_t get_serialized_size_torcs_interfaces__msg__TORCSCtrl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TORCSCtrl__ros_msg_type * ros_message = static_cast<const _TORCSCtrl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name accel
  {
    size_t item_size = sizeof(ros_message->accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clutch
  {
    size_t item_size = sizeof(ros_message->clutch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name focus
  {
    size_t item_size = sizeof(ros_message->focus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta
  {
    size_t item_size = sizeof(ros_message->meta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TORCSCtrl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_torcs_interfaces__msg__TORCSCtrl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torcs_interfaces
size_t max_serialized_size_torcs_interfaces__msg__TORCSCtrl(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: clutch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: focus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: meta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TORCSCtrl__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_torcs_interfaces__msg__TORCSCtrl(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TORCSCtrl = {
  "torcs_interfaces::msg",
  "TORCSCtrl",
  _TORCSCtrl__cdr_serialize,
  _TORCSCtrl__cdr_deserialize,
  _TORCSCtrl__get_serialized_size,
  _TORCSCtrl__max_serialized_size
};

static rosidl_message_type_support_t _TORCSCtrl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TORCSCtrl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torcs_interfaces, msg, TORCSCtrl)() {
  return &_TORCSCtrl__type_support;
}

#if defined(__cplusplus)
}
#endif
