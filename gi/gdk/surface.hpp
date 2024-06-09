// AUTO-GENERATED

#ifndef _GI_GDK_SURFACE_HPP_
#define _GI_GDK_SURFACE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class CairoContext;
class Cursor;
class Device;
class Display;
class FrameClock;
class GLContext;
class Monitor;
class VulkanContext;

class Surface;

namespace base {


#define GI_GDK_SURFACE_BASE base::SurfaceBase
class SurfaceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkSurface BaseObjectType;

SurfaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_surface_get_type(); } 

// GdkSurface* /*full*/ gdk_surface_new_popup (GdkSurface* parent /*none*/, gboolean autohide);
// ::GdkSurface* /*full*/ gdk_surface_new_popup (::GdkSurface* parent /*none*/, gboolean autohide);
static GI_INLINE_DECL Gdk::Surface new_popup (Gdk::Surface parent, gboolean autohide) noexcept;

// GdkSurface* /*full*/ gdk_surface_new_toplevel (GdkDisplay* display /*none*/);
// ::GdkSurface* /*full*/ gdk_surface_new_toplevel (::GdkDisplay* display /*none*/);
static GI_INLINE_DECL Gdk::Surface new_toplevel (Gdk::Display display) noexcept;

// void gdk_surface_beep (GdkSurface* surface /*none*/);
// void gdk_surface_beep (::GdkSurface* surface /*none*/);
GI_INLINE_DECL void beep () noexcept;

// GdkCairoContext* /*full*/ gdk_surface_create_cairo_context (GdkSurface* surface /*none*/);
// ::GdkCairoContext* /*full*/ gdk_surface_create_cairo_context (::GdkSurface* surface /*none*/);
GI_INLINE_DECL Gdk::CairoContext create_cairo_context () noexcept;

// GdkGLContext* /*full*/ gdk_surface_create_gl_context (GdkSurface* surface /*none*/, GError ** error);
// ::GdkGLContext* /*full*/ gdk_surface_create_gl_context (::GdkSurface* surface /*none*/, GError ** error);
GI_INLINE_DECL Gdk::GLContext create_gl_context ();
GI_INLINE_DECL Gdk::GLContext create_gl_context (GLib::Error * _error) noexcept;

// cairo_surface_t* /*full*/ gdk_surface_create_similar_surface (GdkSurface* surface /*none*/, cairo_content_t content, int width, int height);
// ::cairo_surface_t* /*full*/ gdk_surface_create_similar_surface (::GdkSurface* surface /*none*/, ::cairo_content_t content, gint width, gint height);
// IGNORE; deprecated

// GdkVulkanContext* /*full*/ gdk_surface_create_vulkan_context (GdkSurface* surface /*none*/, GError ** error);
// ::GdkVulkanContext* /*full*/ gdk_surface_create_vulkan_context (::GdkSurface* surface /*none*/, GError ** error);
GI_INLINE_DECL Gdk::VulkanContext create_vulkan_context ();
GI_INLINE_DECL Gdk::VulkanContext create_vulkan_context (GLib::Error * _error) noexcept;

// void gdk_surface_destroy (GdkSurface* surface /*none*/);
// void gdk_surface_destroy (::GdkSurface* surface /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// GdkCursor* /*none,nullable*/ gdk_surface_get_cursor (GdkSurface* surface /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_surface_get_cursor (::GdkSurface* surface /*none*/);
GI_INLINE_DECL Gdk::Cursor get_cursor () noexcept;

// GdkCursor* /*none,nullable*/ gdk_surface_get_device_cursor (GdkSurface* surface /*none*/, GdkDevice* device /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_surface_get_device_cursor (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::Cursor get_device_cursor (Gdk::Device device) noexcept;

// gboolean gdk_surface_get_device_position (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, double* x, double* y, GdkModifierType* mask);
// gboolean gdk_surface_get_device_position (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, gdouble* x, gdouble* y, ::GdkModifierType* mask);
GI_INLINE_DECL bool get_device_position (Gdk::Device device, gdouble * x, gdouble * y, Gdk::ModifierType * mask) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, Gdk::ModifierType> get_device_position (Gdk::Device device) noexcept;

