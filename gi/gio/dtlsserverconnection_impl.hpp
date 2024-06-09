// AUTO-GENERATED

#ifndef _GI_GIO_DTLSSERVERCONNECTION_IMPL_HPP_
#define _GI_GIO_DTLSSERVERCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDatagramBased* /*full*/ g_dtls_server_connection_new (GDatagramBased* base_socket /*none*/, GTlsCertificate* certificate /*none,nullable*/, GError ** error);
// ::GDtlsServerConnection* /*full*/ g_dtls_server_connection_new (::GDatagramBased* base_socket /*none*/, ::GTlsCertificate* certificate /*none,nullable*/, GError ** error);
Gio::DtlsServerConnection base::DtlsServerConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::TlsCertificate certificate)
{
  typedef ::GDtlsServerConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_server_connection_new;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GTlsCertificate*) (certificate_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsServerConnection base::DtlsServerConnectionBase::new_ (Gio::DatagramBased base_socket)
{
  typedef ::GDtlsServerConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_server_connection_new;
  auto certificate_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GTlsCertificate*) (certificate_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsServerConnection base::DtlsServerConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::TlsCertificate certificate, GLib::Error * _error) noexcept
{
  typedef ::GDtlsServerConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_server_connection_new;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GTlsCertificate*) (certificate_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DtlsServerConnection base::DtlsServerConnectionBase::new_ (Gio::DatagramBased base_socket, GLib::Error * _error) noexcept
{
  typedef ::GDtlsServerConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dtls_server_connection_new;
  auto certificate_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GTlsCertificate*) (certificate_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsserverconnection_extra_def_impl.hpp>)
#include <gio/dtlsserverconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsserverconnection_extra_impl.hpp>)
#include <gio/dtlsserverconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DtlsServerConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDtlsServerConnectionInterface *methods = (::GDtlsServerConnectionInterface *) interface_struct;
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
