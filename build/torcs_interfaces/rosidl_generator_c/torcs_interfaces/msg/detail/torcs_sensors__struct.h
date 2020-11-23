// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_H_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'wheel_spin_vel'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TORCSSensors in the package torcs_interfaces.
typedef struct torcs_interfaces__msg__TORCSSensors
{
  std_msgs__msg__Header header;
  double angle;
  double current_lap_time;
  double damage;
  double dist_from_start;
  double dist_raced;
  double dist_to_middle;
  double dist_to_left;
  double dist_to_right;
  double fuel;
  int8_t gear;
  double last_lap_time;
  uint8_t race_pos;
  double rpm;
  double track_pos;
  rosidl_runtime_c__double__Sequence wheel_spin_vel;
  double z;
} torcs_interfaces__msg__TORCSSensors;

// Struct for a sequence of torcs_interfaces__msg__TORCSSensors.
typedef struct torcs_interfaces__msg__TORCSSensors__Sequence
{
  torcs_interfaces__msg__TORCSSensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torcs_interfaces__msg__TORCSSensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_SENSORS__STRUCT_H_
