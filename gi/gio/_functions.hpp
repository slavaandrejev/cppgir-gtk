// AUTO-GENERATED

#ifndef _GI_GIO__FUNCTIONS_HPP_
#define _GI_GIO__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace DBusErrorNS_ {

// gchar* /*full*/ g_dbus_error_encode_gerror (const GError* error /*none*/);
// char* /*full*/ g_dbus_error_encode_gerror (const ::GError* error /*none*/);
GI_INLINE_DECL gi::cstring encode_gerror (const GLib::Error_Ref error) noexcept;

// gchar* /*full,nullable*/ g_dbus_error_get_remote_error (const GError* error /*none*/);
// char* /*full,nullable*/ g_dbus_error_get_remote_error (const ::GError* error /*none*/);
GI_INLINE_DECL gi::cstring get_remote_error (const GLib::Error_Ref error) noexcept;

// gboolean g_dbus_error_is_remote_error (const GError* error /*none*/);
// gboolean g_dbus_error_is_remote_error (const ::GError* error /*none*/);
GI_INLINE_DECL bool is_remote_error (const GLib::Error_Ref error) noexcept;

// GError* /*full*/ g_dbus_error_new_for_dbus_error (const gchar* dbus_error_name /*none*/, const gchar* dbus_error_message /*none*/);
// ::GError* /*full*/ g_dbus_error_new_for_dbus_error (const char* dbus_error_name /*none*/, const char* dbus_error_message /*none*/);
GI_INLINE_DECL GLib::Error new_for_dbus_error (const gi::cstring_v dbus_error_name, const gi::cstring_v dbus_error_message) noexcept;

// GQuark g_dbus_error_quark ();
// ::GQuark g_dbus_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

// gboolean g_dbus_error_register_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name /*none*/);
// gboolean g_dbus_error_register_error (::GQuark error_domain, gint error_code, const char* dbus_error_name /*none*/);
GI_INLINE_DECL bool register_error (::GQuark error_domain, gint error_code, const gi::cstring_v dbus_error_name) noexcept;

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
GI_INLINE_DECL bool strip_remote_error (GLib::Error_Ref error) noexcept;

// gboolean g_dbus_error_unregister_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name /*none*/);
// gboolean g_dbus_error_unregister_error (::GQuark error_domain, gint error_code, const char* dbus_error_name /*none*/);
GI_INLINE_DECL bool unregister_error (::GQuark error_domain, gint error_code, const gi::cstring_v dbus_error_name) noexcept;

} // namespace DBusErrorNS_

