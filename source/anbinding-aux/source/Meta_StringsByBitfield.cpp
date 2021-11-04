
#include "Meta_Maps.h"

#include <anbinding/an/bitfield.h>


using namespace an;


namespace anbinding { namespace aux
{


const std::unordered_map<AnBitfield, std::string> Meta_StringsByAnBitfield =
{
    { AnBitfield::AN_UNUSED_BIT, "AN_UNUSED_BIT" }
};


} } // namespace anbinding::aux