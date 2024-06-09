// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGS_IMPL_HPP_
#define _GI_GTK_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::StyleProvider SettingsBase::interface_ (gi::interface_tag<Gtk::StyleProvider>)
{ return gi::wrap ((Gtk::StyleProvider::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SettingsBase::operator Gtk::StyleProvider ()
{ return interface_ (gi::interface_tag<Gtk::StyleProvider>()); }

// GtkSettings* /*none,nullable*/ gtk_settings_get_default ();
// ::GtkSettings* /*none,nullable*/ gtk_settings_get_default ();
Gtk::Settings base::SettingsBase::get_default () noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_settings_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSettings* /*none*/ gtk_settings_get_for_display (GdkDisplay* display /*none*/);
// ::GtkSettings* /*none*/ gtk_settings_get_for_display (::GdkDisplay* display /*none*/);
Gtk::Settings base::SettingsBase::get_for_display (Gdk::Display display) noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_settings_get_for_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_settings_reset_property (GtkSettings* settings /*none*/, const char* name /*none*/);
// void gtk_settings_reset_property (::GtkSettings* settings /*none*/, const char* name /*none*/);
void base::SettingsBase::reset_property (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_settings_reset_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkSettings*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_def_impl.hpp>)
#include <gtk/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_impl.hpp>)
#include <gtk/settings_extra_impl.hpp>
#endif
#endif

#endif
