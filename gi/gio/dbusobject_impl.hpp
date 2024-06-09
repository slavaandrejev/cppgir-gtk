// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECT_IMPL_HPP_
#define _GI_GIO_DBUSOBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusInterface* /*full,nullable*/ g_dbus_object_get_interface (GDBusObject* object /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ g_dbus_object_get_interface (::GDBusObject* object /*none*/, const char* interface_name /*none*/);
Gio::DBusInterface base::DBusObjectBase::get_interface (const gi::cstring_v interface_name) noexcept
{
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObject* object, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_dbus_object_get_interfaces (GDBusObject* object /*none*/);
// ::GList* /*full*/ g_dbus_object_get_interfaces (::GDBusObject* object /*none*/);
gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> base::DBusObjectBase::get_interfaces () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_get_interfaces;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_dbus_object_get_object_path (GDBusObject* object /*none*/);
// const char* /*none*/ g_dbus_object_get_object_path (::GDBusObject* object /*none*/);
gi::cstring_v base::DBusObjectBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_def_impl.hpp>)
#include <gio/dbusobject_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_impl.hpp>)
#include <gio/dbusobject_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDBusObjectIface *methods = (::GDBusObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_interface) methods->get_interface = (decltype (methods->get_interface)) detail::method_wrapper<self, Gio::DBusInterface (*) (const gi::cstring_v interface_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_interface_>;
  if (init_data.get_interfaces) methods->get_interfaces = (decltype (methods->get_interfaces)) detail::method_wrapper<self, gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_interfaces_>;
  if (init_data.get_object_path) methods->get_object_path = (decltype (methods->get_object_path)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_object_path_>;
  if (init_data.interface_added) methods->interface_added = (decltype (methods->interface_added)) detail::method_wrapper<self, void (*) (Gio::DBusInterface interface_), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::interface_added_>;
  if (init_data.interface_removed) methods->interface_removed = (decltype (methods->interface_removed)) detail::method_wrapper<self, void (*) (Gio::DBusInterface interface_), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::interface_removed_>;
}

// GDBusInterface* /*full,nullable*/ DBusObject::get_interface (GDBusObject* object /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObject::get_interface (::GDBusObject* object /*none*/, const char* interface_name /*none*/);
Gio::DBusInterface DBusObjectIfaceClassImpl::get_interface_ (const gi::cstring_v interface_name) noexcept
{
  if (!get_struct_()->get_interface) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObject* object, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ DBusObject::get_interfaces (GDBusObject* object /*none*/);
// ::GList* /*full*/ DBusObject::get_interfaces (::GDBusObject* object /*none*/);
gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> DBusObjectIfaceClassImpl::get_interfaces_ () noexcept
{
  if (!get_struct_()->get_interfaces) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_interfaces;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ DBusObject::get_object_path (GDBusObject* object /*none*/);
// const char* /*none*/ DBusObject::get_object_path (::GDBusObject* object /*none*/);
gi::cstring_v DBusObjectIfaceClassImpl::get_object_path_ () noexcept
{
  if (!get_struct_()->get_object_path) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void DBusObject::interface_added (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_added (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
void DBusObjectIfaceClassImpl::interface_added_ (Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_added;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::GDBusObject*) (gobj_()), (::GDBusInterface*) (interface__to_c));
}

// void DBusObject::interface_removed (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_removed (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
void DBusObjectIfaceClassImpl::interface_removed_ (Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_removed;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::GDBusObject*) (gobj_()), (::GDBusInterface*) (interface__to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
