// AUTO-GENERATED

#ifndef _GI_GIO_DBUSCONNECTION_HPP_
#define _GI_GIO_DBUSCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionGroup;
class AsyncInitable;
class AsyncResult;
class Cancellable;
class Credentials;
class DBusAuthObserver;
class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class DBusInterfaceVTable;
class DBusInterfaceVTable_Ref;
class DBusMessage;
class DBusSubtreeVTable;
class DBusSubtreeVTable_Ref;
class IOStream;
class Initable;
class MenuModel;
class UnixFDList;

class DBusConnection;

namespace base {


#define GI_GIO_DBUSCONNECTION_BASE base::DBusConnectionBase
class DBusConnectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusConnection BaseObjectType;

DBusConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_connection_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusConnection* /*full*/ g_dbus_connection_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusConnection* /*full*/ g_dbus_connection_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusConnection new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* /*full*/ g_dbus_connection_new_for_address_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusConnection* /*full*/ g_dbus_connection_new_for_address_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* /*full*/ g_dbus_connection_new_for_address_sync (const gchar* address /*none*/, GDBusConnectionFlags flags, GDBusAuthObserver* observer /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusConnection* /*full*/ g_dbus_connection_new_for_address_sync (const char* address /*none*/, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const gi::cstring_v address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const gi::cstring_v address, Gio::DBusConnectionFlags flags);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const gi::cstring_v address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const gi::cstring_v address, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept;

// GDBusConnection* /*full*/ g_dbus_connection_new_sync (GIOStream* stream /*none*/, const gchar* guid /*none,nullable*/, GDBusConnectionFlags flags, GDBusAuthObserver* observer /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusConnection* /*full*/ g_dbus_connection_new_sync (::GIOStream* stream /*none*/, const char* guid /*none,nullable*/, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, const gi::cstring_v guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, const gi::cstring_v guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept;

// void g_dbus_connection_new (GIOStream* stream /*none*/, const gchar* guid /*none,nullable*/, GDBusConnectionFlags flags, GDBusAuthObserver* observer /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_new (::GIOStream* stream /*none*/, const char* guid /*none,nullable*/, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::IOStream stream, const gi::cstring_v guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::IOStream stream, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_connection_new_for_address (const gchar* address /*none*/, GDBusConnectionFlags flags, GDBusAuthObserver* observer /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_new_for_address (const char* address /*none*/, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_address (const gi::cstring_v address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_address (const gi::cstring_v address, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// guint g_dbus_connection_add_filter (GDBusConnection* connection /*none*/, GDBusMessageFilterFunction filter_function /*none*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// guint g_dbus_connection_add_filter (::GDBusConnection* connection /*none*/, Gio::DBusMessageFilterFunction::cfunction_type filter_function /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
GI_INLINE_DECL guint add_filter (Gio::DBusMessageFilterFunction filter_function) noexcept;

// void g_dbus_connection_call (GDBusConnection* connection /*none*/, const gchar* bus_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, const GVariantType* reply_type /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_call (::GDBusConnection* connection /*none*/, const char* bus_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, const ::GVariantType* reply_type /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* /*full*/ g_dbus_connection_call_finish (GDBusConnection* connection /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_connection_call_finish (::GDBusConnection* connection /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* /*full*/ g_dbus_connection_call_sync (GDBusConnection* connection /*none*/, const gchar* bus_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, const GVariantType* reply_type /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_connection_call_sync (::GDBusConnection* connection /*none*/, const char* bus_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, const ::GVariantType* reply_type /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_call_with_unix_fd_list (GDBusConnection* connection /*none*/, const gchar* bus_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, const GVariantType* reply_type /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_call_with_unix_fd_list (::GDBusConnection* connection /*none*/, const char* bus_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, const ::GVariantType* reply_type /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_with_unix_fd_list (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_with_unix_fd_list (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* /*full*/ g_dbus_connection_call_with_unix_fd_list_finish (GDBusConnection* connection /*none*/, GUnixFDList** out_fd_list /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_connection_call_with_unix_fd_list_finish (::GDBusConnection* connection /*none*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* /*full*/ g_dbus_connection_call_with_unix_fd_list_sync (GDBusConnection* connection /*none*/, const gchar* bus_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, const GVariantType* reply_type /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GUnixFDList** out_fd_list /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_connection_call_with_unix_fd_list_sync (::GDBusConnection* connection /*none*/, const char* bus_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, const ::GVariantType* reply_type /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, GLib::Variant parameters, const GLib::VariantType_Ref reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_close (GDBusConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_close (::GDBusConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dbus_connection_close_finish (GDBusConnection* connection /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean g_dbus_connection_close_finish (::GDBusConnection* connection /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_close_sync (GDBusConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dbus_connection_close_sync (::GDBusConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close_sync (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close_sync ();
GI_INLINE_DECL bool close_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close_sync (GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_emit_signal (GDBusConnection* connection /*none*/, const gchar* destination_bus_name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none,nullable*/, GError ** error);
// gboolean g_dbus_connection_emit_signal (::GDBusConnection* connection /*none*/, const char* destination_bus_name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool emit_signal (const gi::cstring_v destination_bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Variant parameters);
GI_INLINE_DECL bool emit_signal (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name);
GI_INLINE_DECL bool emit_signal (const gi::cstring_v destination_bus_name, const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Variant parameters, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool emit_signal (const gi::cstring_v object_path, const gi::cstring_v interface_name, const gi::cstring_v signal_name, GLib::Error * _error) noexcept;

// guint g_dbus_connection_export_action_group (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GActionGroup* action_group /*none*/, GError ** error);
// guint g_dbus_connection_export_action_group (::GDBusConnection* connection /*none*/, const char* object_path /*none*/, ::GActionGroup* action_group /*none*/, GError ** error);
GI_INLINE_DECL guint export_action_group (const gi::cstring_v object_path, Gio::ActionGroup action_group);
GI_INLINE_DECL guint export_action_group (const gi::cstring_v object_path, Gio::ActionGroup action_group, GLib::Error * _error) noexcept;

// guint g_dbus_connection_export_menu_model (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GMenuModel* menu /*none*/, GError ** error);
// guint g_dbus_connection_export_menu_model (::GDBusConnection* connection /*none*/, const char* object_path /*none*/, ::GMenuModel* menu /*none*/, GError ** error);
GI_INLINE_DECL guint export_menu_model (const gi::cstring_v object_path, Gio::MenuModel menu);
GI_INLINE_DECL guint export_menu_model (const gi::cstring_v object_path, Gio::MenuModel menu, GLib::Error * _error) noexcept;

// void g_dbus_connection_flush (GDBusConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_flush (::GDBusConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void flush (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void flush (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dbus_connection_flush_finish (GDBusConnection* connection /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean g_dbus_connection_flush_finish (::GDBusConnection* connection /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_flush_sync (GDBusConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dbus_connection_flush_sync (::GDBusConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool flush_sync (Gio::Cancellable cancellable);
GI_INLINE_DECL bool flush_sync ();
GI_INLINE_DECL bool flush_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool flush_sync (GLib::Error * _error) noexcept;

// GDBusCapabilityFlags g_dbus_connection_get_capabilities (GDBusConnection* connection /*none*/);
// ::GDBusCapabilityFlags g_dbus_connection_get_capabilities (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL Gio::DBusCapabilityFlags get_capabilities () noexcept;

// gboolean g_dbus_connection_get_exit_on_close (GDBusConnection* connection /*none*/);
// gboolean g_dbus_connection_get_exit_on_close (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL bool get_exit_on_close () noexcept;

// GDBusConnectionFlags g_dbus_connection_get_flags (GDBusConnection* connection /*none*/);
// ::GDBusConnectionFlags g_dbus_connection_get_flags (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL Gio::DBusConnectionFlags get_flags () noexcept;

// const gchar* /*none*/ g_dbus_connection_get_guid (GDBusConnection* connection /*none*/);
// const char* /*none*/ g_dbus_connection_get_guid (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL gi::cstring_v get_guid () noexcept;

// guint32 g_dbus_connection_get_last_serial (GDBusConnection* connection /*none*/);
// guint32 g_dbus_connection_get_last_serial (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL guint32 get_last_serial () noexcept;

// GCredentials* /*none,nullable*/ g_dbus_connection_get_peer_credentials (GDBusConnection* connection /*none*/);
// ::GCredentials* /*none,nullable*/ g_dbus_connection_get_peer_credentials (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL Gio::Credentials get_peer_credentials () noexcept;

// GIOStream* /*none*/ g_dbus_connection_get_stream (GDBusConnection* connection /*none*/);
// ::GIOStream* /*none*/ g_dbus_connection_get_stream (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL Gio::IOStream get_stream () noexcept;

// const gchar* /*none,nullable*/ g_dbus_connection_get_unique_name (GDBusConnection* connection /*none*/);
// const char* /*none,nullable*/ g_dbus_connection_get_unique_name (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL gi::cstring_v get_unique_name () noexcept;

// gboolean g_dbus_connection_is_closed (GDBusConnection* connection /*none*/);
// gboolean g_dbus_connection_is_closed (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// guint g_dbus_connection_register_object (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GDBusInterfaceInfo* interface_info /*none*/, const GDBusInterfaceVTable* vtable /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/, GError ** error);
// guint g_dbus_connection_register_object (::GDBusConnection* connection /*none*/, const char* object_path /*none*/, ::GDBusInterfaceInfo* interface_info /*none*/, const ::GDBusInterfaceVTable* vtable /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/, GError ** error);
// SKIP; callback misses closure info

// guint g_dbus_connection_register_object_with_closures (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GDBusInterfaceInfo* interface_info /*none*/, GClosure* method_call_closure /*none,nullable*/, GClosure* get_property_closure /*none,nullable*/, GClosure* set_property_closure /*none,nullable*/, GError ** error);
// guint g_dbus_connection_register_object_with_closures (::GDBusConnection* connection /*none*/, const char* object_path /*none*/, ::GDBusInterfaceInfo* interface_info /*none*/, ::GClosure* method_call_closure /*none,nullable*/, ::GClosure* get_property_closure /*none,nullable*/, ::GClosure* set_property_closure /*none,nullable*/, GError ** error);
GI_INLINE_DECL guint register_object (const gi::cstring_v object_path, Gio::DBusInterfaceInfo_Ref interface_info, GObject::Closure_Ref method_call_closure, GObject::Closure_Ref get_property_closure, GObject::Closure_Ref set_property_closure);
GI_INLINE_DECL guint register_object (const gi::cstring_v object_path, Gio::DBusInterfaceInfo_Ref interface_info);
GI_INLINE_DECL guint register_object (const gi::cstring_v object_path, Gio::DBusInterfaceInfo_Ref interface_info, GObject::Closure_Ref method_call_closure, GObject::Closure_Ref get_property_closure, GObject::Closure_Ref set_property_closure, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint register_object (const gi::cstring_v object_path, Gio::DBusInterfaceInfo_Ref interface_info, GLib::Error * _error) noexcept;

// guint g_dbus_connection_register_subtree (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, const GDBusSubtreeVTable* vtable /*none*/, GDBusSubtreeFlags flags, gpointer user_data, GDestroyNotify user_data_free_func /*none*/, GError ** error);
// guint g_dbus_connection_register_subtree (::GDBusConnection* connection /*none*/, const char* object_path /*none*/, const ::GDBusSubtreeVTable* vtable /*none*/, ::GDBusSubtreeFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/, GError ** error);
// SKIP; callback misses closure info

// void g_dbus_connection_remove_filter (GDBusConnection* connection /*none*/, guint filter_id);
// void g_dbus_connection_remove_filter (::GDBusConnection* connection /*none*/, guint filter_id);
GI_INLINE_DECL void remove_filter (guint filter_id) noexcept;

// gboolean g_dbus_connection_send_message (GDBusConnection* connection /*none*/, GDBusMessage* message /*none*/, GDBusSendMessageFlags flags, volatile guint32* out_serial, GError ** error);
// gboolean g_dbus_connection_send_message (::GDBusConnection* connection /*none*/, ::GDBusMessage* message /*none*/, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
GI_INLINE_DECL bool send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial);
GI_INLINE_DECL bool send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint32> send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags);
GI_INLINE_DECL std::tuple<bool, guint32> send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, GLib::Error * _error) noexcept;

// void g_dbus_connection_send_message_with_reply (GDBusConnection* connection /*none*/, GDBusMessage* message /*none*/, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_connection_send_message_with_reply (::GDBusConnection* connection /*none*/, ::GDBusMessage* message /*none*/, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL guint32 send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL guint32 send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GDBusMessage* /*full*/ g_dbus_connection_send_message_with_reply_finish (GDBusConnection* connection /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_connection_send_message_with_reply_finish (::GDBusConnection* connection /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusMessage* /*full*/ g_dbus_connection_send_message_with_reply_sync (GDBusConnection* connection /*none*/, GDBusMessage* message /*none*/, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_connection_send_message_with_reply_sync (::GDBusConnection* connection /*none*/, ::GDBusMessage* message /*none*/, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_set_exit_on_close (GDBusConnection* connection /*none*/, gboolean exit_on_close);
// void g_dbus_connection_set_exit_on_close (::GDBusConnection* connection /*none*/, gboolean exit_on_close);
GI_INLINE_DECL void set_exit_on_close (gboolean exit_on_close) noexcept;

// guint g_dbus_connection_signal_subscribe (GDBusConnection* connection /*none*/, const gchar* sender /*none,nullable*/, const gchar* interface_name /*none,nullable*/, const gchar* member /*none,nullable*/, const gchar* object_path /*none,nullable*/, const gchar* arg0 /*none,nullable*/, GDBusSignalFlags flags, GDBusSignalCallback callback /*none*/, gpointer user_data, GDestroyNotify user_data_free_func /*none,nullable*/);
// guint g_dbus_connection_signal_subscribe (::GDBusConnection* connection /*none*/, const char* sender /*none,nullable*/, const char* interface_name /*none,nullable*/, const char* member /*none,nullable*/, const char* object_path /*none,nullable*/, const char* arg0 /*none,nullable*/, ::GDBusSignalFlags flags, Gio::DBusSignalCallback::cfunction_type callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none,nullable*/);
GI_INLINE_DECL guint signal_subscribe (const gi::cstring_v sender, const gi::cstring_v interface_name, const gi::cstring_v member, const gi::cstring_v object_path, const gi::cstring_v arg0, Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept;
GI_INLINE_DECL guint signal_subscribe (Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept;

// void g_dbus_connection_signal_unsubscribe (GDBusConnection* connection /*none*/, guint subscription_id);
// void g_dbus_connection_signal_unsubscribe (::GDBusConnection* connection /*none*/, guint subscription_id);
GI_INLINE_DECL void signal_unsubscribe (guint subscription_id) noexcept;

// void g_dbus_connection_start_message_processing (GDBusConnection* connection /*none*/);
// void g_dbus_connection_start_message_processing (::GDBusConnection* connection /*none*/);
GI_INLINE_DECL void start_message_processing () noexcept;

// void g_dbus_connection_unexport_action_group (GDBusConnection* connection /*none*/, guint export_id);
// void g_dbus_connection_unexport_action_group (::GDBusConnection* connection /*none*/, guint export_id);
GI_INLINE_DECL void unexport_action_group (guint export_id) noexcept;

// void g_dbus_connection_unexport_menu_model (GDBusConnection* connection /*none*/, guint export_id);
// void g_dbus_connection_unexport_menu_model (::GDBusConnection* connection /*none*/, guint export_id);
GI_INLINE_DECL void unexport_menu_model (guint export_id) noexcept;

// gboolean g_dbus_connection_unregister_object (GDBusConnection* connection /*none*/, guint registration_id);
// gboolean g_dbus_connection_unregister_object (::GDBusConnection* connection /*none*/, guint registration_id);
GI_INLINE_DECL bool unregister_object (guint registration_id) noexcept;

// gboolean g_dbus_connection_unregister_subtree (GDBusConnection* connection /*none*/, guint registration_id);
// gboolean g_dbus_connection_unregister_subtree (::GDBusConnection* connection /*none*/, guint registration_id);
GI_INLINE_DECL bool unregister_subtree (guint registration_id) noexcept;

gi::property_proxy_write<gi::cstring, base::DBusConnectionBase> property_address()
{ return gi::property_proxy_write<gi::cstring, base::DBusConnectionBase> (*this, "address"); }

gi::property_proxy_write<Gio::DBusAuthObserver, base::DBusConnectionBase> property_authentication_observer()
{ return gi::property_proxy_write<Gio::DBusAuthObserver, base::DBusConnectionBase> (*this, "authentication-observer"); }

gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> property_capabilities()
{ return gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> (*this, "capabilities"); }
const gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> property_capabilities() const
{ return gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> (*this, "capabilities"); }

gi::property_proxy<bool, base::DBusConnectionBase> property_closed()
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "closed"); }
const gi::property_proxy<bool, base::DBusConnectionBase> property_closed() const
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "closed"); }

