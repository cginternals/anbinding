
#pragma once


#include <anbinding/noan.h>

#include <anbinding/anbinding_features.h>

#include <anbinding/SharedBitfield.h>


namespace an
{


enum class AnBitfield : unsigned int
{
    AN_UNUSED_BIT = 0x00000000
};


// import bitfields to namespace

ANBINDING_CONSTEXPR static const AnBitfield AN_UNUSED_BIT = AnBitfield::AN_UNUSED_BIT;


} // namespace an