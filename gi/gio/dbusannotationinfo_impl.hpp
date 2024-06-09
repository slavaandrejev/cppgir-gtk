// AUTO-GENERATED

#ifndef _GI_GIO_DBUSANNOTATIONINFO_IMPL_HPP_
#define _GI_GIO_DBUSANNOTATIONINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusAnnotationInfo* obj) { return (gint) obj->ref_count; }
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj /*none*/);
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj /*none*/);
gint base::DBusAnnotationInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusAnnotationInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj /*none*/, gint _value);
// void DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj /*none*/, gint _value);
void base::DBusAnnotationInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusAnnotationInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusAnnotationInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_key_get (const ::GDBusAnnotationInfo* obj) { return (char*) obj->key; }
// char* /*none*/ DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj /*none*/);
// char* /*none*/ DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj /*none*/);
gi::cstring_v base::DBusAnnotationInfoBase::key_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_key_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_value_get (const ::GDBusAnnotationInfo* obj) { return (char*) obj->value; }
// char* /*none*/ DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj /*none*/);
// char* /*none*/ DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj /*none*/);
gi::cstring_v base::DBusAnnotationInfoBase::value_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusAnnotationInfo* /*full*/ g_dbus_annotation_info_ref (GDBusAnnotationInfo* info /*none*/);
// ::GDBusAnnotationInfo* /*full*/ g_dbus_annotation_info_ref (::GDBusAnnotationInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_annotation_info_unref (GDBusAnnotationInfo* info /*none*/);
// void g_dbus_annotation_info_unref (::GDBusAnnotationInfo* info /*none*/);
// IGNORE; marked ignore

// const gchar* /*none,nullable*/ g_dbus_annotation_info_lookup (GDBusAnnotationInfo** annotations /*none,nullable*/, const gchar* name /*none*/);
// const char* /*none,nullable*/ g_dbus_annotation_info_lookup (::GDBusAnnotationInfo** annotations /*none,nullable*/, const char* name /*none*/);
gi::cstring_v base::DBusAnnotationInfoBase::lookup (gi::CollectionParameter<gi::ZTSpan, ::GDBusAnnotationInfo*, gi::transfer_none_t> annotations, const gi::cstring_v name) noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusAnnotationInfo** annotations, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_annotation_info_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto annotations_w = unwrap (std::move(annotations), gi::transfer_none);
  auto annotations_to_c = annotations_w;
  auto _temp_ret = call_wrap_v ((::GDBusAnnotationInfo**) (annotations_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_def_impl.hpp>)
#include <gio/dbusannotationinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_impl.hpp>)
#include <gio/dbusannotationinfo_extra_impl.hpp>
#endif
#endif

#endif
