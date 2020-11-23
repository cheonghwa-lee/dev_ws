// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from splash_interfaces:srv/RegisterMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "splash_interfaces/srv/detail/register_mode__rosidl_typesupport_introspection_c.h"
#include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "splash_interfaces/srv/detail/register_mode__functions.h"
#include "splash_interfaces/srv/detail/register_mode__struct.h"


// Include directives for member types
// Member `factory`
// Member `mode_configuration`
// Member `name_space`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__RegisterMode_Request__init(message_memory);
}

void RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_fini_function(void * message_memory)
{
  splash_interfaces__srv__RegisterMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_member_array[3] = {
  {
    "factory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RegisterMode_Request, factory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_configuration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RegisterMode_Request, mode_configuration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name_space",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RegisterMode_Request, name_space),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_members = {
  "splash_interfaces__srv",  // message namespace
  "RegisterMode_Request",  // message name
  3,  // number of fields
  sizeof(splash_interfaces__srv__RegisterMode_Request),
  RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_member_array,  // message members
  RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_type_support_handle = {
  0,
  &RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Request)() {
  if (!RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_type_support_handle.typesupport_identifier) {
    RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterMode_Request__rosidl_typesupport_introspection_c__RegisterMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "splash_interfaces/srv/detail/register_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__functions.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__RegisterMode_Response__init(message_memory);
}

void RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_fini_function(void * message_memory)
{
  splash_interfaces__srv__RegisterMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RegisterMode_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_members = {
  "splash_interfaces__srv",  // message namespace
  "RegisterMode_Response",  // message name
  1,  // number of fields
  sizeof(splash_interfaces__srv__RegisterMode_Response),
  RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_member_array,  // message members
  RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_type_support_handle = {
  0,
  &RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Response)() {
  if (!RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_type_support_handle.typesupport_identifier) {
    RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterMode_Response__rosidl_typesupport_introspection_c__RegisterMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "splash_interfaces/srv/detail/register_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_members = {
  "splash_interfaces__srv",  // service namespace
  "RegisterMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_Request_message_type_support_handle,
  NULL  // response message
  // splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_type_support_handle = {
  0,
  &splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode)() {
  if (!splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_type_support_handle.typesupport_identifier) {
    splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RegisterMode_Response)()->data;
  }

  return &splash_interfaces__srv__detail__register_mode__rosidl_typesupport_introspection_c__RegisterMode_service_type_support_handle;
}
