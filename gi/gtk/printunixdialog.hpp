// AUTO-GENERATED

#ifndef _GI_GTK_PRINTUNIXDIALOG_HPP_
#define _GI_GTK_PRINTUNIXDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintSettings;
class Printer;
class Widget;
class Window;

class PrintUnixDialog;

namespace base {


#define GI_GTK_PRINTUNIXDIALOG_BASE base::PrintUnixDialogBase
class PrintUnixDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkPrintUnixDialog BaseObjectType;

PrintUnixDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_unix_dialog_get_type(); } 

// GtkWidget* /*none*/ gtk_print_unix_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkPrintUnixDialog* /*none*/ gtk_print_unix_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
static GI_INLINE_DECL Gtk::PrintUnixDialog new_ (const gi::cstring_v title, Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::PrintUnixDialog new_ () noexcept;

// void gtk_print_unix_dialog_add_custom_tab (GtkPrintUnixDialog* dialog /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none*/);
// void gtk_print_unix_dialog_add_custom_tab (::GtkPrintUnixDialog* dialog /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none*/);
GI_INLINE_DECL void add_custom_tab (Gtk::Widget child, Gtk::Widget tab_label) noexcept;

// int gtk_print_unix_dialog_get_current_page (GtkPrintUnixDialog* dialog /*none*/);
// gint gtk_print_unix_dialog_get_current_page (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL gint get_current_page () noexcept;

// gboolean gtk_print_unix_dialog_get_embed_page_setup (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_embed_page_setup (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL bool get_embed_page_setup () noexcept;

// gboolean gtk_print_unix_dialog_get_has_selection (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_has_selection (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL bool get_has_selection () noexcept;

// GtkPrintCapabilities gtk_print_unix_dialog_get_manual_capabilities (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrintCapabilities gtk_print_unix_dialog_get_manual_capabilities (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::PrintCapabilities get_manual_capabilities () noexcept;

// GtkPageSetup* /*none*/ gtk_print_unix_dialog_get_page_setup (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_unix_dialog_get_page_setup (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// gboolean gtk_print_unix_dialog_get_page_setup_set (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_page_setup_set (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL bool get_page_setup_set () noexcept;

// GtkPrinter* /*none,nullable*/ gtk_print_unix_dialog_get_selected_printer (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrinter* /*none,nullable*/ gtk_print_unix_dialog_get_selected_printer (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::Printer get_selected_printer () noexcept;

// GtkPrintSettings* /*full*/ gtk_print_unix_dialog_get_settings (GtkPrintUnixDialog* dialog /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_unix_dialog_get_settings (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_settings () noexcept;

// gboolean gtk_print_unix_dialog_get_support_selection (GtkPrintUnixDialog* dialog /*none*/);
// gboolean gtk_print_unix_dialog_get_support_selection (::GtkPrintUnixDialog* dialog /*none*/);
GI_INLINE_DECL bool get_support_selection () noexcept;

// void gtk_print_unix_dialog_set_current_page (GtkPrintUnixDialog* dialog /*none*/, int current_page);
// void gtk_print_unix_dialog_set_current_page (::GtkPrintUnixDialog* dialog /*none*/, gint current_page);
GI_INLINE_DECL void set_current_page (gint current_page) noexcept;

// void gtk_print_unix_dialog_set_embed_page_setup (GtkPrintUnixDialog* dialog /*none*/, gboolean embed);
// void gtk_print_unix_dialog_set_embed_page_setup (::GtkPrintUnixDialog* dialog /*none*/, gboolean embed);
GI_INLINE_DECL void set_embed_page_setup (gboolean embed) noexcept;

// void gtk_print_unix_dialog_set_has_selection (GtkPrintUnixDialog* dialog /*none*/, gboolean has_selection);
// void gtk_print_unix_dialog_set_has_selection (::GtkPrintUnixDialog* dialog /*none*/, gboolean has_selection);
GI_INLINE_DECL void set_has_selection (gboolean has_selection) noexcept;

// void gtk_print_unix_dialog_set_manual_capabilities (GtkPrintUnixDialog* dialog /*none*/, GtkPrintCapabilities capabilities);
// void gtk_print_unix_dialog_set_manual_capabilities (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPrintCapabilities capabilities);
GI_INLINE_DECL void set_manual_capabilities (Gtk::PrintCapabilities capabilities) noexcept;

// void gtk_print_unix_dialog_set_page_setup (GtkPrintUnixDialog* dialog /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_print_unix_dialog_set_page_setup (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPageSetup* page_setup /*none*/);
GI_INLINE_DECL void set_page_setup (Gtk::PageSetup page_setup) noexcept;

// void gtk_print_unix_dialog_set_settings (GtkPrintUnixDialog* dialog /*none*/, GtkPrintSettings* settings /*none,nullable*/);
// void gtk_print_unix_dialog_set_settings (::GtkPrintUnixDialog* dialog /*none*/, ::GtkPrintSettings* settings /*none,nullable*/);
GI_INLINE_DECL void set_settings (Gtk::PrintSettings settings) noexcept;
GI_INLINE_DECL void set_settings () noexcept;

// void gtk_print_unix_dialog_set_support_selection (GtkPrintUnixDialog* dialog /*none*/, gboolean support_selection);
// void gtk_print_unix_dialog_set_support_selection (::GtkPrintUnixDialog* dialog /*none*/, gboolean support_selection);
GI_INLINE_DECL void set_support_selection (gboolean support_selection) noexcept;

gi::property_proxy<gint, base::PrintUnixDialogBase> property_current_page()
{ return gi::property_proxy<gint, base::PrintUnixDialogBase> (*this, "current-page"); }
const gi::property_proxy<gint, base::PrintUnixDialogBase> property_current_page() const
{ return gi::property_proxy<gint, base::PrintUnixDialogBase> (*this, "current-page"); }

gi::property_proxy<bool, base::PrintUnixDialogBase> property_embed_page_setup()
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "embed-page-setup"); }
const gi::property_proxy<bool, base::PrintUnixDialogBase> property_embed_page_setup() const
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "embed-page-setup"); }

