// AUTO-GENERATED

#ifndef _GI_GTK_MENUBUTTON_IMPL_HPP_
#define _GI_GTK_MENUBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_menu_button_new ();
// ::GtkMenuButton* /*none*/ gtk_menu_button_new ();
Gtk::MenuButton base::MenuButtonBase::new_ () noexcept
{
  typedef ::GtkMenuButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_menu_button_get_active (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_active (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_button_get_always_show_arrow (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_always_show_arrow (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_always_show_arrow () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_always_show_arrow;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_button_get_can_shrink (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_can_shrink (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_menu_button_get_child (GtkMenuButton* menu_button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_menu_button_get_child (::GtkMenuButton* menu_button /*none*/);
Gtk::Widget base::MenuButtonBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_child;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkArrowType gtk_menu_button_get_direction (GtkMenuButton* menu_button /*none*/);
// ::GtkArrowType gtk_menu_button_get_direction (::GtkMenuButton* menu_button /*none*/);
Gtk::ArrowType base::MenuButtonBase::get_direction () noexcept
{
  typedef ::GtkArrowType (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_direction;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_menu_button_get_has_frame (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_has_frame (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_has_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_has_frame;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_menu_button_get_icon_name (GtkMenuButton* menu_button /*none*/);
// const char* /*none,nullable*/ gtk_menu_button_get_icon_name (::GtkMenuButton* menu_button /*none*/);
gi::cstring_v base::MenuButtonBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_menu_button_get_label (GtkMenuButton* menu_button /*none*/);
// const char* /*none,nullable*/ gtk_menu_button_get_label (::GtkMenuButton* menu_button /*none*/);
gi::cstring_v base::MenuButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_label;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GMenuModel* /*none,nullable*/ gtk_menu_button_get_menu_model (GtkMenuButton* menu_button /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_menu_button_get_menu_model (::GtkMenuButton* menu_button /*none*/);
Gio::MenuModel base::MenuButtonBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_menu_model;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPopover* /*none,nullable*/ gtk_menu_button_get_popover (GtkMenuButton* menu_button /*none*/);
// ::GtkPopover* /*none,nullable*/ gtk_menu_button_get_popover (::GtkMenuButton* menu_button /*none*/);
Gtk::Popover base::MenuButtonBase::get_popover () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_popover;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_menu_button_get_primary (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_primary (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_primary () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_primary;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_button_get_use_underline (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_use_underline (::GtkMenuButton* menu_button /*none*/);
bool base::MenuButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_menu_button_popdown (GtkMenuButton* menu_button /*none*/);
// void gtk_menu_button_popdown (::GtkMenuButton* menu_button /*none*/);
void base::MenuButtonBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_popdown;
  call_wrap_v ((::GtkMenuButton*) (gobj_()));
}

// void gtk_menu_button_popup (GtkMenuButton* menu_button /*none*/);
// void gtk_menu_button_popup (::GtkMenuButton* menu_button /*none*/);
void base::MenuButtonBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_popup;
  call_wrap_v ((::GtkMenuButton*) (gobj_()));
}

// void gtk_menu_button_set_active (GtkMenuButton* menu_button /*none*/, gboolean active);
// void gtk_menu_button_set_active (::GtkMenuButton* menu_button /*none*/, gboolean active);
void base::MenuButtonBase::set_active (gboolean active) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_active;
  auto active_to_c = active;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (active_to_c));
}

// void gtk_menu_button_set_always_show_arrow (GtkMenuButton* menu_button /*none*/, gboolean always_show_arrow);
// void gtk_menu_button_set_always_show_arrow (::GtkMenuButton* menu_button /*none*/, gboolean always_show_arrow);
void base::MenuButtonBase::set_always_show_arrow (gboolean always_show_arrow) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean always_show_arrow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_always_show_arrow;
  auto always_show_arrow_to_c = always_show_arrow;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (always_show_arrow_to_c));
}

// void gtk_menu_button_set_can_shrink (GtkMenuButton* menu_button /*none*/, gboolean can_shrink);
// void gtk_menu_button_set_can_shrink (::GtkMenuButton* menu_button /*none*/, gboolean can_shrink);
void base::MenuButtonBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void gtk_menu_button_set_child (GtkMenuButton* menu_button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_menu_button_set_child (::GtkMenuButton* menu_button /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::MenuButtonBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::MenuButtonBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_menu_button_set_create_popup_func (GtkMenuButton* menu_button /*none*/, GtkMenuButtonCreatePopupFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy_notify /*none,nullable*/);
// void gtk_menu_button_set_create_popup_func (::GtkMenuButton* menu_button /*none*/, Gtk::MenuButtonCreatePopupFunc::cfunction_type func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none,nullable*/);
void base::MenuButtonBase::set_create_popup_func (Gtk::MenuButtonCreatePopupFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, Gtk::MenuButtonCreatePopupFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_create_popup_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (Gtk::MenuButtonCreatePopupFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_menu_button_set_direction (GtkMenuButton* menu_button /*none*/, GtkArrowType direction);
// void gtk_menu_button_set_direction (::GtkMenuButton* menu_button /*none*/, ::GtkArrowType direction);
void base::MenuButtonBase::set_direction (Gtk::ArrowType direction) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkArrowType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_direction;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkArrowType) (direction_to_c));
}

// void gtk_menu_button_set_has_frame (GtkMenuButton* menu_button /*none*/, gboolean has_frame);
// void gtk_menu_button_set_has_frame (::GtkMenuButton* menu_button /*none*/, gboolean has_frame);
void base::MenuButtonBase::set_has_frame (gboolean has_frame) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean has_frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_has_frame;
  auto has_frame_to_c = has_frame;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (has_frame_to_c));
}

// void gtk_menu_button_set_icon_name (GtkMenuButton* menu_button /*none*/, const char* icon_name /*none*/);
// void gtk_menu_button_set_icon_name (::GtkMenuButton* menu_button /*none*/, const char* icon_name /*none*/);
void base::MenuButtonBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_menu_button_set_label (GtkMenuButton* menu_button /*none*/, const char* label /*none*/);
// void gtk_menu_button_set_label (::GtkMenuButton* menu_button /*none*/, const char* label /*none*/);
void base::MenuButtonBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_menu_button_set_menu_model (GtkMenuButton* menu_button /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void gtk_menu_button_set_menu_model (::GtkMenuButton* menu_button /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
void base::MenuButtonBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::MenuButtonBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void gtk_menu_button_set_popover (GtkMenuButton* menu_button /*none*/, GtkWidget* popover /*none,nullable*/);
// void gtk_menu_button_set_popover (::GtkMenuButton* menu_button /*none*/, ::GtkWidget* popover /*none,nullable*/);
void base::MenuButtonBase::set_popover (Gtk::Widget popover) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_popover;
  auto popover_to_c = gi::unwrap (popover, gi::transfer_none);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (popover_to_c));
}
void base::MenuButtonBase::set_popover () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_popover;
  auto popover_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (popover_to_c));
}

// void gtk_menu_button_set_primary (GtkMenuButton* menu_button /*none*/, gboolean primary);
// void gtk_menu_button_set_primary (::GtkMenuButton* menu_button /*none*/, gboolean primary);
void base::MenuButtonBase::set_primary (gboolean primary) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean primary);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_primary;
  auto primary_to_c = primary;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (primary_to_c));
}

// void gtk_menu_button_set_use_underline (GtkMenuButton* menu_button /*none*/, gboolean use_underline);
// void gtk_menu_button_set_use_underline (::GtkMenuButton* menu_button /*none*/, gboolean use_underline);
void base::MenuButtonBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_menu_button_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (use_underline_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_def_impl.hpp>)
#include <gtk/menubutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_impl.hpp>)
#include <gtk/menubutton_extra_impl.hpp>
#endif
#endif

#endif
