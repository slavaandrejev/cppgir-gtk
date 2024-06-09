// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERDIALOG_HPP_
#define _GI_GTK_FONTCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser;
class Window;

class FontChooserDialog;

namespace base {


#define GI_GTK_FONTCHOOSERDIALOG_BASE base::FontChooserDialogBase
class FontChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkFontChooserDialog BaseObjectType;

FontChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::FontChooser interface_ (gi::interface_tag<Gtk::FontChooser>);

GI_INLINE_DECL operator Gtk::FontChooser ();

// GtkWidget* /*none*/ gtk_font_chooser_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkFontChooserDialog* /*none*/ gtk_font_chooser_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
static GI_INLINE_DECL Gtk::FontChooserDialog new_ (const gi::cstring_v title, Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::FontChooserDialog new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooserdialog_extra_def.hpp>)
#include <gtk/fontchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserdialog_extra.hpp>)
#include <gtk/fontchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontChooserDialog : public GI_GTK_FONTCHOOSERDIALOG_BASE
{ typedef GI_GTK_FONTCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontChooserDialog>
{ typedef Gtk::FontChooserDialog type; }; 

} // namespace repository

} // namespace gi

#endif
