// AUTO-GENERATED

#ifndef _GI_GSK_RENDERER_HPP_
#define _GI_GSK_RENDERER_HPP_


namespace gi {

namespace repository {

namespace Gsk {


class Renderer;

namespace base {


#define GI_GSK_RENDERER_BASE base::RendererBase
class RendererBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GskRenderer BaseObjectType;

RendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gsk_renderer_get_type(); } 

// GskRenderer* /*full,nullable*/ gsk_renderer_new_for_surface (GdkSurface* surface /*none*/);
// ::GskRenderer* /*full,nullable*/ gsk_renderer_new_for_surface (::GdkSurface* surface /*none*/);
static GI_INLINE_DECL Gsk::Renderer new_for_surface (Gdk::Surface surface) noexcept;

// GdkSurface* /*none,nullable*/ gsk_renderer_get_surface (GskRenderer* renderer /*none*/);
// ::GdkSurface* /*none,nullable*/ gsk_renderer_get_surface (::GskRenderer* renderer /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// gboolean gsk_renderer_is_realized (GskRenderer* renderer /*none*/);
// gboolean gsk_renderer_is_realized (::GskRenderer* renderer /*none*/);
GI_INLINE_DECL bool is_realized () noexcept;

// gboolean gsk_renderer_realize (GskRenderer* renderer /*none*/, GdkSurface* surface /*none,nullable*/, GError ** error);
// gboolean gsk_renderer_realize (::GskRenderer* renderer /*none*/, ::GdkSurface* surface /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool realize (Gdk::Surface surface);
GI_INLINE_DECL bool realize ();
GI_INLINE_DECL bool realize (Gdk::Surface surface, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool realize (GLib::Error * _error) noexcept;

// void gsk_renderer_render (GskRenderer* renderer /*none*/, GskRenderNode* root /*none*/, const cairo_region_t* region /*none,nullable*/);
// void gsk_renderer_render (::GskRenderer* renderer /*none*/,  root /*none*/, const ::cairo_region_t* region /*none,nullable*/);
// SKIP; root type  not supported

// GdkTexture* /*full*/ gsk_renderer_render_texture (GskRenderer* renderer /*none*/, GskRenderNode* root /*none*/, const graphene_rect_t* viewport /*none,nullable*/);
// ::GdkTexture* /*full*/ gsk_renderer_render_texture (::GskRenderer* renderer /*none*/,  root /*none*/, const ::graphene_rect_t* viewport /*none,nullable*/);
// SKIP; root type  not supported

// void gsk_renderer_unrealize (GskRenderer* renderer /*none*/);
// void gsk_renderer_unrealize (::GskRenderer* renderer /*none*/);
GI_INLINE_DECL void unrealize () noexcept;

gi::property_proxy<bool, base::RendererBase> property_realized()
{ return gi::property_proxy<bool, base::RendererBase> (*this, "realized"); }
const gi::property_proxy<bool, base::RendererBase> property_realized() const
{ return gi::property_proxy<bool, base::RendererBase> (*this, "realized"); }

gi::property_proxy<Gdk::Surface, base::RendererBase> property_surface()
{ return gi::property_proxy<Gdk::Surface, base::RendererBase> (*this, "surface"); }
const gi::property_proxy<Gdk::Surface, base::RendererBase> property_surface() const
{ return gi::property_proxy<Gdk::Surface, base::RendererBase> (*this, "surface"); }

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/renderer_extra_def.hpp>)
#include <gsk/renderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/renderer_extra.hpp>)
#include <gsk/renderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class Renderer : public GI_GSK_RENDERER_BASE
{ typedef GI_GSK_RENDERER_BASE super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskRenderer>
{ typedef Gsk::Renderer type; }; 

} // namespace repository

} // namespace gi

#endif
