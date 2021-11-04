
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>


#ifdef _MSC_VER
#define AN_APIENTRY __stdcall
#else
#define AN_APIENTRY
#endif

#include <anbinding/noan.h>
#include <anbinding/anbinding_api.h>
#include <anbinding/anbinding_features.h>
#include <anbinding/an/boolean.h>


namespace an
{


enum class AnExtension : int;
enum class AnEnum : unsigned int;
#define AN_MAKE_VERSION(major, minor, patch) \
    (((major) << 22) | ((minor) << 12) | (patch))
#define AN_VERSION_MAJOR(version) ((uint32_t)(version) >> 22)
#define AN_VERSION_MINOR(version) (((uint32_t)(version) >> 12) & 0x3ff)
#define AN_VERSION_PATCH(version) ((uint32_t)(version) & 0xfff)
// ANARI 1.0 version number
#define AN_API_VERSION_1_0 AN_MAKE_VERSION(1, 0, 0)// Patch version should always be set to 0
// Version of this file
#define AN_HEADER_VERSION 138
// Complete version of this file
#define AN_HEADER_VERSION_COMPLETE AN_MAKE_VERSION(1, 2, AN_HEADER_VERSION)
using AnFlags = uint32_t;
typedef void *AnDevice;
typedef void _AnManagedObject;
typedef _AnManagedObject* AnObject;
enum class AnError : unsigned int;
enum class AnDeviceProperty : unsigned int;
struct AnBounds {
	float lower[3];
	float upper[3];
};
using AnStatusFunc = void (AN_APIENTRY *)(const char* messageText);
enum class AnBitfield : unsigned int;


} // namespace an


#include <anbinding/an/types.inl>