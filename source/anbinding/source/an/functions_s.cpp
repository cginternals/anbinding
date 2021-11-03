
#include "../Binding_pch.h"

#include <anbinding/an/functions.h>


namespace an
{


void anSetCurrentDevice(AnDevice device)
{
    return anbinding::Binding::SetCurrentDevice(device);
}

void anShutdown()
{
    return anbinding::Binding::Shutdown();
}


} // namespace an