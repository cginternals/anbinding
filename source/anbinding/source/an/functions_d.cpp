
#include "../Binding_pch.h"

#include <anbinding/an/functions.h>


namespace an
{


int64_t anDeviceGetProperty(AnDevice device, AnDeviceProperty property)
{
    return anbinding::Binding::DeviceGetProperty(device, property);
}

void anDeviceSetStatusFunc(AnDevice device, AnStatusFunc callback)
{
    return anbinding::Binding::DeviceSetStatusFunc(device, callback);
}


} // namespace an