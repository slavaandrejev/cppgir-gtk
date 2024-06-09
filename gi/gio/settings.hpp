// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGS_HPP_
#define _GI_GIO_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;
class SettingsBackend;
class SettingsSchema;
class SettingsSchema_Ref;

class Settings;

namespace base {


#define GI_GIO_SETTINGS_BASE base::SettingsBase
class SettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_settings_get_type(); } 

// GSettings* /*full*/ g_settings_new (const gchar* schema_id /*none*/);
// ::GSettings* /*full*/ g_settings_new (const char* schema_id /*none*/);
static GI_INLINE_DECL Gio::Settings new_ (const gi::cstring_v schema_id) noexcept;

// GSettings* /*full*/ g_settings_new_full (GSettingsSchema* schema /*none*/, GSettingsBackend* backend /*none,nullable*/, const gchar* path /*none,nullable*/);
// ::GSettings* /*full*/ g_settings_new_full (::GSettingsSchema* schema /*none*/, ::GSettingsBackend* backend /*none,nullable*/, const char* path /*none,nullable*/);
static GI_INLINE_DECL Gio::Settings new_full (Gio::SettingsSchema_Ref schema, Gio::SettingsBackend backend, const gi::cstring_v path) noexcept;
static GI_INLINE_DECL Gio::Settings new_full (Gio::SettingsSchema_Ref schema) noexcept;

// GSettings* /*full*/ g_settings_new_with_backend (const gchar* schema_id /*none*/, GSettingsBackend* backend /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_backend (const char* schema_id /*none*/, ::GSettingsBackend* backend /*none*/);
static GI_INLINE_DECL Gio::Settings new_with_backend (const gi::cstring_v schema_id, Gio::SettingsBackend backend) noexcept;

// GSettings* /*full*/ g_settings_new_with_backend_and_path (const gchar* schema_id /*none*/, GSettingsBackend* backend /*none*/, const gchar* path /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_backend_and_path (const char* schema_id /*none*/, ::GSettingsBackend* backend /*none*/, const char* path /*none*/);
static GI_INLINE_DECL Gio::Settings new_with_backend_and_path (const gi::cstring_v schema_id, Gio::SettingsBackend backend, const gi::cstring_v path) noexcept;

// GSettings* /*full*/ g_settings_new_with_path (const gchar* schema_id /*none*/, const gchar* path /*none*/);
// ::GSettings* /*full*/ g_settings_new_with_path (const char* schema_id /*none*/, const char* path /*none*/);
static GI_INLINE_DECL Gio::Settings new_with_path (const gi::cstring_v schema_id, const gi::cstring_v path) noexcept;

// const gchar* const* /*none*/ g_settings_list_relocatable_schemas ();
// const char** /*none*/ g_settings_list_relocatable_schemas ();
// IGNORE; deprecated

// const gchar* const* /*none*/ g_settings_list_schemas ();
// const char** /*none*/ g_settings_list_schemas ();
// IGNORE; deprecated

// void g_settings_sync ();
// void g_settings_sync ();
static GI_INLINE_DECL void sync () noexcept;

// void g_settings_unbind (gpointer object /*none*/, const gchar* property /*none*/);
// void g_settings_unbind (::GObject* object /*none*/, const char* property /*none*/);
static GI_INLINE_DECL void unbind (GObject::Object object, const gi::cstring_v property) noexcept;

// void g_settings_apply (GSettings* settings /*none*/);
// void g_settings_apply (::GSettings* settings /*none*/);
GI_INLINE_DECL void apply () noexcept;

// void g_settings_bind (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, GSettingsBindFlags flags);
// void g_settings_bind (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, ::GSettingsBindFlags flags);
GI_INLINE_DECL void bind (const gi::cstring_v key, GObject::Object object, const gi::cstring_v property, Gio::SettingsBindFlags flags) noexcept;

// void g_settings_bind_with_mapping (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping /*none*/, GSettingsBindSetMapping set_mapping /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void g_settings_bind_with_mapping (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, ::GSettingsBindFlags flags, Gio::SettingsBindGetMapping::cfunction_type get_mapping /*none*/, Gio::SettingsBindSetMapping::cfunction_type set_mapping /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
// IGNORE; not introspectable, callback misses closure info

