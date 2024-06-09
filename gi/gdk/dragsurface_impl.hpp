// AUTO-GENERATED

#ifndef _GI_GDK_DRAGSURFACE_IMPL_HPP_
#define _GI_GDK_DRAGSURFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gboolean gdk_drag_surface_present (GdkDragSurface* drag_surface /*none*/, int width, int height);
// gboolean gdk_drag_surface_present (::GdkDragSurface* drag_surface /*none*/, gint width, gint height);
bool base::DragSurfaceBase::present (gint width, gint height) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDragSurface* drag_surface, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_surface_present;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::GdkDragSurface*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dragsurface_extra_def_impl.hpp>)
#include <gdk/dragsurface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dragsurface_extra_impl.hpp>)
#include <gdk/dragsurface_extra_impl.hpp>
#endif
#endif

#endif
