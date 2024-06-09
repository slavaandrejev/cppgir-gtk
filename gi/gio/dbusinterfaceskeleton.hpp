// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACESKELETON_HPP_
#define _GI_GIO_DBUSINTERFACESKELETON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusInterface;
class DBusInterfaceInfo;
class DBusInterfaceInfo_Ref;
class DBusInterfaceVTable;
class DBusInterfaceVTable_Ref;
class DBusMethodInvocation;

class DBusInterfaceSkeleton;

namespace base {


#define GI_GIO_DBUSINTERFACESKELETON_BASE base::DBusInterfaceSkeletonBase
class DBusInterfaceSkeletonBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusInterfaceSkeleton BaseObjectType;

DBusInterfaceSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_skeleton_get_type(); } 

GI_INLINE_DECL Gio::DBusInterface interface_ (gi::interface_tag<Gio::DBusInterface>);

GI_INLINE_DECL operator Gio::DBusInterface ();

// gboolean g_dbus_interface_skeleton_export (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GError ** error);
// gboolean g_dbus_interface_skeleton_export (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/, GError ** error);
GI_INLINE_DECL bool export_ (Gio::DBusConnection connection, const gi::cstring_v object_path);
GI_INLINE_DECL bool export_ (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void g_dbus_interface_skeleton_flush (GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_interface_skeleton_flush (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL void flush () noexcept;

// GDBusConnection* /*none,nullable*/ g_dbus_interface_skeleton_get_connection (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusConnection* /*none,nullable*/ g_dbus_interface_skeleton_get_connection (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// GList* /*full*/ g_dbus_interface_skeleton_get_connections (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GList* /*full*/ g_dbus_interface_skeleton_get_connections (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDBusConnection*, gi::transfer_full_t> get_connections () noexcept;

// GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceSkeletonFlags get_flags () noexcept;

// GDBusInterfaceInfo* /*none*/ g_dbus_interface_skeleton_get_info (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ g_dbus_interface_skeleton_get_info (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref get_info () noexcept;

// const gchar* /*none,nullable*/ g_dbus_interface_skeleton_get_object_path (GDBusInterfaceSkeleton* interface_ /*none*/);
// const char* /*none,nullable*/ g_dbus_interface_skeleton_get_object_path (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path () noexcept;

// GVariant* /*full*/ g_dbus_interface_skeleton_get_properties (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GVariant* /*full*/ g_dbus_interface_skeleton_get_properties (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL GLib::Variant get_properties () noexcept;

// GDBusInterfaceVTable* /*none*/ g_dbus_interface_skeleton_get_vtable (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceVTable* /*none*/ g_dbus_interface_skeleton_get_vtable (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceVTable_Ref get_vtable () noexcept;

// gboolean g_dbus_interface_skeleton_has_connection (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/);
// gboolean g_dbus_interface_skeleton_has_connection (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/);
GI_INLINE_DECL bool has_connection (Gio::DBusConnection connection) noexcept;

// void g_dbus_interface_skeleton_set_flags (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusInterfaceSkeletonFlags flags);
// void g_dbus_interface_skeleton_set_flags (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusInterfaceSkeletonFlags flags);
GI_INLINE_DECL void set_flags (Gio::DBusInterfaceSkeletonFlags flags) noexcept;

// void g_dbus_interface_skeleton_unexport (GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_interface_skeleton_unexport (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL void unexport () noexcept;

// void g_dbus_interface_skeleton_unexport_from_connection (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusConnection* connection /*none*/);
// void g_dbus_interface_skeleton_unexport_from_connection (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusConnection* connection /*none*/);
GI_INLINE_DECL void unexport_from_connection (Gio::DBusConnection connection) noexcept;

gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> property_g_flags()
{ return gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> (*this, "g-flags"); }
const gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> property_g_flags() const
{ return gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> (*this, "g-flags"); }

// (signal) gboolean g-authorize-method ( invocation /*none*/);
// (signal) gboolean g-authorize-method (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Gio::DBusInterfaceSkeleton, Gio::DBusMethodInvocation invocation)> signal_g_authorize_method()
{ return gi::signal_proxy<bool(Gio::DBusInterfaceSkeleton, Gio::DBusMethodInvocation invocation)> (*this, "g-authorize-method"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_def.hpp>)
#include <gio/dbusinterfaceskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra.hpp>)
#include <gio/dbusinterfaceskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceSkeleton : public GI_GIO_DBUSINTERFACESKELETON_BASE
{ typedef GI_GIO_DBUSINTERFACESKELETON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterfaceSkeleton>
{ typedef Gio::DBusInterfaceSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusinterface.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusInterfaceSkeletonClassDef
{
typedef DBusInterfaceSkeletonClassDef self;
public:
typedef Gio::DBusInterfaceSkeleton instance_type;
typedef ::GDBusInterfaceSkeletonClass class_type;

using GI_MEMBER_CHECK_CONFLICT(flush) = self;
using GI_MEMBER_CHECK_CONFLICT(g_authorize_method) = self;
using GI_MEMBER_CHECK_CONFLICT(get_info) = self;
using GI_MEMBER_CHECK_CONFLICT(get_properties) = self;
using GI_MEMBER_CHECK_CONFLICT(get_vtable) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusInterfaceSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_ /*none*/);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_ /*none*/);
virtual void flush_ () noexcept = 0;

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_ /*none*/);
virtual Gio::DBusInterfaceInfo_Ref get_info_ () noexcept = 0;

// GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_ /*none*/);
virtual GLib::Variant get_properties_ () noexcept = 0;

// GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (::GDBusInterfaceSkeleton* interface_ /*none*/);
virtual Gio::DBusInterfaceVTable_Ref get_vtable_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusInterfaceSkeletonClass: public detail::ClassTemplate<Gio::impl::internal::DBusInterfaceSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusInterfaceIfaceClassImpl>
{
friend class internal::DBusInterfaceSkeletonClassDef;
typedef DBusInterfaceSkeletonClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusInterfaceSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusInterfaceIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusInterfaceIfaceClassImpl GDBusInterfaceIface_type;


// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_ /*none*/);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL void flush_ () noexcept override;

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept override;

// GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceInfo* /*none*/ DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref get_info_ () noexcept override;

// GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GVariant* /*full*/ DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL GLib::Variant get_properties_ () noexcept override;

// GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (GDBusInterfaceSkeleton* interface_ /*none*/);
// ::GDBusInterfaceVTable* /*none*/ DBusInterfaceSkeleton::get_vtable (::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL Gio::DBusInterfaceVTable_Ref get_vtable_ () noexcept override;


};


struct DBusInterfaceSkeletonClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusInterfaceSkeletonClass, flush)
  GI_MEMBER_DEFINE(DBusInterfaceSkeletonClass, g_authorize_method)
  GI_MEMBER_DEFINE(DBusInterfaceSkeletonClass, get_info)
  GI_MEMBER_DEFINE(DBusInterfaceSkeletonClass, get_properties)
  GI_MEMBER_DEFINE(DBusInterfaceSkeletonClass, get_vtable)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, flush),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, g_authorize_method),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_properties),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_vtable)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DBusInterfaceSkeletonImpl = detail::ObjectImpl<DBusInterfaceSkeleton, internal::DBusInterfaceSkeletonClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
