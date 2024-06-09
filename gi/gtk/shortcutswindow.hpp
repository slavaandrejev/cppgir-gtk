// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSWINDOW_HPP_
#define _GI_GTK_SHORTCUTSWINDOW_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ShortcutsWindow;

namespace base {


#define GI_GTK_SHORTCUTSWINDOW_BASE base::ShortcutsWindowBase
class ShortcutsWindowBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkShortcutsWindow BaseObjectType;

ShortcutsWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcuts_window_get_type(); } 

gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> property_section_name()
{ return gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> (*this, "section-name"); }
const gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> property_section_name() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> (*this, "section-name"); }

gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> property_view_name()
{ return gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> (*this, "view-name"); }
const gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> property_view_name() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsWindowBase> (*this, "view-name"); }

// (signal) void close ();
// (signal) void close ();
gi::signal_proxy<void(Gtk::ShortcutsWindow)> signal_close()
{ return gi::signal_proxy<void(Gtk::ShortcutsWindow)> (*this, "close"); }

// (signal) void search ();
// (signal) void search ();
gi::signal_proxy<void(Gtk::ShortcutsWindow)> signal_search()
{ return gi::signal_proxy<void(Gtk::ShortcutsWindow)> (*this, "search"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_def.hpp>)
#include <gtk/shortcutswindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra.hpp>)
#include <gtk/shortcutswindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutsWindow : public GI_GTK_SHORTCUTSWINDOW_BASE
{ typedef GI_GTK_SHORTCUTSWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutsWindow>
{ typedef Gtk::ShortcutsWindow type; }; 

} // namespace repository

} // namespace gi

#endif
