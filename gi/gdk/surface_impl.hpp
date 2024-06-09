// AUTO-GENERATED

#ifndef _GI_GDK_SURFACE_IMPL_HPP_
#define _GI_GDK_SURFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkSurface* /*full*/ gdk_surface_new_popup (GdkSurface* parent /*none*/, gboolean autohide);
// ::GdkSurface* /*full*/ gdk_surface_new_popup (::GdkSurface* parent /*none*/, gboolean autohide);
Gdk::Surface base::SurfaceBase::new_popup (Gdk::Surface parent, gboolean autohide) noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkSurface* parent, gboolean autohide);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_surface_new_popup;
  auto autohide_to_c = autohide;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (parent_to_c), (gboolean) (autohide_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkSurface* /*full*/ gdk_surface_new_toplevel (GdkDisplay* display /*none*/);
// ::GdkSurface* /*full*/ gdk_surface_new_toplevel (::GdkDisplay* display /*none*/);
Gdk::Surface base::SurfaceBase::new_toplevel (Gdk::Display display) noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_surface_new_toplevel;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_surface_beep (GdkSurface* surface /*none*/);
// void gdk_surface_beep (::GdkSurface* surface /*none*/);
void base::SurfaceBase::beep () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_beep;
  call_wrap_v ((::GdkSurface*) (gobj_()));
}

// GdkCairoContext* /*full*/ gdk_surface_create_cairo_context (GdkSurface* surface /*none*/);
// ::GdkCairoContext* /*full*/ gdk_surface_create_cairo_context (::GdkSurface* surface /*none*/);
Gdk::CairoContext base::SurfaceBase::create_cairo_context () noexcept
{
  typedef ::GdkCairoContext* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_create_cairo_context;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkGLContext* /*full*/ gdk_surface_create_gl_context (GdkSurface* surface /*none*/, GError ** error);
// ::GdkGLContext* /*full*/ gdk_surface_create_gl_context (::GdkSurface* surface /*none*/, GError ** error);
Gdk::GLContext base::SurfaceBase::create_gl_context ()
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_create_gl_context;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::GLContext base::SurfaceBase::create_gl_context (GLib::Error * _error) noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_create_gl_context;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// cairo_surface_t* /*full*/ gdk_surface_create_similar_surface (GdkSurface* surface /*none*/, cairo_content_t content, int width, int height);
// ::cairo_surface_t* /*full*/ gdk_surface_create_similar_surface (::GdkSurface* surface /*none*/, ::cairo_content_t content, gint width, gint height);
// IGNORE; deprecated

// GdkVulkanContext* /*full*/ gdk_surface_create_vulkan_context (GdkSurface* surface /*none*/, GError ** error);
// ::GdkVulkanContext* /*full*/ gdk_surface_create_vulkan_context (::GdkSurface* surface /*none*/, GError ** error);
Gdk::VulkanContext base::SurfaceBase::create_vulkan_context ()
{
  typedef ::GdkVulkanContext* (*call_wrap_t) (::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_create_vulkan_context;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::VulkanContext base::SurfaceBase::create_vulkan_context (GLib::Error * _error) noexcept
{
  typedef ::GdkVulkanContext* (*call_wrap_t) (::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_create_vulkan_context;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_surface_destroy (GdkSurface* surface /*none*/);
// void gdk_surface_destroy (::GdkSurface* surface /*none*/);
void base::SurfaceBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_destroy;
  call_wrap_v ((::GdkSurface*) (gobj_()));
}

// GdkCursor* /*none,nullable*/ gdk_surface_get_cursor (GdkSurface* surface /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_surface_get_cursor (::GdkSurface* surface /*none*/);
Gdk::Cursor base::SurfaceBase::get_cursor () noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_cursor;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkCursor* /*none,nullable*/ gdk_surface_get_device_cursor (GdkSurface* surface /*none*/, GdkDevice* device /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_surface_get_device_cursor (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/);
Gdk::Cursor base::SurfaceBase::get_device_cursor (Gdk::Device device) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkSurface* surface, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_device_cursor;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkDevice*) (device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_surface_get_device_position (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, double* x, double* y, GdkModifierType* mask);
// gboolean gdk_surface_get_device_position (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, gdouble* x, gdouble* y, ::GdkModifierType* mask);
bool base::SurfaceBase::get_device_position (Gdk::Device device, gdouble * x, gdouble * y, Gdk::ModifierType * mask) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkSurface* surface, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_device_position;
  ::GdkModifierType mask_o {};
  gdouble y_o {};
  gdouble x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkDevice*) (device_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr), (::GdkModifierType*) (mask ? &mask_o : nullptr));
  if (mask) *mask = gi::wrap (mask_o);
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble, Gdk::ModifierType> base::SurfaceBase::get_device_position (Gdk::Device device) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkSurface* surface, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_device_position;
  ::GdkModifierType mask_o {};
  gdouble y_o {};
  gdouble x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkDevice*) (device_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o), (::GdkModifierType*) (&mask_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  auto &&tmp_return_4 = gi::wrap (mask_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// GdkDisplay* /*none*/ gdk_surface_get_display (GdkSurface* surface /*none*/);
// ::GdkDisplay* /*none*/ gdk_surface_get_display (::GdkSurface* surface /*none*/);
Gdk::Display base::SurfaceBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_display;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkFrameClock* /*none*/ gdk_surface_get_frame_clock (GdkSurface* surface /*none*/);
// ::GdkFrameClock* /*none*/ gdk_surface_get_frame_clock (::GdkSurface* surface /*none*/);
Gdk::FrameClock base::SurfaceBase::get_frame_clock () noexcept
{
  typedef ::GdkFrameClock* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_frame_clock;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_surface_get_height (GdkSurface* surface /*none*/);
// gint gdk_surface_get_height (::GdkSurface* surface /*none*/);
gint base::SurfaceBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_height;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_surface_get_mapped (GdkSurface* surface /*none*/);
// gboolean gdk_surface_get_mapped (::GdkSurface* surface /*none*/);
bool base::SurfaceBase::get_mapped () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_mapped;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// double gdk_surface_get_scale (GdkSurface* surface /*none*/);
// gdouble gdk_surface_get_scale (::GdkSurface* surface /*none*/);
gdouble base::SurfaceBase::get_scale () noexcept
{
  typedef gdouble (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_scale;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// int gdk_surface_get_scale_factor (GdkSurface* surface /*none*/);
// gint gdk_surface_get_scale_factor (::GdkSurface* surface /*none*/);
gint base::SurfaceBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// int gdk_surface_get_width (GdkSurface* surface /*none*/);
// gint gdk_surface_get_width (::GdkSurface* surface /*none*/);
gint base::SurfaceBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_get_width;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// void gdk_surface_hide (GdkSurface* surface /*none*/);
// void gdk_surface_hide (::GdkSurface* surface /*none*/);
void base::SurfaceBase::hide () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_hide;
  call_wrap_v ((::GdkSurface*) (gobj_()));
}

// gboolean gdk_surface_is_destroyed (GdkSurface* surface /*none*/);
// gboolean gdk_surface_is_destroyed (::GdkSurface* surface /*none*/);
bool base::SurfaceBase::is_destroyed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_is_destroyed;
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()));
  return _temp_ret;
}

// void gdk_surface_queue_render (GdkSurface* surface /*none*/);
// void gdk_surface_queue_render (::GdkSurface* surface /*none*/);
void base::SurfaceBase::queue_render () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_queue_render;
  call_wrap_v ((::GdkSurface*) (gobj_()));
}

// void gdk_surface_request_layout (GdkSurface* surface /*none*/);
// void gdk_surface_request_layout (::GdkSurface* surface /*none*/);
void base::SurfaceBase::request_layout () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_request_layout;
  call_wrap_v ((::GdkSurface*) (gobj_()));
}

// void gdk_surface_set_cursor (GdkSurface* surface /*none*/, GdkCursor* cursor /*none,nullable*/);
// void gdk_surface_set_cursor (::GdkSurface* surface /*none*/, ::GdkCursor* cursor /*none,nullable*/);
void base::SurfaceBase::set_cursor (Gdk::Cursor cursor) noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_cursor;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none);
  call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}
