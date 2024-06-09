// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTTRIGGER_IMPL_HPP_
#define _GI_GTK_SHORTCUTTRIGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutTrigger* /*full,nullable*/ gtk_shortcut_trigger_parse_string (const char* string /*none*/);
// ::GtkShortcutTrigger* /*full,nullable*/ gtk_shortcut_trigger_parse_string (const char* string /*none*/);
Gtk::ShortcutTrigger base::ShortcutTriggerBase::parse_string (const gi::cstring_v string) noexcept
{
  typedef ::GtkShortcutTrigger* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_trigger_parse_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_shortcut_trigger_compare (gconstpointer trigger1 /*none*/, gconstpointer trigger2 /*none*/);
// gint gtk_shortcut_trigger_compare (const ::GtkShortcutTrigger* trigger1 /*none*/, const ::GtkShortcutTrigger* trigger2 /*none*/);
gint base::ShortcutTriggerBase::compare (const Gtk::ShortcutTrigger & trigger2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkShortcutTrigger* trigger1, const ::GtkShortcutTrigger* trigger2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_compare;
  auto trigger2_to_c = gi::unwrap (trigger2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GtkShortcutTrigger*) (gobj_()), (const ::GtkShortcutTrigger*) (trigger2_to_c));
  return _temp_ret;
}

// gboolean gtk_shortcut_trigger_equal (gconstpointer trigger1 /*none*/, gconstpointer trigger2 /*none*/);
// gboolean gtk_shortcut_trigger_equal (const ::GtkShortcutTrigger* trigger1 /*none*/, const ::GtkShortcutTrigger* trigger2 /*none*/);
bool base::ShortcutTriggerBase::equal (const Gtk::ShortcutTrigger & trigger2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkShortcutTrigger* trigger1, const ::GtkShortcutTrigger* trigger2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_equal;
  auto trigger2_to_c = gi::unwrap (trigger2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GtkShortcutTrigger*) (gobj_()), (const ::GtkShortcutTrigger*) (trigger2_to_c));
  return _temp_ret;
}

// guint gtk_shortcut_trigger_hash (gconstpointer trigger /*none*/);
// guint gtk_shortcut_trigger_hash (const ::GtkShortcutTrigger* trigger /*none*/);
guint base::ShortcutTriggerBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkShortcutTrigger* trigger);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_hash;
  auto _temp_ret = call_wrap_v ((const ::GtkShortcutTrigger*) (gobj_()));
  return _temp_ret;
}

// void gtk_shortcut_trigger_print (GtkShortcutTrigger* self /*none*/, GString* string /*none*/);
// void gtk_shortcut_trigger_print (::GtkShortcutTrigger* self /*none*/, ::GString* string /*none*/);
void base::ShortcutTriggerBase::print (GLib::String_Ref string) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutTrigger* self, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GtkShortcutTrigger*) (gobj_()), (::GString*) (string_to_c));
}

// gboolean gtk_shortcut_trigger_print_label (GtkShortcutTrigger* self /*none*/, GdkDisplay* display /*none*/, GString* string /*none*/);
// gboolean gtk_shortcut_trigger_print_label (::GtkShortcutTrigger* self /*none*/, ::GdkDisplay* display /*none*/, ::GString* string /*none*/);
bool base::ShortcutTriggerBase::print_label (Gdk::Display display, GLib::String_Ref string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkShortcutTrigger* self, ::GdkDisplay* display, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_print_label;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (gobj_()), (::GdkDisplay*) (display_to_c), (::GString*) (string_to_c));
  return _temp_ret;
}

// char* /*full*/ gtk_shortcut_trigger_to_label (GtkShortcutTrigger* self /*none*/, GdkDisplay* display /*none*/);
// char* /*full*/ gtk_shortcut_trigger_to_label (::GtkShortcutTrigger* self /*none*/, ::GdkDisplay* display /*none*/);
gi::cstring base::ShortcutTriggerBase::to_label (Gdk::Display display) noexcept
{
  typedef char* (*call_wrap_t) (::GtkShortcutTrigger* self, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_to_label;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (gobj_()), (::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_shortcut_trigger_to_string (GtkShortcutTrigger* self /*none*/);
// char* /*full*/ gtk_shortcut_trigger_to_string (::GtkShortcutTrigger* self /*none*/);
gi::cstring base::ShortcutTriggerBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkShortcutTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_trigger_to_string;
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkKeyMatch gtk_shortcut_trigger_trigger (GtkShortcutTrigger* self /*none*/, GdkEvent* event /*none*/, gboolean enable_mnemonics);
// ::GdkKeyMatch gtk_shortcut_trigger_trigger (::GtkShortcutTrigger* self /*none*/,  event /*none*/, gboolean enable_mnemonics);
// SKIP; event type  not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcuttrigger_extra_def_impl.hpp>)
#include <gtk/shortcuttrigger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcuttrigger_extra_impl.hpp>)
#include <gtk/shortcuttrigger_extra_impl.hpp>
#endif
#endif

#endif
