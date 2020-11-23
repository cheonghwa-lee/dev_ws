// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice
#include "torcs_interfaces/msg/detail/torcs_sensors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "torcs_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "torcs_interfaces/msg/detail/torcs_sensors__struct.h"
#include "torcs_interfaces/msg/detail/torcs_sensors__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // wheel_spin_vel
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // wheel_spin_vel
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


using _TORCSSensors__ros_msg_type = torcs_interfaces__msg__TORCSSensors;

static bool _TORCSSensors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TORCSSensors__ros_msg_type * ros_message = static_cast<const _TORCSSensors__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: current_lap_time
  {
    cdr << ros_message->current_lap_time;
  }

  // Field name: damage
  {
    cdr << ros_message->damage;
  }

  // Field name: dist_from_start
  {
    cdr << ros_message->dist_from_start;
  }

  // Field name: dist_raced
  {
    cdr << ros_message->dist_raced;
  }

  // Field name: dist_to_middle
  {
    cdr << ros_message->dist_to_middle;
  }

  // Field name: dist_to_left
  {
    cdr << ros_message->dist_to_left;
  }

  // Field name: dist_to_right
  {
    cdr << ros_message->dist_to_right;
  }

  // Field name: fuel
  {
    cdr << ros_message->fuel;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: last_lap_time
  {
    cdr << ros_message->last_lap_time;
  }

  // Field name: race_pos
  {
    cdr << ros_message->race_pos;
  }

  // Field name: rpm
  {
    cdr << ros_message->rpm;
  }

  // Field name: track_pos
  {
    cdr << ros_message->track_pos;
  }

  // Field name: wheel_spin_vel
  {
    size_t size = ros_message->wheel_spin_vel.size;
    auto array_ptr = ros_message->wheel_spin_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  return true;
}

static bool _TORCSSensors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TORCSSensors__ros_msg_type * ros_message = static_cast<_TORCSSensors__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: current_lap_time
  {
    cdr >> ros_message->current_lap_time;
  }

  // Field name: damage
  {
    cdr >> ros_message->damage;
  }

  // Field name: dist_from_start
  {
    cdr >> ros_message->dist_from_start;
  }

  // Field name: dist_raced
  {
    cdr >> ros_message->dist_raced;
  }

  // Field name: dist_to_middle
  {
    cdr >> ros_message->dist_to_middle;
  }

  // Field name: dist_to_left
  {
    cdr >> ros_message->dist_to_left;
  }

  // Field name: dist_to_right
  {
    cdr >> ros_message->dist_to_right;
  }

  // Field name: fuel
  {
    cdr >> ros_message->fuel;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: last_lap_time
  {
    cdr >> ros_message->last_lap_time;
  }

  // Field name: race_pos
  {
    cdr >> ros_message->race_pos;
  }

  // Field name: rpm
  {
    cdr >> ros_message->rpm;
  }

  // Field name: track_pos
  {
    cdr >> ros_message->track_pos;
  }

  // Field name: wheel_spin_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheel_spin_vel.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->wheel_spin_vel);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->wheel_spin_vel, size)) {
      return "failed to create array for field 'wheel_spin_vel'";
    }
    auto array_ptr = ros_message->wheel_spin_vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torcs_interfaces
size_t get_serialized_size_torcs_interfaces__msg__TORCSSensors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TORCSSensors__ros_msg_type * ros_message = static_cast<const _TORCSSensors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_lap_time
  {
    size_t item_size = sizeof(ros_message->current_lap_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name damage
  {
    size_t item_size = sizeof(ros_message->damage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_from_start
  {
    size_t item_size = sizeof(ros_message->dist_from_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_raced
  {
    size_t item_size = sizeof(ros_message->dist_raced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_to_middle
  {
    size_t item_size = sizeof(ros_message->dist_to_middle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_to_left
  {
    size_t item_size = sizeof(ros_message->dist_to_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_to_right
  {
    size_t item_size = sizeof(ros_message->dist_to_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel
  {
    size_t item_size = sizeof(ros_message->fuel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_lap_time
  {
    size_t item_size = sizeof(ros_message->last_lap_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name race_pos
  {
    size_t item_size = sizeof(ros_message->race_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpm
  {
    size_t item_size = sizeof(ros_message->rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_pos
  {
    size_t item_size = sizeof(ros_message->track_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_spin_vel
  {
    size_t array_size = ros_message->wheel_spin_vel.size;
    auto array_ptr = ros_message->wheel_spin_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TORCSSensors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_torcs_interfaces__msg__TORCSSensors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torcs_interfaces
size_t max_serialized_size_torcs_interfaces__msg__TORCSSensors(
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
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_lap_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: damage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_from_start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_raced
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_to_middle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_to_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_to_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fuel
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
  // member: last_lap_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: race_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: track_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_spin_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TORCSSensors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_torcs_interfaces__msg__TORCSSensors(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TORCSSensors = {
  "torcs_interfaces::msg",
  "TORCSSensors",
  _TORCSSensors__cdr_serialize,
  _TORCSSensors__cdr_deserialize,
  _TORCSSensors__get_serialized_size,
  _TORCSSensors__max_serialized_size
};

static rosidl_message_type_support_t _TORCSSensors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TORCSSensors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torcs_interfaces, msg, TORCSSensors)() {
  return &_TORCSSensors__type_support;
}

#if defined(__cplusplus)
}
#endif
