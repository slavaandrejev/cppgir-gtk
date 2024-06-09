// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTACTION_IMPL_HPP_
#define _GI_GTK_SHORTCUTACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*full,nullable*/ gtk_shortcut_action_parse_string (const char* string /*none*/);
// ::GtkShortcutAction* /*full,nullable*/ gtk_shortcut_action_parse_string (const char* string /*none*/);
Gtk::ShortcutAction base::ShortcutActionBase::parse_string (const gi::cstring_v string) noexcept
{
  typedef ::GtkShortcutAction* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_action_parse_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_shortcut_action_activate (GtkShortcutAction* self /*none*/, GtkShortcutActionFlags flags, GtkWidget* widget /*none*/, GVariant* args /*none,nullable*/);
// gboolean gtk_shortcut_action_activate (::GtkShortcutAction* self /*none*/, ::GtkShortcutActionFlags flags, ::GtkWidget* widget /*none*/, ::GVariant* args /*none,nullable*/);
bool base::ShortcutActionBase::activate (Gtk::ShortcutActionFlags flags, Gtk::Widget widget, GLib::Variant args) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkShortcutAction* self, ::GtkShortcutActionFlags flags, ::GtkWidget* widget, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_action_activate;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GtkShortcutAction*) (gobj_()), (::GtkShortcutActionFlags) (flags_to_c), (::GtkWidget*) (widget_to_c), (::GVariant*) (args_to_c));
  return _temp_ret;
}
bool base::ShortcutActionBase::activate (Gtk::ShortcutActionFlags flags, Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkShortcutAction* self, ::GtkShortcutActionFlags flags, ::GtkWidget* widget, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_action_activate;
  auto args_to_c = nullptr;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GtkShortcutAction*) (gobj_()), (::GtkShortcutActionFlags) (flags_to_c), (::GtkWidget*) (widget_to_c), (::GVariant*) (args_to_c));
  return _temp_ret;
}

// void gtk_shortcut_action_print (GtkShortcutAction* self /*none*/, GString* string /*none*/);
// void gtk_shortcut_action_print (::GtkShortcutAction* self /*none*/, ::GString* string /*none*/);
void base::ShortcutActionBase::print (GLib::String_Ref string) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutAction* self, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_action_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GtkShortcutAction*) (gobj_()), (::GString*) (string_to_c));
}

// char* /*full*/ gtk_shortcut_action_to_string (GtkShortcutAction* self /*none*/);
// char* /*full*/ gtk_shortcut_action_to_string (::GtkShortcutAction* self /*none*/);
gi::cstring base::ShortcutActionBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkShortcutAction* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_action_to_string;
  auto _temp_ret = call_wrap_v ((::GtkShortcutAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutaction_extra_def_impl.hpp>)
#include <gtk/shortcutaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutaction_extra_impl.hpp>)
#include <gtk/shortcutaction_extra_impl.hpp>
#endif
#endif

#endif