gi::property_proxy<bool, base::DBusConnectionBase> property_exit_on_close()
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "exit-on-close"); }
const gi::property_proxy<bool, base::DBusConnectionBase> property_exit_on_close() const
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "exit-on-close"); }

gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> property_flags()
{ return gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> (*this, "flags"); }
const gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> property_flags() const
{ return gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> (*this, "flags"); }

gi::property_proxy<gi::cstring, base::DBusConnectionBase> property_guid()
{ return gi::property_proxy<gi::cstring, base::DBusConnectionBase> (*this, "guid"); }
const gi::property_proxy<gi::cstring, base::DBusConnectionBase> property_guid() const
{ return gi::property_proxy<gi::cstring, base::DBusConnectionBase> (*this, "guid"); }

gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> property_stream()
{ return gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> (*this, "stream"); }
const gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> property_stream() const
{ return gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> (*this, "stream"); }

gi::property_proxy<gi::cstring, base::DBusConnectionBase> property_unique_name()
{ return gi::property_proxy<gi::cstring, base::DBusConnectionBase> (*this, "unique-name"); }
const gi::property_proxy<gi::cstring, base::DBusConnectionBase> property_unique_name() const
{ return gi::property_proxy<gi::cstring, base::DBusConnectionBase> (*this, "unique-name"); }

// (signal) void closed (gboolean remote_peer_vanished,  error /*none,nullable*/);
// (signal) void closed (gboolean remote_peer_vanished, ::GError* error /*none,nullable*/);
gi::signal_proxy<void(Gio::DBusConnection, gboolean remote_peer_vanished, GLib::Error_Ref error)> signal_closed()
{ return gi::signal_proxy<void(Gio::DBusConnection, gboolean remote_peer_vanished, GLib::Error_Ref error)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra_def.hpp>)
#include <gio/dbusconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra.hpp>)
#include <gio/dbusconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusConnection : public GI_GIO_DBUSCONNECTION_BASE
{ typedef GI_GIO_DBUSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusConnection>
{ typedef Gio::DBusConnection type; }; 

} // namespace repository

} // namespace gi

#endif
