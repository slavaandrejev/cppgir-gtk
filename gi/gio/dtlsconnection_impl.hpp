// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCONNECTION_IMPL_HPP_
#define _GI_GIO_DTLSCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_dtls_connection_close (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_close (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::DtlsConnectionBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_dtls_connection_close_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_close_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DtlsConnectionBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_close_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_close_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DtlsConnectionBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_dtls_connection_emit_accept_certificate (GDtlsConnection* conn /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean g_dtls_connection_emit_accept_certificate (::GDtlsConnection* conn /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
bool base::DtlsConnectionBase::emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_emit_accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

// GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_certificate (GDtlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_certificate (::GDtlsConnection* conn /*none*/);
Gio::TlsCertificate base::DtlsConnectionBase::get_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_certificate;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_dtls_connection_get_channel_binding_data (GDtlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none,out,opt*/, GError ** error);
// gboolean g_dtls_connection_get_channel_binding_data (::GDtlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray** data /*none,out,opt*/, GError ** error);
// SKIP; inconsistent data out pointer depth (1 vs 2)

// gchar* /*full,nullable*/ g_dtls_connection_get_ciphersuite_name (GDtlsConnection* conn /*none*/);
// char* /*full,nullable*/ g_dtls_connection_get_ciphersuite_name (::GDtlsConnection* conn /*none*/);
gi::cstring base::DtlsConnectionBase::get_ciphersuite_name () noexcept
{
  typedef char* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_ciphersuite_name;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsDatabase* /*none,nullable*/ g_dtls_connection_get_database (GDtlsConnection* conn /*none*/);
// ::GTlsDatabase* /*none,nullable*/ g_dtls_connection_get_database (::GDtlsConnection* conn /*none*/);
Gio::TlsDatabase base::DtlsConnectionBase::get_database () noexcept
{
  typedef ::GTlsDatabase* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_database;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTlsInteraction* /*none,nullable*/ g_dtls_connection_get_interaction (GDtlsConnection* conn /*none*/);
// ::GTlsInteraction* /*none,nullable*/ g_dtls_connection_get_interaction (::GDtlsConnection* conn /*none*/);
Gio::TlsInteraction base::DtlsConnectionBase::get_interaction () noexcept
{
  typedef ::GTlsInteraction* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_interaction;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dtls_connection_get_negotiated_protocol (GDtlsConnection* conn /*none*/);
// const char* /*none,nullable*/ g_dtls_connection_get_negotiated_protocol (::GDtlsConnection* conn /*none*/);
gi::cstring_v base::DtlsConnectionBase::get_negotiated_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_negotiated_protocol;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_peer_certificate (GDtlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_peer_certificate (::GDtlsConnection* conn /*none*/);
Gio::TlsCertificate base::DtlsConnectionBase::get_peer_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_peer_certificate;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (GDtlsConnection* conn /*none*/);
// ::GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (::GDtlsConnection* conn /*none*/);
Gio::TlsCertificateFlags base::DtlsConnectionBase::get_peer_certificate_errors () noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_peer_certificate_errors;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsProtocolVersion g_dtls_connection_get_protocol_version (GDtlsConnection* conn /*none*/);
// ::GTlsProtocolVersion g_dtls_connection_get_protocol_version (::GDtlsConnection* conn /*none*/);
Gio::TlsProtocolVersion base::DtlsConnectionBase::get_protocol_version () noexcept
{
  typedef ::GTlsProtocolVersion (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_protocol_version;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsRehandshakeMode /*none*/ g_dtls_connection_get_rehandshake_mode (GDtlsConnection* conn /*none*/);
//  /*none*/ g_dtls_connection_get_rehandshake_mode (::GDtlsConnection* conn /*none*/);
// IGNORE; deprecated

// gboolean g_dtls_connection_get_require_close_notify (GDtlsConnection* conn /*none*/);
// gboolean g_dtls_connection_get_require_close_notify (::GDtlsConnection* conn /*none*/);
bool base::DtlsConnectionBase::get_require_close_notify () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_get_require_close_notify;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return _temp_ret;
}

// gboolean g_dtls_connection_handshake (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_handshake (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::DtlsConnectionBase::handshake (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake ()
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_dtls_connection_handshake_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_handshake_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DtlsConnectionBase::handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_handshake_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_handshake_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DtlsConnectionBase::handshake_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_dtls_connection_set_advertised_protocols (GDtlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void g_dtls_connection_set_advertised_protocols (::GDtlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
void base::DtlsConnectionBase::set_advertised_protocols (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, const char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_advertised_protocols;
  auto protocols_w = unwrap (std::move(protocols), gi::transfer_none);
  auto protocols_to_c = protocols_w;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (const char**) (protocols_to_c));
}

// void g_dtls_connection_set_certificate (GDtlsConnection* conn /*none*/, GTlsCertificate* certificate /*none*/);
// void g_dtls_connection_set_certificate (::GDtlsConnection* conn /*none*/, ::GTlsCertificate* certificate /*none*/);
void base::DtlsConnectionBase::set_certificate (Gio::TlsCertificate certificate) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_certificate;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
}

// void g_dtls_connection_set_database (GDtlsConnection* conn /*none*/, GTlsDatabase* database /*none,nullable*/);
// void g_dtls_connection_set_database (::GDtlsConnection* conn /*none*/, ::GTlsDatabase* database /*none,nullable*/);
void base::DtlsConnectionBase::set_database (Gio::TlsDatabase database) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_database;
  auto database_to_c = gi::unwrap (database, gi::transfer_none);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}
void base::DtlsConnectionBase::set_database () noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_database;
  auto database_to_c = nullptr;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}

// void g_dtls_connection_set_interaction (GDtlsConnection* conn /*none*/, GTlsInteraction* interaction /*none,nullable*/);
// void g_dtls_connection_set_interaction (::GDtlsConnection* conn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/);
void base::DtlsConnectionBase::set_interaction (Gio::TlsInteraction interaction) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_interaction;
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}
void base::DtlsConnectionBase::set_interaction () noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_interaction;
  auto interaction_to_c = nullptr;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}

// void g_dtls_connection_set_rehandshake_mode (GDtlsConnection* conn /*none*/, GTlsRehandshakeMode mode /*none*/);
// void g_dtls_connection_set_rehandshake_mode (::GDtlsConnection* conn /*none*/,  mode /*none*/);
// IGNORE; deprecated

// void g_dtls_connection_set_require_close_notify (GDtlsConnection* conn /*none*/, gboolean require_close_notify);
// void g_dtls_connection_set_require_close_notify (::GDtlsConnection* conn /*none*/, gboolean require_close_notify);
void base::DtlsConnectionBase::set_require_close_notify (gboolean require_close_notify) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean require_close_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_set_require_close_notify;
  auto require_close_notify_to_c = require_close_notify;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (require_close_notify_to_c));
}

