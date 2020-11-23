// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice
#include "torcs_interfaces/msg/detail/torcs_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
torcs_interfaces__msg__TORCSCtrl__init(torcs_interfaces__msg__TORCSCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    torcs_interfaces__msg__TORCSCtrl__fini(msg);
    return false;
  }
  // accel
  // brake
  // clutch
  // gear
  // steering
  // focus
  // meta
  return true;
}

void
torcs_interfaces__msg__TORCSCtrl__fini(torcs_interfaces__msg__TORCSCtrl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // accel
  // brake
  // clutch
  // gear
  // steering
  // focus
  // meta
}

torcs_interfaces__msg__TORCSCtrl *
torcs_interfaces__msg__TORCSCtrl__create()
{
  torcs_interfaces__msg__TORCSCtrl * msg = (torcs_interfaces__msg__TORCSCtrl *)malloc(sizeof(torcs_interfaces__msg__TORCSCtrl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torcs_interfaces__msg__TORCSCtrl));
  bool success = torcs_interfaces__msg__TORCSCtrl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
torcs_interfaces__msg__TORCSCtrl__destroy(torcs_interfaces__msg__TORCSCtrl * msg)
{
  if (msg) {
    torcs_interfaces__msg__TORCSCtrl__fini(msg);
  }
  free(msg);
}


bool
torcs_interfaces__msg__TORCSCtrl__Sequence__init(torcs_interfaces__msg__TORCSCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  torcs_interfaces__msg__TORCSCtrl * data = NULL;
  if (size) {
    data = (torcs_interfaces__msg__TORCSCtrl *)calloc(size, sizeof(torcs_interfaces__msg__TORCSCtrl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torcs_interfaces__msg__TORCSCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torcs_interfaces__msg__TORCSCtrl__fini(&data[i - 1]);
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
torcs_interfaces__msg__TORCSCtrl__Sequence__fini(torcs_interfaces__msg__TORCSCtrl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      torcs_interfaces__msg__TORCSCtrl__fini(&array->data[i]);
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

torcs_interfaces__msg__TORCSCtrl__Sequence *
torcs_interfaces__msg__TORCSCtrl__Sequence__create(size_t size)
{
  torcs_interfaces__msg__TORCSCtrl__Sequence * array = (torcs_interfaces__msg__TORCSCtrl__Sequence *)malloc(sizeof(torcs_interfaces__msg__TORCSCtrl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = torcs_interfaces__msg__TORCSCtrl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
torcs_interfaces__msg__TORCSCtrl__Sequence__destroy(torcs_interfaces__msg__TORCSCtrl__Sequence * array)
{
  if (array) {
    torcs_interfaces__msg__TORCSCtrl__Sequence__fini(array);
  }
  free(array);
}
