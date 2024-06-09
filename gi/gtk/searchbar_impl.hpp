// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHBAR_IMPL_HPP_
#define _GI_GTK_SEARCHBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_search_bar_new ();
// ::GtkSearchBar* /*none*/ gtk_search_bar_new ();
Gtk::SearchBar base::SearchBarBase::new_ () noexcept
{
  typedef ::GtkSearchBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_search_bar_connect_entry (GtkSearchBar* bar /*none*/, GtkEditable* entry /*none*/);
// void gtk_search_bar_connect_entry (::GtkSearchBar* bar /*none*/, ::GtkEditable* entry /*none*/);
void base::SearchBarBase::connect_entry (Gtk::Editable entry) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkEditable* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_connect_entry;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_none);
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkEditable*) (entry_to_c));
}

// GtkWidget* /*none,nullable*/ gtk_search_bar_get_child (GtkSearchBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_bar_get_child (::GtkSearchBar* bar /*none*/);
Gtk::Widget base::SearchBarBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_get_child;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_search_bar_get_key_capture_widget (GtkSearchBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_bar_get_key_capture_widget (::GtkSearchBar* bar /*none*/);
Gtk::Widget base::SearchBarBase::get_key_capture_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_get_key_capture_widget;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_search_bar_get_search_mode (GtkSearchBar* bar /*none*/);
// gboolean gtk_search_bar_get_search_mode (::GtkSearchBar* bar /*none*/);
bool base::SearchBarBase::get_search_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_get_search_mode;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_search_bar_get_show_close_button (GtkSearchBar* bar /*none*/);
// gboolean gtk_search_bar_get_show_close_button (::GtkSearchBar* bar /*none*/);
bool base::SearchBarBase::get_show_close_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_get_show_close_button;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return _temp_ret;
}

// void gtk_search_bar_set_child (GtkSearchBar* bar /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_search_bar_set_child (::GtkSearchBar* bar /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::SearchBarBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::SearchBarBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_search_bar_set_key_capture_widget (GtkSearchBar* bar /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_search_bar_set_key_capture_widget (::GtkSearchBar* bar /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::SearchBarBase::set_key_capture_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_key_capture_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::SearchBarBase::set_key_capture_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_key_capture_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_search_bar_set_search_mode (GtkSearchBar* bar /*none*/, gboolean search_mode);
// void gtk_search_bar_set_search_mode (::GtkSearchBar* bar /*none*/, gboolean search_mode);
void base::SearchBarBase::set_search_mode (gboolean search_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, gboolean search_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_search_mode;
  auto search_mode_to_c = search_mode;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (gboolean) (search_mode_to_c));
}

// void gtk_search_bar_set_show_close_button (GtkSearchBar* bar /*none*/, gboolean visible);
// void gtk_search_bar_set_show_close_button (::GtkSearchBar* bar /*none*/, gboolean visible);
void base::SearchBarBase::set_show_close_button (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_search_bar_set_show_close_button;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_def_impl.hpp>)
#include <gtk/searchbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_impl.hpp>)
#include <gtk/searchbar_extra_impl.hpp>
#endif
#endif

#endif
