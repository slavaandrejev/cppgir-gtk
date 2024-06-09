// AUTO-GENERATED

#ifndef _GI_GDK_GLCONTEXT_HPP_
#define _GI_GDK_GLCONTEXT_HPP_

#include "drawcontext.hpp"

namespace gi {

namespace repository {

namespace Gdk {

class Display;
class Surface;

class GLContext;

namespace base {


#define GI_GDK_GLCONTEXT_BASE base::GLContextBase
class GLContextBase : public Gdk::DrawContext
{
typedef Gdk::DrawContext super_type;
public:
typedef ::GdkGLContext BaseObjectType;

GLContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_gl_context_get_type(); } 

// void gdk_gl_context_clear_current ();
// void gdk_gl_context_clear_current ();
static GI_INLINE_DECL void clear_current () noexcept;

// GdkGLContext* /*none,nullable*/ gdk_gl_context_get_current ();
// ::GdkGLContext* /*none,nullable*/ gdk_gl_context_get_current ();
static GI_INLINE_DECL Gdk::GLContext get_current () noexcept;

// GdkGLAPI gdk_gl_context_get_allowed_apis (GdkGLContext* self /*none*/);
// ::GdkGLAPI gdk_gl_context_get_allowed_apis (::GdkGLContext* self /*none*/);
GI_INLINE_DECL Gdk::GLAPI_ get_allowed_apis () noexcept;

// GdkGLAPI gdk_gl_context_get_api (GdkGLContext* self /*none*/);
// ::GdkGLAPI gdk_gl_context_get_api (::GdkGLContext* self /*none*/);
GI_INLINE_DECL Gdk::GLAPI_ get_api () noexcept;

// gboolean gdk_gl_context_get_debug_enabled (GdkGLContext* context /*none*/);
// gboolean gdk_gl_context_get_debug_enabled (::GdkGLContext* context /*none*/);
GI_INLINE_DECL bool get_debug_enabled () noexcept;

// GdkDisplay* /*none,nullable*/ gdk_gl_context_get_display (GdkGLContext* context /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_gl_context_get_display (::GdkGLContext* context /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// gboolean gdk_gl_context_get_forward_compatible (GdkGLContext* context /*none*/);
// gboolean gdk_gl_context_get_forward_compatible (::GdkGLContext* context /*none*/);
GI_INLINE_DECL bool get_forward_compatible () noexcept;

// void gdk_gl_context_get_required_version (GdkGLContext* context /*none*/, int* major, int* minor);
// void gdk_gl_context_get_required_version (::GdkGLContext* context /*none*/, gint* major, gint* minor);
GI_INLINE_DECL void get_required_version (gint & major, gint & minor) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_required_version () noexcept;

// GdkGLContext* /*none,nullable*/ gdk_gl_context_get_shared_context (GdkGLContext* context /*none*/);
// ::GdkGLContext* /*none,nullable*/ gdk_gl_context_get_shared_context (::GdkGLContext* context /*none*/);
// IGNORE; deprecated

// GdkSurface* /*none,nullable*/ gdk_gl_context_get_surface (GdkGLContext* context /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_gl_context_get_surface (::GdkGLContext* context /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// gboolean gdk_gl_context_get_use_es (GdkGLContext* context /*none*/);
// gboolean gdk_gl_context_get_use_es (::GdkGLContext* context /*none*/);
GI_INLINE_DECL bool get_use_es () noexcept;

// void gdk_gl_context_get_version (GdkGLContext* context /*none*/, int* major, int* minor);
// void gdk_gl_context_get_version (::GdkGLContext* context /*none*/, gint* major, gint* minor);
GI_INLINE_DECL void get_version (gint & major, gint & minor) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_version () noexcept;

// gboolean gdk_gl_context_is_legacy (GdkGLContext* context /*none*/);
// gboolean gdk_gl_context_is_legacy (::GdkGLContext* context /*none*/);
GI_INLINE_DECL bool is_legacy () noexcept;

// gboolean gdk_gl_context_is_shared (GdkGLContext* self /*none*/, GdkGLContext* other /*none*/);
// gboolean gdk_gl_context_is_shared (::GdkGLContext* self /*none*/, ::GdkGLContext* other /*none*/);
GI_INLINE_DECL bool is_shared (Gdk::GLContext other) noexcept;

// void gdk_gl_context_make_current (GdkGLContext* context /*none*/);
// void gdk_gl_context_make_current (::GdkGLContext* context /*none*/);
GI_INLINE_DECL void make_current () noexcept;

// gboolean gdk_gl_context_realize (GdkGLContext* context /*none*/, GError ** error);
// gboolean gdk_gl_context_realize (::GdkGLContext* context /*none*/, GError ** error);
GI_INLINE_DECL bool realize ();
GI_INLINE_DECL bool realize (GLib::Error * _error) noexcept;

// void gdk_gl_context_set_allowed_apis (GdkGLContext* self /*none*/, GdkGLAPI apis);
// void gdk_gl_context_set_allowed_apis (::GdkGLContext* self /*none*/, ::GdkGLAPI apis);
GI_INLINE_DECL void set_allowed_apis (Gdk::GLAPI_ apis) noexcept;

// void gdk_gl_context_set_debug_enabled (GdkGLContext* context /*none*/, gboolean enabled);
// void gdk_gl_context_set_debug_enabled (::GdkGLContext* context /*none*/, gboolean enabled);
GI_INLINE_DECL void set_debug_enabled (gboolean enabled) noexcept;

// void gdk_gl_context_set_forward_compatible (GdkGLContext* context /*none*/, gboolean compatible);
// void gdk_gl_context_set_forward_compatible (::GdkGLContext* context /*none*/, gboolean compatible);
GI_INLINE_DECL void set_forward_compatible (gboolean compatible) noexcept;

// void gdk_gl_context_set_required_version (GdkGLContext* context /*none*/, int major, int minor);
// void gdk_gl_context_set_required_version (::GdkGLContext* context /*none*/, gint major, gint minor);
GI_INLINE_DECL void set_required_version (gint major, gint minor) noexcept;

// void gdk_gl_context_set_use_es (GdkGLContext* context /*none*/, int use_es);
// void gdk_gl_context_set_use_es (::GdkGLContext* context /*none*/, gint use_es);
GI_INLINE_DECL void set_use_es (gint use_es) noexcept;

gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> property_allowed_apis()
{ return gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> (*this, "allowed-apis"); }
const gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> property_allowed_apis() const
{ return gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> (*this, "allowed-apis"); }

gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> property_api()
{ return gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> (*this, "api"); }
const gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> property_api() const
{ return gi::property_proxy<Gdk::GLAPI_, base::GLContextBase> (*this, "api"); }

gi::property_proxy<Gdk::GLContext, base::GLContextBase> property_shared_context()
{ return gi::property_proxy<Gdk::GLContext, base::GLContextBase> (*this, "shared-context"); }
const gi::property_proxy<Gdk::GLContext, base::GLContextBase> property_shared_context() const
{ return gi::property_proxy<Gdk::GLContext, base::GLContextBase> (*this, "shared-context"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra_def.hpp>)
#include <gdk/glcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra.hpp>)
#include <gdk/glcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class GLContext : public GI_GDK_GLCONTEXT_BASE
{ typedef GI_GDK_GLCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkGLContext>
{ typedef Gdk::GLContext type; }; 

} // namespace repository

} // namespace gi

#endif
