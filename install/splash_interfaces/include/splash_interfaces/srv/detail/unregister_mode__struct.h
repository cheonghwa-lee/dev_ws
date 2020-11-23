// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from splash_interfaces:srv/UnregisterMode.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__STRUCT_H_
#define SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/UnregisterMode in the package splash_interfaces.
typedef struct splash_interfaces__srv__UnregisterMode_Request
{
  rosidl_runtime_c__String factory;
} splash_interfaces__srv__UnregisterMode_Request;

// Struct for a sequence of splash_interfaces__srv__UnregisterMode_Request.
typedef struct splash_interfaces__srv__UnregisterMode_Request__Sequence
{
  splash_interfaces__srv__UnregisterMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__UnregisterMode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/UnregisterMode in the package splash_interfaces.
typedef struct splash_interfaces__srv__UnregisterMode_Response
{
  bool ok;
} splash_interfaces__srv__UnregisterMode_Response;

// Struct for a sequence of splash_interfaces__srv__UnregisterMode_Response.
typedef struct splash_interfaces__srv__UnregisterMode_Response__Sequence
{
  splash_interfaces__srv__UnregisterMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__UnregisterMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__SRV__DETAIL__UNREGISTER_MODE__STRUCT_H_
