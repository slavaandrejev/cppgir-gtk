// AUTO-GENERATED

#ifndef _GI_GIO_INPUTSTREAM_IMPL_HPP_
#define _GI_GIO_INPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_input_stream_clear_pending (GInputStream* stream /*none*/);
// void g_input_stream_clear_pending (::GInputStream* stream /*none*/);
void base::InputStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_clear_pending;
  call_wrap_v ((::GInputStream*) (gobj_()));
}

// gboolean g_input_stream_close (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_input_stream_close (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::InputStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InputStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_input_stream_close_async (GInputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_close_async (::GInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InputStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_input_stream_close_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_input_stream_close_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::InputStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_input_stream_has_pending (GInputStream* stream /*none*/);
// gboolean g_input_stream_has_pending (::GInputStream* stream /*none*/);
bool base::InputStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_input_stream_is_closed (GInputStream* stream /*none*/);
// gboolean g_input_stream_is_closed (::GInputStream* stream /*none*/);
bool base::InputStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_input_stream_read (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_input_stream_read (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_input_stream_read_all (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, gsize* bytes_read, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_input_stream_read_all (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gsize* bytes_read, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_input_stream_read_all_async (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_all_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InputStreamBase::read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_input_stream_read_all_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_read, GError ** error);
// gboolean g_input_stream_read_all_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_read, GError ** error);
bool base::InputStreamBase::read_all_finish (Gio::AsyncResult result, gsize & bytes_read)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all_finish (Gio::AsyncResult result, gsize & bytes_read, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> base::InputStreamBase::read_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> base::InputStreamBase::read_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_input_stream_read_async (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InputStreamBase::read_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* /*full*/ g_input_stream_read_bytes (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_input_stream_read_bytes (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_input_stream_read_bytes_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_bytes_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InputStreamBase::read_bytes_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_bytes_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* /*full*/ g_input_stream_read_bytes_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GBytes* /*full*/ g_input_stream_read_bytes_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GLib::Bytes base::InputStreamBase::read_bytes_finish (Gio::AsyncResult result)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::InputStreamBase::read_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gssize g_input_stream_read_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_input_stream_read_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::InputStreamBase::read_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_read_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_input_stream_set_pending (GInputStream* stream /*none*/, GError ** error);
// gboolean g_input_stream_set_pending (::GInputStream* stream /*none*/, GError ** error);
bool base::InputStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_input_stream_skip (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_input_stream_skip (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::InputStreamBase::skip (gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_input_stream_skip_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_skip_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InputStreamBase::skip_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::skip_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_input_stream_skip_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_input_stream_skip_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize base::InputStreamBase::skip_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_input_stream_skip_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra_def_impl.hpp>)
#include <gio/inputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra_impl.hpp>)
#include <gio/inputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GInputStreamClass *methods = (::GInputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close_async) methods->close_async = (decltype (methods->close_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::close_async_>;
  if (init_data.close_finish) methods->close_finish = (decltype (methods->close_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_finish_>;
  if (init_data.close_fn) methods->close_fn = (decltype (methods->close_fn)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_fn_>;
  if (init_data.read_async) methods->read_async = (decltype (methods->read_async)) detail::method_wrapper<self, void (*) (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::read_async_>;
  if (init_data.read_finish) methods->read_finish = (decltype (methods->read_finish)) detail::method_wrapper<self, gssize (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::read_finish_>;
  if (init_data.read_fn) methods->read_fn = (decltype (methods->read_fn)) detail::method_wrapper<self, gssize (*) (void* buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::read_fn_>;
  if (init_data.skip) methods->skip = (decltype (methods->skip)) detail::method_wrapper<self, gssize (*) (gsize count, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::skip_>;
  if (init_data.skip_async) methods->skip_async = (decltype (methods->skip_async)) detail::method_wrapper<self, void (*) (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::skip_async_>;
  if (init_data.skip_finish) methods->skip_finish = (decltype (methods->skip_finish)) detail::method_wrapper<self, gssize (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::skip_finish_>;
}

// void InputStream::close_async (GInputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::close_async (::GInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void InputStreamClass::close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->close_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean InputStream::close_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean InputStream::close_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool InputStreamClass::close_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->close_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean InputStream::close_fn (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean InputStream::close_fn (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool InputStreamClass::close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->close_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void InputStream::read_async (GInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::read_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void InputStreamClass::read_async_ (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->read_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize InputStream::read_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::read_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize InputStreamClass::read_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->read_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize InputStream::read_fn (GInputStream* stream /*none*/, void* buffer, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::read_fn (::GInputStream* stream /*none*/, void* buffer, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize InputStreamClass::read_fn_ (void* buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->read_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GInputStream* stream, void* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (void*) (buffer_to_c), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize InputStream::skip (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::skip (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize InputStreamClass::skip_ (gsize count, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->skip) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->skip;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void InputStream::skip_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::skip_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void InputStreamClass::skip_async_ (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->skip_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->skip_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize InputStream::skip_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::skip_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gssize InputStreamClass::skip_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->skip_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->skip_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
