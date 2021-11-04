
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <anbinding-aux/anbinding-aux_api.h>
#include <anbinding-aux/anbinding-aux_features.h>

#include <anbinding/an/types.h>
#include <anbinding/AbstractFunction.h>


namespace anbinding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class ANBINDING_AUX_API Meta
{
public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Meta() = delete;

    /**
    *  @brief
    *    Returns the revision of the parsed an.xml file
    *
    *  @return
    *    The revision of the parsed an.xml file
    */
    static int anRevision();

    /**
    *  @brief
    *    Converts a string into a bitfield symbol
    *
    *  @param[in] bitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static an::AnBitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the an.xml
    *
    *  @return
    *    The list of all bitfields known by the an.xml
    */
    static std::vector<an::AnBitfield> bitfields();

    /**
    *  @brief
    *    Converts a AnEnum to a string
    *
    *  @param[in] anenum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remark
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    // static const std::string & getString(an::AnEnum anenum);
    
    /**
    *  @brief
    *    Converts a string to an enum symbol
    *
    *  @param[in] anenum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static an::AnEnum getEnum(const std::string & anenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the an.xml
    *
    *  @return
    *    The list of all enums known by the an.xml
    */
    static std::set<an::AnEnum> enums();

    /**
    *  @brief
    *    Converts a AnBool32 to a string
    *
    *  @param[in] anboolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the AnBool32 symbol name
    *
    *  @remark
    *    Can either be `AN_TRUE` or `AN_FALSE`
    */
    static const std::string & getString(const an::AnBool32 & anboolean);
    
    /**
    *  @brief
    *    Converts a string to a AnBool32 symbol
    *
    *  @param[in] boolean
    *    The string representation of the AnBool32
    *
    *  @return
    *    The symbol identified through the boolean string, `AN_FALSE` if failed
    */
    static an::AnBool32 getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a AnExtension to its string representation
    *
    *  @param[in] anextension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(an::AnExtension anextension);
    
    /**
    *  @brief
    *    Converts a string to an AnExtension
    *
    *  @param[in] extension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static an::AnExtension getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the an.xml
    *
    *  @return
    *    The set of all extensions known by the an.xml
    */
    static std::set<an::AnExtension> extensions();
    
    /**
    *  @brief
    *    Returns the set of extensions that are required for by the given version
    *
    *  @param[in] version
    *    The version/feature to return the required extensions for.
    *    If an null version is given, all extensions that have no
    *    version/feature associated are returned instead
    *
    *  @return
    *    The set of extensions that should be supported for the given version.
    *    All non-versioned extensions can be queried by providing the null version
    */
    static const std::set<an::AnExtension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'an' prefix
    *
    *  @return
    *    The set of extensions that are requiring a function
    */
    static const std::set<an::AnExtension> extensions(const std::string & anfunction);

    /**
    *  @brief
    *    Returns the list of features that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'an' prefix
    *
    *  @return
    *    The set of features that are requiring a function
    */
    static const std::set<Version> versions(const std::string & anfunction);
    
    /**
    *  @brief
    *    Returns the set of functions that are required for the version
    *
    *  @param[in] version
    *    The version to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the version
    *
    *  @remark
    *    This is exclusive (preceeding versions are ignored)
    */
    static const std::set<AbstractFunction *> functions(const Version & version);

    /**
    *  @brief
    *    Returns the set of functions that are required for the extension
    *
    *  @param[in] extension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(an::AnExtension extension);

    /**
    *  @brief
    *    Returns the first Version (Feature) that required the extension
    *
    *  @param[in] anextension
    *    The extension
    *
    *  @return
    *    The first Version (Feature) that required the extension
    */
    static const Version & version(an::AnExtension anextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the an.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the an.xml
    */
    static const std::set<Version> & versions();

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(an::AnBitfield anbitfield);


    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    The shortest string representation of the value
    *
    *  @remark
    *    Beware, that some enums in the API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(an::AnDeviceProperty anenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    All string representations of the value
    */
    static std::vector<std::string> getStrings(an::AnDeviceProperty anenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    The shortest string representation of the value
    *
    *  @remark
    *    Beware, that some enums in the API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(an::AnEnum anenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    All string representations of the value
    */
    static std::vector<std::string> getStrings(an::AnEnum anenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    The shortest string representation of the value
    *
    *  @remark
    *    Beware, that some enums in the API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(an::AnError anenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    All string representations of the value
    */
    static std::vector<std::string> getStrings(an::AnError anenum);


private:
    /**
    *  @brief
    *    Returns the bucket index of an identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., 'an' or 'AN_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace anbinding::aux