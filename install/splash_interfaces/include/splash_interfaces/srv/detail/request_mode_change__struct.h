// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_H_
#define SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'factory'
// Member 'event'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestModeChange in the package splash_interfaces.
typedef struct splash_interfaces__srv__RequestModeChange_Request
{
  rosidl_runtime_c__String factory;
  rosidl_runtime_c__String event;
} splash_interfaces__srv__RequestModeChange_Request;

// Struct for a sequence of splash_interfaces__srv__RequestModeChange_Request.
typedef struct splash_interfaces__srv__RequestModeChange_Request__Sequence
{
  splash_interfaces__srv__RequestModeChange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__RequestModeChange_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RequestModeChange in the package splash_interfaces.
typedef struct splash_interfaces__srv__RequestModeChange_Response
{
  bool ok;
} splash_interfaces__srv__RequestModeChange_Response;

// Struct for a sequence of splash_interfaces__srv__RequestModeChange_Response.
typedef struct splash_interfaces__srv__RequestModeChange_Response__Sequence
{
  splash_interfaces__srv__RequestModeChange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__RequestModeChange_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__STRUCT_H_