// void g_settings_bind_writable (GSettings* settings /*none*/, const gchar* key /*none*/, gpointer object /*none*/, const gchar* property /*none*/, gboolean inverted);
// void g_settings_bind_writable (::GSettings* settings /*none*/, const char* key /*none*/, ::GObject* object /*none*/, const char* property /*none*/, gboolean inverted);
GI_INLINE_DECL void bind_writable (const gi::cstring_v key, GObject::Object object, const gi::cstring_v property, gboolean inverted) noexcept;

// GAction* /*full*/ g_settings_create_action (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GAction* /*full*/ g_settings_create_action (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL Gio::Action create_action (const gi::cstring_v key) noexcept;

// void g_settings_delay (GSettings* settings /*none*/);
// void g_settings_delay (::GSettings* settings /*none*/);
GI_INLINE_DECL void delay () noexcept;

// void g_settings_get (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_settings_get (::GSettings* settings /*none*/, const char* key /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_get_boolean (GSettings* settings /*none*/, const gchar* key /*none*/);
// gboolean g_settings_get_boolean (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool get_boolean (const gi::cstring_v key) noexcept;

// GSettings* /*full*/ g_settings_get_child (GSettings* settings /*none*/, const gchar* name /*none*/);
// ::GSettings* /*full*/ g_settings_get_child (::GSettings* settings /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::Settings get_child (const gi::cstring_v name) noexcept;

// GVariant* /*full,nullable*/ g_settings_get_default_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full,nullable*/ g_settings_get_default_value (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL GLib::Variant get_default_value (const gi::cstring_v key) noexcept;

// gdouble g_settings_get_double (GSettings* settings /*none*/, const gchar* key /*none*/);
// gdouble g_settings_get_double (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gdouble get_double (const gi::cstring_v key) noexcept;

// gint g_settings_get_enum (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint g_settings_get_enum (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gint get_enum (const gi::cstring_v key) noexcept;

// guint g_settings_get_flags (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint g_settings_get_flags (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL guint get_flags (const gi::cstring_v key) noexcept;

// gboolean g_settings_get_has_unapplied (GSettings* settings /*none*/);
// gboolean g_settings_get_has_unapplied (::GSettings* settings /*none*/);
GI_INLINE_DECL bool get_has_unapplied () noexcept;

// gint g_settings_get_int (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint g_settings_get_int (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gint get_int (const gi::cstring_v key) noexcept;

// gint64 g_settings_get_int64 (GSettings* settings /*none*/, const gchar* key /*none*/);
// gint64 g_settings_get_int64 (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gint64 get_int64 (const gi::cstring_v key) noexcept;

// gpointer g_settings_get_mapped (GSettings* settings /*none*/, const gchar* key /*none*/, GSettingsGetMapping mapping /*none*/, gpointer user_data);
// void* g_settings_get_mapped (::GSettings* settings /*none*/, const char* key /*none*/, Gio::SettingsGetMapping::cfunction_type mapping /*none*/, void* user_data);
GI_INLINE_DECL gpointer get_mapped (const gi::cstring_v key, Gio::SettingsGetMapping mapping) noexcept;

// GVariant* /*full*/ g_settings_get_range (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full*/ g_settings_get_range (::GSettings* settings /*none*/, const char* key /*none*/);
// IGNORE; deprecated

// gchar* /*full*/ g_settings_get_string (GSettings* settings /*none*/, const gchar* key /*none*/);
// char* /*full*/ g_settings_get_string (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring get_string (const gi::cstring_v key) noexcept;

// gchar** /*full*/ g_settings_get_strv (GSettings* settings /*none*/, const gchar* key /*none*/);
// char** /*full*/ g_settings_get_strv (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_strv (const gi::cstring_v key) noexcept;

// guint g_settings_get_uint (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint g_settings_get_uint (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL guint get_uint (const gi::cstring_v key) noexcept;

// guint64 g_settings_get_uint64 (GSettings* settings /*none*/, const gchar* key /*none*/);
// guint64 g_settings_get_uint64 (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL guint64 get_uint64 (const gi::cstring_v key) noexcept;

// GVariant* /*full,nullable*/ g_settings_get_user_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full,nullable*/ g_settings_get_user_value (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL GLib::Variant get_user_value (const gi::cstring_v key) noexcept;

// GVariant* /*full*/ g_settings_get_value (GSettings* settings /*none*/, const gchar* key /*none*/);
// ::GVariant* /*full*/ g_settings_get_value (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL GLib::Variant get_value (const gi::cstring_v key) noexcept;

// gboolean g_settings_is_writable (GSettings* settings /*none*/, const gchar* name /*none*/);
// gboolean g_settings_is_writable (::GSettings* settings /*none*/, const char* name /*none*/);
GI_INLINE_DECL bool is_writable (const gi::cstring_v name) noexcept;

