// AUTO-GENERATED

#ifndef _GI_GIO_DBUSNODEINFO_HPP_
#define _GI_GIO_DBUSNODEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class DBusNodeInfo_Ref;

class DBusNodeInfo;

namespace base {


#define GI_GIO_DBUSNODEINFO_BASE base::DBusNodeInfoBase
class DBusNodeInfoBase : public gi::detail::GBoxedWrapperBase<DBusNodeInfoBase, ::GDBusNodeInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusNodeInfoBase, ::GDBusNodeInfo> super_type;
public:

DBusNodeInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_node_info_get_type(); } 

// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj /*none*/);
// gint DBusNodeInfo::ref_count (const ::GDBusNodeInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusNodeInfo::ref_count (::GDBusNodeInfo* obj /*none*/, gint _value);
// void DBusNodeInfo::ref_count (::GDBusNodeInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusNodeInfo::path (const ::GDBusNodeInfo* obj /*none*/);
// char* /*none*/ DBusNodeInfo::path (const ::GDBusNodeInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v path_ () const noexcept;

// GDBusNodeInfo* /*full*/ g_dbus_node_info_new_for_xml (const gchar* xml_data /*none*/, GError ** error);
// ::GDBusNodeInfo* /*full*/ g_dbus_node_info_new_for_xml (const char* xml_data /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusNodeInfo new_for_xml (const gi::cstring_v xml_data);
static GI_INLINE_DECL Gio::DBusNodeInfo new_for_xml (const gi::cstring_v xml_data, GLib::Error * _error) noexcept;

// void g_dbus_node_info_generate_xml (GDBusNodeInfo* info /*none*/, guint indent, GString* string_builder /*none*/);
// void g_dbus_node_info_generate_xml (::GDBusNodeInfo* info /*none*/, guint indent, ::GString* string_builder /*none*/);
GI_INLINE_DECL void generate_xml (guint indent, GLib::String_Ref string_builder) noexcept;

// GDBusInterfaceInfo* /*none,nullable*/ g_dbus_node_info_lookup_interface (GDBusNodeInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusInterfaceInfo* /*none,nullable*/ g_dbus_node_info_lookup_interface (::GDBusNodeInfo* info /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref lookup_interface (const gi::cstring_v name) noexcept;

// GDBusNodeInfo* /*full*/ g_dbus_node_info_ref (GDBusNodeInfo* info /*none*/);
// ::GDBusNodeInfo* /*full*/ g_dbus_node_info_ref (::GDBusNodeInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_node_info_unref (GDBusNodeInfo* info /*none*/);
// void g_dbus_node_info_unref (::GDBusNodeInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra_def.hpp>)
#include <gio/dbusnodeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusnodeinfo_extra.hpp>)
#include <gio/dbusnodeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusNodeInfo_Ref;

class DBusNodeInfo : public gi::detail::GBoxedWrapper<DBusNodeInfo, ::GDBusNodeInfo, GI_GIO_DBUSNODEINFO_BASE, DBusNodeInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusNodeInfo, ::GDBusNodeInfo, GI_GIO_DBUSNODEINFO_BASE, DBusNodeInfo_Ref> super_type; using super_type::super_type; };


class DBusNodeInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusNodeInfo, ::GDBusNodeInfo, GI_GIO_DBUSNODEINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusNodeInfo, ::GDBusNodeInfo, GI_GIO_DBUSNODEINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusNodeInfo>
{ typedef Gio::DBusNodeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
