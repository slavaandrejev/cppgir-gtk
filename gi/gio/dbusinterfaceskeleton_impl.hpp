// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACESKELETON_IMPL_HPP_
#define _GI_GIO_DBUSINTERFACESKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusInterface DBusInterfaceSkeletonBase::interface_ (gi::interface_tag<Gio::DBusInterface>)
{ return gi::wrap ((Gio::DBusInterface::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusInterfaceSkeletonBase::operator Gio::DBusInterface ()
{ return interface_ (gi::interface_tag<Gio::DBusInterface>()); }

// gboolean g_dbus_interface_skeleton_export (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GError ** error);
// gboolean g_dbus_interface_skeleton_export (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/, GError ** error);
bool base::DBusInterfaceSkeletonBase::export_ (Gio::DBusConnection connection, const gi::cstring_v object_path)
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_export;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusInterfaceSkeletonBase::export_ (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_export;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_dbus_interface_skeleton_flush (GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_interface_skeleton_flush (::GDBusInterfaceSkeleton* interface_ /*none*/);
void base::DBusInterfaceSkeletonBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_flush;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// GDBusConnection* /*none,nullable*/ g_dbus_interface_skeleton_get_connection (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusConnection* /*none,nullable*/ g_dbus_interface_skeleton_get_connection (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusConnection base::DBusInterfaceSkeletonBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*full*/ g_dbus_interface_skeleton_get_connections (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GList* /*full*/ g_dbus_interface_skeleton_get_connections (::GDBusInterfaceSkeleton* interface_ /*none*/);
gi::Collection<GList, ::GDBusConnection*, gi::transfer_full_t> base::DBusInterfaceSkeletonBase::get_connections () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_connections;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDBusConnection*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusInterfaceSkeletonFlags base::DBusInterfaceSkeletonBase::get_flags () noexcept
{
  typedef ::GDBusInterfaceSkeletonFlags (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDBusInterfaceInfo* /*none*/ g_dbus_interface_skeleton_get_info (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ g_dbus_interface_skeleton_get_info (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusInterfaceInfo_Ref base::DBusInterfaceSkeletonBase::get_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dbus_interface_skeleton_get_object_path (GDBusInterfaceSkeleton* interface_ /*none*/);
// const char* /*none,nullable*/ g_dbus_interface_skeleton_get_object_path (::GDBusInterfaceSkeleton* interface_ /*none*/);
gi::cstring_v base::DBusInterfaceSkeletonBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full*/ g_dbus_interface_skeleton_get_properties (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GVariant* /*full*/ g_dbus_interface_skeleton_get_properties (::GDBusInterfaceSkeleton* interface_ /*none*/);
GLib::Variant base::DBusInterfaceSkeletonBase::get_properties () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_properties;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusInterfaceVTable* /*none*/ g_dbus_interface_skeleton_get_vtable (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceVTable* /*none*/ g_dbus_interface_skeleton_get_vtable (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusInterfaceVTable_Ref base::DBusInterfaceSkeletonBase::get_vtable () noexcept
{
  typedef ::GDBusInterfaceVTable* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_get_vtable;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_dbus_interface_skeleton_has_connection (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/);
// gboolean g_dbus_interface_skeleton_has_connection (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/);
bool base::DBusInterfaceSkeletonBase::has_connection (Gio::DBusConnection connection) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_has_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c));
  return _temp_ret;
}

// void g_dbus_interface_skeleton_set_flags (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusInterfaceSkeletonFlags flags);
// void g_dbus_interface_skeleton_set_flags (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusInterfaceSkeletonFlags flags);
void base::DBusInterfaceSkeletonBase::set_flags (Gio::DBusInterfaceSkeletonFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusInterfaceSkeletonFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusInterfaceSkeletonFlags) (flags_to_c));
}

// void g_dbus_interface_skeleton_unexport (GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_interface_skeleton_unexport (::GDBusInterfaceSkeleton* interface_ /*none*/);
void base::DBusInterfaceSkeletonBase::unexport () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_unexport;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// void g_dbus_interface_skeleton_unexport_from_connection (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/);
// void g_dbus_interface_skeleton_unexport_from_connection (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/);
void base::DBusInterfaceSkeletonBase::unexport_from_connection (Gio::DBusConnection connection) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_skeleton_unexport_from_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_def_impl.hpp>)
#include <gio/dbusinterfaceskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_impl.hpp>)
#include <gio/dbusinterfaceskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusInterfaceSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDBusInterfaceSkeletonClass *methods = (::GDBusInterfaceSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.flush) methods->flush = (decltype (methods->flush)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::flush_>;
  if (init_data.g_authorize_method) methods->g_authorize_method = (decltype (methods->g_authorize_method)) detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::g_authorize_method_>;
  if (init_data.get_info) methods->get_info = (decltype (methods->get_info)) detail::method_wrapper<self, Gio::DBusInterfaceInfo_Ref (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_info_>;
  if (init_data.get_properties) methods->get_properties = (decltype (methods->get_properties)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_properties_>;
  if (init_data.get_vtable) methods->get_vtable = (decltype (methods->get_vtable)) detail::method_wrapper<self, Gio::DBusInterfaceVTable_Ref (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_vtable_>;
}

// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_ /*none*/);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_ /*none*/);
void DBusInterfaceSkeletonClass::flush_ () noexcept
{
  if (!get_struct_()->flush) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusInterfaceSkeletonClass::g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->g_authorize_method) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->g_authorize_method;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusInterfaceInfo_Ref DBusInterfaceSkeletonClass::get_info_ () noexcept
{
  if (!get_struct_()->get_info) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_ /*none*/);
GLib::Variant DBusInterfaceSkeletonClass::get_properties_ () noexcept
{
  if (!get_struct_()->get_properties) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_properties;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (::GDBusInterfaceSkeleton* interface_ /*none*/);
Gio::DBusInterfaceVTable_Ref DBusInterfaceSkeletonClass::get_vtable_ () noexcept
{
  if (!get_struct_()->get_vtable) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusInterfaceVTable* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_vtable;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
