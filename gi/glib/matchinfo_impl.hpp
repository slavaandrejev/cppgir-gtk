// AUTO-GENERATED

#ifndef _GI_GLIB_MATCHINFO_IMPL_HPP_
#define _GI_GLIB_MATCHINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// gchar* /*full,nullable*/ g_match_info_expand_references (const GMatchInfo* match_info /*none,nullable*/, const gchar* string_to_expand /*none*/, GError ** error);
// char* /*full,nullable*/ g_match_info_expand_references (const ::GMatchInfo* match_info /*none,nullable*/, const char* string_to_expand /*none*/, GError ** error);
gi::cstring base::MatchInfoBase::expand_references (const gi::cstring_v string_to_expand) const
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_expand_references;
  auto string_to_expand_to_c = gi::unwrap (string_to_expand, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (string_to_expand_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::MatchInfoBase::expand_references (const gi::cstring_v string_to_expand, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_expand_references;
  auto string_to_expand_to_c = gi::unwrap (string_to_expand, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (string_to_expand_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_match_info_fetch (const GMatchInfo* match_info /*none*/, gint match_num);
// char* /*full,nullable*/ g_match_info_fetch (const ::GMatchInfo* match_info /*none*/, gint match_num);
gi::cstring base::MatchInfoBase::fetch (gint match_num) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch;
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_match_info_fetch_all (const GMatchInfo* match_info /*none*/);
// char** /*full*/ g_match_info_fetch_all (const ::GMatchInfo* match_info /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MatchInfoBase::fetch_all () const noexcept
{
  typedef char** (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_all;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_match_info_fetch_named (const GMatchInfo* match_info /*none*/, const gchar* name /*none*/);
// char* /*full,nullable*/ g_match_info_fetch_named (const ::GMatchInfo* match_info /*none*/, const char* name /*none*/);
gi::cstring base::MatchInfoBase::fetch_named (const gi::cstring_v name) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_named;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_match_info_fetch_named_pos (const GMatchInfo* match_info /*none*/, const gchar* name /*none*/, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_named_pos (const ::GMatchInfo* match_info /*none*/, const char* name /*none*/, gint* start_pos, gint* end_pos);
bool base::MatchInfoBase::fetch_named_pos (const gi::cstring_v name, gint * start_pos, gint * end_pos) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_named_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::MatchInfoBase::fetch_named_pos (const gi::cstring_v name) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_named_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = start_pos_o;
  auto &&tmp_return_3 = end_pos_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean g_match_info_fetch_pos (const GMatchInfo* match_info /*none*/, gint match_num, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_pos (const ::GMatchInfo* match_info /*none*/, gint match_num, gint* start_pos, gint* end_pos);
bool base::MatchInfoBase::fetch_pos (gint match_num, gint * start_pos, gint * end_pos) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::MatchInfoBase::fetch_pos (gint match_num) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_fetch_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = start_pos_o;
  auto &&tmp_return_3 = end_pos_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_match_info_free (GMatchInfo* match_info /*none,nullable*/);
// void g_match_info_free (::GMatchInfo* match_info /*none,nullable*/);
// IGNORE; marked ignore

// gint g_match_info_get_match_count (const GMatchInfo* match_info /*none*/);
// gint g_match_info_get_match_count (const ::GMatchInfo* match_info /*none*/);
gint base::MatchInfoBase::get_match_count () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_get_match_count;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// GRegex* /*none*/ g_match_info_get_regex (const GMatchInfo* match_info /*none*/);
// ::GRegex* /*none*/ g_match_info_get_regex (const ::GMatchInfo* match_info /*none*/);
GLib::Regex_Ref base::MatchInfoBase::get_regex () const noexcept
{
  typedef ::GRegex* (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_get_regex;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_match_info_get_string (const GMatchInfo* match_info /*none*/);
// const char* /*none*/ g_match_info_get_string (const ::GMatchInfo* match_info /*none*/);
gi::cstring_v base::MatchInfoBase::get_string () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_get_string;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_match_info_is_partial_match (const GMatchInfo* match_info /*none*/);
// gboolean g_match_info_is_partial_match (const ::GMatchInfo* match_info /*none*/);
bool base::MatchInfoBase::is_partial_match () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_is_partial_match;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_match_info_matches (const GMatchInfo* match_info /*none*/);
// gboolean g_match_info_matches (const ::GMatchInfo* match_info /*none*/);
bool base::MatchInfoBase::matches () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_matches;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_match_info_next (GMatchInfo* match_info /*none*/, GError ** error);
// gboolean g_match_info_next (::GMatchInfo* match_info /*none*/, GError ** error);
bool base::MatchInfoBase::next ()
{
  typedef gboolean (*call_wrap_t) (::GMatchInfo* match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_next;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMatchInfo*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MatchInfoBase::next (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMatchInfo* match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_match_info_next;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMatchInfo*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GMatchInfo* /*full*/ g_match_info_ref (GMatchInfo* match_info /*none*/);
// ::GMatchInfo* /*full*/ g_match_info_ref (::GMatchInfo* match_info /*none*/);
// IGNORE; marked ignore

// void g_match_info_unref (GMatchInfo* match_info /*none*/);
// void g_match_info_unref (::GMatchInfo* match_info /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_def_impl.hpp>)
#include <glib/matchinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_impl.hpp>)
#include <glib/matchinfo_extra_impl.hpp>
#endif
#endif

#endif
