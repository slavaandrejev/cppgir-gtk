// AUTO-GENERATED

#ifndef _GI_GTK_MESSAGEDIALOG_IMPL_HPP_
#define _GI_GTK_MESSAGEDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_message_dialog_new (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// ::GtkMessageDialog* /*none*/ gtk_message_dialog_new (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* /*none*/ gtk_message_dialog_new_with_markup (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// ::GtkMessageDialog* /*none*/ gtk_message_dialog_new_with_markup (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_markup (GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none*/,  ..._ /*none*/);
// void gtk_message_dialog_format_secondary_markup (::GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_text (GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// void gtk_message_dialog_format_secondary_text (::GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* /*none*/ gtk_message_dialog_get_message_area (GtkMessageDialog* message_dialog /*none*/);
// ::GtkWidget* /*none*/ gtk_message_dialog_get_message_area (::GtkMessageDialog* message_dialog /*none*/);
Gtk::Widget base::MessageDialogBase::get_message_area () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMessageDialog* message_dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_message_dialog_get_message_area;
  auto _temp_ret = call_wrap_v ((::GtkMessageDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_message_dialog_set_markup (GtkMessageDialog* message_dialog /*none*/, const char* str /*none*/);
// void gtk_message_dialog_set_markup (::GtkMessageDialog* message_dialog /*none*/, const char* str /*none*/);
void base::MessageDialogBase::set_markup (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkMessageDialog* message_dialog, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_message_dialog_set_markup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkMessageDialog*) (gobj_()), (const char*) (str_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra_def_impl.hpp>)
#include <gtk/messagedialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra_impl.hpp>)
#include <gtk/messagedialog_extra_impl.hpp>
#endif
#endif

#endif
