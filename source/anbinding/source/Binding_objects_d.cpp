
#include "Binding_pch.h"


using namespace an;


namespace anbinding
{


Function<int64_t, AnDevice, AnDeviceProperty> Binding::DeviceGetProperty("anDeviceGetProperty");
Function<void, AnDevice, AnStatusFunc> Binding::DeviceSetStatusFunc("anDeviceSetStatusFunc");


} // namespace anbinding