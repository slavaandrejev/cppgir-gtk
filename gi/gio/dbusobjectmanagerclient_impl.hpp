// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERCLIENT_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERCLIENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncInitable DBusObjectManagerClientBase::interface_ (gi::interface_tag<Gio::AsyncInitable>)
{ return gi::wrap ((Gio::AsyncInitable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusObjectManagerClientBase::operator Gio::AsyncInitable ()
{ return interface_ (gi::interface_tag<Gio::AsyncInitable>()); }

Gio::DBusObjectManager DBusObjectManagerClientBase::interface_ (gi::interface_tag<Gio::DBusObjectManager>)
{ return gi::wrap ((Gio::DBusObjectManager::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusObjectManagerClientBase::operator Gio::DBusObjectManager ()
{ return interface_ (gi::interface_tag<Gio::DBusObjectManager>()); }

Gio::Initable DBusObjectManagerClientBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusObjectManagerClientBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_finish (::GAsyncResult* res /*none*/, GError ** error);
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_finish (Gio::AsyncResult res)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_for_bus_sync (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_for_bus_sync (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_sync (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_sync (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func)
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_sync;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusObjectManagerClient base::DBusObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept
{
  typedef ::GDBusObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_client_new_sync;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_object_manager_client_new (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_object_manager_client_new (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusObjectManagerClientBase::new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusObjectManagerClientBase::new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_object_manager_client_new_for_bus (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_object_manager_client_new_for_bus (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusObjectManagerClientBase::new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusObjectManagerClientBase::new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto get_proxy_type_func_wrap_ = get_proxy_type_func ? unwrap (std::move (get_proxy_type_func), gi::scope_notified) : nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (Gio::DBusProxyTypeFunc::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->wrapper : nullptr), (void*) (get_proxy_type_func_wrap_), (GLib::DestroyNotify::cfunction_type) (get_proxy_type_func_wrap_ ? &get_proxy_type_func_wrap_->destroy : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GDBusConnection* /*none*/ g_dbus_object_manager_client_get_connection (GDBusObjectManagerClient* manager /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_object_manager_client_get_connection (::GDBusObjectManagerClient* manager /*none*/);
Gio::DBusConnection base::DBusObjectManagerClientBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusObjectManagerClient* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (GDBusObjectManagerClient* manager /*none*/);
// ::GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (::GDBusObjectManagerClient* manager /*none*/);
Gio::DBusObjectManagerClientFlags base::DBusObjectManagerClientBase::get_flags () noexcept
{
  typedef ::GDBusObjectManagerClientFlags (*call_wrap_t) (::GDBusObjectManagerClient* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* /*none*/ g_dbus_object_manager_client_get_name (GDBusObjectManagerClient* manager /*none*/);
// const char* /*none*/ g_dbus_object_manager_client_get_name (::GDBusObjectManagerClient* manager /*none*/);
gi::cstring_v base::DBusObjectManagerClientBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusObjectManagerClient* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_get_name;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full,nullable*/ g_dbus_object_manager_client_get_name_owner (GDBusObjectManagerClient* manager /*none*/);
// char* /*full,nullable*/ g_dbus_object_manager_client_get_name_owner (::GDBusObjectManagerClient* manager /*none*/);
gi::cstring base::DBusObjectManagerClientBase::get_name_owner () noexcept
{
  typedef char* (*call_wrap_t) (::GDBusObjectManagerClient* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_object_manager_client_get_name_owner;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra_def_impl.hpp>)
#include <gio/dbusobjectmanagerclient_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra_impl.hpp>)
#include <gio/dbusobjectmanagerclient_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectManagerClientClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GDBusObjectManagerClientClass *methods = (::GDBusObjectManagerClientClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.interface_proxy_signal) methods->interface_proxy_signal = (decltype (methods->interface_proxy_signal)) detail::method_wrapper<self, void (*) (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::interface_proxy_signal_>;
}

// void DBusObjectManagerClient::interface_proxy_properties_changed (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusObjectManagerClient::interface_proxy_properties_changed (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusObjectManagerClient::interface_proxy_signal (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusObjectManagerClient::interface_proxy_signal (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
void DBusObjectManagerClientClass::interface_proxy_signal_ (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept
{
  if (!get_struct_()->interface_proxy_signal) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDBusObjectManagerClient* manager, ::GDBusObjectProxy* object_proxy, ::GDBusProxy* interface_proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_proxy_signal;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none);
  auto sender_name_to_c = gi::unwrap (sender_name, gi::transfer_none);
  auto interface_proxy_to_c = gi::unwrap (interface_proxy, gi::transfer_none);
  auto object_proxy_to_c = gi::unwrap (object_proxy, gi::transfer_none);
  call_wrap_v ((::GDBusObjectManagerClient*) (gobj_()), (::GDBusObjectProxy*) (object_proxy_to_c), (::GDBusProxy*) (interface_proxy_to_c), (const char*) (sender_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