// GdkDisplay* /*none*/ gdk_surface_get_display (GdkSurface* surface /*none*/);
// ::GdkDisplay* /*none*/ gdk_surface_get_display (::GdkSurface* surface /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkFrameClock* /*none*/ gdk_surface_get_frame_clock (GdkSurface* surface /*none*/);
// ::GdkFrameClock* /*none*/ gdk_surface_get_frame_clock (::GdkSurface* surface /*none*/);
GI_INLINE_DECL Gdk::FrameClock get_frame_clock () noexcept;

// int gdk_surface_get_height (GdkSurface* surface /*none*/);
// gint gdk_surface_get_height (::GdkSurface* surface /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// gboolean gdk_surface_get_mapped (GdkSurface* surface /*none*/);
// gboolean gdk_surface_get_mapped (::GdkSurface* surface /*none*/);
GI_INLINE_DECL bool get_mapped () noexcept;

// double gdk_surface_get_scale (GdkSurface* surface /*none*/);
// gdouble gdk_surface_get_scale (::GdkSurface* surface /*none*/);
GI_INLINE_DECL gdouble get_scale () noexcept;

// int gdk_surface_get_scale_factor (GdkSurface* surface /*none*/);
// gint gdk_surface_get_scale_factor (::GdkSurface* surface /*none*/);
GI_INLINE_DECL gint get_scale_factor () noexcept;

// int gdk_surface_get_width (GdkSurface* surface /*none*/);
// gint gdk_surface_get_width (::GdkSurface* surface /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// void gdk_surface_hide (GdkSurface* surface /*none*/);
// void gdk_surface_hide (::GdkSurface* surface /*none*/);
GI_INLINE_DECL void hide () noexcept;

// gboolean gdk_surface_is_destroyed (GdkSurface* surface /*none*/);
// gboolean gdk_surface_is_destroyed (::GdkSurface* surface /*none*/);
GI_INLINE_DECL bool is_destroyed () noexcept;

// void gdk_surface_queue_render (GdkSurface* surface /*none*/);
// void gdk_surface_queue_render (::GdkSurface* surface /*none*/);
GI_INLINE_DECL void queue_render () noexcept;

// void gdk_surface_request_layout (GdkSurface* surface /*none*/);
// void gdk_surface_request_layout (::GdkSurface* surface /*none*/);
GI_INLINE_DECL void request_layout () noexcept;

// void gdk_surface_set_cursor (GdkSurface* surface /*none*/, GdkCursor* cursor /*none,nullable*/);
// void gdk_surface_set_cursor (::GdkSurface* surface /*none*/, ::GdkCursor* cursor /*none,nullable*/);
GI_INLINE_DECL void set_cursor (Gdk::Cursor cursor) noexcept;
GI_INLINE_DECL void set_cursor () noexcept;

// void gdk_surface_set_device_cursor (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, GdkCursor* cursor /*none*/);
// void gdk_surface_set_device_cursor (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, ::GdkCursor* cursor /*none*/);
GI_INLINE_DECL void set_device_cursor (Gdk::Device device, Gdk::Cursor cursor) noexcept;

// void gdk_surface_set_input_region (GdkSurface* surface /*none*/, cairo_region_t* region /*none*/);
// void gdk_surface_set_input_region (::GdkSurface* surface /*none*/, ::cairo_region_t* region /*none*/);
GI_INLINE_DECL void set_input_region (cairo::Region_Ref region) noexcept;

// void gdk_surface_set_opaque_region (GdkSurface* surface /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_surface_set_opaque_region (::GdkSurface* surface /*none*/, ::cairo_region_t* region /*none,nullable*/);
GI_INLINE_DECL void set_opaque_region (cairo::Region_Ref region) noexcept;
GI_INLINE_DECL void set_opaque_region () noexcept;

// gboolean gdk_surface_translate_coordinates (GdkSurface* from /*none*/, GdkSurface* to /*none*/, double* x, double* y);
// gboolean gdk_surface_translate_coordinates (::GdkSurface* from /*none*/, ::GdkSurface* to /*none*/, gdouble* x, gdouble* y);
GI_INLINE_DECL bool translate_coordinates (Gdk::Surface to, gdouble & x, gdouble & y) noexcept;

