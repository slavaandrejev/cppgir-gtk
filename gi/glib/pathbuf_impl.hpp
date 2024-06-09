// AUTO-GENERATED

#ifndef _GI_GLIB_PATHBUF_IMPL_HPP_
#define _GI_GLIB_PATHBUF_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_path_buf_clear (GPathBuf* buf /*none*/);
// void g_path_buf_clear (::GPathBuf* buf /*none*/);
void base::PathBufBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_clear;
  call_wrap_v ((::GPathBuf*) (gobj_()));
}

// char* /*full,nullable*/ g_path_buf_clear_to_path (GPathBuf* buf /*none*/);
// char* /*full,nullable*/ g_path_buf_clear_to_path (::GPathBuf* buf /*none*/);
gi::cstring base::PathBufBase::clear_to_path () noexcept
{
  typedef char* (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_clear_to_path;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GPathBuf* /*full*/ g_path_buf_copy (GPathBuf* buf /*none*/);
// ::GPathBuf* /*full*/ g_path_buf_copy (::GPathBuf* buf /*none*/);
GLib::PathBuf base::PathBufBase::copy () noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_copy;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_path_buf_free (GPathBuf* buf /*full*/);
// void g_path_buf_free (::GPathBuf* buf /*full*/);
// IGNORE; marked ignore

// char* /*full,nullable*/ g_path_buf_free_to_path (GPathBuf* buf /*full*/);
// char* /*full,nullable*/ g_path_buf_free_to_path (::GPathBuf* buf /*full*/);
gi::cstring base::PathBufBase::free_to_path () noexcept
{
  typedef char* (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_free_to_path;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GPathBuf* /*none*/ g_path_buf_init (GPathBuf* buf /*none*/);
// ::GPathBuf* /*none*/ g_path_buf_init (::GPathBuf* buf /*none*/);
GLib::PathBuf_Ref base::PathBufBase::init () noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_init;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GPathBuf* /*none*/ g_path_buf_init_from_path (GPathBuf* buf /*none*/, const char* path /*none,nullable*/);
// ::GPathBuf* /*none*/ g_path_buf_init_from_path (::GPathBuf* buf /*none*/, const char* path /*none,nullable*/);
GLib::PathBuf_Ref base::PathBufBase::init_from_path (const gi::cstring_v path) noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (::GPathBuf* buf, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_init_from_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::PathBuf_Ref base::PathBufBase::init_from_path () noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (::GPathBuf* buf, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_init_from_path;
  auto path_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_path_buf_pop (GPathBuf* buf /*none*/);
// gboolean g_path_buf_pop (::GPathBuf* buf /*none*/);
bool base::PathBufBase::pop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_pop;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return _temp_ret;
}

// GPathBuf* /*none*/ g_path_buf_push (GPathBuf* buf /*none*/, const char* path /*none*/);
// ::GPathBuf* /*none*/ g_path_buf_push (::GPathBuf* buf /*none*/, const char* path /*none*/);
GLib::PathBuf_Ref base::PathBufBase::push (const gi::cstring_v path) noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (::GPathBuf* buf, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_push;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_path_buf_set_extension (GPathBuf* buf /*none*/, const char* extension /*none,nullable*/);
// gboolean g_path_buf_set_extension (::GPathBuf* buf /*none*/, const char* extension /*none,nullable*/);
bool base::PathBufBase::set_extension (const gi::cstring_v extension) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPathBuf* buf, const char* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_set_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (extension_to_c));
  return _temp_ret;
}
bool base::PathBufBase::set_extension () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPathBuf* buf, const char* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_set_extension;
  auto extension_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (extension_to_c));
  return _temp_ret;
}

// gboolean g_path_buf_set_filename (GPathBuf* buf /*none*/, const char* file_name /*none*/);
// gboolean g_path_buf_set_filename (::GPathBuf* buf /*none*/, const char* file_name /*none*/);
bool base::PathBufBase::set_filename (const gi::cstring_v file_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPathBuf* buf, const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_set_filename;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()), (const char*) (file_name_to_c));
  return _temp_ret;
}

// char* /*full,nullable*/ g_path_buf_to_path (GPathBuf* buf /*none*/);
// char* /*full,nullable*/ g_path_buf_to_path (::GPathBuf* buf /*none*/);
gi::cstring base::PathBufBase::to_path () noexcept
{
  typedef char* (*call_wrap_t) (::GPathBuf* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_to_path;
  auto _temp_ret = call_wrap_v ((::GPathBuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_path_buf_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_path_buf_equal (const void* v1, const void* v2);
bool base::PathBufBase::equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// GPathBuf* /*full*/ g_path_buf_new ();
// ::GPathBuf* /*full*/ g_path_buf_new ();
GLib::PathBuf base::PathBufBase::new_ () noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GPathBuf* /*full*/ g_path_buf_new_from_path (const char* path /*none,nullable*/);
// ::GPathBuf* /*full*/ g_path_buf_new_from_path (const char* path /*none,nullable*/);
GLib::PathBuf base::PathBufBase::new_from_path (const gi::cstring_v path) noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_new_from_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::PathBuf base::PathBufBase::new_from_path () noexcept
{
  typedef ::GPathBuf* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_buf_new_from_path;
  auto path_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/pathbuf_extra_def_impl.hpp>)
#include <glib/pathbuf_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/pathbuf_extra_impl.hpp>)
#include <glib/pathbuf_extra_impl.hpp>
#endif
#endif

#endif
