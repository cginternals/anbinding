
#pragma once


#include <anbinding/noan.h>

#include <anbinding/anbinding_features.h>


namespace an
{


enum class AnEnum : unsigned int
{
    // AnDeviceProperty

    AN_DEVICE_VERSION       = 0,
    AN_DEVICE_VERSION_MAJOR = 1,
    AN_DEVICE_VERSION_MINOR = 2,
    AN_DEVICE_VERSION_PATCH = 3,
    AN_DEVICE_SO_VERSION    = 4,

    // AnEnum

//  AN_NO_ERROR             = 0, // reuse AnError
//  AN_DEVICE_VERSION       = 0, // reuse AnDeviceProperty
//  AN_UNKNOWN_ERROR        = 1, // reuse AnError
//  AN_DEVICE_VERSION_MAJOR = 1, // reuse AnDeviceProperty
//  AN_INVALID_ARGUMENT     = 2, // reuse AnError
//  AN_DEVICE_VERSION_MINOR = 2, // reuse AnDeviceProperty
//  AN_INVALID_OPERATION    = 3, // reuse AnError
//  AN_DEVICE_VERSION_PATCH = 3, // reuse AnDeviceProperty
//  AN_OUT_OF_MEMORY        = 4, // reuse AnError
//  AN_DEVICE_SO_VERSION    = 4, // reuse AnDeviceProperty
//  AN_UNSUPPORTED_CPU      = 5, // reuse AnError
//  AN_VERSION_MISMATCH     = 6, // reuse AnError

    // AnError

    AN_NO_ERROR             = 0,
    AN_UNKNOWN_ERROR        = 1,
    AN_INVALID_ARGUMENT     = 2,
    AN_INVALID_OPERATION    = 3,
    AN_OUT_OF_MEMORY        = 4,
    AN_UNSUPPORTED_CPU      = 5,
    AN_VERSION_MISMATCH     = 6,

};


// import enums to namespace

// AnDeviceProperty

ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION = AnEnum::AN_DEVICE_VERSION;
ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_MAJOR = AnEnum::AN_DEVICE_VERSION_MAJOR;
ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_MINOR = AnEnum::AN_DEVICE_VERSION_MINOR;
ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_PATCH = AnEnum::AN_DEVICE_VERSION_PATCH;
ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_SO_VERSION = AnEnum::AN_DEVICE_SO_VERSION;

// AnEnum

// ANBINDING_CONSTEXPR static const AnEnum AN_NO_ERROR = AnEnum::AN_NO_ERROR; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION = AnEnum::AN_DEVICE_VERSION; // reuse AnDeviceProperty
// ANBINDING_CONSTEXPR static const AnEnum AN_UNKNOWN_ERROR = AnEnum::AN_UNKNOWN_ERROR; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_MAJOR = AnEnum::AN_DEVICE_VERSION_MAJOR; // reuse AnDeviceProperty
// ANBINDING_CONSTEXPR static const AnEnum AN_INVALID_ARGUMENT = AnEnum::AN_INVALID_ARGUMENT; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_MINOR = AnEnum::AN_DEVICE_VERSION_MINOR; // reuse AnDeviceProperty
// ANBINDING_CONSTEXPR static const AnEnum AN_INVALID_OPERATION = AnEnum::AN_INVALID_OPERATION; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_VERSION_PATCH = AnEnum::AN_DEVICE_VERSION_PATCH; // reuse AnDeviceProperty
// ANBINDING_CONSTEXPR static const AnEnum AN_OUT_OF_MEMORY = AnEnum::AN_OUT_OF_MEMORY; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_DEVICE_SO_VERSION = AnEnum::AN_DEVICE_SO_VERSION; // reuse AnDeviceProperty
// ANBINDING_CONSTEXPR static const AnEnum AN_UNSUPPORTED_CPU = AnEnum::AN_UNSUPPORTED_CPU; // reuse AnError
// ANBINDING_CONSTEXPR static const AnEnum AN_VERSION_MISMATCH = AnEnum::AN_VERSION_MISMATCH; // reuse AnError

// AnError

ANBINDING_CONSTEXPR static const AnEnum AN_NO_ERROR = AnEnum::AN_NO_ERROR;
ANBINDING_CONSTEXPR static const AnEnum AN_UNKNOWN_ERROR = AnEnum::AN_UNKNOWN_ERROR;
ANBINDING_CONSTEXPR static const AnEnum AN_INVALID_ARGUMENT = AnEnum::AN_INVALID_ARGUMENT;
ANBINDING_CONSTEXPR static const AnEnum AN_INVALID_OPERATION = AnEnum::AN_INVALID_OPERATION;
ANBINDING_CONSTEXPR static const AnEnum AN_OUT_OF_MEMORY = AnEnum::AN_OUT_OF_MEMORY;
ANBINDING_CONSTEXPR static const AnEnum AN_UNSUPPORTED_CPU = AnEnum::AN_UNSUPPORTED_CPU;
ANBINDING_CONSTEXPR static const AnEnum AN_VERSION_MISMATCH = AnEnum::AN_VERSION_MISMATCH;



} // namespace an