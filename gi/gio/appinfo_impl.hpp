// AUTO-GENERATED

#ifndef _GI_GIO_APPINFO_IMPL_HPP_
#define _GI_GIO_APPINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GAppInfo* /*full*/ g_app_info_create_from_commandline (const char* commandline /*none*/, const char* application_name /*none,nullable*/, GAppInfoCreateFlags flags, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_create_from_commandline (const char* commandline /*none*/, const char* application_name /*none,nullable*/, ::GAppInfoCreateFlags flags, GError ** error);
Gio::AppInfo base::AppInfoBase::create_from_commandline (const gi::cstring_v commandline, const gi::cstring_v application_name, Gio::AppInfoCreateFlags flags)
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none);
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const gi::cstring_v commandline, Gio::AppInfoCreateFlags flags)
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = nullptr;
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const gi::cstring_v commandline, const gi::cstring_v application_name, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none);
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const gi::cstring_v commandline, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = nullptr;
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_app_info_get_all ();
// ::GList* /*full*/ g_app_info_get_all ();
gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> base::AppInfoBase::get_all () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_all;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_app_info_get_all_for_type (const char* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_all_for_type (const char* content_type /*none*/);
gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> base::AppInfoBase::get_all_for_type (const gi::cstring_v content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_all_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GAppInfo* /*full,nullable*/ g_app_info_get_default_for_type (const char* content_type /*none*/, gboolean must_support_uris);
// ::GAppInfo* /*full,nullable*/ g_app_info_get_default_for_type (const char* content_type /*none*/, gboolean must_support_uris);
Gio::AppInfo base::AppInfoBase::get_default_for_type (const gi::cstring_v content_type, gboolean must_support_uris) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* content_type, gboolean must_support_uris);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_type;
  auto must_support_uris_to_c = must_support_uris;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c), (gboolean) (must_support_uris_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_app_info_get_default_for_type_async (const char* content_type /*none*/, gboolean must_support_uris, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_get_default_for_type_async (const char* content_type /*none*/, gboolean must_support_uris, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AppInfoBase::get_default_for_type_async (const gi::cstring_v content_type, gboolean must_support_uris, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* content_type, gboolean must_support_uris, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_type_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto must_support_uris_to_c = must_support_uris;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  call_wrap_v ((const char*) (content_type_to_c), (gboolean) (must_support_uris_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::get_default_for_type_async (const gi::cstring_v content_type, gboolean must_support_uris, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* content_type, gboolean must_support_uris, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_type_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto must_support_uris_to_c = must_support_uris;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  call_wrap_v ((const char*) (content_type_to_c), (gboolean) (must_support_uris_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GAppInfo* /*full*/ g_app_info_get_default_for_type_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_get_default_for_type_finish (::GAsyncResult* result /*none*/, GError ** error);
Gio::AppInfo base::AppInfoBase::get_default_for_type_finish (Gio::AsyncResult result)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::AppInfoBase::get_default_for_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GAppInfo* /*full,nullable*/ g_app_info_get_default_for_uri_scheme (const char* uri_scheme /*none*/);
// ::GAppInfo* /*full,nullable*/ g_app_info_get_default_for_uri_scheme (const char* uri_scheme /*none*/);
Gio::AppInfo base::AppInfoBase::get_default_for_uri_scheme (const gi::cstring_v uri_scheme) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_scheme_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_app_info_get_default_for_uri_scheme_async (const char* uri_scheme /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_get_default_for_uri_scheme_async (const char* uri_scheme /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AppInfoBase::get_default_for_uri_scheme_async (const gi::cstring_v uri_scheme, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri_scheme, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_uri_scheme_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  call_wrap_v ((const char*) (uri_scheme_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::get_default_for_uri_scheme_async (const gi::cstring_v uri_scheme, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri_scheme, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_uri_scheme_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  call_wrap_v ((const char*) (uri_scheme_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GAppInfo* /*full*/ g_app_info_get_default_for_uri_scheme_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_get_default_for_uri_scheme_finish (::GAsyncResult* result /*none*/, GError ** error);
Gio::AppInfo base::AppInfoBase::get_default_for_uri_scheme_finish (Gio::AsyncResult result)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_uri_scheme_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::AppInfoBase::get_default_for_uri_scheme_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_default_for_uri_scheme_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_app_info_get_fallback_for_type (const gchar* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_fallback_for_type (const char* content_type /*none*/);
gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> base::AppInfoBase::get_fallback_for_type (const gi::cstring_v content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_fallback_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_app_info_get_recommended_for_type (const gchar* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_recommended_for_type (const char* content_type /*none*/);
gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> base::AppInfoBase::get_recommended_for_type (const gi::cstring_v content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_recommended_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_app_info_launch_default_for_uri (const char* uri /*none*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch_default_for_uri (const char* uri /*none*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
bool base::AppInfoBase::launch_default_for_uri (const gi::cstring_v uri, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const gi::cstring_v uri, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_app_info_launch_default_for_uri_async (const char* uri /*none*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_launch_default_for_uri_async (const char* uri /*none*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AppInfoBase::launch_default_for_uri_async (const gi::cstring_v uri, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::launch_default_for_uri_async (const gi::cstring_v uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_app_info_launch_default_for_uri_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean g_app_info_launch_default_for_uri_finish (::GAsyncResult* result /*none*/, GError ** error);
bool base::AppInfoBase::launch_default_for_uri_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_default_for_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_app_info_reset_type_associations (const char* content_type /*none*/);
// void g_app_info_reset_type_associations (const char* content_type /*none*/);
void base::AppInfoBase::reset_type_associations (const gi::cstring_v content_type) noexcept
{
  typedef void (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_reset_type_associations;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  call_wrap_v ((const char*) (content_type_to_c));
}

// gboolean g_app_info_add_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_add_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool base::AppInfoBase::add_supports_type (const gi::cstring_v content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_add_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::add_supports_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_add_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_can_delete (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_can_delete (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::can_delete () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_can_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_can_remove_supports_type (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_can_remove_supports_type (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::can_remove_supports_type () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_can_remove_supports_type;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_delete (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_delete (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::delete_ () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// GAppInfo* /*full*/ g_app_info_dup (GAppInfo* appinfo /*none*/);
// ::GAppInfo* /*full*/ g_app_info_dup (::GAppInfo* appinfo /*none*/);
Gio::AppInfo base::AppInfoBase::dup () noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_dup;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_app_info_equal (GAppInfo* appinfo1 /*none*/, GAppInfo* appinfo2 /*none*/);
// gboolean g_app_info_equal (::GAppInfo* appinfo1 /*none*/, ::GAppInfo* appinfo2 /*none*/);
bool base::AppInfoBase::equal (Gio::AppInfo appinfo2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_equal;
  auto appinfo2_to_c = gi::unwrap (appinfo2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAppInfo*) (appinfo2_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_app_info_get_commandline (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_commandline (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_commandline () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_commandline;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_app_info_get_description (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_description (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_description;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_app_info_get_display_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_display_name (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_display_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_app_info_get_executable (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_executable (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_executable () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_executable;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*none,nullable*/ g_app_info_get_icon (GAppInfo* appinfo /*none*/);
// ::GIcon* /*none,nullable*/ g_app_info_get_icon (::GAppInfo* appinfo /*none*/);
Gio::Icon base::AppInfoBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_icon;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_app_info_get_id (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_id (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_id;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_app_info_get_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_name (::GAppInfo* appinfo /*none*/);
gi::cstring_v base::AppInfoBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char** /*none*/ g_app_info_get_supported_types (GAppInfo* appinfo /*none*/);
// const char** /*none*/ g_app_info_get_supported_types (::GAppInfo* appinfo /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AppInfoBase::get_supported_types () noexcept
{
  typedef const char** (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_get_supported_types;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gboolean g_app_info_launch (GAppInfo* appinfo /*none*/, GList* files /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch (::GAppInfo* appinfo /*none*/, ::GList* files /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
bool base::AppInfoBase::launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch;
  auto context_to_c = nullptr;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::AppInfoBase::launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch;
  auto context_to_c = nullptr;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_launch_uris (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch_uris (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
bool base::AppInfoBase::launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris;
  auto context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris;
  auto context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_app_info_launch_uris_async (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_launch_uris_async (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AppInfoBase::launch_uris_async (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::launch_uris_async (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_app_info_launch_uris_finish (GAppInfo* appinfo /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_app_info_launch_uris_finish (::GAppInfo* appinfo /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::AppInfoBase::launch_uris_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_launch_uris_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_remove_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_remove_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool base::AppInfoBase::remove_supports_type (const gi::cstring_v content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_remove_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::remove_supports_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_remove_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_set_as_default_for_extension (GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
// gboolean g_app_info_set_as_default_for_extension (::GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
bool base::AppInfoBase::set_as_default_for_extension (const gi::cstring_v extension)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* extension, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_default_for_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (extension_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_default_for_extension (const gi::cstring_v extension, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* extension, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_default_for_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (extension_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_set_as_default_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_set_as_default_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool base::AppInfoBase::set_as_default_for_type (const gi::cstring_v content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_default_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_default_for_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_default_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_set_as_last_used_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_set_as_last_used_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool base::AppInfoBase::set_as_last_used_for_type (const gi::cstring_v content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_last_used_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_last_used_for_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_set_as_last_used_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_app_info_should_show (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_should_show (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::should_show () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_should_show;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_supports_files (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_supports_files (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::supports_files () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_supports_files;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_supports_uris (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_supports_uris (::GAppInfo* appinfo /*none*/);
bool base::AppInfoBase::supports_uris () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_info_supports_uris;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_def_impl.hpp>)
#include <gio/appinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_impl.hpp>)
#include <gio/appinfo_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AppInfoIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GAppInfoIface *methods = (::GAppInfoIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_supports_type) methods->add_supports_type = (decltype (methods->add_supports_type)) detail::method_wrapper<self, bool (*) (const gi::cstring_v content_type, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::add_supports_type_>;
  if (init_data.can_delete) methods->can_delete = (decltype (methods->can_delete)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_delete_>;
  if (init_data.can_remove_supports_type) methods->can_remove_supports_type = (decltype (methods->can_remove_supports_type)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_remove_supports_type_>;
  if (init_data.do_delete) methods->do_delete = (decltype (methods->do_delete)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::do_delete_>;
  if (init_data.dup) methods->dup = (decltype (methods->dup)) detail::method_wrapper<self, Gio::AppInfo (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::dup_>;
  if (init_data.equal) methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::AppInfo appinfo2), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::equal_>;
  if (init_data.get_commandline) methods->get_commandline = (decltype (methods->get_commandline)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_commandline_>;
  if (init_data.get_description) methods->get_description = (decltype (methods->get_description)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_description_>;
  if (init_data.get_display_name) methods->get_display_name = (decltype (methods->get_display_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_display_name_>;
  if (init_data.get_executable) methods->get_executable = (decltype (methods->get_executable)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_executable_>;
  if (init_data.get_icon) methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_icon_>;
  if (init_data.get_id) methods->get_id = (decltype (methods->get_id)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_id_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.get_supported_types) methods->get_supported_types = (decltype (methods->get_supported_types)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_supported_types_>;
  if (init_data.launch) methods->launch = (decltype (methods->launch)) detail::method_wrapper<self, bool (*) (gi::Collection<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::launch_>;
  if (init_data.launch_uris) methods->launch_uris = (decltype (methods->launch_uris)) detail::method_wrapper<self, bool (*) (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::launch_uris_>;
  if (init_data.launch_uris_async) methods->launch_uris_async = (decltype (methods->launch_uris_async)) detail::method_wrapper<self, void (*) (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::launch_uris_async_>;
  if (init_data.launch_uris_finish) methods->launch_uris_finish = (decltype (methods->launch_uris_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::launch_uris_finish_>;
  if (init_data.remove_supports_type) methods->remove_supports_type = (decltype (methods->remove_supports_type)) detail::method_wrapper<self, bool (*) (const gi::cstring_v content_type, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::remove_supports_type_>;
  if (init_data.set_as_default_for_extension) methods->set_as_default_for_extension = (decltype (methods->set_as_default_for_extension)) detail::method_wrapper<self, bool (*) (const gi::cstring_v extension, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_as_default_for_extension_>;
  if (init_data.set_as_default_for_type) methods->set_as_default_for_type = (decltype (methods->set_as_default_for_type)) detail::method_wrapper<self, bool (*) (const gi::cstring_v content_type, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_as_default_for_type_>;
  if (init_data.set_as_last_used_for_type) methods->set_as_last_used_for_type = (decltype (methods->set_as_last_used_for_type)) detail::method_wrapper<self, bool (*) (const gi::cstring_v content_type, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_as_last_used_for_type_>;
  if (init_data.should_show) methods->should_show = (decltype (methods->should_show)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::should_show_>;
  if (init_data.supports_files) methods->supports_files = (decltype (methods->supports_files)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::supports_files_>;
  if (init_data.supports_uris) methods->supports_uris = (decltype (methods->supports_uris)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::supports_uris_>;
}

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::add_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error)
{
  if (!get_struct_()->add_supports_type) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::can_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::can_delete_ () noexcept
{
  if (!get_struct_()->can_delete) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::can_remove_supports_type_ () noexcept
{
  if (!get_struct_()->can_remove_supports_type) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_remove_supports_type;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::do_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::do_delete_ () noexcept
{
  if (!get_struct_()->do_delete) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// GAppInfo* /*full*/ AppInfo::dup (GAppInfo* appinfo /*none*/);
// ::GAppInfo* /*full*/ AppInfo::dup (::GAppInfo* appinfo /*none*/);
Gio::AppInfo AppInfoIfaceClassImpl::dup_ () noexcept
{
  if (!get_struct_()->dup) { g_critical ("no method in class struct"); return {}; }
  typedef ::GAppInfo* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean AppInfo::equal (GAppInfo* appinfo1 /*none*/, GAppInfo* appinfo2 /*none*/);
// gboolean AppInfo::equal (::GAppInfo* appinfo1 /*none*/, ::GAppInfo* appinfo2 /*none*/);
bool AppInfoIfaceClassImpl::equal_ (Gio::AppInfo appinfo2) noexcept
{
  if (!get_struct_()->equal) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto appinfo2_to_c = gi::unwrap (appinfo2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAppInfo*) (appinfo2_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ AppInfo::get_commandline (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_commandline (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_commandline_ () noexcept
{
  if (!get_struct_()->get_commandline) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_commandline;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ AppInfo::get_description (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_description (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_description_ () noexcept
{
  if (!get_struct_()->get_description) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_description;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ AppInfo::get_display_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_display_name (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_display_name_ () noexcept
{
  if (!get_struct_()->get_display_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_display_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ AppInfo::get_executable (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_executable (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_executable_ () noexcept
{
  if (!get_struct_()->get_executable) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_executable;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*none,nullable*/ AppInfo::get_icon (GAppInfo* appinfo /*none*/);
// ::GIcon* /*none,nullable*/ AppInfo::get_icon (::GAppInfo* appinfo /*none*/);
Gio::Icon AppInfoIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ AppInfo::get_id (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_id (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_id_ () noexcept
{
  if (!get_struct_()->get_id) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_id;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ AppInfo::get_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_name (::GAppInfo* appinfo /*none*/);
gi::cstring_v AppInfoIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char** /*none*/ AppInfo::get_supported_types (GAppInfo* appinfo /*none*/);
// const char** /*none*/ AppInfo::get_supported_types (::GAppInfo* appinfo /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> AppInfoIfaceClassImpl::get_supported_types_ () noexcept
{
  if (!get_struct_()->get_supported_types) { g_critical ("no method in class struct"); return {}; }
  typedef const char** (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_supported_types;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gboolean AppInfo::launch (GAppInfo* appinfo /*none*/, GList* files /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo /*none*/, ::GList* files /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
bool AppInfoIfaceClassImpl::launch_ (gi::Collection<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error)
{
  if (!get_struct_()->launch) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::launch_uris (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
bool AppInfoIfaceClassImpl::launch_uris_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error)
{
  if (!get_struct_()->launch_uris) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_uris;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void AppInfo::launch_uris_async (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void AppInfoIfaceClassImpl::launch_uris_async_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->launch_uris_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_uris_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::launch_uris_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->launch_uris_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_uris_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::remove_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error)
{
  if (!get_struct_()->remove_supports_type) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::set_as_default_for_extension_ (const gi::cstring_v extension, GLib::Error * _error)
{
  if (!get_struct_()->set_as_default_for_extension) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* extension, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_as_default_for_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (extension_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::set_as_default_for_type_ (const gi::cstring_v content_type, GLib::Error * _error)
{
  if (!get_struct_()->set_as_default_for_type) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_as_default_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
bool AppInfoIfaceClassImpl::set_as_last_used_for_type_ (const gi::cstring_v content_type, GLib::Error * _error)
{
  if (!get_struct_()->set_as_last_used_for_type) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_as_last_used_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean AppInfo::should_show (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::should_show (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::should_show_ () noexcept
{
  if (!get_struct_()->should_show) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->should_show;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::supports_files (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::supports_files_ () noexcept
{
  if (!get_struct_()->supports_files) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_files;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::supports_uris (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo /*none*/);
bool AppInfoIfaceClassImpl::supports_uris_ () noexcept
{
  if (!get_struct_()->supports_uris) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_uris;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
