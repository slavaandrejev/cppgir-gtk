// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONBAR_IMPL_HPP_
#define _GI_GTK_ACTIONBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_action_bar_new ();
// ::GtkActionBar* /*none*/ gtk_action_bar_new ();
Gtk::ActionBar base::ActionBarBase::new_ () noexcept
{
  typedef ::GtkActionBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_action_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_action_bar_get_center_widget (GtkActionBar* action_bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_action_bar_get_center_widget (::GtkActionBar* action_bar /*none*/);
Gtk::Widget base::ActionBarBase::get_center_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkActionBar* action_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_get_center_widget;
  auto _temp_ret = call_wrap_v ((::GtkActionBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_action_bar_get_revealed (GtkActionBar* action_bar /*none*/);
// gboolean gtk_action_bar_get_revealed (::GtkActionBar* action_bar /*none*/);
bool base::ActionBarBase::get_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkActionBar* action_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_get_revealed;
  auto _temp_ret = call_wrap_v ((::GtkActionBar*) (gobj_()));
  return _temp_ret;
}

// void gtk_action_bar_pack_end (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_pack_end (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
void base::ActionBarBase::pack_end (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_pack_end;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkActionBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_action_bar_pack_start (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_pack_start (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
void base::ActionBarBase::pack_start (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_pack_start;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkActionBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_action_bar_remove (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_remove (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
void base::ActionBarBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkActionBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_action_bar_set_center_widget (GtkActionBar* action_bar /*none*/, GtkWidget* center_widget /*none,nullable*/);
// void gtk_action_bar_set_center_widget (::GtkActionBar* action_bar /*none*/, ::GtkWidget* center_widget /*none,nullable*/);
void base::ActionBarBase::set_center_widget (Gtk::Widget center_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, ::GtkWidget* center_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_set_center_widget;
  auto center_widget_to_c = gi::unwrap (center_widget, gi::transfer_none);
  call_wrap_v ((::GtkActionBar*) (gobj_()), (::GtkWidget*) (center_widget_to_c));
}
void base::ActionBarBase::set_center_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, ::GtkWidget* center_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_set_center_widget;
  auto center_widget_to_c = nullptr;
  call_wrap_v ((::GtkActionBar*) (gobj_()), (::GtkWidget*) (center_widget_to_c));
}

// void gtk_action_bar_set_revealed (GtkActionBar* action_bar /*none*/, gboolean revealed);
// void gtk_action_bar_set_revealed (::GtkActionBar* action_bar /*none*/, gboolean revealed);
void base::ActionBarBase::set_revealed (gboolean revealed) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionBar* action_bar, gboolean revealed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_action_bar_set_revealed;
  auto revealed_to_c = revealed;
  call_wrap_v ((::GtkActionBar*) (gobj_()), (gboolean) (revealed_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra_def_impl.hpp>)
#include <gtk/actionbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra_impl.hpp>)
#include <gtk/actionbar_extra_impl.hpp>
#endif
#endif

#endif
