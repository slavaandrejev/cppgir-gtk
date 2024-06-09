// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCLIENTCONNECTION_IMPL_HPP_
#define _GI_GIO_DTLSCLIENTCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDatagramBased* /*full*/ g_dtls_client_connection_new (GDatagramBased* base_socket /*none*/, GSocketConnectable* server_identity /*none,nullable*/, GError ** error);
// ::GDtlsClientConnection* /*full*/ g_dtls_client_connection_new (::GDatagramBased* base_socket /*none*/, ::GSocketConnectable* server_identity /*none,nullable*/, GError ** error);
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity)
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket)
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity, GLib::Error * _error) noexcept
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, GLib::Error * _error) noexcept
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_dtls_client_connection_get_accepted_cas (GDtlsClientConnection* conn /*none*/);
// ::GList* /*full*/ g_dtls_client_connection_get_accepted_cas (::GDtlsClientConnection* conn /*none*/);
// SKIP; inconsistent list element info

// GSocketConnectable* /*none*/ g_dtls_client_connection_get_server_identity (GDtlsClientConnection* conn /*none*/);
// ::GSocketConnectable* /*none*/ g_dtls_client_connection_get_server_identity (::GDtlsClientConnection* conn /*none*/);
Gio::SocketConnectable base::DtlsClientConnectionBase::get_server_identity () noexcept
{
  typedef ::GSocketConnectable* (*call_wrap_t) (::GDtlsClientConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_get_server_identity;
  auto _temp_ret = call_wrap_v ((::GDtlsClientConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (GDtlsClientConnection* conn /*none*/);
// ::GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (::GDtlsClientConnection* conn /*none*/);
// IGNORE; deprecated

// void g_dtls_client_connection_set_server_identity (GDtlsClientConnection* conn /*none*/, GSocketConnectable* identity /*none*/);
// void g_dtls_client_connection_set_server_identity (::GDtlsClientConnection* conn /*none*/, ::GSocketConnectable* identity /*none*/);
void base::DtlsClientConnectionBase::set_server_identity (Gio::SocketConnectable identity) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsClientConnection* conn, ::GSocketConnectable* identity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_client_connection_set_server_identity;
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  call_wrap_v ((::GDtlsClientConnection*) (gobj_()), (::GSocketConnectable*) (identity_to_c));
}

// void g_dtls_client_connection_set_validation_flags (GDtlsClientConnection* conn /*none*/, GTlsCertificateFlags flags);
// void g_dtls_client_connection_set_validation_flags (::GDtlsClientConnection* conn /*none*/, ::GTlsCertificateFlags flags);
// IGNORE; deprecated


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra_def_impl.hpp>)
#include <gio/dtlsclientconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra_impl.hpp>)
#include <gio/dtlsclientconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DtlsClientConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDtlsClientConnectionInterface *methods = (::GDtlsClientConnectionInterface *) interface_struct;
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
