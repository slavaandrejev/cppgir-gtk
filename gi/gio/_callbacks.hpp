// AUTO-GENERATED

#ifndef _GI_GIO__CALLBACKS_HPP_
#define _GI_GIO__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class DBusInterfaceVTable;
class DBusInterfaceVTable_Ref;
class DBusMessage;
class DBusMethodInvocation;
class DBusObjectManagerClient;
class DatagramBased;
class DesktopAppInfo;
class File;
class SimpleAsyncResult;
class Socket;
class Task;
class Vfs;

// typedef void (*GAsyncReadyCallback) (GObject* source_object /*none,nullable*/, GAsyncResult* res /*none*/, gpointer data);
// typedef void (*GAsyncReadyCallback) (::GObject* source_object /*none,nullable*/, ::GAsyncResult* res /*none*/, void* data);
namespace internal {

typedef void (*AsyncReadyCallback_CF_CType) (::GObject* source_object, ::GAsyncResult* res, void* data);
GI_INLINE_DECL void AsyncReadyCallback_CF (GObject::Object source_object, Gio::AsyncResult res, AsyncReadyCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(AsyncReadyCallback_CB_Trait, AsyncReadyCallback_CF_CType, AsyncReadyCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(GObject::Object source_object, Gio::AsyncResult res), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> AsyncReadyCallback;

// typedef void (*GBusAcquiredCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusAcquiredCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

typedef void (*BusAcquiredCallback_CF_CType) (::GDBusConnection* connection, const char* name, void* user_data);
GI_INLINE_DECL void BusAcquiredCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusAcquiredCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BusAcquiredCallback_CB_Trait, BusAcquiredCallback_CF_CType, BusAcquiredCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> BusAcquiredCallback;

// typedef void (*GBusNameAcquiredCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameAcquiredCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

typedef void (*BusNameAcquiredCallback_CF_CType) (::GDBusConnection* connection, const char* name, void* user_data);
GI_INLINE_DECL void BusNameAcquiredCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameAcquiredCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BusNameAcquiredCallback_CB_Trait, BusNameAcquiredCallback_CF_CType, BusNameAcquiredCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> BusNameAcquiredCallback;

// typedef void (*GBusNameAppearedCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, const gchar* name_owner /*none*/, gpointer user_data);
// typedef void (*GBusNameAppearedCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, const char* name_owner /*none*/, void* user_data);
namespace internal {

typedef void (*BusNameAppearedCallback_CF_CType) (::GDBusConnection* connection, const char* name, const char* name_owner, void* user_data);
GI_INLINE_DECL void BusNameAppearedCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, const gi::cstring_v name_owner, BusNameAppearedCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BusNameAppearedCallback_CB_Trait, BusNameAppearedCallback_CF_CType, BusNameAppearedCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v name, const gi::cstring_v name_owner), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> BusNameAppearedCallback;

// typedef void (*GBusNameLostCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameLostCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

typedef void (*BusNameLostCallback_CF_CType) (::GDBusConnection* connection, const char* name, void* user_data);
GI_INLINE_DECL void BusNameLostCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameLostCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BusNameLostCallback_CB_Trait, BusNameLostCallback_CF_CType, BusNameLostCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> BusNameLostCallback;

// typedef void (*GBusNameVanishedCallback) (GDBusConnection* connection /*none*/, const gchar* name /*none*/, gpointer user_data);
// typedef void (*GBusNameVanishedCallback) (::GDBusConnection* connection /*none*/, const char* name /*none*/, void* user_data);
namespace internal {

typedef void (*BusNameVanishedCallback_CF_CType) (::GDBusConnection* connection, const char* name, void* user_data);
GI_INLINE_DECL void BusNameVanishedCallback_CF (Gio::DBusConnection connection, const gi::cstring_v name, BusNameVanishedCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BusNameVanishedCallback_CB_Trait, BusNameVanishedCallback_CF_CType, BusNameVanishedCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> BusNameVanishedCallback;

// typedef gboolean (*GCancellableSourceFunc) (GCancellable* cancellable /*none,nullable*/, gpointer data);
// typedef gboolean (*GCancellableSourceFunc) (::GCancellable* cancellable /*none,nullable*/, void* data);
namespace internal {

typedef gboolean (*CancellableSourceFunc_CF_CType) (::GCancellable* cancellable, void* data);
GI_INLINE_DECL bool CancellableSourceFunc_CF (Gio::Cancellable cancellable, CancellableSourceFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CancellableSourceFunc_CB_Trait, CancellableSourceFunc_CF_CType, CancellableSourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gio::Cancellable cancellable), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> CancellableSourceFunc;

// typedef GVariant* /*full*/ (*GDBusInterfaceGetPropertyFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* property_name /*none*/, GError** error /*none*/, gpointer user_data);
// typedef ::GVariant* /*full*/ (*GDBusInterfaceGetPropertyFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* property_name /*none*/, ::GError* error /*none*/, void* user_data);
// SKIP; inconsistent error in pointer depth (2 vs 1)

// typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none*/, GDBusMethodInvocation* invocation /*full*/, gpointer user_data);
// typedef void (*GDBusInterfaceMethodCallFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none*/, ::GDBusMethodInvocation* invocation /*full*/, void* user_data);
namespace internal {

typedef void (*DBusInterfaceMethodCallFunc_CF_CType) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, ::GDBusMethodInvocation* invocation, void* user_data);
GI_INLINE_DECL void DBusInterfaceMethodCallFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusMethodInvocation invocation, DBusInterfaceMethodCallFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusInterfaceMethodCallFunc_CB_Trait, DBusInterfaceMethodCallFunc_CF_CType, DBusInterfaceMethodCallFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusMethodInvocation invocation), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>> DBusInterfaceMethodCallFunc;

// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* property_name /*none*/, GVariant* value /*none*/, GError** error /*none*/, gpointer user_data);
// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* property_name /*none*/, ::GVariant* value /*none*/, ::GError* error /*none*/, void* user_data);
// SKIP; inconsistent error in pointer depth (2 vs 1)

// typedef GDBusMessage* /*full,nullable*/ (*GDBusMessageFilterFunction) (GDBusConnection* connection /*none*/, GDBusMessage* message /*full*/, gboolean incoming, gpointer user_data);
// typedef ::GDBusMessage* /*full,nullable*/ (*GDBusMessageFilterFunction) (::GDBusConnection* connection /*none*/, ::GDBusMessage* message /*full*/, gboolean incoming, void* user_data);
namespace internal {

typedef ::GDBusMessage* (*DBusMessageFilterFunction_CF_CType) (::GDBusConnection* connection, ::GDBusMessage* message, gboolean incoming, void* user_data);
GI_INLINE_DECL Gio::DBusMessage DBusMessageFilterFunction_CF (Gio::DBusConnection connection, Gio::DBusMessage message, gboolean incoming, DBusMessageFilterFunction_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusMessageFilterFunction_CB_Trait, DBusMessageFilterFunction_CF_CType, DBusMessageFilterFunction_CF);
} // namespace internal

typedef gi::detail::callback<Gio::DBusMessage(Gio::DBusConnection connection, Gio::DBusMessage message, gboolean incoming), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_none_t>> DBusMessageFilterFunction;

// typedef GType (*GDBusProxyTypeFunc) (GDBusObjectManagerClient* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none,nullable*/, gpointer data);
// typedef GType (*GDBusProxyTypeFunc) (::GDBusObjectManagerClient* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none,nullable*/, void* data);
namespace internal {

typedef GType (*DBusProxyTypeFunc_CF_CType) (::GDBusObjectManagerClient* manager, const char* object_path, const char* interface_name, void* data);
GI_INLINE_DECL GType DBusProxyTypeFunc_CF (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, const gi::cstring_v interface_name, DBusProxyTypeFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusProxyTypeFunc_CB_Trait, DBusProxyTypeFunc_CF_CType, DBusProxyTypeFunc_CF);
} // namespace internal

typedef gi::detail::callback<GType(Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, const gi::cstring_v interface_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> DBusProxyTypeFunc;

// typedef void (*GDBusSignalCallback) (GDBusConnection* connection /*none*/, const gchar* sender_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/, gpointer user_data);
// typedef void (*GDBusSignalCallback) (::GDBusConnection* connection /*none*/, const char* sender_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/, void* user_data);
namespace internal {

typedef void (*DBusSignalCallback_CF_CType) (::GDBusConnection* connection, const char* sender_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, void* user_data);
GI_INLINE_DECL void DBusSignalCallback_CF (Gio::DBusConnection connection, const gi::cstring_v sender_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Variant parameters, DBusSignalCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusSignalCallback_CB_Trait, DBusSignalCallback_CF_CType, DBusSignalCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DBusConnection connection, const gi::cstring_v sender_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Variant parameters), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> DBusSignalCallback;

// typedef const GDBusInterfaceVTable* /*none,nullable*/ (*GDBusSubtreeDispatchFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* node /*none*/, gpointer* out_user_data, gpointer user_data);
// typedef const ::GDBusInterfaceVTable* /*none,nullable*/ (*GDBusSubtreeDispatchFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* node /*none*/, void* out_user_data, void* user_data);
// SKIP; inconsistent out_user_data in pointer depth (2 vs 1)

// typedef gchar** /*full*/ (*GDBusSubtreeEnumerateFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, gpointer user_data);
// typedef char** /*full*/ (*GDBusSubtreeEnumerateFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, void* user_data);
namespace internal {

typedef char** (*DBusSubtreeEnumerateFunc_CF_CType) (::GDBusConnection* connection, const char* sender, const char* object_path, void* user_data);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> DBusSubtreeEnumerateFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, DBusSubtreeEnumerateFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusSubtreeEnumerateFunc_CB_Trait, DBusSubtreeEnumerateFunc_CF_CType, DBusSubtreeEnumerateFunc_CF);
} // namespace internal

typedef gi::detail::callback<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>(Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> DBusSubtreeEnumerateFunc;

// typedef GDBusInterfaceInfo** /*full,nullable*/ (*GDBusSubtreeIntrospectFunc) (GDBusConnection* connection /*none*/, const gchar* sender /*none*/, const gchar* object_path /*none*/, const gchar* node /*none*/, gpointer user_data);
// typedef ::GDBusInterfaceInfo** /*full,nullable*/ (*GDBusSubtreeIntrospectFunc) (::GDBusConnection* connection /*none*/, const char* sender /*none*/, const char* object_path /*none*/, const char* node /*none*/, void* user_data);
namespace internal {

typedef ::GDBusInterfaceInfo** (*DBusSubtreeIntrospectFunc_CF_CType) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* node, void* user_data);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, ::GDBusInterfaceInfo*, gi::transfer_full_t> DBusSubtreeIntrospectFunc_CF (Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v node, DBusSubtreeIntrospectFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DBusSubtreeIntrospectFunc_CB_Trait, DBusSubtreeIntrospectFunc_CF_CType, DBusSubtreeIntrospectFunc_CF);
} // namespace internal

typedef gi::detail::callback<gi::Collection<gi::ZTSpan, ::GDBusInterfaceInfo*, gi::transfer_full_t>(Gio::DBusConnection connection, const gi::cstring_v sender, const gi::cstring_v object_path, const gi::cstring_v node), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> DBusSubtreeIntrospectFunc;

// typedef gboolean (*GDatagramBasedSourceFunc) (GDatagramBased* datagram_based /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GDatagramBasedSourceFunc) (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, void* data);
namespace internal {

typedef gboolean (*DatagramBasedSourceFunc_CF_CType) (::GDatagramBased* datagram_based, ::GIOCondition condition, void* data);
GI_INLINE_DECL bool DatagramBasedSourceFunc_CF (Gio::DatagramBased datagram_based, GLib::IOCondition condition, DatagramBasedSourceFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DatagramBasedSourceFunc_CB_Trait, DatagramBasedSourceFunc_CF_CType, DatagramBasedSourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gio::DatagramBased datagram_based, GLib::IOCondition condition), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> DatagramBasedSourceFunc;

// typedef void (*GDesktopAppLaunchCallback) (GDesktopAppInfo* appinfo /*none*/, GPid pid, gpointer user_data);
// typedef void (*GDesktopAppLaunchCallback) (::GDesktopAppInfo* appinfo /*none*/, ::GPid pid, void* user_data);
namespace internal {

typedef void (*DesktopAppLaunchCallback_CF_CType) (::GDesktopAppInfo* appinfo, ::GPid pid, void* user_data);
GI_INLINE_DECL void DesktopAppLaunchCallback_CF (Gio::DesktopAppInfo appinfo, ::GPid pid, DesktopAppLaunchCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DesktopAppLaunchCallback_CB_Trait, DesktopAppLaunchCallback_CF_CType, DesktopAppLaunchCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(Gio::DesktopAppInfo appinfo, ::GPid pid), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> DesktopAppLaunchCallback;

// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data);
// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, void* data);
namespace internal {

typedef void (*FileMeasureProgressCallback_CF_CType) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, void* data);
GI_INLINE_DECL void FileMeasureProgressCallback_CF (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, FileMeasureProgressCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FileMeasureProgressCallback_CB_Trait, FileMeasureProgressCallback_CF_CType, FileMeasureProgressCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> FileMeasureProgressCallback;

// typedef void (*GFileProgressCallback) (goffset current_num_bytes, goffset total_num_bytes, gpointer data);
// typedef void (*GFileProgressCallback) (gint64 current_num_bytes, gint64 total_num_bytes, void* data);
namespace internal {

typedef void (*FileProgressCallback_CF_CType) (gint64 current_num_bytes, gint64 total_num_bytes, void* data);
GI_INLINE_DECL void FileProgressCallback_CF (gint64 current_num_bytes, gint64 total_num_bytes, FileProgressCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FileProgressCallback_CB_Trait, FileProgressCallback_CF_CType, FileProgressCallback_CF);
} // namespace internal

typedef gi::detail::callback<void(gint64 current_num_bytes, gint64 total_num_bytes), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FileProgressCallback;

// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents /*none*/, goffset file_size, gpointer callback_data);
// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents /*none*/, gint64 file_size, void* callback_data);
namespace internal {

typedef gboolean (*FileReadMoreCallback_CF_CType) (const char* file_contents, gint64 file_size, void* callback_data);
GI_INLINE_DECL bool FileReadMoreCallback_CF (const gi::cstring_v file_contents, gint64 file_size, FileReadMoreCallback_CF_CType _call, gpointer callback_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FileReadMoreCallback_CB_Trait, FileReadMoreCallback_CF_CType, FileReadMoreCallback_CF);
} // namespace internal

typedef gi::detail::callback<bool(const gi::cstring_v file_contents, gint64 file_size), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FileReadMoreCallback;

// typedef gboolean (*GPollableSourceFunc) (GObject* pollable_stream /*none*/, gpointer data);
// typedef gboolean (*GPollableSourceFunc) (::GObject* pollable_stream /*none*/, void* data);
namespace internal {

typedef gboolean (*PollableSourceFunc_CF_CType) (::GObject* pollable_stream, void* data);
GI_INLINE_DECL bool PollableSourceFunc_CF (GObject::Object pollable_stream, PollableSourceFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PollableSourceFunc_CB_Trait, PollableSourceFunc_CF_CType, PollableSourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GObject::Object pollable_stream), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> PollableSourceFunc;

// typedef gpointer (*GReallocFunc) (gpointer data, gsize size);
// typedef void* (*GReallocFunc) (void* data, gsize size);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSettingsBindGetMapping) (GValue* value /*none*/, GVariant* variant /*none*/, gpointer user_data);
// typedef gboolean (*GSettingsBindGetMapping) (::GValue* value /*none*/, ::GVariant* variant /*none*/, void* user_data);
namespace internal {

typedef gboolean (*SettingsBindGetMapping_CF_CType) (::GValue* value, ::GVariant* variant, void* user_data);
GI_INLINE_DECL bool SettingsBindGetMapping_CF (GObject::Value_Ref value, GLib::Variant variant, SettingsBindGetMapping_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SettingsBindGetMapping_CB_Trait, SettingsBindGetMapping_CF_CType, SettingsBindGetMapping_CF);
} // namespace internal

typedef gi::detail::callback<bool(GObject::Value_Ref value, GLib::Variant variant), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> SettingsBindGetMapping;

// typedef GVariant* /*full*/ (*GSettingsBindSetMapping) (const GValue* value /*none*/, const GVariantType* expected_type /*none*/, gpointer user_data);
// typedef ::GVariant* /*full*/ (*GSettingsBindSetMapping) (const ::GValue* value /*none*/, const ::GVariantType* expected_type /*none*/, void* user_data);
namespace internal {

typedef ::GVariant* (*SettingsBindSetMapping_CF_CType) (const ::GValue* value, const ::GVariantType* expected_type, void* user_data);
GI_INLINE_DECL GLib::Variant SettingsBindSetMapping_CF (const GObject::Value_Ref value, const GLib::VariantType_Ref expected_type, SettingsBindSetMapping_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SettingsBindSetMapping_CB_Trait, SettingsBindSetMapping_CF_CType, SettingsBindSetMapping_CF);
} // namespace internal

typedef gi::detail::callback<GLib::Variant(const GObject::Value_Ref value, const GLib::VariantType_Ref expected_type), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> SettingsBindSetMapping;

// typedef gboolean (*GSettingsGetMapping) (GVariant* value /*none*/, gpointer* result, gpointer user_data);
// typedef gboolean (*GSettingsGetMapping) (::GVariant* value /*none*/, void** result, void* user_data);
namespace internal {

typedef gboolean (*SettingsGetMapping_CF_CType) (::GVariant* value, void** result, void* user_data);
GI_INLINE_DECL bool SettingsGetMapping_CF (GLib::Variant value, gpointer & result, SettingsGetMapping_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SettingsGetMapping_CB_Trait, SettingsGetMapping_CF_CType, SettingsGetMapping_CF);
} // namespace internal

typedef gi::detail::callback<bool(GLib::Variant value, gpointer & result), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>> SettingsGetMapping;

// typedef void (*GSimpleAsyncThreadFunc) (GSimpleAsyncResult* res /*none*/, GObject* object /*none*/, GCancellable* cancellable /*none,nullable*/);
// typedef void (*GSimpleAsyncThreadFunc) (::GSimpleAsyncResult* res /*none*/, ::GObject* object /*none*/, ::GCancellable* cancellable /*none,nullable*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSocketSourceFunc) (GSocket* socket /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GSocketSourceFunc) (::GSocket* socket /*none*/, ::GIOCondition condition, void* data);
namespace internal {

typedef gboolean (*SocketSourceFunc_CF_CType) (::GSocket* socket, ::GIOCondition condition, void* data);
GI_INLINE_DECL bool SocketSourceFunc_CF (Gio::Socket socket, GLib::IOCondition condition, SocketSourceFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SocketSourceFunc_CB_Trait, SocketSourceFunc_CF_CType, SocketSourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gio::Socket socket, GLib::IOCondition condition), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> SocketSourceFunc;

// typedef void (*GTaskThreadFunc) (GTask* task /*none*/, gpointer source_object /*none*/, gpointer task_data, GCancellable* cancellable /*none,nullable*/);
// typedef void (*GTaskThreadFunc) (::GTask* task /*none*/, ::GObject* source_object /*none*/, void* task_data, ::GCancellable* cancellable /*none,nullable*/);
// SKIP; not a callback since no user_data

// typedef GFile* /*full*/ (*GVfsFileLookupFunc) (GVfs* vfs /*none*/, const char* identifier /*none*/, gpointer user_data);
// typedef ::GFile* /*full*/ (*GVfsFileLookupFunc) (::GVfs* vfs /*none*/, const char* identifier /*none*/, void* user_data);
namespace internal {

typedef ::GFile* (*VfsFileLookupFunc_CF_CType) (::GVfs* vfs, const char* identifier, void* user_data);
GI_INLINE_DECL Gio::File VfsFileLookupFunc_CF (Gio::Vfs vfs, const gi::cstring_v identifier, VfsFileLookupFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(VfsFileLookupFunc_CB_Trait, VfsFileLookupFunc_CF_CType, VfsFileLookupFunc_CF);
} // namespace internal

typedef gi::detail::callback<Gio::File(Gio::Vfs vfs, const gi::cstring_v identifier), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> VfsFileLookupFunc;

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
