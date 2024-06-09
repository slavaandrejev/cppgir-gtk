// AUTO-GENERATED

#ifndef _GI_GIO_DBUSARGINFO_IMPL_HPP_
#define _GI_GIO_DBUSARGINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusArgInfo* obj) { return (gint) obj->ref_count; }
// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj /*none*/);
// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj /*none*/);
gint base::DBusArgInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusArgInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusArgInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusArgInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusArgInfo::ref_count (::GDBusArgInfo* obj /*none*/, gint _value);
// void DBusArgInfo::ref_count (::GDBusArgInfo* obj /*none*/, gint _value);
void base::DBusArgInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusArgInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusArgInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_name_get (const ::GDBusArgInfo* obj) { return (char*) obj->name; }
// char* /*none*/ DBusArgInfo::name (const ::GDBusArgInfo* obj /*none*/);
// char* /*none*/ DBusArgInfo::name (const ::GDBusArgInfo* obj /*none*/);
gi::cstring_v base::DBusArgInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusArgInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusArgInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_signature_get (const ::GDBusArgInfo* obj) { return (char*) obj->signature; }
// char* /*none*/ DBusArgInfo::signature (const ::GDBusArgInfo* obj /*none*/);
// char* /*none*/ DBusArgInfo::signature (const ::GDBusArgInfo* obj /*none*/);
gi::cstring_v base::DBusArgInfoBase::signature_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusArgInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signature_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusArgInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusArgInfo* /*full*/ g_dbus_arg_info_ref (GDBusArgInfo* info /*none*/);
// ::GDBusArgInfo* /*full*/ g_dbus_arg_info_ref (::GDBusArgInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_arg_info_unref (GDBusArgInfo* info /*none*/);
// void g_dbus_arg_info_unref (::GDBusArgInfo* info /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra_def_impl.hpp>)
#include <gio/dbusarginfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra_impl.hpp>)
#include <gio/dbusarginfo_extra_impl.hpp>
#endif
#endif

#endif
