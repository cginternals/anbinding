
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <anbinding/an/types.h>
#include <anbinding/an/extension.h>


namespace anbinding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, an::AnExtension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<an::AnExtension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<an::AnBool32, std::string> Meta_StringsByBoolean;
extern const std::multimap<an::AnEnum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<an::AnExtension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<an::AnExtension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;



extern const std::array<std::unordered_map<std::string, an::AnBitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, an::AnBool32> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, an::AnEnum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<an::AnExtension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace anbinding::aux