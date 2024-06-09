// AUTO-GENERATED

#ifndef _GI_GIO_UNIXCONNECTION_IMPL_HPP_
#define _GI_GIO_UNIXCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GCredentials* /*full*/ g_unix_connection_receive_credentials (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GCredentials* /*full*/ g_unix_connection_receive_credentials (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::Credentials base::UnixConnectionBase::receive_credentials (Gio::Cancellable cancellable)
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Credentials base::UnixConnectionBase::receive_credentials ()
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Credentials base::UnixConnectionBase::receive_credentials (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Credentials base::UnixConnectionBase::receive_credentials (GLib::Error * _error) noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_unix_connection_receive_credentials_async (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_unix_connection_receive_credentials_async (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::UnixConnectionBase::receive_credentials_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UnixConnectionBase::receive_credentials_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GCredentials* /*full*/ g_unix_connection_receive_credentials_finish (GUnixConnection* connection /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GCredentials* /*full*/ g_unix_connection_receive_credentials_finish (::GUnixConnection* connection /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::Credentials base::UnixConnectionBase::receive_credentials_finish (Gio::AsyncResult result)
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Credentials base::UnixConnectionBase::receive_credentials_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_credentials_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_unix_connection_receive_fd (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_unix_connection_receive_fd (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gint base::UnixConnectionBase::receive_fd (Gio::Cancellable cancellable)
{
  typedef gint (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_fd;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::UnixConnectionBase::receive_fd ()
{
  typedef gint (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_fd;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::UnixConnectionBase::receive_fd (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_fd;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint base::UnixConnectionBase::receive_fd (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_receive_fd;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_unix_connection_send_credentials (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_unix_connection_send_credentials (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::UnixConnectionBase::send_credentials (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_credentials ()
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_credentials (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_credentials (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_unix_connection_send_credentials_async (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_unix_connection_send_credentials_async (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::UnixConnectionBase::send_credentials_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UnixConnectionBase::send_credentials_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GUnixConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GUnixConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_unix_connection_send_credentials_finish (GUnixConnection* connection /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_unix_connection_send_credentials_finish (::GUnixConnection* connection /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::UnixConnectionBase::send_credentials_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_credentials_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_credentials_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_unix_connection_send_fd (GUnixConnection* connection /*none*/, gint fd, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_unix_connection_send_fd (::GUnixConnection* connection /*none*/, gint fd, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::UnixConnectionBase::send_fd (gint fd, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, gint fd, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_fd;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (gint) (fd_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_fd (gint fd)
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, gint fd, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_fd;
  auto cancellable_to_c = nullptr;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (gint) (fd_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_fd (gint fd, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, gint fd, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_fd;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (gint) (fd_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::UnixConnectionBase::send_fd (gint fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixConnection* connection, gint fd, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_connection_send_fd;
  auto cancellable_to_c = nullptr;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixConnection*) (gobj_()), (gint) (fd_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixconnection_extra_def_impl.hpp>)
#include <gio/unixconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixconnection_extra_impl.hpp>)
#include <gio/unixconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixConnectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GUnixConnectionClass *methods = (::GUnixConnectionClass *) class_struct;
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
