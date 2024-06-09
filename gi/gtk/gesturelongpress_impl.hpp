// AUTO-GENERATED

#ifndef _GI_GTK_GESTURELONGPRESS_IMPL_HPP_
#define _GI_GTK_GESTURELONGPRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_long_press_new ();
// ::GtkGestureLongPress* /*full*/ gtk_gesture_long_press_new ();
Gtk::GestureLongPress base::GestureLongPressBase::new_ () noexcept
{
  typedef ::GtkGestureLongPress* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_long_press_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double gtk_gesture_long_press_get_delay_factor (GtkGestureLongPress* gesture /*none*/);
// gdouble gtk_gesture_long_press_get_delay_factor (::GtkGestureLongPress* gesture /*none*/);
gdouble base::GestureLongPressBase::get_delay_factor () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkGestureLongPress* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_long_press_get_delay_factor;
  auto _temp_ret = call_wrap_v ((::GtkGestureLongPress*) (gobj_()));
  return _temp_ret;
}

// void gtk_gesture_long_press_set_delay_factor (GtkGestureLongPress* gesture /*none*/, double delay_factor);
// void gtk_gesture_long_press_set_delay_factor (::GtkGestureLongPress* gesture /*none*/, gdouble delay_factor);
void base::GestureLongPressBase::set_delay_factor (gdouble delay_factor) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureLongPress* gesture, gdouble delay_factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_long_press_set_delay_factor;
  auto delay_factor_to_c = delay_factor;
  call_wrap_v ((::GtkGestureLongPress*) (gobj_()), (gdouble) (delay_factor_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturelongpress_extra_def_impl.hpp>)
#include <gtk/gesturelongpress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturelongpress_extra_impl.hpp>)
#include <gtk/gesturelongpress_extra_impl.hpp>
#endif
#endif

#endif
