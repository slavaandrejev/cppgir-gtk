// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLER_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GdkEvent* /*none,nullable*/ gtk_event_controller_get_current_event (GtkEventController* controller /*none*/);
//  /*none,nullable*/ gtk_event_controller_get_current_event (::GtkEventController* controller /*none*/);
// SKIP;  type  not supported

// GdkDevice* /*none,nullable*/ gtk_event_controller_get_current_event_device (GtkEventController* controller /*none*/);
// ::GdkDevice* /*none,nullable*/ gtk_event_controller_get_current_event_device (::GtkEventController* controller /*none*/);
Gdk::Device base::EventControllerBase::get_current_event_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_current_event_device;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkModifierType gtk_event_controller_get_current_event_state (GtkEventController* controller /*none*/);
// ::GdkModifierType gtk_event_controller_get_current_event_state (::GtkEventController* controller /*none*/);
Gdk::ModifierType base::EventControllerBase::get_current_event_state () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_current_event_state;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint32 gtk_event_controller_get_current_event_time (GtkEventController* controller /*none*/);
// guint32 gtk_event_controller_get_current_event_time (::GtkEventController* controller /*none*/);
guint32 base::EventControllerBase::get_current_event_time () noexcept
{
  typedef guint32 (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_current_event_time;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_event_controller_get_name (GtkEventController* controller /*none*/);
// const char* /*none,nullable*/ gtk_event_controller_get_name (::GtkEventController* controller /*none*/);
gi::cstring_v base::EventControllerBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_name;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPropagationLimit gtk_event_controller_get_propagation_limit (GtkEventController* controller /*none*/);
// ::GtkPropagationLimit gtk_event_controller_get_propagation_limit (::GtkEventController* controller /*none*/);
Gtk::PropagationLimit base::EventControllerBase::get_propagation_limit () noexcept
{
  typedef ::GtkPropagationLimit (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_propagation_limit;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPropagationPhase gtk_event_controller_get_propagation_phase (GtkEventController* controller /*none*/);
// ::GtkPropagationPhase gtk_event_controller_get_propagation_phase (::GtkEventController* controller /*none*/);
Gtk::PropagationPhase base::EventControllerBase::get_propagation_phase () noexcept
{
  typedef ::GtkPropagationPhase (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_propagation_phase;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none*/ gtk_event_controller_get_widget (GtkEventController* controller /*none*/);
// ::GtkWidget* /*none*/ gtk_event_controller_get_widget (::GtkEventController* controller /*none*/);
Gtk::Widget base::EventControllerBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_event_controller_reset (GtkEventController* controller /*none*/);
// void gtk_event_controller_reset (::GtkEventController* controller /*none*/);
void base::EventControllerBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_reset;
  call_wrap_v ((::GtkEventController*) (gobj_()));
}

// void gtk_event_controller_set_name (GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
// void gtk_event_controller_set_name (::GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
void base::EventControllerBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkEventController*) (gobj_()), (const char*) (name_to_c));
}
void base::EventControllerBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkEventController*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_event_controller_set_propagation_limit (GtkEventController* controller /*none*/, GtkPropagationLimit limit);
// void gtk_event_controller_set_propagation_limit (::GtkEventController* controller /*none*/, ::GtkPropagationLimit limit);
void base::EventControllerBase::set_propagation_limit (Gtk::PropagationLimit limit) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, ::GtkPropagationLimit limit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_propagation_limit;
  auto limit_to_c = gi::unwrap (limit);
  call_wrap_v ((::GtkEventController*) (gobj_()), (::GtkPropagationLimit) (limit_to_c));
}

// void gtk_event_controller_set_propagation_phase (GtkEventController* controller /*none*/, GtkPropagationPhase phase);
// void gtk_event_controller_set_propagation_phase (::GtkEventController* controller /*none*/, ::GtkPropagationPhase phase);
void base::EventControllerBase::set_propagation_phase (Gtk::PropagationPhase phase) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, ::GtkPropagationPhase phase);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_propagation_phase;
  auto phase_to_c = gi::unwrap (phase);
  call_wrap_v ((::GtkEventController*) (gobj_()), (::GtkPropagationPhase) (phase_to_c));
}

// void gtk_event_controller_set_static_name (GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
// void gtk_event_controller_set_static_name (::GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
void base::EventControllerBase::set_static_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_static_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkEventController*) (gobj_()), (const char*) (name_to_c));
}
void base::EventControllerBase::set_static_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_event_controller_set_static_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkEventController*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_def_impl.hpp>)
#include <gtk/eventcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_impl.hpp>)
#include <gtk/eventcontroller_extra_impl.hpp>
#endif
#endif

#endif
