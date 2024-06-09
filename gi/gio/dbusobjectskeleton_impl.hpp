// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTSKELETON_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusObject DBusObjectSkeletonBase::interface_ (gi::interface_tag<Gio::DBusObject>)
{ return gi::wrap ((Gio::DBusObject::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusObjectSkeletonBase::operator Gio::DBusObject ()
{ return interface_ (gi::interface_tag<Gio::DBusObject>()); }

// GDBusObjectSkeleton* /*full*/ g_dbus_object_skeleton_new (const gchar* object_path /*none*/);
// ::GDBusObjectSkeleton* /*full*/ g_dbus_object_skeleton_new (const char* object_path /*none*/);
Gio::DBusObjectSkeleton base::DBusObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::GDBusObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_object_skeleton_add_interface (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_object_skeleton_add_interface (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/);
void base::DBusObjectSkeletonBase::add_interface (Gio::DBusInterfaceSkeleton interface_) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_skeleton_add_interface;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()), (::GDBusInterfaceSkeleton*) (interface__to_c));
}

// void g_dbus_object_skeleton_flush (GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_skeleton_flush (::GDBusObjectSkeleton* object /*none*/);
void base::DBusObjectSkeletonBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_skeleton_flush;
  call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()));
}

// void g_dbus_object_skeleton_remove_interface (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_object_skeleton_remove_interface (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/);
void base::DBusObjectSkeletonBase::remove_interface (Gio::DBusInterfaceSkeleton interface_) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_skeleton_remove_interface;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()), (::GDBusInterfaceSkeleton*) (interface__to_c));
}

// void g_dbus_object_skeleton_remove_interface_by_name (GDBusObjectSkeleton* object /*none*/, const gchar* interface_name /*none*/);
// void g_dbus_object_skeleton_remove_interface_by_name (::GDBusObjectSkeleton* object /*none*/, const char* interface_name /*none*/);
void base::DBusObjectSkeletonBase::remove_interface_by_name (const gi::cstring_v interface_name) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectSkeleton* object, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_skeleton_remove_interface_by_name;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()), (const char*) (interface_name_to_c));
}

// void g_dbus_object_skeleton_set_object_path (GDBusObjectSkeleton* object /*none*/, const gchar* object_path /*none*/);
// void g_dbus_object_skeleton_set_object_path (::GDBusObjectSkeleton* object /*none*/, const char* object_path /*none*/);
void base::DBusObjectSkeletonBase::set_object_path (const gi::cstring_v object_path) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectSkeleton* object, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_skeleton_set_object_path;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()), (const char*) (object_path_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra_def_impl.hpp>)
#include <gio/dbusobjectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra_impl.hpp>)
#include <gio/dbusobjectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDBusObjectSkeletonClass *methods = (::GDBusObjectSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.authorize_method) methods->authorize_method = (decltype (methods->authorize_method)) detail::method_wrapper<self, bool (*) (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::authorize_method_>;
}

// gboolean DBusObjectSkeleton::authorize_method (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusObjectSkeleton::authorize_method (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusObjectSkeletonClass::authorize_method_ (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->authorize_method) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authorize_method;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectSkeleton*) (gobj_()), (::GDBusInterfaceSkeleton*) (interface__to_c), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
