
#include "Meta_Maps.h"

#include <anbinding/Version.h>


using namespace an;


namespace anbinding { namespace aux
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "anDeviceGetProperty", "anDeviceSetStatusFunc", "anDeviceSetStatusFunc", "anGetBounds", "anInit", "anNewDevice", "anSetCurrentDevice", "anShutdown" } }
};


} } // namespace anbinding::aux