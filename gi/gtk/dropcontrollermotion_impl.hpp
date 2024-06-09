// AUTO-GENERATED

#ifndef _GI_GTK_DROPCONTROLLERMOTION_IMPL_HPP_
#define _GI_GTK_DROPCONTROLLERMOTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* /*full*/ gtk_drop_controller_motion_new ();
// ::GtkDropControllerMotion* /*full*/ gtk_drop_controller_motion_new ();
Gtk::DropControllerMotion base::DropControllerMotionBase::new_ () noexcept
{
  typedef ::GtkDropControllerMotion* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drop_controller_motion_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_drop_controller_motion_contains_pointer (GtkDropControllerMotion* self /*none*/);
// gboolean gtk_drop_controller_motion_contains_pointer (::GtkDropControllerMotion* self /*none*/);
bool base::DropControllerMotionBase::contains_pointer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDropControllerMotion* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_controller_motion_contains_pointer;
  auto _temp_ret = call_wrap_v ((::GtkDropControllerMotion*) (gobj_()));
  return _temp_ret;
}

// GdkDrop* /*none,nullable*/ gtk_drop_controller_motion_get_drop (GtkDropControllerMotion* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_controller_motion_get_drop (::GtkDropControllerMotion* self /*none*/);
Gdk::Drop base::DropControllerMotionBase::get_drop () noexcept
{
  typedef ::GdkDrop* (*call_wrap_t) (::GtkDropControllerMotion* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_controller_motion_get_drop;
  auto _temp_ret = call_wrap_v ((::GtkDropControllerMotion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_drop_controller_motion_is_pointer (GtkDropControllerMotion* self /*none*/);
// gboolean gtk_drop_controller_motion_is_pointer (::GtkDropControllerMotion* self /*none*/);
bool base::DropControllerMotionBase::is_pointer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDropControllerMotion* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_controller_motion_is_pointer;
  auto _temp_ret = call_wrap_v ((::GtkDropControllerMotion*) (gobj_()));
  return _temp_ret;
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dropcontrollermotion_extra_def_impl.hpp>)
#include <gtk/dropcontrollermotion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dropcontrollermotion_extra_impl.hpp>)
#include <gtk/dropcontrollermotion_extra_impl.hpp>
#endif
#endif

#endif
