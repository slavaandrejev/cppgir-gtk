// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_OUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_output_stream_clear_pending (GOutputStream* stream /*none*/);
// void g_output_stream_clear_pending (::GOutputStream* stream /*none*/);
void base::OutputStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_clear_pending;
  call_wrap_v ((::GOutputStream*) (gobj_()));
}

// gboolean g_output_stream_close (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_close (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::OutputStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OutputStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_output_stream_close_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_close_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_close_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_output_stream_close_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::OutputStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_output_stream_flush (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_flush (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::OutputStreamBase::flush (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OutputStreamBase::flush (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_output_stream_flush_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_flush_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::flush_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::flush_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_flush_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_output_stream_flush_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::OutputStreamBase::flush_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_flush_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_output_stream_has_pending (GOutputStream* stream /*none*/);
// gboolean g_output_stream_has_pending (::GOutputStream* stream /*none*/);
bool base::OutputStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_is_closed (GOutputStream* stream /*none*/);
// gboolean g_output_stream_is_closed (::GOutputStream* stream /*none*/);
bool base::OutputStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_is_closing (GOutputStream* stream /*none*/);
// gboolean g_output_stream_is_closing (::GOutputStream* stream /*none*/);
bool base::OutputStreamBase::is_closing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_is_closing;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_printf (GOutputStream* stream /*none*/, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gboolean g_output_stream_printf (::GOutputStream* stream /*none*/, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_output_stream_set_pending (GOutputStream* stream /*none*/, GError ** error);
// gboolean g_output_stream_set_pending (::GOutputStream* stream /*none*/, GError ** error);
bool base::OutputStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_output_stream_splice (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_splice (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_output_stream_splice_async (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_splice_async (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_splice_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_splice_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::OutputStreamBase::splice_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_output_stream_vprintf (GOutputStream* stream /*none*/, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// gboolean g_output_stream_vprintf (::GOutputStream* stream /*none*/, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported, inconsistent error in pointer depth (2 vs 1)

// gssize g_output_stream_write (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_write (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::OutputStreamBase::write (const guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (const guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_output_stream_write_all (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_write_all (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (const guint8 * buffer, gsize count)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_output_stream_write_all_async (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_all_async (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::write_all_async (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_all_async (const guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_write_all_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_write_all_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_output_stream_write_async (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_async (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::write_async (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_async (const guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_write_bytes (GOutputStream* stream /*none*/, GBytes* bytes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_write_bytes (::GOutputStream* stream /*none*/, ::GBytes* bytes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::OutputStreamBase::write_bytes (GLib::Bytes_Ref bytes, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes_Ref bytes)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes;
  auto cancellable_to_c = nullptr;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes_Ref bytes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes;
  auto cancellable_to_c = nullptr;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_output_stream_write_bytes_async (GOutputStream* stream /*none*/, GBytes* bytes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_bytes_async (::GOutputStream* stream /*none*/, ::GBytes* bytes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OutputStreamBase::write_bytes_async (GLib::Bytes_Ref bytes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_bytes_async (GLib::Bytes_Ref bytes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_write_bytes_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_write_bytes_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::OutputStreamBase::write_bytes_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_output_stream_write_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_write_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::OutputStreamBase::write_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_write_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_output_stream_writev (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_writev (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_all (GOutputStream* stream /*none*/, GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_writev_all (::GOutputStream* stream /*none*/, ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// void g_output_stream_writev_all_async (GOutputStream* stream /*none*/, GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_writev_all_async (::GOutputStream* stream /*none*/, ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_all_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_all_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_output_stream_writev_async (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_writev_async (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::writev_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::writev_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_def_impl.hpp>)
#include <gio/outputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_impl.hpp>)
#include <gio/outputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void OutputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GOutputStreamClass *methods = (::GOutputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close_async) methods->close_async = (decltype (methods->close_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::close_async_>;
  if (init_data.close_finish) methods->close_finish = (decltype (methods->close_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_finish_>;
  if (init_data.close_fn) methods->close_fn = (decltype (methods->close_fn)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_fn_>;
  if (init_data.flush) methods->flush = (decltype (methods->flush)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::flush_>;
  if (init_data.flush_async) methods->flush_async = (decltype (methods->flush_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::flush_async_>;
  if (init_data.flush_finish) methods->flush_finish = (decltype (methods->flush_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::flush_finish_>;
  if (init_data.splice) methods->splice = (decltype (methods->splice)) detail::method_wrapper<self, gssize (*) (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::splice_>;
  if (init_data.splice_async) methods->splice_async = (decltype (methods->splice_async)) detail::method_wrapper<self, void (*) (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::splice_async_>;
  if (init_data.splice_finish) methods->splice_finish = (decltype (methods->splice_finish)) detail::method_wrapper<self, gssize (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::splice_finish_>;
  if (init_data.write_async) methods->write_async = (decltype (methods->write_async)) detail::method_wrapper<self, void (*) (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::write_async_>;
  if (init_data.write_finish) methods->write_finish = (decltype (methods->write_finish)) detail::method_wrapper<self, gssize (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::write_finish_>;
  if (init_data.write_fn) methods->write_fn = (decltype (methods->write_fn)) detail::method_wrapper<self, gssize (*) (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::write_fn_>;
  if (init_data.writev_finish) methods->writev_finish = (decltype (methods->writev_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, gsize & bytes_written, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::writev_finish_>;
}

// void OutputStream::close_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::close_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void OutputStreamClass::close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->close_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean OutputStream::close_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::close_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool OutputStreamClass::close_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->close_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean OutputStream::close_fn (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::close_fn (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool OutputStreamClass::close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->close_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean OutputStream::flush (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::flush (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool OutputStreamClass::flush_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->flush) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void OutputStream::flush_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::flush_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void OutputStreamClass::flush_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->flush_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean OutputStream::flush_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::flush_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool OutputStreamClass::flush_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->flush_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize OutputStream::splice (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::splice (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize OutputStreamClass::splice_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->splice) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->splice;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void OutputStream::splice_async (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::splice_async (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void OutputStreamClass::splice_async_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->splice_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize OutputStream::splice_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::splice_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize OutputStreamClass::splice_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->splice_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void OutputStream::write_async (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::write_async (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void OutputStreamClass::write_async_ (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->write_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize OutputStream::write_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::write_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize OutputStreamClass::write_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->write_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize OutputStream::write_fn (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::write_fn (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize OutputStreamClass::write_fn_ (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->write_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void OutputStream::writev_async (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::writev_async (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean OutputStream::writev_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean OutputStream::writev_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
bool OutputStreamClass::writev_finish_ (Gio::AsyncResult result, gsize & bytes_written, GLib::Error * _error)
{
  if (!get_struct_()->writev_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean OutputStream::writev_fn (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::writev_fn (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
