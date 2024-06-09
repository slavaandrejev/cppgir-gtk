// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMAKEY_HPP_
#define _GI_GIO_SETTINGSSCHEMAKEY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaKey_Ref;

class SettingsSchemaKey;

namespace base {


#define GI_GIO_SETTINGSSCHEMAKEY_BASE base::SettingsSchemaKeyBase
class SettingsSchemaKeyBase : public gi::detail::GBoxedWrapperBase<SettingsSchemaKeyBase, ::GSettingsSchemaKey>
{
typedef gi::detail::GBoxedWrapperBase<SettingsSchemaKeyBase, ::GSettingsSchemaKey> super_type;
public:

SettingsSchemaKeyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_key_get_type(); } 

// GVariant* /*full*/ g_settings_schema_key_get_default_value (GSettingsSchemaKey* key /*none*/);
// ::GVariant* /*full*/ g_settings_schema_key_get_default_value (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL GLib::Variant get_default_value () noexcept;

// const gchar* /*none,nullable*/ g_settings_schema_key_get_description (GSettingsSchemaKey* key /*none*/);
// const char* /*none,nullable*/ g_settings_schema_key_get_description (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// const gchar* /*none*/ g_settings_schema_key_get_name (GSettingsSchemaKey* key /*none*/);
// const char* /*none*/ g_settings_schema_key_get_name (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// GVariant* /*full*/ g_settings_schema_key_get_range (GSettingsSchemaKey* key /*none*/);
// ::GVariant* /*full*/ g_settings_schema_key_get_range (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL GLib::Variant get_range () noexcept;

// const gchar* /*none,nullable*/ g_settings_schema_key_get_summary (GSettingsSchemaKey* key /*none*/);
// const char* /*none,nullable*/ g_settings_schema_key_get_summary (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL gi::cstring_v get_summary () noexcept;

// const GVariantType* /*none*/ g_settings_schema_key_get_value_type (GSettingsSchemaKey* key /*none*/);
// const ::GVariantType* /*none*/ g_settings_schema_key_get_value_type (::GSettingsSchemaKey* key /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_value_type () noexcept;

// gboolean g_settings_schema_key_range_check (GSettingsSchemaKey* key /*none*/, GVariant* value /*none*/);
// gboolean g_settings_schema_key_range_check (::GSettingsSchemaKey* key /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL bool range_check (GLib::Variant value) noexcept;

// GSettingsSchemaKey* /*full*/ g_settings_schema_key_ref (GSettingsSchemaKey* key /*none*/);
// ::GSettingsSchemaKey* /*full*/ g_settings_schema_key_ref (::GSettingsSchemaKey* key /*none*/);
// IGNORE; marked ignore

// void g_settings_schema_key_unref (GSettingsSchemaKey* key /*none*/);
// void g_settings_schema_key_unref (::GSettingsSchemaKey* key /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra_def.hpp>)
#include <gio/settingsschemakey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemakey_extra.hpp>)
#include <gio/settingsschemakey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaKey_Ref;

class SettingsSchemaKey : public gi::detail::GBoxedWrapper<SettingsSchemaKey, ::GSettingsSchemaKey, GI_GIO_SETTINGSSCHEMAKEY_BASE, SettingsSchemaKey_Ref>
{ typedef gi::detail::GBoxedWrapper<SettingsSchemaKey, ::GSettingsSchemaKey, GI_GIO_SETTINGSSCHEMAKEY_BASE, SettingsSchemaKey_Ref> super_type; using super_type::super_type; };


class SettingsSchemaKey_Ref : public gi::detail::GBoxedRefWrapper<SettingsSchemaKey, ::GSettingsSchemaKey, GI_GIO_SETTINGSSCHEMAKEY_BASE>
{ typedef gi::detail::GBoxedRefWrapper<SettingsSchemaKey, ::GSettingsSchemaKey, GI_GIO_SETTINGSSCHEMAKEY_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchemaKey>
{ typedef Gio::SettingsSchemaKey type; }; 

} // namespace repository

} // namespace gi

#endif