gi::property_proxy<bool, base::PrintUnixDialogBase> property_has_selection()
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "has-selection"); }
const gi::property_proxy<bool, base::PrintUnixDialogBase> property_has_selection() const
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "has-selection"); }

gi::property_proxy<Gtk::PrintCapabilities, base::PrintUnixDialogBase> property_manual_capabilities()
{ return gi::property_proxy<Gtk::PrintCapabilities, base::PrintUnixDialogBase> (*this, "manual-capabilities"); }
const gi::property_proxy<Gtk::PrintCapabilities, base::PrintUnixDialogBase> property_manual_capabilities() const
{ return gi::property_proxy<Gtk::PrintCapabilities, base::PrintUnixDialogBase> (*this, "manual-capabilities"); }

gi::property_proxy<Gtk::PageSetup, base::PrintUnixDialogBase> property_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintUnixDialogBase> (*this, "page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintUnixDialogBase> property_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintUnixDialogBase> (*this, "page-setup"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintUnixDialogBase> property_print_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintUnixDialogBase> (*this, "print-settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintUnixDialogBase> property_print_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintUnixDialogBase> (*this, "print-settings"); }

gi::property_proxy<Gtk::Printer, base::PrintUnixDialogBase> property_selected_printer()
{ return gi::property_proxy<Gtk::Printer, base::PrintUnixDialogBase> (*this, "selected-printer"); }
const gi::property_proxy<Gtk::Printer, base::PrintUnixDialogBase> property_selected_printer() const
{ return gi::property_proxy<Gtk::Printer, base::PrintUnixDialogBase> (*this, "selected-printer"); }

gi::property_proxy<bool, base::PrintUnixDialogBase> property_support_selection()
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "support-selection"); }
const gi::property_proxy<bool, base::PrintUnixDialogBase> property_support_selection() const
{ return gi::property_proxy<bool, base::PrintUnixDialogBase> (*this, "support-selection"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printunixdialog_extra_def.hpp>)
#include <gtk/printunixdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printunixdialog_extra.hpp>)
#include <gtk/printunixdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintUnixDialog : public GI_GTK_PRINTUNIXDIALOG_BASE
{ typedef GI_GTK_PRINTUNIXDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintUnixDialog>
{ typedef Gtk::PrintUnixDialog type; }; 

} // namespace repository

} // namespace gi

#endif
