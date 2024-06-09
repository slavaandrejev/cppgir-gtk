// AUTO-GENERATED

#ifndef _GI_GTK_PAGESETUPUNIXDIALOG_HPP_
#define _GI_GTK_PAGESETUPUNIXDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintSettings;
class Window;

class PageSetupUnixDialog;

namespace base {


#define GI_GTK_PAGESETUPUNIXDIALOG_BASE base::PageSetupUnixDialogBase
class PageSetupUnixDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkPageSetupUnixDialog BaseObjectType;

PageSetupUnixDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_page_setup_unix_dialog_get_type(); } 

// GtkWidget* /*none*/ gtk_page_setup_unix_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkPageSetupUnixDialog* /*none*/ gtk_page_setup_unix_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
static GI_INLINE_DECL Gtk::PageSetupUnixDialog new_ (const gi::cstring_v title, Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::PageSetupUnixDialog new_ () noexcept;

// GtkPageSetup* /*none*/ gtk_page_setup_unix_dialog_get_page_setup (GtkPageSetupUnixDialog* dialog /*none*/);
// ::GtkPageSetup* /*none*/ gtk_page_setup_unix_dialog_get_page_setup (::GtkPageSetupUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// GtkPrintSettings* /*none,nullable*/ gtk_page_setup_unix_dialog_get_print_settings (GtkPageSetupUnixDialog* dialog /*none*/);
// ::GtkPrintSettings* /*none,nullable*/ gtk_page_setup_unix_dialog_get_print_settings (::GtkPageSetupUnixDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// void gtk_page_setup_unix_dialog_set_page_setup (GtkPageSetupUnixDialog* dialog /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_page_setup_unix_dialog_set_page_setup (::GtkPageSetupUnixDialog* dialog /*none*/, ::GtkPageSetup* page_setup /*none*/);
GI_INLINE_DECL void set_page_setup (Gtk::PageSetup page_setup) noexcept;

// void gtk_page_setup_unix_dialog_set_print_settings (GtkPageSetupUnixDialog* dialog /*none*/, GtkPrintSettings* print_settings /*none,nullable*/);
// void gtk_page_setup_unix_dialog_set_print_settings (::GtkPageSetupUnixDialog* dialog /*none*/, ::GtkPrintSettings* print_settings /*none,nullable*/);
GI_INLINE_DECL void set_print_settings (Gtk::PrintSettings print_settings) noexcept;
GI_INLINE_DECL void set_print_settings () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagesetupunixdialog_extra_def.hpp>)
#include <gtk/pagesetupunixdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagesetupunixdialog_extra.hpp>)
#include <gtk/pagesetupunixdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PageSetupUnixDialog : public GI_GTK_PAGESETUPUNIXDIALOG_BASE
{ typedef GI_GTK_PAGESETUPUNIXDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPageSetupUnixDialog>
{ typedef Gtk::PageSetupUnixDialog type; }; 

} // namespace repository

} // namespace gi

#endif