gi::property_proxy<Gdk::Cursor, base::SurfaceBase> property_cursor()
{ return gi::property_proxy<Gdk::Cursor, base::SurfaceBase> (*this, "cursor"); }
const gi::property_proxy<Gdk::Cursor, base::SurfaceBase> property_cursor() const
{ return gi::property_proxy<Gdk::Cursor, base::SurfaceBase> (*this, "cursor"); }

gi::property_proxy<Gdk::Display, base::SurfaceBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::SurfaceBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::SurfaceBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::SurfaceBase> (*this, "display"); }

gi::property_proxy<Gdk::FrameClock, base::SurfaceBase> property_frame_clock()
{ return gi::property_proxy<Gdk::FrameClock, base::SurfaceBase> (*this, "frame-clock"); }
const gi::property_proxy<Gdk::FrameClock, base::SurfaceBase> property_frame_clock() const
{ return gi::property_proxy<Gdk::FrameClock, base::SurfaceBase> (*this, "frame-clock"); }

gi::property_proxy<gint, base::SurfaceBase> property_height()
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "height"); }
const gi::property_proxy<gint, base::SurfaceBase> property_height() const
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "height"); }

gi::property_proxy<bool, base::SurfaceBase> property_mapped()
{ return gi::property_proxy<bool, base::SurfaceBase> (*this, "mapped"); }
const gi::property_proxy<bool, base::SurfaceBase> property_mapped() const
{ return gi::property_proxy<bool, base::SurfaceBase> (*this, "mapped"); }

gi::property_proxy<gdouble, base::SurfaceBase> property_scale()
{ return gi::property_proxy<gdouble, base::SurfaceBase> (*this, "scale"); }
const gi::property_proxy<gdouble, base::SurfaceBase> property_scale() const
{ return gi::property_proxy<gdouble, base::SurfaceBase> (*this, "scale"); }

gi::property_proxy<gint, base::SurfaceBase> property_scale_factor()
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "scale-factor"); }
const gi::property_proxy<gint, base::SurfaceBase> property_scale_factor() const
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "scale-factor"); }

gi::property_proxy<gint, base::SurfaceBase> property_width()
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "width"); }
const gi::property_proxy<gint, base::SurfaceBase> property_width() const
{ return gi::property_proxy<gint, base::SurfaceBase> (*this, "width"); }

// (signal) void enter-monitor ( monitor /*none*/);
// (signal) void enter-monitor (::GdkMonitor* monitor /*none*/);
gi::signal_proxy<void(Gdk::Surface, Gdk::Monitor monitor)> signal_enter_monitor()
{ return gi::signal_proxy<void(Gdk::Surface, Gdk::Monitor monitor)> (*this, "enter-monitor"); }

// (signal) gboolean event (gpointer event /*none*/);
// (signal) gboolean event ( event /*none*/);
// SKIP; event type  not supported

// (signal) void layout (gint width, gint height);
// (signal) void layout (gint width, gint height);
gi::signal_proxy<void(Gdk::Surface, gint width, gint height)> signal_layout()
{ return gi::signal_proxy<void(Gdk::Surface, gint width, gint height)> (*this, "layout"); }

// (signal) void leave-monitor ( monitor /*none*/);
// (signal) void leave-monitor (::GdkMonitor* monitor /*none*/);
gi::signal_proxy<void(Gdk::Surface, Gdk::Monitor monitor)> signal_leave_monitor()
{ return gi::signal_proxy<void(Gdk::Surface, Gdk::Monitor monitor)> (*this, "leave-monitor"); }

// (signal) gboolean render ( region /*none*/);
// (signal) gboolean render (::cairo_region_t* region /*none*/);
gi::signal_proxy<bool(Gdk::Surface, cairo::Region_Ref region)> signal_render()
{ return gi::signal_proxy<bool(Gdk::Surface, cairo::Region_Ref region)> (*this, "render"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/surface_extra_def.hpp>)
#include <gdk/surface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/surface_extra.hpp>)
#include <gdk/surface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Surface : public GI_GDK_SURFACE_BASE
{ typedef GI_GDK_SURFACE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkSurface>
{ typedef Gdk::Surface type; }; 

} // namespace repository

} // namespace gi

#endif
