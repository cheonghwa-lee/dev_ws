// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from torcs_interfaces:msg/TORCSSensors.idl
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
#include "torcs_interfaces/msg/detail/torcs_sensors__struct.h"
#include "torcs_interfaces/msg/detail/torcs_sensors__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool torcs_interfaces__msg__torcs_sensors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("torcs_interfaces.msg._torcs_sensors.TORCSSensors", full_classname_dest, 48) == 0);
  }
  torcs_interfaces__msg__TORCSSensors * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_lap_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_lap_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_lap_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damage
    PyObject * field = PyObject_GetAttrString(_pymsg, "damage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_from_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_from_start");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_from_start = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_raced
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_raced");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_raced = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_to_middle
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_to_middle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_to_middle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_to_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_to_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_to_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_to_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_to_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_to_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // last_lap_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_lap_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_lap_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // race_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "race_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->race_pos = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rpm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_spin_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_spin_vel");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheel_spin_vel'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->wheel_spin_vel), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->wheel_spin_vel.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * torcs_interfaces__msg__torcs_sensors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TORCSSensors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("torcs_interfaces.msg._torcs_sensors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TORCSSensors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  torcs_interfaces__msg__TORCSSensors * ros_message = (torcs_interfaces__msg__TORCSSensors *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_lap_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_lap_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_lap_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_from_start
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_from_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_from_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_raced
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_raced);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_raced", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_to_middle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_to_middle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_to_middle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_to_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_to_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_to_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_to_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_to_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_to_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_lap_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_lap_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_lap_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // race_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->race_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "race_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_spin_vel
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wheel_spin_vel");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->wheel_spin_vel.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->wheel_spin_vel.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->wheel_spin_vel.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
