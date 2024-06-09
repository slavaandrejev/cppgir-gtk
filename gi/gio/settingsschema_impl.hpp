// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMA_IMPL_HPP_
#define _GI_GIO_SETTINGSSCHEMA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* /*none*/ g_settings_schema_get_id (GSettingsSchema* schema /*none*/);
// const char* /*none*/ g_settings_schema_get_id (::GSettingsSchema* schema /*none*/);
gi::cstring_v base::SettingsSchemaBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_get_id;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GSettingsSchemaKey* /*full*/ g_settings_schema_get_key (GSettingsSchema* schema /*none*/, const gchar* name /*none*/);
// ::GSettingsSchemaKey* /*full*/ g_settings_schema_get_key (::GSettingsSchema* schema /*none*/, const char* name /*none*/);
Gio::SettingsSchemaKey base::SettingsSchemaBase::get_key (const gi::cstring_v name) noexcept
{
  typedef ::GSettingsSchemaKey* (*call_wrap_t) (::GSettingsSchema* schema, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_get_key;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_settings_schema_get_path (GSettingsSchema* schema /*none*/);
// const char* /*none,nullable*/ g_settings_schema_get_path (::GSettingsSchema* schema /*none*/);
gi::cstring_v base::SettingsSchemaBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_get_path;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_settings_schema_has_key (GSettingsSchema* schema /*none*/, const gchar* name /*none*/);
// gboolean g_settings_schema_has_key (::GSettingsSchema* schema /*none*/, const char* name /*none*/);
bool base::SettingsSchemaBase::has_key (const gi::cstring_v name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettingsSchema* schema, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_has_key;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gchar** /*full*/ g_settings_schema_list_children (GSettingsSchema* schema /*none*/);
// char** /*full*/ g_settings_schema_list_children (::GSettingsSchema* schema /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::SettingsSchemaBase::list_children () noexcept
{
  typedef char** (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_list_children;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_settings_schema_list_keys (GSettingsSchema* schema /*none*/);
// char** /*full*/ g_settings_schema_list_keys (::GSettingsSchema* schema /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::SettingsSchemaBase::list_keys () noexcept
{
  typedef char** (*call_wrap_t) (::GSettingsSchema* schema);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_list_keys;
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GSettingsSchema* /*full*/ g_settings_schema_ref (GSettingsSchema* schema /*none*/);
// ::GSettingsSchema* /*full*/ g_settings_schema_ref (::GSettingsSchema* schema /*none*/);
// IGNORE; marked ignore

// void g_settings_schema_unref (GSettingsSchema* schema /*none*/);
// void g_settings_schema_unref (::GSettingsSchema* schema /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_def_impl.hpp>)
#include <gio/settingsschema_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_impl.hpp>)
#include <gio/settingsschema_extra_impl.hpp>
#endif
#endif

#endif
