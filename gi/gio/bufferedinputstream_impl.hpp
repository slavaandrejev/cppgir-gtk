// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_BUFFEREDINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable BufferedInputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BufferedInputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GInputStream* /*full*/ g_buffered_input_stream_new (GInputStream* base_stream /*none*/);
// ::GBufferedInputStream* /*full*/ g_buffered_input_stream_new (::GInputStream* base_stream /*none*/);
Gio::BufferedInputStream base::BufferedInputStreamBase::new_ (Gio::InputStream base_stream) noexcept
{
  typedef ::GBufferedInputStream* (*call_wrap_t) (::GInputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full*/ g_buffered_input_stream_new_sized (GInputStream* base_stream /*none*/, gsize size);
// ::GBufferedInputStream* /*full*/ g_buffered_input_stream_new_sized (::GInputStream* base_stream /*none*/, gsize size);
Gio::BufferedInputStream base::BufferedInputStreamBase::new_sized (Gio::InputStream base_stream, gsize size) noexcept
{
  typedef ::GBufferedInputStream* (*call_wrap_t) (::GInputStream* base_stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_new_sized;
  auto size_to_c = size;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c), (gsize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gssize g_buffered_input_stream_fill (GBufferedInputStream* stream /*none*/, gssize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_buffered_input_stream_fill (::GBufferedInputStream* stream /*none*/, gssize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::BufferedInputStreamBase::fill (gssize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_buffered_input_stream_fill_async (GBufferedInputStream* stream /*none*/, gssize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_buffered_input_stream_fill_async (::GBufferedInputStream* stream /*none*/, gssize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::BufferedInputStreamBase::fill_async (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::BufferedInputStreamBase::fill_async (gssize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_buffered_input_stream_fill_finish (GBufferedInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_buffered_input_stream_fill_finish (::GBufferedInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::BufferedInputStreamBase::fill_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_fill_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gsize g_buffered_input_stream_get_available (GBufferedInputStream* stream /*none*/);
// gsize g_buffered_input_stream_get_available (::GBufferedInputStream* stream /*none*/);
gsize base::BufferedInputStreamBase::get_available () noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_get_available;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_buffered_input_stream_get_buffer_size (GBufferedInputStream* stream /*none*/);
// gsize g_buffered_input_stream_get_buffer_size (::GBufferedInputStream* stream /*none*/);
gsize base::BufferedInputStreamBase::get_buffer_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_get_buffer_size;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_buffered_input_stream_peek (GBufferedInputStream* stream /*none*/, void* buffer /*none*/, gsize offset, gsize count);
// gsize g_buffered_input_stream_peek (::GBufferedInputStream* stream /*none*/, guint8* buffer /*none*/, gsize offset, gsize count);
gsize base::BufferedInputStreamBase::peek (const guint8 * buffer, gsize offset, gsize count) noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream, guint8* buffer, gsize offset, gsize count);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_peek;
  auto offset_to_c = offset;
  auto buffer_to_c = buffer;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (offset_to_c), (gsize) (count));
  return _temp_ret;
}

// void* /*none*/ g_buffered_input_stream_peek_buffer (GBufferedInputStream* stream /*none*/, gsize* count);
// guint8* /*none*/ g_buffered_input_stream_peek_buffer (::GBufferedInputStream* stream /*none*/, gsize* count);
gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> base::BufferedInputStreamBase::peek_buffer () noexcept
{
  typedef guint8* (*call_wrap_t) (::GBufferedInputStream* stream, gsize* count);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_peek_buffer;
  gsize count;
  auto _ret_o = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gsize*) (&count));
  gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_none_t>>(_ret_o, count, gi::transfer_none);
  return _temp_ret;
}

// int g_buffered_input_stream_read_byte (GBufferedInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_buffered_input_stream_read_byte (::GBufferedInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gint base::BufferedInputStreamBase::read_byte (Gio::Cancellable cancellable)
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte ()
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_buffered_input_stream_set_buffer_size (GBufferedInputStream* stream /*none*/, gsize size);
// void g_buffered_input_stream_set_buffer_size (::GBufferedInputStream* stream /*none*/, gsize size);
void base::BufferedInputStreamBase::set_buffer_size (gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_input_stream_set_buffer_size;
  auto size_to_c = size;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gsize) (size_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_def_impl.hpp>)
#include <gio/bufferedinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_impl.hpp>)
#include <gio/bufferedinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void BufferedInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GBufferedInputStreamClass *methods = (::GBufferedInputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.fill) methods->fill = (decltype (methods->fill)) detail::method_wrapper<self, gssize (*) (gssize count, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::fill_>;
  if (init_data.fill_async) methods->fill_async = (decltype (methods->fill_async)) detail::method_wrapper<self, void (*) (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::fill_async_>;
  if (init_data.fill_finish) methods->fill_finish = (decltype (methods->fill_finish)) detail::method_wrapper<self, gssize (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::fill_finish_>;
}

// gssize BufferedInputStream::fill (GBufferedInputStream* stream /*none*/, gssize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream /*none*/, gssize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize BufferedInputStreamClass::fill_ (gssize count, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->fill) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->fill;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void BufferedInputStream::fill_async (GBufferedInputStream* stream /*none*/, gssize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream /*none*/, gssize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void BufferedInputStreamClass::fill_async_ (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->fill_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->fill_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize BufferedInputStreamClass::fill_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->fill_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->fill_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
