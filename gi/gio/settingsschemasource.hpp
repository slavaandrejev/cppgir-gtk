// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSSCHEMASOURCE_HPP_
#define _GI_GIO_SETTINGSSCHEMASOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SettingsSchema;
class SettingsSchemaSource_Ref;
class SettingsSchema_Ref;

class SettingsSchemaSource;

namespace base {


#define GI_GIO_SETTINGSSCHEMASOURCE_BASE base::SettingsSchemaSourceBase
class SettingsSchemaSourceBase : public gi::detail::GBoxedWrapperBase<SettingsSchemaSourceBase, ::GSettingsSchemaSource>
{
typedef gi::detail::GBoxedWrapperBase<SettingsSchemaSourceBase, ::GSettingsSchemaSource> super_type;
public:

SettingsSchemaSourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_settings_schema_source_get_type(); } 

// GSettingsSchemaSource* /*full*/ g_settings_schema_source_new_from_directory (const gchar* directory /*none*/, GSettingsSchemaSource* parent /*none,nullable*/, gboolean trusted, GError ** error);
// ::GSettingsSchemaSource* /*full*/ g_settings_schema_source_new_from_directory (const char* directory /*none*/, ::GSettingsSchemaSource* parent /*none,nullable*/, gboolean trusted, GError ** error);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const gi::cstring_v directory, Gio::SettingsSchemaSource_Ref parent, gboolean trusted);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const gi::cstring_v directory, gboolean trusted);
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const gi::cstring_v directory, Gio::SettingsSchemaSource_Ref parent, gboolean trusted, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::SettingsSchemaSource new_from_directory (const gi::cstring_v directory, gboolean trusted, GLib::Error * _error) noexcept;

// void g_settings_schema_source_list_schemas (GSettingsSchemaSource* source /*none*/, gboolean recursive, gchar*** non_relocatable /*full,out*/, gchar*** relocatable /*full,out*/);
// void g_settings_schema_source_list_schemas (::GSettingsSchemaSource* source /*none*/, gboolean recursive, char*** non_relocatable /*full,out*/, char*** relocatable /*full,out*/);
GI_INLINE_DECL void list_schemas (gboolean recursive, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & non_relocatable, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & relocatable) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> list_schemas (gboolean recursive) noexcept;

// GSettingsSchema* /*full,nullable*/ g_settings_schema_source_lookup (GSettingsSchemaSource* source /*none*/, const gchar* schema_id /*none*/, gboolean recursive);
// ::GSettingsSchema* /*full,nullable*/ g_settings_schema_source_lookup (::GSettingsSchemaSource* source /*none*/, const char* schema_id /*none*/, gboolean recursive);
GI_INLINE_DECL Gio::SettingsSchema lookup (const gi::cstring_v schema_id, gboolean recursive) noexcept;

// GSettingsSchemaSource* /*full*/ g_settings_schema_source_ref (GSettingsSchemaSource* source /*none*/);
// ::GSettingsSchemaSource* /*full*/ g_settings_schema_source_ref (::GSettingsSchemaSource* source /*none*/);
// IGNORE; marked ignore

// void g_settings_schema_source_unref (GSettingsSchemaSource* source /*none*/);
// void g_settings_schema_source_unref (::GSettingsSchemaSource* source /*none*/);
// IGNORE; marked ignore

// GSettingsSchemaSource* /*none,nullable*/ g_settings_schema_source_get_default ();
// ::GSettingsSchemaSource* /*none,nullable*/ g_settings_schema_source_get_default ();
static GI_INLINE_DECL Gio::SettingsSchemaSource_Ref get_default () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra_def.hpp>)
#include <gio/settingsschemasource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsschemasource_extra.hpp>)
#include <gio/settingsschemasource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsSchemaSource_Ref;

class SettingsSchemaSource : public gi::detail::GBoxedWrapper<SettingsSchemaSource, ::GSettingsSchemaSource, GI_GIO_SETTINGSSCHEMASOURCE_BASE, SettingsSchemaSource_Ref>
{ typedef gi::detail::GBoxedWrapper<SettingsSchemaSource, ::GSettingsSchemaSource, GI_GIO_SETTINGSSCHEMASOURCE_BASE, SettingsSchemaSource_Ref> super_type; using super_type::super_type; };


class SettingsSchemaSource_Ref : public gi::detail::GBoxedRefWrapper<SettingsSchemaSource, ::GSettingsSchemaSource, GI_GIO_SETTINGSSCHEMASOURCE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<SettingsSchemaSource, ::GSettingsSchemaSource, GI_GIO_SETTINGSSCHEMASOURCE_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsSchemaSource>
{ typedef Gio::SettingsSchemaSource type; }; 

} // namespace repository

} // namespace gi

#endif
