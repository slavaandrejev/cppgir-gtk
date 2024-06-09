// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPROXYRESOLVER_IMPL_HPP_
#define _GI_GIO_SIMPLEPROXYRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ProxyResolver SimpleProxyResolverBase::interface_ (gi::interface_tag<Gio::ProxyResolver>)
{ return gi::wrap ((Gio::ProxyResolver::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SimpleProxyResolverBase::operator Gio::ProxyResolver ()
{ return interface_ (gi::interface_tag<Gio::ProxyResolver>()); }

// GProxyResolver* /*full*/ g_simple_proxy_resolver_new (const gchar* default_proxy /*none,nullable*/, gchar** ignore_hosts /*none,nullable*/);
// ::GProxyResolver* /*full*/ g_simple_proxy_resolver_new (const char* default_proxy /*none,nullable*/, char** ignore_hosts /*none,nullable*/);
Gio::ProxyResolver base::SimpleProxyResolverBase::new_ (const gi::cstring_v default_proxy, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) (const char* default_proxy, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_new;
  auto ignore_hosts_w = unwrap (std::move(ignore_hosts), gi::transfer_none);
  auto ignore_hosts_to_c = ignore_hosts_w;
  auto default_proxy_to_c = gi::unwrap (default_proxy, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_to_c), (char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::ProxyResolver base::SimpleProxyResolverBase::new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) (const char* default_proxy, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_new;
  auto ignore_hosts_w = unwrap (std::move(ignore_hosts), gi::transfer_none);
  auto ignore_hosts_to_c = ignore_hosts_w;
  auto default_proxy_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_to_c), (char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_simple_proxy_resolver_set_default_proxy (GSimpleProxyResolver* resolver /*none*/, const gchar* default_proxy /*none,nullable*/);
// void g_simple_proxy_resolver_set_default_proxy (::GSimpleProxyResolver* resolver /*none*/, const char* default_proxy /*none,nullable*/);
void base::SimpleProxyResolverBase::set_default_proxy (const gi::cstring_v default_proxy) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, const char* default_proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_set_default_proxy;
  auto default_proxy_to_c = gi::unwrap (default_proxy, gi::transfer_none);
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (const char*) (default_proxy_to_c));
}
void base::SimpleProxyResolverBase::set_default_proxy () noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, const char* default_proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_set_default_proxy;
  auto default_proxy_to_c = nullptr;
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (const char*) (default_proxy_to_c));
}

// void g_simple_proxy_resolver_set_ignore_hosts (GSimpleProxyResolver* resolver /*none*/, gchar** ignore_hosts /*none*/);
// void g_simple_proxy_resolver_set_ignore_hosts (::GSimpleProxyResolver* resolver /*none*/, char** ignore_hosts /*none*/);
void base::SimpleProxyResolverBase::set_ignore_hosts (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_set_ignore_hosts;
  auto ignore_hosts_w = unwrap (std::move(ignore_hosts), gi::transfer_none);
  auto ignore_hosts_to_c = ignore_hosts_w;
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (char**) (ignore_hosts_to_c));
}

// void g_simple_proxy_resolver_set_uri_proxy (GSimpleProxyResolver* resolver /*none*/, const gchar* uri_scheme /*none*/, const gchar* proxy /*none*/);
// void g_simple_proxy_resolver_set_uri_proxy (::GSimpleProxyResolver* resolver /*none*/, const char* uri_scheme /*none*/, const char* proxy /*none*/);
void base::SimpleProxyResolverBase::set_uri_proxy (const gi::cstring_v uri_scheme, const gi::cstring_v proxy) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, const char* uri_scheme, const char* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_proxy_resolver_set_uri_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none);
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (const char*) (uri_scheme_to_c), (const char*) (proxy_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_def_impl.hpp>)
#include <gio/simpleproxyresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_impl.hpp>)
#include <gio/simpleproxyresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SimpleProxyResolverClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSimpleProxyResolverClass *methods = (::GSimpleProxyResolverClass *) class_struct;
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
