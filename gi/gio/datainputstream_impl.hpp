// AUTO-GENERATED

#ifndef _GI_GIO_DATAINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_DATAINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDataInputStream* /*full*/ g_data_input_stream_new (GInputStream* base_stream /*none*/);
// ::GDataInputStream* /*full*/ g_data_input_stream_new (::GInputStream* base_stream /*none*/);
Gio::DataInputStream base::DataInputStreamBase::new_ (Gio::InputStream base_stream) noexcept
{
  typedef ::GDataInputStream* (*call_wrap_t) (::GInputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDataStreamByteOrder g_data_input_stream_get_byte_order (GDataInputStream* stream /*none*/);
// ::GDataStreamByteOrder g_data_input_stream_get_byte_order (::GDataInputStream* stream /*none*/);
Gio::DataStreamByteOrder base::DataInputStreamBase::get_byte_order () noexcept
{
  typedef ::GDataStreamByteOrder (*call_wrap_t) (::GDataInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_get_byte_order;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDataStreamNewlineType g_data_input_stream_get_newline_type (GDataInputStream* stream /*none*/);
// ::GDataStreamNewlineType g_data_input_stream_get_newline_type (::GDataInputStream* stream /*none*/);
Gio::DataStreamNewlineType base::DataInputStreamBase::get_newline_type () noexcept
{
  typedef ::GDataStreamNewlineType (*call_wrap_t) (::GDataInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_get_newline_type;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guchar g_data_input_stream_read_byte (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint8 g_data_input_stream_read_byte (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
guint8 base::DataInputStreamBase::read_byte (Gio::Cancellable cancellable)
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte ()
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte (GLib::Error * _error) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint16 g_data_input_stream_read_int16 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint16 g_data_input_stream_read_int16 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gint16 base::DataInputStreamBase::read_int16 (Gio::Cancellable cancellable)
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 ()
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int16;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 (GLib::Error * _error) noexcept
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int16;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint32 g_data_input_stream_read_int32 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint32 g_data_input_stream_read_int32 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gint32 base::DataInputStreamBase::read_int32 (Gio::Cancellable cancellable)
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 ()
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int32;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 (GLib::Error * _error) noexcept
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int32;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint64 g_data_input_stream_read_int64 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint64 g_data_input_stream_read_int64 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gint64 base::DataInputStreamBase::read_int64 (Gio::Cancellable cancellable)
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 ()
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int64;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 (GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_int64;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char* /*full,nullable*/ g_data_input_stream_read_line (GDataInputStream* stream /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint8* /*full,nullable*/ g_data_input_stream_read_line (::GDataInputStream* stream /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line (gsize * length, Gio::Cancellable cancellable)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line (gsize * length)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line (gsize * length, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line (Gio::Cancellable cancellable)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line ()
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line (GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_data_input_stream_read_line_async (GDataInputStream* stream /*none*/, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_line_async (::GDataInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DataInputStreamBase::read_line_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDataInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DataInputStreamBase::read_line_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDataInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// char* /*full,nullable*/ g_data_input_stream_read_line_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// guint8* /*full,nullable*/ g_data_input_stream_read_line_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, gsize * length)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// char* /*full,nullable*/ g_data_input_stream_read_line_finish_utf8 (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full,nullable*/ g_data_input_stream_read_line_finish_utf8 (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
gi::cstring base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// char* /*full,nullable*/ g_data_input_stream_read_line_utf8 (GDataInputStream* stream /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full,nullable*/ g_data_input_stream_read_line_utf8 (::GDataInputStream* stream /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring base::DataInputStreamBase::read_line_utf8 (gsize * length, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_line_utf8 (gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_line_utf8 (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_line_utf8 (gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_utf8 (Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_utf8 ()
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_utf8 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_line_utf8 (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// guint16 g_data_input_stream_read_uint16 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint16 g_data_input_stream_read_uint16 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
guint16 base::DataInputStreamBase::read_uint16 (Gio::Cancellable cancellable)
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 ()
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint16;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 (GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint16;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// guint32 g_data_input_stream_read_uint32 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint32 g_data_input_stream_read_uint32 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
guint32 base::DataInputStreamBase::read_uint32 (Gio::Cancellable cancellable)
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 ()
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint32;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 (GLib::Error * _error) noexcept
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint32;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// guint64 g_data_input_stream_read_uint64 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint64 g_data_input_stream_read_uint64 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
guint64 base::DataInputStreamBase::read_uint64 (Gio::Cancellable cancellable)
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 ()
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint64;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 (GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_uint64;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char* /*full*/ g_data_input_stream_read_until (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_data_input_stream_read_until (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated

// void g_data_input_stream_read_until_async (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_until_async (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// char* /*full*/ g_data_input_stream_read_until_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_data_input_stream_read_until_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
// IGNORE; deprecated

// char* /*full*/ g_data_input_stream_read_upto (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gssize stop_chars_len, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_data_input_stream_read_upto (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_data_input_stream_read_upto_async (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gssize stop_chars_len, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_upto_async (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DataInputStreamBase::read_upto_async (const gi::cstring_v stop_chars, gssize stop_chars_len, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DataInputStreamBase::read_upto_async (const gi::cstring_v stop_chars, gssize stop_chars_len, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// char* /*full*/ g_data_input_stream_read_upto_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_data_input_stream_read_upto_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
gi::cstring base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_data_input_stream_set_byte_order (GDataInputStream* stream /*none*/, GDataStreamByteOrder order);
// void g_data_input_stream_set_byte_order (::GDataInputStream* stream /*none*/, ::GDataStreamByteOrder order);
void base::DataInputStreamBase::set_byte_order (Gio::DataStreamByteOrder order) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, ::GDataStreamByteOrder order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_set_byte_order;
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (::GDataStreamByteOrder) (order_to_c));
}

// void g_data_input_stream_set_newline_type (GDataInputStream* stream /*none*/, GDataStreamNewlineType type);
// void g_data_input_stream_set_newline_type (::GDataInputStream* stream /*none*/, ::GDataStreamNewlineType type);
void base::DataInputStreamBase::set_newline_type (Gio::DataStreamNewlineType type) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, ::GDataStreamNewlineType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_data_input_stream_set_newline_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (::GDataStreamNewlineType) (type_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_def_impl.hpp>)
#include <gio/datainputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_impl.hpp>)
#include <gio/datainputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DataInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDataInputStreamClass *methods = (::GDataInputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
