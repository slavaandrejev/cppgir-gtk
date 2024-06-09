// AUTO-GENERATED

#ifndef _GI_GLIB_REGEX_HPP_
#define _GI_GLIB_REGEX_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MatchInfo;
class MatchInfo_Ref;
class Regex_Ref;

class Regex;

namespace base {


#define GI_GLIB_REGEX_BASE base::RegexBase
class RegexBase : public gi::detail::GBoxedWrapperBase<RegexBase, ::GRegex>
{
typedef gi::detail::GBoxedWrapperBase<RegexBase, ::GRegex> super_type;
public:

RegexBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_regex_get_type(); } 

// GRegex* /*full,nullable*/ g_regex_new (const gchar* pattern /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError ** error);
// ::GRegex* /*full,nullable*/ g_regex_new (const char* pattern /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
static GI_INLINE_DECL GLib::Regex new_ (const gi::cstring_v pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options);
static GI_INLINE_DECL GLib::Regex new_ (const gi::cstring_v pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options, GLib::Error * _error) noexcept;

// gint g_regex_get_capture_count (const GRegex* regex /*none*/);
// gint g_regex_get_capture_count (const ::GRegex* regex /*none*/);
GI_INLINE_DECL gint get_capture_count () const noexcept;

// GRegexCompileFlags g_regex_get_compile_flags (const GRegex* regex /*none*/);
// ::GRegexCompileFlags g_regex_get_compile_flags (const ::GRegex* regex /*none*/);
GI_INLINE_DECL GLib::RegexCompileFlags get_compile_flags () const noexcept;

// gboolean g_regex_get_has_cr_or_lf (const GRegex* regex /*none*/);
// gboolean g_regex_get_has_cr_or_lf (const ::GRegex* regex /*none*/);
GI_INLINE_DECL bool get_has_cr_or_lf () const noexcept;

// GRegexMatchFlags g_regex_get_match_flags (const GRegex* regex /*none*/);
// ::GRegexMatchFlags g_regex_get_match_flags (const ::GRegex* regex /*none*/);
GI_INLINE_DECL GLib::RegexMatchFlags get_match_flags () const noexcept;

// gint g_regex_get_max_backref (const GRegex* regex /*none*/);
// gint g_regex_get_max_backref (const ::GRegex* regex /*none*/);
GI_INLINE_DECL gint get_max_backref () const noexcept;

// gint g_regex_get_max_lookbehind (const GRegex* regex /*none*/);
// gint g_regex_get_max_lookbehind (const ::GRegex* regex /*none*/);
GI_INLINE_DECL gint get_max_lookbehind () const noexcept;

// const gchar* /*none*/ g_regex_get_pattern (const GRegex* regex /*none*/);
// const char* /*none*/ g_regex_get_pattern (const ::GRegex* regex /*none*/);
GI_INLINE_DECL gi::cstring_v get_pattern () const noexcept;

// gint g_regex_get_string_number (const GRegex* regex /*none*/, const gchar* name /*none*/);
// gint g_regex_get_string_number (const ::GRegex* regex /*none*/, const char* name /*none*/);
GI_INLINE_DECL gint get_string_number (const gi::cstring_v name) const noexcept;

// gboolean g_regex_match (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/);
// gboolean g_regex_match (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/);
GI_INLINE_DECL bool match (const gi::cstring_v string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept;

// gboolean g_regex_match_all (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/);
// gboolean g_regex_match_all (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/);
GI_INLINE_DECL bool match_all (const gi::cstring_v string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept;

// gboolean g_regex_match_all_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/, GError ** error);
// gboolean g_regex_match_all_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/, GError ** error);
GI_INLINE_DECL bool match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const;
GI_INLINE_DECL bool match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gboolean g_regex_match_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/, GError ** error);
// gboolean g_regex_match_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/, GError ** error);
GI_INLINE_DECL bool match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const;
GI_INLINE_DECL bool match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// GRegex* /*full*/ g_regex_ref (GRegex* regex /*none*/);
// ::GRegex* /*full*/ g_regex_ref (::GRegex* regex /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_regex_replace (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const gchar* replacement /*none*/, GRegexMatchFlags match_options, GError ** error);
// char* /*full*/ g_regex_replace (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const char* replacement /*none*/, ::GRegexMatchFlags match_options, GError ** error);
GI_INLINE_DECL gi::cstring replace (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL gi::cstring replace (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gchar* /*full*/ g_regex_replace_eval (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval /*none*/, gpointer user_data, GError ** error);
// char* /*full*/ g_regex_replace_eval (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval /*none*/, void* user_data, GError ** error);
GI_INLINE_DECL gi::cstring replace_eval (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::RegexEvalCallback eval) const;
GI_INLINE_DECL gi::cstring replace_eval (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::RegexEvalCallback eval, GLib::Error * _error) const noexcept;

// gchar* /*full*/ g_regex_replace_literal (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const gchar* replacement /*none*/, GRegexMatchFlags match_options, GError ** error);
// char* /*full*/ g_regex_replace_literal (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const char* replacement /*none*/, ::GRegexMatchFlags match_options, GError ** error);
GI_INLINE_DECL gi::cstring replace_literal (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL gi::cstring replace_literal (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gchar** /*full*/ g_regex_split (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options);
// char** /*full*/ g_regex_split (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> split (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept;

// gchar** /*full*/ g_regex_split_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError ** error);
// char** /*full*/ g_regex_split_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> split_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens) const;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> split_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens, GLib::Error * _error) const noexcept;

// void g_regex_unref (GRegex* regex /*none*/);
// void g_regex_unref (::GRegex* regex /*none*/);
// IGNORE; marked ignore

// gboolean g_regex_check_replacement (const gchar* replacement /*none*/, gboolean* has_references, GError ** error);
// gboolean g_regex_check_replacement (const char* replacement /*none*/, gboolean* has_references, GError ** error);
static GI_INLINE_DECL bool check_replacement (const gi::cstring_v replacement, bool * has_references);
static GI_INLINE_DECL bool check_replacement (const gi::cstring_v replacement, bool * has_references, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, bool> check_replacement (const gi::cstring_v replacement);
static GI_INLINE_DECL std::tuple<bool, bool> check_replacement (const gi::cstring_v replacement, GLib::Error * _error) noexcept;

// GQuark g_regex_error_quark ();
// ::GQuark g_regex_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// gchar* /*full*/ g_regex_escape_nul (const gchar* string /*none*/, gint length);
// char* /*full*/ g_regex_escape_nul (const char* string /*none*/, gint length);
static GI_INLINE_DECL gi::cstring escape_nul (const gi::cstring_v string, gint length) noexcept;

// gchar* /*full*/ g_regex_escape_string (const gchar* string /*none*/, gint length);
// char* /*full*/ g_regex_escape_string (const char* string /*none*/, gint length);
static GI_INLINE_DECL gi::cstring escape_string (const gi::cstring_v string, gint length) noexcept;

// gboolean g_regex_match_simple (const gchar* pattern /*none*/, const gchar* string /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// gboolean g_regex_match_simple (const char* pattern /*none*/, const char* string /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
static GI_INLINE_DECL bool match_simple (const gi::cstring_v pattern, const gi::cstring_v string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept;

// gchar** /*full*/ g_regex_split_simple (const gchar* pattern /*none*/, const gchar* string /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// char** /*full*/ g_regex_split_simple (const char* pattern /*none*/, const char* string /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
static GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> split_simple (const gi::cstring_v pattern, const gi::cstring_v string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/regex_extra_def.hpp>)
#include <glib/regex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/regex_extra.hpp>)
#include <glib/regex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Regex_Ref;

class Regex : public gi::detail::GBoxedWrapper<Regex, ::GRegex, GI_GLIB_REGEX_BASE, Regex_Ref>
{ typedef gi::detail::GBoxedWrapper<Regex, ::GRegex, GI_GLIB_REGEX_BASE, Regex_Ref> super_type; using super_type::super_type; };


class Regex_Ref : public gi::detail::GBoxedRefWrapper<Regex, ::GRegex, GI_GLIB_REGEX_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Regex, ::GRegex, GI_GLIB_REGEX_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRegex>
{ typedef GLib::Regex type; }; 

} // namespace repository

} // namespace gi

#endif
