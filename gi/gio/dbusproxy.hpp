// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROXY_HPP_
#define _GI_GIO_DBUSPROXY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncInitable;
class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusInterface;
class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class Initable;
class UnixFDList;

class DBusProxy;

namespace base {


#define GI_GIO_DBUSPROXY_BASE base::DBusProxyBase
class DBusProxyBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusProxy BaseObjectType;

DBusProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_proxy_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::DBusInterface interface_ (gi::interface_tag<Gio::DBusInterface>);

GI_INLINE_DECL operator Gio::DBusInterface ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusProxy* /*full*/ g_dbus_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, GLib::Error * _error) noexcept;

// GDBusProxy* /*full*/ g_dbus_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusProxy* /*full*/ g_dbus_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name, GLib::Error * _error) noexcept;

// void g_dbus_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none,nullable*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info /*none,nullable*/, const gchar* name /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info /*none,nullable*/, const char* name /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo_Ref info, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, const gi::cstring_v interface_name, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_proxy_call (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_call (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* /*full*/ g_dbus_proxy_call_finish (GDBusProxy* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_finish (::GDBusProxy* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* /*full*/ g_dbus_proxy_call_sync (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_sync (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_proxy_call_with_unix_fd_list (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_proxy_call_with_unix_fd_list (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_with_unix_fd_list (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_with_unix_fd_list (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_finish (GDBusProxy* proxy /*none*/, GUnixFDList** out_fd_list /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_finish (::GDBusProxy* proxy /*none*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_sync (GDBusProxy* proxy /*none*/, const gchar* method_name /*none*/, GVariant* parameters /*none,nullable*/, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list /*none,nullable*/, GUnixFDList** out_fd_list /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_dbus_proxy_call_with_unix_fd_list_sync (::GDBusProxy* proxy /*none*/, const char* method_name /*none*/, ::GVariant* parameters /*none,nullable*/, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list /*none,nullable*/, ::GUnixFDList** out_fd_list /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const gi::cstring_v method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// GVariant* /*full,nullable*/ g_dbus_proxy_get_cached_property (GDBusProxy* proxy /*none*/, const gchar* property_name /*none*/);
// ::GVariant* /*full,nullable*/ g_dbus_proxy_get_cached_property (::GDBusProxy* proxy /*none*/, const char* property_name /*none*/);
GI_INLINE_DECL GLib::Variant get_cached_property (const gi::cstring_v property_name) noexcept;

// gchar** /*full,nullable*/ g_dbus_proxy_get_cached_property_names (GDBusProxy* proxy /*none*/);
// char** /*full,nullable*/ g_dbus_proxy_get_cached_property_names (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_cached_property_names () noexcept;

// GDBusConnection* /*none*/ g_dbus_proxy_get_connection (GDBusProxy* proxy /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_proxy_get_connection (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// gint g_dbus_proxy_get_default_timeout (GDBusProxy* proxy /*none*/);
// gint g_dbus_proxy_get_default_timeout (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gint get_default_timeout () noexcept;

// GDBusProxyFlags g_dbus_proxy_get_flags (GDBusProxy* proxy /*none*/);
// ::GDBusProxyFlags g_dbus_proxy_get_flags (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL Gio::DBusProxyFlags get_flags () noexcept;

// GDBusInterfaceInfo* /*none,nullable*/ g_dbus_proxy_get_interface_info (GDBusProxy* proxy /*none*/);
// ::GDBusInterfaceInfo* /*none,nullable*/ g_dbus_proxy_get_interface_info (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref get_interface_info () noexcept;

// const gchar* /*none*/ g_dbus_proxy_get_interface_name (GDBusProxy* proxy /*none*/);
// const char* /*none*/ g_dbus_proxy_get_interface_name (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_interface_name () noexcept;

// const gchar* /*none,nullable*/ g_dbus_proxy_get_name (GDBusProxy* proxy /*none*/);
// const char* /*none,nullable*/ g_dbus_proxy_get_name (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gchar* /*full,nullable*/ g_dbus_proxy_get_name_owner (GDBusProxy* proxy /*none*/);
// char* /*full,nullable*/ g_dbus_proxy_get_name_owner (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gi::cstring get_name_owner () noexcept;

// const gchar* /*none*/ g_dbus_proxy_get_object_path (GDBusProxy* proxy /*none*/);
// const char* /*none*/ g_dbus_proxy_get_object_path (::GDBusProxy* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path () noexcept;

