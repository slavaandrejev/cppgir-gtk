// AUTO-GENERATED

#ifndef _GI_GIO_TLSINTERACTION_IMPL_HPP_
#define _GI_GIO_TLSINTERACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsInteractionResult g_tls_interaction_ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void g_tls_interaction_ask_password_async (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_interaction_ask_password_async (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsInteractionBase::ask_password_async (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsInteractionBase::ask_password_async (Gio::TlsPassword password, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult g_tls_interaction_ask_password_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password_finish (Gio::AsyncResult result)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_ask_password_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_invoke_ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_invoke_request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void g_tls_interaction_request_certificate_async (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_interaction_request_certificate_async (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsInteractionBase::request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsInteractionBase::request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult g_tls_interaction_request_certificate_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate_finish (Gio::AsyncResult result)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_interaction_request_certificate_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra_def_impl.hpp>)
#include <gio/tlsinteraction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra_impl.hpp>)
#include <gio/tlsinteraction_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsInteractionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GTlsInteractionClass *methods = (::GTlsInteractionClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.ask_password) methods->ask_password = (decltype (methods->ask_password)) detail::method_wrapper<self, Gio::TlsInteractionResult (*) (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::ask_password_>;
  if (init_data.ask_password_async) methods->ask_password_async = (decltype (methods->ask_password_async)) detail::method_wrapper<self, void (*) (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::ask_password_async_>;
  if (init_data.ask_password_finish) methods->ask_password_finish = (decltype (methods->ask_password_finish)) detail::method_wrapper<self, Gio::TlsInteractionResult (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::ask_password_finish_>;
  if (init_data.request_certificate) methods->request_certificate = (decltype (methods->request_certificate)) detail::method_wrapper<self, Gio::TlsInteractionResult (*) (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::request_certificate_>;
  if (init_data.request_certificate_async) methods->request_certificate_async = (decltype (methods->request_certificate_async)) detail::method_wrapper<self, void (*) (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::request_certificate_async_>;
  if (init_data.request_certificate_finish) methods->request_certificate_finish = (decltype (methods->request_certificate_finish)) detail::method_wrapper<self, Gio::TlsInteractionResult (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::request_certificate_finish_>;
}

// GTlsInteractionResult TlsInteraction::ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult TlsInteractionClass::ask_password_ (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->ask_password) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void TlsInteraction::ask_password_async (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::ask_password_async (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsInteractionClass::ask_password_async_ (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->ask_password_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ask_password_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult TlsInteraction::ask_password_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsInteractionResult TlsInteractionClass::ask_password_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->ask_password_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ask_password_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult TlsInteraction::request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsInteractionResult TlsInteractionClass::request_certificate_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->request_certificate) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void TlsInteraction::request_certificate_async (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::request_certificate_async (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsInteractionClass::request_certificate_async_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->request_certificate_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_certificate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult TlsInteraction::request_certificate_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsInteractionResult TlsInteractionClass::request_certificate_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->request_certificate_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_certificate_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
