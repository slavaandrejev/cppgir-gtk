// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREZOOM_IMPL_HPP_
#define _GI_GTK_GESTUREZOOM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_zoom_new ();
// ::GtkGestureZoom* /*full*/ gtk_gesture_zoom_new ();
Gtk::GestureZoom base::GestureZoomBase::new_ () noexcept
{
  typedef ::GtkGestureZoom* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_zoom_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double gtk_gesture_zoom_get_scale_delta (GtkGestureZoom* gesture /*none*/);
// gdouble gtk_gesture_zoom_get_scale_delta (::GtkGestureZoom* gesture /*none*/);
gdouble base::GestureZoomBase::get_scale_delta () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkGestureZoom* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_zoom_get_scale_delta;
  auto _temp_ret = call_wrap_v ((::GtkGestureZoom*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturezoom_extra_def_impl.hpp>)
#include <gtk/gesturezoom_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturezoom_extra_impl.hpp>)
#include <gtk/gesturezoom_extra_impl.hpp>
#endif
#endif

#endif
