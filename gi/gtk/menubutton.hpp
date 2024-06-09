// AUTO-GENERATED

#ifndef _GI_GTK_MENUBUTTON_HPP_
#define _GI_GTK_MENUBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Popover;
class Widget;

class MenuButton;

namespace base {


#define GI_GTK_MENUBUTTON_BASE base::MenuButtonBase
class MenuButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkMenuButton BaseObjectType;

MenuButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_button_get_type(); } 

// GtkWidget* /*none*/ gtk_menu_button_new ();
// ::GtkMenuButton* /*none*/ gtk_menu_button_new ();
static GI_INLINE_DECL Gtk::MenuButton new_ () noexcept;

// gboolean gtk_menu_button_get_active (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_active (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_menu_button_get_always_show_arrow (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_always_show_arrow (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_always_show_arrow () noexcept;

// gboolean gtk_menu_button_get_can_shrink (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_can_shrink (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// GtkWidget* /*none,nullable*/ gtk_menu_button_get_child (GtkMenuButton* menu_button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_menu_button_get_child (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkArrowType gtk_menu_button_get_direction (GtkMenuButton* menu_button /*none*/);
// ::GtkArrowType gtk_menu_button_get_direction (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL Gtk::ArrowType get_direction () noexcept;

// gboolean gtk_menu_button_get_has_frame (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_has_frame (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_has_frame () noexcept;

// const char* /*none,nullable*/ gtk_menu_button_get_icon_name (GtkMenuButton* menu_button /*none*/);
// const char* /*none,nullable*/ gtk_menu_button_get_icon_name (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ gtk_menu_button_get_label (GtkMenuButton* menu_button /*none*/);
// const char* /*none,nullable*/ gtk_menu_button_get_label (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// GMenuModel* /*none,nullable*/ gtk_menu_button_get_menu_model (GtkMenuButton* menu_button /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_menu_button_get_menu_model (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// GtkPopover* /*none,nullable*/ gtk_menu_button_get_popover (GtkMenuButton* menu_button /*none*/);
// ::GtkPopover* /*none,nullable*/ gtk_menu_button_get_popover (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL Gtk::Popover get_popover () noexcept;

// gboolean gtk_menu_button_get_primary (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_primary (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_primary () noexcept;

// gboolean gtk_menu_button_get_use_underline (GtkMenuButton* menu_button /*none*/);
// gboolean gtk_menu_button_get_use_underline (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_menu_button_popdown (GtkMenuButton* menu_button /*none*/);
// void gtk_menu_button_popdown (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_menu_button_popup (GtkMenuButton* menu_button /*none*/);
// void gtk_menu_button_popup (::GtkMenuButton* menu_button /*none*/);
GI_INLINE_DECL void popup () noexcept;

// void gtk_menu_button_set_active (GtkMenuButton* menu_button /*none*/, gboolean active);
// void gtk_menu_button_set_active (::GtkMenuButton* menu_button /*none*/, gboolean active);
GI_INLINE_DECL void set_active (gboolean active) noexcept;

// void gtk_menu_button_set_always_show_arrow (GtkMenuButton* menu_button /*none*/, gboolean always_show_arrow);
// void gtk_menu_button_set_always_show_arrow (::GtkMenuButton* menu_button /*none*/, gboolean always_show_arrow);
GI_INLINE_DECL void set_always_show_arrow (gboolean always_show_arrow) noexcept;

// void gtk_menu_button_set_can_shrink (GtkMenuButton* menu_button /*none*/, gboolean can_shrink);
// void gtk_menu_button_set_can_shrink (::GtkMenuButton* menu_button /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void gtk_menu_button_set_child (GtkMenuButton* menu_button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_menu_button_set_child (::GtkMenuButton* menu_button /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_menu_button_set_create_popup_func (GtkMenuButton* menu_button /*none*/, GtkMenuButtonCreatePopupFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy_notify /*none,nullable*/);
// void gtk_menu_button_set_create_popup_func (::GtkMenuButton* menu_button /*none*/, Gtk::MenuButtonCreatePopupFunc::cfunction_type func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none,nullable*/);
GI_INLINE_DECL void set_create_popup_func (Gtk::MenuButtonCreatePopupFunc func) noexcept;

