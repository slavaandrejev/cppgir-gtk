// AUTO-GENERATED

#ifndef _GI_GIO_DESKTOPAPPINFO_IMPL_HPP_
#define _GI_GIO_DESKTOPAPPINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AppInfo DesktopAppInfoBase::interface_ (gi::interface_tag<Gio::AppInfo>)
{ return gi::wrap ((Gio::AppInfo::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DesktopAppInfoBase::operator Gio::AppInfo ()
{ return interface_ (gi::interface_tag<Gio::AppInfo>()); }

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new (const char* desktop_id /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new (const char* desktop_id /*none*/);
Gio::DesktopAppInfo base::DesktopAppInfoBase::new_ (const gi::cstring_v desktop_id) noexcept
{
  typedef ::GDesktopAppInfo* (*call_wrap_t) (const char* desktop_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_desktop_app_info_new;
  auto desktop_id_to_c = gi::unwrap (desktop_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (desktop_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_filename (const char* filename /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_filename (const char* filename /*none*/);
Gio::DesktopAppInfo base::DesktopAppInfoBase::new_from_filename (const gi::cstring_v filename) noexcept
{
  typedef ::GDesktopAppInfo* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_desktop_app_info_new_from_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_keyfile (GKeyFile* key_file /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_keyfile (::GKeyFile* key_file /*none*/);
Gio::DesktopAppInfo base::DesktopAppInfoBase::new_from_keyfile (GLib::KeyFile_Ref key_file) noexcept
{
  typedef ::GDesktopAppInfo* (*call_wrap_t) (::GKeyFile* key_file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_desktop_app_info_new_from_keyfile;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_desktop_app_info_get_implementations (const gchar* interface /*none*/);
// ::GList* /*full*/ g_desktop_app_info_get_implementations (const char* interface /*none*/);
gi::Collection<GList, ::GDesktopAppInfo*, gi::transfer_full_t> base::DesktopAppInfoBase::get_implementations (const gi::cstring_v interface) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* interface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_implementations;
  auto interface_to_c = gi::unwrap (interface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (interface_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GDesktopAppInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar*** /*full*/ g_desktop_app_info_search (const gchar* search_string /*none*/);
// * /*full*/ g_desktop_app_info_search (const char* search_string /*none*/);
// SKIP; inconsistent list element info

// void g_desktop_app_info_set_desktop_env (const char* desktop_env /*none*/);
// void g_desktop_app_info_set_desktop_env (const char* desktop_env /*none*/);
// IGNORE; deprecated

// gchar* /*full*/ g_desktop_app_info_get_action_name (GDesktopAppInfo* info /*none*/, const gchar* action_name /*none*/);
// char* /*full*/ g_desktop_app_info_get_action_name (::GDesktopAppInfo* info /*none*/, const char* action_name /*none*/);
gi::cstring base::DesktopAppInfoBase::get_action_name (const gi::cstring_v action_name) noexcept
{
  typedef char* (*call_wrap_t) (::GDesktopAppInfo* info, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_desktop_app_info_get_boolean (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// gboolean g_desktop_app_info_get_boolean (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
bool base::DesktopAppInfoBase::get_boolean (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_desktop_app_info_get_categories (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_categories (::GDesktopAppInfo* info /*none*/);
gi::cstring_v base::DesktopAppInfoBase::get_categories () noexcept
{
  typedef const char* (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_categories;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_desktop_app_info_get_filename (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_filename (::GDesktopAppInfo* info /*none*/);
gi::cstring_v base::DesktopAppInfoBase::get_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_filename;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_desktop_app_info_get_generic_name (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_generic_name (::GDesktopAppInfo* info /*none*/);
gi::cstring_v base::DesktopAppInfoBase::get_generic_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_generic_name;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_desktop_app_info_get_is_hidden (GDesktopAppInfo* info /*none*/);
// gboolean g_desktop_app_info_get_is_hidden (::GDesktopAppInfo* info /*none*/);
bool base::DesktopAppInfoBase::get_is_hidden () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_is_hidden;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return _temp_ret;
}

// const char* const* /*none*/ g_desktop_app_info_get_keywords (GDesktopAppInfo* info /*none*/);
// const char** /*none*/ g_desktop_app_info_get_keywords (::GDesktopAppInfo* info /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::DesktopAppInfoBase::get_keywords () noexcept
{
  typedef const char** (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_keywords;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// char* /*full,nullable*/ g_desktop_app_info_get_locale_string (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ g_desktop_app_info_get_locale_string (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
gi::cstring base::DesktopAppInfoBase::get_locale_string (const gi::cstring_v key) noexcept
{
  typedef char* (*call_wrap_t) (::GDesktopAppInfo* info, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_locale_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_desktop_app_info_get_nodisplay (GDesktopAppInfo* info /*none*/);
// gboolean g_desktop_app_info_get_nodisplay (::GDesktopAppInfo* info /*none*/);
bool base::DesktopAppInfoBase::get_nodisplay () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_nodisplay;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_desktop_app_info_get_show_in (GDesktopAppInfo* info /*none*/, const gchar* desktop_env /*none,nullable*/);
// gboolean g_desktop_app_info_get_show_in (::GDesktopAppInfo* info /*none*/, const char* desktop_env /*none,nullable*/);
bool base::DesktopAppInfoBase::get_show_in (const gi::cstring_v desktop_env) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info, const char* desktop_env);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_show_in;
  auto desktop_env_to_c = gi::unwrap (desktop_env, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (desktop_env_to_c));
  return _temp_ret;
}
bool base::DesktopAppInfoBase::get_show_in () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info, const char* desktop_env);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_show_in;
  auto desktop_env_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (desktop_env_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_desktop_app_info_get_startup_wm_class (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_startup_wm_class (::GDesktopAppInfo* info /*none*/);
gi::cstring_v base::DesktopAppInfoBase::get_startup_wm_class () noexcept
{
  typedef const char* (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_startup_wm_class;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char* /*full,nullable*/ g_desktop_app_info_get_string (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ g_desktop_app_info_get_string (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
gi::cstring base::DesktopAppInfoBase::get_string (const gi::cstring_v key) noexcept
{
  typedef char* (*call_wrap_t) (::GDesktopAppInfo* info, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_desktop_app_info_get_string_list (GDesktopAppInfo* info /*none*/, const char* key /*none*/, gsize* length);
// char** /*full*/ g_desktop_app_info_get_string_list (::GDesktopAppInfo* info /*none*/, const char* key /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::DesktopAppInfoBase::get_string_list (const gi::cstring_v key, gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GDesktopAppInfo* info, const char* key, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::DesktopAppInfoBase::get_string_list (const gi::cstring_v key) noexcept
{
  typedef char** (*call_wrap_t) (::GDesktopAppInfo* info, const char* key, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_desktop_app_info_has_key (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// gboolean g_desktop_app_info_has_key (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
bool base::DesktopAppInfoBase::has_key (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* info, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// void g_desktop_app_info_launch_action (GDesktopAppInfo* info /*none*/, const gchar* action_name /*none*/, GAppLaunchContext* launch_context /*none,nullable*/);
// void g_desktop_app_info_launch_action (::GDesktopAppInfo* info /*none*/, const char* action_name /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/);
void base::DesktopAppInfoBase::launch_action (const gi::cstring_v action_name, Gio::AppLaunchContext launch_context) noexcept
{
  typedef void (*call_wrap_t) (::GDesktopAppInfo* info, const char* action_name, ::GAppLaunchContext* launch_context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_action;
  auto launch_context_to_c = gi::unwrap (launch_context, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (action_name_to_c), (::GAppLaunchContext*) (launch_context_to_c));
}
void base::DesktopAppInfoBase::launch_action (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GDesktopAppInfo* info, const char* action_name, ::GAppLaunchContext* launch_context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_action;
  auto launch_context_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (const char*) (action_name_to_c), (::GAppLaunchContext*) (launch_context_to_c));
}

// gboolean g_desktop_app_info_launch_uris_as_manager (GDesktopAppInfo* appinfo /*none*/, GList* uris /*none*/, GAppLaunchContext* launch_context /*none,nullable*/, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup /*none,nullable*/, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback /*none,nullable*/, gpointer pid_callback_data, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager (::GDesktopAppInfo* appinfo /*none*/, ::GList* uris /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup /*none,nullable*/, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback /*none,nullable*/, void* pid_callback_data, GError ** error);
bool base::DesktopAppInfoBase::launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback)
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = gi::unwrap (launch_context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback)
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = gi::unwrap (launch_context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (GDesktopAppInfo* appinfo /*none*/, GList* uris /*none*/, GAppLaunchContext* launch_context /*none,nullable*/, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup /*none,nullable*/, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback /*none,nullable*/, gpointer pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (::GDesktopAppInfo* appinfo /*none*/, ::GList* uris /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup /*none,nullable*/, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback /*none,nullable*/, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
bool base::DesktopAppInfoBase::launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = gi::unwrap (launch_context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = gi::unwrap (launch_context, gi::transfer_none);
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DesktopAppInfoBase::launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_launch_uris_as_manager_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto pid_callback_wrap_ = pid_callback ? unwrap (std::move (pid_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(pid_callback_wrap_)>::type> pid_callback_wrap__sp (pid_callback_wrap_);
  auto user_setup_wrap_ = user_setup ? unwrap (std::move (user_setup), gi::scope_async) : nullptr;
  auto spawn_flags_to_c = gi::unwrap (spawn_flags);
  auto launch_context_to_c = nullptr;
  auto uris_w = unwrap (std::move(uris), gi::transfer_none);
  auto uris_to_c = uris_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (launch_context_to_c), (::GSpawnFlags) (spawn_flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (user_setup_wrap_ ? &user_setup_wrap_->wrapper : nullptr), (void*) (user_setup_wrap_), (Gio::DesktopAppLaunchCallback::cfunction_type) (pid_callback_wrap_ ? &pid_callback_wrap_->wrapper : nullptr), (void*) (pid_callback_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// const gchar* const* /*none*/ g_desktop_app_info_list_actions (GDesktopAppInfo* info /*none*/);
// const char** /*none*/ g_desktop_app_info_list_actions (::GDesktopAppInfo* info /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::DesktopAppInfoBase::list_actions () noexcept
{
  typedef const char** (*call_wrap_t) (::GDesktopAppInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_desktop_app_info_list_actions;
  auto _temp_ret = call_wrap_v ((::GDesktopAppInfo*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra_def_impl.hpp>)
#include <gio/desktopappinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra_impl.hpp>)
#include <gio/desktopappinfo_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DesktopAppInfoClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDesktopAppInfoClass *methods = (::GDesktopAppInfoClass *) class_struct;
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
