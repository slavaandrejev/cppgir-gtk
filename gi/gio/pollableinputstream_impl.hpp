// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_POLLABLEINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_pollable_input_stream_can_poll (GPollableInputStream* stream /*none*/);
// gboolean g_pollable_input_stream_can_poll (::GPollableInputStream* stream /*none*/);
bool base::PollableInputStreamBase::can_poll () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* /*full*/ g_pollable_input_stream_create_source (GPollableInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_input_stream_create_source (::GPollableInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source base::PollableInputStreamBase::create_source (Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Source base::PollableInputStreamBase::create_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_create_source;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_pollable_input_stream_is_readable (GPollableInputStream* stream /*none*/);
// gboolean g_pollable_input_stream_is_readable (::GPollableInputStream* stream /*none*/);
bool base::PollableInputStreamBase::is_readable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_is_readable;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_pollable_input_stream_read_nonblocking (GPollableInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_input_stream_read_nonblocking (::GPollableInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::PollableInputStreamBase::read_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_input_stream_read_nonblocking;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_def_impl.hpp>)
#include <gio/pollableinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_impl.hpp>)
#include <gio/pollableinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PollableInputStreamInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GPollableInputStreamInterface *methods = (::GPollableInputStreamInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_poll) methods->can_poll = (decltype (methods->can_poll)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_poll_>;
  if (init_data.create_source) methods->create_source = (decltype (methods->create_source)) detail::method_wrapper<self, GLib::Source (*) (Gio::Cancellable cancellable), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::create_source_>;
  if (init_data.is_readable) methods->is_readable = (decltype (methods->is_readable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_readable_>;
  if (init_data.read_nonblocking) methods->read_nonblocking = (decltype (methods->read_nonblocking)) detail::method_wrapper<self, gssize (*) (guint8 * buffer, gsize count, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::read_nonblocking_>;
}

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream /*none*/);
bool PollableInputStreamInterfaceClassImpl::can_poll_ () noexcept
{
  if (!get_struct_()->can_poll) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* /*full*/ PollableInputStream::create_source (GPollableInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableInputStream::create_source (::GPollableInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source PollableInputStreamInterfaceClassImpl::create_source_ (Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->create_source) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSource* (*call_wrap_t) (::GPollableInputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream /*none*/);
bool PollableInputStreamInterfaceClassImpl::is_readable_ () noexcept
{
  if (!get_struct_()->is_readable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPollableInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_readable;
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
gssize PollableInputStreamInterfaceClassImpl::read_nonblocking_ (guint8 * buffer, gsize count, GLib::Error * _error)
{
  if (!get_struct_()->read_nonblocking) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GPollableInputStream* stream, guint8* buffer, gsize count, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_nonblocking;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
