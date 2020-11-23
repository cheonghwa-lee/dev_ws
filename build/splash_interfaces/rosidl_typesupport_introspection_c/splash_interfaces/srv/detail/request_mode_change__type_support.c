// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "splash_interfaces/srv/detail/request_mode_change__rosidl_typesupport_introspection_c.h"
#include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "splash_interfaces/srv/detail/request_mode_change__functions.h"
#include "splash_interfaces/srv/detail/request_mode_change__struct.h"


// Include directives for member types
// Member `factory`
// Member `event`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__RequestModeChange_Request__init(message_memory);
}

void RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_fini_function(void * message_memory)
{
  splash_interfaces__srv__RequestModeChange_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_member_array[2] = {
  {
    "factory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RequestModeChange_Request, factory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RequestModeChange_Request, event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_members = {
  "splash_interfaces__srv",  // message namespace
  "RequestModeChange_Request",  // message name
  2,  // number of fields
  sizeof(splash_interfaces__srv__RequestModeChange_Request),
  RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_member_array,  // message members
  RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_type_support_handle = {
  0,
  &RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Request)() {
  if (!RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_type_support_handle.typesupport_identifier) {
    RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RequestModeChange_Request__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__rosidl_typesupport_introspection_c.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__functions.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  splash_interfaces__srv__RequestModeChange_Response__init(message_memory);
}

void RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_fini_function(void * message_memory)
{
  splash_interfaces__srv__RequestModeChange_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(splash_interfaces__srv__RequestModeChange_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_members = {
  "splash_interfaces__srv",  // message namespace
  "RequestModeChange_Response",  // message name
  1,  // number of fields
  sizeof(splash_interfaces__srv__RequestModeChange_Response),
  RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_member_array,  // message members
  RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_type_support_handle = {
  0,
  &RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Response)() {
  if (!RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_type_support_handle.typesupport_identifier) {
    RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RequestModeChange_Response__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "splash_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_members = {
  "splash_interfaces__srv",  // service namespace
  "RequestModeChange",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_Request_message_type_support_handle,
  NULL  // response message
  // splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_Response_message_type_support_handle
};

static rosidl_service_type_support_t splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_type_support_handle = {
  0,
  &splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_splash_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange)() {
  if (!splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_type_support_handle.typesupport_identifier) {
    splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, srv, RequestModeChange_Response)()->data;
  }

  return &splash_interfaces__srv__detail__request_mode_change__rosidl_typesupport_introspection_c__RequestModeChange_service_type_support_handle;
}
