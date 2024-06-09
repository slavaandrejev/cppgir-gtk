// AUTO-GENERATED

#ifndef _GI_GIO_PROXYRESOLVER_IMPL_HPP_
#define _GI_GIO_PROXYRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GProxyResolver* /*none*/ g_proxy_resolver_get_default ();
// ::GProxyResolver* /*none*/ g_proxy_resolver_get_default ();
Gio::ProxyResolver base::ProxyResolverBase::get_default () noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_proxy_resolver_is_supported (GProxyResolver* resolver /*none*/);
// gboolean g_proxy_resolver_is_supported (::GProxyResolver* resolver /*none*/);
bool base::ProxyResolverBase::is_supported () noexcept
{
  typedef gboolean (*call_wrap_t) (::GProxyResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_is_supported;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()));
  return _temp_ret;
}

// gchar** /*full*/ g_proxy_resolver_lookup (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ g_proxy_resolver_lookup (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup (const gi::cstring_v uri, Gio::Cancellable cancellable)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup (const gi::cstring_v uri)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_proxy_resolver_lookup_async (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_proxy_resolver_lookup_async (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ProxyResolverBase::lookup_async (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ProxyResolverBase::lookup_async (const gi::cstring_v uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** /*full*/ g_proxy_resolver_lookup_finish (GProxyResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ g_proxy_resolver_lookup_finish (::GProxyResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup_finish (Gio::AsyncResult result)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ProxyResolverBase::lookup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_proxy_resolver_lookup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_def_impl.hpp>)
#include <gio/proxyresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_impl.hpp>)
#include <gio/proxyresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyResolverInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GProxyResolverInterface *methods = (::GProxyResolverInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.is_supported) methods->is_supported = (decltype (methods->is_supported)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_supported_>;
  if (init_data.lookup) methods->lookup = (decltype (methods->lookup)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_>;
  if (init_data.lookup_async) methods->lookup_async = (decltype (methods->lookup_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_async_>;
  if (init_data.lookup_finish) methods->lookup_finish = (decltype (methods->lookup_finish)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_finish_>;
}

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver /*none*/);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver /*none*/);
bool ProxyResolverInterfaceClassImpl::is_supported_ () noexcept
{
  if (!get_struct_()->is_supported) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GProxyResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_supported;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()));
  return _temp_ret;
}

// gchar** /*full*/ ProxyResolver::lookup (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> ProxyResolverInterfaceClassImpl::lookup_ (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void ProxyResolver::lookup_async (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ProxyResolverInterfaceClassImpl::lookup_async_ (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** /*full*/ ProxyResolver::lookup_finish (GProxyResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup_finish (::GProxyResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> ProxyResolverInterfaceClassImpl::lookup_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_finish) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
