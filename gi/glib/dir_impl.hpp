// AUTO-GENERATED

#ifndef _GI_GLIB_DIR_IMPL_HPP_
#define _GI_GLIB_DIR_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GDir* /*full*/ g_dir_open (const gchar* path /*none*/, guint flags, GError ** error);
// ::GDir* /*full*/ g_dir_open (const char* path /*none*/, guint flags, GError ** error);
GLib::Dir base::DirBase::open (const gi::cstring_v path, guint flags)
{
  typedef ::GDir* (*call_wrap_t) (const char* path, guint flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dir_open;
  auto flags_to_c = flags;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (guint) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Dir base::DirBase::open (const gi::cstring_v path, guint flags, GLib::Error * _error) noexcept
{
  typedef ::GDir* (*call_wrap_t) (const char* path, guint flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dir_open;
  auto flags_to_c = flags;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (guint) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dir_close (GDir* dir /*full*/);
// void g_dir_close (::GDir* dir /*full*/);
void base::DirBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GDir* dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_close;
  call_wrap_v ((::GDir*) (gobj_()));
}

// const gchar* /*none*/ g_dir_read_name (GDir* dir /*none*/);
// const char* /*none*/ g_dir_read_name (::GDir* dir /*none*/);
gi::cstring_v base::DirBase::read_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDir* dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_read_name;
  auto _temp_ret = call_wrap_v ((::GDir*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDir* /*full*/ g_dir_ref (GDir* dir /*none*/);
// ::GDir* /*full*/ g_dir_ref (::GDir* dir /*none*/);
// IGNORE; marked ignore

// void g_dir_rewind (GDir* dir /*none*/);
// void g_dir_rewind (::GDir* dir /*none*/);
void base::DirBase::rewind () noexcept
{
  typedef void (*call_wrap_t) (::GDir* dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_rewind;
  call_wrap_v ((::GDir*) (gobj_()));
}

// void g_dir_unref (GDir* dir /*full*/);
// void g_dir_unref (::GDir* dir /*full*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_dir_make_tmp (const gchar* tmpl /*none,nullable*/, GError ** error);
// char* /*full*/ g_dir_make_tmp (const char* tmpl /*none,nullable*/, GError ** error);
gi::cstring base::DirBase::make_tmp (const gi::cstring_v tmpl)
{
  typedef char* (*call_wrap_t) (const char* tmpl, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_make_tmp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DirBase::make_tmp ()
{
  typedef char* (*call_wrap_t) (const char* tmpl, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_make_tmp;
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DirBase::make_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* tmpl, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_make_tmp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DirBase::make_tmp (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* tmpl, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dir_make_tmp;
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/dir_extra_def_impl.hpp>)
#include <glib/dir_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/dir_extra_impl.hpp>)
#include <glib/dir_extra_impl.hpp>
#endif
#endif

#endif
