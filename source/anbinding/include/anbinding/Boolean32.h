
#pragma once


#include <functional>

#include <anbinding/anbinding_api.h>
#include <anbinding/anbinding_features.h>


namespace anbinding
{


class ANBINDING_API Boolean32
{
public:
    using underlying_type = unsigned int;

public:
    ANBINDING_CONSTEXPR inline Boolean32();
    ANBINDING_CONSTEXPR inline Boolean32(bool on);
    ANBINDING_CONSTEXPR inline Boolean32(char on);
    ANBINDING_CONSTEXPR inline Boolean32(unsigned char on);
    ANBINDING_CONSTEXPR inline Boolean32(int on);
    ANBINDING_CONSTEXPR inline Boolean32(unsigned int on);

    ANBINDING_CONSTEXPR inline explicit operator bool() const;
    ANBINDING_CONSTEXPR inline explicit operator char() const;
    ANBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    ANBINDING_CONSTEXPR inline explicit operator int() const;
    ANBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    ANBINDING_CONSTEXPR inline bool operator<(const Boolean32 & other) const;
    ANBINDING_CONSTEXPR inline bool operator>(const Boolean32 & other) const;
    ANBINDING_CONSTEXPR inline bool operator<=(const Boolean32 & other) const;
    ANBINDING_CONSTEXPR inline bool operator>=(const Boolean32 & other) const;

    ANBINDING_CONSTEXPR inline bool operator==(const Boolean32 & other) const;
    ANBINDING_CONSTEXPR inline bool operator!=(const Boolean32 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <anbinding/Boolean32.inl>