// gchar** /*full*/ g_settings_list_children (GSettings* settings /*none*/);
// char** /*full*/ g_settings_list_children (::GSettings* settings /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_children () noexcept;

// gchar** /*full*/ g_settings_list_keys (GSettings* settings /*none*/);
// char** /*full*/ g_settings_list_keys (::GSettings* settings /*none*/);
// IGNORE; marked ignore

// gboolean g_settings_range_check (GSettings* settings /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// gboolean g_settings_range_check (::GSettings* settings /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
// IGNORE; deprecated

// void g_settings_reset (GSettings* settings /*none*/, const gchar* key /*none*/);
// void g_settings_reset (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL void reset (const gi::cstring_v key) noexcept;

// void g_settings_revert (GSettings* settings /*none*/);
// void g_settings_revert (::GSettings* settings /*none*/);
GI_INLINE_DECL void revert () noexcept;

// gboolean g_settings_set (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gboolean g_settings_set (::GSettings* settings /*none*/, const char* key /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_set_boolean (GSettings* settings /*none*/, const gchar* key /*none*/, gboolean value);
// gboolean g_settings_set_boolean (::GSettings* settings /*none*/, const char* key /*none*/, gboolean value);
GI_INLINE_DECL bool set_boolean (const gi::cstring_v key, gboolean value) noexcept;

// gboolean g_settings_set_double (GSettings* settings /*none*/, const gchar* key /*none*/, gdouble value);
// gboolean g_settings_set_double (::GSettings* settings /*none*/, const char* key /*none*/, gdouble value);
GI_INLINE_DECL bool set_double (const gi::cstring_v key, gdouble value) noexcept;

// gboolean g_settings_set_enum (GSettings* settings /*none*/, const gchar* key /*none*/, gint value);
// gboolean g_settings_set_enum (::GSettings* settings /*none*/, const char* key /*none*/, gint value);
GI_INLINE_DECL bool set_enum (const gi::cstring_v key, gint value) noexcept;

// gboolean g_settings_set_flags (GSettings* settings /*none*/, const gchar* key /*none*/, guint value);
// gboolean g_settings_set_flags (::GSettings* settings /*none*/, const char* key /*none*/, guint value);
GI_INLINE_DECL bool set_flags (const gi::cstring_v key, guint value) noexcept;

// gboolean g_settings_set_int (GSettings* settings /*none*/, const gchar* key /*none*/, gint value);
// gboolean g_settings_set_int (::GSettings* settings /*none*/, const char* key /*none*/, gint value);
GI_INLINE_DECL bool set_int (const gi::cstring_v key, gint value) noexcept;

// gboolean g_settings_set_int64 (GSettings* settings /*none*/, const gchar* key /*none*/, gint64 value);
// gboolean g_settings_set_int64 (::GSettings* settings /*none*/, const char* key /*none*/, gint64 value);
GI_INLINE_DECL bool set_int64 (const gi::cstring_v key, gint64 value) noexcept;

// gboolean g_settings_set_string (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// gboolean g_settings_set_string (::GSettings* settings /*none*/, const char* key /*none*/, const char* value /*none*/);
GI_INLINE_DECL bool set_string (const gi::cstring_v key, const gi::cstring_v value) noexcept;

// gboolean g_settings_set_strv (GSettings* settings /*none*/, const gchar* key /*none*/, const gchar* const* value /*none,nullable*/);
// gboolean g_settings_set_strv (::GSettings* settings /*none*/, const char* key /*none*/, const char** value /*none,nullable*/);
GI_INLINE_DECL bool set_strv (const gi::cstring_v key, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> value) noexcept;

// gboolean g_settings_set_uint (GSettings* settings /*none*/, const gchar* key /*none*/, guint value);
// gboolean g_settings_set_uint (::GSettings* settings /*none*/, const char* key /*none*/, guint value);
GI_INLINE_DECL bool set_uint (const gi::cstring_v key, guint value) noexcept;

// gboolean g_settings_set_uint64 (GSettings* settings /*none*/, const gchar* key /*none*/, guint64 value);
// gboolean g_settings_set_uint64 (::GSettings* settings /*none*/, const char* key /*none*/, guint64 value);
GI_INLINE_DECL bool set_uint64 (const gi::cstring_v key, guint64 value) noexcept;

