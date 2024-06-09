// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACE_IMPL_HPP_
#define _GI_GIO_DBUSINTERFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusObject* /*full,nullable*/ g_dbus_interface_dup_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*full,nullable*/ g_dbus_interface_dup_object (::GDBusInterface* interface_ /*none*/);
Gio::DBusObject base::DBusInterfaceBase::get_object () noexcept
{
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_dup_object;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusInterfaceInfo* /*none*/ g_dbus_interface_get_info (GDBusInterface* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ g_dbus_interface_get_info (::GDBusInterface* interface_ /*none*/);
Gio::DBusInterfaceInfo_Ref base::DBusInterfaceBase::get_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusObject* /*none,nullable*/ g_dbus_interface_get_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*none,nullable*/ g_dbus_interface_get_object (::GDBusInterface* interface_ /*none*/);
// IGNORE; not introspectable; shadowed-by dup_object

// void g_dbus_interface_set_object (GDBusInterface* interface_ /*none*/, GDBusObject* object /*none,nullable*/);
// void g_dbus_interface_set_object (::GDBusInterface* interface_ /*none*/, ::GDBusObject* object /*none,nullable*/);
void base::DBusInterfaceBase::set_object (Gio::DBusObject object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_set_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}
void base::DBusInterfaceBase::set_object () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_interface_set_object;
  auto object_to_c = nullptr;
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_def_impl.hpp>)
#include <gio/dbusinterface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_impl.hpp>)
#include <gio/dbusinterface_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusInterfaceIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDBusInterfaceIface *methods = (::GDBusInterfaceIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.dup_object) methods->dup_object = (decltype (methods->dup_object)) detail::method_wrapper<self, Gio::DBusObject (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::dup_object_>;
  if (init_data.get_info) methods->get_info = (decltype (methods->get_info)) detail::method_wrapper<self, Gio::DBusInterfaceInfo_Ref (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_info_>;
  if (init_data.set_object) methods->set_object = (decltype (methods->set_object)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_object_>;
}

// GDBusObject* /*full,nullable*/ DBusInterface::dup_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusInterface::dup_object (::GDBusInterface* interface_ /*none*/);
Gio::DBusObject DBusInterfaceIfaceClassImpl::dup_object_ () noexcept
{
  if (!get_struct_()->dup_object) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup_object;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (GDBusInterface* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (::GDBusInterface* interface_ /*none*/);
Gio::DBusInterfaceInfo_Ref DBusInterfaceIfaceClassImpl::get_info_ () noexcept
{
  if (!get_struct_()->get_info) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void DBusInterface::set_object (GDBusInterface* interface_ /*none*/, GDBusObject* object /*none,nullable*/);
// void DBusInterface::set_object (::GDBusInterface* interface_ /*none*/, ::GDBusObject* object /*none,nullable*/);
void DBusInterfaceIfaceClassImpl::set_object_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->set_object) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
