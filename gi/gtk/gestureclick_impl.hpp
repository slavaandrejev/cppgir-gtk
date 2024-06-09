// AUTO-GENERATED

#ifndef _GI_GTK_GESTURECLICK_IMPL_HPP_
#define _GI_GTK_GESTURECLICK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_click_new ();
// ::GtkGestureClick* /*full*/ gtk_gesture_click_new ();
Gtk::GestureClick base::GestureClickBase::new_ () noexcept
{
  typedef ::GtkGestureClick* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_click_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gestureclick_extra_def_impl.hpp>)
#include <gtk/gestureclick_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gestureclick_extra_impl.hpp>)
#include <gtk/gestureclick_extra_impl.hpp>
#endif
#endif

#endif
