// AUTO-GENERATED

#ifndef _GI_GIO_RESOLVER_IMPL_HPP_
#define _GI_GIO_RESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_resolver_free_addresses (GList* addresses /*none*/);
// void g_resolver_free_addresses (::GList* addresses /*none*/);
void base::ResolverBase::free_addresses (gi::CollectionParameter<GList, void*, gi::transfer_none_t> addresses) noexcept
{
  typedef void (*call_wrap_t) (::GList* addresses);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_free_addresses;
  auto addresses_w = unwrap (std::move(addresses), gi::transfer_none);
  auto addresses_to_c = addresses_w;
  call_wrap_v ((::GList*) (addresses_to_c));
}

// void g_resolver_free_targets (GList* targets /*none*/);
// void g_resolver_free_targets (::GList* targets /*none*/);
void base::ResolverBase::free_targets (gi::CollectionParameter<GList, void*, gi::transfer_none_t> targets) noexcept
{
  typedef void (*call_wrap_t) (::GList* targets);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_free_targets;
  auto targets_w = unwrap (std::move(targets), gi::transfer_none);
  auto targets_to_c = targets_w;
  call_wrap_v ((::GList*) (targets_to_c));
}

// GResolver* /*full*/ g_resolver_get_default ();
// ::GResolver* /*full*/ g_resolver_get_default ();
Gio::Resolver base::ResolverBase::get_default () noexcept
{
  typedef ::GResolver* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// FAILURE on g_resolver_records_from_res_query; No such node (<xmlattr>.transfer-ownership)
// unsigned g_resolver_get_timeout (GResolver* resolver /*none*/);
// guint g_resolver_get_timeout (::GResolver* resolver /*none*/);
guint base::ResolverBase::get_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::GResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_get_timeout;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()));
  return _temp_ret;
}

// gchar* /*full*/ g_resolver_lookup_by_address (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_resolver_lookup_by_address (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring base::ResolverBase::lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ResolverBase::lookup_by_address (Gio::InetAddress address)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ResolverBase::lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ResolverBase::lookup_by_address (Gio::InetAddress address, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_by_address_async (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_address_async (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ResolverBase::lookup_by_address_async (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_address_async (Gio::InetAddress address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar* /*full*/ g_resolver_lookup_by_address_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full*/ g_resolver_lookup_by_address_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::cstring base::ResolverBase::lookup_by_address_finish (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ResolverBase::lookup_by_address_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_address_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_resolver_lookup_by_name (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name (const gi::cstring_v hostname, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name (const gi::cstring_v hostname)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name (const gi::cstring_v hostname, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_by_name_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_name_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ResolverBase::lookup_by_name_async (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_name_async (const gi::cstring_v hostname, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_resolver_lookup_by_name_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_resolver_lookup_by_name_with_flags (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_with_flags (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_by_name_with_flags_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_name_with_flags_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ResolverBase::lookup_by_name_with_flags_async (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_name_with_flags_async (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_resolver_lookup_by_name_with_flags_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_with_flags_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> base::ResolverBase::lookup_by_name_with_flags_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_by_name_with_flags_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_resolver_lookup_records (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_records (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_records_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_records_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ResolverBase::lookup_records_async (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_records_async (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_resolver_lookup_records_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_records_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> base::ResolverBase::lookup_records_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_records_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_resolver_lookup_service (GResolver* resolver /*none*/, const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_service (::GResolver* resolver /*none*/, const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_service_async (GResolver* resolver /*none*/, const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_service_async (::GResolver* resolver /*none*/, const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ResolverBase::lookup_service_async (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_service_async (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none);
  auto service_to_c = gi::unwrap (service, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_resolver_lookup_service_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_service_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> base::ResolverBase::lookup_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_lookup_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_resolver_set_default (GResolver* resolver /*none*/);
// void g_resolver_set_default (::GResolver* resolver /*none*/);
void base::ResolverBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_set_default;
  call_wrap_v ((::GResolver*) (gobj_()));
}

