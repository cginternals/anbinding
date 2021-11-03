
#include "Binding_pch.h"


using namespace an;


namespace anbinding
{


Function<void, AnDevice> Binding::SetCurrentDevice("anSetCurrentDevice");
Function<void> Binding::Shutdown("anShutdown");


} // namespace anbinding