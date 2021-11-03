
#pragma once


#include <anbinding/an/types.h>


namespace std
{


template<>
struct hash<an::AnExtension>
{
    std::size_t operator()(const an::AnExtension & t) const
    {
        return hash<std::underlying_type<an::AnExtension>::type>()(static_cast<std::underlying_type<an::AnExtension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<an::AnEnum>
{
    std::size_t operator()(const an::AnEnum & t) const
    {
        return hash<std::underlying_type<an::AnEnum>::type>()(static_cast<std::underlying_type<an::AnEnum>::type>(t));
    }
};


} // namespace std


namespace an
{


ANBINDING_CONSTEXPR inline AnEnum operator+(const AnEnum & a, const std::underlying_type<AnEnum>::type b)
{
    return static_cast<AnEnum>(static_cast<std::underlying_type<AnEnum>::type>(a) + b);
}

ANBINDING_CONSTEXPR inline AnEnum operator-(const AnEnum & a, const std::underlying_type<AnEnum>::type b)
{
    return static_cast<AnEnum>(static_cast<std::underlying_type<AnEnum>::type>(a) - b);
}

ANBINDING_CONSTEXPR inline bool operator==(const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) == b;
}

ANBINDING_CONSTEXPR inline bool operator!=(const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) != b;
}

ANBINDING_CONSTEXPR inline bool operator< (const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) < b;
}

ANBINDING_CONSTEXPR inline bool operator<=(const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) <= b;
}

ANBINDING_CONSTEXPR inline bool operator> (const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) > b;
}

ANBINDING_CONSTEXPR inline bool operator>=(const AnEnum & a, std::underlying_type<AnEnum>::type b)
{
    return static_cast<std::underlying_type<AnEnum>::type>(a) >= b;
}

ANBINDING_CONSTEXPR inline bool operator==(std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a == static_cast<std::underlying_type<AnEnum>::type>(b);
}

ANBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a != static_cast<std::underlying_type<AnEnum>::type>(b);
}

ANBINDING_CONSTEXPR inline bool operator< (std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a < static_cast<std::underlying_type<AnEnum>::type>(b);
}

ANBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a <= static_cast<std::underlying_type<AnEnum>::type>(b);
}

ANBINDING_CONSTEXPR inline bool operator> (std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a > static_cast<std::underlying_type<AnEnum>::type>(b);
}

ANBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<AnEnum>::type a, const AnEnum & b)
{
    return a >= static_cast<std::underlying_type<AnEnum>::type>(b);
}


} // namespace an