// void gtk_menu_button_set_direction (GtkMenuButton* menu_button /*none*/, GtkArrowType direction);
// void gtk_menu_button_set_direction (::GtkMenuButton* menu_button /*none*/, ::GtkArrowType direction);
GI_INLINE_DECL void set_direction (Gtk::ArrowType direction) noexcept;

// void gtk_menu_button_set_has_frame (GtkMenuButton* menu_button /*none*/, gboolean has_frame);
// void gtk_menu_button_set_has_frame (::GtkMenuButton* menu_button /*none*/, gboolean has_frame);
GI_INLINE_DECL void set_has_frame (gboolean has_frame) noexcept;

// void gtk_menu_button_set_icon_name (GtkMenuButton* menu_button /*none*/, const char* icon_name /*none*/);
// void gtk_menu_button_set_icon_name (::GtkMenuButton* menu_button /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;

// void gtk_menu_button_set_label (GtkMenuButton* menu_button /*none*/, const char* label /*none*/);
// void gtk_menu_button_set_label (::GtkMenuButton* menu_button /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;

// void gtk_menu_button_set_menu_model (GtkMenuButton* menu_button /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void gtk_menu_button_set_menu_model (::GtkMenuButton* menu_button /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void gtk_menu_button_set_popover (GtkMenuButton* menu_button /*none*/, GtkWidget* popover /*none,nullable*/);
// void gtk_menu_button_set_popover (::GtkMenuButton* menu_button /*none*/, ::GtkWidget* popover /*none,nullable*/);
GI_INLINE_DECL void set_popover (Gtk::Widget popover) noexcept;
GI_INLINE_DECL void set_popover () noexcept;

// void gtk_menu_button_set_primary (GtkMenuButton* menu_button /*none*/, gboolean primary);
// void gtk_menu_button_set_primary (::GtkMenuButton* menu_button /*none*/, gboolean primary);
GI_INLINE_DECL void set_primary (gboolean primary) noexcept;

// void gtk_menu_button_set_use_underline (GtkMenuButton* menu_button /*none*/, gboolean use_underline);
// void gtk_menu_button_set_use_underline (::GtkMenuButton* menu_button /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::MenuButtonBase> property_active()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_active() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "active"); }

gi::property_proxy<bool, base::MenuButtonBase> property_always_show_arrow()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "always-show-arrow"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_always_show_arrow() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "always-show-arrow"); }

gi::property_proxy<bool, base::MenuButtonBase> property_can_shrink()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "can-shrink"); }

gi::property_proxy<Gtk::Widget, base::MenuButtonBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::MenuButtonBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::MenuButtonBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::MenuButtonBase> (*this, "child"); }

gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> property_direction()
{ return gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> (*this, "direction"); }
const gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> property_direction() const
{ return gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> (*this, "direction"); }

gi::property_proxy<bool, base::MenuButtonBase> property_has_frame()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_has_frame() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "has-frame"); }

gi::property_proxy<gi::cstring, base::MenuButtonBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::MenuButtonBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::MenuButtonBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::MenuButtonBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::MenuButtonBase> property_label()
{ return gi::property_proxy<gi::cstring, base::MenuButtonBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::MenuButtonBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::MenuButtonBase> (*this, "label"); }

gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> (*this, "menu-model"); }

gi::property_proxy<Gtk::Popover, base::MenuButtonBase> property_popover()
{ return gi::property_proxy<Gtk::Popover, base::MenuButtonBase> (*this, "popover"); }
const gi::property_proxy<Gtk::Popover, base::MenuButtonBase> property_popover() const
{ return gi::property_proxy<Gtk::Popover, base::MenuButtonBase> (*this, "popover"); }

gi::property_proxy<bool, base::MenuButtonBase> property_primary()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "primary"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_primary() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "primary"); }

gi::property_proxy<bool, base::MenuButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "use-underline"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::MenuButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::MenuButton)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_def.hpp>)
#include <gtk/menubutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra.hpp>)
#include <gtk/menubutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuButton : public GI_GTK_MENUBUTTON_BASE
{ typedef GI_GTK_MENUBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuButton>
{ typedef Gtk::MenuButton type; }; 

} // namespace repository

} // namespace gi

#endif
