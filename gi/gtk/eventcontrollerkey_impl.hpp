// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERKEY_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* /*full*/ gtk_event_controller_key_new ();
// ::GtkEventControllerKey* /*full*/ gtk_event_controller_key_new ();
Gtk::EventControllerKey base::EventControllerKeyBase::new_ () noexcept
{
  typedef ::GtkEventControllerKey* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_event_controller_key_forward (GtkEventControllerKey* controller /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_event_controller_key_forward (::GtkEventControllerKey* controller /*none*/, ::GtkWidget* widget /*none*/);
bool base::EventControllerKeyBase::forward (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerKey* controller, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_key_forward;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// guint gtk_event_controller_key_get_group (GtkEventControllerKey* controller /*none*/);
// guint gtk_event_controller_key_get_group (::GtkEventControllerKey* controller /*none*/);
guint base::EventControllerKeyBase::get_group () noexcept
{
  typedef guint (*call_wrap_t) (::GtkEventControllerKey* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_key_get_group;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()));
  return _temp_ret;
}

// GtkIMContext* /*none,nullable*/ gtk_event_controller_key_get_im_context (GtkEventControllerKey* controller /*none*/);
// ::GtkIMContext* /*none,nullable*/ gtk_event_controller_key_get_im_context (::GtkEventControllerKey* controller /*none*/);
Gtk::IMContext base::EventControllerKeyBase::get_im_context () noexcept
{
  typedef ::GtkIMContext* (*call_wrap_t) (::GtkEventControllerKey* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_key_get_im_context;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_event_controller_key_set_im_context (GtkEventControllerKey* controller /*none*/, GtkIMContext* im_context /*none,nullable*/);
// void gtk_event_controller_key_set_im_context (::GtkEventControllerKey* controller /*none*/, ::GtkIMContext* im_context /*none,nullable*/);
void base::EventControllerKeyBase::set_im_context (Gtk::IMContext im_context) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventControllerKey* controller, ::GtkIMContext* im_context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_key_set_im_context;
  auto im_context_to_c = gi::unwrap (im_context, gi::transfer_none);
  call_wrap_v ((::GtkEventControllerKey*) (gobj_()), (::GtkIMContext*) (im_context_to_c));
}
void base::EventControllerKeyBase::set_im_context () noexcept
{
  typedef void (*call_wrap_t) (::GtkEventControllerKey* controller, ::GtkIMContext* im_context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_key_set_im_context;
  auto im_context_to_c = nullptr;
  call_wrap_v ((::GtkEventControllerKey*) (gobj_()), (::GtkIMContext*) (im_context_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra_def_impl.hpp>)
#include <gtk/eventcontrollerkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra_impl.hpp>)
#include <gtk/eventcontrollerkey_extra_impl.hpp>
#endif
#endif

#endif
