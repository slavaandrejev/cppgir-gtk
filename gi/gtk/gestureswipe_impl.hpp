// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESWIPE_IMPL_HPP_
#define _GI_GTK_GESTURESWIPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_swipe_new ();
// ::GtkGestureSwipe* /*full*/ gtk_gesture_swipe_new ();
Gtk::GestureSwipe base::GestureSwipeBase::new_ () noexcept
{
  typedef ::GtkGestureSwipe* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_swipe_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_gesture_swipe_get_velocity (GtkGestureSwipe* gesture /*none*/, double* velocity_x, double* velocity_y);
// gboolean gtk_gesture_swipe_get_velocity (::GtkGestureSwipe* gesture /*none*/, gdouble* velocity_x, gdouble* velocity_y);
bool base::GestureSwipeBase::get_velocity (gdouble & velocity_x, gdouble & velocity_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_swipe_get_velocity;
  gdouble velocity_y_o {};
  gdouble velocity_x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureSwipe*) (gobj_()), (gdouble*) (&velocity_x_o), (gdouble*) (&velocity_y_o));
  velocity_y = velocity_y_o;
  velocity_x = velocity_x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureSwipeBase::get_velocity () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_swipe_get_velocity;
  gdouble velocity_y_o {};
  gdouble velocity_x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureSwipe*) (gobj_()), (gdouble*) (&velocity_x_o), (gdouble*) (&velocity_y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = velocity_x_o;
  auto &&tmp_return_3 = velocity_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra_def_impl.hpp>)
#include <gtk/gestureswipe_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra_impl.hpp>)
#include <gtk/gestureswipe_extra_impl.hpp>
#endif
#endif

#endif