namespace ResolverErrorNS_ {

// GQuark g_resolver_error_quark ();
// ::GQuark g_resolver_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ResolverErrorNS_

namespace ResolverRecordTypeNS_ {

// gint g_resolver_record_type_to_rrtype (GResolverRecordType type);
// gint g_resolver_record_type_to_rrtype (::GResolverRecordType type);
// IGNORE; marked ignore

} // namespace ResolverRecordTypeNS_

namespace ResourceErrorNS_ {

// GQuark g_resource_error_quark ();
// ::GQuark g_resource_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ResourceErrorNS_

namespace TlsChannelBindingErrorNS_ {

// GQuark g_tls_channel_binding_error_quark ();
// ::GQuark g_tls_channel_binding_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TlsChannelBindingErrorNS_

namespace TlsErrorNS_ {

// GQuark g_tls_error_quark ();
// ::GQuark g_tls_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TlsErrorNS_

// void g_bus_get (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_bus_get (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void bus_get (Gio::BusType bus_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void bus_get (Gio::BusType bus_type, Gio::AsyncReadyCallback callback) noexcept;

// GDBusConnection* /*full*/ g_bus_get_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusConnection* /*full*/ g_bus_get_finish (::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::DBusConnection bus_get_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::DBusConnection bus_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* /*full*/ g_bus_get_sync (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusConnection* /*full*/ g_bus_get_sync (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept;

// guint g_bus_own_name (GBusType bus_type, const gchar* name /*none*/, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler /*none,nullable*/, GBusNameAcquiredCallback name_acquired_handler /*none,nullable*/, GBusNameLostCallback name_lost_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_own_name (::GBusType bus_type, const char* name /*none*/, ::GBusNameOwnerFlags flags, Gio::BusAcquiredCallback::cfunction_type bus_acquired_handler /*none,nullable*/, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler /*none,nullable*/, Gio::BusNameLostCallback::cfunction_type name_lost_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info, callback misses closure info

// guint g_bus_own_name_on_connection (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler /*none,nullable*/, GBusNameLostCallback name_lost_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_own_name_on_connection (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameOwnerFlags flags, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler /*none,nullable*/, Gio::BusNameLostCallback::cfunction_type name_lost_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_own_name_on_connection_with_closures (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameOwnerFlags flags, GClosure* name_acquired_closure /*none,nullable*/, GClosure* name_lost_closure /*none,nullable*/);
// guint g_bus_own_name_on_connection_with_closures (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure /*none,nullable*/, ::GClosure* name_lost_closure /*none,nullable*/);
GI_INLINE_DECL guint bus_own_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameOwnerFlags flags, GObject::Closure_Ref name_acquired_closure, GObject::Closure_Ref name_lost_closure) noexcept;
GI_INLINE_DECL guint bus_own_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameOwnerFlags flags) noexcept;

// guint g_bus_own_name_with_closures (GBusType bus_type, const gchar* name /*none*/, GBusNameOwnerFlags flags, GClosure* bus_acquired_closure /*none,nullable*/, GClosure* name_acquired_closure /*none,nullable*/, GClosure* name_lost_closure /*none,nullable*/);
// guint g_bus_own_name_with_closures (::GBusType bus_type, const char* name /*none*/, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure /*none,nullable*/, ::GClosure* name_acquired_closure /*none,nullable*/, ::GClosure* name_lost_closure /*none,nullable*/);
GI_INLINE_DECL guint bus_own_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameOwnerFlags flags, GObject::Closure_Ref bus_acquired_closure, GObject::Closure_Ref name_acquired_closure, GObject::Closure_Ref name_lost_closure) noexcept;
GI_INLINE_DECL guint bus_own_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameOwnerFlags flags) noexcept;

// void g_bus_unown_name (guint owner_id);
// void g_bus_unown_name (guint owner_id);
GI_INLINE_DECL void bus_unown_name (guint owner_id) noexcept;

// void g_bus_unwatch_name (guint watcher_id);
// void g_bus_unwatch_name (guint watcher_id);
GI_INLINE_DECL void bus_unwatch_name (guint watcher_id) noexcept;

// guint g_bus_watch_name (GBusType bus_type, const gchar* name /*none*/, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler /*none,nullable*/, GBusNameVanishedCallback name_vanished_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_watch_name (::GBusType bus_type, const char* name /*none*/, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler /*none,nullable*/, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_watch_name_on_connection (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler /*none,nullable*/, GBusNameVanishedCallback name_vanished_handler /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_bus_watch_name_on_connection (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler /*none,nullable*/, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
// SKIP; callback misses closure info

// guint g_bus_watch_name_on_connection_with_closures (GDBusConnection* connection /*none*/, const gchar* name /*none*/, GBusNameWatcherFlags flags, GClosure* name_appeared_closure /*none,nullable*/, GClosure* name_vanished_closure /*none,nullable*/);
// guint g_bus_watch_name_on_connection_with_closures (::GDBusConnection* connection /*none*/, const char* name /*none*/, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure /*none,nullable*/, ::GClosure* name_vanished_closure /*none,nullable*/);
GI_INLINE_DECL guint bus_watch_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameWatcherFlags flags, GObject::Closure_Ref name_appeared_closure, GObject::Closure_Ref name_vanished_closure) noexcept;
GI_INLINE_DECL guint bus_watch_name_on_connection (Gio::DBusConnection connection, const gi::cstring_v name, Gio::BusNameWatcherFlags flags) noexcept;

