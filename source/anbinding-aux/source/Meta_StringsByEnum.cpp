
#include "Meta_Maps.h"

#include <anbinding/an/enum.h>


using namespace an;


namespace anbinding { namespace aux
{


const std::multimap<AnEnum, std::string> Meta_StringsByEnum =
{
    { AnEnum::AN_DEVICE_SO_VERSION, "AN_DEVICE_SO_VERSION" },
    { AnEnum::AN_DEVICE_VERSION, "AN_DEVICE_VERSION" },
    { AnEnum::AN_DEVICE_VERSION_MAJOR, "AN_DEVICE_VERSION_MAJOR" },
    { AnEnum::AN_DEVICE_VERSION_MINOR, "AN_DEVICE_VERSION_MINOR" },
    { AnEnum::AN_DEVICE_VERSION_PATCH, "AN_DEVICE_VERSION_PATCH" },
    { AnEnum::AN_INVALID_ARGUMENT, "AN_INVALID_ARGUMENT" },
    { AnEnum::AN_INVALID_OPERATION, "AN_INVALID_OPERATION" },
    { AnEnum::AN_NO_ERROR, "AN_NO_ERROR" },
    { AnEnum::AN_OUT_OF_MEMORY, "AN_OUT_OF_MEMORY" },
    { AnEnum::AN_UNKNOWN_ERROR, "AN_UNKNOWN_ERROR" },
    { AnEnum::AN_UNSUPPORTED_CPU, "AN_UNSUPPORTED_CPU" },
    { AnEnum::AN_VERSION_MISMATCH, "AN_VERSION_MISMATCH" }
};


} } // namespace anbinding::aux