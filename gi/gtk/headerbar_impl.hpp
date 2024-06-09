// AUTO-GENERATED

#ifndef _GI_GTK_HEADERBAR_IMPL_HPP_
#define _GI_GTK_HEADERBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_header_bar_new ();
// ::GtkHeaderBar* /*none*/ gtk_header_bar_new ();
Gtk::HeaderBar base::HeaderBarBase::new_ () noexcept
{
  typedef ::GtkHeaderBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_header_bar_get_decoration_layout (GtkHeaderBar* bar /*none*/);
// const char* /*none,nullable*/ gtk_header_bar_get_decoration_layout (::GtkHeaderBar* bar /*none*/);
gi::cstring_v base::HeaderBarBase::get_decoration_layout () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_get_decoration_layout;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_header_bar_get_show_title_buttons (GtkHeaderBar* bar /*none*/);
// gboolean gtk_header_bar_get_show_title_buttons (::GtkHeaderBar* bar /*none*/);
bool base::HeaderBarBase::get_show_title_buttons () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_get_show_title_buttons;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_header_bar_get_title_widget (GtkHeaderBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_header_bar_get_title_widget (::GtkHeaderBar* bar /*none*/);
Gtk::Widget base::HeaderBarBase::get_title_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_get_title_widget;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_header_bar_pack_end (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_pack_end (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::pack_end (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_pack_end;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_header_bar_pack_start (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_pack_start (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::pack_start (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_pack_start;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_header_bar_remove (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_remove (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_header_bar_set_decoration_layout (GtkHeaderBar* bar /*none*/, const char* layout /*none,nullable*/);
// void gtk_header_bar_set_decoration_layout (::GtkHeaderBar* bar /*none*/, const char* layout /*none,nullable*/);
void base::HeaderBarBase::set_decoration_layout (const gi::cstring_v layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_set_decoration_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}
void base::HeaderBarBase::set_decoration_layout () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_set_decoration_layout;
  auto layout_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}

// void gtk_header_bar_set_show_title_buttons (GtkHeaderBar* bar /*none*/, gboolean setting);
// void gtk_header_bar_set_show_title_buttons (::GtkHeaderBar* bar /*none*/, gboolean setting);
void base::HeaderBarBase::set_show_title_buttons (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_set_show_title_buttons;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_header_bar_set_title_widget (GtkHeaderBar* bar /*none*/, GtkWidget* title_widget /*none,nullable*/);
// void gtk_header_bar_set_title_widget (::GtkHeaderBar* bar /*none*/, ::GtkWidget* title_widget /*none,nullable*/);
void base::HeaderBarBase::set_title_widget (Gtk::Widget title_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_set_title_widget;
  auto title_widget_to_c = gi::unwrap (title_widget, gi::transfer_none);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}
void base::HeaderBarBase::set_title_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_header_bar_set_title_widget;
  auto title_widget_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_def_impl.hpp>)
#include <gtk/headerbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_impl.hpp>)
#include <gtk/headerbar_extra_impl.hpp>
#endif
#endif

#endif
