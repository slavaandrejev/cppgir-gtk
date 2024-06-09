// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERDIALOG_HPP_
#define _GI_GTK_APPCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;
class Widget;
class Window;

class AppChooserDialog;

namespace base {


#define GI_GTK_APPCHOOSERDIALOG_BASE base::AppChooserDialogBase
class AppChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkAppChooserDialog BaseObjectType;

AppChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* /*none*/ gtk_app_chooser_dialog_new (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, GFile* file /*none*/);
// ::GtkAppChooserDialog* /*none*/ gtk_app_chooser_dialog_new (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, ::GFile* file /*none*/);
static GI_INLINE_DECL Gtk::AppChooserDialog new_ (Gtk::Window parent, Gtk::DialogFlags flags, Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::AppChooserDialog new_ (Gtk::DialogFlags flags, Gio::File file) noexcept;

// GtkWidget* /*none*/ gtk_app_chooser_dialog_new_for_content_type (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, const char* content_type /*none*/);
// ::GtkAppChooserDialog* /*none*/ gtk_app_chooser_dialog_new_for_content_type (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, const char* content_type /*none*/);
static GI_INLINE_DECL Gtk::AppChooserDialog new_for_content_type (Gtk::Window parent, Gtk::DialogFlags flags, const gi::cstring_v content_type) noexcept;
static GI_INLINE_DECL Gtk::AppChooserDialog new_for_content_type (Gtk::DialogFlags flags, const gi::cstring_v content_type) noexcept;

// const char* /*none,nullable*/ gtk_app_chooser_dialog_get_heading (GtkAppChooserDialog* self /*none*/);
// const char* /*none,nullable*/ gtk_app_chooser_dialog_get_heading (::GtkAppChooserDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_heading () noexcept;

// GtkWidget* /*none*/ gtk_app_chooser_dialog_get_widget (GtkAppChooserDialog* self /*none*/);
// ::GtkWidget* /*none*/ gtk_app_chooser_dialog_get_widget (::GtkAppChooserDialog* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_app_chooser_dialog_set_heading (GtkAppChooserDialog* self /*none*/, const char* heading /*none*/);
// void gtk_app_chooser_dialog_set_heading (::GtkAppChooserDialog* self /*none*/, const char* heading /*none*/);
GI_INLINE_DECL void set_heading (const gi::cstring_v heading) noexcept;

gi::property_proxy<Gio::File, base::AppChooserDialogBase> property_gfile()
{ return gi::property_proxy<Gio::File, base::AppChooserDialogBase> (*this, "gfile"); }
const gi::property_proxy<Gio::File, base::AppChooserDialogBase> property_gfile() const
{ return gi::property_proxy<Gio::File, base::AppChooserDialogBase> (*this, "gfile"); }

gi::property_proxy<gi::cstring, base::AppChooserDialogBase> property_heading()
{ return gi::property_proxy<gi::cstring, base::AppChooserDialogBase> (*this, "heading"); }
const gi::property_proxy<gi::cstring, base::AppChooserDialogBase> property_heading() const
{ return gi::property_proxy<gi::cstring, base::AppChooserDialogBase> (*this, "heading"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra_def.hpp>)
#include <gtk/appchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra.hpp>)
#include <gtk/appchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserDialog : public GI_GTK_APPCHOOSERDIALOG_BASE
{ typedef GI_GTK_APPCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserDialog>
{ typedef Gtk::AppChooserDialog type; }; 

} // namespace repository

} // namespace gi

#endif
