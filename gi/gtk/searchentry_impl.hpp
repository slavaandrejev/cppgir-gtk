// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHENTRY_IMPL_HPP_
#define _GI_GTK_SEARCHENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Editable SearchEntryBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SearchEntryBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ gtk_search_entry_new ();
// ::GtkSearchEntry* /*none*/ gtk_search_entry_new ();
Gtk::SearchEntry base::SearchEntryBase::new_ () noexcept
{
  typedef ::GtkSearchEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_entry_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_search_entry_get_key_capture_widget (GtkSearchEntry* entry /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_entry_get_key_capture_widget (::GtkSearchEntry* entry /*none*/);
Gtk::Widget base::SearchEntryBase::get_key_capture_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_get_key_capture_widget;
  auto _temp_ret = call_wrap_v ((::GtkSearchEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_search_entry_get_placeholder_text (GtkSearchEntry* entry /*none*/);
// const char* /*none,nullable*/ gtk_search_entry_get_placeholder_text (::GtkSearchEntry* entry /*none*/);
gi::cstring_v base::SearchEntryBase::get_placeholder_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_get_placeholder_text;
  auto _temp_ret = call_wrap_v ((::GtkSearchEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_search_entry_get_search_delay (GtkSearchEntry* entry /*none*/);
// guint gtk_search_entry_get_search_delay (::GtkSearchEntry* entry /*none*/);
guint base::SearchEntryBase::get_search_delay () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_get_search_delay;
  auto _temp_ret = call_wrap_v ((::GtkSearchEntry*) (gobj_()));
  return _temp_ret;
}

// void gtk_search_entry_set_key_capture_widget (GtkSearchEntry* entry /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_search_entry_set_key_capture_widget (::GtkSearchEntry* entry /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::SearchEntryBase::set_key_capture_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_set_key_capture_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkSearchEntry*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::SearchEntryBase::set_key_capture_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_set_key_capture_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_search_entry_set_placeholder_text (GtkSearchEntry* entry /*none*/, const char* text /*none,nullable*/);
// void gtk_search_entry_set_placeholder_text (::GtkSearchEntry* entry /*none*/, const char* text /*none,nullable*/);
void base::SearchEntryBase::set_placeholder_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_set_placeholder_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkSearchEntry*) (gobj_()), (const char*) (text_to_c));
}
void base::SearchEntryBase::set_placeholder_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_set_placeholder_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_search_entry_set_search_delay (GtkSearchEntry* entry /*none*/, guint delay);
// void gtk_search_entry_set_search_delay (::GtkSearchEntry* entry /*none*/, guint delay);
void base::SearchEntryBase::set_search_delay (guint delay) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry, guint delay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_entry_set_search_delay;
  auto delay_to_c = delay;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()), (guint) (delay_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_def_impl.hpp>)
#include <gtk/searchentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_impl.hpp>)
#include <gtk/searchentry_extra_impl.hpp>
#endif
#endif

#endif
