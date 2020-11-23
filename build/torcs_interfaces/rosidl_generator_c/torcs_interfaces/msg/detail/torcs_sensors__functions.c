// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
// generated code does not contain a copyright notice
#include "torcs_interfaces/msg/detail/torcs_sensors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `wheel_spin_vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
torcs_interfaces__msg__TORCSSensors__init(torcs_interfaces__msg__TORCSSensors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    torcs_interfaces__msg__TORCSSensors__fini(msg);
    return false;
  }
  // angle
  // current_lap_time
  // damage
  // dist_from_start
  // dist_raced
  // dist_to_middle
  // dist_to_left
  // dist_to_right
  // fuel
  // gear
  // last_lap_time
  // race_pos
  // rpm
  // track_pos
  // wheel_spin_vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->wheel_spin_vel, 0)) {
    torcs_interfaces__msg__TORCSSensors__fini(msg);
    return false;
  }
  // z
  return true;
}

void
torcs_interfaces__msg__TORCSSensors__fini(torcs_interfaces__msg__TORCSSensors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle
  // current_lap_time
  // damage
  // dist_from_start
  // dist_raced
  // dist_to_middle
  // dist_to_left
  // dist_to_right
  // fuel
  // gear
  // last_lap_time
  // race_pos
  // rpm
  // track_pos
  // wheel_spin_vel
  rosidl_runtime_c__double__Sequence__fini(&msg->wheel_spin_vel);
  // z
}

torcs_interfaces__msg__TORCSSensors *
torcs_interfaces__msg__TORCSSensors__create()
{
  torcs_interfaces__msg__TORCSSensors * msg = (torcs_interfaces__msg__TORCSSensors *)malloc(sizeof(torcs_interfaces__msg__TORCSSensors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torcs_interfaces__msg__TORCSSensors));
  bool success = torcs_interfaces__msg__TORCSSensors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
torcs_interfaces__msg__TORCSSensors__destroy(torcs_interfaces__msg__TORCSSensors * msg)
{
  if (msg) {
    torcs_interfaces__msg__TORCSSensors__fini(msg);
  }
  free(msg);
}


bool
torcs_interfaces__msg__TORCSSensors__Sequence__init(torcs_interfaces__msg__TORCSSensors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  torcs_interfaces__msg__TORCSSensors * data = NULL;
  if (size) {
    data = (torcs_interfaces__msg__TORCSSensors *)calloc(size, sizeof(torcs_interfaces__msg__TORCSSensors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torcs_interfaces__msg__TORCSSensors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torcs_interfaces__msg__TORCSSensors__fini(&data[i - 1]);
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
torcs_interfaces__msg__TORCSSensors__Sequence__fini(torcs_interfaces__msg__TORCSSensors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      torcs_interfaces__msg__TORCSSensors__fini(&array->data[i]);
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

torcs_interfaces__msg__TORCSSensors__Sequence *
torcs_interfaces__msg__TORCSSensors__Sequence__create(size_t size)
{
  torcs_interfaces__msg__TORCSSensors__Sequence * array = (torcs_interfaces__msg__TORCSSensors__Sequence *)malloc(sizeof(torcs_interfaces__msg__TORCSSensors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = torcs_interfaces__msg__TORCSSensors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
torcs_interfaces__msg__TORCSSensors__Sequence__destroy(torcs_interfaces__msg__TORCSSensors__Sequence * array)
{
  if (array) {
    torcs_interfaces__msg__TORCSSensors__Sequence__fini(array);
  }
  free(array);
}
