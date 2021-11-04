
#include <anbinding-aux/ContextInfo.h>

#include <sstream>
#include <iostream>

#include <anbinding/AbstractFunction.h>

#include <anbinding/Version.h>
#include <anbinding/an/an.h>
#include <anbinding/Binding.h>

#include <anbinding-aux/Meta.h>


using namespace an;


namespace
{


void insertExtension(
    const std::string & extensionName
,   std::set<AnExtension> * extensions
,   std::set<std::string> * unknownExtensionNames)
{
    const auto extension = anbinding::aux::Meta::getExtension(extensionName);

    if (AnExtension::UNKNOWN != extension)
    {
        extensions->insert(extension);
    }
    else if (unknownExtensionNames)
    {
        unknownExtensionNames->insert(extensionName);
    }
}

// Implementation for functions with optional parameters (extensions, supported). 
// This design prefers a reference focussed interface over optional 
// parameters via pointers while maintaining a single implementation.

std::set<AnExtension> extensions(std::set<std::string> * const unknown)
{
    std::set<AnExtension> extensions;

    // ToDo: currently no extensions available, as is its interface to query them

    return extensions;
}

bool supported(const std::set<an::AnExtension> & extensions, std::set<an::AnExtension> * unsupported)
{
    // ToDo: currently no extensions available, as is its interface to query them

    return false;
}

bool supported(
    const std::set<anbinding::AbstractFunction *> & functions
,   std::set<anbinding::AbstractFunction *> * unsupported
,   const bool resolve)
{
    // ToDo: currently no extensions available, as is its interface to query them

    return false;
}

bool supported(const anbinding::Version & version
    , const bool resolve
    , std::set<an::AnExtension> * unsupportedExtensions
    , std::set<anbinding::AbstractFunction *> * unsupportedFunctions)
{
    const auto requiredExtensions = anbinding::aux::Meta::extensions(version);
    const auto requiredFunctions = anbinding::aux::Meta::functions(version);

    auto support = true;

    support &= supported(requiredExtensions, unsupportedExtensions);
    support &= supported(requiredFunctions, unsupportedFunctions, resolve);

    return support;
}

} // namespace


namespace anbinding { namespace aux
{

std::string ContextInfo::vendor()
{
    // ToDo: currently no interface available

    return "";
}

Version ContextInfo::version()
{
    // ToDo: currently no interface available; we assume 1.0

    return Version(1, 0);
}

std::set<AnExtension> ContextInfo::extensions()
{
    return ::extensions(nullptr);
}

std::set<AnExtension> ContextInfo::extensions(std::set<std::string> & unknown)
{
    return ::extensions(&unknown);
}

bool ContextInfo::supported(const std::set<an::AnExtension> & extensions)
{
    return ::supported(extensions, nullptr);
}

bool ContextInfo::supported(const std::set<an::AnExtension> & extensions, std::set<an::AnExtension> & unsupported)
{
    return ::supported(extensions, &unsupported);
}

bool ContextInfo::supported(const Version & version, const bool resolve)
{
    return ::supported(version, resolve, nullptr, nullptr);
}

bool ContextInfo::supported(const Version & version
    , std::set<an::AnExtension> & unsupportedExtensions
    , std::set<AbstractFunction *> & unsupportedFunctions
    , const bool resolve)
{
    return ::supported(version, resolve, &unsupportedExtensions, &unsupportedFunctions);
}


} } // namespace anbinding::aux
