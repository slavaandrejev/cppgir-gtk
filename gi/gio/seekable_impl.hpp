// AUTO-GENERATED

#ifndef _GI_GIO_SEEKABLE_IMPL_HPP_
#define _GI_GIO_SEEKABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_seekable_can_seek (GSeekable* seekable /*none*/);
// gboolean g_seekable_can_seek (::GSeekable* seekable /*none*/);
bool base::SeekableBase::can_seek () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_can_seek;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean g_seekable_can_truncate (GSeekable* seekable /*none*/);
// gboolean g_seekable_can_truncate (::GSeekable* seekable /*none*/);
bool base::SeekableBase::can_truncate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_can_truncate;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean g_seekable_seek (GSeekable* seekable /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_seekable_seek (::GSeekable* seekable /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SeekableBase::seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_seek;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SeekableBase::seek (gint64 offset, GLib::SeekType type)
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_seek;
  auto cancellable_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SeekableBase::seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_seek;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SeekableBase::seek (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_seek;
  auto cancellable_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// goffset g_seekable_tell (GSeekable* seekable /*none*/);
// gint64 g_seekable_tell (::GSeekable* seekable /*none*/);
gint64 base::SeekableBase::tell () noexcept
{
  typedef gint64 (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_tell;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean g_seekable_truncate (GSeekable* seekable /*none*/, goffset offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_seekable_truncate (::GSeekable* seekable /*none*/, gint64 offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SeekableBase::truncate (gint64 offset, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_truncate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto offset_to_c = offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SeekableBase::truncate (gint64 offset)
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_truncate;
  auto cancellable_to_c = nullptr;
  auto offset_to_c = offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SeekableBase::truncate (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_truncate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SeekableBase::truncate (gint64 offset, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_seekable_truncate;
  auto cancellable_to_c = nullptr;
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/seekable_extra_def_impl.hpp>)
#include <gio/seekable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/seekable_extra_impl.hpp>)
#include <gio/seekable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SeekableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GSeekableIface *methods = (::GSeekableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_seek) methods->can_seek = (decltype (methods->can_seek)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_seek_>;
  if (init_data.can_truncate) methods->can_truncate = (decltype (methods->can_truncate)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_truncate_>;
  if (init_data.seek) methods->seek = (decltype (methods->seek)) detail::method_wrapper<self, bool (*) (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::seek_>;
  if (init_data.tell) methods->tell = (decltype (methods->tell)) detail::method_wrapper<self, gint64 (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::tell_>;
  if (init_data.truncate_fn) methods->truncate_fn = (decltype (methods->truncate_fn)) detail::method_wrapper<self, bool (*) (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::truncate_fn_>;
}

// gboolean Seekable::can_seek (GSeekable* seekable /*none*/);
// gboolean Seekable::can_seek (::GSeekable* seekable /*none*/);
bool SeekableIfaceClassImpl::can_seek_ () noexcept
{
  if (!get_struct_()->can_seek) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_seek;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean Seekable::can_truncate (GSeekable* seekable /*none*/);
// gboolean Seekable::can_truncate (::GSeekable* seekable /*none*/);
bool SeekableIfaceClassImpl::can_truncate_ () noexcept
{
  if (!get_struct_()->can_truncate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_truncate;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean Seekable::seek (GSeekable* seekable /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::seek (::GSeekable* seekable /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool SeekableIfaceClassImpl::seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->seek) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->seek;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// goffset Seekable::tell (GSeekable* seekable /*none*/);
// gint64 Seekable::tell (::GSeekable* seekable /*none*/);
gint64 SeekableIfaceClassImpl::tell_ () noexcept
{
  if (!get_struct_()->tell) { g_critical ("no method in class struct"); return {}; }
  typedef gint64 (*call_wrap_t) (::GSeekable* seekable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tell;
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()));
  return _temp_ret;
}

// gboolean Seekable::truncate_fn (GSeekable* seekable /*none*/, goffset offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::truncate_fn (::GSeekable* seekable /*none*/, gint64 offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool SeekableIfaceClassImpl::truncate_fn_ (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->truncate_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->truncate_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSeekable*) (gobj_()), (gint64) (offset_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
