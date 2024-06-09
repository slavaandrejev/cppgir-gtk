// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTSKELETON_HPP_
#define _GI_GIO_DBUSOBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceSkeleton;
class DBusMethodInvocation;
class DBusObject;

class DBusObjectSkeleton;

namespace base {


#define GI_GIO_DBUSOBJECTSKELETON_BASE base::DBusObjectSkeletonBase
class DBusObjectSkeletonBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectSkeleton BaseObjectType;

DBusObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_skeleton_get_type(); } 

GI_INLINE_DECL Gio::DBusObject interface_ (gi::interface_tag<Gio::DBusObject>);

GI_INLINE_DECL operator Gio::DBusObject ();

// GDBusObjectSkeleton* /*full*/ g_dbus_object_skeleton_new (const gchar* object_path /*none*/);
// ::GDBusObjectSkeleton* /*full*/ g_dbus_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL Gio::DBusObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void g_dbus_object_skeleton_add_interface (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_object_skeleton_add_interface (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL void add_interface (Gio::DBusInterfaceSkeleton interface_) noexcept;

// void g_dbus_object_skeleton_flush (GDBusObjectSkeleton* object /*none*/);
// void g_dbus_object_skeleton_flush (::GDBusObjectSkeleton* object /*none*/);
GI_INLINE_DECL void flush () noexcept;

// void g_dbus_object_skeleton_remove_interface (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/);
// void g_dbus_object_skeleton_remove_interface (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/);
GI_INLINE_DECL void remove_interface (Gio::DBusInterfaceSkeleton interface_) noexcept;

// void g_dbus_object_skeleton_remove_interface_by_name (GDBusObjectSkeleton* object /*none*/, const gchar* interface_name /*none*/);
// void g_dbus_object_skeleton_remove_interface_by_name (::GDBusObjectSkeleton* object /*none*/, const char* interface_name /*none*/);
GI_INLINE_DECL void remove_interface_by_name (const gi::cstring_v interface_name) noexcept;

// void g_dbus_object_skeleton_set_object_path (GDBusObjectSkeleton* object /*none*/, const gchar* object_path /*none*/);
// void g_dbus_object_skeleton_set_object_path (::GDBusObjectSkeleton* object /*none*/, const char* object_path /*none*/);
GI_INLINE_DECL void set_object_path (const gi::cstring_v object_path) noexcept;

gi::property_proxy<gi::cstring, base::DBusObjectSkeletonBase> property_g_object_path()
{ return gi::property_proxy<gi::cstring, base::DBusObjectSkeletonBase> (*this, "g-object-path"); }
const gi::property_proxy<gi::cstring, base::DBusObjectSkeletonBase> property_g_object_path() const
{ return gi::property_proxy<gi::cstring, base::DBusObjectSkeletonBase> (*this, "g-object-path"); }

// (signal) gboolean authorize-method ( interface /*none*/,  invocation /*none*/);
// (signal) gboolean authorize-method (::GDBusInterfaceSkeleton* interface /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Gio::DBusObjectSkeleton, Gio::DBusInterfaceSkeleton interface, Gio::DBusMethodInvocation invocation)> signal_authorize_method()
{ return gi::signal_proxy<bool(Gio::DBusObjectSkeleton, Gio::DBusInterfaceSkeleton interface, Gio::DBusMethodInvocation invocation)> (*this, "authorize-method"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra_def.hpp>)
#include <gio/dbusobjectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra.hpp>)
#include <gio/dbusobjectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectSkeleton : public GI_GIO_DBUSOBJECTSKELETON_BASE
{ typedef GI_GIO_DBUSOBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectSkeleton>
{ typedef Gio::DBusObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusobject.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectSkeletonClassDef
{
typedef DBusObjectSkeletonClassDef self;
public:
typedef Gio::DBusObjectSkeleton instance_type;
typedef ::GDBusObjectSkeletonClass class_type;

using GI_MEMBER_CHECK_CONFLICT(authorize_method) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean DBusObjectSkeleton::authorize_method (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusObjectSkeleton::authorize_method (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool authorize_method_ (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusObjectSkeletonClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl>
{
friend class internal::DBusObjectSkeletonClassDef;
typedef DBusObjectSkeletonClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusObjectIfaceClassImpl GDBusObjectIface_type;


// gboolean DBusObjectSkeleton::authorize_method (GDBusObjectSkeleton* object /*none*/, GDBusInterfaceSkeleton* interface_ /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusObjectSkeleton::authorize_method (::GDBusObjectSkeleton* object /*none*/, ::GDBusInterfaceSkeleton* interface_ /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool authorize_method_ (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation) noexcept override;


};


struct DBusObjectSkeletonClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusObjectSkeletonClass, authorize_method)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, authorize_method)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectSkeletonImpl = detail::ObjectImpl<DBusObjectSkeleton, internal::DBusObjectSkeletonClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
