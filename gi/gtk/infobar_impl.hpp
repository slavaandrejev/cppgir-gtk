// AUTO-GENERATED

#ifndef _GI_GTK_INFOBAR_IMPL_HPP_
#define _GI_GTK_INFOBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_info_bar_new ();
// ::GtkInfoBar* /*none*/ gtk_info_bar_new ();
Gtk::InfoBar base::InfoBarBase::new_ () noexcept
{
  typedef ::GtkInfoBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_info_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_info_bar_new_with_buttons (const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// ::GtkInfoBar* /*none*/ gtk_info_bar_new_with_buttons (const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_info_bar_add_action_widget (GtkInfoBar* info_bar /*none*/, GtkWidget* child /*none*/, int response_id);
// void gtk_info_bar_add_action_widget (::GtkInfoBar* info_bar /*none*/, ::GtkWidget* child /*none*/, gint response_id);
void base::InfoBarBase::add_action_widget (Gtk::Widget child, gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkWidget* child, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_add_action_widget;
  auto response_id_to_c = response_id;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (response_id_to_c));
}

// GtkWidget* /*none*/ gtk_info_bar_add_button (GtkInfoBar* info_bar /*none*/, const char* button_text /*none*/, int response_id);
// ::GtkButton* /*none*/ gtk_info_bar_add_button (::GtkInfoBar* info_bar /*none*/, const char* button_text /*none*/, gint response_id);
Gtk::Button base::InfoBarBase::add_button (const gi::cstring_v button_text, gint response_id) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkInfoBar* info_bar, const char* button_text, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_add_button;
  auto response_id_to_c = response_id;
  auto button_text_to_c = gi::unwrap (button_text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()), (const char*) (button_text_to_c), (gint) (response_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_info_bar_add_buttons (GtkInfoBar* info_bar /*none*/, const char* first_button_text /*none*/,  ..._ /*none*/);
// void gtk_info_bar_add_buttons (::GtkInfoBar* info_bar /*none*/, const char* first_button_text /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_info_bar_add_child (GtkInfoBar* info_bar /*none*/, GtkWidget* widget /*none*/);
// void gtk_info_bar_add_child (::GtkInfoBar* info_bar /*none*/, ::GtkWidget* widget /*none*/);
void base::InfoBarBase::add_child (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_add_child;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// GtkMessageType gtk_info_bar_get_message_type (GtkInfoBar* info_bar /*none*/);
// ::GtkMessageType gtk_info_bar_get_message_type (::GtkInfoBar* info_bar /*none*/);
Gtk::MessageType base::InfoBarBase::get_message_type () noexcept
{
  typedef ::GtkMessageType (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_get_message_type;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_info_bar_get_revealed (GtkInfoBar* info_bar /*none*/);
// gboolean gtk_info_bar_get_revealed (::GtkInfoBar* info_bar /*none*/);
bool base::InfoBarBase::get_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_get_revealed;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_info_bar_get_show_close_button (GtkInfoBar* info_bar /*none*/);
// gboolean gtk_info_bar_get_show_close_button (::GtkInfoBar* info_bar /*none*/);
bool base::InfoBarBase::get_show_close_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkInfoBar* info_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_get_show_close_button;
  auto _temp_ret = call_wrap_v ((::GtkInfoBar*) (gobj_()));
  return _temp_ret;
}

// void gtk_info_bar_remove_action_widget (GtkInfoBar* info_bar /*none*/, GtkWidget* widget /*none*/);
// void gtk_info_bar_remove_action_widget (::GtkInfoBar* info_bar /*none*/, ::GtkWidget* widget /*none*/);
void base::InfoBarBase::remove_action_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_remove_action_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_info_bar_remove_child (GtkInfoBar* info_bar /*none*/, GtkWidget* widget /*none*/);
// void gtk_info_bar_remove_child (::GtkInfoBar* info_bar /*none*/, ::GtkWidget* widget /*none*/);
void base::InfoBarBase::remove_child (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_remove_child;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_info_bar_response (GtkInfoBar* info_bar /*none*/, int response_id);
// void gtk_info_bar_response (::GtkInfoBar* info_bar /*none*/, gint response_id);
void base::InfoBarBase::response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c));
}

// void gtk_info_bar_set_default_response (GtkInfoBar* info_bar /*none*/, int response_id);
// void gtk_info_bar_set_default_response (::GtkInfoBar* info_bar /*none*/, gint response_id);
void base::InfoBarBase::set_default_response (gint response_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_set_default_response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c));
}

// void gtk_info_bar_set_message_type (GtkInfoBar* info_bar /*none*/, GtkMessageType message_type);
// void gtk_info_bar_set_message_type (::GtkInfoBar* info_bar /*none*/, ::GtkMessageType message_type);
void base::InfoBarBase::set_message_type (Gtk::MessageType message_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, ::GtkMessageType message_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_set_message_type;
  auto message_type_to_c = gi::unwrap (message_type);
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (::GtkMessageType) (message_type_to_c));
}

// void gtk_info_bar_set_response_sensitive (GtkInfoBar* info_bar /*none*/, int response_id, gboolean setting);
// void gtk_info_bar_set_response_sensitive (::GtkInfoBar* info_bar /*none*/, gint response_id, gboolean setting);
void base::InfoBarBase::set_response_sensitive (gint response_id, gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gint response_id, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_set_response_sensitive;
  auto setting_to_c = setting;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gint) (response_id_to_c), (gboolean) (setting_to_c));
}

// void gtk_info_bar_set_revealed (GtkInfoBar* info_bar /*none*/, gboolean revealed);
// void gtk_info_bar_set_revealed (::GtkInfoBar* info_bar /*none*/, gboolean revealed);
void base::InfoBarBase::set_revealed (gboolean revealed) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gboolean revealed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_set_revealed;
  auto revealed_to_c = revealed;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gboolean) (revealed_to_c));
}

// void gtk_info_bar_set_show_close_button (GtkInfoBar* info_bar /*none*/, gboolean setting);
// void gtk_info_bar_set_show_close_button (::GtkInfoBar* info_bar /*none*/, gboolean setting);
void base::InfoBarBase::set_show_close_button (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkInfoBar* info_bar, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_info_bar_set_show_close_button;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkInfoBar*) (gobj_()), (gboolean) (setting_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra_def_impl.hpp>)
#include <gtk/infobar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra_impl.hpp>)
#include <gtk/infobar_extra_impl.hpp>
#endif
#endif

#endif
