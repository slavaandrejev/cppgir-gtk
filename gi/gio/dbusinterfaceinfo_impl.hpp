// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACEINFO_IMPL_HPP_
#define _GI_GIO_DBUSINTERFACEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusInterfaceInfo* obj) { return (gint) obj->ref_count; }
// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj /*none*/);
// gint DBusInterfaceInfo::ref_count (const ::GDBusInterfaceInfo* obj /*none*/);
gint base::DBusInterfaceInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusInterfaceInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusInterfaceInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusInterfaceInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj /*none*/, gint _value);
// void DBusInterfaceInfo::ref_count (::GDBusInterfaceInfo* obj /*none*/, gint _value);
void base::DBusInterfaceInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_name_get (const ::GDBusInterfaceInfo* obj) { return (char*) obj->name; }
// char* /*none*/ DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj /*none*/);
// char* /*none*/ DBusInterfaceInfo::name (const ::GDBusInterfaceInfo* obj /*none*/);
gi::cstring_v base::DBusInterfaceInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusInterfaceInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusInterfaceInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_dbus_interface_info_cache_build (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_cache_build (::GDBusInterfaceInfo* info /*none*/);
void base::DBusInterfaceInfoBase::cache_build () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_cache_build;
  call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()));
}

// void g_dbus_interface_info_cache_release (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_cache_release (::GDBusInterfaceInfo* info /*none*/);
void base::DBusInterfaceInfoBase::cache_release () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_cache_release;
  call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()));
}

// void g_dbus_interface_info_generate_xml (GDBusInterfaceInfo* info /*none*/, guint indent, GString* string_builder /*none*/);
// void g_dbus_interface_info_generate_xml (::GDBusInterfaceInfo* info /*none*/, guint indent, ::GString* string_builder /*none*/);
void base::DBusInterfaceInfoBase::generate_xml (guint indent, GLib::String_Ref string_builder) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceInfo* info, guint indent, ::GString* string_builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_generate_xml;
  auto string_builder_to_c = gi::unwrap (string_builder, gi::transfer_none);
  auto indent_to_c = indent;
  call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()), (guint) (indent_to_c), (::GString*) (string_builder_to_c));
}

// GDBusMethodInfo* /*none,nullable*/ g_dbus_interface_info_lookup_method (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusMethodInfo* /*none,nullable*/ g_dbus_interface_info_lookup_method (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
Gio::DBusMethodInfo_Ref base::DBusInterfaceInfoBase::lookup_method (const gi::cstring_v name) noexcept
{
  typedef ::GDBusMethodInfo* (*call_wrap_t) (::GDBusInterfaceInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_lookup_method;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusPropertyInfo* /*none,nullable*/ g_dbus_interface_info_lookup_property (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusPropertyInfo* /*none,nullable*/ g_dbus_interface_info_lookup_property (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
Gio::DBusPropertyInfo_Ref base::DBusInterfaceInfoBase::lookup_property (const gi::cstring_v name) noexcept
{
  typedef ::GDBusPropertyInfo* (*call_wrap_t) (::GDBusInterfaceInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_lookup_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusSignalInfo* /*none,nullable*/ g_dbus_interface_info_lookup_signal (GDBusInterfaceInfo* info /*none*/, const gchar* name /*none*/);
// ::GDBusSignalInfo* /*none,nullable*/ g_dbus_interface_info_lookup_signal (::GDBusInterfaceInfo* info /*none*/, const char* name /*none*/);
Gio::DBusSignalInfo_Ref base::DBusInterfaceInfoBase::lookup_signal (const gi::cstring_v name) noexcept
{
  typedef ::GDBusSignalInfo* (*call_wrap_t) (::GDBusInterfaceInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_info_lookup_signal;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusInterfaceInfo* /*full*/ g_dbus_interface_info_ref (GDBusInterfaceInfo* info /*none*/);
// ::GDBusInterfaceInfo* /*full*/ g_dbus_interface_info_ref (::GDBusInterfaceInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_interface_info_unref (GDBusInterfaceInfo* info /*none*/);
// void g_dbus_interface_info_unref (::GDBusInterfaceInfo* info /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra_def_impl.hpp>)
#include <gio/dbusinterfaceinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceinfo_extra_impl.hpp>)
#include <gio/dbusinterfaceinfo_extra_impl.hpp>
#endif
#endif

#endif
