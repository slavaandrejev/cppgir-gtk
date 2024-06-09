// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMASOURCE_IMPL_HPP_
#define _GI_GIO_SETTINGSSCHEMASOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSettingsSchemaSource* /*full*/ g_settings_schema_source_new_from_directory (const gchar* directory /*none*/, GSettingsSchemaSource* parent /*none,nullable*/, gboolean trusted, GError ** error);
// ::GSettingsSchemaSource* /*full*/ g_settings_schema_source_new_from_directory (const char* directory /*none*/, ::GSettingsSchemaSource* parent /*none,nullable*/, gboolean trusted, GError ** error);
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const gi::cstring_v directory, Gio::SettingsSchemaSource_Ref parent, gboolean trusted)
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const gi::cstring_v directory, gboolean trusted)
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = nullptr;
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const gi::cstring_v directory, Gio::SettingsSchemaSource_Ref parent, gboolean trusted, GLib::Error * _error) noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SettingsSchemaSource base::SettingsSchemaSourceBase::new_from_directory (const gi::cstring_v directory, gboolean trusted, GLib::Error * _error) noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) (const char* directory, ::GSettingsSchemaSource* parent, gboolean trusted, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_schema_source_new_from_directory;
  auto trusted_to_c = trusted;
  auto parent_to_c = nullptr;
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (directory_to_c), (::GSettingsSchemaSource*) (parent_to_c), (gboolean) (trusted_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_settings_schema_source_list_schemas (GSettingsSchemaSource* source /*none*/, gboolean recursive, gchar*** non_relocatable /*full,out*/, gchar*** relocatable /*full,out*/);
// void g_settings_schema_source_list_schemas (::GSettingsSchemaSource* source /*none*/, gboolean recursive, char*** non_relocatable /*full,out*/, char*** relocatable /*full,out*/);
void base::SettingsSchemaSourceBase::list_schemas (gboolean recursive, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & non_relocatable, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & relocatable) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_source_list_schemas;
  char** relocatable_o {};
  char** non_relocatable_o {};
  auto recursive_to_c = recursive;
  call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (gboolean) (recursive_to_c), (char***) (&non_relocatable_o), (char***) (&relocatable_o));
  relocatable = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(relocatable_o, gi::transfer_full);
  non_relocatable = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(non_relocatable_o, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::SettingsSchemaSourceBase::list_schemas (gboolean recursive) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsSchemaSource* source, gboolean recursive, char*** non_relocatable, char*** relocatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_source_list_schemas;
  char** relocatable_o {};
  char** non_relocatable_o {};
  auto recursive_to_c = recursive;
  call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (gboolean) (recursive_to_c), (char***) (&non_relocatable_o), (char***) (&relocatable_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(non_relocatable_o, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(relocatable_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GSettingsSchema* /*full,nullable*/ g_settings_schema_source_lookup (GSettingsSchemaSource* source /*none*/, const gchar* schema_id /*none*/, gboolean recursive);
// ::GSettingsSchema* /*full,nullable*/ g_settings_schema_source_lookup (::GSettingsSchemaSource* source /*none*/, const char* schema_id /*none*/, gboolean recursive);
Gio::SettingsSchema base::SettingsSchemaSourceBase::lookup (const gi::cstring_v schema_id, gboolean recursive) noexcept
{
  typedef ::GSettingsSchema* (*call_wrap_t) (::GSettingsSchemaSource* source, const char* schema_id, gboolean recursive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_source_lookup;
  auto recursive_to_c = recursive;
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsSchemaSource*) (gobj_()), (const char*) (schema_id_to_c), (gboolean) (recursive_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettingsSchemaSource* /*full*/ g_settings_schema_source_ref (GSettingsSchemaSource* source /*none*/);
// ::GSettingsSchemaSource* /*full*/ g_settings_schema_source_ref (::GSettingsSchemaSource* source /*none*/);
// IGNORE; marked ignore

// void g_settings_schema_source_unref (GSettingsSchemaSource* source /*none*/);
// void g_settings_schema_source_unref (::GSettingsSchemaSource* source /*none*/);
// IGNORE; marked ignore

// GSettingsSchemaSource* /*none,nullable*/ g_settings_schema_source_get_default ();
// ::GSettingsSchemaSource* /*none,nullable*/ g_settings_schema_source_get_default ();
Gio::SettingsSchemaSource_Ref base::SettingsSchemaSourceBase::get_default () noexcept
{
  typedef ::GSettingsSchemaSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_schema_source_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_def_impl.hpp>)
#include <gio/settingsschemasource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_impl.hpp>)
#include <gio/settingsschemasource_extra_impl.hpp>
#endif
#endif

#endif
