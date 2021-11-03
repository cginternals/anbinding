
#include "Binding_pch.h"


using namespace an;


namespace anbinding
{


const Binding::array_t Binding::s_functions =
{{
    &DeviceGetProperty,
    &DeviceSetStatusFunc,
    &GetBounds,
    &Init,
    &NewDevice,
    &SetCurrentDevice,
    &Shutdown
}};


} // namespace anbinding