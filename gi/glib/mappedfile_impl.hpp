// AUTO-GENERATED

#ifndef _GI_GLIB_MAPPEDFILE_IMPL_HPP_
#define _GI_GLIB_MAPPEDFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMappedFile* /*full*/ g_mapped_file_new (const gchar* filename /*none*/, gboolean writable, GError ** error);
// ::GMappedFile* /*full*/ g_mapped_file_new (const char* filename /*none*/, gboolean writable, GError ** error);
GLib::MappedFile base::MappedFileBase::new_ (const gi::cstring_v filename, gboolean writable)
{
  typedef ::GMappedFile* (*call_wrap_t) (const char* filename, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new;
  auto writable_to_c = writable;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gboolean) (writable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::MappedFile base::MappedFileBase::new_ (const gi::cstring_v filename, gboolean writable, GLib::Error * _error) noexcept
{
  typedef ::GMappedFile* (*call_wrap_t) (const char* filename, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new;
  auto writable_to_c = writable;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gboolean) (writable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMappedFile* /*full*/ g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
// ::GMappedFile* /*full*/ g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
GLib::MappedFile base::MappedFileBase::new_from_fd (gint fd, gboolean writable)
{
  typedef ::GMappedFile* (*call_wrap_t) (gint fd, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new_from_fd;
  auto writable_to_c = writable;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (writable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::MappedFile base::MappedFileBase::new_from_fd (gint fd, gboolean writable, GLib::Error * _error) noexcept
{
  typedef ::GMappedFile* (*call_wrap_t) (gint fd, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new_from_fd;
  auto writable_to_c = writable;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (writable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_mapped_file_free (GMappedFile* file /*none*/);
// void g_mapped_file_free (::GMappedFile* file /*none*/);
// IGNORE; marked ignore

// GBytes* /*full*/ g_mapped_file_get_bytes (GMappedFile* file /*none*/);
// ::GBytes* /*full*/ g_mapped_file_get_bytes (::GMappedFile* file /*none*/);
GLib::Bytes base::MappedFileBase::get_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mapped_file_get_bytes;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_mapped_file_get_contents (GMappedFile* file /*none*/);
// char* /*full*/ g_mapped_file_get_contents (::GMappedFile* file /*none*/);
gi::cstring base::MappedFileBase::get_contents () noexcept
{
  typedef char* (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mapped_file_get_contents;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gsize g_mapped_file_get_length (GMappedFile* file /*none*/);
// gsize g_mapped_file_get_length (::GMappedFile* file /*none*/);
gsize base::MappedFileBase::get_length () noexcept
{
  typedef gsize (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mapped_file_get_length;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return _temp_ret;
}

// GMappedFile* /*full*/ g_mapped_file_ref (GMappedFile* file /*none*/);
// ::GMappedFile* /*full*/ g_mapped_file_ref (::GMappedFile* file /*none*/);
// IGNORE; marked ignore

// void g_mapped_file_unref (GMappedFile* file /*none*/);
// void g_mapped_file_unref (::GMappedFile* file /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_def_impl.hpp>)
#include <glib/mappedfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_impl.hpp>)
#include <glib/mappedfile_extra_impl.hpp>
#endif
#endif

#endif
