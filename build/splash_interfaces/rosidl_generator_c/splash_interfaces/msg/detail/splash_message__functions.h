// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from splash_interfaces:msg/SplashMessage.idl
// generated code does not contain a copyright notice

#ifndef SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__FUNCTIONS_H_
#define SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "splash_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "splash_interfaces/msg/detail/splash_message__struct.h"

/// Initialize msg/SplashMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * splash_interfaces__msg__SplashMessage
 * )) before or use
 * splash_interfaces__msg__SplashMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__msg__SplashMessage__init(splash_interfaces__msg__SplashMessage * msg);

/// Finalize msg/SplashMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__msg__SplashMessage__fini(splash_interfaces__msg__SplashMessage * msg);

/// Create msg/SplashMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * splash_interfaces__msg__SplashMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__msg__SplashMessage *
splash_interfaces__msg__SplashMessage__create();

/// Destroy msg/SplashMessage message.
/**
 * It calls
 * splash_interfaces__msg__SplashMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__msg__SplashMessage__destroy(splash_interfaces__msg__SplashMessage * msg);


/// Initialize array of msg/SplashMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * splash_interfaces__msg__SplashMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
bool
splash_interfaces__msg__SplashMessage__Sequence__init(splash_interfaces__msg__SplashMessage__Sequence * array, size_t size);

/// Finalize array of msg/SplashMessage messages.
/**
 * It calls
 * splash_interfaces__msg__SplashMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__msg__SplashMessage__Sequence__fini(splash_interfaces__msg__SplashMessage__Sequence * array);

/// Create array of msg/SplashMessage messages.
/**
 * It allocates the memory for the array and calls
 * splash_interfaces__msg__SplashMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
splash_interfaces__msg__SplashMessage__Sequence *
splash_interfaces__msg__SplashMessage__Sequence__create(size_t size);

/// Destroy array of msg/SplashMessage messages.
/**
 * It calls
 * splash_interfaces__msg__SplashMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_splash_interfaces
void
splash_interfaces__msg__SplashMessage__Sequence__destroy(splash_interfaces__msg__SplashMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SPLASH_INTERFACES__MSG__DETAIL__SPLASH_MESSAGE__FUNCTIONS_H_