// guint g_bus_watch_name_with_closures (GBusType bus_type, const gchar* name /*none*/, GBusNameWatcherFlags flags, GClosure* name_appeared_closure /*none,nullable*/, GClosure* name_vanished_closure /*none,nullable*/);
// guint g_bus_watch_name_with_closures (::GBusType bus_type, const char* name /*none*/, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure /*none,nullable*/, ::GClosure* name_vanished_closure /*none,nullable*/);
GI_INLINE_DECL guint bus_watch_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameWatcherFlags flags, GObject::Closure_Ref name_appeared_closure, GObject::Closure_Ref name_vanished_closure) noexcept;
GI_INLINE_DECL guint bus_watch_name (Gio::BusType bus_type, const gi::cstring_v name, Gio::BusNameWatcherFlags flags) noexcept;

// gboolean g_content_type_can_be_executable (const gchar* type /*none*/);
// gboolean g_content_type_can_be_executable (const char* type /*none*/);
GI_INLINE_DECL bool content_type_can_be_executable (const gi::cstring_v type) noexcept;

// gboolean g_content_type_equals (const gchar* type1 /*none*/, const gchar* type2 /*none*/);
// gboolean g_content_type_equals (const char* type1 /*none*/, const char* type2 /*none*/);
GI_INLINE_DECL bool content_type_equals (const gi::cstring_v type1, const gi::cstring_v type2) noexcept;

// gchar* /*full,nullable*/ g_content_type_from_mime_type (const gchar* mime_type /*none*/);
// char* /*full,nullable*/ g_content_type_from_mime_type (const char* mime_type /*none*/);
GI_INLINE_DECL gi::cstring content_type_from_mime_type (const gi::cstring_v mime_type) noexcept;

// gchar* /*full*/ g_content_type_get_description (const gchar* type /*none*/);
// char* /*full*/ g_content_type_get_description (const char* type /*none*/);
GI_INLINE_DECL gi::cstring content_type_get_description (const gi::cstring_v type) noexcept;

// gchar* /*full,nullable*/ g_content_type_get_generic_icon_name (const gchar* type /*none*/);
// char* /*full,nullable*/ g_content_type_get_generic_icon_name (const char* type /*none*/);
GI_INLINE_DECL gi::cstring content_type_get_generic_icon_name (const gi::cstring_v type) noexcept;

// GIcon* /*full*/ g_content_type_get_icon (const gchar* type /*none*/);
// ::GIcon* /*full*/ g_content_type_get_icon (const char* type /*none*/);
GI_INLINE_DECL Gio::Icon content_type_get_icon (const gi::cstring_v type) noexcept;

// const gchar* const* /*none*/ g_content_type_get_mime_dirs ();
// const char** /*none*/ g_content_type_get_mime_dirs ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> content_type_get_mime_dirs () noexcept;

// gchar* /*full,nullable*/ g_content_type_get_mime_type (const gchar* type /*none*/);
// char* /*full,nullable*/ g_content_type_get_mime_type (const char* type /*none*/);
GI_INLINE_DECL gi::cstring content_type_get_mime_type (const gi::cstring_v type) noexcept;

// GIcon* /*full*/ g_content_type_get_symbolic_icon (const gchar* type /*none*/);
// ::GIcon* /*full*/ g_content_type_get_symbolic_icon (const char* type /*none*/);
GI_INLINE_DECL Gio::Icon content_type_get_symbolic_icon (const gi::cstring_v type) noexcept;

// gchar* /*full*/ g_content_type_guess (const gchar* filename /*none,nullable*/, const guchar* data /*none,nullable*/, gsize data_size, gboolean* result_uncertain);
// char* /*full*/ g_content_type_guess (const char* filename /*none,nullable*/, const guint8* data /*none,nullable*/, gsize data_size, gboolean* result_uncertain);
GI_INLINE_DECL gi::cstring content_type_guess (const gi::cstring_v filename, const guint8 * data, gsize data_size, bool * result_uncertain) noexcept;
GI_INLINE_DECL gi::cstring content_type_guess (const guint8 * data, gsize data_size, bool * result_uncertain) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, bool> content_type_guess (const gi::cstring_v filename, const guint8 * data, gsize data_size) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, bool> content_type_guess (const guint8 * data, gsize data_size) noexcept;

// gchar** /*full*/ g_content_type_guess_for_tree (GFile* root /*none*/);
// char** /*full*/ g_content_type_guess_for_tree (::GFile* root /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> content_type_guess_for_tree (Gio::File root) noexcept;

