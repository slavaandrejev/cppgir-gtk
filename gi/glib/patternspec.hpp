// AUTO-GENERATED

#ifndef _GI_GLIB_PATTERNSPEC_HPP_
#define _GI_GLIB_PATTERNSPEC_HPP_


namespace gi {

namespace repository {

namespace GLib {

class PatternSpec_Ref;

class PatternSpec;

namespace base {


#define GI_GLIB_PATTERNSPEC_BASE base::PatternSpecBase
class PatternSpecBase : public gi::detail::GBoxedWrapperBase<PatternSpecBase, ::GPatternSpec>
{
typedef gi::detail::GBoxedWrapperBase<PatternSpecBase, ::GPatternSpec> super_type;
public:

PatternSpecBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_pattern_spec_get_type(); } 

// GPatternSpec* /*full*/ g_pattern_spec_new (const gchar* pattern /*none*/);
// ::GPatternSpec* /*full*/ g_pattern_spec_new (const char* pattern /*none*/);
static GI_INLINE_DECL GLib::PatternSpec new_ (const gi::cstring_v pattern) noexcept;

// GPatternSpec* /*full*/ g_pattern_spec_copy (GPatternSpec* pspec /*none*/);
// ::GPatternSpec* /*full*/ g_pattern_spec_copy (::GPatternSpec* pspec /*none*/);
GI_INLINE_DECL GLib::PatternSpec copy () noexcept;

// gboolean g_pattern_spec_equal (GPatternSpec* pspec1 /*none*/, GPatternSpec* pspec2 /*none*/);
// gboolean g_pattern_spec_equal (::GPatternSpec* pspec1 /*none*/, ::GPatternSpec* pspec2 /*none*/);
GI_INLINE_DECL bool equal (GLib::PatternSpec_Ref pspec2) noexcept;

// void g_pattern_spec_free (GPatternSpec* pspec /*none*/);
// void g_pattern_spec_free (::GPatternSpec* pspec /*none*/);
// IGNORE; marked ignore

// gboolean g_pattern_spec_match (GPatternSpec* pspec /*none*/, gsize string_length, const gchar* string /*none*/, const gchar* string_reversed /*none,nullable*/);
// gboolean g_pattern_spec_match (::GPatternSpec* pspec /*none*/, gsize string_length, const char* string /*none*/, const char* string_reversed /*none,nullable*/);
GI_INLINE_DECL bool match (gsize string_length, const gi::cstring_v string, const gi::cstring_v string_reversed) noexcept;
GI_INLINE_DECL bool match (gsize string_length, const gi::cstring_v string) noexcept;

// gboolean g_pattern_spec_match_string (GPatternSpec* pspec /*none*/, const gchar* string /*none*/);
// gboolean g_pattern_spec_match_string (::GPatternSpec* pspec /*none*/, const char* string /*none*/);
GI_INLINE_DECL bool match_string (const gi::cstring_v string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_def.hpp>)
#include <glib/patternspec_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra.hpp>)
#include <glib/patternspec_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class PatternSpec_Ref;

class PatternSpec : public gi::detail::GBoxedWrapper<PatternSpec, ::GPatternSpec, GI_GLIB_PATTERNSPEC_BASE, PatternSpec_Ref>
{ typedef gi::detail::GBoxedWrapper<PatternSpec, ::GPatternSpec, GI_GLIB_PATTERNSPEC_BASE, PatternSpec_Ref> super_type; using super_type::super_type; };


class PatternSpec_Ref : public gi::detail::GBoxedRefWrapper<PatternSpec, ::GPatternSpec, GI_GLIB_PATTERNSPEC_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PatternSpec, ::GPatternSpec, GI_GLIB_PATTERNSPEC_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPatternSpec>
{ typedef GLib::PatternSpec type; }; 

} // namespace repository

} // namespace gi

#endif
