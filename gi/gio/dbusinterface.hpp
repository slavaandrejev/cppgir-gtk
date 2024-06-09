// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACE_HPP_
#define _GI_GIO_DBUSINTERFACE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class DBusObject;

class DBusInterface;

namespace base {


#define GI_GIO_DBUSINTERFACE_BASE base::DBusInterfaceBase
class DBusInterfaceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusInterface BaseObjectType;

DBusInterfaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_get_type(); } 

// GDBusObject* /*full,nullable*/ g_dbus_interface_dup_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*full,nullable*/ g_dbus_interface_dup_object (::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusObject get_object () noexcept;

// GDBusInterfaceInfo* /*none*/ g_dbus_interface_get_info (GDBusInterface* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ g_dbus_interface_get_info (::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref get_info () noexcept;

// GDBusObject* /*none,nullable*/ g_dbus_interface_get_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*none,nullable*/ g_dbus_interface_get_object (::GDBusInterface* interface_ /*none*/);
// IGNORE; not introspectable; shadowed-by dup_object

// void g_dbus_interface_set_object (GDBusInterface* interface_ /*none*/, GDBusObject* object /*none,nullable*/);
// void g_dbus_interface_set_object (::GDBusInterface* interface_ /*none*/, ::GDBusObject* object /*none,nullable*/);
GI_INLINE_DECL void set_object (Gio::DBusObject object) noexcept;
GI_INLINE_DECL void set_object () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_def.hpp>)
#include <gio/dbusinterface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra.hpp>)
#include <gio/dbusinterface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterface : public GI_GIO_DBUSINTERFACE_BASE
{ typedef GI_GIO_DBUSINTERFACE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterface>
{ typedef Gio::DBusInterface type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusInterfaceIfaceDef
{
typedef DBusInterfaceIfaceDef self;
public:
typedef Gio::DBusInterface instance_type;
typedef ::GDBusInterfaceIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(dup_object) = self;
using GI_MEMBER_CHECK_CONFLICT(get_info) = self;
using GI_MEMBER_CHECK_CONFLICT(set_object) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusInterfaceIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusObject* /*full,nullable*/ DBusInterface::dup_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusInterface::dup_object (::GDBusInterface* interface_ /*none*/);
virtual Gio::DBusObject dup_object_ () noexcept = 0;

// GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (GDBusInterface* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (::GDBusInterface* interface_ /*none*/);
virtual Gio::DBusInterfaceInfo_Ref get_info_ () noexcept = 0;

// void DBusInterface::set_object (GDBusInterface* interface_ /*none*/, GDBusObject* object /*none,nullable*/);
// void DBusInterface::set_object (::GDBusInterface* interface_ /*none*/, ::GDBusObject* object /*none,nullable*/);
virtual void set_object_ (Gio::DBusObject object) noexcept = 0;


};

using DBusInterfaceImpl = detail::InterfaceImpl<DBusInterfaceIfaceDef>;

class DBusInterfaceIfaceClassImpl: public detail::InterfaceClassImpl<DBusInterfaceImpl>
{
friend class internal::DBusInterfaceIfaceDef;
typedef DBusInterfaceIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusInterfaceImpl> super;

protected:
using super::super;

// GDBusObject* /*full,nullable*/ DBusInterface::dup_object (GDBusInterface* interface_ /*none*/);
// ::GDBusObject* /*full,nullable*/ DBusInterface::dup_object (::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusObject dup_object_ () noexcept override;

// GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (GDBusInterface* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterface::get_info (::GDBusInterface* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref get_info_ () noexcept override;

// void DBusInterface::set_object (GDBusInterface* interface_ /*none*/, GDBusObject* object /*none,nullable*/);
// void DBusInterface::set_object (::GDBusInterface* interface_ /*none*/, ::GDBusObject* object /*none,nullable*/);
GI_INLINE_DECL void set_object_ (Gio::DBusObject object) noexcept override;


};


struct DBusInterfaceIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusInterfaceIfaceClassImpl, dup_object)
  GI_MEMBER_DEFINE(DBusInterfaceIfaceClassImpl, get_info)
  GI_MEMBER_DEFINE(DBusInterfaceIfaceClassImpl, set_object)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, dup_object),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_object)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
