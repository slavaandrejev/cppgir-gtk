// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERBUTTON_IMPL_HPP_
#define _GI_GTK_APPCHOOSERBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AppChooser AppChooserButtonBase::interface_ (gi::interface_tag<Gtk::AppChooser>)
{ return gi::wrap ((Gtk::AppChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

AppChooserButtonBase::operator Gtk::AppChooser ()
{ return interface_ (gi::interface_tag<Gtk::AppChooser>()); }

// GtkWidget* /*none*/ gtk_app_chooser_button_new (const char* content_type /*none*/);
// ::GtkAppChooserButton* /*none*/ gtk_app_chooser_button_new (const char* content_type /*none*/);
Gtk::AppChooserButton base::AppChooserButtonBase::new_ (const gi::cstring_v content_type) noexcept
{
  typedef ::GtkAppChooserButton* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_new;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_app_chooser_button_append_custom_item (GtkAppChooserButton* self /*none*/, const char* name /*none*/, const char* label /*none*/, GIcon* icon /*none*/);
// void gtk_app_chooser_button_append_custom_item (::GtkAppChooserButton* self /*none*/, const char* name /*none*/, const char* label /*none*/, ::GIcon* icon /*none*/);
void base::AppChooserButtonBase::append_custom_item (const gi::cstring_v name, const gi::cstring_v label, Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* name, const char* label, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_append_custom_item;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (name_to_c), (const char*) (label_to_c), (::GIcon*) (icon_to_c));
}

// void gtk_app_chooser_button_append_separator (GtkAppChooserButton* self /*none*/);
// void gtk_app_chooser_button_append_separator (::GtkAppChooserButton* self /*none*/);
void base::AppChooserButtonBase::append_separator () noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_append_separator;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
}

// const char* /*none,nullable*/ gtk_app_chooser_button_get_heading (GtkAppChooserButton* self /*none*/);
// const char* /*none,nullable*/ gtk_app_chooser_button_get_heading (::GtkAppChooserButton* self /*none*/);
gi::cstring_v base::AppChooserButtonBase::get_heading () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_get_heading;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_app_chooser_button_get_modal (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_modal (::GtkAppChooserButton* self /*none*/);
bool base::AppChooserButtonBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_button_get_show_default_item (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_show_default_item (::GtkAppChooserButton* self /*none*/);
bool base::AppChooserButtonBase::get_show_default_item () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_get_show_default_item;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_button_get_show_dialog_item (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_show_dialog_item (::GtkAppChooserButton* self /*none*/);
bool base::AppChooserButtonBase::get_show_dialog_item () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_get_show_dialog_item;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_app_chooser_button_set_active_custom_item (GtkAppChooserButton* self /*none*/, const char* name /*none*/);
// void gtk_app_chooser_button_set_active_custom_item (::GtkAppChooserButton* self /*none*/, const char* name /*none*/);
void base::AppChooserButtonBase::set_active_custom_item (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_set_active_custom_item;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_app_chooser_button_set_heading (GtkAppChooserButton* self /*none*/, const char* heading /*none*/);
// void gtk_app_chooser_button_set_heading (::GtkAppChooserButton* self /*none*/, const char* heading /*none*/);
void base::AppChooserButtonBase::set_heading (const gi::cstring_v heading) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* heading);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_set_heading;
  auto heading_to_c = gi::unwrap (heading, gi::transfer_none);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (heading_to_c));
}

// void gtk_app_chooser_button_set_modal (GtkAppChooserButton* self /*none*/, gboolean modal);
// void gtk_app_chooser_button_set_modal (::GtkAppChooserButton* self /*none*/, gboolean modal);
void base::AppChooserButtonBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_app_chooser_button_set_show_default_item (GtkAppChooserButton* self /*none*/, gboolean setting);
// void gtk_app_chooser_button_set_show_default_item (::GtkAppChooserButton* self /*none*/, gboolean setting);
void base::AppChooserButtonBase::set_show_default_item (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_set_show_default_item;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_button_set_show_dialog_item (GtkAppChooserButton* self /*none*/, gboolean setting);
// void gtk_app_chooser_button_set_show_dialog_item (::GtkAppChooserButton* self /*none*/, gboolean setting);
void base::AppChooserButtonBase::set_show_dialog_item (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_button_set_show_dialog_item;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (gboolean) (setting_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_def_impl.hpp>)
#include <gtk/appchooserbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_impl.hpp>)
#include <gtk/appchooserbutton_extra_impl.hpp>
#endif
#endif

#endif