// gboolean g_settings_set_value (GSettings* settings /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// gboolean g_settings_set_value (::GSettings* settings /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL bool set_value (const gi::cstring_v key, GLib::Variant value) noexcept;

gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> property_backend()
{ return gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> (*this, "backend"); }
const gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> property_backend() const
{ return gi::property_proxy<Gio::SettingsBackend, base::SettingsBase> (*this, "backend"); }

gi::property_proxy<bool, base::SettingsBase> property_delay_apply()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "delay-apply"); }
const gi::property_proxy<bool, base::SettingsBase> property_delay_apply() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "delay-apply"); }

gi::property_proxy<bool, base::SettingsBase> property_has_unapplied()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "has-unapplied"); }
const gi::property_proxy<bool, base::SettingsBase> property_has_unapplied() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "has-unapplied"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_path()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "path"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_path() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "path"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_schema()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "schema"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_schema() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "schema"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_schema_id()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "schema-id"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_schema_id() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "schema-id"); }

gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> property_settings_schema()
{ return gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> (*this, "settings-schema"); }
const gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> property_settings_schema() const
{ return gi::property_proxy<Gio::SettingsSchema, base::SettingsBase> (*this, "settings-schema"); }

// (signal) gboolean change-event (gpointer keys /*none,nullable*/, gint n_keys);
// (signal) gboolean change-event (::GQuark* keys /*none,nullable*/, gint n_keys);
// SKIP; glib:signal in array parameter not supported

// (signal) void changed (gchar* key /*none*/);
// (signal) void changed (char* key /*none*/);
gi::signal_proxy<void(Gio::Settings, gi::cstring_v key)> signal_changed()
{ return gi::signal_proxy<void(Gio::Settings, gi::cstring_v key)> (*this, "changed"); }

// (signal) gboolean writable-change-event (guint key);
// (signal) gboolean writable-change-event (guint key);
gi::signal_proxy<bool(Gio::Settings, guint key)> signal_writable_change_event()
{ return gi::signal_proxy<bool(Gio::Settings, guint key)> (*this, "writable-change-event"); }

// (signal) void writable-changed (gchar* key /*none*/);
// (signal) void writable-changed (char* key /*none*/);
gi::signal_proxy<void(Gio::Settings, gi::cstring_v key)> signal_writable_changed()
{ return gi::signal_proxy<void(Gio::Settings, gi::cstring_v key)> (*this, "writable-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settings_extra_def.hpp>)
#include <gio/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settings_extra.hpp>)
#include <gio/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Settings : public GI_GIO_SETTINGS_BASE
{ typedef GI_GIO_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettings>
{ typedef Gio::Settings type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SettingsClassDef
{
typedef SettingsClassDef self;
public:
typedef Gio::Settings instance_type;
typedef ::GSettingsClass class_type;

using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(writable_change_event) = self;
using GI_MEMBER_CHECK_CONFLICT(writable_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Settings::change_event (GSettings* settings /*none*/, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings /*none*/, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent keys in pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::changed (::GSettings* settings /*none*/, const char* key /*none*/);
virtual void changed_ (const gi::cstring_v key) noexcept = 0;

// gboolean Settings::writable_change_event (GSettings* settings /*none*/, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings /*none*/, ::GQuark key);
virtual bool writable_change_event_ (::GQuark key) noexcept = 0;

// void Settings::writable_changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::writable_changed (::GSettings* settings /*none*/, const char* key /*none*/);
virtual void writable_changed_ (const gi::cstring_v key) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SettingsClass: public detail::ClassTemplate<Gio::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SettingsClassDef;
typedef SettingsClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Settings::change_event (GSettings* settings /*none*/, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings /*none*/, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent keys in pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::changed (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL void changed_ (const gi::cstring_v key) noexcept override;

// gboolean Settings::writable_change_event (GSettings* settings /*none*/, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings /*none*/, ::GQuark key);
GI_INLINE_DECL bool writable_change_event_ (::GQuark key) noexcept override;

// void Settings::writable_changed (GSettings* settings /*none*/, const gchar* key /*none*/);
// void Settings::writable_changed (::GSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL void writable_changed_ (const gi::cstring_v key) noexcept override;


};


struct SettingsClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SettingsClass, changed)
  GI_MEMBER_DEFINE(SettingsClass, writable_change_event)
  GI_MEMBER_DEFINE(SettingsClass, writable_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, writable_change_event),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, writable_changed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SettingsImpl = detail::ObjectImpl<Settings, internal::SettingsClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
