// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERMOTION_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERMOTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* /*full*/ gtk_event_controller_motion_new ();
// ::GtkEventControllerMotion* /*full*/ gtk_event_controller_motion_new ();
Gtk::EventControllerMotion base::EventControllerMotionBase::new_ () noexcept
{
  typedef ::GtkEventControllerMotion* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_motion_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_event_controller_motion_contains_pointer (GtkEventControllerMotion* self /*none*/);
// gboolean gtk_event_controller_motion_contains_pointer (::GtkEventControllerMotion* self /*none*/);
bool base::EventControllerMotionBase::contains_pointer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerMotion* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_motion_contains_pointer;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerMotion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_event_controller_motion_is_pointer (GtkEventControllerMotion* self /*none*/);
// gboolean gtk_event_controller_motion_is_pointer (::GtkEventControllerMotion* self /*none*/);
bool base::EventControllerMotionBase::is_pointer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerMotion* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_motion_is_pointer;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerMotion*) (gobj_()));
  return _temp_ret;
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra_def_impl.hpp>)
#include <gtk/eventcontrollermotion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra_impl.hpp>)
#include <gtk/eventcontrollermotion_extra_impl.hpp>
#endif
#endif

#endif