// void g_dbus_proxy_set_cached_property (GDBusProxy* proxy /*none*/, const gchar* property_name /*none*/, GVariant* value /*none,nullable*/);
// void g_dbus_proxy_set_cached_property (::GDBusProxy* proxy /*none*/, const char* property_name /*none*/, ::GVariant* value /*none,nullable*/);
GI_INLINE_DECL void set_cached_property (const gi::cstring_v property_name, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_cached_property (const gi::cstring_v property_name) noexcept;

// void g_dbus_proxy_set_default_timeout (GDBusProxy* proxy /*none*/, gint timeout_msec);
// void g_dbus_proxy_set_default_timeout (::GDBusProxy* proxy /*none*/, gint timeout_msec);
GI_INLINE_DECL void set_default_timeout (gint timeout_msec) noexcept;

// void g_dbus_proxy_set_interface_info (GDBusProxy* proxy /*none*/, GDBusInterfaceInfo* info /*none,nullable*/);
// void g_dbus_proxy_set_interface_info (::GDBusProxy* proxy /*none*/, ::GDBusInterfaceInfo* info /*none,nullable*/);
GI_INLINE_DECL void set_interface_info (Gio::DBusInterfaceInfo_Ref info) noexcept;
GI_INLINE_DECL void set_interface_info () noexcept;

gi::property_proxy_write<Gio::BusType, base::DBusProxyBase> property_g_bus_type()
{ return gi::property_proxy_write<Gio::BusType, base::DBusProxyBase> (*this, "g-bus-type"); }

gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> property_g_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> (*this, "g-connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> property_g_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> (*this, "g-connection"); }

gi::property_proxy<gint, base::DBusProxyBase> property_g_default_timeout()
{ return gi::property_proxy<gint, base::DBusProxyBase> (*this, "g-default-timeout"); }
const gi::property_proxy<gint, base::DBusProxyBase> property_g_default_timeout() const
{ return gi::property_proxy<gint, base::DBusProxyBase> (*this, "g-default-timeout"); }

gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> property_g_flags()
{ return gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> (*this, "g-flags"); }
const gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> property_g_flags() const
{ return gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> (*this, "g-flags"); }

gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> property_g_interface_info()
{ return gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> (*this, "g-interface-info"); }
const gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> property_g_interface_info() const
{ return gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> (*this, "g-interface-info"); }

gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_interface_name()
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-interface-name"); }
const gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_interface_name() const
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-interface-name"); }

gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_name()
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-name"); }
const gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_name() const
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-name"); }

gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_name_owner()
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-name-owner"); }
const gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_name_owner() const
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-name-owner"); }

gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_object_path()
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-object-path"); }
const gi::property_proxy<gi::cstring, base::DBusProxyBase> property_g_object_path() const
{ return gi::property_proxy<gi::cstring, base::DBusProxyBase> (*this, "g-object-path"); }

// (signal) void g-properties-changed ( changed_properties /*none*/,  invalidated_properties /*none*/);
// (signal) void g-properties-changed (::GVariant* changed_properties /*none*/, char** invalidated_properties /*none*/);
gi::signal_proxy<void(Gio::DBusProxy, GLib::Variant changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> invalidated_properties)> signal_g_properties_changed()
{ return gi::signal_proxy<void(Gio::DBusProxy, GLib::Variant changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> invalidated_properties)> (*this, "g-properties-changed"); }

// (signal) void g-signal (gchar* sender_name /*none,nullable*/, gchar* signal_name /*none*/,  parameters /*none*/);
// (signal) void g-signal (char* sender_name /*none,nullable*/, char* signal_name /*none*/, ::GVariant* parameters /*none*/);
gi::signal_proxy<void(Gio::DBusProxy, gi::cstring_v sender_name, gi::cstring_v signal_name, GLib::Variant parameters)> signal_g_signal()
{ return gi::signal_proxy<void(Gio::DBusProxy, gi::cstring_v sender_name, gi::cstring_v signal_name, GLib::Variant parameters)> (*this, "g-signal"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_def.hpp>)
#include <gio/dbusproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra.hpp>)
#include <gio/dbusproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusProxy : public GI_GIO_DBUSPROXY_BASE
{ typedef GI_GIO_DBUSPROXY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusProxy>
{ typedef Gio::DBusProxy type; }; 

} // namespace repository

} // namespace gi

#include "asyncinitable.hpp"
#include "dbusinterface.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusProxyClassDef
{
typedef DBusProxyClassDef self;
public:
typedef Gio::DBusProxy instance_type;
typedef ::GDBusProxyClass class_type;

using GI_MEMBER_CHECK_CONFLICT(g_signal) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusProxy::g_properties_changed (GDBusProxy* proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusProxy::g_signal (::GDBusProxy* proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
virtual void g_signal_ (const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusProxyClass: public detail::ClassTemplate<Gio::impl::internal::DBusProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusInterfaceIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
friend class internal::DBusProxyClassDef;
typedef DBusProxyClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusInterfaceIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AsyncInitableIfaceClassImpl GAsyncInitableIface_type;
typedef Gio::impl::internal::DBusInterfaceIfaceClassImpl GDBusInterfaceIface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// void DBusProxy::g_properties_changed (GDBusProxy* proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusProxy::g_signal (::GDBusProxy* proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
GI_INLINE_DECL void g_signal_ (const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept override;


};


struct DBusProxyClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusProxyClass, g_signal)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, g_signal)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DBusProxyImpl = detail::ObjectImpl<DBusProxy, internal::DBusProxyClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
