// AUTO-GENERATED

#ifndef _GI_GTK_PRINTUNIXDIALOG_IMPL_HPP_
#define _GI_GTK_PRINTUNIXDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_print_unix_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkPrintUnixDialog* /*none*/ gtk_print_unix_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
Gtk::PrintUnixDialog base::PrintUnixDialogBase::new_ (const gi::cstring_v title, Gtk::Window parent) noexcept
{
  typedef ::GtkPrintUnixDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_unix_dialog_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::PrintUnixDialog base::PrintUnixDialogBase::new_ () noexcept
{
  typedef ::GtkPrintUnixDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_unix_dialog_new;
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_print_unix_dialog_add_custom_tab (GtkPrintUnixDialog* dialog /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none*/);
// void gtk_print_unix_dialog_add_custom_tab (::GtkPrintUnixDialog* dialog /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none*/);
void base::PrintUnixDialogBase::add_custom_tab (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_add_custom_tab;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
}

// int gtk_print_unix_dialog_get_current_page (GtkPrintUnixDialog* dialog /*none*/);
// gint gtk_print_unix_dialog_get_current_page (::GtkPrintUnixDialog* dialog /*none*/);
gint base::PrintUnixDialogBase::get_current_page () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_current_page;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_unix_dialog_get_embed_page_setup (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_embed_page_setup (::GtkPrintUnixDialog* dialog /*none*/);
bool base::PrintUnixDialogBase::get_embed_page_setup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_embed_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_unix_dialog_get_has_selection (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_has_selection (::GtkPrintUnixDialog* dialog /*none*/);
bool base::PrintUnixDialogBase::get_has_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_has_selection;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return _temp_ret;
}

// GtkPrintCapabilities gtk_print_unix_dialog_get_manual_capabilities (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrintCapabilities gtk_print_unix_dialog_get_manual_capabilities (::GtkPrintUnixDialog* dialog /*none*/);
Gtk::PrintCapabilities base::PrintUnixDialogBase::get_manual_capabilities () noexcept
{
  typedef ::GtkPrintCapabilities (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_manual_capabilities;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPageSetup* /*none*/ gtk_print_unix_dialog_get_page_setup (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_unix_dialog_get_page_setup (::GtkPrintUnixDialog* dialog /*none*/);
Gtk::PageSetup base::PrintUnixDialogBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_print_unix_dialog_get_page_setup_set (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_page_setup_set (::GtkPrintUnixDialog* dialog /*none*/);
bool base::PrintUnixDialogBase::get_page_setup_set () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_page_setup_set;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return _temp_ret;
}

// GtkPrinter* /*none,nullable*/ gtk_print_unix_dialog_get_selected_printer (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrinter* /*none,nullable*/ gtk_print_unix_dialog_get_selected_printer (::GtkPrintUnixDialog* dialog /*none*/);
Gtk::Printer base::PrintUnixDialogBase::get_selected_printer () noexcept
{
  typedef ::GtkPrinter* (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_selected_printer;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintSettings* /*full*/ gtk_print_unix_dialog_get_settings (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_unix_dialog_get_settings (::GtkPrintUnixDialog* dialog /*none*/);
Gtk::PrintSettings base::PrintUnixDialogBase::get_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_settings;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_print_unix_dialog_get_support_selection (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_support_selection (::GtkPrintUnixDialog* dialog /*none*/);
bool base::PrintUnixDialogBase::get_support_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintUnixDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_get_support_selection;
  auto _temp_ret = call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_print_unix_dialog_set_current_page (GtkPrintUnixDialog* dialog /*none*/, int current_page);
// void gtk_print_unix_dialog_set_current_page (::GtkPrintUnixDialog* dialog /*none*/, gint current_page);
void base::PrintUnixDialogBase::set_current_page (gint current_page) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, gint current_page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_current_page;
  auto current_page_to_c = current_page;
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (gint) (current_page_to_c));
}

// void gtk_print_unix_dialog_set_embed_page_setup (GtkPrintUnixDialog* dialog /*none*/, gboolean embed);
// void gtk_print_unix_dialog_set_embed_page_setup (::GtkPrintUnixDialog* dialog /*none*/, gboolean embed);
void base::PrintUnixDialogBase::set_embed_page_setup (gboolean embed) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, gboolean embed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_embed_page_setup;
  auto embed_to_c = embed;
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (gboolean) (embed_to_c));
}

// void gtk_print_unix_dialog_set_has_selection (GtkPrintUnixDialog* dialog /*none*/, gboolean has_selection);
// void gtk_print_unix_dialog_set_has_selection (::GtkPrintUnixDialog* dialog /*none*/, gboolean has_selection);
void base::PrintUnixDialogBase::set_has_selection (gboolean has_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, gboolean has_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_has_selection;
  auto has_selection_to_c = has_selection;
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (gboolean) (has_selection_to_c));
}

// void gtk_print_unix_dialog_set_manual_capabilities (GtkPrintUnixDialog* dialog /*none*/, GtkPrintCapabilities capabilities);
// void gtk_print_unix_dialog_set_manual_capabilities (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPrintCapabilities capabilities);
void base::PrintUnixDialogBase::set_manual_capabilities (Gtk::PrintCapabilities capabilities) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, ::GtkPrintCapabilities capabilities);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_manual_capabilities;
  auto capabilities_to_c = gi::unwrap (capabilities);
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (::GtkPrintCapabilities) (capabilities_to_c));
}

// void gtk_print_unix_dialog_set_page_setup (GtkPrintUnixDialog* dialog /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_print_unix_dialog_set_page_setup (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPageSetup* page_setup /*none*/);
void base::PrintUnixDialogBase::set_page_setup (Gtk::PageSetup page_setup) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_page_setup;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (::GtkPageSetup*) (page_setup_to_c));
}

// void gtk_print_unix_dialog_set_settings (GtkPrintUnixDialog* dialog /*none*/, GtkPrintSettings* settings /*none,nullable*/);
// void gtk_print_unix_dialog_set_settings (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPrintSettings* settings /*none,nullable*/);
void base::PrintUnixDialogBase::set_settings (Gtk::PrintSettings settings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_settings;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (::GtkPrintSettings*) (settings_to_c));
}
void base::PrintUnixDialogBase::set_settings () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_settings;
  auto settings_to_c = nullptr;
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (::GtkPrintSettings*) (settings_to_c));
}

// void gtk_print_unix_dialog_set_support_selection (GtkPrintUnixDialog* dialog /*none*/, gboolean support_selection);
// void gtk_print_unix_dialog_set_support_selection (::GtkPrintUnixDialog* dialog /*none*/, gboolean support_selection);
void base::PrintUnixDialogBase::set_support_selection (gboolean support_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintUnixDialog* dialog, gboolean support_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_unix_dialog_set_support_selection;
  auto support_selection_to_c = support_selection;
  call_wrap_v ((::GtkPrintUnixDialog*) (gobj_()), (gboolean) (support_selection_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printunixdialog_extra_def_impl.hpp>)
#include <gtk/printunixdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printunixdialog_extra_impl.hpp>)
#include <gtk/printunixdialog_extra_impl.hpp>
#endif
#endif

#endif
