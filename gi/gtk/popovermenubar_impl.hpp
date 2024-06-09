// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENUBAR_IMPL_HPP_
#define _GI_GTK_POPOVERMENUBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_popover_menu_bar_new_from_model (GMenuModel* model /*none,nullable*/);
// ::GtkPopoverMenuBar* /*none*/ gtk_popover_menu_bar_new_from_model (::GMenuModel* model /*none,nullable*/);
Gtk::PopoverMenuBar base::PopoverMenuBarBase::new_from_model (Gio::MenuModel model) noexcept
{
  typedef ::GtkPopoverMenuBar* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_bar_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::PopoverMenuBar base::PopoverMenuBarBase::new_from_model () noexcept
{
  typedef ::GtkPopoverMenuBar* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_bar_new_from_model;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_menu_bar_add_child (GtkPopoverMenuBar* bar /*none*/, GtkWidget* child /*none*/, const char* id /*none*/);
// gboolean gtk_popover_menu_bar_add_child (::GtkPopoverMenuBar* bar /*none*/, ::GtkWidget* child /*none*/, const char* id /*none*/);
bool base::PopoverMenuBarBase::add_child (Gtk::Widget child, const gi::cstring_v id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopoverMenuBar* bar, ::GtkWidget* child, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_bar_add_child;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenuBar*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (id_to_c));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_popover_menu_bar_get_menu_model (GtkPopoverMenuBar* bar /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_menu_bar_get_menu_model (::GtkPopoverMenuBar* bar /*none*/);
Gio::MenuModel base::PopoverMenuBarBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkPopoverMenuBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_bar_get_menu_model;
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenuBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_menu_bar_remove_child (GtkPopoverMenuBar* bar /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_popover_menu_bar_remove_child (::GtkPopoverMenuBar* bar /*none*/, ::GtkWidget* child /*none*/);
bool base::PopoverMenuBarBase::remove_child (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopoverMenuBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_bar_remove_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenuBar*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// void gtk_popover_menu_bar_set_menu_model (GtkPopoverMenuBar* bar /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_menu_bar_set_menu_model (::GtkPopoverMenuBar* bar /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::PopoverMenuBarBase::set_menu_model (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverMenuBar* bar, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_bar_set_menu_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkPopoverMenuBar*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::PopoverMenuBarBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverMenuBar* bar, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_bar_set_menu_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkPopoverMenuBar*) (gobj_()), (::GMenuModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenubar_extra_def_impl.hpp>)
#include <gtk/popovermenubar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenubar_extra_impl.hpp>)
#include <gtk/popovermenubar_extra_impl.hpp>
#endif
#endif

#endif
