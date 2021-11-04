
#include <anbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <anbinding/Version.h>
#include <anbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace an
{


std::ostream & operator<<(std::ostream & stream, const AnDeviceProperty & value)
{
    const auto strings = anbinding::aux::Meta::getStrings(value);

    if (strings.size() == 0)
    {
        return stream;
    }

    stream << strings[0];

    for (auto i = static_cast<std::size_t>(1); i < strings.size(); ++i)
        stream << " | " << strings[i];

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AnEnum & value)
{
    const auto strings = anbinding::aux::Meta::getStrings(value);

    if (strings.size() == 0)
    {
        return stream;
    }

    stream << strings[0];

    for (auto i = static_cast<std::size_t>(1); i < strings.size(); ++i)
        stream << " | " << strings[i];

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AnError & value)
{
    const auto strings = anbinding::aux::Meta::getStrings(value);

    if (strings.size() == 0)
    {
        return stream;
    }

    stream << strings[0];

    for (auto i = static_cast<std::size_t>(1); i < strings.size(); ++i)
        stream << " | " << strings[i];

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AnBool32 & value)
{
    stream << anbinding::aux::Meta::getString(value);

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AnExtension & value)
{
    stream << anbinding::aux::Meta::getString(value);

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AnBitfield & value)
{
    stream << anbinding::aux::bitfieldString<AnBitfield>(value);
    return stream;
}


} // namespace an


namespace anbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<an::AnEnum> & value)
{
    stream << value.value();

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<an::AnBitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<an::AnBool32> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value)
{
    auto s = aux::wrapString(value.value());
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}



std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    if (typeid(*value) == typeid(Value<char>))
    {
        return stream << *reinterpret_cast<const Value<char>*>(value);
    }

    if (typeid(*value) == typeid(Value<double>))
    {
        return stream << *reinterpret_cast<const Value<double>*>(value);
    }

    if (typeid(*value) == typeid(Value<float>))
    {
        return stream << *reinterpret_cast<const Value<float>*>(value);
    }

    if (typeid(*value) == typeid(Value<int>))
    {
        return stream << *reinterpret_cast<const Value<int>*>(value);
    }

    if (typeid(*value) == typeid(Value<long>))
    {
        return stream << *reinterpret_cast<const Value<long>*>(value);
    }

    if (typeid(*value) == typeid(Value<long long>))
    {
        return stream << *reinterpret_cast<const Value<long long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned char>))
    {
        return stream << *reinterpret_cast<const Value<unsigned char>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned int>))
    {
        return stream << *reinterpret_cast<const Value<unsigned int>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long long>*>(value);
    }
if (typeid(*value) == typeid(Value<const char *>))
    {
        return stream << *reinterpret_cast<const Value<const char *>*>(value);
    }

    /*
    if (typeid(*value) == typeid(Value<an::_AnManagedObject>))
    {
        return stream << *reinterpret_cast<const Value<an::_AnManagedObject>*>(value);
    }
    */
    
    if (typeid(*value) == typeid(Value<an::_AnManagedObject *>))
    {
        return stream << *reinterpret_cast<const Value<an::_AnManagedObject *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnBitfield>))
    {
        return stream << *reinterpret_cast<const Value<an::AnBitfield>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnBitfield *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnBitfield *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnDevice>))
    {
        return stream << *reinterpret_cast<const Value<an::AnDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnDevice *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnDeviceProperty>))
    {
        return stream << *reinterpret_cast<const Value<an::AnDeviceProperty>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnDeviceProperty *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnDeviceProperty *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnEnum>))
    {
        return stream << *reinterpret_cast<const Value<an::AnEnum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnEnum *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnEnum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnError>))
    {
        return stream << *reinterpret_cast<const Value<an::AnError>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnError *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnError *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnExtension>))
    {
        return stream << *reinterpret_cast<const Value<an::AnExtension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnExtension *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnExtension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<an::AnObject>))
    {
        return stream << *reinterpret_cast<const Value<an::AnObject>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<an::AnObject *>))
    {
        return stream << *reinterpret_cast<const Value<an::AnObject *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace anbinding