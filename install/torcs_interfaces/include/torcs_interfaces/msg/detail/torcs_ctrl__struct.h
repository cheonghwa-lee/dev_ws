// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#ifndef TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_H_
#define TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_H_

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

// Struct defined in msg/TORCSCtrl in the package torcs_interfaces.
typedef struct torcs_interfaces__msg__TORCSCtrl
{
  std_msgs__msg__Header header;
  double accel;
  double brake;
  double clutch;
  int8_t gear;
  double steering;
  double focus;
  uint8_t meta;
} torcs_interfaces__msg__TORCSCtrl;

// Struct for a sequence of torcs_interfaces__msg__TORCSCtrl.
typedef struct torcs_interfaces__msg__TORCSCtrl__Sequence
{
  torcs_interfaces__msg__TORCSCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torcs_interfaces__msg__TORCSCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORCS_INTERFACES__MSG__DETAIL__TORCS_CTRL__STRUCT_H_
