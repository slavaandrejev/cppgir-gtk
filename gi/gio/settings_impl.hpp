// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGS_IMPL_HPP_
#define _GI_GIO_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSettings* /*full*/ g_settings_new (const gchar* schema_id /*none*/);
// ::GSettings* /*full*/ g_settings_new (const char* schema_id /*none*/);
Gio::Settings base::SettingsBase::new_ (const gi::cstring_v schema_id) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new;
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettings* /*full*/ g_settings_new_full (GSettingsSchema* schema /*none*/, GSettingsBackend* backend /*none,nullable*/, const gchar* path /*none,nullable*/);
// ::GSettings* /*full*/ g_settings_new_full (::GSettingsSchema* schema /*none*/, ::GSettingsBackend* backend /*none,nullable*/, const char* path /*none,nullable*/);
Gio::Settings base::SettingsBase::new_full (Gio::SettingsSchema_Ref schema, Gio::SettingsBackend backend, const gi::cstring_v path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_full;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none);
  auto schema_to_c = gi::unwrap (schema, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (schema_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Settings base::SettingsBase::new_full (Gio::SettingsSchema_Ref schema) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_full;
  auto path_to_c = nullptr;
  auto backend_to_c = nullptr;
  auto schema_to_c = gi::unwrap (schema, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (schema_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettings* /*full*/ g_settings_new_with_backend (const gchar* schema_id /*none*/, GSettingsBackend* backend /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_backend (const char* schema_id /*none*/, ::GSettingsBackend* backend /*none*/);
Gio::Settings base::SettingsBase::new_with_backend (const gi::cstring_v schema_id, Gio::SettingsBackend backend) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, ::GSettingsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_backend;
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (::GSettingsBackend*) (backend_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettings* /*full*/ g_settings_new_with_backend_and_path (const gchar* schema_id /*none*/, GSettingsBackend* backend /*none*/, const gchar* path /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_backend_and_path (const char* schema_id /*none*/, ::GSettingsBackend* backend /*none*/, const char* path /*none*/);
Gio::Settings base::SettingsBase::new_with_backend_and_path (const gi::cstring_v schema_id, Gio::SettingsBackend backend, const gi::cstring_v path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_backend_and_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettings* /*full*/ g_settings_new_with_path (const gchar* schema_id /*none*/, const gchar* path /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_path (const char* schema_id /*none*/, const char* path /*none*/);
Gio::Settings base::SettingsBase::new_with_path (const gi::cstring_v schema_id, const gi::cstring_v path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* const* /*none*/ g_settings_list_relocatable_schemas ();
// const char** /*none*/ g_settings_list_relocatable_schemas ();
// IGNORE; deprecated

// const gchar* const* /*none*/ g_settings_list_schemas ();
// const char** /*none*/ g_settings_list_schemas ();
// IGNORE; deprecated

// void g_settings_sync ();
// void g_settings_sync ();
void base::SettingsBase::sync () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_sync;
  call_wrap_v ();
}

// void g_settings_unbind (gpointer object /*none*/, const gchar* property /*none*/);
// void g_settings_unbind (::GObject* object /*none*/, const char* property /*none*/);
void base::SettingsBase::unbind (GObject::Object object, const gi::cstring_v property) noexcept
{
  typedef void (*call_wrap_t) (::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_unbind;
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GObject*) (object_to_c), (const char*) (property_to_c));
}

// void g_settings_apply (GSettings* settings /*none*/);
// void g_settings_apply (::GSettings* settings /*none*/);
void base::SettingsBase::apply () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_apply;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// void g_settings_bind (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, GSettingsBindFlags flags);
// void g_settings_bind (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, ::GSettingsBindFlags flags);
void base::SettingsBase::bind (const gi::cstring_v key, GObject::Object object, const gi::cstring_v property, Gio::SettingsBindFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_bind;
  auto flags_to_c = gi::unwrap (flags);
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GObject*) (object_to_c), (const char*) (property_to_c), (::GSettingsBindFlags) (flags_to_c));
}

// void g_settings_bind_with_mapping (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping /*none*/, GSettingsBindSetMapping set_mapping /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void g_settings_bind_with_mapping (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, ::GSettingsBindFlags flags, Gio::SettingsBindGetMapping::cfunction_type get_mapping /*none*/, Gio::SettingsBindSetMapping::cfunction_type set_mapping /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
// IGNORE; not introspectable, callback misses closure info

// void g_settings_bind_writable (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, gboolean inverted);
// void g_settings_bind_writable (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, gboolean inverted);
void base::SettingsBase::bind_writable (const gi::cstring_v key, GObject::Object object, const gi::cstring_v property, gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key, ::GObject* object, const char* property, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_bind_writable;
  auto inverted_to_c = inverted;
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GObject*) (object_to_c), (const char*) (property_to_c), (gboolean) (inverted_to_c));
}

// GAction* /*full*/ g_settings_create_action (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GAction* /*full*/ g_settings_create_action (::GSettings* settings /*none*/, const char* key /*none*/);
Gio::Action base::SettingsBase::create_action (const gi::cstring_v key) noexcept
{
  typedef ::GAction* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_create_action;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_settings_delay (GSettings* settings /*none*/);
// void g_settings_delay (::GSettings* settings /*none*/);
void base::SettingsBase::delay () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_delay;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// void g_settings_get (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_settings_get (::GSettings* settings /*none*/, const char* key /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_get_boolean (GSettings* settings /*none*/, const gchar* key /*none*/);
// gboolean g_settings_get_boolean (::GSettings* settings /*none*/, const char* key /*none*/);
bool base::SettingsBase::get_boolean (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GSettings* /*full*/ g_settings_get_child (GSettings* settings /*none*/, const gchar* name /*none*/);
// ::GSettings* /*full*/ g_settings_get_child (::GSettings* settings /*none*/, const char* name /*none*/);
Gio::Settings base::SettingsBase::get_child (const gi::cstring_v name) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ g_settings_get_default_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full,nullable*/ g_settings_get_default_value (::GSettings* settings /*none*/, const char* key /*none*/);
GLib::Variant base::SettingsBase::get_default_value (const gi::cstring_v key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_default_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gdouble g_settings_get_double (GSettings* settings /*none*/, const gchar* key /*none*/);
// gdouble g_settings_get_double (::GSettings* settings /*none*/, const char* key /*none*/);
gdouble base::SettingsBase::get_double (const gi::cstring_v key) noexcept
{
  typedef gdouble (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gint g_settings_get_enum (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint g_settings_get_enum (::GSettings* settings /*none*/, const char* key /*none*/);
gint base::SettingsBase::get_enum (const gi::cstring_v key) noexcept
{
  typedef gint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_enum;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// guint g_settings_get_flags (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint g_settings_get_flags (::GSettings* settings /*none*/, const char* key /*none*/);
guint base::SettingsBase::get_flags (const gi::cstring_v key) noexcept
{
  typedef guint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_flags;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean g_settings_get_has_unapplied (GSettings* settings /*none*/);
// gboolean g_settings_get_has_unapplied (::GSettings* settings /*none*/);
bool base::SettingsBase::get_has_unapplied () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_has_unapplied;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()));
  return _temp_ret;
}

// gint g_settings_get_int (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint g_settings_get_int (::GSettings* settings /*none*/, const char* key /*none*/);
gint base::SettingsBase::get_int (const gi::cstring_v key) noexcept
{
  typedef gint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_int;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gint64 g_settings_get_int64 (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint64 g_settings_get_int64 (::GSettings* settings /*none*/, const char* key /*none*/);
gint64 base::SettingsBase::get_int64 (const gi::cstring_v key) noexcept
{
  typedef gint64 (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gpointer g_settings_get_mapped (GSettings* settings /*none*/, const gchar* key /*none*/, GSettingsGetMapping mapping /*none*/, gpointer user_data);
// void* g_settings_get_mapped (::GSettings* settings /*none*/, const char* key /*none*/, Gio::SettingsGetMapping::cfunction_type mapping /*none*/, void* user_data);
gpointer base::SettingsBase::get_mapped (const gi::cstring_v key, Gio::SettingsGetMapping mapping) noexcept
{
  typedef void* (*call_wrap_t) (::GSettings* settings, const char* key, Gio::SettingsGetMapping::cfunction_type mapping, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_mapped;
  auto mapping_wrap_ = mapping ? unwrap (std::move (mapping), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(mapping_wrap_)>::type> mapping_wrap__sp (mapping_wrap_);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (Gio::SettingsGetMapping::cfunction_type) (mapping_wrap_ ? &mapping_wrap_->wrapper : nullptr), (void*) (mapping_wrap_));
  return _temp_ret;
}

// GVariant* /*full*/ g_settings_get_range (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full*/ g_settings_get_range (::GSettings* settings /*none*/, const char* key /*none*/);
// IGNORE; deprecated

// gchar* /*full*/ g_settings_get_string (GSettings* settings /*none*/, const gchar* key /*none*/);
// char* /*full*/ g_settings_get_string (::GSettings* settings /*none*/, const char* key /*none*/);
gi::cstring base::SettingsBase::get_string (const gi::cstring_v key) noexcept
{
  typedef char* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_settings_get_strv (GSettings* settings /*none*/, const gchar* key /*none*/);
// char** /*full*/ g_settings_get_strv (::GSettings* settings /*none*/, const char* key /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::SettingsBase::get_strv (const gi::cstring_v key) noexcept
{
  typedef char** (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_strv;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// guint g_settings_get_uint (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint g_settings_get_uint (::GSettings* settings /*none*/, const char* key /*none*/);
guint base::SettingsBase::get_uint (const gi::cstring_v key) noexcept
{
  typedef guint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_uint;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// guint64 g_settings_get_uint64 (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint64 g_settings_get_uint64 (::GSettings* settings /*none*/, const char* key /*none*/);
guint64 base::SettingsBase::get_uint64 (const gi::cstring_v key) noexcept
{
  typedef guint64 (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* /*full,nullable*/ g_settings_get_user_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full,nullable*/ g_settings_get_user_value (::GSettings* settings /*none*/, const char* key /*none*/);
GLib::Variant base::SettingsBase::get_user_value (const gi::cstring_v key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_user_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ g_settings_get_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full*/ g_settings_get_value (::GSettings* settings /*none*/, const char* key /*none*/);
GLib::Variant base::SettingsBase::get_value (const gi::cstring_v key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_settings_is_writable (GSettings* settings /*none*/, const gchar* name /*none*/);
// gboolean g_settings_is_writable (::GSettings* settings /*none*/, const char* name /*none*/);
bool base::SettingsBase::is_writable (const gi::cstring_v name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_is_writable;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gchar** /*full*/ g_settings_list_children (GSettings* settings /*none*/);
// char** /*full*/ g_settings_list_children (::GSettings* settings /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::SettingsBase::list_children () noexcept
{
  typedef char** (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_list_children;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_settings_list_keys (GSettings* settings /*none*/);
// char** /*full*/ g_settings_list_keys (::GSettings* settings /*none*/);
// IGNORE; marked ignore

// gboolean g_settings_range_check (GSettings* settings /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// gboolean g_settings_range_check (::GSettings* settings /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
// IGNORE; deprecated

// void g_settings_reset (GSettings* settings /*none*/, const gchar* key /*none*/);
// void g_settings_reset (::GSettings* settings /*none*/, const char* key /*none*/);
void base::SettingsBase::reset (const gi::cstring_v key) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_reset;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

// void g_settings_revert (GSettings* settings /*none*/);
// void g_settings_revert (::GSettings* settings /*none*/);
void base::SettingsBase::revert () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_revert;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// gboolean g_settings_set (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gboolean g_settings_set (::GSettings* settings /*none*/, const char* key /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_set_boolean (GSettings* settings /*none*/, const gchar* key /*none*/, gboolean value);
// gboolean g_settings_set_boolean (::GSettings* settings /*none*/, const char* key /*none*/, gboolean value);
bool base::SettingsBase::set_boolean (const gi::cstring_v key, gboolean value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_boolean;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gboolean) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_double (GSettings* settings /*none*/, const gchar* key /*none*/, gdouble value);
// gboolean g_settings_set_double (::GSettings* settings /*none*/, const char* key /*none*/, gdouble value);
bool base::SettingsBase::set_double (const gi::cstring_v key, gdouble value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_enum (GSettings* settings /*none*/, const gchar* key /*none*/, gint value);
// gboolean g_settings_set_enum (::GSettings* settings /*none*/, const char* key /*none*/, gint value);
bool base::SettingsBase::set_enum (const gi::cstring_v key, gint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_enum;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_flags (GSettings* settings /*none*/, const gchar* key /*none*/, guint value);
// gboolean g_settings_set_flags (::GSettings* settings /*none*/, const char* key /*none*/, guint value);
bool base::SettingsBase::set_flags (const gi::cstring_v key, guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_flags;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_int (GSettings* settings /*none*/, const gchar* key /*none*/, gint value);
// gboolean g_settings_set_int (::GSettings* settings /*none*/, const char* key /*none*/, gint value);
bool base::SettingsBase::set_int (const gi::cstring_v key, gint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_int;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_int64 (GSettings* settings /*none*/, const gchar* key /*none*/, gint64 value);
// gboolean g_settings_set_int64 (::GSettings* settings /*none*/, const char* key /*none*/, gint64 value);
bool base::SettingsBase::set_int64 (const gi::cstring_v key, gint64 value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_int64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint64) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_string (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// gboolean g_settings_set_string (::GSettings* settings /*none*/, const char* key /*none*/, const char* value /*none*/);
bool base::SettingsBase::set_string (const gi::cstring_v key, const gi::cstring_v value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_string;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_strv (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* const* value /*none,nullable*/);
// gboolean g_settings_set_strv (::GSettings* settings /*none*/, const char* key /*none*/, const char** value /*none,nullable*/);
bool base::SettingsBase::set_strv (const gi::cstring_v key, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, const char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_strv;
  auto value_w = unwrap (std::move(value), gi::transfer_none);
  auto value_to_c = value_w;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (const char**) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_uint (GSettings* settings /*none*/, const gchar* key /*none*/, guint value);
// gboolean g_settings_set_uint (::GSettings* settings /*none*/, const char* key /*none*/, guint value);
bool base::SettingsBase::set_uint (const gi::cstring_v key, guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_uint;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_uint64 (GSettings* settings /*none*/, const gchar* key /*none*/, guint64 value);
// gboolean g_settings_set_uint64 (::GSettings* settings /*none*/, const char* key /*none*/, guint64 value);
bool base::SettingsBase::set_uint64 (const gi::cstring_v key, guint64 value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_uint64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint64) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_value (GSettings* settings /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// gboolean g_settings_set_value (::GSettings* settings /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
bool base::SettingsBase::set_value (const gi::cstring_v key, GLib::Variant value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c));
  return _temp_ret;
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settings_extra_def_impl.hpp>)
#include <gio/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settings_extra_impl.hpp>)
#include <gio/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SettingsClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSettingsClass *methods = (::GSettingsClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (const gi::cstring_v key), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::changed_>;
  if (init_data.writable_change_event) methods->writable_change_event = (decltype (methods->writable_change_event)) detail::method_wrapper<self, bool (*) (::GQuark key), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::writable_change_event_>;
  if (init_data.writable_changed) methods->writable_changed = (decltype (methods->writable_changed)) detail::method_wrapper<self, void (*) (const gi::cstring_v key), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::writable_changed_>;
}

// gboolean Settings::change_event (GSettings* settings /*none*/, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings /*none*/, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent keys in pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::changed (::GSettings* settings /*none*/, const char* key /*none*/);
void SettingsClass::changed_ (const gi::cstring_v key) noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

// gboolean Settings::writable_change_event (GSettings* settings /*none*/, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings /*none*/, ::GQuark key);
bool SettingsClass::writable_change_event_ (::GQuark key) noexcept
{
  if (!get_struct_()->writable_change_event) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSettings* settings, ::GQuark key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writable_change_event;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (::GQuark) (key_to_c));
  return _temp_ret;
}

// void Settings::writable_changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::writable_changed (::GSettings* settings /*none*/, const char* key /*none*/);
void SettingsClass::writable_changed_ (const gi::cstring_v key) noexcept
{
  if (!get_struct_()->writable_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writable_changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
