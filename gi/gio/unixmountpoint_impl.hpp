// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTPOINT_IMPL_HPP_
#define _GI_GIO_UNIXMOUNTPOINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gint g_unix_mount_point_compare (GUnixMountPoint* mount1 /*none*/, GUnixMountPoint* mount2 /*none*/);
// gint g_unix_mount_point_compare (::GUnixMountPoint* mount1 /*none*/, ::GUnixMountPoint* mount2 /*none*/);
gint base::UnixMountPointBase::compare (Gio::UnixMountPoint_Ref mount2) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixMountPoint* mount1, ::GUnixMountPoint* mount2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_compare;
  auto mount2_to_c = gi::unwrap (mount2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()), (::GUnixMountPoint*) (mount2_to_c));
  return _temp_ret;
}

// GUnixMountPoint* /*full*/ g_unix_mount_point_copy (GUnixMountPoint* mount_point /*none*/);
// ::GUnixMountPoint* /*full*/ g_unix_mount_point_copy (::GUnixMountPoint* mount_point /*none*/);
Gio::UnixMountPoint base::UnixMountPointBase::copy () noexcept
{
  typedef ::GUnixMountPoint* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_copy;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_unix_mount_point_free (GUnixMountPoint* mount_point /*none*/);
// void g_unix_mount_point_free (::GUnixMountPoint* mount_point /*none*/);
// IGNORE; marked ignore

// const char* /*none*/ g_unix_mount_point_get_device_path (GUnixMountPoint* mount_point /*none*/);
// const char* /*none*/ g_unix_mount_point_get_device_path (::GUnixMountPoint* mount_point /*none*/);
gi::cstring_v base::UnixMountPointBase::get_device_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_get_device_path;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_point_get_fs_type (GUnixMountPoint* mount_point /*none*/);
// const char* /*none*/ g_unix_mount_point_get_fs_type (::GUnixMountPoint* mount_point /*none*/);
gi::cstring_v base::UnixMountPointBase::get_fs_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_get_fs_type;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_point_get_mount_path (GUnixMountPoint* mount_point /*none*/);
// const char* /*none*/ g_unix_mount_point_get_mount_path (::GUnixMountPoint* mount_point /*none*/);
gi::cstring_v base::UnixMountPointBase::get_mount_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_get_mount_path;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_unix_mount_point_get_options (GUnixMountPoint* mount_point /*none*/);
// const char* /*none,nullable*/ g_unix_mount_point_get_options (::GUnixMountPoint* mount_point /*none*/);
gi::cstring_v base::UnixMountPointBase::get_options () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_get_options;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_unix_mount_point_guess_can_eject (GUnixMountPoint* mount_point /*none*/);
// gboolean g_unix_mount_point_guess_can_eject (::GUnixMountPoint* mount_point /*none*/);
bool base::UnixMountPointBase::guess_can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_guess_can_eject;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return _temp_ret;
}

// GIcon* /*full*/ g_unix_mount_point_guess_icon (GUnixMountPoint* mount_point /*none*/);
// ::GIcon* /*full*/ g_unix_mount_point_guess_icon (::GUnixMountPoint* mount_point /*none*/);
Gio::Icon base::UnixMountPointBase::guess_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_guess_icon;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_unix_mount_point_guess_name (GUnixMountPoint* mount_point /*none*/);
// char* /*full*/ g_unix_mount_point_guess_name (::GUnixMountPoint* mount_point /*none*/);
gi::cstring base::UnixMountPointBase::guess_name () noexcept
{
  typedef char* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_guess_name;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_unix_mount_point_guess_symbolic_icon (GUnixMountPoint* mount_point /*none*/);
// ::GIcon* /*full*/ g_unix_mount_point_guess_symbolic_icon (::GUnixMountPoint* mount_point /*none*/);
Gio::Icon base::UnixMountPointBase::guess_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_guess_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_mount_point_is_loopback (GUnixMountPoint* mount_point /*none*/);
// gboolean g_unix_mount_point_is_loopback (::GUnixMountPoint* mount_point /*none*/);
bool base::UnixMountPointBase::is_loopback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_is_loopback;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return _temp_ret;
}

// gboolean g_unix_mount_point_is_readonly (GUnixMountPoint* mount_point /*none*/);
// gboolean g_unix_mount_point_is_readonly (::GUnixMountPoint* mount_point /*none*/);
bool base::UnixMountPointBase::is_readonly () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_is_readonly;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return _temp_ret;
}

// gboolean g_unix_mount_point_is_user_mountable (GUnixMountPoint* mount_point /*none*/);
// gboolean g_unix_mount_point_is_user_mountable (::GUnixMountPoint* mount_point /*none*/);
bool base::UnixMountPointBase::is_user_mountable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountPoint* mount_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_is_user_mountable;
  auto _temp_ret = call_wrap_v ((::GUnixMountPoint*) (gobj_()));
  return _temp_ret;
}

// GUnixMountPoint* /*full,nullable*/ g_unix_mount_point_at (const char* mount_path /*none*/, guint64* time_read);
// ::GUnixMountPoint* /*full,nullable*/ g_unix_mount_point_at (const char* mount_path /*none*/, guint64* time_read);
Gio::UnixMountPoint base::UnixMountPointBase::at (const gi::cstring_v mount_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountPoint* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::UnixMountPoint, guint64> base::UnixMountPointBase::at (const gi::cstring_v mount_path) noexcept
{
  typedef ::GUnixMountPoint* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_point_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountpoint_extra_def_impl.hpp>)
#include <gio/unixmountpoint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountpoint_extra_impl.hpp>)
#include <gio/unixmountpoint_extra_impl.hpp>
#endif
#endif

#endif