// gboolean g_dtls_connection_shutdown (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_shutdown (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown;
  auto cancellable_to_c = nullptr;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown;
  auto cancellable_to_c = nullptr;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_dtls_connection_shutdown_async (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_shutdown_async (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DtlsConnectionBase::shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_shutdown_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_shutdown_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DtlsConnectionBase::shutdown_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_connection_shutdown_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_def_impl.hpp>)
#include <gio/dtlsconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_impl.hpp>)
#include <gio/dtlsconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DtlsConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDtlsConnectionInterface *methods = (::GDtlsConnectionInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.accept_certificate) methods->accept_certificate = (decltype (methods->accept_certificate)) detail::method_wrapper<self, bool (*) (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::accept_certificate_>;
  if (init_data.get_binding_data) methods->get_binding_data = (decltype (methods->get_binding_data)) detail::method_wrapper<self, bool (*) (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_binding_data_>;
  if (init_data.get_negotiated_protocol) methods->get_negotiated_protocol = (decltype (methods->get_negotiated_protocol)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_negotiated_protocol_>;
  if (init_data.handshake) methods->handshake = (decltype (methods->handshake)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::handshake_>;
  if (init_data.handshake_async) methods->handshake_async = (decltype (methods->handshake_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::handshake_async_>;
  if (init_data.handshake_finish) methods->handshake_finish = (decltype (methods->handshake_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::handshake_finish_>;
  if (init_data.set_advertised_protocols) methods->set_advertised_protocols = (decltype (methods->set_advertised_protocols)) detail::method_wrapper<self, void (*) (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> protocols), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_advertised_protocols_>;
  if (init_data.shutdown) methods->shutdown = (decltype (methods->shutdown)) detail::method_wrapper<self, bool (*) (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::shutdown_>;
  if (init_data.shutdown_async) methods->shutdown_async = (decltype (methods->shutdown_async)) detail::method_wrapper<self, void (*) (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::shutdown_async_>;
  if (init_data.shutdown_finish) methods->shutdown_finish = (decltype (methods->shutdown_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::shutdown_finish_>;
}

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
bool DtlsConnectionInterfaceClassImpl::accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  if (!get_struct_()->accept_certificate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

// gboolean DtlsConnection::get_binding_data (GDtlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none*/, GError ** error);
// gboolean DtlsConnection::get_binding_data (::GDtlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray* data /*none*/, GError ** error);
bool DtlsConnectionInterfaceClassImpl::get_binding_data_ (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error)
{
  if (!get_struct_()->get_binding_data) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_binding_data;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  auto type_to_c = gi::unwrap (type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsChannelBindingType) (type_to_c), (::GByteArray*) (data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// const gchar* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (GDtlsConnection* conn /*none*/);
// const char* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (::GDtlsConnection* conn /*none*/);
gi::cstring_v DtlsConnectionInterfaceClassImpl::get_negotiated_protocol_ () noexcept
{
  if (!get_struct_()->get_negotiated_protocol) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_negotiated_protocol;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean DtlsConnection::handshake (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::handshake (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool DtlsConnectionInterfaceClassImpl::handshake_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->handshake) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void DtlsConnection::handshake_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::handshake_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DtlsConnectionInterfaceClassImpl::handshake_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->handshake_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean DtlsConnection::handshake_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::handshake_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DtlsConnectionInterfaceClassImpl::handshake_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->handshake_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void DtlsConnection::set_advertised_protocols (GDtlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void DtlsConnection::set_advertised_protocols (::GDtlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
void DtlsConnectionInterfaceClassImpl::set_advertised_protocols_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept
{
  if (!get_struct_()->set_advertised_protocols) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, const char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_advertised_protocols;
  auto protocols_w = unwrap (std::move(protocols), gi::transfer_none);
  auto protocols_to_c = protocols_w;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (const char**) (protocols_to_c));
}

// gboolean DtlsConnection::shutdown (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::shutdown (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool DtlsConnectionInterfaceClassImpl::shutdown_ (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->shutdown) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shutdown;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void DtlsConnection::shutdown_async (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::shutdown_async (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DtlsConnectionInterfaceClassImpl::shutdown_async_ (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->shutdown_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shutdown_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean DtlsConnection::shutdown_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::shutdown_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DtlsConnectionInterfaceClassImpl::shutdown_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->shutdown_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shutdown_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
