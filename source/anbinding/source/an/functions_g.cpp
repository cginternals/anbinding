
#include "../Binding_pch.h"

#include <anbinding/an/functions.h>


namespace an
{


AnBounds anGetBounds(AnObject object)
{
    return anbinding::Binding::GetBounds(object);
}


} // namespace an