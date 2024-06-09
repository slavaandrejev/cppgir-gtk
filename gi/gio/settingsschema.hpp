// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMA_HPP_
#define _GI_GIO_SETTINGSSCHEMA_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaKey;
class SettingsSchemaKey_Ref;
class SettingsSchema_Ref;

class SettingsSchema;

namespace base {


#define GI_GIO_SETTINGSSCHEMA_BASE base::SettingsSchemaBase
class SettingsSchemaBase : public gi::detail::GBoxedWrapperBase<SettingsSchemaBase, ::GSettingsSchema>
{
typedef gi::detail::GBoxedWrapperBase<SettingsSchemaBase, ::GSettingsSchema> super_type;
public:

SettingsSchemaBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_get_type(); } 

// const gchar* /*none*/ g_settings_schema_get_id (GSettingsSchema* schema /*none*/);
// const char* /*none*/ g_settings_schema_get_id (::GSettingsSchema* schema /*none*/);
GI_INLINE_DECL gi::cstring_v get_id () noexcept;

// GSettingsSchemaKey* /*full*/ g_settings_schema_get_key (GSettingsSchema* schema /*none*/, const gchar* name /*none*/);
// ::GSettingsSchemaKey* /*full*/ g_settings_schema_get_key (::GSettingsSchema* schema /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::SettingsSchemaKey get_key (const gi::cstring_v name) noexcept;

// const gchar* /*none,nullable*/ g_settings_schema_get_path (GSettingsSchema* schema /*none*/);
// const char* /*none,nullable*/ g_settings_schema_get_path (::GSettingsSchema* schema /*none*/);
GI_INLINE_DECL gi::cstring_v get_path () noexcept;

// gboolean g_settings_schema_has_key (GSettingsSchema* schema /*none*/, const gchar* name /*none*/);
// gboolean g_settings_schema_has_key (::GSettingsSchema* schema /*none*/, const char* name /*none*/);
GI_INLINE_DECL bool has_key (const gi::cstring_v name) noexcept;

// gchar** /*full*/ g_settings_schema_list_children (GSettingsSchema* schema /*none*/);
// char** /*full*/ g_settings_schema_list_children (::GSettingsSchema* schema /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_children () noexcept;

// gchar** /*full*/ g_settings_schema_list_keys (GSettingsSchema* schema /*none*/);
// char** /*full*/ g_settings_schema_list_keys (::GSettingsSchema* schema /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_keys () noexcept;

// GSettingsSchema* /*full*/ g_settings_schema_ref (GSettingsSchema* schema /*none*/);
// ::GSettingsSchema* /*full*/ g_settings_schema_ref (::GSettingsSchema* schema /*none*/);
// IGNORE; marked ignore

// void g_settings_schema_unref (GSettingsSchema* schema /*none*/);
// void g_settings_schema_unref (::GSettingsSchema* schema /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra_def.hpp>)
#include <gio/settingsschema_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschema_extra.hpp>)
#include <gio/settingsschema_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchema_Ref;

class SettingsSchema : public gi::detail::GBoxedWrapper<SettingsSchema, ::GSettingsSchema, GI_GIO_SETTINGSSCHEMA_BASE, SettingsSchema_Ref>
{ typedef gi::detail::GBoxedWrapper<SettingsSchema, ::GSettingsSchema, GI_GIO_SETTINGSSCHEMA_BASE, SettingsSchema_Ref> super_type; using super_type::super_type; };


class SettingsSchema_Ref : public gi::detail::GBoxedRefWrapper<SettingsSchema, ::GSettingsSchema, GI_GIO_SETTINGSSCHEMA_BASE>
{ typedef gi::detail::GBoxedRefWrapper<SettingsSchema, ::GSettingsSchema, GI_GIO_SETTINGSSCHEMA_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchema>
{ typedef Gio::SettingsSchema type; }; 

} // namespace repository

} // namespace gi

#endif
