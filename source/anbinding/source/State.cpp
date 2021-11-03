
#include <anbinding/State.h>

#include <anbinding/Binding.h>


namespace anbinding
{


void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace anbinding