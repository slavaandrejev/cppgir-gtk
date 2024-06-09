// AUTO-GENERATED

#ifndef _GI_GIO_PERMISSION_HPP_
#define _GI_GIO_PERMISSION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class Permission;

namespace base {


#define GI_GIO_PERMISSION_BASE base::PermissionBase
class PermissionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GPermission BaseObjectType;

PermissionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_permission_get_type(); } 

// gboolean g_permission_acquire (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_permission_acquire (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool acquire (Gio::Cancellable cancellable);
GI_INLINE_DECL bool acquire ();
GI_INLINE_DECL bool acquire (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool acquire (GLib::Error * _error) noexcept;

// void g_permission_acquire_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_permission_acquire_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void acquire_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void acquire_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_permission_acquire_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_permission_acquire_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool acquire_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool acquire_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_permission_get_allowed (GPermission* permission /*none*/);
// gboolean g_permission_get_allowed (::GPermission* permission /*none*/);
GI_INLINE_DECL bool get_allowed () noexcept;

// gboolean g_permission_get_can_acquire (GPermission* permission /*none*/);
// gboolean g_permission_get_can_acquire (::GPermission* permission /*none*/);
GI_INLINE_DECL bool get_can_acquire () noexcept;

// gboolean g_permission_get_can_release (GPermission* permission /*none*/);
// gboolean g_permission_get_can_release (::GPermission* permission /*none*/);
GI_INLINE_DECL bool get_can_release () noexcept;

// void g_permission_impl_update (GPermission* permission /*none*/, gboolean allowed, gboolean can_acquire, gboolean can_release);
// void g_permission_impl_update (::GPermission* permission /*none*/, gboolean allowed, gboolean can_acquire, gboolean can_release);
GI_INLINE_DECL void impl_update (gboolean allowed, gboolean can_acquire, gboolean can_release) noexcept;

// gboolean g_permission_release (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_permission_release (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool release (Gio::Cancellable cancellable);
GI_INLINE_DECL bool release ();
GI_INLINE_DECL bool release (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool release (GLib::Error * _error) noexcept;

// void g_permission_release_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_permission_release_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void release_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void release_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_permission_release_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_permission_release_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool release_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool release_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<bool, base::PermissionBase> property_allowed()
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "allowed"); }
const gi::property_proxy<bool, base::PermissionBase> property_allowed() const
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "allowed"); }

gi::property_proxy<bool, base::PermissionBase> property_can_acquire()
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "can-acquire"); }
const gi::property_proxy<bool, base::PermissionBase> property_can_acquire() const
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "can-acquire"); }

gi::property_proxy<bool, base::PermissionBase> property_can_release()
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "can-release"); }
const gi::property_proxy<bool, base::PermissionBase> property_can_release() const
{ return gi::property_proxy<bool, base::PermissionBase> (*this, "can-release"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/permission_extra_def.hpp>)
#include <gio/permission_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/permission_extra.hpp>)
#include <gio/permission_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Permission : public GI_GIO_PERMISSION_BASE
{ typedef GI_GIO_PERMISSION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPermission>
{ typedef Gio::Permission type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PermissionClassDef
{
typedef PermissionClassDef self;
public:
typedef Gio::Permission instance_type;
typedef ::GPermissionClass class_type;

using GI_MEMBER_CHECK_CONFLICT(acquire) = self;
using GI_MEMBER_CHECK_CONFLICT(acquire_async) = self;
using GI_MEMBER_CHECK_CONFLICT(acquire_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(release) = self;
using GI_MEMBER_CHECK_CONFLICT(release_async) = self;
using GI_MEMBER_CHECK_CONFLICT(release_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PermissionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Permission::acquire (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::acquire (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool acquire_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Permission::acquire_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::acquire_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void acquire_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Permission::acquire_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::acquire_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool acquire_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean Permission::release (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::release (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool release_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Permission::release_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::release_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void release_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Permission::release_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::release_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool release_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class PermissionClass: public detail::ClassTemplate<Gio::impl::internal::PermissionClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::PermissionClassDef;
typedef PermissionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::PermissionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Permission::acquire (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::acquire (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool acquire_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Permission::acquire_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::acquire_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void acquire_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Permission::acquire_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::acquire_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool acquire_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean Permission::release (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::release (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool release_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Permission::release_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::release_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void release_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Permission::release_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::release_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool release_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct PermissionClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PermissionClass, acquire)
  GI_MEMBER_DEFINE(PermissionClass, acquire_async)
  GI_MEMBER_DEFINE(PermissionClass, acquire_finish)
  GI_MEMBER_DEFINE(PermissionClass, release)
  GI_MEMBER_DEFINE(PermissionClass, release_async)
  GI_MEMBER_DEFINE(PermissionClass, release_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, acquire),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, acquire_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, acquire_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, release),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, release_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, release_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PermissionImpl = detail::ObjectImpl<Permission, internal::PermissionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
