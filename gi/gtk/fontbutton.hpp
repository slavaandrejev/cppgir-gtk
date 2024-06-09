// AUTO-GENERATED

#ifndef _GI_GTK_FONTBUTTON_HPP_
#define _GI_GTK_FONTBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser;

class FontButton;

namespace base {


#define GI_GTK_FONTBUTTON_BASE base::FontButtonBase
class FontButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFontButton BaseObjectType;

FontButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_button_get_type(); } 

GI_INLINE_DECL Gtk::FontChooser interface_ (gi::interface_tag<Gtk::FontChooser>);

GI_INLINE_DECL operator Gtk::FontChooser ();

// GtkWidget* /*none*/ gtk_font_button_new ();
// ::GtkFontButton* /*none*/ gtk_font_button_new ();
static GI_INLINE_DECL Gtk::FontButton new_ () noexcept;

// GtkWidget* /*none*/ gtk_font_button_new_with_font (const char* fontname /*none*/);
// ::GtkFontButton* /*none*/ gtk_font_button_new_with_font (const char* fontname /*none*/);
static GI_INLINE_DECL Gtk::FontButton new_with_font (const gi::cstring_v fontname) noexcept;

// gboolean gtk_font_button_get_modal (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_modal (::GtkFontButton* font_button /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* /*none*/ gtk_font_button_get_title (GtkFontButton* font_button /*none*/);
// const char* /*none*/ gtk_font_button_get_title (::GtkFontButton* font_button /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean gtk_font_button_get_use_font (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_use_font (::GtkFontButton* font_button /*none*/);
GI_INLINE_DECL bool get_use_font () noexcept;

// gboolean gtk_font_button_get_use_size (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_use_size (::GtkFontButton* font_button /*none*/);
GI_INLINE_DECL bool get_use_size () noexcept;

// void gtk_font_button_set_modal (GtkFontButton* font_button /*none*/, gboolean modal);
// void gtk_font_button_set_modal (::GtkFontButton* font_button /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_font_button_set_title (GtkFontButton* font_button /*none*/, const char* title /*none*/);
// void gtk_font_button_set_title (::GtkFontButton* font_button /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void gtk_font_button_set_use_font (GtkFontButton* font_button /*none*/, gboolean use_font);
// void gtk_font_button_set_use_font (::GtkFontButton* font_button /*none*/, gboolean use_font);
GI_INLINE_DECL void set_use_font (gboolean use_font) noexcept;

// void gtk_font_button_set_use_size (GtkFontButton* font_button /*none*/, gboolean use_size);
// void gtk_font_button_set_use_size (::GtkFontButton* font_button /*none*/, gboolean use_size);
GI_INLINE_DECL void set_use_size (gboolean use_size) noexcept;

gi::property_proxy<bool, base::FontButtonBase> property_modal()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "modal"); }
const gi::property_proxy<bool, base::FontButtonBase> property_modal() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "modal"); }

gi::property_proxy<gi::cstring, base::FontButtonBase> property_title()
{ return gi::property_proxy<gi::cstring, base::FontButtonBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::FontButtonBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::FontButtonBase> (*this, "title"); }

gi::property_proxy<bool, base::FontButtonBase> property_use_font()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-font"); }
const gi::property_proxy<bool, base::FontButtonBase> property_use_font() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-font"); }

gi::property_proxy<bool, base::FontButtonBase> property_use_size()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-size"); }
const gi::property_proxy<bool, base::FontButtonBase> property_use_size() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-size"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::FontButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::FontButton)> (*this, "activate"); }

// (signal) void font-set ();
// (signal) void font-set ();
gi::signal_proxy<void(Gtk::FontButton)> signal_font_set()
{ return gi::signal_proxy<void(Gtk::FontButton)> (*this, "font-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_def.hpp>)
#include <gtk/fontbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra.hpp>)
#include <gtk/fontbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontButton : public GI_GTK_FONTBUTTON_BASE
{ typedef GI_GTK_FONTBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontButton>
{ typedef Gtk::FontButton type; }; 

} // namespace repository

} // namespace gi

#endif
