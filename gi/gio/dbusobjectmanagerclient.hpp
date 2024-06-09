// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERCLIENT_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERCLIENT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncInitable;
class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusObjectManager;
class DBusObjectProxy;
class DBusProxy;
class Initable;

class DBusObjectManagerClient;

namespace base {


#define GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE base::DBusObjectManagerClientBase
class DBusObjectManagerClientBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectManagerClient BaseObjectType;

DBusObjectManagerClientBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_manager_client_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::DBusObjectManager interface_ (gi::interface_tag<Gio::DBusObjectManager>);

GI_INLINE_DECL operator Gio::DBusObjectManager ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_for_bus_sync (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_for_bus_sync (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ g_dbus_object_manager_client_new_sync (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GDBusObjectManagerClient* /*full*/ g_dbus_object_manager_client_new_sync (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept;

// void g_dbus_object_manager_client_new (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_object_manager_client_new (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_object_manager_client_new_for_bus (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GDBusProxyTypeFunc get_proxy_type_func /*none,nullable*/, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dbus_object_manager_client_new_for_bus (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func /*none,nullable*/, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept;

// GDBusConnection* /*none*/ g_dbus_object_manager_client_get_connection (GDBusObjectManagerClient* manager /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_object_manager_client_get_connection (::GDBusObjectManagerClient* manager /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (GDBusObjectManagerClient* manager /*none*/);
// ::GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (::GDBusObjectManagerClient* manager /*none*/);
GI_INLINE_DECL Gio::DBusObjectManagerClientFlags get_flags () noexcept;

// const gchar* /*none*/ g_dbus_object_manager_client_get_name (GDBusObjectManagerClient* manager /*none*/);
// const char* /*none*/ g_dbus_object_manager_client_get_name (::GDBusObjectManagerClient* manager /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gchar* /*full,nullable*/ g_dbus_object_manager_client_get_name_owner (GDBusObjectManagerClient* manager /*none*/);
// char* /*full,nullable*/ g_dbus_object_manager_client_get_name_owner (::GDBusObjectManagerClient* manager /*none*/);
GI_INLINE_DECL gi::cstring get_name_owner () noexcept;

gi::property_proxy_write<Gio::BusType, base::DBusObjectManagerClientBase> property_bus_type()
{ return gi::property_proxy_write<Gio::BusType, base::DBusObjectManagerClientBase> (*this, "bus-type"); }

gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> property_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> (*this, "connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> property_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> (*this, "connection"); }

gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> property_flags()
{ return gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> (*this, "flags"); }
const gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> property_flags() const
{ return gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> (*this, "flags"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_destroy_notify()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-destroy-notify"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_destroy_notify() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-destroy-notify"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_func()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-func"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_func() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-func"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_user_data()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-user-data"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_user_data() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-user-data"); }

gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_name()
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "name"); }

gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_name_owner()
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "name-owner"); }
const gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_name_owner() const
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "name-owner"); }

gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_object_path()
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "object-path"); }
const gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> property_object_path() const
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerClientBase> (*this, "object-path"); }

// (signal) void interface-proxy-properties-changed ( object_proxy /*none*/,  interface_proxy /*none*/,  changed_properties /*none*/,  invalidated_properties /*none*/);
// (signal) void interface-proxy-properties-changed (::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, ::GVariant* changed_properties /*none*/, char** invalidated_properties /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, GLib::Variant changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> invalidated_properties)> signal_interface_proxy_properties_changed()
{ return gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, GLib::Variant changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> invalidated_properties)> (*this, "interface-proxy-properties-changed"); }

// (signal) void interface-proxy-signal ( object_proxy /*none*/,  interface_proxy /*none*/, gchar* sender_name /*none*/, gchar* signal_name /*none*/,  parameters /*none*/);
// (signal) void interface-proxy-signal (::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, char* sender_name /*none*/, char* signal_name /*none*/, ::GVariant* parameters /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, gi::cstring_v sender_name, gi::cstring_v signal_name, GLib::Variant parameters)> signal_interface_proxy_signal()
{ return gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, gi::cstring_v sender_name, gi::cstring_v signal_name, GLib::Variant parameters)> (*this, "interface-proxy-signal"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra_def.hpp>)
#include <gio/dbusobjectmanagerclient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra.hpp>)
#include <gio/dbusobjectmanagerclient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectManagerClient : public GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE
{ typedef GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectManagerClient>
{ typedef Gio::DBusObjectManagerClient type; }; 

} // namespace repository

} // namespace gi

#include "asyncinitable.hpp"
#include "dbusobjectmanager.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectManagerClientClassDef
{
typedef DBusObjectManagerClientClassDef self;
public:
typedef Gio::DBusObjectManagerClient instance_type;
typedef ::GDBusObjectManagerClientClass class_type;

using GI_MEMBER_CHECK_CONFLICT(interface_proxy_signal) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusObjectManagerClientClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusObjectManagerClient::interface_proxy_properties_changed (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusObjectManagerClient::interface_proxy_properties_changed (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusObjectManagerClient::interface_proxy_signal (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusObjectManagerClient::interface_proxy_signal (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
virtual void interface_proxy_signal_ (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusObjectManagerClientClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerClientClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusObjectManagerIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
friend class internal::DBusObjectManagerClientClassDef;
typedef DBusObjectManagerClientClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerClientClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusObjectManagerIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AsyncInitableIfaceClassImpl GAsyncInitableIface_type;
typedef Gio::impl::internal::DBusObjectManagerIfaceClassImpl GDBusObjectManagerIface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// void DBusObjectManagerClient::interface_proxy_properties_changed (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, GVariant* changed_properties /*none*/, const gchar* const* invalidated_properties /*none*/);
// void DBusObjectManagerClient::interface_proxy_properties_changed (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, ::GVariant* changed_properties /*none*/, const char* invalidated_properties /*none*/);
// SKIP; inconsistent invalidated_properties in pointer depth (2 vs 1)

// void DBusObjectManagerClient::interface_proxy_signal (GDBusObjectManagerClient* manager /*none*/, GDBusObjectProxy* object_proxy /*none*/, GDBusProxy* interface_proxy /*none*/, const gchar* sender_name /*none*/, const gchar* signal_name /*none*/, GVariant* parameters /*none*/);
// void DBusObjectManagerClient::interface_proxy_signal (::GDBusObjectManagerClient* manager /*none*/, ::GDBusObjectProxy* object_proxy /*none*/, ::GDBusProxy* interface_proxy /*none*/, const char* sender_name /*none*/, const char* signal_name /*none*/, ::GVariant* parameters /*none*/);
GI_INLINE_DECL void interface_proxy_signal_ (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const gi::cstring_v sender_name, const gi::cstring_v signal_name, GLib::Variant parameters) noexcept override;


};


struct DBusObjectManagerClientClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusObjectManagerClientClass, interface_proxy_signal)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, interface_proxy_signal)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectManagerClientImpl = detail::ObjectImpl<DBusObjectManagerClient, internal::DBusObjectManagerClientClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
