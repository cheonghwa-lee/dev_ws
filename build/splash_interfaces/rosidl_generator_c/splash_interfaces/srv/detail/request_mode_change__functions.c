// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice
#include "splash_interfaces/srv/detail/request_mode_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `factory`
// Member `event`
#include "rosidl_runtime_c/string_functions.h"

bool
splash_interfaces__srv__RequestModeChange_Request__init(splash_interfaces__srv__RequestModeChange_Request * msg)
{
  if (!msg) {
    return false;
  }
  // factory
  if (!rosidl_runtime_c__String__init(&msg->factory)) {
    splash_interfaces__srv__RequestModeChange_Request__fini(msg);
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__init(&msg->event)) {
    splash_interfaces__srv__RequestModeChange_Request__fini(msg);
    return false;
  }
  return true;
}

void
splash_interfaces__srv__RequestModeChange_Request__fini(splash_interfaces__srv__RequestModeChange_Request * msg)
{
  if (!msg) {
    return;
  }
  // factory
  rosidl_runtime_c__String__fini(&msg->factory);
  // event
  rosidl_runtime_c__String__fini(&msg->event);
}

splash_interfaces__srv__RequestModeChange_Request *
splash_interfaces__srv__RequestModeChange_Request__create()
{
  splash_interfaces__srv__RequestModeChange_Request * msg = (splash_interfaces__srv__RequestModeChange_Request *)malloc(sizeof(splash_interfaces__srv__RequestModeChange_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(splash_interfaces__srv__RequestModeChange_Request));
  bool success = splash_interfaces__srv__RequestModeChange_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
splash_interfaces__srv__RequestModeChange_Request__destroy(splash_interfaces__srv__RequestModeChange_Request * msg)
{
  if (msg) {
    splash_interfaces__srv__RequestModeChange_Request__fini(msg);
  }
  free(msg);
}


bool
splash_interfaces__srv__RequestModeChange_Request__Sequence__init(splash_interfaces__srv__RequestModeChange_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  splash_interfaces__srv__RequestModeChange_Request * data = NULL;
  if (size) {
    data = (splash_interfaces__srv__RequestModeChange_Request *)calloc(size, sizeof(splash_interfaces__srv__RequestModeChange_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = splash_interfaces__srv__RequestModeChange_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        splash_interfaces__srv__RequestModeChange_Request__fini(&data[i - 1]);
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
splash_interfaces__srv__RequestModeChange_Request__Sequence__fini(splash_interfaces__srv__RequestModeChange_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      splash_interfaces__srv__RequestModeChange_Request__fini(&array->data[i]);
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

splash_interfaces__srv__RequestModeChange_Request__Sequence *
splash_interfaces__srv__RequestModeChange_Request__Sequence__create(size_t size)
{
  splash_interfaces__srv__RequestModeChange_Request__Sequence * array = (splash_interfaces__srv__RequestModeChange_Request__Sequence *)malloc(sizeof(splash_interfaces__srv__RequestModeChange_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = splash_interfaces__srv__RequestModeChange_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
splash_interfaces__srv__RequestModeChange_Request__Sequence__destroy(splash_interfaces__srv__RequestModeChange_Request__Sequence * array)
{
  if (array) {
    splash_interfaces__srv__RequestModeChange_Request__Sequence__fini(array);
  }
  free(array);
}


bool
splash_interfaces__srv__RequestModeChange_Response__init(splash_interfaces__srv__RequestModeChange_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  return true;
}

void
splash_interfaces__srv__RequestModeChange_Response__fini(splash_interfaces__srv__RequestModeChange_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
}

splash_interfaces__srv__RequestModeChange_Response *
splash_interfaces__srv__RequestModeChange_Response__create()
{
  splash_interfaces__srv__RequestModeChange_Response * msg = (splash_interfaces__srv__RequestModeChange_Response *)malloc(sizeof(splash_interfaces__srv__RequestModeChange_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(splash_interfaces__srv__RequestModeChange_Response));
  bool success = splash_interfaces__srv__RequestModeChange_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
splash_interfaces__srv__RequestModeChange_Response__destroy(splash_interfaces__srv__RequestModeChange_Response * msg)
{
  if (msg) {
    splash_interfaces__srv__RequestModeChange_Response__fini(msg);
  }
  free(msg);
}


bool
splash_interfaces__srv__RequestModeChange_Response__Sequence__init(splash_interfaces__srv__RequestModeChange_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  splash_interfaces__srv__RequestModeChange_Response * data = NULL;
  if (size) {
    data = (splash_interfaces__srv__RequestModeChange_Response *)calloc(size, sizeof(splash_interfaces__srv__RequestModeChange_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = splash_interfaces__srv__RequestModeChange_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        splash_interfaces__srv__RequestModeChange_Response__fini(&data[i - 1]);
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
splash_interfaces__srv__RequestModeChange_Response__Sequence__fini(splash_interfaces__srv__RequestModeChange_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      splash_interfaces__srv__RequestModeChange_Response__fini(&array->data[i]);
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

splash_interfaces__srv__RequestModeChange_Response__Sequence *
splash_interfaces__srv__RequestModeChange_Response__Sequence__create(size_t size)
{
  splash_interfaces__srv__RequestModeChange_Response__Sequence * array = (splash_interfaces__srv__RequestModeChange_Response__Sequence *)malloc(sizeof(splash_interfaces__srv__RequestModeChange_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = splash_interfaces__srv__RequestModeChange_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
splash_interfaces__srv__RequestModeChange_Response__Sequence__destroy(splash_interfaces__srv__RequestModeChange_Response__Sequence * array)
{
  if (array) {
    splash_interfaces__srv__RequestModeChange_Response__Sequence__fini(array);
  }
  free(array);
}
