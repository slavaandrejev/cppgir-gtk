// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_POLLABLEOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_pollable_output_stream_can_poll (GPollableOutputStream* stream /*none*/);
// gboolean g_pollable_output_stream_can_poll (::GPollableOutputStream* stream /*none*/);
bool base::PollableOutputStreamBase::can_poll () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* /*full*/ g_pollable_output_stream_create_source (GPollableOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_output_stream_create_source (::GPollableOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source base::PollableOutputStreamBase::create_source (Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Source base::PollableOutputStreamBase::create_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_create_source;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_pollable_output_stream_is_writable (GPollableOutputStream* stream /*none*/);
// gboolean g_pollable_output_stream_is_writable (::GPollableOutputStream* stream /*none*/);
bool base::PollableOutputStreamBase::is_writable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_is_writable;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_pollable_output_stream_write_nonblocking (GPollableOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_output_stream_write_nonblocking (::GPollableOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::PollableOutputStreamBase::write_nonblocking (const guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (const guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::PollableOutputStreamBase::write_nonblocking (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_output_stream_write_nonblocking;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GPollableReturn g_pollable_output_stream_writev_nonblocking (GPollableOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GPollableReturn g_pollable_output_stream_writev_nonblocking (::GPollableOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_def_impl.hpp>)
#include <gio/pollableoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_impl.hpp>)
#include <gio/pollableoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PollableOutputStreamInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GPollableOutputStreamInterface *methods = (::GPollableOutputStreamInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_poll) methods->can_poll = (decltype (methods->can_poll)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_poll_>;
  if (init_data.create_source) methods->create_source = (decltype (methods->create_source)) detail::method_wrapper<self, GLib::Source (*) (Gio::Cancellable cancellable), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::create_source_>;
  if (init_data.is_writable) methods->is_writable = (decltype (methods->is_writable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_writable_>;
  if (init_data.write_nonblocking) methods->write_nonblocking = (decltype (methods->write_nonblocking)) detail::method_wrapper<self, gssize (*) (const guint8 * buffer, gsize count, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::write_nonblocking_>;
}

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream /*none*/);
bool PollableOutputStreamInterfaceClassImpl::can_poll_ () noexcept
{
  if (!get_struct_()->can_poll) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// GSource* /*full*/ PollableOutputStream::create_source (GPollableOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableOutputStream::create_source (::GPollableOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source PollableOutputStreamInterfaceClassImpl::create_source_ (Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->create_source) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSource* (*call_wrap_t) (::GPollableOutputStream* stream, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream /*none*/);
bool PollableOutputStreamInterfaceClassImpl::is_writable_ () noexcept
{
  if (!get_struct_()->is_writable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPollableOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_writable;
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()));
  return _temp_ret;
}

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, GError ** error);
gssize PollableOutputStreamInterfaceClassImpl::write_nonblocking_ (const guint8 * buffer, gsize count, GLib::Error * _error)
{
  if (!get_struct_()->write_nonblocking) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GPollableOutputStream* stream, guint8* buffer, gsize count, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_nonblocking;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPollableOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
