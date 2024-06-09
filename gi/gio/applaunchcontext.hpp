// AUTO-GENERATED

#ifndef _GI_GIO_APPLAUNCHCONTEXT_HPP_
#define _GI_GIO_APPLAUNCHCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class File;

class AppLaunchContext;

namespace base {


#define GI_GIO_APPLAUNCHCONTEXT_BASE base::AppLaunchContextBase
class AppLaunchContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GAppLaunchContext BaseObjectType;

AppLaunchContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_app_launch_context_get_type(); } 

// GAppLaunchContext* /*full*/ g_app_launch_context_new ();
// ::GAppLaunchContext* /*full*/ g_app_launch_context_new ();
static GI_INLINE_DECL Gio::AppLaunchContext new_ () noexcept;

// char* /*full,nullable*/ g_app_launch_context_get_display (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ g_app_launch_context_get_display (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
GI_INLINE_DECL gi::cstring get_display (Gio::AppInfo info, gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files) noexcept;

// char** /*full*/ g_app_launch_context_get_environment (GAppLaunchContext* context /*none*/);
// char** /*full*/ g_app_launch_context_get_environment (::GAppLaunchContext* context /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_environment () noexcept;

// char* /*full,nullable*/ g_app_launch_context_get_startup_notify_id (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ g_app_launch_context_get_startup_notify_id (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
GI_INLINE_DECL gi::cstring get_startup_notify_id (Gio::AppInfo info, gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files) noexcept;

// void g_app_launch_context_launch_failed (GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
// void g_app_launch_context_launch_failed (::GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
GI_INLINE_DECL void launch_failed (const gi::cstring_v startup_notify_id) noexcept;

// void g_app_launch_context_setenv (GAppLaunchContext* context /*none*/, const char* variable /*none*/, const char* value /*none*/);
// void g_app_launch_context_setenv (::GAppLaunchContext* context /*none*/, const char* variable /*none*/, const char* value /*none*/);
GI_INLINE_DECL void setenv (const gi::cstring_v variable, const gi::cstring_v value) noexcept;

// void g_app_launch_context_unsetenv (GAppLaunchContext* context /*none*/, const char* variable /*none*/);
// void g_app_launch_context_unsetenv (::GAppLaunchContext* context /*none*/, const char* variable /*none*/);
GI_INLINE_DECL void unsetenv (const gi::cstring_v variable) noexcept;

// (signal) void launch-failed (gchar* startup_notify_id /*none*/);
// (signal) void launch-failed (char* startup_notify_id /*none*/);
gi::signal_proxy<void(Gio::AppLaunchContext, gi::cstring_v startup_notify_id)> signal_launch_failed()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, gi::cstring_v startup_notify_id)> (*this, "launch-failed"); }

// (signal) void launch-started ( info /*none*/,  platform_data /*none,nullable*/);
// (signal) void launch-started (::GAppInfo* info /*none*/, ::GVariant* platform_data /*none,nullable*/);
gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> signal_launch_started()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> (*this, "launch-started"); }

// (signal) void launched ( info /*none*/,  platform_data /*none*/);
// (signal) void launched (::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> signal_launched()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> (*this, "launched"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_def.hpp>)
#include <gio/applaunchcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra.hpp>)
#include <gio/applaunchcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AppLaunchContext : public GI_GIO_APPLAUNCHCONTEXT_BASE
{ typedef GI_GIO_APPLAUNCHCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAppLaunchContext>
{ typedef Gio::AppLaunchContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AppLaunchContextClassDef
{
typedef AppLaunchContextClassDef self;
public:
typedef Gio::AppLaunchContext instance_type;
typedef ::GAppLaunchContextClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_display) = self;
using GI_MEMBER_CHECK_CONFLICT(get_startup_notify_id) = self;
using GI_MEMBER_CHECK_CONFLICT(launch_failed) = self;
using GI_MEMBER_CHECK_CONFLICT(launch_started) = self;
using GI_MEMBER_CHECK_CONFLICT(launched) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AppLaunchContextClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// char* /*full,nullable*/ AppLaunchContext::get_display (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_display (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
virtual gi::cstring get_display_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept = 0;

// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
virtual gi::cstring get_startup_notify_id_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept = 0;

// void AppLaunchContext::launch_failed (GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
virtual void launch_failed_ (const gi::cstring_v startup_notify_id) noexcept = 0;

// void AppLaunchContext::launch_started (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
virtual void launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept = 0;

// void AppLaunchContext::launched (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launched (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
virtual void launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AppLaunchContextClass: public detail::ClassTemplate<Gio::impl::internal::AppLaunchContextClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::AppLaunchContextClassDef;
typedef AppLaunchContextClass self;
typedef detail::ClassTemplate<Gio::impl::internal::AppLaunchContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// char* /*full,nullable*/ AppLaunchContext::get_display (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_display (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
GI_INLINE_DECL gi::cstring get_display_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept override;

// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GList* files /*none*/);
// char* /*full,nullable*/ AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GList* files /*none*/);
GI_INLINE_DECL gi::cstring get_startup_notify_id_ (Gio::AppInfo info, gi::Collection<GList, ::GFile*, gi::transfer_none_t> files) noexcept override;

// void AppLaunchContext::launch_failed (GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context /*none*/, const char* startup_notify_id /*none*/);
GI_INLINE_DECL void launch_failed_ (const gi::cstring_v startup_notify_id) noexcept override;

// void AppLaunchContext::launch_started (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept override;

// void AppLaunchContext::launched (GAppLaunchContext* context /*none*/, GAppInfo* info /*none*/, GVariant* platform_data /*none*/);
// void AppLaunchContext::launched (::GAppLaunchContext* context /*none*/, ::GAppInfo* info /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept override;


};


struct AppLaunchContextClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(AppLaunchContextClass, get_display)
  GI_MEMBER_DEFINE(AppLaunchContextClass, get_startup_notify_id)
  GI_MEMBER_DEFINE(AppLaunchContextClass, launch_failed)
  GI_MEMBER_DEFINE(AppLaunchContextClass, launch_started)
  GI_MEMBER_DEFINE(AppLaunchContextClass, launched)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_display),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_startup_notify_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch_failed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch_started),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launched)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using AppLaunchContextImpl = detail::ObjectImpl<AppLaunchContext, internal::AppLaunchContextClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