// void g_resolver_set_timeout (GResolver* resolver /*none*/, unsigned timeout_ms);
// void g_resolver_set_timeout (::GResolver* resolver /*none*/, guint timeout_ms);
void base::ResolverBase::set_timeout (guint timeout_ms) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, guint timeout_ms);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_set_timeout;
  auto timeout_ms_to_c = timeout_ms;
  call_wrap_v ((::GResolver*) (gobj_()), (guint) (timeout_ms_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_def_impl.hpp>)
#include <gio/resolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_impl.hpp>)
#include <gio/resolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ResolverClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GResolverClass *methods = (::GResolverClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.lookup_by_address) methods->lookup_by_address = (decltype (methods->lookup_by_address)) detail::method_wrapper<self, gi::cstring (*) (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_address_>;
  if (init_data.lookup_by_address_async) methods->lookup_by_address_async = (decltype (methods->lookup_by_address_async)) detail::method_wrapper<self, void (*) (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_by_address_async_>;
  if (init_data.lookup_by_address_finish) methods->lookup_by_address_finish = (decltype (methods->lookup_by_address_finish)) detail::method_wrapper<self, gi::cstring (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_address_finish_>;
  if (init_data.lookup_by_name) methods->lookup_by_name = (decltype (methods->lookup_by_name)) detail::method_wrapper<self, gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> (*) (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_name_>;
  if (init_data.lookup_by_name_async) methods->lookup_by_name_async = (decltype (methods->lookup_by_name_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_by_name_async_>;
  if (init_data.lookup_by_name_finish) methods->lookup_by_name_finish = (decltype (methods->lookup_by_name_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_name_finish_>;
  if (init_data.lookup_by_name_with_flags) methods->lookup_by_name_with_flags = (decltype (methods->lookup_by_name_with_flags)) detail::method_wrapper<self, gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> (*) (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_name_with_flags_>;
  if (init_data.lookup_by_name_with_flags_async) methods->lookup_by_name_with_flags_async = (decltype (methods->lookup_by_name_with_flags_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_by_name_with_flags_async_>;
  if (init_data.lookup_by_name_with_flags_finish) methods->lookup_by_name_with_flags_finish = (decltype (methods->lookup_by_name_with_flags_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_by_name_with_flags_finish_>;
  if (init_data.lookup_records) methods->lookup_records = (decltype (methods->lookup_records)) detail::method_wrapper<self, gi::Collection<GList, ::GVariant*, gi::transfer_full_t> (*) (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_records_>;
  if (init_data.lookup_records_async) methods->lookup_records_async = (decltype (methods->lookup_records_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_records_async_>;
  if (init_data.lookup_records_finish) methods->lookup_records_finish = (decltype (methods->lookup_records_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GVariant*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_records_finish_>;
  if (init_data.lookup_service_async) methods->lookup_service_async = (decltype (methods->lookup_service_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v rrname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (const char* rrname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_service_async_>;
  if (init_data.lookup_service_finish) methods->lookup_service_finish = (decltype (methods->lookup_service_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_service_finish_>;
  if (init_data.reload) methods->reload = (decltype (methods->reload)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::reload_>;
}

// gchar* /*full*/ Resolver::lookup_by_address (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring ResolverClass::lookup_by_address_ (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_address) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_address;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void Resolver::lookup_by_address_async (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ResolverClass::lookup_by_address_async_ (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_by_address_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_address_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar* /*full*/ Resolver::lookup_by_address_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::cstring ResolverClass::lookup_by_address_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_address_finish) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_address_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ Resolver::lookup_by_name (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> ResolverClass::lookup_by_name_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_name) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Resolver::lookup_by_name_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ResolverClass::lookup_by_name_async_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_by_name_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ Resolver::lookup_by_name_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> ResolverClass::lookup_by_name_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_name_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ Resolver::lookup_by_name_with_flags (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> ResolverClass::lookup_by_name_with_flags_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_name_with_flags) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name_with_flags;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ResolverClass::lookup_by_name_with_flags_async_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_by_name_with_flags_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name_with_flags_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> ResolverClass::lookup_by_name_with_flags_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_by_name_with_flags_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_by_name_with_flags_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ Resolver::lookup_records (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> ResolverClass::lookup_records_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_records) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_records;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Resolver::lookup_records_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ResolverClass::lookup_records_async_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_records_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_records_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ Resolver::lookup_records_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GVariant*, gi::transfer_full_t> ResolverClass::lookup_records_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_records_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_records_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GVariant*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Resolver::lookup_service_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ResolverClass::lookup_service_async_ (const gi::cstring_v rrname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_service_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ Resolver::lookup_service_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_service_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> ResolverClass::lookup_service_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_service_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Resolver::reload (GResolver* resolver /*none*/);
// void Resolver::reload (::GResolver* resolver /*none*/);
void ResolverClass::reload_ () noexcept
{
  if (!get_struct_()->reload) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reload;
  call_wrap_v ((::GResolver*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