void base::SurfaceBase::set_cursor () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_cursor;
  auto cursor_to_c = nullptr;
  call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}

// void gdk_surface_set_device_cursor (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, GdkCursor* cursor /*none*/);
// void gdk_surface_set_device_cursor (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, ::GdkCursor* cursor /*none*/);
void base::SurfaceBase::set_device_cursor (Gdk::Device device, Gdk::Cursor cursor) noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::GdkDevice* device, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_device_cursor;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none);
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkDevice*) (device_to_c), (::GdkCursor*) (cursor_to_c));
}

// void gdk_surface_set_input_region (GdkSurface* surface /*none*/, cairo_region_t* region /*none*/);
// void gdk_surface_set_input_region (::GdkSurface* surface /*none*/, ::cairo_region_t* region /*none*/);
void base::SurfaceBase::set_input_region (cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_input_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkSurface*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gdk_surface_set_opaque_region (GdkSurface* surface /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_surface_set_opaque_region (::GdkSurface* surface /*none*/, ::cairo_region_t* region /*none,nullable*/);
void base::SurfaceBase::set_opaque_region (cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_opaque_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkSurface*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::SurfaceBase::set_opaque_region () noexcept
{
  typedef void (*call_wrap_t) (::GdkSurface* surface, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_set_opaque_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GdkSurface*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// gboolean gdk_surface_translate_coordinates (GdkSurface* from /*none*/, GdkSurface* to /*none*/, double* x, double* y);
// gboolean gdk_surface_translate_coordinates (::GdkSurface* from /*none*/, ::GdkSurface* to /*none*/, gdouble* x, gdouble* y);
bool base::SurfaceBase::translate_coordinates (Gdk::Surface to, gdouble & x, gdouble & y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkSurface* from, ::GdkSurface* to, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_surface_translate_coordinates;
  auto y_to_c = y;
  gdouble y_o = y_to_c;
  auto x_to_c = x;
  gdouble x_o = x_to_c;
  auto to_to_c = gi::unwrap (to, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (gobj_()), (::GdkSurface*) (to_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}







} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/surface_extra_def_impl.hpp>)
#include <gdk/surface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/surface_extra_impl.hpp>)
#include <gdk/surface_extra_impl.hpp>
#endif
#endif

#endif
