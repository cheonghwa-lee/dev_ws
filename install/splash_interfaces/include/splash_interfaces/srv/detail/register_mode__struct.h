// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__STRUCT_H_
#define SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__STRUCT_H_

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
// Member 'mode_configuration'
// Member 'name_space'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterMode in the package splash_interfaces.
typedef struct splash_interfaces__srv__RegisterMode_Request
{
  rosidl_runtime_c__String factory;
  rosidl_runtime_c__String mode_configuration;
  rosidl_runtime_c__String name_space;
} splash_interfaces__srv__RegisterMode_Request;

// Struct for a sequence of splash_interfaces__srv__RegisterMode_Request.
typedef struct splash_interfaces__srv__RegisterMode_Request__Sequence
{
  splash_interfaces__srv__RegisterMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__RegisterMode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RegisterMode in the package splash_interfaces.
typedef struct splash_interfaces__srv__RegisterMode_Response
{
  bool ok;
} splash_interfaces__srv__RegisterMode_Response;

// Struct for a sequence of splash_interfaces__srv__RegisterMode_Response.
typedef struct splash_interfaces__srv__RegisterMode_Response__Sequence
{
  splash_interfaces__srv__RegisterMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} splash_interfaces__srv__RegisterMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REGISTER_MODE__STRUCT_H_
