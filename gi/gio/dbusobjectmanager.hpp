// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGER_HPP_
#define _GI_GIO_DBUSOBJECTMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterface;
class DBusObject;

class DBusObjectManager;

namespace base {


#define GI_GIO_DBUSOBJECTMANAGER_BASE base::DBusObjectManagerBase
class DBusObjectManagerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusObjectManager BaseObjectType;

DBusObjectManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_manager_get_type(); } 

// GDBusInterface* /*full,nullable*/ g_dbus_object_manager_get_interface (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ g_dbus_object_manager_get_interface (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/);
GI_INLINE_DECL Gio::DBusInterface get_interface (const gi::cstring_v object_path, const gi::cstring_v interface_name) noexcept;

// GDBusObject* /*full,nullable*/ g_dbus_object_manager_get_object (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/);
// ::GDBusObject* /*full,nullable*/ g_dbus_object_manager_get_object (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/);
GI_INLINE_DECL Gio::DBusObject get_object (const gi::cstring_v object_path) noexcept;

// const gchar* /*none*/ g_dbus_object_manager_get_object_path (GDBusObjectManager* manager /*none*/);
// const char* /*none*/ g_dbus_object_manager_get_object_path (::GDBusObjectManager* manager /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path () noexcept;

// GList* /*full*/ g_dbus_object_manager_get_objects (GDBusObjectManager* manager /*none*/);
// ::GList* /*full*/ g_dbus_object_manager_get_objects (::GDBusObjectManager* manager /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> get_objects () noexcept;

// (signal) void interface-added ( object /*none*/,  interface /*none*/);
// (signal) void interface-added (::GDBusObject* object /*none*/, ::GDBusInterface* interface /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> signal_interface_added()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> (*this, "interface-added"); }

// (signal) void interface-removed ( object /*none*/,  interface /*none*/);
// (signal) void interface-removed (::GDBusObject* object /*none*/, ::GDBusInterface* interface /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> signal_interface_removed()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> (*this, "interface-removed"); }

// (signal) void object-added ( object /*none*/);
// (signal) void object-added (::GDBusObject* object /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> signal_object_added()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> (*this, "object-added"); }

// (signal) void object-removed ( object /*none*/);
// (signal) void object-removed (::GDBusObject* object /*none*/);
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> signal_object_removed()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> (*this, "object-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_def.hpp>)
#include <gio/dbusobjectmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra.hpp>)
#include <gio/dbusobjectmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectManager : public GI_GIO_DBUSOBJECTMANAGER_BASE
{ typedef GI_GIO_DBUSOBJECTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectManager>
{ typedef Gio::DBusObjectManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectManagerIfaceDef
{
typedef DBusObjectManagerIfaceDef self;
public:
typedef Gio::DBusObjectManager instance_type;
typedef ::GDBusObjectManagerIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_interface) = self;
using GI_MEMBER_CHECK_CONFLICT(get_object) = self;
using GI_MEMBER_CHECK_CONFLICT(get_object_path) = self;
using GI_MEMBER_CHECK_CONFLICT(get_objects) = self;
using GI_MEMBER_CHECK_CONFLICT(interface_added) = self;
using GI_MEMBER_CHECK_CONFLICT(interface_removed) = self;
using GI_MEMBER_CHECK_CONFLICT(object_added) = self;
using GI_MEMBER_CHECK_CONFLICT(object_removed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusObjectManagerIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/);
virtual Gio::DBusInterface get_interface_ (const gi::cstring_v object_path, const gi::cstring_v interface_name) noexcept = 0;

// GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/);
virtual Gio::DBusObject get_object_ (const gi::cstring_v object_path) noexcept = 0;

// const gchar* /*none*/ DBusObjectManager::get_object_path (GDBusObjectManager* manager /*none*/);
// const char* /*none*/ DBusObjectManager::get_object_path (::GDBusObjectManager* manager /*none*/);
virtual gi::cstring_v get_object_path_ () noexcept = 0;

// GList* /*full*/ DBusObjectManager::get_objects (GDBusObjectManager* manager /*none*/);
// ::GList* /*full*/ DBusObjectManager::get_objects (::GDBusObjectManager* manager /*none*/);
virtual gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> get_objects_ () noexcept = 0;

// void DBusObjectManager::interface_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
virtual void interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept = 0;

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
virtual void interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept = 0;

// void DBusObjectManager::object_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
virtual void object_added_ (Gio::DBusObject object) noexcept = 0;

// void DBusObjectManager::object_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
virtual void object_removed_ (Gio::DBusObject object) noexcept = 0;


};

using DBusObjectManagerImpl = detail::InterfaceImpl<DBusObjectManagerIfaceDef>;

class DBusObjectManagerIfaceClassImpl: public detail::InterfaceClassImpl<DBusObjectManagerImpl>
{
friend class internal::DBusObjectManagerIfaceDef;
typedef DBusObjectManagerIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusObjectManagerImpl> super;

protected:
using super::super;

// GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none*/);
// ::GDBusInterface* /*full,nullable*/ DBusObjectManager::get_interface (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none*/);
GI_INLINE_DECL Gio::DBusInterface get_interface_ (const gi::cstring_v object_path, const gi::cstring_v interface_name) noexcept override;

// GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (GDBusObjectManager* manager /*none*/, const gchar* object_path /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusObjectManager::get_object (::GDBusObjectManager* manager /*none*/, const char* object_path /*none*/);
GI_INLINE_DECL Gio::DBusObject get_object_ (const gi::cstring_v object_path) noexcept override;

// const gchar* /*none*/ DBusObjectManager::get_object_path (GDBusObjectManager* manager /*none*/);
// const char* /*none*/ DBusObjectManager::get_object_path (::GDBusObjectManager* manager /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path_ () noexcept override;

// GList* /*full*/ DBusObjectManager::get_objects (GDBusObjectManager* manager /*none*/);
// ::GList* /*full*/ DBusObjectManager::get_objects (::GDBusObjectManager* manager /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDBusObject*, gi::transfer_full_t> get_objects_ () noexcept override;

// void DBusObjectManager::interface_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL void interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept override;

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/, GDBusInterface* interface_ /*none*/);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/, ::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL void interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept override;

// void DBusObjectManager::object_added (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
GI_INLINE_DECL void object_added_ (Gio::DBusObject object) noexcept override;

// void DBusObjectManager::object_removed (GDBusObjectManager* manager /*none*/, GDBusObject* object /*none*/);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager /*none*/, ::GDBusObject* object /*none*/);
GI_INLINE_DECL void object_removed_ (Gio::DBusObject object) noexcept override;


};


struct DBusObjectManagerIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, get_interface)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, get_object)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, get_object_path)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, get_objects)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, interface_added)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, interface_removed)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, object_added)
  GI_MEMBER_DEFINE(DBusObjectManagerIfaceClassImpl, object_removed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_interface),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_object),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_object_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_objects),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, interface_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, interface_removed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, object_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, object_removed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
