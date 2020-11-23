// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "splash_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "splash_interfaces/msg/detail/splash_message__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace splash_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _SplashMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SplashMessage_type_support_ids_t;

static const _SplashMessage_type_support_ids_t _SplashMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SplashMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SplashMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SplashMessage_type_support_symbol_names_t _SplashMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, splash_interfaces, msg, SplashMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, splash_interfaces, msg, SplashMessage)),
  }
};

typedef struct _SplashMessage_type_support_data_t
{
  void * data[2];
} _SplashMessage_type_support_data_t;

static _SplashMessage_type_support_data_t _SplashMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SplashMessage_message_typesupport_map = {
  2,
  "splash_interfaces",
  &_SplashMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SplashMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SplashMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SplashMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SplashMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace splash_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_splash_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, splash_interfaces, msg, SplashMessage)() {
  return &::splash_interfaces::msg::rosidl_typesupport_c::SplashMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
