// AUTO-GENERATED

#ifndef _GI_GIO_PROXYADDRESS_IMPL_HPP_
#define _GI_GIO_PROXYADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* /*full*/ g_proxy_address_new (GInetAddress* inetaddr /*none*/, guint16 port, const gchar* protocol /*none*/, const gchar* dest_hostname /*none*/, guint16 dest_port, const gchar* username /*none,nullable*/, const gchar* password /*none,nullable*/);
// ::GProxyAddress* /*full*/ g_proxy_address_new (::GInetAddress* inetaddr /*none*/, guint16 port, const char* protocol /*none*/, const char* dest_hostname /*none*/, guint16 dest_port, const char* username /*none,nullable*/, const char* password /*none,nullable*/);
Gio::ProxyAddress base::ProxyAddressBase::new_ (Gio::InetAddress inetaddr, guint16 port, const gi::cstring_v protocol, const gi::cstring_v dest_hostname, guint16 dest_port, const gi::cstring_v username, const gi::cstring_v password) noexcept
{
  typedef ::GProxyAddress* (*call_wrap_t) (::GInetAddress* inetaddr, guint16 port, const char* protocol, const char* dest_hostname, guint16 dest_port, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_new;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto username_to_c = gi::unwrap (username, gi::transfer_none);
  auto dest_port_to_c = dest_port;
  auto dest_hostname_to_c = gi::unwrap (dest_hostname, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto port_to_c = port;
  auto inetaddr_to_c = gi::unwrap (inetaddr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (inetaddr_to_c), (guint16) (port_to_c), (const char*) (protocol_to_c), (const char*) (dest_hostname_to_c), (guint16) (dest_port_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::ProxyAddress base::ProxyAddressBase::new_ (Gio::InetAddress inetaddr, guint16 port, const gi::cstring_v protocol, const gi::cstring_v dest_hostname, guint16 dest_port) noexcept
{
  typedef ::GProxyAddress* (*call_wrap_t) (::GInetAddress* inetaddr, guint16 port, const char* protocol, const char* dest_hostname, guint16 dest_port, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_new;
  auto password_to_c = nullptr;
  auto username_to_c = nullptr;
  auto dest_port_to_c = dest_port;
  auto dest_hostname_to_c = gi::unwrap (dest_hostname, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto port_to_c = port;
  auto inetaddr_to_c = gi::unwrap (inetaddr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (inetaddr_to_c), (guint16) (port_to_c), (const char*) (protocol_to_c), (const char*) (dest_hostname_to_c), (guint16) (dest_port_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_proxy_address_get_destination_hostname (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_destination_hostname (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_destination_hostname () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_destination_hostname;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 g_proxy_address_get_destination_port (GProxyAddress* proxy /*none*/);
// guint16 g_proxy_address_get_destination_port (::GProxyAddress* proxy /*none*/);
guint16 base::ProxyAddressBase::get_destination_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_destination_port;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_proxy_address_get_destination_protocol (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_destination_protocol (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_destination_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_destination_protocol;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_proxy_address_get_password (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_password (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_password;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_proxy_address_get_protocol (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_protocol (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_protocol;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_proxy_address_get_uri (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_uri (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_uri;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_proxy_address_get_username (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_username (::GProxyAddress* proxy /*none*/);
gi::cstring_v base::ProxyAddressBase::get_username () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_address_get_username;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra_def_impl.hpp>)
#include <gio/proxyaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra_impl.hpp>)
#include <gio/proxyaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyAddressClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GProxyAddressClass *methods = (::GProxyAddressClass *) class_struct;
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
