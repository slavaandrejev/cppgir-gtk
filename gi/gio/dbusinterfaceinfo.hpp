// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACEINFO_HPP_
#define _GI_GIO_DBUSINTERFACEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo_Ref;
class DBusMethodInfo;
class DBusMethodInfo_Ref;
class DBusPropertyInfo;
class DBusPropertyInfo_Ref;
class DBusSignalInfo;
class DBusSignalInfo_Ref;

class DBusInterfaceInfo;

namespace base {


#define GI_GIO_DBUSINTERFACEINFO_BASE base::DBusInterfaceInfoBase
class DBusInterfaceInfoBase : public gi::detail::GBoxedWrapperBase<DBusInterfaceInfoBase, ::GDBusInterfaceInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusInterfaceInfoBase, ::GDBusInterfaceInfo> super_type;
public:

DBusInterfaceInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_info_get_type(); } 

// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj /*none*/);
// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj /*none*/, gint _value);
// void DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj /*none*/);
// char* /*none*/ DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// void g_dbus_interface_info_cache_build (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_cache_build (::GDBusInterfaceInfo* info /*none*/);
GI_INLINE_DECL void cache_build () noexcept;

// void g_dbus_interface_info_cache_release (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_cache_release (::GDBusInterfaceInfo* info /*none*/);
GI_INLINE_DECL void cache_release () noexcept;

// void g_dbus_interface_info_generate_xml (GDBusInterfaceInfo* info /*none*/, guint indent, GString* string_builder /*none*/);
// void g_dbus_interface_info_generate_xml (::GDBusInterfaceInfo* info /*none*/, guint indent, ::GString* string_builder /*none*/);
GI_INLINE_DECL void generate_xml (guint indent, GLib::String_Ref string_builder) noexcept;

// GDBusMethodInfo* /*none,nullable*/ g_dbus_interface_info_lookup_method (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusMethodInfo* /*none,nullable*/ g_dbus_interface_info_lookup_method (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::DBusMethodInfo_Ref lookup_method (const gi::cstring_v name) noexcept;

// GDBusPropertyInfo* /*none,nullable*/ g_dbus_interface_info_lookup_property (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusPropertyInfo* /*none,nullable*/ g_dbus_interface_info_lookup_property (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::DBusPropertyInfo_Ref lookup_property (const gi::cstring_v name) noexcept;

// GDBusSignalInfo* /*none,nullable*/ g_dbus_interface_info_lookup_signal (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusSignalInfo* /*none,nullable*/ g_dbus_interface_info_lookup_signal (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::DBusSignalInfo_Ref lookup_signal (const gi::cstring_v name) noexcept;

// GDBusInterfaceInfo* /*full*/ g_dbus_interface_info_ref (GDBusInterfaceInfo* info /*none*/);
// ::GDBusInterfaceInfo* /*full*/ g_dbus_interface_info_ref (::GDBusInterfaceInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_interface_info_unref (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_unref (::GDBusInterfaceInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra_def.hpp>)
#include <gio/dbusinterfaceinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra.hpp>)
#include <gio/dbusinterfaceinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo_Ref;

class DBusInterfaceInfo : public gi::detail::GBoxedWrapper<DBusInterfaceInfo, ::GDBusInterfaceInfo, GI_GIO_DBUSINTERFACEINFO_BASE, DBusInterfaceInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusInterfaceInfo, ::GDBusInterfaceInfo, GI_GIO_DBUSINTERFACEINFO_BASE, DBusInterfaceInfo_Ref> super_type; using super_type::super_type; };


class DBusInterfaceInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusInterfaceInfo, ::GDBusInterfaceInfo, GI_GIO_DBUSINTERFACEINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusInterfaceInfo, ::GDBusInterfaceInfo, GI_GIO_DBUSINTERFACEINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterfaceInfo>
{ typedef Gio::DBusInterfaceInfo type; }; 

} // namespace repository

} // namespace gi

#endif
