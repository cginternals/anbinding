
#pragma once


#include <string>
#include <iosfwd>

#include <anbinding-aux/anbinding-aux_api.h>
#include <anbinding-aux/anbinding-aux_features.h>

#include <anbinding/an/types.h>
#include <anbinding/Value.h>


namespace an
{


ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AnDeviceProperty & value);
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AnEnum & value);
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AnError & value);
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AnBool32 & value);
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AnExtension & value);


} // namespace an


namespace anbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
ANBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
ANBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<an::AnEnum> & value);

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<an::AnBitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<an::AnBool32> & value);

/**
*  @brief
*    A specialized ostream operator for the const char * Value template
*/
template <>
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
ANBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace anbinding


#include <anbinding-aux/types_to_string.inl>