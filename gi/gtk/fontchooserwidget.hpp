// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERWIDGET_HPP_
#define _GI_GTK_FONTCHOOSERWIDGET_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser;

class FontChooserWidget;

namespace base {


#define GI_GTK_FONTCHOOSERWIDGET_BASE base::FontChooserWidgetBase
class FontChooserWidgetBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFontChooserWidget BaseObjectType;

FontChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::FontChooser interface_ (gi::interface_tag<Gtk::FontChooser>);

GI_INLINE_DECL operator Gtk::FontChooser ();

// GtkWidget* /*none*/ gtk_font_chooser_widget_new ();
// ::GtkFontChooserWidget* /*none*/ gtk_font_chooser_widget_new ();
static GI_INLINE_DECL Gtk::FontChooserWidget new_ () noexcept;

gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> property_tweak_action()
{ return gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> (*this, "tweak-action"); }
const gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> property_tweak_action() const
{ return gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> (*this, "tweak-action"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra_def.hpp>)
#include <gtk/fontchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra.hpp>)
#include <gtk/fontchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontChooserWidget : public GI_GTK_FONTCHOOSERWIDGET_BASE
{ typedef GI_GTK_FONTCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontChooserWidget>
{ typedef Gtk::FontChooserWidget type; }; 

} // namespace repository

} // namespace gi

#endif
