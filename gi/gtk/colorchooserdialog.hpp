// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSERDIALOG_HPP_
#define _GI_GTK_COLORCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser;
class Window;

class ColorChooserDialog;

namespace base {


#define GI_GTK_COLORCHOOSERDIALOG_BASE base::ColorChooserDialogBase
class ColorChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkColorChooserDialog BaseObjectType;

ColorChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::ColorChooser interface_ (gi::interface_tag<Gtk::ColorChooser>);

GI_INLINE_DECL operator Gtk::ColorChooser ();

// GtkWidget* /*none*/ gtk_color_chooser_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkColorChooserDialog* /*none*/ gtk_color_chooser_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
static GI_INLINE_DECL Gtk::ColorChooserDialog new_ (const gi::cstring_v title, Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::ColorChooserDialog new_ () noexcept;

gi::property_proxy<bool, base::ColorChooserDialogBase> property_show_editor()
{ return gi::property_proxy<bool, base::ColorChooserDialogBase> (*this, "show-editor"); }
const gi::property_proxy<bool, base::ColorChooserDialogBase> property_show_editor() const
{ return gi::property_proxy<bool, base::ColorChooserDialogBase> (*this, "show-editor"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra_def.hpp>)
#include <gtk/colorchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra.hpp>)
#include <gtk/colorchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooserDialog : public GI_GTK_COLORCHOOSERDIALOG_BASE
{ typedef GI_GTK_COLORCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorChooserDialog>
{ typedef Gtk::ColorChooserDialog type; }; 

} // namespace repository

} // namespace gi

#endif
