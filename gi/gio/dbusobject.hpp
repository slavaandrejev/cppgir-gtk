// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECT_HPP_
#define _GI_GIO_DBUSOBJECT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterface;

class DBusObject;

namespace base {


#define GI_GIO_DBUSOBJECT_BASE base::DBusObjectBase
class DBusObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusObject BaseObjectType;

DBusObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_get_type(); } 

// GDBusInterface* /*full,nullable*/ g_dbus_object_get_interface (GDBusObject* object /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ g_dbus_object_get_interface (::GDBusObject* object /*none*/, const char* interface_name /*none*/);
GI_INLINE_DECL Gio::DBusInterface get_interface (const gi::cstring_v interface_name) noexcept;

// GList* /*full*/ g_dbus_object_get_interfaces (GDBusObject* object /*none*/);
// ::GList* /*full*/ g_dbus_object_get_interfaces (::GDBusObject* object /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> get_interfaces () noexcept;

// const gchar* /*none*/ g_dbus_object_get_object_path (GDBusObject* object /*none*/);
// const char* /*none*/ g_dbus_object_get_object_path (::GDBusObject* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path () noexcept;

// (signal) void interface-added ( interface /*none*/);
// (signal) void interface-added (::GDBusInterface* interface /*none*/);
gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> signal_interface_added()
{ return gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> (*this, "interface-added"); }

// (signal) void interface-removed ( interface /*none*/);
// (signal) void interface-removed (::GDBusInterface* interface /*none*/);
gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> signal_interface_removed()
{ return gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> (*this, "interface-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_def.hpp>)
#include <gio/dbusobject_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra.hpp>)
#include <gio/dbusobject_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObject : public GI_GIO_DBUSOBJECT_BASE
{ typedef GI_GIO_DBUSOBJECT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObject>
{ typedef Gio::DBusObject type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectIfaceDef
{
typedef DBusObjectIfaceDef self;
public:
typedef Gio::DBusObject instance_type;
typedef ::GDBusObjectIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_interface) = self;
using GI_MEMBER_CHECK_CONFLICT(get_interfaces) = self;
using GI_MEMBER_CHECK_CONFLICT(get_object_path) = self;
using GI_MEMBER_CHECK_CONFLICT(interface_added) = self;
using GI_MEMBER_CHECK_CONFLICT(interface_removed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusObjectIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusInterface* /*full,nullable*/ DBusObject::get_interface (GDBusObject* object /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObject::get_interface (::GDBusObject* object /*none*/, const char* interface_name /*none*/);
virtual Gio::DBusInterface get_interface_ (const gi::cstring_v interface_name) noexcept = 0;

// GList* /*full*/ DBusObject::get_interfaces (GDBusObject* object /*none*/);
// ::GList* /*full*/ DBusObject::get_interfaces (::GDBusObject* object /*none*/);
virtual gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> get_interfaces_ () noexcept = 0;

// const gchar* /*none*/ DBusObject::get_object_path (GDBusObject* object /*none*/);
// const char* /*none*/ DBusObject::get_object_path (::GDBusObject* object /*none*/);
virtual gi::cstring_v get_object_path_ () noexcept = 0;

// void DBusObject::interface_added (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_added (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
virtual void interface_added_ (Gio::DBusInterface interface_) noexcept = 0;

// void DBusObject::interface_removed (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_removed (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
virtual void interface_removed_ (Gio::DBusInterface interface_) noexcept = 0;


};

using DBusObjectImpl = detail::InterfaceImpl<DBusObjectIfaceDef>;

class DBusObjectIfaceClassImpl: public detail::InterfaceClassImpl<DBusObjectImpl>
{
friend class internal::DBusObjectIfaceDef;
typedef DBusObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusObjectImpl> super;

protected:
using super::super;

// GDBusInterface* /*full,nullable*/ DBusObject::get_interface (GDBusObject* object /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObject::get_interface (::GDBusObject* object /*none*/, const char* interface_name /*none*/);
GI_INLINE_DECL Gio::DBusInterface get_interface_ (const gi::cstring_v interface_name) noexcept override;

// GList* /*full*/ DBusObject::get_interfaces (GDBusObject* object /*none*/);
// ::GList* /*full*/ DBusObject::get_interfaces (::GDBusObject* object /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDBusInterface*, gi::transfer_full_t> get_interfaces_ () noexcept override;

// const gchar* /*none*/ DBusObject::get_object_path (GDBusObject* object /*none*/);
// const char* /*none*/ DBusObject::get_object_path (::GDBusObject* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path_ () noexcept override;

// void DBusObject::interface_added (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_added (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL void interface_added_ (Gio::DBusInterface interface_) noexcept override;

// void DBusObject::interface_removed (GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObject::interface_removed (::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL void interface_removed_ (Gio::DBusInterface interface_) noexcept override;


};


struct DBusObjectIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusObjectIfaceClassImpl, get_interface)
  GI_MEMBER_DEFINE(DBusObjectIfaceClassImpl, get_interfaces)
  GI_MEMBER_DEFINE(DBusObjectIfaceClassImpl, get_object_path)
  GI_MEMBER_DEFINE(DBusObjectIfaceClassImpl, interface_added)
  GI_MEMBER_DEFINE(DBusObjectIfaceClassImpl, interface_removed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_interface),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_interfaces),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_object_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, interface_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, interface_removed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