// gboolean g_content_type_is_a (const gchar* type /*none*/, const gchar* supertype /*none*/);
// gboolean g_content_type_is_a (const char* type /*none*/, const char* supertype /*none*/);
GI_INLINE_DECL bool content_type_is_a (const gi::cstring_v type, const gi::cstring_v supertype) noexcept;

// gboolean g_content_type_is_mime_type (const gchar* type /*none*/, const gchar* mime_type /*none*/);
// gboolean g_content_type_is_mime_type (const char* type /*none*/, const char* mime_type /*none*/);
GI_INLINE_DECL bool content_type_is_mime_type (const gi::cstring_v type, const gi::cstring_v mime_type) noexcept;

// gboolean g_content_type_is_unknown (const gchar* type /*none*/);
// gboolean g_content_type_is_unknown (const char* type /*none*/);
GI_INLINE_DECL bool content_type_is_unknown (const gi::cstring_v type) noexcept;

// void g_content_type_set_mime_dirs (const gchar* const* dirs /*none,nullable*/);
// void g_content_type_set_mime_dirs (const char** dirs /*none,nullable*/);
GI_INLINE_DECL void content_type_set_mime_dirs (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> dirs) noexcept;

// GList* /*full*/ g_content_types_get_registered ();
// ::GList* /*full*/ g_content_types_get_registered ();
GI_INLINE_DECL gi::Collection<GList, char*, gi::transfer_full_t> content_types_get_registered () noexcept;

// gchar* /*full*/ g_dbus_address_escape_value (const gchar* string /*none*/);
// char* /*full*/ g_dbus_address_escape_value (const char* string /*none*/);
GI_INLINE_DECL gi::cstring dbus_address_escape_value (const gi::cstring_v string) noexcept;

// gchar* /*full*/ g_dbus_address_get_for_bus_sync (GBusType bus_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_dbus_address_get_for_bus_sync (::GBusType bus_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type);
GI_INLINE_DECL gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring dbus_address_get_for_bus_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept;

// void g_dbus_address_get_stream (const gchar* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_address_get_stream (const char* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void dbus_address_get_stream (const gi::cstring_v address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void dbus_address_get_stream (const gi::cstring_v address, Gio::AsyncReadyCallback callback) noexcept;

