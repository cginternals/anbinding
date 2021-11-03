
#include "../Binding_pch.h"

#include <anbinding/an/functions.h>


namespace an
{


AnDevice anNewDevice(const char* deviceType)
{
    return anbinding::Binding::NewDevice(deviceType);
}


} // namespace an