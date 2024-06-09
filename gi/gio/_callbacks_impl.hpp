// AUTO-GENERATED

#ifndef _GI_GIO__CALLBACKS_IMPL_HPP_
#define _GI_GIO__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

// typedef void (*GAsyncReadyCallback) (GObject* source_object /*none,nullable*/, GAsyncResult* res /*none*/, gpointer data);
// typedef void (*GAsyncReadyCallback) (::GObject* source_object /*none,nullable*/, ::GAsyncResult* res /*none*/, void* data);
namespace internal {

void AsyncReadyCallback_CF (GObject::Object source_object, Gio::AsyncResult res, AsyncReadyCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none);
  _call ((::GObject*) (source_object_to_c), (::GAsyncResult*) (res_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef void (*GBusAcquiredCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusAcquiredCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

void BusAcquiredCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusAcquiredCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GBusNameAcquiredCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameAcquiredCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

void BusNameAcquiredCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameAcquiredCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GBusNameAppearedCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, const gchar* name_owner /*none*/, gpointer user_data);
// typedef void (*GBusNameAppearedCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, const char* name_owner /*none*/, void* user_data);
namespace internal {

void BusNameAppearedCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, const gi::cstring_v name_owner, BusNameAppearedCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto name_owner_to_c = gi::unwrap (name_owner, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (const char*) (name_owner_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GBusNameLostCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameLostCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

void BusNameLostCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameLostCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GBusNameVanishedCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameVanishedCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

void BusNameVanishedCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameVanishedCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GCancellableSourceFunc) (GCancellable* cancellable /*none,nullable*/, gpointer data);
// typedef gboolean (*GCancellableSourceFunc) (::GCancellable* cancellable /*none,nullable*/, void* data);
namespace internal {

bool CancellableSourceFunc_CF (Gio::Cancellable cancellable, CancellableSourceFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = _call ((::GCancellable*) (cancellable_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef GVariant* /*full*/ (*GDBusInterfaceGetPropertyFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* property_name /*none*/, GError** error /*none*/, gpointer user_data);
// typedef ::GVariant* /*full*/ (*GDBusInterfaceGetPropertyFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* property_name /*none*/, ::GError* error /*none*/, void* user_data);
// SKIP; inconsistent error in pointer depth (2 vs 1)

// typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none*/, GDBusMethodInvocation* invocation /*full*/, gpointer user_data);
// typedef void (*GDBusInterfaceMethodCallFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none*/, ::GDBusMethodInvocation* invocation /*full*/, void* user_data);
namespace internal {

void DBusInterfaceMethodCallFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusMethodInvocation invocation, DBusInterfaceMethodCallFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto sender_to_c = gi::unwrap (sender, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (sender_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusMethodInvocation*) (invocation_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* property_name /*none*/, GVariant* value /*none*/, GError** error /*none*/, gpointer user_data);
// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* property_name /*none*/, ::GVariant* value /*none*/, ::GError* error /*none*/, void* user_data);
// SKIP; inconsistent error in pointer depth (2 vs 1)

// typedef GDBusMessage* /*full,nullable*/ (*GDBusMessageFilterFunction) (GDBusConnection* connection /*none*/, GDBusMessage* message /*full*/, gboolean incoming, gpointer user_data);
// typedef ::GDBusMessage* /*full,nullable*/ (*GDBusMessageFilterFunction) (::GDBusConnection* connection /*none*/, ::GDBusMessage* message /*full*/, gboolean incoming, void* user_data);
namespace internal {

Gio::DBusMessage DBusMessageFilterFunction_CF (Gio::DBusConnection connection, Gio::DBusMessage message, gboolean incoming, DBusMessageFilterFunction_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto incoming_to_c = incoming;
  auto message_to_c = gi::unwrap (message, gi::transfer_full);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = _call ((::GDBusConnection*) (connection_to_c), (::GDBusMessage*) (message_to_c), (gboolean) (incoming_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef GType (*GDBusProxyTypeFunc) (GDBusObjectManagerClient* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none,nullable*/, gpointer data);
// typedef GType (*GDBusProxyTypeFunc) (::GDBusObjectManagerClient* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none,nullable*/, void* data);
namespace internal {

GType DBusProxyTypeFunc_CF (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, const gi::cstring_v interface_name, DBusProxyTypeFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none);
  auto _temp_ret = _call ((::GDBusObjectManagerClient*) (manager_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GDBusSignalCallback) (GDBusConnection* connection /*none*/, const gchar* sender_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/, gpointer user_data);
// typedef void (*GDBusSignalCallback) (::GDBusConnection* connection /*none*/, const char* sender_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/, void* user_data);
namespace internal {

void DBusSignalCallback_CF (Gio::DBusConnection connection, const gi::cstring_v sender_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Variant parameters, DBusSignalCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto sender_name_to_c = gi::unwrap (sender_name, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  _call ((::GDBusConnection*) (connection_to_c), (const char*) (sender_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef const GDBusInterfaceVTable* /*none,nullable*/ (*GDBusSubtreeDispatchFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* node /*none*/, gpointer* out_user_data, gpointer user_data);
// typedef const ::GDBusInterfaceVTable* /*none,nullable*/ (*GDBusSubtreeDispatchFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* node /*none*/, void* out_user_data, void* user_data);
// SKIP; inconsistent out_user_data in pointer depth (2 vs 1)

// typedef gchar** /*full*/ (*GDBusSubtreeEnumerateFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, gpointer user_data);
// typedef char** /*full*/ (*GDBusSubtreeEnumerateFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, void* user_data);
namespace internal {

gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> DBusSubtreeEnumerateFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, DBusSubtreeEnumerateFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto sender_to_c = gi::unwrap (sender, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = _call ((::GDBusConnection*) (connection_to_c), (const char*) (sender_to_c), (const char*) (object_path_to_c), (void*) (user_data_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef GDBusInterfaceInfo** /*full,nullable*/ (*GDBusSubtreeIntrospectFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* node /*none*/, gpointer user_data);
// typedef ::GDBusInterfaceInfo** /*full,nullable*/ (*GDBusSubtreeIntrospectFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* node /*none*/, void* user_data);
namespace internal {

gi::Collection<gi::ZTSpan, ::GDBusInterfaceInfo*, gi::transfer_full_t> DBusSubtreeIntrospectFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v node, DBusSubtreeIntrospectFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto node_to_c = gi::unwrap (node, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto sender_to_c = gi::unwrap (sender, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = _call ((::GDBusConnection*) (connection_to_c), (const char*) (sender_to_c), (const char*) (object_path_to_c), (const char*) (node_to_c), (void*) (user_data_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, ::GDBusInterfaceInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef gboolean (*GDatagramBasedSourceFunc) (GDatagramBased* datagram_based /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GDatagramBasedSourceFunc) (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, void* data);
namespace internal {

bool DatagramBasedSourceFunc_CF (Gio::DatagramBased datagram_based, GLib::IOCondition condition, DatagramBasedSourceFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto condition_to_c = gi::unwrap (condition);
  auto datagram_based_to_c = gi::unwrap (datagram_based, gi::transfer_none);
  auto _temp_ret = _call ((::GDatagramBased*) (datagram_based_to_c), (::GIOCondition) (condition_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GDesktopAppLaunchCallback) (GDesktopAppInfo* appinfo /*none*/, GPid pid, gpointer user_data);
// typedef void (*GDesktopAppLaunchCallback) (::GDesktopAppInfo* appinfo /*none*/, ::GPid pid, void* user_data);
namespace internal {

void DesktopAppLaunchCallback_CF (Gio::DesktopAppInfo appinfo, ::GPid pid, DesktopAppLaunchCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto pid_to_c = pid;
  auto appinfo_to_c = gi::unwrap (appinfo, gi::transfer_none);
  _call ((::GDesktopAppInfo*) (appinfo_to_c), (::GPid) (pid_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data);
// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, void* data);
namespace internal {

void FileMeasureProgressCallback_CF (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, FileMeasureProgressCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto num_files_to_c = num_files;
  auto num_dirs_to_c = num_dirs;
  auto current_size_to_c = current_size;
  auto reporting_to_c = reporting;
  _call ((gboolean) (reporting_to_c), (guint64) (current_size_to_c), (guint64) (num_dirs_to_c), (guint64) (num_files_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef void (*GFileProgressCallback) (goffset current_num_bytes, goffset total_num_bytes, gpointer data);
// typedef void (*GFileProgressCallback) (gint64 current_num_bytes, gint64 total_num_bytes, void* data);
namespace internal {

void FileProgressCallback_CF (gint64 current_num_bytes, gint64 total_num_bytes, FileProgressCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto total_num_bytes_to_c = total_num_bytes;
  auto current_num_bytes_to_c = current_num_bytes;
  _call ((gint64) (current_num_bytes_to_c), (gint64) (total_num_bytes_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents /*none*/, goffset file_size, gpointer callback_data);
// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents /*none*/, gint64 file_size, void* callback_data);
namespace internal {

bool FileReadMoreCallback_CF (const gi::cstring_v file_contents, gint64 file_size, FileReadMoreCallback_CF_CType _call, gpointer callback_data) noexcept
{
  auto callback_data_to_c = callback_data;
  auto file_size_to_c = file_size;
  auto file_contents_to_c = gi::unwrap (file_contents, gi::transfer_none);
  auto _temp_ret = _call ((const char*) (file_contents_to_c), (gint64) (file_size_to_c), (void*) (callback_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GPollableSourceFunc) (GObject* pollable_stream /*none*/, gpointer data);
// typedef gboolean (*GPollableSourceFunc) (::GObject* pollable_stream /*none*/, void* data);
namespace internal {

bool PollableSourceFunc_CF (GObject::Object pollable_stream, PollableSourceFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (pollable_stream_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gpointer (*GReallocFunc) (gpointer data, gsize size);
// typedef void* (*GReallocFunc) (void* data, gsize size);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSettingsBindGetMapping) (GValue* value /*none*/, GVariant* variant /*none*/, gpointer user_data);
// typedef gboolean (*GSettingsBindGetMapping) (::GValue* value /*none*/, ::GVariant* variant /*none*/, void* user_data);
namespace internal {

bool SettingsBindGetMapping_CF (GObject::Value_Ref value, GLib::Variant variant, SettingsBindGetMapping_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = _call ((::GValue*) (value_to_c), (::GVariant*) (variant_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef GVariant* /*full*/ (*GSettingsBindSetMapping) (const GValue* value /*none*/, const GVariantType* expected_type /*none*/, gpointer user_data);
// typedef ::GVariant* /*full*/ (*GSettingsBindSetMapping) (const ::GValue* value /*none*/, const ::GVariantType* expected_type /*none*/, void* user_data);
namespace internal {

GLib::Variant SettingsBindSetMapping_CF (const GObject::Value_Ref value, const GLib::VariantType_Ref expected_type, SettingsBindSetMapping_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = _call ((const ::GValue*) (value_to_c), (const ::GVariantType*) (expected_type_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef gboolean (*GSettingsGetMapping) (GVariant* value /*none*/, gpointer* result, gpointer user_data);
// typedef gboolean (*GSettingsGetMapping) (::GVariant* value /*none*/, void** result, void* user_data);
namespace internal {

bool SettingsGetMapping_CF (GLib::Variant value, gpointer & result, SettingsGetMapping_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  void* result_o {};
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = _call ((::GVariant*) (value_to_c), (void**) (&result_o), (void*) (user_data_to_c));
  result = result_o;
  return _temp_ret;
}
} // namespace internal


// typedef void (*GSimpleAsyncThreadFunc) (GSimpleAsyncResult* res /*none*/, GObject* object /*none*/, GCancellable* cancellable /*none,nullable*/);
// typedef void (*GSimpleAsyncThreadFunc) (::GSimpleAsyncResult* res /*none*/, ::GObject* object /*none*/, ::GCancellable* cancellable /*none,nullable*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSocketSourceFunc) (GSocket* socket /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GSocketSourceFunc) (::GSocket* socket /*none*/, ::GIOCondition condition, void* data);
namespace internal {

bool SocketSourceFunc_CF (Gio::Socket socket, GLib::IOCondition condition, SocketSourceFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto condition_to_c = gi::unwrap (condition);
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none);
  auto _temp_ret = _call ((::GSocket*) (socket_to_c), (::GIOCondition) (condition_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GTaskThreadFunc) (GTask* task /*none*/, gpointer source_object /*none*/, gpointer task_data, GCancellable* cancellable /*none,nullable*/);
// typedef void (*GTaskThreadFunc) (::GTask* task /*none*/, ::GObject* source_object /*none*/, void* task_data, ::GCancellable* cancellable /*none,nullable*/);
// SKIP; not a callback since no user_data

// typedef GFile* /*full*/ (*GVfsFileLookupFunc) (GVfs* vfs /*none*/, const char* identifier /*none*/, gpointer user_data);
// typedef ::GFile* /*full*/ (*GVfsFileLookupFunc) (::GVfs* vfs /*none*/, const char* identifier /*none*/, void* user_data);
namespace internal {

Gio::File VfsFileLookupFunc_CF (Gio::Vfs vfs, const gi::cstring_v identifier, VfsFileLookupFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none);
  auto vfs_to_c = gi::unwrap (vfs, gi::transfer_none);
  auto _temp_ret = _call ((::GVfs*) (vfs_to_c), (const char*) (identifier_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


} // namespace Gio

} // namespace repository

} // namespace gi

#endif
