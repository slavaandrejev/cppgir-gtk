// AUTO-GENERATED

#ifndef _GI_GLIB__FLAGS_HPP_
#define _GI_GLIB__FLAGS_HPP_

namespace gi {

namespace repository {

namespace GLib {

enum class AsciiType : std::underlying_type<GAsciiType>::type {
  ALNUM_ = G_ASCII_ALNUM,
  ALPHA_ = G_ASCII_ALPHA,
  CNTRL_ = G_ASCII_CNTRL,
  DIGIT_ = G_ASCII_DIGIT,
  GRAPH_ = G_ASCII_GRAPH,
  LOWER_ = G_ASCII_LOWER,
  PRINT_ = G_ASCII_PRINT,
  PUNCT_ = G_ASCII_PUNCT,
  SPACE_ = G_ASCII_SPACE,
  UPPER_ = G_ASCII_UPPER,
  XDIGIT_ = G_ASCII_XDIGIT,
};

GI_FLAG_OPERATORS(AsciiType)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::AsciiType>
{ typedef GAsciiType type; }; 
template<> struct declare_cpptype_of<GAsciiType>
{ typedef GLib::AsciiType type; }; 

template<> struct is_bitfield<GLib::AsciiType> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class FileSetContentsFlags : std::underlying_type<GFileSetContentsFlags>::type {
  NONE_ = G_FILE_SET_CONTENTS_NONE,
  CONSISTENT_ = G_FILE_SET_CONTENTS_CONSISTENT,
  DURABLE_ = G_FILE_SET_CONTENTS_DURABLE,
  ONLY_EXISTING_ = G_FILE_SET_CONTENTS_ONLY_EXISTING,
};

GI_FLAG_OPERATORS(FileSetContentsFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::FileSetContentsFlags>
{ typedef GFileSetContentsFlags type; }; 
template<> struct declare_cpptype_of<GFileSetContentsFlags>
{ typedef GLib::FileSetContentsFlags type; }; 

template<> struct is_bitfield<GLib::FileSetContentsFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class FileTest : std::underlying_type<GFileTest>::type {
  IS_REGULAR_ = G_FILE_TEST_IS_REGULAR,
  IS_SYMLINK_ = G_FILE_TEST_IS_SYMLINK,
  IS_DIR_ = G_FILE_TEST_IS_DIR,
  IS_EXECUTABLE_ = G_FILE_TEST_IS_EXECUTABLE,
  EXISTS_ = G_FILE_TEST_EXISTS,
};

GI_FLAG_OPERATORS(FileTest)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::FileTest>
{ typedef GFileTest type; }; 
template<> struct declare_cpptype_of<GFileTest>
{ typedef GLib::FileTest type; }; 

template<> struct is_bitfield<GLib::FileTest> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class FormatSizeFlags : std::underlying_type<GFormatSizeFlags>::type {
  DEFAULT_ = G_FORMAT_SIZE_DEFAULT,
  LONG_FORMAT_ = G_FORMAT_SIZE_LONG_FORMAT,
  IEC_UNITS_ = G_FORMAT_SIZE_IEC_UNITS,
  BITS_ = G_FORMAT_SIZE_BITS,
  ONLY_VALUE_ = G_FORMAT_SIZE_ONLY_VALUE,
  ONLY_UNIT_ = G_FORMAT_SIZE_ONLY_UNIT,
};

GI_FLAG_OPERATORS(FormatSizeFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::FormatSizeFlags>
{ typedef GFormatSizeFlags type; }; 
template<> struct declare_cpptype_of<GFormatSizeFlags>
{ typedef GLib::FormatSizeFlags type; }; 

template<> struct is_bitfield<GLib::FormatSizeFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class HookFlagMask : std::underlying_type<GHookFlagMask>::type {
  ACTIVE_ = G_HOOK_FLAG_ACTIVE,
  IN_CALL_ = G_HOOK_FLAG_IN_CALL,
  MASK_ = G_HOOK_FLAG_MASK,
};

GI_FLAG_OPERATORS(HookFlagMask)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::HookFlagMask>
{ typedef GHookFlagMask type; }; 
template<> struct declare_cpptype_of<GHookFlagMask>
{ typedef GLib::HookFlagMask type; }; 

template<> struct is_bitfield<GLib::HookFlagMask> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class IOCondition : std::underlying_type<GIOCondition>::type {
  IN_ = G_IO_IN,
  OUT_ = G_IO_OUT,
  PRI_ = G_IO_PRI,
  ERR_ = G_IO_ERR,
  HUP_ = G_IO_HUP,
  NVAL_ = G_IO_NVAL,
};

GI_FLAG_OPERATORS(IOCondition)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::IOCondition>
{ typedef GIOCondition type; }; 
template<> struct declare_cpptype_of<GIOCondition>
{ typedef GLib::IOCondition type; }; 

template<> struct declare_gtype_of<GLib::IOCondition>
{ static GType get_type() { return g_io_condition_get_type(); } };

template<> struct is_bitfield<GLib::IOCondition> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class IOFlags : std::underlying_type<GIOFlags>::type {
  NONE_ = G_IO_FLAG_NONE,
  APPEND_ = G_IO_FLAG_APPEND,
  NONBLOCK_ = G_IO_FLAG_NONBLOCK,
  IS_READABLE_ = G_IO_FLAG_IS_READABLE,
  IS_WRITABLE_ = G_IO_FLAG_IS_WRITABLE,
  IS_WRITEABLE_ = G_IO_FLAG_IS_WRITEABLE,
  IS_SEEKABLE_ = G_IO_FLAG_IS_SEEKABLE,
  MASK_ = G_IO_FLAG_MASK,
  GET_MASK_ = G_IO_FLAG_GET_MASK,
  SET_MASK_ = G_IO_FLAG_SET_MASK,
};

GI_FLAG_OPERATORS(IOFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::IOFlags>
{ typedef GIOFlags type; }; 
template<> struct declare_cpptype_of<GIOFlags>
{ typedef GLib::IOFlags type; }; 

template<> struct is_bitfield<GLib::IOFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class KeyFileFlags : std::underlying_type<GKeyFileFlags>::type {
  NONE_ = G_KEY_FILE_NONE,
  KEEP_COMMENTS_ = G_KEY_FILE_KEEP_COMMENTS,
  KEEP_TRANSLATIONS_ = G_KEY_FILE_KEEP_TRANSLATIONS,
};

GI_FLAG_OPERATORS(KeyFileFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::KeyFileFlags>
{ typedef GKeyFileFlags type; }; 
template<> struct declare_cpptype_of<GKeyFileFlags>
{ typedef GLib::KeyFileFlags type; }; 

template<> struct is_bitfield<GLib::KeyFileFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class LogLevelFlags : std::underlying_type<GLogLevelFlags>::type {
  FLAG_RECURSION_ = G_LOG_FLAG_RECURSION,
  FLAG_FATAL_ = G_LOG_FLAG_FATAL,
  LEVEL_ERROR_ = G_LOG_LEVEL_ERROR,
  LEVEL_CRITICAL_ = G_LOG_LEVEL_CRITICAL,
  LEVEL_WARNING_ = G_LOG_LEVEL_WARNING,
  LEVEL_MESSAGE_ = G_LOG_LEVEL_MESSAGE,
  LEVEL_INFO_ = G_LOG_LEVEL_INFO,
  LEVEL_DEBUG_ = G_LOG_LEVEL_DEBUG,
  LEVEL_MASK_ = G_LOG_LEVEL_MASK,
};

GI_FLAG_OPERATORS(LogLevelFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::LogLevelFlags>
{ typedef GLogLevelFlags type; }; 
template<> struct declare_cpptype_of<GLogLevelFlags>
{ typedef GLib::LogLevelFlags type; }; 

template<> struct is_bitfield<GLib::LogLevelFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class MainContextFlags : std::underlying_type<GMainContextFlags>::type {
  NONE_ = G_MAIN_CONTEXT_FLAGS_NONE,
  OWNERLESS_POLLING_ = G_MAIN_CONTEXT_FLAGS_OWNERLESS_POLLING,
};

GI_FLAG_OPERATORS(MainContextFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::MainContextFlags>
{ typedef GMainContextFlags type; }; 
template<> struct declare_cpptype_of<GMainContextFlags>
{ typedef GLib::MainContextFlags type; }; 

template<> struct is_bitfield<GLib::MainContextFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class MarkupCollectType : std::underlying_type<GMarkupCollectType>::type {
  INVALID_ = G_MARKUP_COLLECT_INVALID,
  STRING_ = G_MARKUP_COLLECT_STRING,
  STRDUP_ = G_MARKUP_COLLECT_STRDUP,
  BOOLEAN_ = G_MARKUP_COLLECT_BOOLEAN,
  TRISTATE_ = G_MARKUP_COLLECT_TRISTATE,
  OPTIONAL_ = G_MARKUP_COLLECT_OPTIONAL,
};

GI_FLAG_OPERATORS(MarkupCollectType)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::MarkupCollectType>
{ typedef GMarkupCollectType type; }; 
template<> struct declare_cpptype_of<GMarkupCollectType>
{ typedef GLib::MarkupCollectType type; }; 

template<> struct is_bitfield<GLib::MarkupCollectType> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class MarkupParseFlags : std::underlying_type<GMarkupParseFlags>::type {
  DEFAULT_FLAGS_ = G_MARKUP_DEFAULT_FLAGS,
  DO_NOT_USE_THIS_UNSUPPORTED_FLAG_ = G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG,
  TREAT_CDATA_AS_TEXT_ = G_MARKUP_TREAT_CDATA_AS_TEXT,
  PREFIX_ERROR_POSITION_ = G_MARKUP_PREFIX_ERROR_POSITION,
  IGNORE_QUALIFIED_ = G_MARKUP_IGNORE_QUALIFIED,
};

GI_FLAG_OPERATORS(MarkupParseFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::MarkupParseFlags>
{ typedef GMarkupParseFlags type; }; 
template<> struct declare_cpptype_of<GMarkupParseFlags>
{ typedef GLib::MarkupParseFlags type; }; 

template<> struct is_bitfield<GLib::MarkupParseFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class OptionFlags : std::underlying_type<GOptionFlags>::type {
  NONE_ = G_OPTION_FLAG_NONE,
  HIDDEN_ = G_OPTION_FLAG_HIDDEN,
  IN_MAIN_ = G_OPTION_FLAG_IN_MAIN,
  REVERSE_ = G_OPTION_FLAG_REVERSE,
  NO_ARG_ = G_OPTION_FLAG_NO_ARG,
  FILENAME_ = G_OPTION_FLAG_FILENAME,
  OPTIONAL_ARG_ = G_OPTION_FLAG_OPTIONAL_ARG,
  NOALIAS_ = G_OPTION_FLAG_NOALIAS,
};

GI_FLAG_OPERATORS(OptionFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::OptionFlags>
{ typedef GOptionFlags type; }; 
template<> struct declare_cpptype_of<GOptionFlags>
{ typedef GLib::OptionFlags type; }; 

template<> struct is_bitfield<GLib::OptionFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class RegexCompileFlags : std::underlying_type<GRegexCompileFlags>::type {
  DEFAULT_ = G_REGEX_DEFAULT,
  CASELESS_ = G_REGEX_CASELESS,
  MULTILINE_ = G_REGEX_MULTILINE,
  DOTALL_ = G_REGEX_DOTALL,
  EXTENDED_ = G_REGEX_EXTENDED,
  ANCHORED_ = G_REGEX_ANCHORED,
  DOLLAR_ENDONLY_ = G_REGEX_DOLLAR_ENDONLY,
  UNGREEDY_ = G_REGEX_UNGREEDY,
  RAW_ = G_REGEX_RAW,
  NO_AUTO_CAPTURE_ = G_REGEX_NO_AUTO_CAPTURE,
  OPTIMIZE_ = G_REGEX_OPTIMIZE,
  FIRSTLINE_ = G_REGEX_FIRSTLINE,
  DUPNAMES_ = G_REGEX_DUPNAMES,
  NEWLINE_CR_ = G_REGEX_NEWLINE_CR,
  NEWLINE_LF_ = G_REGEX_NEWLINE_LF,
  NEWLINE_CRLF_ = G_REGEX_NEWLINE_CRLF,
  NEWLINE_ANYCRLF_ = G_REGEX_NEWLINE_ANYCRLF,
  BSR_ANYCRLF_ = G_REGEX_BSR_ANYCRLF,
  JAVASCRIPT_COMPAT_ = G_REGEX_JAVASCRIPT_COMPAT,
};

GI_FLAG_OPERATORS(RegexCompileFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::RegexCompileFlags>
{ typedef GRegexCompileFlags type; }; 
template<> struct declare_cpptype_of<GRegexCompileFlags>
{ typedef GLib::RegexCompileFlags type; }; 

template<> struct is_bitfield<GLib::RegexCompileFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class RegexMatchFlags : std::underlying_type<GRegexMatchFlags>::type {
  DEFAULT_ = G_REGEX_MATCH_DEFAULT,
  ANCHORED_ = G_REGEX_MATCH_ANCHORED,
  NOTBOL_ = G_REGEX_MATCH_NOTBOL,
  NOTEOL_ = G_REGEX_MATCH_NOTEOL,
  NOTEMPTY_ = G_REGEX_MATCH_NOTEMPTY,
  PARTIAL_ = G_REGEX_MATCH_PARTIAL,
  NEWLINE_CR_ = G_REGEX_MATCH_NEWLINE_CR,
  NEWLINE_LF_ = G_REGEX_MATCH_NEWLINE_LF,
  NEWLINE_CRLF_ = G_REGEX_MATCH_NEWLINE_CRLF,
  NEWLINE_ANY_ = G_REGEX_MATCH_NEWLINE_ANY,
  NEWLINE_ANYCRLF_ = G_REGEX_MATCH_NEWLINE_ANYCRLF,
  BSR_ANYCRLF_ = G_REGEX_MATCH_BSR_ANYCRLF,
  BSR_ANY_ = G_REGEX_MATCH_BSR_ANY,
  PARTIAL_SOFT_ = G_REGEX_MATCH_PARTIAL_SOFT,
  PARTIAL_HARD_ = G_REGEX_MATCH_PARTIAL_HARD,
  NOTEMPTY_ATSTART_ = G_REGEX_MATCH_NOTEMPTY_ATSTART,
};

GI_FLAG_OPERATORS(RegexMatchFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::RegexMatchFlags>
{ typedef GRegexMatchFlags type; }; 
template<> struct declare_cpptype_of<GRegexMatchFlags>
{ typedef GLib::RegexMatchFlags type; }; 

template<> struct is_bitfield<GLib::RegexMatchFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class SpawnFlags : std::underlying_type<GSpawnFlags>::type {
  DEFAULT_ = G_SPAWN_DEFAULT,
  LEAVE_DESCRIPTORS_OPEN_ = G_SPAWN_LEAVE_DESCRIPTORS_OPEN,
  DO_NOT_REAP_CHILD_ = G_SPAWN_DO_NOT_REAP_CHILD,
  SEARCH_PATH_ = G_SPAWN_SEARCH_PATH,
  STDOUT_TO_DEV_NULL_ = G_SPAWN_STDOUT_TO_DEV_NULL,
  STDERR_TO_DEV_NULL_ = G_SPAWN_STDERR_TO_DEV_NULL,
  CHILD_INHERITS_STDIN_ = G_SPAWN_CHILD_INHERITS_STDIN,
  FILE_AND_ARGV_ZERO_ = G_SPAWN_FILE_AND_ARGV_ZERO,
  SEARCH_PATH_FROM_ENVP_ = G_SPAWN_SEARCH_PATH_FROM_ENVP,
  CLOEXEC_PIPES_ = G_SPAWN_CLOEXEC_PIPES,
  CHILD_INHERITS_STDOUT_ = G_SPAWN_CHILD_INHERITS_STDOUT,
  CHILD_INHERITS_STDERR_ = G_SPAWN_CHILD_INHERITS_STDERR,
  STDIN_FROM_DEV_NULL_ = G_SPAWN_STDIN_FROM_DEV_NULL,
};

GI_FLAG_OPERATORS(SpawnFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::SpawnFlags>
{ typedef GSpawnFlags type; }; 
template<> struct declare_cpptype_of<GSpawnFlags>
{ typedef GLib::SpawnFlags type; }; 

template<> struct is_bitfield<GLib::SpawnFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class TestSubprocessFlags : std::underlying_type<GTestSubprocessFlags>::type {
  DEFAULT_ = G_TEST_SUBPROCESS_DEFAULT,
  INHERIT_STDIN_ = G_TEST_SUBPROCESS_INHERIT_STDIN,
  INHERIT_STDOUT_ = G_TEST_SUBPROCESS_INHERIT_STDOUT,
  INHERIT_STDERR_ = G_TEST_SUBPROCESS_INHERIT_STDERR,
};

GI_FLAG_OPERATORS(TestSubprocessFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TestSubprocessFlags>
{ typedef GTestSubprocessFlags type; }; 
template<> struct declare_cpptype_of<GTestSubprocessFlags>
{ typedef GLib::TestSubprocessFlags type; }; 

template<> struct is_bitfield<GLib::TestSubprocessFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class TraverseFlags : std::underlying_type<GTraverseFlags>::type {
  LEAVES_ = G_TRAVERSE_LEAVES,
  NON_LEAVES_ = G_TRAVERSE_NON_LEAVES,
  ALL_ = G_TRAVERSE_ALL,
  MASK_ = G_TRAVERSE_MASK,
  LEAFS_ = G_TRAVERSE_LEAFS,
  NON_LEAFS_ = G_TRAVERSE_NON_LEAFS,
};

GI_FLAG_OPERATORS(TraverseFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TraverseFlags>
{ typedef GTraverseFlags type; }; 
template<> struct declare_cpptype_of<GTraverseFlags>
{ typedef GLib::TraverseFlags type; }; 

template<> struct is_bitfield<GLib::TraverseFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class UriFlags : std::underlying_type<GUriFlags>::type {
  NONE_ = G_URI_FLAGS_NONE,
  PARSE_RELAXED_ = G_URI_FLAGS_PARSE_RELAXED,
  HAS_PASSWORD_ = G_URI_FLAGS_HAS_PASSWORD,
  HAS_AUTH_PARAMS_ = G_URI_FLAGS_HAS_AUTH_PARAMS,
  ENCODED_ = G_URI_FLAGS_ENCODED,
  NON_DNS_ = G_URI_FLAGS_NON_DNS,
  ENCODED_QUERY_ = G_URI_FLAGS_ENCODED_QUERY,
  ENCODED_PATH_ = G_URI_FLAGS_ENCODED_PATH,
  ENCODED_FRAGMENT_ = G_URI_FLAGS_ENCODED_FRAGMENT,
  SCHEME_NORMALIZE_ = G_URI_FLAGS_SCHEME_NORMALIZE,
};

GI_FLAG_OPERATORS(UriFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UriFlags>
{ typedef GUriFlags type; }; 
template<> struct declare_cpptype_of<GUriFlags>
{ typedef GLib::UriFlags type; }; 

template<> struct is_bitfield<GLib::UriFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class UriHideFlags : std::underlying_type<GUriHideFlags>::type {
  NONE_ = G_URI_HIDE_NONE,
  USERINFO_ = G_URI_HIDE_USERINFO,
  PASSWORD_ = G_URI_HIDE_PASSWORD,
  AUTH_PARAMS_ = G_URI_HIDE_AUTH_PARAMS,
  QUERY_ = G_URI_HIDE_QUERY,
  FRAGMENT_ = G_URI_HIDE_FRAGMENT,
};

GI_FLAG_OPERATORS(UriHideFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UriHideFlags>
{ typedef GUriHideFlags type; }; 
template<> struct declare_cpptype_of<GUriHideFlags>
{ typedef GLib::UriHideFlags type; }; 

template<> struct is_bitfield<GLib::UriHideFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

enum class UriParamsFlags : std::underlying_type<GUriParamsFlags>::type {
  NONE_ = G_URI_PARAMS_NONE,
  CASE_INSENSITIVE_ = G_URI_PARAMS_CASE_INSENSITIVE,
  WWW_FORM_ = G_URI_PARAMS_WWW_FORM,
  PARSE_RELAXED_ = G_URI_PARAMS_PARSE_RELAXED,
};

GI_FLAG_OPERATORS(UriParamsFlags)

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UriParamsFlags>
{ typedef GUriParamsFlags type; }; 
template<> struct declare_cpptype_of<GUriParamsFlags>
{ typedef GLib::UriParamsFlags type; }; 

template<> struct is_bitfield<GLib::UriParamsFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
