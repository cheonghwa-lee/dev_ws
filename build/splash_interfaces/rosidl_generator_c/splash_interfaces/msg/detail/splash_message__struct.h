// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_H_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_H_

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
// Member 'body'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SplashMessage in the package splash_interfaces.
typedef struct splash_interfaces__msg__SplashMessage
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String body;
  uint16_t freshness;
} splash_interfaces__msg__SplashMessage;

// Struct for a sequence of splash_interfaces__msg__SplashMessage.
typedef struct splash_interfaces__msg__SplashMessage__Sequence
{
  splash_interfaces__msg__SplashMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__msg__SplashMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__STRUCT_H_
