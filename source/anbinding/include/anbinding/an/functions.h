
#pragma once


#include <anbinding/anbinding_api.h>

#include <anbinding/noan.h>
#include <anbinding/an/types.h>


namespace an
{


ANBINDING_API int64_t anDeviceGetProperty(AnDevice device, AnDeviceProperty property);
ANBINDING_API void anDeviceSetStatusFunc(AnDevice device, AnStatusFunc callback);
ANBINDING_API AnBounds anGetBounds(AnObject object);
ANBINDING_API AnError anInit(int* argc, const char** argv);
ANBINDING_API AnDevice anNewDevice(const char* deviceType);
ANBINDING_API void anSetCurrentDevice(AnDevice device);
ANBINDING_API void anShutdown();


} // namespace an


// Include function patches due to dinstinguished types GLint, GLuint, GLenum, and GLboolean
#include <anbinding/an/functions-patches.h>