// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKSERVICE_IMPL_HPP_
#define _GI_GIO_NETWORKSERVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::SocketConnectable NetworkServiceBase::interface_ (gi::interface_tag<Gio::SocketConnectable>)
{ return gi::wrap ((Gio::SocketConnectable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NetworkServiceBase::operator Gio::SocketConnectable ()
{ return interface_ (gi::interface_tag<Gio::SocketConnectable>()); }

// GSocketConnectable* /*full*/ g_network_service_new (const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/);
// ::GNetworkService* /*full*/ g_network_service_new (const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/);
Gio::NetworkService base::NetworkServiceBase::new_ (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain) noexcept
{
  typedef ::GNetworkService* (*call_wrap_t) (const char* service, const char* protocol, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_new;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_network_service_get_domain (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_domain (::GNetworkService* srv /*none*/);
gi::cstring_v base::NetworkServiceBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_service_get_domain;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_network_service_get_protocol (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_protocol (::GNetworkService* srv /*none*/);
gi::cstring_v base::NetworkServiceBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_service_get_protocol;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_network_service_get_scheme (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_scheme (::GNetworkService* srv /*none*/);
gi::cstring_v base::NetworkServiceBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_service_get_scheme;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_network_service_get_service (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_service (::GNetworkService* srv /*none*/);
gi::cstring_v base::NetworkServiceBase::get_service () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_service_get_service;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_network_service_set_scheme (GNetworkService* srv /*none*/, const gchar* scheme /*none*/);
// void g_network_service_set_scheme (::GNetworkService* srv /*none*/, const char* scheme /*none*/);
void base::NetworkServiceBase::set_scheme (const gi::cstring_v scheme) noexcept
{
  typedef void (*call_wrap_t) (::GNetworkService* srv, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_service_set_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  call_wrap_v ((::GNetworkService*) (gobj_()), (const char*) (scheme_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra_def_impl.hpp>)
#include <gio/networkservice_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra_impl.hpp>)
#include <gio/networkservice_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void NetworkServiceClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GNetworkServiceClass *methods = (::GNetworkServiceClass *) class_struct;
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
