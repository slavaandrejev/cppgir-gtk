// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEMATCHER_IMPL_HPP_
#define _GI_GIO_FILEATTRIBUTEMATCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_new (const char* attributes /*none*/);
// ::GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_new (const char* attributes /*none*/);
Gio::FileAttributeMatcher base::FileAttributeMatcherBase::new_ (const gi::cstring_v attributes) noexcept
{
  typedef ::GFileAttributeMatcher* (*call_wrap_t) (const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_matcher_new;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (attributes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_attribute_matcher_enumerate_namespace (GFileAttributeMatcher* matcher /*none*/, const char* ns /*none*/);
// gboolean g_file_attribute_matcher_enumerate_namespace (::GFileAttributeMatcher* matcher /*none*/, const char* ns /*none*/);
bool base::FileAttributeMatcherBase::enumerate_namespace (const gi::cstring_v ns) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileAttributeMatcher* matcher, const char* ns);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_enumerate_namespace;
  auto ns_to_c = gi::unwrap (ns, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()), (const char*) (ns_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_file_attribute_matcher_enumerate_next (GFileAttributeMatcher* matcher /*none*/);
// const char* /*none,nullable*/ g_file_attribute_matcher_enumerate_next (::GFileAttributeMatcher* matcher /*none*/);
gi::cstring_v base::FileAttributeMatcherBase::enumerate_next () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileAttributeMatcher* matcher);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_enumerate_next;
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_file_attribute_matcher_matches (GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
// gboolean g_file_attribute_matcher_matches (::GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
bool base::FileAttributeMatcherBase::matches (const gi::cstring_v attribute) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileAttributeMatcher* matcher, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_matches;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// gboolean g_file_attribute_matcher_matches_only (GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
// gboolean g_file_attribute_matcher_matches_only (::GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
bool base::FileAttributeMatcherBase::matches_only (const gi::cstring_v attribute) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileAttributeMatcher* matcher, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_matches_only;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_ref (GFileAttributeMatcher* matcher /*none*/);
// ::GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_ref (::GFileAttributeMatcher* matcher /*none*/);
// IGNORE; marked ignore

// GFileAttributeMatcher* /*full,nullable*/ g_file_attribute_matcher_subtract (GFileAttributeMatcher* matcher /*none,nullable*/, GFileAttributeMatcher* subtract /*none,nullable*/);
// ::GFileAttributeMatcher* /*full,nullable*/ g_file_attribute_matcher_subtract (::GFileAttributeMatcher* matcher /*none,nullable*/, ::GFileAttributeMatcher* subtract /*none,nullable*/);
Gio::FileAttributeMatcher base::FileAttributeMatcherBase::subtract (Gio::FileAttributeMatcher_Ref subtract) noexcept
{
  typedef ::GFileAttributeMatcher* (*call_wrap_t) (::GFileAttributeMatcher* matcher, ::GFileAttributeMatcher* subtract);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_subtract;
  auto subtract_to_c = gi::unwrap (subtract, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()), (::GFileAttributeMatcher*) (subtract_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeMatcher base::FileAttributeMatcherBase::subtract () noexcept
{
  typedef ::GFileAttributeMatcher* (*call_wrap_t) (::GFileAttributeMatcher* matcher, ::GFileAttributeMatcher* subtract);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_subtract;
  auto subtract_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()), (::GFileAttributeMatcher*) (subtract_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_file_attribute_matcher_to_string (GFileAttributeMatcher* matcher /*none,nullable*/);
// char* /*full*/ g_file_attribute_matcher_to_string (::GFileAttributeMatcher* matcher /*none,nullable*/);
gi::cstring base::FileAttributeMatcherBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GFileAttributeMatcher* matcher);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_matcher_to_string;
  auto _temp_ret = call_wrap_v ((::GFileAttributeMatcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_attribute_matcher_unref (GFileAttributeMatcher* matcher /*none*/);
// void g_file_attribute_matcher_unref (::GFileAttributeMatcher* matcher /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra_def_impl.hpp>)
#include <gio/fileattributematcher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra_impl.hpp>)
#include <gio/fileattributematcher_extra_impl.hpp>
#endif
#endif

#endif
