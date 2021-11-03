
#include <anbinding/getProcAddress.h>

#include "anGetProcAddress.h"


namespace anbinding
{


ProcAddress getProcAddress(const char * name)
{
    return ::anGetProcAddress(name);
}


} // namespace anbinding
