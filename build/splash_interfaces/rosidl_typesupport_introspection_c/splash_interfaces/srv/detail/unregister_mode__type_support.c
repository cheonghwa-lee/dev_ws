// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from splash_interfaces:srv/UnregisterMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "splash_interfaces/srv/detail/unregister_mode__rosidl_typesupport_introspection_c.h"
#include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "splash_interfaces/srv/detail/unregister_mode__functions.h"
#include "splash_interfaces/srv/detail/unregister_mode__struct.h"


// Include directives for member types
// Member `factory`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__UnregisterMode_Request__init(message_memory);
}

void UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_fini_function(void * message_memory)
{
  splash_interfaces__srv__UnregisterMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_member_array[1] = {
  {
    "factory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__UnregisterMode_Request, factory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_members = {
  "splash_interfaces__srv",  // message namespace
  "UnregisterMode_Request",  // message name
  1,  // number of fields
  sizeof(splash_interfaces__srv__UnregisterMode_Request),
  UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_member_array,  // message members
  UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_type_support_handle = {
  0,
  &UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Request)() {
  if (!UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_type_support_handle.typesupport_identifier) {
    UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnregisterMode_Request__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "splash_interfaces/srv/detail/unregister_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "splash_interfaces/srv/detail/unregister_mode__functions.h"
// already included above
// #include "splash_interfaces/srv/detail/unregister_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__UnregisterMode_Response__init(message_memory);
}

void UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_fini_function(void * message_memory)
{
  splash_interfaces__srv__UnregisterMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__UnregisterMode_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_members = {
  "splash_interfaces__srv",  // message namespace
  "UnregisterMode_Response",  // message name
  1,  // number of fields
  sizeof(splash_interfaces__srv__UnregisterMode_Response),
  UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_member_array,  // message members
  UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_type_support_handle = {
  0,
  &UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Response)() {
  if (!UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_type_support_handle.typesupport_identifier) {
    UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnregisterMode_Response__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "splash_interfaces/srv/detail/unregister_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_members = {
  "splash_interfaces__srv",  // service namespace
  "UnregisterMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_Request_message_type_support_handle,
  NULL  // response message
  // splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_type_support_handle = {
  0,
  &splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode)() {
  if (!splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_type_support_handle.typesupport_identifier) {
    splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, UnregisterMode_Response)()->data;
  }

  return &splash_interfaces__srv__detail__unregister_mode__rosidl_typesupport_introspection_c__UnregisterMode_service_type_support_handle;
}
