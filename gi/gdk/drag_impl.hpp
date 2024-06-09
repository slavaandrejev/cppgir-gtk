// AUTO-GENERATED

#ifndef _GI_GDK_DRAG_IMPL_HPP_
#define _GI_GDK_DRAG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDrag* /*full,nullable*/ gdk_drag_begin (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, GdkContentProvider* content /*none*/, GdkDragAction actions, double dx, double dy);
// ::GdkDrag* /*full,nullable*/ gdk_drag_begin (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, ::GdkContentProvider* content /*none*/, ::GdkDragAction actions, gdouble dx, gdouble dy);
Gdk::Drag base::DragBase::begin (Gdk::Surface surface, Gdk::Device device, Gdk::ContentProvider content, Gdk::DragAction actions, gdouble dx, gdouble dy) noexcept
{
  typedef ::GdkDrag* (*call_wrap_t) (::GdkSurface* surface, ::GdkDevice* device, ::GdkContentProvider* content, ::GdkDragAction actions, gdouble dx, gdouble dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_begin;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  auto actions_to_c = gi::unwrap (actions);
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (surface_to_c), (::GdkDevice*) (device_to_c), (::GdkContentProvider*) (content_to_c), (::GdkDragAction) (actions_to_c), (gdouble) (dx_to_c), (gdouble) (dy_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_drag_drop_done (GdkDrag* drag /*none*/, gboolean success);
// void gdk_drag_drop_done (::GdkDrag* drag /*none*/, gboolean success);
void base::DragBase::drop_done (gboolean success) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrag* drag, gboolean success);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_drop_done;
  auto success_to_c = success;
  call_wrap_v ((::GdkDrag*) (gobj_()), (gboolean) (success_to_c));
}

// GdkDragAction gdk_drag_get_actions (GdkDrag* drag /*none*/);
// ::GdkDragAction gdk_drag_get_actions (::GdkDrag* drag /*none*/);
Gdk::DragAction base::DragBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_actions;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkContentProvider* /*none*/ gdk_drag_get_content (GdkDrag* drag /*none*/);
// ::GdkContentProvider* /*none*/ gdk_drag_get_content (::GdkDrag* drag /*none*/);
Gdk::ContentProvider base::DragBase::get_content () noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_content;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDevice* /*none*/ gdk_drag_get_device (GdkDrag* drag /*none*/);
// ::GdkDevice* /*none*/ gdk_drag_get_device (::GdkDrag* drag /*none*/);
Gdk::Device base::DragBase::get_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_device;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none*/ gdk_drag_get_display (GdkDrag* drag /*none*/);
// ::GdkDisplay* /*none*/ gdk_drag_get_display (::GdkDrag* drag /*none*/);
Gdk::Display base::DragBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkSurface* /*none,nullable*/ gdk_drag_get_drag_surface (GdkDrag* drag /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_drag_get_drag_surface (::GdkDrag* drag /*none*/);
Gdk::Surface base::DragBase::get_drag_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_drag_surface;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkContentFormats* /*none*/ gdk_drag_get_formats (GdkDrag* drag /*none*/);
// ::GdkContentFormats* /*none*/ gdk_drag_get_formats (::GdkDrag* drag /*none*/);
Gdk::ContentFormats_Ref base::DragBase::get_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_formats;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDragAction gdk_drag_get_selected_action (GdkDrag* drag /*none*/);
// ::GdkDragAction gdk_drag_get_selected_action (::GdkDrag* drag /*none*/);
Gdk::DragAction base::DragBase::get_selected_action () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_selected_action;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkSurface* /*none*/ gdk_drag_get_surface (GdkDrag* drag /*none*/);
// ::GdkSurface* /*none*/ gdk_drag_get_surface (::GdkDrag* drag /*none*/);
Gdk::Surface base::DragBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_get_surface;
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_drag_set_hotspot (GdkDrag* drag /*none*/, int hot_x, int hot_y);
// void gdk_drag_set_hotspot (::GdkDrag* drag /*none*/, gint hot_x, gint hot_y);
void base::DragBase::set_hotspot (gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrag* drag, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_set_hotspot;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  call_wrap_v ((::GdkDrag*) (gobj_()), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}





} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drag_extra_def_impl.hpp>)
#include <gdk/drag_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drag_extra_impl.hpp>)
#include <gdk/drag_extra_impl.hpp>
#endif
#endif

#endif
