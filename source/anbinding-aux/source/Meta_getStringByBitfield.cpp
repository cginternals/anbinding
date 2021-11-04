
#include <anbinding-aux/Meta.h>

#include <anbinding/an/bitfield.h>

#include "Meta_Maps.h"


using namespace an;


namespace
{


const auto none = std::string{};


} // namespace


namespace anbinding { namespace aux
{


const std::string & Meta::getString(const AnBitfield anbitfield)
{
    const auto i = Meta_StringsByAnBitfield.find(anbitfield);
    if (i != Meta_StringsByAnBitfield.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace anbinding::aux