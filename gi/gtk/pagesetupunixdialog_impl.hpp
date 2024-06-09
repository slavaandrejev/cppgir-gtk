// AUTO-GENERATED

#ifndef _GI_GTK_PAGESETUPUNIXDIALOG_IMPL_HPP_
#define _GI_GTK_PAGESETUPUNIXDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_page_setup_unix_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkPageSetupUnixDialog* /*none*/ gtk_page_setup_unix_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
Gtk::PageSetupUnixDialog base::PageSetupUnixDialogBase::new_ (const gi::cstring_v title, Gtk::Window parent) noexcept
{
  typedef ::GtkPageSetupUnixDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_unix_dialog_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::PageSetupUnixDialog base::PageSetupUnixDialogBase::new_ () noexcept
{
  typedef ::GtkPageSetupUnixDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_unix_dialog_new;
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPageSetup* /*none*/ gtk_page_setup_unix_dialog_get_page_setup (GtkPageSetupUnixDialog* dialog /*none*/);
// ::GtkPageSetup* /*none*/ gtk_page_setup_unix_dialog_get_page_setup (::GtkPageSetupUnixDialog* dialog /*none*/);
Gtk::PageSetup base::PageSetupUnixDialogBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPageSetupUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_unix_dialog_get_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPageSetupUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintSettings* /*none,nullable*/ gtk_page_setup_unix_dialog_get_print_settings (GtkPageSetupUnixDialog* dialog /*none*/);
// ::GtkPrintSettings* /*none,nullable*/ gtk_page_setup_unix_dialog_get_print_settings (::GtkPageSetupUnixDialog* dialog /*none*/);
Gtk::PrintSettings base::PageSetupUnixDialogBase::get_print_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPageSetupUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_unix_dialog_get_print_settings;
  auto _temp_ret = call_wrap_v ((::GtkPageSetupUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_page_setup_unix_dialog_set_page_setup (GtkPageSetupUnixDialog* dialog /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_page_setup_unix_dialog_set_page_setup (::GtkPageSetupUnixDialog* dialog /*none*/, ::GtkPageSetup* page_setup /*none*/);
void base::PageSetupUnixDialogBase::set_page_setup (Gtk::PageSetup page_setup) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetupUnixDialog* dialog, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_unix_dialog_set_page_setup;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  call_wrap_v ((::GtkPageSetupUnixDialog*) (gobj_()), (::GtkPageSetup*) (page_setup_to_c));
}

// void gtk_page_setup_unix_dialog_set_print_settings (GtkPageSetupUnixDialog* dialog /*none*/, GtkPrintSettings* print_settings /*none,nullable*/);
// void gtk_page_setup_unix_dialog_set_print_settings (::GtkPageSetupUnixDialog* dialog /*none*/, ::GtkPrintSettings* print_settings /*none,nullable*/);
void base::PageSetupUnixDialogBase::set_print_settings (Gtk::PrintSettings print_settings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetupUnixDialog* dialog, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_unix_dialog_set_print_settings;
  auto print_settings_to_c = gi::unwrap (print_settings, gi::transfer_none);
  call_wrap_v ((::GtkPageSetupUnixDialog*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}
void base::PageSetupUnixDialogBase::set_print_settings () noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetupUnixDialog* dialog, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_unix_dialog_set_print_settings;
  auto print_settings_to_c = nullptr;
  call_wrap_v ((::GtkPageSetupUnixDialog*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagesetupunixdialog_extra_def_impl.hpp>)
#include <gtk/pagesetupunixdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagesetupunixdialog_extra_impl.hpp>)
#include <gtk/pagesetupunixdialog_extra_impl.hpp>
#endif
#endif

#endif
