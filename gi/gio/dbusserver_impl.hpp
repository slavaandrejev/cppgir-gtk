// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSERVER_IMPL_HPP_
#define _GI_GIO_DBUSSERVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Initable DBusServerBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusServerBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDBusServer* /*full*/ g_dbus_server_new_sync (const gchar* address /*none*/, GDBusServerFlags flags, const gchar* guid /*none*/, GDBusAuthObserver* observer /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusServer* /*full*/ g_dbus_server_new_sync (const char* address /*none*/, ::GDBusServerFlags flags, const char* guid /*none*/, ::GDBusAuthObserver* observer /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusServer base::DBusServerBase::new_sync (const gi::cstring_v address, Gio::DBusServerFlags flags, const gi::cstring_v guid, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable)
{
  typedef ::GDBusServer* (*call_wrap_t) (const char* address, ::GDBusServerFlags flags, const char* guid, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_server_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none);
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusServerFlags) (flags_to_c), (const char*) (guid_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusServer base::DBusServerBase::new_sync (const gi::cstring_v address, Gio::DBusServerFlags flags, const gi::cstring_v guid)
{
  typedef ::GDBusServer* (*call_wrap_t) (const char* address, ::GDBusServerFlags flags, const char* guid, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_server_new_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusServerFlags) (flags_to_c), (const char*) (guid_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusServer base::DBusServerBase::new_sync (const gi::cstring_v address, Gio::DBusServerFlags flags, const gi::cstring_v guid, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusServer* (*call_wrap_t) (const char* address, ::GDBusServerFlags flags, const char* guid, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_server_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none);
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusServerFlags) (flags_to_c), (const char*) (guid_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusServer base::DBusServerBase::new_sync (const gi::cstring_v address, Gio::DBusServerFlags flags, const gi::cstring_v guid, GLib::Error * _error) noexcept
{
  typedef ::GDBusServer* (*call_wrap_t) (const char* address, ::GDBusServerFlags flags, const char* guid, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_server_new_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusServerFlags) (flags_to_c), (const char*) (guid_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_dbus_server_get_client_address (GDBusServer* server /*none*/);
// const char* /*none*/ g_dbus_server_get_client_address (::GDBusServer* server /*none*/);
gi::cstring_v base::DBusServerBase::get_client_address () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_get_client_address;
  auto _temp_ret = call_wrap_v ((::GDBusServer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusServerFlags g_dbus_server_get_flags (GDBusServer* server /*none*/);
// ::GDBusServerFlags g_dbus_server_get_flags (::GDBusServer* server /*none*/);
Gio::DBusServerFlags base::DBusServerBase::get_flags () noexcept
{
  typedef ::GDBusServerFlags (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusServer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* /*none*/ g_dbus_server_get_guid (GDBusServer* server /*none*/);
// const char* /*none*/ g_dbus_server_get_guid (::GDBusServer* server /*none*/);
gi::cstring_v base::DBusServerBase::get_guid () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_get_guid;
  auto _temp_ret = call_wrap_v ((::GDBusServer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_dbus_server_is_active (GDBusServer* server /*none*/);
// gboolean g_dbus_server_is_active (::GDBusServer* server /*none*/);
bool base::DBusServerBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_is_active;
  auto _temp_ret = call_wrap_v ((::GDBusServer*) (gobj_()));
  return _temp_ret;
}

// void g_dbus_server_start (GDBusServer* server /*none*/);
// void g_dbus_server_start (::GDBusServer* server /*none*/);
void base::DBusServerBase::start () noexcept
{
  typedef void (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_start;
  call_wrap_v ((::GDBusServer*) (gobj_()));
}

// void g_dbus_server_stop (GDBusServer* server /*none*/);
// void g_dbus_server_stop (::GDBusServer* server /*none*/);
void base::DBusServerBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GDBusServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_server_stop;
  call_wrap_v ((::GDBusServer*) (gobj_()));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusserver_extra_def_impl.hpp>)
#include <gio/dbusserver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusserver_extra_impl.hpp>)
#include <gio/dbusserver_extra_impl.hpp>
#endif
#endif

#endif
