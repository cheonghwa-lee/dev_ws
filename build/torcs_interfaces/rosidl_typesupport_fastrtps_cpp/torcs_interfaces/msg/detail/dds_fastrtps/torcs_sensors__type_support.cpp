// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice
#include "torcs_interfaces/msg/detail/torcs_sensors__rosidl_typesupport_fastrtps_cpp.hpp"
#include "torcs_interfaces/msg/detail/torcs_sensors__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace torcs_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
cdr_serialize(
  const torcs_interfaces::msg::TORCSSensors & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: angle
  cdr << ros_message.angle;
  // Member: current_lap_time
  cdr << ros_message.current_lap_time;
  // Member: damage
  cdr << ros_message.damage;
  // Member: dist_from_start
  cdr << ros_message.dist_from_start;
  // Member: dist_raced
  cdr << ros_message.dist_raced;
  // Member: dist_to_middle
  cdr << ros_message.dist_to_middle;
  // Member: dist_to_left
  cdr << ros_message.dist_to_left;
  // Member: dist_to_right
  cdr << ros_message.dist_to_right;
  // Member: fuel
  cdr << ros_message.fuel;
  // Member: gear
  cdr << ros_message.gear;
  // Member: last_lap_time
  cdr << ros_message.last_lap_time;
  // Member: race_pos
  cdr << ros_message.race_pos;
  // Member: rpm
  cdr << ros_message.rpm;
  // Member: track_pos
  cdr << ros_message.track_pos;
  // Member: wheel_spin_vel
  {
    cdr << ros_message.wheel_spin_vel;
  }
  // Member: z
  cdr << ros_message.z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torcs_interfaces::msg::TORCSSensors & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: angle
  cdr >> ros_message.angle;

  // Member: current_lap_time
  cdr >> ros_message.current_lap_time;

  // Member: damage
  cdr >> ros_message.damage;

  // Member: dist_from_start
  cdr >> ros_message.dist_from_start;

  // Member: dist_raced
  cdr >> ros_message.dist_raced;

  // Member: dist_to_middle
  cdr >> ros_message.dist_to_middle;

  // Member: dist_to_left
  cdr >> ros_message.dist_to_left;

  // Member: dist_to_right
  cdr >> ros_message.dist_to_right;

  // Member: fuel
  cdr >> ros_message.fuel;

  // Member: gear
  cdr >> ros_message.gear;

  // Member: last_lap_time
  cdr >> ros_message.last_lap_time;

  // Member: race_pos
  cdr >> ros_message.race_pos;

  // Member: rpm
  cdr >> ros_message.rpm;

  // Member: track_pos
  cdr >> ros_message.track_pos;

  // Member: wheel_spin_vel
  {
    cdr >> ros_message.wheel_spin_vel;
  }

  // Member: z
  cdr >> ros_message.z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
get_serialized_size(
  const torcs_interfaces::msg::TORCSSensors & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_lap_time
  {
    size_t item_size = sizeof(ros_message.current_lap_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damage
  {
    size_t item_size = sizeof(ros_message.damage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_from_start
  {
    size_t item_size = sizeof(ros_message.dist_from_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_raced
  {
    size_t item_size = sizeof(ros_message.dist_raced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_to_middle
  {
    size_t item_size = sizeof(ros_message.dist_to_middle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_to_left
  {
    size_t item_size = sizeof(ros_message.dist_to_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_to_right
  {
    size_t item_size = sizeof(ros_message.dist_to_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel
  {
    size_t item_size = sizeof(ros_message.fuel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_lap_time
  {
    size_t item_size = sizeof(ros_message.last_lap_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: race_pos
  {
    size_t item_size = sizeof(ros_message.race_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpm
  {
    size_t item_size = sizeof(ros_message.rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_pos
  {
    size_t item_size = sizeof(ros_message.track_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spin_vel
  {
    size_t array_size = ros_message.wheel_spin_vel.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wheel_spin_vel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torcs_interfaces
max_serialized_size_TORCSSensors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_lap_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: damage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist_from_start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist_raced
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist_to_middle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist_to_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist_to_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fuel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_lap_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: race_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: track_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_spin_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TORCSSensors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const torcs_interfaces::msg::TORCSSensors *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TORCSSensors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<torcs_interfaces::msg::TORCSSensors *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TORCSSensors__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const torcs_interfaces::msg::TORCSSensors *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TORCSSensors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TORCSSensors(full_bounded, 0);
}

static message_type_support_callbacks_t _TORCSSensors__callbacks = {
  "torcs_interfaces::msg",
  "TORCSSensors",
  _TORCSSensors__cdr_serialize,
  _TORCSSensors__cdr_deserialize,
  _TORCSSensors__get_serialized_size,
  _TORCSSensors__max_serialized_size
};

static rosidl_message_type_support_t _TORCSSensors__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TORCSSensors__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace torcs_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_torcs_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<torcs_interfaces::msg::TORCSSensors>()
{
  return &torcs_interfaces::msg::typesupport_fastrtps_cpp::_TORCSSensors__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torcs_interfaces, msg, TORCSSensors)() {
  return &torcs_interfaces::msg::typesupport_fastrtps_cpp::_TORCSSensors__handle;
}

#ifdef __cplusplus
}
#endif
