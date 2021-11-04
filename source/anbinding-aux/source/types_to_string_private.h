
#pragma once


#include <ostream>
#include <bitset>
#include <sstream>

#include <anbinding-aux/Meta.h>


namespace anbinding { namespace aux
{


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(an::AnBitfield) * 8> bits(static_cast<int>(static_cast<an::AnBitfield>(value)));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(an::AnBitfield) * 8; ++i)
    {
    if (!bits.test(i))
        continue;

    if (first)
        {
            first = false;
        }
        else
        {
            ss << " | ";
        }

    const an::AnBitfield bit = static_cast<an::AnBitfield>(1 << i);

    const auto identifier = anbinding::aux::Meta::getString(static_cast<T>(bit));
    if (identifier.empty())
    {
        ss << "1 << " << i;
    }
    else
    {
        ss << identifier;
    }
    }
    return ss.str();
}

std::string wrapString(const char * value);


} } // namespace anbinding::aux
