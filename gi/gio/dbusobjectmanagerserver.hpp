// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERSERVER_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERSERVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusObjectManager;
class DBusObjectSkeleton;

class DBusObjectManagerServer;

namespace base {


#define GI_GIO_DBUSOBJECTMANAGERSERVER_BASE base::DBusObjectManagerServerBase
class DBusObjectManagerServerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectManagerServer BaseObjectType;

DBusObjectManagerServerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_manager_server_get_type(); } 

GI_INLINE_DECL Gio::DBusObjectManager interface_ (gi::interface_tag<Gio::DBusObjectManager>);

GI_INLINE_DECL operator Gio::DBusObjectManager ();

// GDBusObjectManagerServer* /*full*/ g_dbus_object_manager_server_new (const gchar* object_path /*none*/);
// ::GDBusObjectManagerServer* /*full*/ g_dbus_object_manager_server_new (const char* object_path /*none*/);
static GI_INLINE_DECL Gio::DBusObjectManagerServer new_ (const gi::cstring_v object_path) noexcept;

// void g_dbus_object_manager_server_export (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_manager_server_export (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
GI_INLINE_DECL void export_ (Gio::DBusObjectSkeleton object) noexcept;

// void g_dbus_object_manager_server_export_uniquely (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_manager_server_export_uniquely (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
GI_INLINE_DECL void export_uniquely (Gio::DBusObjectSkeleton object) noexcept;

// GDBusConnection* /*full,nullable*/ g_dbus_object_manager_server_get_connection (GDBusObjectManagerServer* manager /*none*/);
// ::GDBusConnection* /*full,nullable*/ g_dbus_object_manager_server_get_connection (::GDBusObjectManagerServer* manager /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// gboolean g_dbus_object_manager_server_is_exported (GDBusObjectManagerServer* manager /*none*/, GDBusObjectSkeleton* object /*none*/);
// gboolean g_dbus_object_manager_server_is_exported (::GDBusObjectManagerServer* manager /*none*/, ::GDBusObjectSkeleton* object /*none*/);
GI_INLINE_DECL bool is_exported (Gio::DBusObjectSkeleton object) noexcept;

// void g_dbus_object_manager_server_set_connection (GDBusObjectManagerServer* manager /*none*/, GDBusConnection* connection /*none,nullable*/);
// void g_dbus_object_manager_server_set_connection (::GDBusObjectManagerServer* manager /*none*/, ::GDBusConnection* connection /*none,nullable*/);
GI_INLINE_DECL void set_connection (Gio::DBusConnection connection) noexcept;
GI_INLINE_DECL void set_connection () noexcept;

// gboolean g_dbus_object_manager_server_unexport (GDBusObjectManagerServer* manager /*none*/, const gchar* object_path /*none*/);
// gboolean g_dbus_object_manager_server_unexport (::GDBusObjectManagerServer* manager /*none*/, const char* object_path /*none*/);
GI_INLINE_DECL bool unexport (const gi::cstring_v object_path) noexcept;

gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerServerBase> property_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerServerBase> (*this, "connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerServerBase> property_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerServerBase> (*this, "connection"); }

gi::property_proxy<gi::cstring, base::DBusObjectManagerServerBase> property_object_path()
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerServerBase> (*this, "object-path"); }
const gi::property_proxy<gi::cstring, base::DBusObjectManagerServerBase> property_object_path() const
{ return gi::property_proxy<gi::cstring, base::DBusObjectManagerServerBase> (*this, "object-path"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra_def.hpp>)
#include <gio/dbusobjectmanagerserver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra.hpp>)
#include <gio/dbusobjectmanagerserver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectManagerServer : public GI_GIO_DBUSOBJECTMANAGERSERVER_BASE
{ typedef GI_GIO_DBUSOBJECTMANAGERSERVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectManagerServer>
{ typedef Gio::DBusObjectManagerServer type; }; 

} // namespace repository

} // namespace gi

#include "dbusobjectmanager.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectManagerServerClassDef
{
typedef DBusObjectManagerServerClassDef self;
public:
typedef Gio::DBusObjectManagerServer instance_type;
typedef ::GDBusObjectManagerServerClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusObjectManagerServerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusObjectManagerServerClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerServerClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectManagerIfaceClassImpl>
{
friend class internal::DBusObjectManagerServerClassDef;
typedef DBusObjectManagerServerClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerServerClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectManagerIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusObjectManagerIfaceClassImpl GDBusObjectManagerIface_type;



};


struct DBusObjectManagerServerClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectManagerServerImpl = detail::ObjectImpl<DBusObjectManagerServer, internal::DBusObjectManagerServerClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
