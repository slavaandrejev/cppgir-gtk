// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENU_IMPL_HPP_
#define _GI_GTK_POPOVERMENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_popover_menu_new_from_model (GMenuModel* model /*none,nullable*/);
// ::GtkPopoverMenu* /*none*/ gtk_popover_menu_new_from_model (::GMenuModel* model /*none,nullable*/);
Gtk::PopoverMenu base::PopoverMenuBase::new_from_model (Gio::MenuModel model) noexcept
{
  typedef ::GtkPopoverMenu* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::PopoverMenu base::PopoverMenuBase::new_from_model () noexcept
{
  typedef ::GtkPopoverMenu* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_new_from_model;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_popover_menu_new_from_model_full (GMenuModel* model /*none*/, GtkPopoverMenuFlags flags);
// ::GtkPopoverMenu* /*none*/ gtk_popover_menu_new_from_model_full (::GMenuModel* model /*none*/, ::GtkPopoverMenuFlags flags);
Gtk::PopoverMenu base::PopoverMenuBase::new_from_model_full (Gio::MenuModel model, Gtk::PopoverMenuFlags flags) noexcept
{
  typedef ::GtkPopoverMenu* (*call_wrap_t) (::GMenuModel* model, ::GtkPopoverMenuFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_new_from_model_full;
  auto flags_to_c = gi::unwrap (flags);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c), (::GtkPopoverMenuFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_menu_add_child (GtkPopoverMenu* popover /*none*/, GtkWidget* child /*none*/, const char* id /*none*/);
// gboolean gtk_popover_menu_add_child (::GtkPopoverMenu* popover /*none*/, ::GtkWidget* child /*none*/, const char* id /*none*/);
bool base::PopoverMenuBase::add_child (Gtk::Widget child, const gi::cstring_v id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopoverMenu* popover, ::GtkWidget* child, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_add_child;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenu*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (id_to_c));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_popover_menu_get_menu_model (GtkPopoverMenu* popover /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_menu_get_menu_model (::GtkPopoverMenu* popover /*none*/);
Gio::MenuModel base::PopoverMenuBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkPopoverMenu* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_get_menu_model;
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_menu_remove_child (GtkPopoverMenu* popover /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_popover_menu_remove_child (::GtkPopoverMenu* popover /*none*/, ::GtkWidget* child /*none*/);
bool base::PopoverMenuBase::remove_child (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopoverMenu* popover, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_remove_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPopoverMenu*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// void gtk_popover_menu_set_menu_model (GtkPopoverMenu* popover /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_menu_set_menu_model (::GtkPopoverMenu* popover /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::PopoverMenuBase::set_menu_model (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverMenu* popover, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_set_menu_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkPopoverMenu*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::PopoverMenuBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverMenu* popover, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_menu_set_menu_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkPopoverMenu*) (gobj_()), (::GMenuModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_def_impl.hpp>)
#include <gtk/popovermenu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_impl.hpp>)
#include <gtk/popovermenu_extra_impl.hpp>
#endif
#endif

#endif
