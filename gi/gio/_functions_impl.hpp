// AUTO-GENERATED

#ifndef _GI_GIO__FUNCTIONS_IMPL_HPP_
#define _GI_GIO__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace DBusErrorNS_ {

// gchar* /*full*/ g_dbus_error_encode_gerror (const GError* error /*none*/);
// char* /*full*/ g_dbus_error_encode_gerror (const ::GError* error /*none*/);
gi::cstring encode_gerror (const GLib::Error_Ref error) noexcept
{
  typedef char* (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_encode_gerror;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_dbus_error_get_remote_error (const GError* error /*none*/);
// char* /*full,nullable*/ g_dbus_error_get_remote_error (const ::GError* error /*none*/);
gi::cstring get_remote_error (const GLib::Error_Ref error) noexcept
{
  typedef char* (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_get_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_dbus_error_is_remote_error (const GError* error /*none*/);
// gboolean g_dbus_error_is_remote_error (const ::GError* error /*none*/);
bool is_remote_error (const GLib::Error_Ref error) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_is_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return _temp_ret;
}

// GError* /*full*/ g_dbus_error_new_for_dbus_error (const gchar* dbus_error_name /*none*/, const gchar* dbus_error_message /*none*/);
// ::GError* /*full*/ g_dbus_error_new_for_dbus_error (const char* dbus_error_name /*none*/, const char* dbus_error_message /*none*/);
GLib::Error new_for_dbus_error (const gi::cstring_v dbus_error_name, const gi::cstring_v dbus_error_message) noexcept
{
  typedef ::GError* (*call_wrap_t) (const char* dbus_error_name, const char* dbus_error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_new_for_dbus_error;
  auto dbus_error_message_to_c = gi::unwrap (dbus_error_message, gi::transfer_none);
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (dbus_error_name_to_c), (const char*) (dbus_error_message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GQuark g_dbus_error_quark ();
// ::GQuark g_dbus_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_dbus_error_register_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name /*none*/);
// gboolean g_dbus_error_register_error (::GQuark error_domain, gint error_code, const char* dbus_error_name /*none*/);
bool register_error (::GQuark error_domain, gint error_code, const gi::cstring_v dbus_error_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GQuark error_domain, gint error_code, const char* dbus_error_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_register_error;
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none);
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto _temp_ret = call_wrap_v ((::GQuark) (error_domain_to_c), (gint) (error_code_to_c), (const char*) (dbus_error_name_to_c));
  return _temp_ret;
}

// void g_dbus_error_register_error_domain (const gchar* error_domain_quark_name /*none*/, volatile gsize* quark_volatile, const GDBusErrorEntry* entries /*none*/, guint num_entries);
// void g_dbus_error_register_error_domain (const char* error_domain_quark_name /*none*/, gsize quark_volatile, const ::GDBusErrorEntry** entries /*none*/, guint num_entries);
// SKIP; entries in boxed array not supported (depth 1), inconsistent quark_volatile in pointer depth (1 vs 0)

// void g_dbus_error_set_dbus_error (GError** error /*none*/, const gchar* dbus_error_name /*none*/, const gchar* dbus_error_message /*none*/, const gchar* format /*none,nullable*/,  ..._ /*none*/);
// void g_dbus_error_set_dbus_error (::GError* error /*none*/, const char* dbus_error_name /*none*/, const char* dbus_error_message /*none*/, const char* format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_error_set_dbus_error_valist (GError** error /*none*/, const gchar* dbus_error_name /*none*/, const gchar* dbus_error_message /*none*/, const gchar* format /*none,nullable*/, va_list var_args /*none*/);
// void g_dbus_error_set_dbus_error_valist (::GError* error /*none*/, const char* dbus_error_name /*none*/, const char* dbus_error_message /*none*/, const char* format /*none,nullable*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported, inconsistent error in pointer depth (2 vs 1)

// gboolean g_dbus_error_strip_remote_error (GError* error /*none*/);
// gboolean g_dbus_error_strip_remote_error (::GError* error /*none*/);
bool strip_remote_error (GLib::Error_Ref error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_strip_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GError*) (error_to_c));
  return _temp_ret;
}

// gboolean g_dbus_error_unregister_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name /*none*/);
// gboolean g_dbus_error_unregister_error (::GQuark error_domain, gint error_code, const char* dbus_error_name /*none*/);
bool unregister_error (::GQuark error_domain, gint error_code, const gi::cstring_v dbus_error_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GQuark error_domain, gint error_code, const char* dbus_error_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_error_unregister_error;
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none);
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto _temp_ret = call_wrap_v ((::GQuark) (error_domain_to_c), (gint) (error_code_to_c), (const char*) (dbus_error_name_to_c));
  return _temp_ret;
}

} // namespace DBusErrorNS_

namespace ResolverErrorNS_ {

// GQuark g_resolver_error_quark ();
// ::GQuark g_resolver_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resolver_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ResolverErrorNS_

namespace ResolverRecordTypeNS_ {

// gint g_resolver_record_type_to_rrtype (GResolverRecordType type);
// gint g_resolver_record_type_to_rrtype (::GResolverRecordType type);
// IGNORE; marked ignore

} // namespace ResolverRecordTypeNS_

namespace ResourceErrorNS_ {

// GQuark g_resource_error_quark ();
// ::GQuark g_resource_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ResourceErrorNS_

namespace TlsChannelBindingErrorNS_ {

// GQuark g_tls_channel_binding_error_quark ();
// ::GQuark g_tls_channel_binding_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_channel_binding_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TlsChannelBindingErrorNS_

namespace TlsErrorNS_ {

// GQuark g_tls_error_quark ();
// ::GQuark g_tls_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TlsErrorNS_

// void g_bus_get (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_bus_get (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void bus_get (Gio::BusType bus_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void bus_get (Gio::BusType bus_type, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GDBusConnection* /*full*/ g_bus_get_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusConnection* /*full*/ g_bus_get_finish (::GAsyncResult* res /*none*/, GError ** error);
Gio::DBusConnection bus_get_finish (Gio::AsyncResult res)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusConnection bus_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusConnection* /*full*/ g_bus_get_sync (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusConnection* /*full*/ g_bus_get_sync (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_get_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint g_bus_own_name (GBusType bus_type, const gchar* name /*none*/, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler /*none,nullable*/, GBusNameAcquiredCallback name_acquired_handler /*none,nullable*/, GBusNameLostCallback name_lost_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_own_name (::GBusType bus_type, const char* name /*none*/, ::GBusNameOwnerFlags flags, Gio::BusAcquiredCallback::cfunction_type bus_acquired_handler /*none,nullable*/, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler /*none,nullable*/, Gio::BusNameLostCallback::cfunction_type name_lost_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info, callback misses closure info

// guint g_bus_own_name_on_connection (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler /*none,nullable*/, GBusNameLostCallback name_lost_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_own_name_on_connection (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameOwnerFlags flags, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler /*none,nullable*/, Gio::BusNameLostCallback::cfunction_type name_lost_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_own_name_on_connection_with_closures (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameOwnerFlags flags, GClosure* name_acquired_closure /*none,nullable*/, GClosure* name_lost_closure /*none,nullable*/);
// guint g_bus_own_name_on_connection_with_closures (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure /*none,nullable*/, ::GClosure* name_lost_closure /*none,nullable*/);
guint bus_own_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameOwnerFlags flags, GObject::Closure_Ref name_acquired_closure, GObject::Closure_Ref name_lost_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_own_name_on_connection_with_closures;
  auto name_lost_closure_to_c = gi::unwrap (name_lost_closure, gi::transfer_none);
  auto name_acquired_closure_to_c = gi::unwrap (name_acquired_closure, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}
guint bus_own_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameOwnerFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_own_name_on_connection_with_closures;
  auto name_lost_closure_to_c = nullptr;
  auto name_acquired_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}

// guint g_bus_own_name_with_closures (GBusType bus_type, const gchar* name /*none*/, GBusNameOwnerFlags flags, GClosure* bus_acquired_closure /*none,nullable*/, GClosure* name_acquired_closure /*none,nullable*/, GClosure* name_lost_closure /*none,nullable*/);
// guint g_bus_own_name_with_closures (::GBusType bus_type, const char* name /*none*/, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure /*none,nullable*/, ::GClosure* name_acquired_closure /*none,nullable*/, ::GClosure* name_lost_closure /*none,nullable*/);
guint bus_own_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameOwnerFlags flags, GObject::Closure_Ref bus_acquired_closure, GObject::Closure_Ref name_acquired_closure, GObject::Closure_Ref name_lost_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_own_name_with_closures;
  auto name_lost_closure_to_c = gi::unwrap (name_lost_closure, gi::transfer_none);
  auto name_acquired_closure_to_c = gi::unwrap (name_acquired_closure, gi::transfer_none);
  auto bus_acquired_closure_to_c = gi::unwrap (bus_acquired_closure, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (bus_acquired_closure_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}
guint bus_own_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameOwnerFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_own_name_with_closures;
  auto name_lost_closure_to_c = nullptr;
  auto name_acquired_closure_to_c = nullptr;
  auto bus_acquired_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (bus_acquired_closure_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}

// void g_bus_unown_name (guint owner_id);
// void g_bus_unown_name (guint owner_id);
void bus_unown_name (guint owner_id) noexcept
{
  typedef void (*call_wrap_t) (guint owner_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_unown_name;
  auto owner_id_to_c = owner_id;
  call_wrap_v ((guint) (owner_id_to_c));
}

// void g_bus_unwatch_name (guint watcher_id);
// void g_bus_unwatch_name (guint watcher_id);
void bus_unwatch_name (guint watcher_id) noexcept
{
  typedef void (*call_wrap_t) (guint watcher_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_unwatch_name;
  auto watcher_id_to_c = watcher_id;
  call_wrap_v ((guint) (watcher_id_to_c));
}

// guint g_bus_watch_name (GBusType bus_type, const gchar* name /*none*/, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler /*none,nullable*/, GBusNameVanishedCallback name_vanished_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_watch_name (::GBusType bus_type, const char* name /*none*/, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler /*none,nullable*/, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_watch_name_on_connection (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler /*none,nullable*/, GBusNameVanishedCallback name_vanished_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_watch_name_on_connection (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler /*none,nullable*/, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_watch_name_on_connection_with_closures (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameWatcherFlags flags, GClosure* name_appeared_closure /*none,nullable*/, GClosure* name_vanished_closure /*none,nullable*/);
// guint g_bus_watch_name_on_connection_with_closures (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure /*none,nullable*/, ::GClosure* name_vanished_closure /*none,nullable*/);
guint bus_watch_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameWatcherFlags flags, GObject::Closure_Ref name_appeared_closure, GObject::Closure_Ref name_vanished_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_watch_name_on_connection_with_closures;
  auto name_vanished_closure_to_c = gi::unwrap (name_vanished_closure, gi::transfer_none);
  auto name_appeared_closure_to_c = gi::unwrap (name_appeared_closure, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}
guint bus_watch_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameWatcherFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_watch_name_on_connection_with_closures;
  auto name_vanished_closure_to_c = nullptr;
  auto name_appeared_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}

// guint g_bus_watch_name_with_closures (GBusType bus_type, const gchar* name /*none*/, GBusNameWatcherFlags flags, GClosure* name_appeared_closure /*none,nullable*/, GClosure* name_vanished_closure /*none,nullable*/);
// guint g_bus_watch_name_with_closures (::GBusType bus_type, const char* name /*none*/, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure /*none,nullable*/, ::GClosure* name_vanished_closure /*none,nullable*/);
guint bus_watch_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameWatcherFlags flags, GObject::Closure_Ref name_appeared_closure, GObject::Closure_Ref name_vanished_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_watch_name_with_closures;
  auto name_vanished_closure_to_c = gi::unwrap (name_vanished_closure, gi::transfer_none);
  auto name_appeared_closure_to_c = gi::unwrap (name_appeared_closure, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}
guint bus_watch_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameWatcherFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bus_watch_name_with_closures;
  auto name_vanished_closure_to_c = nullptr;
  auto name_appeared_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}

// gboolean g_content_type_can_be_executable (const gchar* type /*none*/);
// gboolean g_content_type_can_be_executable (const char* type /*none*/);
bool content_type_can_be_executable (const gi::cstring_v type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_can_be_executable;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return _temp_ret;
}

// gboolean g_content_type_equals (const gchar* type1 /*none*/, const gchar* type2 /*none*/);
// gboolean g_content_type_equals (const char* type1 /*none*/, const char* type2 /*none*/);
bool content_type_equals (const gi::cstring_v type1, const gi::cstring_v type2) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type1, const char* type2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_equals;
  auto type2_to_c = gi::unwrap (type2, gi::transfer_none);
  auto type1_to_c = gi::unwrap (type1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type1_to_c), (const char*) (type2_to_c));
  return _temp_ret;
}

// gchar* /*full,nullable*/ g_content_type_from_mime_type (const gchar* mime_type /*none*/);
// char* /*full,nullable*/ g_content_type_from_mime_type (const char* mime_type /*none*/);
gi::cstring content_type_from_mime_type (const gi::cstring_v mime_type) noexcept
{
  typedef char* (*call_wrap_t) (const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_from_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_content_type_get_description (const gchar* type /*none*/);
// char* /*full*/ g_content_type_get_description (const char* type /*none*/);
gi::cstring content_type_get_description (const gi::cstring_v type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_description;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_content_type_get_generic_icon_name (const gchar* type /*none*/);
// char* /*full,nullable*/ g_content_type_get_generic_icon_name (const char* type /*none*/);
gi::cstring content_type_get_generic_icon_name (const gi::cstring_v type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_generic_icon_name;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_content_type_get_icon (const gchar* type /*none*/);
// ::GIcon* /*full*/ g_content_type_get_icon (const char* type /*none*/);
Gio::Icon content_type_get_icon (const gi::cstring_v type) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_icon;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* const* /*none*/ g_content_type_get_mime_dirs ();
// const char** /*none*/ g_content_type_get_mime_dirs ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> content_type_get_mime_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_mime_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gchar* /*full,nullable*/ g_content_type_get_mime_type (const gchar* type /*none*/);
// char* /*full,nullable*/ g_content_type_get_mime_type (const char* type /*none*/);
gi::cstring content_type_get_mime_type (const gi::cstring_v type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_mime_type;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_content_type_get_symbolic_icon (const gchar* type /*none*/);
// ::GIcon* /*full*/ g_content_type_get_symbolic_icon (const char* type /*none*/);
Gio::Icon content_type_get_symbolic_icon (const gi::cstring_v type) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_get_symbolic_icon;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_content_type_guess (const gchar* filename /*none,nullable*/, const guchar* data /*none,nullable*/, gsize data_size, gboolean* result_uncertain);
// char* /*full*/ g_content_type_guess (const char* filename /*none,nullable*/, const guint8* data /*none,nullable*/, gsize data_size, gboolean* result_uncertain);
gi::cstring content_type_guess (const gi::cstring_v filename, const guint8 * data, gsize data_size, bool * result_uncertain) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_to_c = data;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_size), (gboolean*) (result_uncertain ? &result_uncertain_o : nullptr));
  if (result_uncertain) *result_uncertain = result_uncertain_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring content_type_guess (const guint8 * data, gsize data_size, bool * result_uncertain) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_to_c = data;
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_size), (gboolean*) (result_uncertain ? &result_uncertain_o : nullptr));
  if (result_uncertain) *result_uncertain = result_uncertain_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, bool> content_type_guess (const gi::cstring_v filename, const guint8 * data, gsize data_size) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_to_c = data;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_size), (gboolean*) (&result_uncertain_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = result_uncertain_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, bool> content_type_guess (const guint8 * data, gsize data_size) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_to_c = data;
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_size), (gboolean*) (&result_uncertain_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = result_uncertain_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar** /*full*/ g_content_type_guess_for_tree (GFile* root /*none*/);
// char** /*full*/ g_content_type_guess_for_tree (::GFile* root /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> content_type_guess_for_tree (Gio::File root) noexcept
{
  typedef char** (*call_wrap_t) (::GFile* root);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_guess_for_tree;
  auto root_to_c = gi::unwrap (root, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (root_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_content_type_is_a (const gchar* type /*none*/, const gchar* supertype /*none*/);
// gboolean g_content_type_is_a (const char* type /*none*/, const char* supertype /*none*/);
bool content_type_is_a (const gi::cstring_v type, const gi::cstring_v supertype) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type, const char* supertype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_is_a;
  auto supertype_to_c = gi::unwrap (supertype, gi::transfer_none);
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c), (const char*) (supertype_to_c));
  return _temp_ret;
}

// gboolean g_content_type_is_mime_type (const gchar* type /*none*/, const gchar* mime_type /*none*/);
// gboolean g_content_type_is_mime_type (const char* type /*none*/, const char* mime_type /*none*/);
bool content_type_is_mime_type (const gi::cstring_v type, const gi::cstring_v mime_type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_is_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c), (const char*) (mime_type_to_c));
  return _temp_ret;
}

// gboolean g_content_type_is_unknown (const gchar* type /*none*/);
// gboolean g_content_type_is_unknown (const char* type /*none*/);
bool content_type_is_unknown (const gi::cstring_v type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_is_unknown;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return _temp_ret;
}

// void g_content_type_set_mime_dirs (const gchar* const* dirs /*none,nullable*/);
// void g_content_type_set_mime_dirs (const char** dirs /*none,nullable*/);
void content_type_set_mime_dirs (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> dirs) noexcept
{
  typedef void (*call_wrap_t) (const char** dirs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_type_set_mime_dirs;
  auto dirs_w = unwrap (std::move(dirs), gi::transfer_none);
  auto dirs_to_c = dirs_w;
  call_wrap_v ((const char**) (dirs_to_c));
}

// GList* /*full*/ g_content_types_get_registered ();
// ::GList* /*full*/ g_content_types_get_registered ();
gi::Collection<GList, char*, gi::transfer_full_t> content_types_get_registered () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_content_types_get_registered;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<GList, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_dbus_address_escape_value (const gchar* string /*none*/);
// char* /*full*/ g_dbus_address_escape_value (const char* string /*none*/);
gi::cstring dbus_address_escape_value (const gi::cstring_v string) noexcept
{
  typedef char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_escape_value;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_dbus_address_get_for_bus_sync (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_dbus_address_get_for_bus_sync (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type)
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_address_get_stream (const gchar* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_address_get_stream (const char* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void dbus_address_get_stream (const gi::cstring_v address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  call_wrap_v ((const char*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void dbus_address_get_stream (const gi::cstring_v address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  call_wrap_v ((const char*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GIOStream* /*full*/ g_dbus_address_get_stream_finish (GAsyncResult* res /*none*/, gchar** out_guid /*full,out,opt,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_dbus_address_get_stream_finish (::GAsyncResult* res /*none*/, char** out_guid /*full,out,opt,nullable*/, GError ** error);
Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, gi::cstring * out_guid)
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (out_guid ? &out_guid_o : nullptr), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, gi::cstring * out_guid, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (out_guid ? &out_guid_o : nullptr), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_finish (Gio::AsyncResult res)
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (&out_guid_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (&out_guid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GIOStream* /*full*/ g_dbus_address_get_stream_sync (const gchar* address /*none*/, gchar** out_guid /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_dbus_address_get_stream_sync (const char* address /*none*/, char** out_guid /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_guid_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_dbus_escape_object_path (const gchar* s /*none*/);
// char* /*full*/ g_dbus_escape_object_path (const char* s /*none*/);
gi::cstring dbus_escape_object_path (const gi::cstring_v s) noexcept
{
  typedef char* (*call_wrap_t) (const char* s);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_escape_object_path;
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (s_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_dbus_escape_object_path_bytestring (const guint8* bytes /*none*/);
// char* /*full*/ g_dbus_escape_object_path_bytestring (const guint8* bytes /*none*/);
gi::cstring dbus_escape_object_path_bytestring (gi::CollectionParameter<gi::ZTSpan, guint8, gi::transfer_none_t> bytes) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_escape_object_path_bytestring;
  auto bytes_w = unwrap (std::move(bytes), gi::transfer_none);
  auto bytes_to_c = bytes_w;
  auto _temp_ret = call_wrap_v ((const guint8*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_dbus_generate_guid ();
// char* /*full*/ g_dbus_generate_guid ();
gi::cstring dbus_generate_guid () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_generate_guid;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ g_dbus_gvalue_to_gvariant (const GValue* gvalue /*none*/, const GVariantType* type /*none*/);
// ::GVariant* /*full*/ g_dbus_gvalue_to_gvariant (const ::GValue* gvalue /*none*/, const ::GVariantType* type /*none*/);
GLib::Variant dbus_gvalue_to_gvariant (const GObject::Value_Ref gvalue, const GLib::VariantType_Ref type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GValue* gvalue, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_gvalue_to_gvariant;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto gvalue_to_c = gi::unwrap (gvalue, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (gvalue_to_c), (const ::GVariantType*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_gvariant_to_gvalue (GVariant* value /*none*/, GValue* out_gvalue /*none,out,ca*/);
// void g_dbus_gvariant_to_gvalue (::GVariant* value /*none*/, ::GValue* out_gvalue /*none,out,ca*/);
void dbus_gvariant_to_gvalue (GLib::Variant value, GObject::Value & out_gvalue) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, ::GValue* out_gvalue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_gvariant_to_gvalue;
  detail::allocate(out_gvalue);
  static_assert(sizeof(GValue) == sizeof(*(out_gvalue).gobj_()), "");
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GVariant*) (value_to_c), (::GValue*) ((GValue*) (out_gvalue).gobj_()));
}
GObject::Value dbus_gvariant_to_gvalue (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, ::GValue* out_gvalue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_gvariant_to_gvalue;
  GObject::Value out_gvalue_c;
  auto out_gvalue = &out_gvalue_c;
  detail::allocate(*out_gvalue);
  static_assert(sizeof(GValue) == sizeof(*(*out_gvalue).gobj_()), "");
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GVariant*) (value_to_c), (::GValue*) (out_gvalue ? (GValue*) (*out_gvalue).gobj_() : nullptr));
  return out_gvalue_c;
}

// gboolean g_dbus_is_address (const gchar* string /*none*/);
// gboolean g_dbus_is_address (const char* string /*none*/);
bool dbus_is_address (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_error_name (const gchar* string /*none*/);
// gboolean g_dbus_is_error_name (const char* string /*none*/);
bool dbus_is_error_name (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_error_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_guid (const gchar* string /*none*/);
// gboolean g_dbus_is_guid (const char* string /*none*/);
bool dbus_is_guid (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_guid;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_interface_name (const gchar* string /*none*/);
// gboolean g_dbus_is_interface_name (const char* string /*none*/);
bool dbus_is_interface_name (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_interface_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_member_name (const gchar* string /*none*/);
// gboolean g_dbus_is_member_name (const char* string /*none*/);
bool dbus_is_member_name (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_member_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_name (const gchar* string /*none*/);
// gboolean g_dbus_is_name (const char* string /*none*/);
bool dbus_is_name (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_supported_address (const gchar* string /*none*/, GError ** error);
// gboolean g_dbus_is_supported_address (const char* string /*none*/, GError ** error);
bool dbus_is_supported_address (const gi::cstring_v string)
{
  typedef gboolean (*call_wrap_t) (const char* string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_supported_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool dbus_is_supported_address (const gi::cstring_v string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_supported_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_dbus_is_unique_name (const gchar* string /*none*/);
// gboolean g_dbus_is_unique_name (const char* string /*none*/);
bool dbus_is_unique_name (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_is_unique_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// guint8* /*none,nullable*/ g_dbus_unescape_object_path (const gchar* s /*none*/);
// guint8* /*none,nullable*/ g_dbus_unescape_object_path (const char* s /*none*/);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> dbus_unescape_object_path (const gi::cstring_v s) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* s);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_unescape_object_path;
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (s_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// GIOErrorEnum g_io_error_from_errno (gint err_no);
// ::GIOErrorEnum g_io_error_from_errno (gint err_no);
Gio::IOErrorEnum io_error_from_errno (gint err_no) noexcept
{
  typedef ::GIOErrorEnum (*call_wrap_t) (gint err_no);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_error_from_errno;
  auto err_no_to_c = err_no;
  auto _temp_ret = call_wrap_v ((gint) (err_no_to_c));
  return gi::wrap (_temp_ret);
}

// GIOErrorEnum g_io_error_from_file_error (GFileError file_error);
// ::GIOErrorEnum g_io_error_from_file_error (::GFileError file_error);
Gio::IOErrorEnum io_error_from_file_error (GLib::FileError file_error) noexcept
{
  typedef ::GIOErrorEnum (*call_wrap_t) (::GFileError file_error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_error_from_file_error;
  auto file_error_to_c = gi::unwrap (file_error);
  auto _temp_ret = call_wrap_v ((::GFileError) (file_error_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark g_io_error_quark ();
// ::GQuark g_io_error_quark ();
GLib::Quark io_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GList* /*full*/ g_io_modules_load_all_in_directory (const gchar* dirname /*none*/);
// ::GList* /*full*/ g_io_modules_load_all_in_directory (const char* dirname /*none*/);
gi::Collection<GList, ::GIOModule*, gi::transfer_full_t> io_modules_load_all_in_directory (const gi::cstring_v dirname) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* dirname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_modules_load_all_in_directory;
  auto dirname_to_c = gi::unwrap (dirname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (dirname_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GIOModule*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_io_modules_load_all_in_directory_with_scope (const gchar* dirname /*none*/, GIOModuleScope* scope /*none*/);
// ::GList* /*full*/ g_io_modules_load_all_in_directory_with_scope (const char* dirname /*none*/,  scope /*none*/);
// SKIP; scope type  not supported

// void g_io_modules_scan_all_in_directory (const char* dirname /*none*/);
// void g_io_modules_scan_all_in_directory (const char* dirname /*none*/);
void io_modules_scan_all_in_directory (const gi::cstring_v dirname) noexcept
{
  typedef void (*call_wrap_t) (const char* dirname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_modules_scan_all_in_directory;
  auto dirname_to_c = gi::unwrap (dirname, gi::transfer_none);
  call_wrap_v ((const char*) (dirname_to_c));
}

// void g_io_modules_scan_all_in_directory_with_scope (const gchar* dirname /*none*/, GIOModuleScope* scope /*none*/);
// void g_io_modules_scan_all_in_directory_with_scope (const char* dirname /*none*/,  scope /*none*/);
// SKIP; scope type  not supported

// GSettingsBackend* /*full*/ g_keyfile_settings_backend_new (const gchar* filename /*none*/, const gchar* root_path /*none*/, const gchar* root_group /*none,nullable*/);
// ::GSettingsBackend* /*full*/ g_keyfile_settings_backend_new (const char* filename /*none*/, const char* root_path /*none*/, const char* root_group /*none,nullable*/);
Gio::SettingsBackend keyfile_settings_backend_new (const gi::cstring_v filename, const gi::cstring_v root_path, const gi::cstring_v root_group) noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) (const char* filename, const char* root_path, const char* root_group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_keyfile_settings_backend_new;
  auto root_group_to_c = gi::unwrap (root_group, gi::transfer_none);
  auto root_path_to_c = gi::unwrap (root_path, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (root_path_to_c), (const char*) (root_group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SettingsBackend keyfile_settings_backend_new (const gi::cstring_v filename, const gi::cstring_v root_path) noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) (const char* filename, const char* root_path, const char* root_group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_keyfile_settings_backend_new;
  auto root_group_to_c = nullptr;
  auto root_path_to_c = gi::unwrap (root_path, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (root_path_to_c), (const char*) (root_group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSettingsBackend* /*full*/ g_memory_settings_backend_new ();
// ::GSettingsBackend* /*full*/ g_memory_settings_backend_new ();
Gio::SettingsBackend memory_settings_backend_new () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_memory_settings_backend_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_networking_init ();
// void g_networking_init ();
// IGNORE; marked ignore

// GSettingsBackend* /*full*/ g_null_settings_backend_new ();
// ::GSettingsBackend* /*full*/ g_null_settings_backend_new ();
Gio::SettingsBackend null_settings_backend_new () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_null_settings_backend_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSource* /*full*/ g_pollable_source_new (GObject* pollable_stream /*none*/);
// ::GSource* /*full*/ g_pollable_source_new (::GObject* pollable_stream /*none*/);
GLib::Source pollable_source_new (GObject::Object pollable_stream) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_source_new;
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSource* /*full*/ g_pollable_source_new_full (gpointer pollable_stream /*none*/, GSource* child_source /*none,nullable*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_source_new_full (::GObject* pollable_stream /*none*/, ::GSource* child_source /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source pollable_source_new_full (GObject::Object pollable_stream, GLib::Source_Ref child_source, Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_source_new_full;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto child_source_to_c = gi::unwrap (child_source, gi::transfer_none);
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c), (::GSource*) (child_source_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Source pollable_source_new_full (GObject::Object pollable_stream) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_source_new_full;
  auto cancellable_to_c = nullptr;
  auto child_source_to_c = nullptr;
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c), (::GSource*) (child_source_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gssize g_pollable_stream_read (GInputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_stream_read (::GInputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_read;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_read;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_pollable_stream_write (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_stream_write (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_pollable_stream_write_all (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_pollable_stream_write_all (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (count), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// char** /*full*/ g_resources_enumerate_children (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// char** /*full*/ g_resources_enumerate_children (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> resources_enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef char** (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> resources_enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_resources_get_info (const char* path /*none*/, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resources_get_info (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
bool resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags)
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), &error);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  gi::check_error (error);
  return _temp_ret;
}
bool resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), _error ? &_error_o : nullptr);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize, guint32> resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = size_o;
  auto &&tmp_return_3 = flags_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gsize, guint32> resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = size_o;
  auto &&tmp_return_3 = flags_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GBytes* /*full*/ g_resources_lookup_data (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* /*full*/ g_resources_lookup_data (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GLib::Bytes resources_lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GBytes* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes resources_lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full*/ g_resources_open_stream (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* /*full*/ g_resources_open_stream (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
Gio::InputStream resources_open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GInputStream* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream resources_open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_resources_register (GResource* resource /*none*/);
// void g_resources_register (::GResource* resource /*none*/);
void resources_register (Gio::Resource_Ref resource) noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_register;
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none);
  call_wrap_v ((::GResource*) (resource_to_c));
}

// void g_resources_unregister (GResource* resource /*none*/);
// void g_resources_unregister (::GResource* resource /*none*/);
void resources_unregister (Gio::Resource_Ref resource) noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_unregister;
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none);
  call_wrap_v ((::GResource*) (resource_to_c));
}

// gboolean g_unix_is_mount_path_system_internal (const char* mount_path /*none*/);
// gboolean g_unix_is_mount_path_system_internal (const char* mount_path /*none*/);
bool unix_is_mount_path_system_internal (const gi::cstring_v mount_path) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* mount_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_is_mount_path_system_internal;
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c));
  return _temp_ret;
}

// gboolean g_unix_is_system_device_path (const char* device_path /*none*/);
// gboolean g_unix_is_system_device_path (const char* device_path /*none*/);
bool unix_is_system_device_path (const gi::cstring_v device_path) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* device_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_is_system_device_path;
  auto device_path_to_c = gi::unwrap (device_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (device_path_to_c));
  return _temp_ret;
}

// gboolean g_unix_is_system_fs_type (const char* fs_type /*none*/);
// gboolean g_unix_is_system_fs_type (const char* fs_type /*none*/);
bool unix_is_system_fs_type (const gi::cstring_v fs_type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* fs_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_is_system_fs_type;
  auto fs_type_to_c = gi::unwrap (fs_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (fs_type_to_c));
  return _temp_ret;
}

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_at (const char* mount_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_at (const char* mount_path /*none*/, guint64* time_read);
Gio::UnixMountEntry unix_mount_at (const gi::cstring_v mount_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::UnixMountEntry, guint64> unix_mount_at (const gi::cstring_v mount_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint g_unix_mount_compare (GUnixMountEntry* mount1 /*none*/, GUnixMountEntry* mount2 /*none*/);
// gint g_unix_mount_compare (::GUnixMountEntry* mount1 /*none*/, ::GUnixMountEntry* mount2 /*none*/);
gint unix_mount_compare (Gio::UnixMountEntry_Ref mount1, Gio::UnixMountEntry_Ref mount2) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixMountEntry* mount1, ::GUnixMountEntry* mount2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_compare;
  auto mount2_to_c = gi::unwrap (mount2, gi::transfer_none);
  auto mount1_to_c = gi::unwrap (mount1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount1_to_c), (::GUnixMountEntry*) (mount2_to_c));
  return _temp_ret;
}

// GUnixMountEntry* /*full*/ g_unix_mount_copy (GUnixMountEntry* mount_entry /*none*/);
// ::GUnixMountEntry* /*full*/ g_unix_mount_copy (::GUnixMountEntry* mount_entry /*none*/);
Gio::UnixMountEntry unix_mount_copy (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_copy;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_for (const char* file_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_for (const char* file_path /*none*/, guint64* time_read);
Gio::UnixMountEntry unix_mount_for (const gi::cstring_v file_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::UnixMountEntry, guint64> unix_mount_for (const gi::cstring_v file_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* /*none*/ g_unix_mount_get_device_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_device_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v unix_mount_get_device_path (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_get_device_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_get_fs_type (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_fs_type (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v unix_mount_get_fs_type (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_get_fs_type;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_get_mount_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_mount_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v unix_mount_get_mount_path (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_get_mount_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_unix_mount_get_options (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_get_options (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v unix_mount_get_options (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_get_options;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_unix_mount_get_root_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_get_root_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v unix_mount_get_root_path (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_get_root_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_unix_mount_guess_can_eject (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_guess_can_eject (::GUnixMountEntry* mount_entry /*none*/);
bool unix_mount_guess_can_eject (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_guess_can_eject;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// GIcon* /*full*/ g_unix_mount_guess_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_guess_icon (::GUnixMountEntry* mount_entry /*none*/);
Gio::Icon unix_mount_guess_icon (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_guess_icon;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_unix_mount_guess_name (GUnixMountEntry* mount_entry /*none*/);
// char* /*full*/ g_unix_mount_guess_name (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring unix_mount_guess_name (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_guess_name;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_mount_guess_should_display (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_guess_should_display (::GUnixMountEntry* mount_entry /*none*/);
bool unix_mount_guess_should_display (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_guess_should_display;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// GIcon* /*full*/ g_unix_mount_guess_symbolic_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_guess_symbolic_icon (::GUnixMountEntry* mount_entry /*none*/);
Gio::Icon unix_mount_guess_symbolic_icon (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_guess_symbolic_icon;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_mount_is_readonly (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_is_readonly (::GUnixMountEntry* mount_entry /*none*/);
bool unix_mount_is_readonly (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_is_readonly;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// gboolean g_unix_mount_is_system_internal (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_is_system_internal (::GUnixMountEntry* mount_entry /*none*/);
bool unix_mount_is_system_internal (Gio::UnixMountEntry_Ref mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_is_system_internal;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// gboolean g_unix_mount_points_changed_since (guint64 time);
// gboolean g_unix_mount_points_changed_since (guint64 time);
bool unix_mount_points_changed_since (guint64 time) noexcept
{
  typedef gboolean (*call_wrap_t) (guint64 time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_points_changed_since;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((guint64) (time_to_c));
  return _temp_ret;
}

// GList* /*full*/ g_unix_mount_points_get (guint64* time_read);
// ::GList* /*full*/ g_unix_mount_points_get (guint64* time_read);
gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t> unix_mount_points_get (guint64 * time_read) noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_points_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap_to<gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t>, guint64> unix_mount_points_get () noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_points_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_unix_mounts_changed_since (guint64 time);
// gboolean g_unix_mounts_changed_since (guint64 time);
bool unix_mounts_changed_since (guint64 time) noexcept
{
  typedef gboolean (*call_wrap_t) (guint64 time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mounts_changed_since;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((guint64) (time_to_c));
  return _temp_ret;
}

// GList* /*full*/ g_unix_mounts_get (guint64* time_read);
// ::GList* /*full*/ g_unix_mounts_get (guint64* time_read);
gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t> unix_mounts_get (guint64 * time_read) noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mounts_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap_to<gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t>, guint64> unix_mounts_get () noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mounts_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
