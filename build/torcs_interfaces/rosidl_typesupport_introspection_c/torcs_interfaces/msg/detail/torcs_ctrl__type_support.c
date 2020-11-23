// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from torcs_interfaces:msg/TORCSCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "torcs_interfaces/msg/detail/torcs_ctrl__rosidl_typesupport_introspection_c.h"
#include "torcs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "torcs_interfaces/msg/detail/torcs_ctrl__functions.h"
#include "torcs_interfaces/msg/detail/torcs_ctrl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  torcs_interfaces__msg__TORCSCtrl__init(message_memory);
}

void TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_fini_function(void * message_memory)
{
  torcs_interfaces__msg__TORCSCtrl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clutch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, clutch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "focus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, focus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "meta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torcs_interfaces__msg__TORCSCtrl, meta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_members = {
  "torcs_interfaces__msg",  // message namespace
  "TORCSCtrl",  // message name
  8,  // number of fields
  sizeof(torcs_interfaces__msg__TORCSCtrl),
  TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_member_array,  // message members
  TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_type_support_handle = {
  0,
  &TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_torcs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torcs_interfaces, msg, TORCSCtrl)() {
  TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_type_support_handle.typesupport_identifier) {
    TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TORCSCtrl__rosidl_typesupport_introspection_c__TORCSCtrl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
