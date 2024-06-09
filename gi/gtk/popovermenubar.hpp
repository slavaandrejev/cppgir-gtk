// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENUBAR_HPP_
#define _GI_GTK_POPOVERMENUBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class PopoverMenuBar;

namespace base {


#define GI_GTK_POPOVERMENUBAR_BASE base::PopoverMenuBarBase
class PopoverMenuBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPopoverMenuBar BaseObjectType;

PopoverMenuBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_menu_bar_get_type(); } 

// GtkWidget* /*none*/ gtk_popover_menu_bar_new_from_model (GMenuModel* model /*none,nullable*/);
// ::GtkPopoverMenuBar* /*none*/ gtk_popover_menu_bar_new_from_model (::GMenuModel* model /*none,nullable*/);
static GI_INLINE_DECL Gtk::PopoverMenuBar new_from_model (Gio::MenuModel model) noexcept;
static GI_INLINE_DECL Gtk::PopoverMenuBar new_from_model () noexcept;

// gboolean gtk_popover_menu_bar_add_child (GtkPopoverMenuBar* bar /*none*/, GtkWidget* child /*none*/, const char* id /*none*/);
// gboolean gtk_popover_menu_bar_add_child (::GtkPopoverMenuBar* bar /*none*/, ::GtkWidget* child /*none*/, const char* id /*none*/);
GI_INLINE_DECL bool add_child (Gtk::Widget child, const gi::cstring_v id) noexcept;

// GMenuModel* /*none,nullable*/ gtk_popover_menu_bar_get_menu_model (GtkPopoverMenuBar* bar /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_menu_bar_get_menu_model (::GtkPopoverMenuBar* bar /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// gboolean gtk_popover_menu_bar_remove_child (GtkPopoverMenuBar* bar /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_popover_menu_bar_remove_child (::GtkPopoverMenuBar* bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL bool remove_child (Gtk::Widget child) noexcept;

// void gtk_popover_menu_bar_set_menu_model (GtkPopoverMenuBar* bar /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_menu_bar_set_menu_model (::GtkPopoverMenuBar* bar /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

gi::property_proxy<Gio::MenuModel, base::PopoverMenuBarBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::PopoverMenuBarBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::PopoverMenuBarBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::PopoverMenuBarBase> (*this, "menu-model"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenubar_extra_def.hpp>)
#include <gtk/popovermenubar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenubar_extra.hpp>)
#include <gtk/popovermenubar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PopoverMenuBar : public GI_GTK_POPOVERMENUBAR_BASE
{ typedef GI_GTK_POPOVERMENUBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopoverMenuBar>
{ typedef Gtk::PopoverMenuBar type; }; 

} // namespace repository

} // namespace gi

#endif
