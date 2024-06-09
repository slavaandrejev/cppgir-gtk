// AUTO-GENERATED

#ifndef _GI_GIO_IOSTREAM_IMPL_HPP_
#define _GI_GIO_IOSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_io_stream_splice_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean g_io_stream_splice_finish (::GAsyncResult* result /*none*/, GError ** error);
bool base::IOStreamBase::splice_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_io_stream_clear_pending (GIOStream* stream /*none*/);
// void g_io_stream_clear_pending (::GIOStream* stream /*none*/);
void base::IOStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_clear_pending;
  call_wrap_v ((::GIOStream*) (gobj_()));
}

// gboolean g_io_stream_close (GIOStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_io_stream_close (::GIOStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::IOStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::IOStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_io_stream_close_async (GIOStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_io_stream_close_async (::GIOStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IOStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GIOStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IOStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GIOStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_io_stream_close_finish (GIOStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_io_stream_close_finish (::GIOStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::IOStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GInputStream* /*none*/ g_io_stream_get_input_stream (GIOStream* stream /*none*/);
// ::GInputStream* /*none*/ g_io_stream_get_input_stream (::GIOStream* stream /*none*/);
Gio::InputStream base::IOStreamBase::get_input_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_get_input_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GOutputStream* /*none*/ g_io_stream_get_output_stream (GIOStream* stream /*none*/);
// ::GOutputStream* /*none*/ g_io_stream_get_output_stream (::GIOStream* stream /*none*/);
Gio::OutputStream base::IOStreamBase::get_output_stream () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_get_output_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_io_stream_has_pending (GIOStream* stream /*none*/);
// gboolean g_io_stream_has_pending (::GIOStream* stream /*none*/);
bool base::IOStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_stream_is_closed (GIOStream* stream /*none*/);
// gboolean g_io_stream_is_closed (::GIOStream* stream /*none*/);
bool base::IOStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_stream_set_pending (GIOStream* stream /*none*/, GError ** error);
// gboolean g_io_stream_set_pending (::GIOStream* stream /*none*/, GError ** error);
bool base::IOStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_io_stream_splice_async (GIOStream* stream1 /*none*/, GIOStream* stream2 /*none*/, GIOStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_io_stream_splice_async (::GIOStream* stream1 /*none*/, ::GIOStream* stream2 /*none*/, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IOStreamBase::splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto stream2_to_c = gi::unwrap (stream2, gi::transfer_none);
  call_wrap_v ((::GIOStream*) (gobj_()), (::GIOStream*) (stream2_to_c), (::GIOStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IOStreamBase::splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto stream2_to_c = gi::unwrap (stream2, gi::transfer_none);
  call_wrap_v ((::GIOStream*) (gobj_()), (::GIOStream*) (stream2_to_c), (::GIOStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_def_impl.hpp>)
#include <gio/iostream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_impl.hpp>)
#include <gio/iostream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IOStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GIOStreamClass *methods = (::GIOStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close_async) methods->close_async = (decltype (methods->close_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::close_async_>;
  if (init_data.close_finish) methods->close_finish = (decltype (methods->close_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_finish_>;
  if (init_data.close_fn) methods->close_fn = (decltype (methods->close_fn)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_fn_>;
  if (init_data.get_input_stream) methods->get_input_stream = (decltype (methods->get_input_stream)) detail::method_wrapper<self, Gio::InputStream (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_input_stream_>;
  if (init_data.get_output_stream) methods->get_output_stream = (decltype (methods->get_output_stream)) detail::method_wrapper<self, Gio::OutputStream (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_output_stream_>;
}

// void IOStream::close_async (GIOStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void IOStream::close_async (::GIOStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void IOStreamClass::close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->close_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GIOStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean IOStream::close_finish (GIOStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean IOStream::close_finish (::GIOStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool IOStreamClass::close_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->close_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean IOStream::close_fn (GIOStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean IOStream::close_fn (::GIOStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool IOStreamClass::close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->close_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GInputStream* /*none*/ IOStream::get_input_stream (GIOStream* stream /*none*/);
// ::GInputStream* /*none*/ IOStream::get_input_stream (::GIOStream* stream /*none*/);
Gio::InputStream IOStreamClass::get_input_stream_ () noexcept
{
  if (!get_struct_()->get_input_stream) { g_critical ("no method in class struct"); return {}; }
  typedef ::GInputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_input_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GOutputStream* /*none*/ IOStream::get_output_stream (GIOStream* stream /*none*/);
// ::GOutputStream* /*none*/ IOStream::get_output_stream (::GIOStream* stream /*none*/);
Gio::OutputStream IOStreamClass::get_output_stream_ () noexcept
{
  if (!get_struct_()->get_output_stream) { g_critical ("no method in class struct"); return {}; }
  typedef ::GOutputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_output_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
