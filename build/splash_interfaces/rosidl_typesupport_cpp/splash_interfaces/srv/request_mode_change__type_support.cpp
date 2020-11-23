// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "splash_interfaces/srv/detail/request_mode_change__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace splash_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestModeChange_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestModeChange_Request_type_support_ids_t;

static const _RequestModeChange_Request_type_support_ids_t _RequestModeChange_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestModeChange_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestModeChange_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestModeChange_Request_type_support_symbol_names_t _RequestModeChange_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, splash_interfaces, srv, RequestModeChange_Request)),
  }
};

typedef struct _RequestModeChange_Request_type_support_data_t
{
  void * data[2];
} _RequestModeChange_Request_type_support_data_t;

static _RequestModeChange_Request_type_support_data_t _RequestModeChange_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestModeChange_Request_message_typesupport_map = {
  2,
  "splash_interfaces",
  &_RequestModeChange_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RequestModeChange_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RequestModeChange_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RequestModeChange_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestModeChange_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Request>()
{
  return &::splash_interfaces::srv::rosidl_typesupport_cpp::RequestModeChange_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, splash_interfaces, srv, RequestModeChange_Request)() {
  return get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace splash_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestModeChange_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestModeChange_Response_type_support_ids_t;

static const _RequestModeChange_Response_type_support_ids_t _RequestModeChange_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestModeChange_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestModeChange_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestModeChange_Response_type_support_symbol_names_t _RequestModeChange_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, splash_interfaces, srv, RequestModeChange_Response)),
  }
};

typedef struct _RequestModeChange_Response_type_support_data_t
{
  void * data[2];
} _RequestModeChange_Response_type_support_data_t;

static _RequestModeChange_Response_type_support_data_t _RequestModeChange_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestModeChange_Response_message_typesupport_map = {
  2,
  "splash_interfaces",
  &_RequestModeChange_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RequestModeChange_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RequestModeChange_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RequestModeChange_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestModeChange_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Response>()
{
  return &::splash_interfaces::srv::rosidl_typesupport_cpp::RequestModeChange_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, splash_interfaces, srv, RequestModeChange_Response)() {
  return get_message_type_support_handle<splash_interfaces::srv::RequestModeChange_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "splash_interfaces/srv/detail/request_mode_change__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace splash_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestModeChange_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestModeChange_type_support_ids_t;

static const _RequestModeChange_type_support_ids_t _RequestModeChange_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestModeChange_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestModeChange_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestModeChange_type_support_symbol_names_t _RequestModeChange_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, splash_interfaces, srv, RequestModeChange)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, splash_interfaces, srv, RequestModeChange)),
  }
};

typedef struct _RequestModeChange_type_support_data_t
{
  void * data[2];
} _RequestModeChange_type_support_data_t;

static _RequestModeChange_type_support_data_t _RequestModeChange_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestModeChange_service_typesupport_map = {
  2,
  "splash_interfaces",
  &_RequestModeChange_service_typesupport_ids.typesupport_identifier[0],
  &_RequestModeChange_service_typesupport_symbol_names.symbol_name[0],
  &_RequestModeChange_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RequestModeChange_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestModeChange_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace splash_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<splash_interfaces::srv::RequestModeChange>()
{
  return &::splash_interfaces::srv::rosidl_typesupport_cpp::RequestModeChange_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
