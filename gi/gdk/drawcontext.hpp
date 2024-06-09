// AUTO-GENERATED

#ifndef _GI_GDK_DRAWCONTEXT_HPP_
#define _GI_GDK_DRAWCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;
class Surface;

class DrawContext;

namespace base {


#define GI_GDK_DRAWCONTEXT_BASE base::DrawContextBase
class DrawContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDrawContext BaseObjectType;

DrawContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_draw_context_get_type(); } 

// void gdk_draw_context_begin_frame (GdkDrawContext* context /*none*/, const cairo_region_t* region /*none*/);
// void gdk_draw_context_begin_frame (::GdkDrawContext* context /*none*/, const ::cairo_region_t* region /*none*/);
GI_INLINE_DECL void begin_frame (const cairo::Region_Ref region) noexcept;

// void gdk_draw_context_end_frame (GdkDrawContext* context /*none*/);
// void gdk_draw_context_end_frame (::GdkDrawContext* context /*none*/);
GI_INLINE_DECL void end_frame () noexcept;

// GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (GdkDrawContext* context /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (::GdkDrawContext* context /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// const cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (GdkDrawContext* context /*none*/);
// const ::cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (::GdkDrawContext* context /*none*/);
GI_INLINE_DECL cairo::Region_Ref get_frame_region () noexcept;

// GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (GdkDrawContext* context /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (::GdkDrawContext* context /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// gboolean gdk_draw_context_is_in_frame (GdkDrawContext* context /*none*/);
// gboolean gdk_draw_context_is_in_frame (::GdkDrawContext* context /*none*/);
GI_INLINE_DECL bool is_in_frame () noexcept;

gi::property_proxy<Gdk::Display, base::DrawContextBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DrawContextBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DrawContextBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DrawContextBase> (*this, "display"); }

gi::property_proxy<Gdk::Surface, base::DrawContextBase> property_surface()
{ return gi::property_proxy<Gdk::Surface, base::DrawContextBase> (*this, "surface"); }
const gi::property_proxy<Gdk::Surface, base::DrawContextBase> property_surface() const
{ return gi::property_proxy<Gdk::Surface, base::DrawContextBase> (*this, "surface"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra_def.hpp>)
#include <gdk/drawcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra.hpp>)
#include <gdk/drawcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DrawContext : public GI_GDK_DRAWCONTEXT_BASE
{ typedef GI_GDK_DRAWCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDrawContext>
{ typedef Gdk::DrawContext type; }; 

} // namespace repository

} // namespace gi

#endif
