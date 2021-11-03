
#pragma once

#include <KHR/khrplatform.h>

#ifndef ANAPI
#define ANAPI KHRONOS_APICALL
#endif

#ifndef ANAPIENTRY
#define ANAPIENTRY  KHRONOS_APIENTRY
#endif
#define ANAPIENTRYP ANAPIENTRY*

typedef void (*__anMustCastToProperFunctionPointerType)(void);

#ifdef __cplusplus
extern "C" {
#endif

ANAPI __anMustCastToProperFunctionPointerType ANAPIENTRY anGetProcAddress (const char *procname);

#ifdef __cplusplus
}
#endif
