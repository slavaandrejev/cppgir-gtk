// AUTO-GENERATED

#ifndef _GI_GIO_TLSCLIENTCONNECTION_IMPL_HPP_
#define _GI_GIO_TLSCLIENTCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIOStream* /*full*/ g_tls_client_connection_new (GIOStream* base_io_stream /*none*/, GSocketConnectable* server_identity /*none,nullable*/, GError ** error);
// ::GTlsClientConnection* /*full*/ g_tls_client_connection_new (::GIOStream* base_io_stream /*none*/, ::GSocketConnectable* server_identity /*none,nullable*/, GError ** error);
Gio::TlsClientConnection base::TlsClientConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::SocketConnectable server_identity)
{
  typedef ::GTlsClientConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsClientConnection base::TlsClientConnectionBase::new_ (Gio::IOStream base_io_stream)
{
  typedef ::GTlsClientConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsClientConnection base::TlsClientConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::SocketConnectable server_identity, GLib::Error * _error) noexcept
{
  typedef ::GTlsClientConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsClientConnection base::TlsClientConnectionBase::new_ (Gio::IOStream base_io_stream, GLib::Error * _error) noexcept
{
  typedef ::GTlsClientConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_tls_client_connection_copy_session_state (GTlsClientConnection* conn /*none*/, GTlsClientConnection* source /*none*/);
// void g_tls_client_connection_copy_session_state (::GTlsClientConnection* conn /*none*/, ::GTlsClientConnection* source /*none*/);
void base::TlsClientConnectionBase::copy_session_state (Gio::TlsClientConnection source) noexcept
{
  typedef void (*call_wrap_t) (::GTlsClientConnection* conn, ::GTlsClientConnection* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_copy_session_state;
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GTlsClientConnection*) (gobj_()), (::GTlsClientConnection*) (source_to_c));
}

// GList* /*full*/ g_tls_client_connection_get_accepted_cas (GTlsClientConnection* conn /*none*/);
// ::GList* /*full*/ g_tls_client_connection_get_accepted_cas (::GTlsClientConnection* conn /*none*/);
// SKIP; inconsistent list element info

// GSocketConnectable* /*none,nullable*/ g_tls_client_connection_get_server_identity (GTlsClientConnection* conn /*none*/);
// ::GSocketConnectable* /*none,nullable*/ g_tls_client_connection_get_server_identity (::GTlsClientConnection* conn /*none*/);
Gio::SocketConnectable base::TlsClientConnectionBase::get_server_identity () noexcept
{
  typedef ::GSocketConnectable* (*call_wrap_t) (::GTlsClientConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_get_server_identity;
  auto _temp_ret = call_wrap_v ((::GTlsClientConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_tls_client_connection_get_use_ssl3 (GTlsClientConnection* conn /*none*/);
// gboolean g_tls_client_connection_get_use_ssl3 (::GTlsClientConnection* conn /*none*/);
// IGNORE; deprecated

// GTlsCertificateFlags g_tls_client_connection_get_validation_flags (GTlsClientConnection* conn /*none*/);
// ::GTlsCertificateFlags g_tls_client_connection_get_validation_flags (::GTlsClientConnection* conn /*none*/);
// IGNORE; deprecated

// void g_tls_client_connection_set_server_identity (GTlsClientConnection* conn /*none*/, GSocketConnectable* identity /*none*/);
// void g_tls_client_connection_set_server_identity (::GTlsClientConnection* conn /*none*/, ::GSocketConnectable* identity /*none*/);
void base::TlsClientConnectionBase::set_server_identity (Gio::SocketConnectable identity) noexcept
{
  typedef void (*call_wrap_t) (::GTlsClientConnection* conn, ::GSocketConnectable* identity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_client_connection_set_server_identity;
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  call_wrap_v ((::GTlsClientConnection*) (gobj_()), (::GSocketConnectable*) (identity_to_c));
}

// void g_tls_client_connection_set_use_ssl3 (GTlsClientConnection* conn /*none*/, gboolean use_ssl3);
// void g_tls_client_connection_set_use_ssl3 (::GTlsClientConnection* conn /*none*/, gboolean use_ssl3);
// IGNORE; deprecated

// void g_tls_client_connection_set_validation_flags (GTlsClientConnection* conn /*none*/, GTlsCertificateFlags flags);
// void g_tls_client_connection_set_validation_flags (::GTlsClientConnection* conn /*none*/, ::GTlsCertificateFlags flags);
// IGNORE; deprecated


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsclientconnection_extra_def_impl.hpp>)
#include <gio/tlsclientconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsclientconnection_extra_impl.hpp>)
#include <gio/tlsclientconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsClientConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GTlsClientConnectionInterface *methods = (::GTlsClientConnectionInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.copy_session_state) methods->copy_session_state = (decltype (methods->copy_session_state)) detail::method_wrapper<self, void (*) (Gio::TlsClientConnection source), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::copy_session_state_>;
}

// void TlsClientConnection::copy_session_state (GTlsClientConnection* conn /*none*/, GTlsClientConnection* source /*none*/);
// void TlsClientConnection::copy_session_state (::GTlsClientConnection* conn /*none*/, ::GTlsClientConnection* source /*none*/);
void TlsClientConnectionInterfaceClassImpl::copy_session_state_ (Gio::TlsClientConnection source) noexcept
{
  if (!get_struct_()->copy_session_state) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsClientConnection* conn, ::GTlsClientConnection* source);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_session_state;
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GTlsClientConnection*) (gobj_()), (::GTlsClientConnection*) (source_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
