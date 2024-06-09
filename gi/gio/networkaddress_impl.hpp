// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKADDRESS_IMPL_HPP_
#define _GI_GIO_NETWORKADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::SocketConnectable NetworkAddressBase::interface_ (gi::interface_tag<Gio::SocketConnectable>)
{ return gi::wrap ((Gio::SocketConnectable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NetworkAddressBase::operator Gio::SocketConnectable ()
{ return interface_ (gi::interface_tag<Gio::SocketConnectable>()); }

// GSocketConnectable* /*full*/ g_network_address_new (const gchar* hostname /*none*/, guint16 port);
// ::GNetworkAddress* /*full*/ g_network_address_new (const char* hostname /*none*/, guint16 port);
Gio::NetworkAddress base::NetworkAddressBase::new_ (const gi::cstring_v hostname, guint16 port) noexcept
{
  typedef ::GNetworkAddress* (*call_wrap_t) (const char* hostname, guint16 port);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_address_new;
  auto port_to_c = port;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c), (guint16) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketConnectable* /*full*/ g_network_address_new_loopback (guint16 port);
// ::GNetworkAddress* /*full*/ g_network_address_new_loopback (guint16 port);
Gio::NetworkAddress base::NetworkAddressBase::new_loopback (guint16 port) noexcept
{
  typedef ::GNetworkAddress* (*call_wrap_t) (guint16 port);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_address_new_loopback;
  auto port_to_c = port;
  auto _temp_ret = call_wrap_v ((guint16) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketConnectable* /*full*/ g_network_address_parse (const gchar* host_and_port /*none*/, guint16 default_port, GError ** error);
// ::GNetworkAddress* /*full*/ g_network_address_parse (const char* host_and_port /*none*/, guint16 default_port, GError ** error);
Gio::NetworkAddress base::NetworkAddressBase::parse (const gi::cstring_v host_and_port, guint16 default_port)
{
  typedef ::GNetworkAddress* (*call_wrap_t) (const char* host_and_port, guint16 default_port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_parse;
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (host_and_port_to_c), (guint16) (default_port_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::NetworkAddress base::NetworkAddressBase::parse (const gi::cstring_v host_and_port, guint16 default_port, GLib::Error * _error) noexcept
{
  typedef ::GNetworkAddress* (*call_wrap_t) (const char* host_and_port, guint16 default_port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_parse;
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (host_and_port_to_c), (guint16) (default_port_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketConnectable* /*full*/ g_network_address_parse_uri (const gchar* uri /*none*/, guint16 default_port, GError ** error);
// ::GNetworkAddress* /*full*/ g_network_address_parse_uri (const char* uri /*none*/, guint16 default_port, GError ** error);
Gio::NetworkAddress base::NetworkAddressBase::parse_uri (const gi::cstring_v uri, guint16 default_port)
{
  typedef ::GNetworkAddress* (*call_wrap_t) (const char* uri, guint16 default_port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_parse_uri;
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (guint16) (default_port_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::NetworkAddress base::NetworkAddressBase::parse_uri (const gi::cstring_v uri, guint16 default_port, GLib::Error * _error) noexcept
{
  typedef ::GNetworkAddress* (*call_wrap_t) (const char* uri, guint16 default_port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_parse_uri;
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (guint16) (default_port_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_network_address_get_hostname (GNetworkAddress* addr /*none*/);
// const char* /*none*/ g_network_address_get_hostname (::GNetworkAddress* addr /*none*/);
gi::cstring_v base::NetworkAddressBase::get_hostname () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_get_hostname;
  auto _temp_ret = call_wrap_v ((::GNetworkAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 g_network_address_get_port (GNetworkAddress* addr /*none*/);
// guint16 g_network_address_get_port (::GNetworkAddress* addr /*none*/);
guint16 base::NetworkAddressBase::get_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::GNetworkAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_get_port;
  auto _temp_ret = call_wrap_v ((::GNetworkAddress*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_network_address_get_scheme (GNetworkAddress* addr /*none*/);
// const char* /*none,nullable*/ g_network_address_get_scheme (::GNetworkAddress* addr /*none*/);
gi::cstring_v base::NetworkAddressBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_address_get_scheme;
  auto _temp_ret = call_wrap_v ((::GNetworkAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkaddress_extra_def_impl.hpp>)
#include <gio/networkaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkaddress_extra_impl.hpp>)
#include <gio/networkaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void NetworkAddressClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GNetworkAddressClass *methods = (::GNetworkAddressClass *) class_struct;
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
