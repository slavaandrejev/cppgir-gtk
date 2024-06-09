// AUTO-GENERATED

#ifndef _GI_GIO_PROXY_IMPL_HPP_
#define _GI_GIO_PROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GProxy* /*full,nullable*/ g_proxy_get_default_for_protocol (const gchar* protocol /*none*/);
// ::GProxy* /*full,nullable*/ g_proxy_get_default_for_protocol (const char* protocol /*none*/);
Gio::Proxy base::ProxyBase::get_default_for_protocol (const gi::cstring_v protocol) noexcept
{
  typedef ::GProxy* (*call_wrap_t) (const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_get_default_for_protocol;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (protocol_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIOStream* /*full*/ g_proxy_connect (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_proxy_connect (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_proxy_connect_async (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_proxy_connect_async (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ProxyBase::connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ProxyBase::connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GIOStream* /*full*/ g_proxy_connect_finish (GProxy* proxy /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GIOStream* /*full*/ g_proxy_connect_finish (::GProxy* proxy /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::IOStream base::ProxyBase::connect_finish (Gio::AsyncResult result)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream base::ProxyBase::connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_proxy_supports_hostname (GProxy* proxy /*none*/);
// gboolean g_proxy_supports_hostname (::GProxy* proxy /*none*/);
bool base::ProxyBase::supports_hostname () noexcept
{
  typedef gboolean (*call_wrap_t) (::GProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_supports_hostname;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_def_impl.hpp>)
#include <gio/proxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_impl.hpp>)
#include <gio/proxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GProxyInterface *methods = (::GProxyInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.connect) methods->connect = (decltype (methods->connect)) detail::method_wrapper<self, Gio::IOStream (*) (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::connect_>;
  if (init_data.connect_async) methods->connect_async = (decltype (methods->connect_async)) detail::method_wrapper<self, void (*) (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::connect_async_>;
  if (init_data.connect_finish) methods->connect_finish = (decltype (methods->connect_finish)) detail::method_wrapper<self, Gio::IOStream (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::connect_finish_>;
  if (init_data.supports_hostname) methods->supports_hostname = (decltype (methods->supports_hostname)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::supports_hostname_>;
}

// GIOStream* /*full*/ Proxy::connect (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::IOStream ProxyInterfaceClassImpl::connect_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->connect) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void Proxy::connect_async (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ProxyInterfaceClassImpl::connect_async_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->connect_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GIOStream* /*full*/ Proxy::connect_finish (GProxy* proxy /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect_finish (::GProxy* proxy /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::IOStream ProxyInterfaceClassImpl::connect_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->connect_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean Proxy::supports_hostname (GProxy* proxy /*none*/);
// gboolean Proxy::supports_hostname (::GProxy* proxy /*none*/);
bool ProxyInterfaceClassImpl::supports_hostname_ () noexcept
{
  if (!get_struct_()->supports_hostname) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_hostname;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
