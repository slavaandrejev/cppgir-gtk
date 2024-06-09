// AUTO-GENERATED

#ifndef _GI_GIO_APPLAUNCHCONTEXT_IMPL_HPP_
#define _GI_GIO_APPLAUNCHCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GAppLaunchContext* /*full*/ g_app_launch_context_new ();
// ::GAppLaunchContext* /*full*/ g_app_launch_context_new ();
Gio::AppLaunchContext base::AppLaunchContextBase::new_ () noexcept
{
  typedef ::GAppLaunchContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_app_launch_context_get_display (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ g_app_launch_context_get_display (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
gi::cstring base::AppLaunchContextBase::get_display (Gio::AppInfo info, gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files) noexcept
{
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_get_display;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char** /*full*/ g_app_launch_context_get_environment (GAppLaunchContext* context /*none*/);
// char** /*full*/ g_app_launch_context_get_environment (::GAppLaunchContext* context /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::AppLaunchContextBase::get_environment () noexcept
{
  typedef char** (*call_wrap_t) (::GAppLaunchContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_get_environment;
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_app_launch_context_get_startup_notify_id (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ g_app_launch_context_get_startup_notify_id (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
gi::cstring base::AppLaunchContextBase::get_startup_notify_id (Gio::AppInfo info, gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files) noexcept
{
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_get_startup_notify_id;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_app_launch_context_launch_failed (GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
// void g_app_launch_context_launch_failed (::GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
void base::AppLaunchContextBase::launch_failed (const gi::cstring_v startup_notify_id) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* startup_notify_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_launch_failed;
  auto startup_notify_id_to_c = gi::unwrap (startup_notify_id, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (startup_notify_id_to_c));
}

// void g_app_launch_context_setenv (GAppLaunchContext* context /*none*/, const char* variable /*none*/, const char* value /*none*/);
// void g_app_launch_context_setenv (::GAppLaunchContext* context /*none*/, const char* variable /*none*/, const char* value /*none*/);
void base::AppLaunchContextBase::setenv (const gi::cstring_v variable, const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* variable, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_setenv;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (variable_to_c), (const char*) (value_to_c));
}

// void g_app_launch_context_unsetenv (GAppLaunchContext* context /*none*/, const char* variable /*none*/);
// void g_app_launch_context_unsetenv (::GAppLaunchContext* context /*none*/, const char* variable /*none*/);
void base::AppLaunchContextBase::unsetenv (const gi::cstring_v variable) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_app_launch_context_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (variable_to_c));
}





} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_def_impl.hpp>)
#include <gio/applaunchcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_impl.hpp>)
#include <gio/applaunchcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AppLaunchContextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GAppLaunchContextClass *methods = (::GAppLaunchContextClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_display) methods->get_display = (decltype (methods->get_display)) detail::method_wrapper<self, gi::cstring (*) (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_display_>;
  if (init_data.get_startup_notify_id) methods->get_startup_notify_id = (decltype (methods->get_startup_notify_id)) detail::method_wrapper<self, gi::cstring (*) (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_startup_notify_id_>;
  if (init_data.launch_failed) methods->launch_failed = (decltype (methods->launch_failed)) detail::method_wrapper<self, void (*) (const gi::cstring_v startup_notify_id), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::launch_failed_>;
  if (init_data.launch_started) methods->launch_started = (decltype (methods->launch_started)) detail::method_wrapper<self, void (*) (Gio::AppInfo info, GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::launch_started_>;
  if (init_data.launched) methods->launched = (decltype (methods->launched)) detail::method_wrapper<self, void (*) (Gio::AppInfo info, GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::launched_>;
}

// char* /*full,nullable*/ AppLaunchContext::get_display (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_display (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
gi::cstring AppLaunchContextClass::get_display_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept
{
  if (!get_struct_()->get_display) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_display;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
gi::cstring AppLaunchContextClass::get_startup_notify_id_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept
{
  if (!get_struct_()->get_startup_notify_id) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_startup_notify_id;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void AppLaunchContext::launch_failed (GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
void AppLaunchContextClass::launch_failed_ (const gi::cstring_v startup_notify_id) noexcept
{
  if (!get_struct_()->launch_failed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* startup_notify_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_failed;
  auto startup_notify_id_to_c = gi::unwrap (startup_notify_id, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (startup_notify_id_to_c));
}

// void AppLaunchContext::launch_started (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
void AppLaunchContextClass::launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->launch_started) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_started;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GVariant*) (platform_data_to_c));
}

// void AppLaunchContext::launched (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launched (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
void AppLaunchContextClass::launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->launched) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launched;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GVariant*) (platform_data_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
