// AUTO-GENERATED

#ifndef _GI_GTK_SWITCH_IMPL_HPP_
#define _GI_GTK_SWITCH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable SwitchBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SwitchBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ gtk_switch_new ();
// ::GtkSwitch* /*none*/ gtk_switch_new ();
Gtk::Switch base::SwitchBase::new_ () noexcept
{
  typedef ::GtkSwitch* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_switch_get_active (GtkSwitch* self /*none*/);
// gboolean gtk_switch_get_active (::GtkSwitch* self /*none*/);
bool base::SwitchBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSwitch* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_switch_get_active;
  auto _temp_ret = call_wrap_v ((::GtkSwitch*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_switch_get_state (GtkSwitch* self /*none*/);
// gboolean gtk_switch_get_state (::GtkSwitch* self /*none*/);
bool base::SwitchBase::get_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSwitch* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_switch_get_state;
  auto _temp_ret = call_wrap_v ((::GtkSwitch*) (gobj_()));
  return _temp_ret;
}

// void gtk_switch_set_active (GtkSwitch* self /*none*/, gboolean is_active);
// void gtk_switch_set_active (::GtkSwitch* self /*none*/, gboolean is_active);
void base::SwitchBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkSwitch* self, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_switch_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkSwitch*) (gobj_()), (gboolean) (is_active_to_c));
}

// void gtk_switch_set_state (GtkSwitch* self /*none*/, gboolean state);
// void gtk_switch_set_state (::GtkSwitch* self /*none*/, gboolean state);
void base::SwitchBase::set_state (gboolean state) noexcept
{
  typedef void (*call_wrap_t) (::GtkSwitch* self, gboolean state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_switch_set_state;
  auto state_to_c = state;
  call_wrap_v ((::GtkSwitch*) (gobj_()), (gboolean) (state_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_def_impl.hpp>)
#include <gtk/switch_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_impl.hpp>)
#include <gtk/switch_extra_impl.hpp>
#endif
#endif

#endif
