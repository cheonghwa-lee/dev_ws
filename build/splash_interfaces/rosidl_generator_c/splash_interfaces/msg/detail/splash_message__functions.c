// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/msg/detail/splash_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `body`
#include "rosidl_runtime_c/string_functions.h"

bool
splash_interfaces__msg__SplashMessage__init(splash_interfaces__msg__SplashMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    splash_interfaces__msg__SplashMessage__fini(msg);
    return false;
  }
  // body
  if (!rosidl_runtime_c__String__init(&msg->body)) {
    splash_interfaces__msg__SplashMessage__fini(msg);
    return false;
  }
  // freshness
  return true;
}

void
splash_interfaces__msg__SplashMessage__fini(splash_interfaces__msg__SplashMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // body
  rosidl_runtime_c__String__fini(&msg->body);
  // freshness
}

splash_interfaces__msg__SplashMessage *
splash_interfaces__msg__SplashMessage__create()
{
  splash_interfaces__msg__SplashMessage * msg = (splash_interfaces__msg__SplashMessage *)malloc(sizeof(splash_interfaces__msg__SplashMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(splash_interfaces__msg__SplashMessage));
  bool success = splash_interfaces__msg__SplashMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
splash_interfaces__msg__SplashMessage__destroy(splash_interfaces__msg__SplashMessage * msg)
{
  if (msg) {
    splash_interfaces__msg__SplashMessage__fini(msg);
  }
  free(msg);
}


bool
splash_interfaces__msg__SplashMessage__Sequence__init(splash_interfaces__msg__SplashMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  splash_interfaces__msg__SplashMessage * data = NULL;
  if (size) {
    data = (splash_interfaces__msg__SplashMessage *)calloc(size, sizeof(splash_interfaces__msg__SplashMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = splash_interfaces__msg__SplashMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        splash_interfaces__msg__SplashMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
splash_interfaces__msg__SplashMessage__Sequence__fini(splash_interfaces__msg__SplashMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      splash_interfaces__msg__SplashMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

splash_interfaces__msg__SplashMessage__Sequence *
splash_interfaces__msg__SplashMessage__Sequence__create(size_t size)
{
  splash_interfaces__msg__SplashMessage__Sequence * array = (splash_interfaces__msg__SplashMessage__Sequence *)malloc(sizeof(splash_interfaces__msg__SplashMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = splash_interfaces__msg__SplashMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
splash_interfaces__msg__SplashMessage__Sequence__destroy(splash_interfaces__msg__SplashMessage__Sequence * array)
{
  if (array) {
    splash_interfaces__msg__SplashMessage__Sequence__fini(array);
  }
  free(array);
}
