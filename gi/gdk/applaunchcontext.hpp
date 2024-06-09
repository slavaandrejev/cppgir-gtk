// AUTO-GENERATED

#ifndef _GI_GDK_APPLAUNCHCONTEXT_HPP_
#define _GI_GDK_APPLAUNCHCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;

class AppLaunchContext;

namespace base {


#define GI_GDK_APPLAUNCHCONTEXT_BASE base::AppLaunchContextBase
class AppLaunchContextBase : public Gio::AppLaunchContext
{
typedef Gio::AppLaunchContext super_type;
public:
typedef ::GdkAppLaunchContext BaseObjectType;

AppLaunchContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_app_launch_context_get_type(); } 

// GdkDisplay* /*none*/ gdk_app_launch_context_get_display (GdkAppLaunchContext* context /*none*/);
// ::GdkDisplay* /*none*/ gdk_app_launch_context_get_display (::GdkAppLaunchContext* context /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// void gdk_app_launch_context_set_desktop (GdkAppLaunchContext* context /*none*/, int desktop);
// void gdk_app_launch_context_set_desktop (::GdkAppLaunchContext* context /*none*/, gint desktop);
GI_INLINE_DECL void set_desktop (gint desktop) noexcept;

// void gdk_app_launch_context_set_icon (GdkAppLaunchContext* context /*none*/, GIcon* icon /*none,nullable*/);
// void gdk_app_launch_context_set_icon (::GdkAppLaunchContext* context /*none*/, ::GIcon* icon /*none,nullable*/);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;
GI_INLINE_DECL void set_icon () noexcept;

// void gdk_app_launch_context_set_icon_name (GdkAppLaunchContext* context /*none*/, const char* icon_name /*none,nullable*/);
// void gdk_app_launch_context_set_icon_name (::GdkAppLaunchContext* context /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void gdk_app_launch_context_set_timestamp (GdkAppLaunchContext* context /*none*/, guint32 timestamp);
// void gdk_app_launch_context_set_timestamp (::GdkAppLaunchContext* context /*none*/, guint32 timestamp);
GI_INLINE_DECL void set_timestamp (guint32 timestamp) noexcept;

gi::property_proxy<Gdk::Display, base::AppLaunchContextBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::AppLaunchContextBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::AppLaunchContextBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::AppLaunchContextBase> (*this, "display"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/applaunchcontext_extra_def.hpp>)
#include <gdk/applaunchcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/applaunchcontext_extra.hpp>)
#include <gdk/applaunchcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class AppLaunchContext : public GI_GDK_APPLAUNCHCONTEXT_BASE
{ typedef GI_GDK_APPLAUNCHCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkAppLaunchContext>
{ typedef Gdk::AppLaunchContext type; }; 

} // namespace repository

} // namespace gi

#endif
