// AUTO-GENERATED

#ifndef _GI_GLIB_PATTERNSPEC_IMPL_HPP_
#define _GI_GLIB_PATTERNSPEC_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GPatternSpec* /*full*/ g_pattern_spec_new (const gchar* pattern /*none*/);
// ::GPatternSpec* /*full*/ g_pattern_spec_new (const char* pattern /*none*/);
GLib::PatternSpec base::PatternSpecBase::new_ (const gi::cstring_v pattern) noexcept
{
  typedef ::GPatternSpec* (*call_wrap_t) (const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_new;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GPatternSpec* /*full*/ g_pattern_spec_copy (GPatternSpec* pspec /*none*/);
// ::GPatternSpec* /*full*/ g_pattern_spec_copy (::GPatternSpec* pspec /*none*/);
GLib::PatternSpec base::PatternSpecBase::copy () noexcept
{
  typedef ::GPatternSpec* (*call_wrap_t) (::GPatternSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_spec_copy;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_pattern_spec_equal (GPatternSpec* pspec1 /*none*/, GPatternSpec* pspec2 /*none*/);
// gboolean g_pattern_spec_equal (::GPatternSpec* pspec1 /*none*/, ::GPatternSpec* pspec2 /*none*/);
bool base::PatternSpecBase::equal (GLib::PatternSpec_Ref pspec2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec1, ::GPatternSpec* pspec2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_spec_equal;
  auto pspec2_to_c = gi::unwrap (pspec2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (::GPatternSpec*) (pspec2_to_c));
  return _temp_ret;
}

// void g_pattern_spec_free (GPatternSpec* pspec /*none*/);
// void g_pattern_spec_free (::GPatternSpec* pspec /*none*/);
// IGNORE; marked ignore

// gboolean g_pattern_spec_match (GPatternSpec* pspec /*none*/, gsize string_length, const gchar* string /*none*/, const gchar* string_reversed /*none,nullable*/);
// gboolean g_pattern_spec_match (::GPatternSpec* pspec /*none*/, gsize string_length, const char* string /*none*/, const char* string_reversed /*none,nullable*/);
bool base::PatternSpecBase::match (gsize string_length, const gi::cstring_v string, const gi::cstring_v string_reversed) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_spec_match;
  auto string_reversed_to_c = gi::unwrap (string_reversed, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto string_length_to_c = string_length;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (gsize) (string_length_to_c), (const char*) (string_to_c), (const char*) (string_reversed_to_c));
  return _temp_ret;
}
bool base::PatternSpecBase::match (gsize string_length, const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_spec_match;
  auto string_reversed_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto string_length_to_c = string_length;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (gsize) (string_length_to_c), (const char*) (string_to_c), (const char*) (string_reversed_to_c));
  return _temp_ret;
}

// gboolean g_pattern_spec_match_string (GPatternSpec* pspec /*none*/, const gchar* string /*none*/);
// gboolean g_pattern_spec_match_string (::GPatternSpec* pspec /*none*/, const char* string /*none*/);
bool base::PatternSpecBase::match_string (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_spec_match_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (const char*) (string_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_def_impl.hpp>)
#include <glib/patternspec_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_impl.hpp>)
#include <glib/patternspec_extra_impl.hpp>
#endif
#endif

#endif
