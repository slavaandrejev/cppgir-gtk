// AUTO-GENERATED

#ifndef _GI_GTK_COLORBUTTON_HPP_
#define _GI_GTK_COLORBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser;

class ColorButton;

namespace base {


#define GI_GTK_COLORBUTTON_BASE base::ColorButtonBase
class ColorButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkColorButton BaseObjectType;

ColorButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_button_get_type(); } 

GI_INLINE_DECL Gtk::ColorChooser interface_ (gi::interface_tag<Gtk::ColorChooser>);

GI_INLINE_DECL operator Gtk::ColorChooser ();

// GtkWidget* /*none*/ gtk_color_button_new ();
// ::GtkColorButton* /*none*/ gtk_color_button_new ();
static GI_INLINE_DECL Gtk::ColorButton new_ () noexcept;

// GtkWidget* /*none*/ gtk_color_button_new_with_rgba (const GdkRGBA* rgba /*none*/);
// ::GtkColorButton* /*none*/ gtk_color_button_new_with_rgba (const ::GdkRGBA* rgba /*none*/);
static GI_INLINE_DECL Gtk::ColorButton new_with_rgba (const Gdk::RGBA_Ref rgba) noexcept;

// gboolean gtk_color_button_get_modal (GtkColorButton* button /*none*/);
// gboolean gtk_color_button_get_modal (::GtkColorButton* button /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* /*none*/ gtk_color_button_get_title (GtkColorButton* button /*none*/);
// const char* /*none*/ gtk_color_button_get_title (::GtkColorButton* button /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void gtk_color_button_set_modal (GtkColorButton* button /*none*/, gboolean modal);
// void gtk_color_button_set_modal (::GtkColorButton* button /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_color_button_set_title (GtkColorButton* button /*none*/, const char* title /*none*/);
// void gtk_color_button_set_title (::GtkColorButton* button /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<bool, base::ColorButtonBase> property_modal()
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "modal"); }
const gi::property_proxy<bool, base::ColorButtonBase> property_modal() const
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "modal"); }

gi::property_proxy<bool, base::ColorButtonBase> property_show_editor()
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "show-editor"); }
const gi::property_proxy<bool, base::ColorButtonBase> property_show_editor() const
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "show-editor"); }

gi::property_proxy<gi::cstring, base::ColorButtonBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ColorButtonBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ColorButtonBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ColorButtonBase> (*this, "title"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::ColorButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ColorButton)> (*this, "activate"); }

// (signal) void color-set ();
// (signal) void color-set ();
gi::signal_proxy<void(Gtk::ColorButton)> signal_color_set()
{ return gi::signal_proxy<void(Gtk::ColorButton)> (*this, "color-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_def.hpp>)
#include <gtk/colorbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra.hpp>)
#include <gtk/colorbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorButton : public GI_GTK_COLORBUTTON_BASE
{ typedef GI_GTK_COLORBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorButton>
{ typedef Gtk::ColorButton type; }; 

} // namespace repository

} // namespace gi

#endif
