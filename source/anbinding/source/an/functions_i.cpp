
#include "../Binding_pch.h"

#include <anbinding/an/functions.h>


namespace an
{


AnError anInit(int* argc, const char** argv)
{
    return anbinding::Binding::Init(argc, argv);
}


} // namespace an