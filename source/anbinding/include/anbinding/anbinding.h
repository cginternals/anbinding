
#pragma once


#include <set>
#include <vector>
#include <functional>
#include <string>

#include <anbinding/anbinding_api.h>
#include <anbinding/anbinding_features.h>

#include <anbinding/CallbackMask.h>
#include <anbinding/ProcAddress.h>


namespace anbinding
{


class AbstractFunction;
class FunctionCall;


using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;
using FunctionLogCallback = std::function<void(FunctionCall *)>;

ANBINDING_API void initialize(anbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
ANBINDING_API void registerAdditionalFunction(AbstractFunction * function);
ANBINDING_API ProcAddress resolveFunction(const char * name);
ANBINDING_API void resolveFunctions();

ANBINDING_API void setCallbackMask(CallbackMask mask);
ANBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
ANBINDING_API void addCallbackMask(CallbackMask mask);
ANBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
ANBINDING_API void removeCallbackMask(CallbackMask mask);
ANBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
ANBINDING_API SimpleFunctionCallback unresolvedCallback();
ANBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);
ANBINDING_API FunctionCallback beforeCallback();
ANBINDING_API void setBeforeCallback(FunctionCallback callback);
ANBINDING_API FunctionCallback afterCallback();
ANBINDING_API void setAfterCallback(FunctionCallback callback);
ANBINDING_API FunctionLogCallback logCallback();
ANBINDING_API void setLogCallback(FunctionLogCallback callback);


} // namespace anbinding