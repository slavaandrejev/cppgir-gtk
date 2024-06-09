// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENU_HPP_
#define _GI_GTK_POPOVERMENU_HPP_

#include "popover.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class PopoverMenu;

namespace base {


#define GI_GTK_POPOVERMENU_BASE base::PopoverMenuBase
class PopoverMenuBase : public Gtk::Popover
{
typedef Gtk::Popover super_type;
public:
typedef ::GtkPopoverMenu BaseObjectType;

PopoverMenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_menu_get_type(); } 

// GtkWidget* /*none*/ gtk_popover_menu_new_from_model (GMenuModel* model /*none,nullable*/);
// ::GtkPopoverMenu* /*none*/ gtk_popover_menu_new_from_model (::GMenuModel* model /*none,nullable*/);
static GI_INLINE_DECL Gtk::PopoverMenu new_from_model (Gio::MenuModel model) noexcept;
static GI_INLINE_DECL Gtk::PopoverMenu new_from_model () noexcept;

// GtkWidget* /*none*/ gtk_popover_menu_new_from_model_full (GMenuModel* model /*none*/, GtkPopoverMenuFlags flags);
// ::GtkPopoverMenu* /*none*/ gtk_popover_menu_new_from_model_full (::GMenuModel* model /*none*/, ::GtkPopoverMenuFlags flags);
static GI_INLINE_DECL Gtk::PopoverMenu new_from_model_full (Gio::MenuModel model, Gtk::PopoverMenuFlags flags) noexcept;

// gboolean gtk_popover_menu_add_child (GtkPopoverMenu* popover /*none*/, GtkWidget* child /*none*/, const char* id /*none*/);
// gboolean gtk_popover_menu_add_child (::GtkPopoverMenu* popover /*none*/, ::GtkWidget* child /*none*/, const char* id /*none*/);
GI_INLINE_DECL bool add_child (Gtk::Widget child, const gi::cstring_v id) noexcept;

// GMenuModel* /*none,nullable*/ gtk_popover_menu_get_menu_model (GtkPopoverMenu* popover /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_menu_get_menu_model (::GtkPopoverMenu* popover /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// gboolean gtk_popover_menu_remove_child (GtkPopoverMenu* popover /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_popover_menu_remove_child (::GtkPopoverMenu* popover /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL bool remove_child (Gtk::Widget child) noexcept;

// void gtk_popover_menu_set_menu_model (GtkPopoverMenu* popover /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_menu_set_menu_model (::GtkPopoverMenu* popover /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

gi::property_proxy<Gio::MenuModel, base::PopoverMenuBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::PopoverMenuBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::PopoverMenuBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::PopoverMenuBase> (*this, "menu-model"); }

gi::property_proxy<gi::cstring, base::PopoverMenuBase> property_visible_submenu()
{ return gi::property_proxy<gi::cstring, base::PopoverMenuBase> (*this, "visible-submenu"); }
const gi::property_proxy<gi::cstring, base::PopoverMenuBase> property_visible_submenu() const
{ return gi::property_proxy<gi::cstring, base::PopoverMenuBase> (*this, "visible-submenu"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_def.hpp>)
#include <gtk/popovermenu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra.hpp>)
#include <gtk/popovermenu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PopoverMenu : public GI_GTK_POPOVERMENU_BASE
{ typedef GI_GTK_POPOVERMENU_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopoverMenu>
{ typedef Gtk::PopoverMenu type; }; 

} // namespace repository

} // namespace gi

#endif
