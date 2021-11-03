
#pragma once


#include <functional>

#include <anbinding/anbinding_api.h>


namespace anbinding
{


/**
*  @brief
*    The generic pointer to a function
*/
using ProcAddress = void(*)();

/**
*  @brief
*    The signature for the getProcAddress function
*/
using GetProcAddress = std::function<ProcAddress(const char*)>;


} // namespace anbinding