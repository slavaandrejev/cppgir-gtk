// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERFOCUS_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERFOCUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* /*full*/ gtk_event_controller_focus_new ();
// ::GtkEventControllerFocus* /*full*/ gtk_event_controller_focus_new ();
Gtk::EventControllerFocus base::EventControllerFocusBase::new_ () noexcept
{
  typedef ::GtkEventControllerFocus* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_focus_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_event_controller_focus_contains_focus (GtkEventControllerFocus* self /*none*/);
// gboolean gtk_event_controller_focus_contains_focus (::GtkEventControllerFocus* self /*none*/);
bool base::EventControllerFocusBase::contains_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerFocus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_focus_contains_focus;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerFocus*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_event_controller_focus_is_focus (GtkEventControllerFocus* self /*none*/);
// gboolean gtk_event_controller_focus_is_focus (::GtkEventControllerFocus* self /*none*/);
bool base::EventControllerFocusBase::is_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerFocus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_focus_is_focus;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerFocus*) (gobj_()));
  return _temp_ret;
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerfocus_extra_def_impl.hpp>)
#include <gtk/eventcontrollerfocus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerfocus_extra_impl.hpp>)
#include <gtk/eventcontrollerfocus_extra_impl.hpp>
#endif
#endif

#endif
