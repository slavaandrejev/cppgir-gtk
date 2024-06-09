// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROPERTYINFO_IMPL_HPP_
#define _GI_GIO_DBUSPROPERTYINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusPropertyInfo* obj) { return (gint) obj->ref_count; }
// gint DBusPropertyInfo::ref_count (const ::GDBusPropertyInfo* obj /*none*/);
// gint DBusPropertyInfo::ref_count (const ::GDBusPropertyInfo* obj /*none*/);
gint base::DBusPropertyInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusPropertyInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusPropertyInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusPropertyInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusPropertyInfo::ref_count (::GDBusPropertyInfo* obj /*none*/, gint _value);
// void DBusPropertyInfo::ref_count (::GDBusPropertyInfo* obj /*none*/, gint _value);
void base::DBusPropertyInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusPropertyInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusPropertyInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_name_get (const ::GDBusPropertyInfo* obj) { return (char*) obj->name; }
// char* /*none*/ DBusPropertyInfo::name (const ::GDBusPropertyInfo* obj /*none*/);
// char* /*none*/ DBusPropertyInfo::name (const ::GDBusPropertyInfo* obj /*none*/);
gi::cstring_v base::DBusPropertyInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusPropertyInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusPropertyInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_signature_get (const ::GDBusPropertyInfo* obj) { return (char*) obj->signature; }
// char* /*none*/ DBusPropertyInfo::signature (const ::GDBusPropertyInfo* obj /*none*/);
// char* /*none*/ DBusPropertyInfo::signature (const ::GDBusPropertyInfo* obj /*none*/);
gi::cstring_v base::DBusPropertyInfoBase::signature_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusPropertyInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signature_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusPropertyInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GDBusPropertyInfoFlags _field_flags_get (const ::GDBusPropertyInfo* obj) { return (::GDBusPropertyInfoFlags) obj->flags; }
// ::GDBusPropertyInfoFlags DBusPropertyInfo::flags (const ::GDBusPropertyInfo* obj /*none*/);
// ::GDBusPropertyInfoFlags DBusPropertyInfo::flags (const ::GDBusPropertyInfo* obj /*none*/);
Gio::DBusPropertyInfoFlags base::DBusPropertyInfoBase::flags_ () const noexcept
{
  typedef ::GDBusPropertyInfoFlags (*call_wrap_t) (const ::GDBusPropertyInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusPropertyInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GDBusPropertyInfo* obj, ::GDBusPropertyInfoFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  DBusPropertyInfo::flags (::GDBusPropertyInfo* obj /*none*/, ::GDBusPropertyInfoFlags _value);
// void DBusPropertyInfo::flags (::GDBusPropertyInfo* obj /*none*/, ::GDBusPropertyInfoFlags _value);
void base::DBusPropertyInfoBase::flags_ (Gio::DBusPropertyInfoFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusPropertyInfo* obj, ::GDBusPropertyInfoFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GDBusPropertyInfo*) (gobj_()), (::GDBusPropertyInfoFlags) (_value_to_c));
}

// GDBusPropertyInfo* /*full*/ g_dbus_property_info_ref (GDBusPropertyInfo* info /*none*/);
// ::GDBusPropertyInfo* /*full*/ g_dbus_property_info_ref (::GDBusPropertyInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_property_info_unref (GDBusPropertyInfo* info /*none*/);
// void g_dbus_property_info_unref (::GDBusPropertyInfo* info /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbuspropertyinfo_extra_def_impl.hpp>)
#include <gio/dbuspropertyinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbuspropertyinfo_extra_impl.hpp>)
#include <gio/dbuspropertyinfo_extra_impl.hpp>
#endif
#endif

#endif
