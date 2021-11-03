
#include "Meta_Maps.h"

#include <anbinding/an/boolean.h>


using namespace an;


namespace anbinding { namespace aux
{


const std::unordered_map<std::string, AnBool32> Meta_BooleansByString =
{
    { "AN_FALSE", an::AN_FALSE },
    { "AN_TRUE", an::AN_TRUE }
};


} } // namespace anbinding::aux