
#include "Meta_Maps.h"

#include <anbinding/an/boolean.h>


using namespace an;


namespace anbinding { namespace aux
{


const std::unordered_map<AnBool32, std::string> Meta_StringsByBoolean =
{
    { an::AN_FALSE, "AN_FALSE" },
    { an::AN_TRUE, "AN_TRUE" }
};


} } // namespace anbinding::aux