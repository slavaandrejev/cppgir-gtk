// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERSERVER_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERSERVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusObjectManager DBusObjectManagerServerBase::interface_ (gi::interface_tag<Gio::DBusObjectManager>)
{ return gi::wrap ((Gio::DBusObjectManager::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusObjectManagerServerBase::operator Gio::DBusObjectManager ()
{ return interface_ (gi::interface_tag<Gio::DBusObjectManager>()); }

// GDBusObjectManagerServer* /*full*/ g_dbus_object_manager_server_new (const gchar* object_path /*none*/);
// ::GDBusObjectManagerServer* /*full*/ g_dbus_object_manager_server_new (const char* object_path /*none*/);
Gio::DBusObjectManagerServer base::DBusObjectManagerServerBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::GDBusObjectManagerServer* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_object_manager_server_export (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_manager_server_export (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
void base::DBusObjectManagerServerBase::export_ (Gio::DBusObjectSkeleton object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_export;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
}

// void g_dbus_object_manager_server_export_uniquely (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_manager_server_export_uniquely (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
void base::DBusObjectManagerServerBase::export_uniquely (Gio::DBusObjectSkeleton object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_export_uniquely;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
}

// GDBusConnection* /*full,nullable*/ g_dbus_object_manager_server_get_connection (GDBusObjectManagerServer* manager /*none*/);
// ::GDBusConnection* /*full,nullable*/ g_dbus_object_manager_server_get_connection (::GDBusObjectManagerServer* manager /*none*/);
Gio::DBusConnection base::DBusObjectManagerServerBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusObjectManagerServer* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_dbus_object_manager_server_is_exported (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// gboolean g_dbus_object_manager_server_is_exported (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
bool base::DBusObjectManagerServerBase::is_exported (Gio::DBusObjectSkeleton object) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_is_exported;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
  return _temp_ret;
}

// void g_dbus_object_manager_server_set_connection (GDBusObjectManagerServer* manager /*none*/, GDBusConnection* connection /*none,nullable*/);
// void g_dbus_object_manager_server_set_connection (::GDBusObjectManagerServer* manager /*none*/, ::GDBusConnection* connection /*none,nullable*/);
void base::DBusObjectManagerServerBase::set_connection (Gio::DBusConnection connection) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_set_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}
void base::DBusObjectManagerServerBase::set_connection () noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_set_connection;
  auto connection_to_c = nullptr;
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}

// gboolean g_dbus_object_manager_server_unexport (GDBusObjectManagerServer* manager /*none*/, const gchar* object_path /*none*/);
// gboolean g_dbus_object_manager_server_unexport (::GDBusObjectManagerServer* manager /*none*/, const char* object_path /*none*/);
bool base::DBusObjectManagerServerBase::unexport (const gi::cstring_v object_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusObjectManagerServer* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_server_unexport;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (const char*) (object_path_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra_def_impl.hpp>)
#include <gio/dbusobjectmanagerserver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra_impl.hpp>)
#include <gio/dbusobjectmanagerserver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectManagerServerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDBusObjectManagerServerClass *methods = (::GDBusObjectManagerServerClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
