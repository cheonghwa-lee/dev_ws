// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from splash_interfaces:srv/RequestModeChange.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__FUNCTIONS_H_
#define SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "splash_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "splash_interfaces/srv/detail/request_mode_change__struct.h"

/// Initialize srv/RequestModeChange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * splash_interfaces__srv__RequestModeChange_Request
 * )) before or use
 * splash_interfaces__srv__RequestModeChange_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__srv__RequestModeChange_Request__init(splash_interfaces__srv__RequestModeChange_Request * msg);

/// Finalize srv/RequestModeChange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Request__fini(splash_interfaces__srv__RequestModeChange_Request * msg);

/// Create srv/RequestModeChange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * splash_interfaces__srv__RequestModeChange_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__srv__RequestModeChange_Request *
splash_interfaces__srv__RequestModeChange_Request__create();

/// Destroy srv/RequestModeChange message.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Request__destroy(splash_interfaces__srv__RequestModeChange_Request * msg);


/// Initialize array of srv/RequestModeChange messages.
/**
 * It allocates the memory for the number of elements and calls
 * splash_interfaces__srv__RequestModeChange_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__srv__RequestModeChange_Request__Sequence__init(splash_interfaces__srv__RequestModeChange_Request__Sequence * array, size_t size);

/// Finalize array of srv/RequestModeChange messages.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Request__Sequence__fini(splash_interfaces__srv__RequestModeChange_Request__Sequence * array);

/// Create array of srv/RequestModeChange messages.
/**
 * It allocates the memory for the array and calls
 * splash_interfaces__srv__RequestModeChange_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__srv__RequestModeChange_Request__Sequence *
splash_interfaces__srv__RequestModeChange_Request__Sequence__create(size_t size);

/// Destroy array of srv/RequestModeChange messages.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Request__Sequence__destroy(splash_interfaces__srv__RequestModeChange_Request__Sequence * array);

/// Initialize srv/RequestModeChange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * splash_interfaces__srv__RequestModeChange_Response
 * )) before or use
 * splash_interfaces__srv__RequestModeChange_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__srv__RequestModeChange_Response__init(splash_interfaces__srv__RequestModeChange_Response * msg);

/// Finalize srv/RequestModeChange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Response__fini(splash_interfaces__srv__RequestModeChange_Response * msg);

/// Create srv/RequestModeChange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * splash_interfaces__srv__RequestModeChange_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__srv__RequestModeChange_Response *
splash_interfaces__srv__RequestModeChange_Response__create();

/// Destroy srv/RequestModeChange message.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Response__destroy(splash_interfaces__srv__RequestModeChange_Response * msg);


/// Initialize array of srv/RequestModeChange messages.
/**
 * It allocates the memory for the number of elements and calls
 * splash_interfaces__srv__RequestModeChange_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__srv__RequestModeChange_Response__Sequence__init(splash_interfaces__srv__RequestModeChange_Response__Sequence * array, size_t size);

/// Finalize array of srv/RequestModeChange messages.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Response__Sequence__fini(splash_interfaces__srv__RequestModeChange_Response__Sequence * array);

/// Create array of srv/RequestModeChange messages.
/**
 * It allocates the memory for the array and calls
 * splash_interfaces__srv__RequestModeChange_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__srv__RequestModeChange_Response__Sequence *
splash_interfaces__srv__RequestModeChange_Response__Sequence__create(size_t size);

/// Destroy array of srv/RequestModeChange messages.
/**
 * It calls
 * splash_interfaces__srv__RequestModeChange_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__srv__RequestModeChange_Response__Sequence__destroy(splash_interfaces__srv__RequestModeChange_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__SRV__DETAIL__REQUEST_MODE_CHANGE__FUNCTIONS_H_