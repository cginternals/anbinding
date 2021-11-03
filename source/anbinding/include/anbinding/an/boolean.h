
#pragma once


#include <anbinding/Boolean32.h>

#include <anbinding/anbinding_api.h>
#include <anbinding/anbinding_features.h>
#include <anbinding/noan.h>


namespace an
{


using AnBool32 = anbinding::Boolean32;


// import booleans to namespace

ANBINDING_CONSTEXPR static const AnBool32 AN_FALSE = AnBool32(0);
ANBINDING_CONSTEXPR static const AnBool32 AN_TRUE = AnBool32(1);


} // namespace an