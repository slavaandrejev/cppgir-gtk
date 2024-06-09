// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSERWIDGET_HPP_
#define _GI_GTK_COLORCHOOSERWIDGET_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser;

class ColorChooserWidget;

namespace base {


#define GI_GTK_COLORCHOOSERWIDGET_BASE base::ColorChooserWidgetBase
class ColorChooserWidgetBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkColorChooserWidget BaseObjectType;

ColorChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::ColorChooser interface_ (gi::interface_tag<Gtk::ColorChooser>);

GI_INLINE_DECL operator Gtk::ColorChooser ();

// GtkWidget* /*none*/ gtk_color_chooser_widget_new ();
// ::GtkColorChooserWidget* /*none*/ gtk_color_chooser_widget_new ();
static GI_INLINE_DECL Gtk::ColorChooserWidget new_ () noexcept;

gi::property_proxy<bool, base::ColorChooserWidgetBase> property_show_editor()
{ return gi::property_proxy<bool, base::ColorChooserWidgetBase> (*this, "show-editor"); }
const gi::property_proxy<bool, base::ColorChooserWidgetBase> property_show_editor() const
{ return gi::property_proxy<bool, base::ColorChooserWidgetBase> (*this, "show-editor"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooserwidget_extra_def.hpp>)
#include <gtk/colorchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooserwidget_extra.hpp>)
#include <gtk/colorchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooserWidget : public GI_GTK_COLORCHOOSERWIDGET_BASE
{ typedef GI_GTK_COLORCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorChooserWidget>
{ typedef Gtk::ColorChooserWidget type; }; 

} // namespace repository

} // namespace gi

#endif
