// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROXY_IMPL_HPP_
#define _GI_GIO_DBUSPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncInitable DBusProxyBase::interface_ (gi::interface_tag<Gio::AsyncInitable>)
{ return gi::wrap ((Gio::AsyncInitable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusProxyBase::operator Gio::AsyncInitable ()
{ return interface_ (gi::interface_tag<Gio::AsyncInitable>()); }

Gio::DBusInterface DBusProxyBase::interface_ (gi::interface_tag<Gio::DBusInterface>)
{ return gi::wrap ((Gio::DBusInterface::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusProxyBase::operator Gio::DBusInterface ()
{ return interface_ (gi::interface_tag<Gio::DBusInterface>()); }

Gio::Initable DBusProxyBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusProxyBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDBusProxy* /*full*/ g_dbus_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_for_bus_finish (Gio::AsyncResult res)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusProxy* /*full*/ g_dbus_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_proxy_call (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_call (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusProxyBase::call (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::call (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* /*full*/ g_dbus_proxy_call_finish (GDBusProxy* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_finish (::GDBusProxy* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GLib::Variant base::DBusProxyBase::call_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ g_dbus_proxy_call_sync (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_sync (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GLib::Variant base::DBusProxyBase::call_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_proxy_call_with_unix_fd_list (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_call_with_unix_fd_list (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusProxyBase::call_with_unix_fd_list (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::call_with_unix_fd_list (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_finish (GDBusProxy* proxy /*none*/, GUnixFDList** out_fd_list /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_finish (::GDBusProxy* proxy /*none*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_sync (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GUnixFDList** out_fd_list /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_sync (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GVariant* /*full,nullable*/ g_dbus_proxy_get_cached_property (GDBusProxy* proxy /*none*/, const gchar* property_name /*none*/);
// ::GVariant* /*full,nullable*/ g_dbus_proxy_get_cached_property (::GDBusProxy* proxy /*none*/, const char* property_name /*none*/);
GLib::Variant base::DBusProxyBase::get_cached_property (const gi::cstring_v property_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_cached_property;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full,nullable*/ g_dbus_proxy_get_cached_property_names (GDBusProxy* proxy /*none*/);
// char** /*full,nullable*/ g_dbus_proxy_get_cached_property_names (::GDBusProxy* proxy /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::DBusProxyBase::get_cached_property_names () noexcept
{
  typedef char** (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_cached_property_names;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GDBusConnection* /*none*/ g_dbus_proxy_get_connection (GDBusProxy* proxy /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_proxy_get_connection (::GDBusProxy* proxy /*none*/);
Gio::DBusConnection base::DBusProxyBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_dbus_proxy_get_default_timeout (GDBusProxy* proxy /*none*/);
// gint g_dbus_proxy_get_default_timeout (::GDBusProxy* proxy /*none*/);
gint base::DBusProxyBase::get_default_timeout () noexcept
{
  typedef gint (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_default_timeout;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return _temp_ret;
}

// GDBusProxyFlags g_dbus_proxy_get_flags (GDBusProxy* proxy /*none*/);
// ::GDBusProxyFlags g_dbus_proxy_get_flags (::GDBusProxy* proxy /*none*/);
Gio::DBusProxyFlags base::DBusProxyBase::get_flags () noexcept
{
  typedef ::GDBusProxyFlags (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDBusInterfaceInfo* /*none,nullable*/ g_dbus_proxy_get_interface_info (GDBusProxy* proxy /*none*/);
// ::GDBusInterfaceInfo* /*none,nullable*/ g_dbus_proxy_get_interface_info (::GDBusProxy* proxy /*none*/);
Gio::DBusInterfaceInfo_Ref base::DBusProxyBase::get_interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_interface_info;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dbus_proxy_get_interface_name (GDBusProxy* proxy /*none*/);
// const char* /*none*/ g_dbus_proxy_get_interface_name (::GDBusProxy* proxy /*none*/);
gi::cstring_v base::DBusProxyBase::get_interface_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_interface_name;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dbus_proxy_get_name (GDBusProxy* proxy /*none*/);
// const char* /*none,nullable*/ g_dbus_proxy_get_name (::GDBusProxy* proxy /*none*/);
gi::cstring_v base::DBusProxyBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_name;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full,nullable*/ g_dbus_proxy_get_name_owner (GDBusProxy* proxy /*none*/);
// char* /*full,nullable*/ g_dbus_proxy_get_name_owner (::GDBusProxy* proxy /*none*/);
gi::cstring base::DBusProxyBase::get_name_owner () noexcept
{
  typedef char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_name_owner;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_dbus_proxy_get_object_path (GDBusProxy* proxy /*none*/);
// const char* /*none*/ g_dbus_proxy_get_object_path (::GDBusProxy* proxy /*none*/);
gi::cstring_v base::DBusProxyBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_dbus_proxy_set_cached_property (GDBusProxy* proxy /*none*/, const gchar* property_name /*none*/, GVariant* value /*none,nullable*/);
// void g_dbus_proxy_set_cached_property (::GDBusProxy* proxy /*none*/, const char* property_name /*none*/, ::GVariant* value /*none,nullable*/);
void base::DBusProxyBase::set_cached_property (const gi::cstring_v property_name, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_set_cached_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c), (::GVariant*) (value_to_c));
}
void base::DBusProxyBase::set_cached_property (const gi::cstring_v property_name) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_set_cached_property;
  auto value_to_c = nullptr;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c), (::GVariant*) (value_to_c));
}

// void g_dbus_proxy_set_default_timeout (GDBusProxy* proxy /*none*/, gint timeout_msec);
// void g_dbus_proxy_set_default_timeout (::GDBusProxy* proxy /*none*/, gint timeout_msec);
void base::DBusProxyBase::set_default_timeout (gint timeout_msec) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, gint timeout_msec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_set_default_timeout;
  auto timeout_msec_to_c = timeout_msec;
  call_wrap_v ((::GDBusProxy*) (gobj_()), (gint) (timeout_msec_to_c));
}

// void g_dbus_proxy_set_interface_info (GDBusProxy* proxy /*none*/, GDBusInterfaceInfo* info /*none,nullable*/);
// void g_dbus_proxy_set_interface_info (::GDBusProxy* proxy /*none*/, ::GDBusInterfaceInfo* info /*none,nullable*/);
void base::DBusProxyBase::set_interface_info (Gio::DBusInterfaceInfo_Ref info) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_set_interface_info;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (::GDBusInterfaceInfo*) (info_to_c));
}
void base::DBusProxyBase::set_interface_info () noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_proxy_set_interface_info;
  auto info_to_c = nullptr;
  call_wrap_v ((::GDBusProxy*) (gobj_()), (::GDBusInterfaceInfo*) (info_to_c));
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_def_impl.hpp>)
#include <gio/dbusproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_impl.hpp>)
#include <gio/dbusproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusProxyClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDBusProxyClass *methods = (::GDBusProxyClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.g_signal) methods->g_signal = (decltype (methods->g_signal)) detail::method_wrapper<self, void (*) (const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::g_signal_>;
}

// void DBusProxy::g_properties_changed (GDBusProxy* proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusProxy::g_signal (::GDBusProxy* proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
void DBusProxyClass::g_signal_ (const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept
{
  if (!get_struct_()->g_signal) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->g_signal;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none);
  auto sender_name_to_c = gi::unwrap (sender_name, gi::transfer_none);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (sender_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
