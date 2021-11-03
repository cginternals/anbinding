
#pragma once


namespace anbinding
{


ANBINDING_CONSTEXPR Boolean32::Boolean32()
: Boolean32(false)
{
}

ANBINDING_CONSTEXPR Boolean32::Boolean32(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

ANBINDING_CONSTEXPR Boolean32::Boolean32(char value)
: m_value(value)
{
}

ANBINDING_CONSTEXPR Boolean32::Boolean32(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

ANBINDING_CONSTEXPR Boolean32::Boolean32(int value)
: m_value(static_cast<underlying_type>(value))
{
}

ANBINDING_CONSTEXPR Boolean32::Boolean32(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

ANBINDING_CONSTEXPR Boolean32::operator bool() const
{
    return m_value != 0;
}

ANBINDING_CONSTEXPR Boolean32::operator char() const
{
    return m_value;
}

ANBINDING_CONSTEXPR Boolean32::operator unsigned char() const
{
    return m_value;
}

ANBINDING_CONSTEXPR Boolean32::operator int() const
{
    return m_value;
}

ANBINDING_CONSTEXPR Boolean32::operator unsigned int() const
{
    return m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator<(const Boolean32 & other) const
{
    return m_value < other.m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator>(const Boolean32 & other) const
{
    return m_value > other.m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator<=(const Boolean32 & other) const
{
    return m_value <= other.m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator>=(const Boolean32 & other) const
{
    return m_value >= other.m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator==(const Boolean32 & other) const
{
    return m_value == other.m_value;
}

ANBINDING_CONSTEXPR bool Boolean32::operator!=(const Boolean32 & other) const
{
    return m_value != other.m_value;
}


} // namespace anbinding


namespace std
{


template<>
struct hash<anbinding::Boolean32>
{
    std::size_t operator()(const anbinding::Boolean32 & boolean) const
    {
        return hash<anbinding::Boolean32::underlying_type>()(static_cast<anbinding::Boolean32::underlying_type>(boolean));
    }
};


} // namespace std