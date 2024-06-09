// AUTO-GENERATED

#ifndef _GI_GIO_TLSSERVERCONNECTION_IMPL_HPP_
#define _GI_GIO_TLSSERVERCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIOStream* /*full*/ g_tls_server_connection_new (GIOStream* base_io_stream /*none*/, GTlsCertificate* certificate /*none,nullable*/, GError ** error);
// ::GTlsServerConnection* /*full*/ g_tls_server_connection_new (::GIOStream* base_io_stream /*none*/, ::GTlsCertificate* certificate /*none,nullable*/, GError ** error);
Gio::TlsServerConnection base::TlsServerConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::TlsCertificate certificate)
{
  typedef ::GTlsServerConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_server_connection_new;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GTlsCertificate*) (certificate_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsServerConnection base::TlsServerConnectionBase::new_ (Gio::IOStream base_io_stream)
{
  typedef ::GTlsServerConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_server_connection_new;
  auto certificate_to_c = nullptr;
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GTlsCertificate*) (certificate_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsServerConnection base::TlsServerConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::TlsCertificate certificate, GLib::Error * _error) noexcept
{
  typedef ::GTlsServerConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_server_connection_new;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GTlsCertificate*) (certificate_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsServerConnection base::TlsServerConnectionBase::new_ (Gio::IOStream base_io_stream, GLib::Error * _error) noexcept
{
  typedef ::GTlsServerConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GTlsCertificate* certificate, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_server_connection_new;
  auto certificate_to_c = nullptr;
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GTlsCertificate*) (certificate_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsserverconnection_extra_def_impl.hpp>)
#include <gio/tlsserverconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsserverconnection_extra_impl.hpp>)
#include <gio/tlsserverconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsServerConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GTlsServerConnectionInterface *methods = (::GTlsServerConnectionInterface *) interface_struct;
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
