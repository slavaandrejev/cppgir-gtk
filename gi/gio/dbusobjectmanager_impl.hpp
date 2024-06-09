// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGER_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusInterface* /*full,nullable*/ g_dbus_object_manager_get_interface (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ g_dbus_object_manager_get_interface (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/);
Gio::DBusInterface base::DBusObjectManagerBase::get_interface (const gi::cstring_v object_path, const gi::cstring_v interface_name) noexcept
{
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObject* /*full,nullable*/ g_dbus_object_manager_get_object (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/);
// ::GDBusObject* /*full,nullable*/ g_dbus_object_manager_get_object (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/);
Gio::DBusObject base::DBusObjectManagerBase::get_object (const gi::cstring_v object_path) noexcept
{
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_get_object;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_dbus_object_manager_get_object_path (GDBusObjectManager* manager /*none*/);
// const char* /*none*/ g_dbus_object_manager_get_object_path (::GDBusObjectManager* manager /*none*/);
gi::cstring_v base::DBusObjectManagerBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*full*/ g_dbus_object_manager_get_objects (GDBusObjectManager* manager /*none*/);
// ::GList* /*full*/ g_dbus_object_manager_get_objects (::GDBusObjectManager* manager /*none*/);
gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> base::DBusObjectManagerBase::get_objects () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_get_objects;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_def_impl.hpp>)
#include <gio/dbusobjectmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_impl.hpp>)
#include <gio/dbusobjectmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectManagerIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDBusObjectManagerIface *methods = (::GDBusObjectManagerIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_interface) methods->get_interface = (decltype (methods->get_interface)) detail::method_wrapper<self, Gio::DBusInterface (*) (const gi::cstring_v object_path, const gi::cstring_v interface_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_interface_>;
  if (init_data.get_object) methods->get_object = (decltype (methods->get_object)) detail::method_wrapper<self, Gio::DBusObject (*) (const gi::cstring_v object_path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_object_>;
  if (init_data.get_object_path) methods->get_object_path = (decltype (methods->get_object_path)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_object_path_>;
  if (init_data.get_objects) methods->get_objects = (decltype (methods->get_objects)) detail::method_wrapper<self, gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_objects_>;
  if (init_data.interface_added) methods->interface_added = (decltype (methods->interface_added)) detail::method_wrapper<self, void (*) (Gio::DBusObject object, Gio::DBusInterface interface_), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::interface_added_>;
  if (init_data.interface_removed) methods->interface_removed = (decltype (methods->interface_removed)) detail::method_wrapper<self, void (*) (Gio::DBusObject object, Gio::DBusInterface interface_), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::interface_removed_>;
  if (init_data.object_added) methods->object_added = (decltype (methods->object_added)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::object_added_>;
  if (init_data.object_removed) methods->object_removed = (decltype (methods->object_removed)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::object_removed_>;
}

// GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/);
Gio::DBusInterface DBusObjectManagerIfaceClassImpl::get_interface_ (const gi::cstring_v object_path, const gi::cstring_v interface_name) noexcept
{
  if (!get_struct_()->get_interface) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/);
Gio::DBusObject DBusObjectManagerIfaceClassImpl::get_object_ (const gi::cstring_v object_path) noexcept
{
  if (!get_struct_()->get_object) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ DBusObjectManager::get_object_path (GDBusObjectManager* manager /*none*/);
// const char* /*none*/ DBusObjectManager::get_object_path (::GDBusObjectManager* manager /*none*/);
gi::cstring_v DBusObjectManagerIfaceClassImpl::get_object_path_ () noexcept
{
  if (!get_struct_()->get_object_path) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*full*/ DBusObjectManager::get_objects (GDBusObjectManager* manager /*none*/);
// ::GList* /*full*/ DBusObjectManager::get_objects (::GDBusObjectManager* manager /*none*/);
gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> DBusObjectManagerIfaceClassImpl::get_objects_ () noexcept
{
  if (!get_struct_()->get_objects) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_objects;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void DBusObjectManager::interface_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
void DBusObjectManagerIfaceClassImpl::interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_added;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c), (::GDBusInterface*) (interface__to_c));
}

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
void DBusObjectManagerIfaceClassImpl::interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_removed;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c), (::GDBusInterface*) (interface__to_c));
}

// void DBusObjectManager::object_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
void DBusObjectManagerIfaceClassImpl::object_added_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->object_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->object_added;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c));
}

// void DBusObjectManager::object_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
void DBusObjectManagerIfaceClassImpl::object_removed_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->object_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->object_removed;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