// GIOStream* /*full*/ g_dbus_address_get_stream_finish (GAsyncResult* res /*none*/, gchar** out_guid /*full,out,opt,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_dbus_address_get_stream_finish (::GAsyncResult* res /*none*/, char** out_guid /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, gi::cstring * out_guid);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, gi::cstring * out_guid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GIOStream* /*full*/ g_dbus_address_get_stream_sync (const gchar* address /*none*/, gchar** out_guid /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_dbus_address_get_stream_sync (const char* address /*none*/, char** out_guid /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const gi::cstring_v address, gi::cstring * out_guid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address);
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, gi::cstring> dbus_address_get_stream_sync (const gi::cstring_v address, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_dbus_escape_object_path (const gchar* s /*none*/);
// char* /*full*/ g_dbus_escape_object_path (const char* s /*none*/);
GI_INLINE_DECL gi::cstring dbus_escape_object_path (const gi::cstring_v s) noexcept;

// gchar* /*full*/ g_dbus_escape_object_path_bytestring (const guint8* bytes /*none*/);
// char* /*full*/ g_dbus_escape_object_path_bytestring (const guint8* bytes /*none*/);
GI_INLINE_DECL gi::cstring dbus_escape_object_path_bytestring (gi::CollectionParameter<gi::ZTSpan, guint8, gi::transfer_none_t> bytes) noexcept;

// gchar* /*full*/ g_dbus_generate_guid ();
// char* /*full*/ g_dbus_generate_guid ();
GI_INLINE_DECL gi::cstring dbus_generate_guid () noexcept;

// GVariant* /*full*/ g_dbus_gvalue_to_gvariant (const GValue* gvalue /*none*/, const GVariantType* type /*none*/);
// ::GVariant* /*full*/ g_dbus_gvalue_to_gvariant (const ::GValue* gvalue /*none*/, const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::Variant dbus_gvalue_to_gvariant (const GObject::Value_Ref gvalue, const GLib::VariantType_Ref type) noexcept;

// void g_dbus_gvariant_to_gvalue (GVariant* value /*none*/, GValue* out_gvalue /*none,out,ca*/);
// void g_dbus_gvariant_to_gvalue (::GVariant* value /*none*/, ::GValue* out_gvalue /*none,out,ca*/);
GI_INLINE_DECL void dbus_gvariant_to_gvalue (GLib::Variant value, GObject::Value & out_gvalue) noexcept;
GI_INLINE_DECL GObject::Value dbus_gvariant_to_gvalue (GLib::Variant value) noexcept;

// gboolean g_dbus_is_address (const gchar* string /*none*/);
// gboolean g_dbus_is_address (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_address (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_error_name (const gchar* string /*none*/);
// gboolean g_dbus_is_error_name (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_error_name (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_guid (const gchar* string /*none*/);
// gboolean g_dbus_is_guid (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_guid (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_interface_name (const gchar* string /*none*/);
// gboolean g_dbus_is_interface_name (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_interface_name (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_member_name (const gchar* string /*none*/);
// gboolean g_dbus_is_member_name (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_member_name (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_name (const gchar* string /*none*/);
// gboolean g_dbus_is_name (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_name (const gi::cstring_v string) noexcept;

// gboolean g_dbus_is_supported_address (const gchar* string /*none*/, GError ** error);
// gboolean g_dbus_is_supported_address (const char* string /*none*/, GError ** error);
GI_INLINE_DECL bool dbus_is_supported_address (const gi::cstring_v string);
GI_INLINE_DECL bool dbus_is_supported_address (const gi::cstring_v string, GLib::Error * _error) noexcept;

// gboolean g_dbus_is_unique_name (const gchar* string /*none*/);
// gboolean g_dbus_is_unique_name (const char* string /*none*/);
GI_INLINE_DECL bool dbus_is_unique_name (const gi::cstring_v string) noexcept;

// guint8* /*none,nullable*/ g_dbus_unescape_object_path (const gchar* s /*none*/);
// guint8* /*none,nullable*/ g_dbus_unescape_object_path (const char* s /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> dbus_unescape_object_path (const gi::cstring_v s) noexcept;

// GIOErrorEnum g_io_error_from_errno (gint err_no);
// ::GIOErrorEnum g_io_error_from_errno (gint err_no);
GI_INLINE_DECL Gio::IOErrorEnum io_error_from_errno (gint err_no) noexcept;

// GIOErrorEnum g_io_error_from_file_error (GFileError file_error);
// ::GIOErrorEnum g_io_error_from_file_error (::GFileError file_error);
GI_INLINE_DECL Gio::IOErrorEnum io_error_from_file_error (GLib::FileError file_error) noexcept;

// GQuark g_io_error_quark ();
// ::GQuark g_io_error_quark ();
GI_INLINE_DECL GLib::Quark io_error_quark () noexcept;

// GList* /*full*/ g_io_modules_load_all_in_directory (const gchar* dirname /*none*/);
// ::GList* /*full*/ g_io_modules_load_all_in_directory (const char* dirname /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GIOModule*, gi::transfer_full_t> io_modules_load_all_in_directory (const gi::cstring_v dirname) noexcept;

// GList* /*full*/ g_io_modules_load_all_in_directory_with_scope (const gchar* dirname /*none*/, GIOModuleScope* scope /*none*/);
// ::GList* /*full*/ g_io_modules_load_all_in_directory_with_scope (const char* dirname /*none*/,  scope /*none*/);
// SKIP; scope type  not supported

// void g_io_modules_scan_all_in_directory (const char* dirname /*none*/);
// void g_io_modules_scan_all_in_directory (const char* dirname /*none*/);
GI_INLINE_DECL void io_modules_scan_all_in_directory (const gi::cstring_v dirname) noexcept;

// void g_io_modules_scan_all_in_directory_with_scope (const gchar* dirname /*none*/, GIOModuleScope* scope /*none*/);
// void g_io_modules_scan_all_in_directory_with_scope (const char* dirname /*none*/,  scope /*none*/);
// SKIP; scope type  not supported

// GSettingsBackend* /*full*/ g_keyfile_settings_backend_new (const gchar* filename /*none*/, const gchar* root_path /*none*/, const gchar* root_group /*none,nullable*/);
// ::GSettingsBackend* /*full*/ g_keyfile_settings_backend_new (const char* filename /*none*/, const char* root_path /*none*/, const char* root_group /*none,nullable*/);
GI_INLINE_DECL Gio::SettingsBackend keyfile_settings_backend_new (const gi::cstring_v filename, const gi::cstring_v root_path, const gi::cstring_v root_group) noexcept;
GI_INLINE_DECL Gio::SettingsBackend keyfile_settings_backend_new (const gi::cstring_v filename, const gi::cstring_v root_path) noexcept;

// GSettingsBackend* /*full*/ g_memory_settings_backend_new ();
// ::GSettingsBackend* /*full*/ g_memory_settings_backend_new ();
GI_INLINE_DECL Gio::SettingsBackend memory_settings_backend_new () noexcept;

// void g_networking_init ();
// void g_networking_init ();
// IGNORE; marked ignore

// GSettingsBackend* /*full*/ g_null_settings_backend_new ();
// ::GSettingsBackend* /*full*/ g_null_settings_backend_new ();
GI_INLINE_DECL Gio::SettingsBackend null_settings_backend_new () noexcept;

// GSource* /*full*/ g_pollable_source_new (GObject* pollable_stream /*none*/);
// ::GSource* /*full*/ g_pollable_source_new (::GObject* pollable_stream /*none*/);
GI_INLINE_DECL GLib::Source pollable_source_new (GObject::Object pollable_stream) noexcept;

// GSource* /*full*/ g_pollable_source_new_full (gpointer pollable_stream /*none*/, GSource* child_source /*none,nullable*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_source_new_full (::GObject* pollable_stream /*none*/, ::GSource* child_source /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source pollable_source_new_full (GObject::Object pollable_stream, GLib::Source_Ref child_source, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source pollable_source_new_full (GObject::Object pollable_stream) noexcept;

// gssize g_pollable_stream_read (GInputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_stream_read (::GInputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// gssize g_pollable_stream_write (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_stream_write (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// gboolean g_pollable_stream_write_all (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gboolean blocking, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_pollable_stream_write_all (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, const guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// char** /*full*/ g_resources_enumerate_children (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// char** /*full*/ g_resources_enumerate_children (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> resources_enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> resources_enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// gboolean g_resources_get_info (const char* path /*none*/, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resources_get_info (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
GI_INLINE_DECL bool resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags);
GI_INLINE_DECL bool resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize, guint32> resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::tuple<bool, gsize, guint32> resources_get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GBytes* /*full*/ g_resources_lookup_data (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* /*full*/ g_resources_lookup_data (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL GLib::Bytes resources_lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL GLib::Bytes resources_lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GInputStream* /*full*/ g_resources_open_stream (const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* /*full*/ g_resources_open_stream (const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL Gio::InputStream resources_open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL Gio::InputStream resources_open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// void g_resources_register (GResource* resource /*none*/);
// void g_resources_register (::GResource* resource /*none*/);
GI_INLINE_DECL void resources_register (Gio::Resource_Ref resource) noexcept;

// void g_resources_unregister (GResource* resource /*none*/);
// void g_resources_unregister (::GResource* resource /*none*/);
GI_INLINE_DECL void resources_unregister (Gio::Resource_Ref resource) noexcept;

// gboolean g_unix_is_mount_path_system_internal (const char* mount_path /*none*/);
// gboolean g_unix_is_mount_path_system_internal (const char* mount_path /*none*/);
GI_INLINE_DECL bool unix_is_mount_path_system_internal (const gi::cstring_v mount_path) noexcept;

// gboolean g_unix_is_system_device_path (const char* device_path /*none*/);
// gboolean g_unix_is_system_device_path (const char* device_path /*none*/);
GI_INLINE_DECL bool unix_is_system_device_path (const gi::cstring_v device_path) noexcept;

// gboolean g_unix_is_system_fs_type (const char* fs_type /*none*/);
// gboolean g_unix_is_system_fs_type (const char* fs_type /*none*/);
GI_INLINE_DECL bool unix_is_system_fs_type (const gi::cstring_v fs_type) noexcept;

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_at (const char* mount_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_at (const char* mount_path /*none*/, guint64* time_read);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_at (const gi::cstring_v mount_path, guint64 * time_read) noexcept;
GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> unix_mount_at (const gi::cstring_v mount_path) noexcept;

// gint g_unix_mount_compare (GUnixMountEntry* mount1 /*none*/, GUnixMountEntry* mount2 /*none*/);
// gint g_unix_mount_compare (::GUnixMountEntry* mount1 /*none*/, ::GUnixMountEntry* mount2 /*none*/);
GI_INLINE_DECL gint unix_mount_compare (Gio::UnixMountEntry_Ref mount1, Gio::UnixMountEntry_Ref mount2) noexcept;

// GUnixMountEntry* /*full*/ g_unix_mount_copy (GUnixMountEntry* mount_entry /*none*/);
// ::GUnixMountEntry* /*full*/ g_unix_mount_copy (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_copy (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_for (const char* file_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_for (const char* file_path /*none*/, guint64* time_read);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_for (const gi::cstring_v file_path, guint64 * time_read) noexcept;
GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> unix_mount_for (const gi::cstring_v file_path) noexcept;

// const char* /*none*/ g_unix_mount_get_device_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_device_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v unix_mount_get_device_path (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// const char* /*none*/ g_unix_mount_get_fs_type (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_fs_type (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v unix_mount_get_fs_type (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// const char* /*none*/ g_unix_mount_get_mount_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_get_mount_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v unix_mount_get_mount_path (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// const char* /*none,nullable*/ g_unix_mount_get_options (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_get_options (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v unix_mount_get_options (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// const char* /*none,nullable*/ g_unix_mount_get_root_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_get_root_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v unix_mount_get_root_path (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// gboolean g_unix_mount_guess_can_eject (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_guess_can_eject (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool unix_mount_guess_can_eject (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// GIcon* /*full*/ g_unix_mount_guess_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_guess_icon (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::Icon unix_mount_guess_icon (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// char* /*full*/ g_unix_mount_guess_name (GUnixMountEntry* mount_entry /*none*/);
// char* /*full*/ g_unix_mount_guess_name (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring unix_mount_guess_name (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// gboolean g_unix_mount_guess_should_display (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_guess_should_display (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool unix_mount_guess_should_display (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// GIcon* /*full*/ g_unix_mount_guess_symbolic_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_guess_symbolic_icon (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::Icon unix_mount_guess_symbolic_icon (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// gboolean g_unix_mount_is_readonly (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_is_readonly (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool unix_mount_is_readonly (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// gboolean g_unix_mount_is_system_internal (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_is_system_internal (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool unix_mount_is_system_internal (Gio::UnixMountEntry_Ref mount_entry) noexcept;

// gboolean g_unix_mount_points_changed_since (guint64 time);
// gboolean g_unix_mount_points_changed_since (guint64 time);
GI_INLINE_DECL bool unix_mount_points_changed_since (guint64 time) noexcept;

// GList* /*full*/ g_unix_mount_points_get (guint64* time_read);
// ::GList* /*full*/ g_unix_mount_points_get (guint64* time_read);
GI_INLINE_DECL gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t> unix_mount_points_get (guint64 * time_read) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<GList, ::GUnixMountPoint*, gi::transfer_full_t>, guint64> unix_mount_points_get () noexcept;

// gboolean g_unix_mounts_changed_since (guint64 time);
// gboolean g_unix_mounts_changed_since (guint64 time);
GI_INLINE_DECL bool unix_mounts_changed_since (guint64 time) noexcept;

// GList* /*full*/ g_unix_mounts_get (guint64* time_read);
// ::GList* /*full*/ g_unix_mounts_get (guint64* time_read);
GI_INLINE_DECL gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t> unix_mounts_get (guint64 * time_read) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<GList, ::GUnixMountEntry*, gi::transfer_full_t>, guint64> unix_mounts_get () noexcept;

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
