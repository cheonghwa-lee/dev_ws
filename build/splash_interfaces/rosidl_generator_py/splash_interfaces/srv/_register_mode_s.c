// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "splash_interfaces/srv/detail/register_mode__struct.h"
#include "splash_interfaces/srv/detail/register_mode__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool splash_interfaces__srv__register_mode__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("splash_interfaces.srv._register_mode.RegisterMode_Request", full_classname_dest, 57) == 0);
  }
  splash_interfaces__srv__RegisterMode_Request * ros_message = _ros_message;
  {  // factory
    PyObject * field = PyObject_GetAttrString(_pymsg, "factory");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->factory, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode_configuration
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_configuration");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode_configuration, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name_space
    PyObject * field = PyObject_GetAttrString(_pymsg, "name_space");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name_space, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * splash_interfaces__srv__register_mode__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RegisterMode_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("splash_interfaces.srv._register_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegisterMode_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  splash_interfaces__srv__RegisterMode_Request * ros_message = (splash_interfaces__srv__RegisterMode_Request *)raw_ros_message;
  {  // factory
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->factory.data,
      strlen(ros_message->factory.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "factory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_configuration
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode_configuration.data,
      strlen(ros_message->mode_configuration.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_configuration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name_space
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name_space.data,
      strlen(ros_message->name_space.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name_space", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__struct.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool splash_interfaces__srv__register_mode__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("splash_interfaces.srv._register_mode.RegisterMode_Response", full_classname_dest, 58) == 0);
  }
  splash_interfaces__srv__RegisterMode_Response * ros_message = _ros_message;
  {  // ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ok = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * splash_interfaces__srv__register_mode__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RegisterMode_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("splash_interfaces.srv._register_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegisterMode_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  splash_interfaces__srv__RegisterMode_Response * ros_message = (splash_interfaces__srv__RegisterMode_Response *)raw_ros_message;
  {  // ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
