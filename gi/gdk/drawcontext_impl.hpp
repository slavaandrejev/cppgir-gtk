// AUTO-GENERATED

#ifndef _GI_GDK_DRAWCONTEXT_IMPL_HPP_
#define _GI_GDK_DRAWCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_draw_context_begin_frame (GdkDrawContext* context /*none*/, const cairo_region_t* region /*none*/);
// void gdk_draw_context_begin_frame (::GdkDrawContext* context /*none*/, const ::cairo_region_t* region /*none*/);
void base::DrawContextBase::begin_frame (const cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrawContext* context, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_begin_frame;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkDrawContext*) (gobj_()), (const ::cairo_region_t*) (region_to_c));
}

// void gdk_draw_context_end_frame (GdkDrawContext* context /*none*/);
// void gdk_draw_context_end_frame (::GdkDrawContext* context /*none*/);
void base::DrawContextBase::end_frame () noexcept
{
  typedef void (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_end_frame;
  call_wrap_v ((::GdkDrawContext*) (gobj_()));
}

// GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (GdkDrawContext* context /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (::GdkDrawContext* context /*none*/);
Gdk::Display base::DrawContextBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (GdkDrawContext* context /*none*/);
// const ::cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (::GdkDrawContext* context /*none*/);
cairo::Region_Ref base::DrawContextBase::get_frame_region () noexcept
{
  typedef const ::cairo_region_t* (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_get_frame_region;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (GdkDrawContext* context /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (::GdkDrawContext* context /*none*/);
Gdk::Surface base::DrawContextBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_get_surface;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_draw_context_is_in_frame (GdkDrawContext* context /*none*/);
// gboolean gdk_draw_context_is_in_frame (::GdkDrawContext* context /*none*/);
bool base::DrawContextBase::is_in_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_is_in_frame;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra_def_impl.hpp>)
#include <gdk/drawcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra_impl.hpp>)
#include <gdk/drawcontext_extra_impl.hpp>
#endif
#endif

#endif
