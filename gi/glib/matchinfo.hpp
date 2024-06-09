// AUTO-GENERATED

#ifndef _GI_GLIB_MATCHINFO_HPP_
#define _GI_GLIB_MATCHINFO_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MatchInfo_Ref;
class Regex;
class Regex_Ref;

class MatchInfo;

namespace base {


#define GI_GLIB_MATCHINFO_BASE base::MatchInfoBase
class MatchInfoBase : public gi::detail::GBoxedWrapperBase<MatchInfoBase, ::GMatchInfo>
{
typedef gi::detail::GBoxedWrapperBase<MatchInfoBase, ::GMatchInfo> super_type;
public:

MatchInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_match_info_get_type(); } 

// gchar* /*full,nullable*/ g_match_info_expand_references (const GMatchInfo* match_info /*none,nullable*/, const gchar* string_to_expand /*none*/, GError ** error);
// char* /*full,nullable*/ g_match_info_expand_references (const ::GMatchInfo* match_info /*none,nullable*/, const char* string_to_expand /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring expand_references (const gi::cstring_v string_to_expand) const;
GI_INLINE_DECL gi::cstring expand_references (const gi::cstring_v string_to_expand, GLib::Error * _error) const noexcept;

// gchar* /*full,nullable*/ g_match_info_fetch (const GMatchInfo* match_info /*none*/, gint match_num);
// char* /*full,nullable*/ g_match_info_fetch (const ::GMatchInfo* match_info /*none*/, gint match_num);
GI_INLINE_DECL gi::cstring fetch (gint match_num) const noexcept;

// gchar** /*full*/ g_match_info_fetch_all (const GMatchInfo* match_info /*none*/);
// char** /*full*/ g_match_info_fetch_all (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> fetch_all () const noexcept;

// gchar* /*full,nullable*/ g_match_info_fetch_named (const GMatchInfo* match_info /*none*/, const gchar* name /*none*/);
// char* /*full,nullable*/ g_match_info_fetch_named (const ::GMatchInfo* match_info /*none*/, const char* name /*none*/);
GI_INLINE_DECL gi::cstring fetch_named (const gi::cstring_v name) const noexcept;

// gboolean g_match_info_fetch_named_pos (const GMatchInfo* match_info /*none*/, const gchar* name /*none*/, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_named_pos (const ::GMatchInfo* match_info /*none*/, const char* name /*none*/, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool fetch_named_pos (const gi::cstring_v name, gint * start_pos, gint * end_pos) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> fetch_named_pos (const gi::cstring_v name) const noexcept;

// gboolean g_match_info_fetch_pos (const GMatchInfo* match_info /*none*/, gint match_num, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_pos (const ::GMatchInfo* match_info /*none*/, gint match_num, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool fetch_pos (gint match_num, gint * start_pos, gint * end_pos) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> fetch_pos (gint match_num) const noexcept;

// void g_match_info_free (GMatchInfo* match_info /*none,nullable*/);
// void g_match_info_free (::GMatchInfo* match_info /*none,nullable*/);
// IGNORE; marked ignore

// gint g_match_info_get_match_count (const GMatchInfo* match_info /*none*/);
// gint g_match_info_get_match_count (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL gint get_match_count () const noexcept;

// GRegex* /*none*/ g_match_info_get_regex (const GMatchInfo* match_info /*none*/);
// ::GRegex* /*none*/ g_match_info_get_regex (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL GLib::Regex_Ref get_regex () const noexcept;

// const gchar* /*none*/ g_match_info_get_string (const GMatchInfo* match_info /*none*/);
// const char* /*none*/ g_match_info_get_string (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL gi::cstring_v get_string () const noexcept;

// gboolean g_match_info_is_partial_match (const GMatchInfo* match_info /*none*/);
// gboolean g_match_info_is_partial_match (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL bool is_partial_match () const noexcept;

// gboolean g_match_info_matches (const GMatchInfo* match_info /*none*/);
// gboolean g_match_info_matches (const ::GMatchInfo* match_info /*none*/);
GI_INLINE_DECL bool matches () const noexcept;

// gboolean g_match_info_next (GMatchInfo* match_info /*none*/, GError ** error);
// gboolean g_match_info_next (::GMatchInfo* match_info /*none*/, GError ** error);
GI_INLINE_DECL bool next ();
GI_INLINE_DECL bool next (GLib::Error * _error) noexcept;

// GMatchInfo* /*full*/ g_match_info_ref (GMatchInfo* match_info /*none*/);
// ::GMatchInfo* /*full*/ g_match_info_ref (::GMatchInfo* match_info /*none*/);
// IGNORE; marked ignore

// void g_match_info_unref (GMatchInfo* match_info /*none*/);
// void g_match_info_unref (::GMatchInfo* match_info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_def.hpp>)
#include <glib/matchinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra.hpp>)
#include <glib/matchinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MatchInfo_Ref;

class MatchInfo : public gi::detail::GBoxedWrapper<MatchInfo, ::GMatchInfo, GI_GLIB_MATCHINFO_BASE, MatchInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<MatchInfo, ::GMatchInfo, GI_GLIB_MATCHINFO_BASE, MatchInfo_Ref> super_type; using super_type::super_type; };


class MatchInfo_Ref : public gi::detail::GBoxedRefWrapper<MatchInfo, ::GMatchInfo, GI_GLIB_MATCHINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<MatchInfo, ::GMatchInfo, GI_GLIB_MATCHINFO_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMatchInfo>
{ typedef GLib::MatchInfo type; }; 

} // namespace repository

} // namespace gi

#endif
