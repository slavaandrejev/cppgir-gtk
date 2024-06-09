// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_APPCHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AppChooser AppChooserWidgetBase::interface_ (gi::interface_tag<Gtk::AppChooser>)
{ return gi::wrap ((Gtk::AppChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

AppChooserWidgetBase::operator Gtk::AppChooser ()
{ return interface_ (gi::interface_tag<Gtk::AppChooser>()); }

// GtkWidget* /*none*/ gtk_app_chooser_widget_new (const char* content_type /*none*/);
// ::GtkAppChooserWidget* /*none*/ gtk_app_chooser_widget_new (const char* content_type /*none*/);
Gtk::AppChooserWidget base::AppChooserWidgetBase::new_ (const gi::cstring_v content_type) noexcept
{
  typedef ::GtkAppChooserWidget* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_new;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_app_chooser_widget_get_default_text (GtkAppChooserWidget* self /*none*/);
// const char* /*none,nullable*/ gtk_app_chooser_widget_get_default_text (::GtkAppChooserWidget* self /*none*/);
gi::cstring_v base::AppChooserWidgetBase::get_default_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_default_text;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_app_chooser_widget_get_show_all (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_all (::GtkAppChooserWidget* self /*none*/);
bool base::AppChooserWidgetBase::get_show_all () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_show_all;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_default (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_default (::GtkAppChooserWidget* self /*none*/);
bool base::AppChooserWidgetBase::get_show_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_show_default;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_fallback (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_fallback (::GtkAppChooserWidget* self /*none*/);
bool base::AppChooserWidgetBase::get_show_fallback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_show_fallback;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_other (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_other (::GtkAppChooserWidget* self /*none*/);
bool base::AppChooserWidgetBase::get_show_other () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_show_other;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_recommended (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_recommended (::GtkAppChooserWidget* self /*none*/);
bool base::AppChooserWidgetBase::get_show_recommended () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_get_show_recommended;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_app_chooser_widget_set_default_text (GtkAppChooserWidget* self /*none*/, const char* text /*none*/);
// void gtk_app_chooser_widget_set_default_text (::GtkAppChooserWidget* self /*none*/, const char* text /*none*/);
void base::AppChooserWidgetBase::set_default_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_default_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_app_chooser_widget_set_show_all (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_all (::GtkAppChooserWidget* self /*none*/, gboolean setting);
void base::AppChooserWidgetBase::set_show_all (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_show_all;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_default (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_default (::GtkAppChooserWidget* self /*none*/, gboolean setting);
void base::AppChooserWidgetBase::set_show_default (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_show_default;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_fallback (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_fallback (::GtkAppChooserWidget* self /*none*/, gboolean setting);
void base::AppChooserWidgetBase::set_show_fallback (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_show_fallback;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_other (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_other (::GtkAppChooserWidget* self /*none*/, gboolean setting);
void base::AppChooserWidgetBase::set_show_other (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_show_other;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_recommended (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_recommended (::GtkAppChooserWidget* self /*none*/, gboolean setting);
void base::AppChooserWidgetBase::set_show_recommended (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_app_chooser_widget_set_show_recommended;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_def_impl.hpp>)
#include <gtk/appchooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_impl.hpp>)
#include <gtk/appchooserwidget_extra_impl.hpp>
#endif
#endif

#endif
