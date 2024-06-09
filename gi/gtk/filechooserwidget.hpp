// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERWIDGET_HPP_
#define _GI_GTK_FILECHOOSERWIDGET_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FileChooser;

class FileChooserWidget;

namespace base {


#define GI_GTK_FILECHOOSERWIDGET_BASE base::FileChooserWidgetBase
class FileChooserWidgetBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFileChooserWidget BaseObjectType;

FileChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::FileChooser interface_ (gi::interface_tag<Gtk::FileChooser>);

GI_INLINE_DECL operator Gtk::FileChooser ();

// GtkWidget* /*none*/ gtk_file_chooser_widget_new (GtkFileChooserAction action);
// ::GtkFileChooserWidget* /*none*/ gtk_file_chooser_widget_new (::GtkFileChooserAction action);
static GI_INLINE_DECL Gtk::FileChooserWidget new_ (Gtk::FileChooserAction action) noexcept;

gi::property_proxy<bool, base::FileChooserWidgetBase> property_search_mode()
{ return gi::property_proxy<bool, base::FileChooserWidgetBase> (*this, "search-mode"); }
const gi::property_proxy<bool, base::FileChooserWidgetBase> property_search_mode() const
{ return gi::property_proxy<bool, base::FileChooserWidgetBase> (*this, "search-mode"); }

gi::property_proxy<bool, base::FileChooserWidgetBase> property_show_time()
{ return gi::property_proxy<bool, base::FileChooserWidgetBase> (*this, "show-time"); }
const gi::property_proxy<bool, base::FileChooserWidgetBase> property_show_time() const
{ return gi::property_proxy<bool, base::FileChooserWidgetBase> (*this, "show-time"); }

gi::property_proxy<gi::cstring, base::FileChooserWidgetBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::FileChooserWidgetBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::FileChooserWidgetBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::FileChooserWidgetBase> (*this, "subtitle"); }

// (signal) void desktop-folder ();
// (signal) void desktop-folder ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_desktop_folder()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "desktop-folder"); }

// (signal) void down-folder ();
// (signal) void down-folder ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_down_folder()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "down-folder"); }

// (signal) void home-folder ();
// (signal) void home-folder ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_home_folder()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "home-folder"); }

// (signal) void location-popup (gchar* path /*none*/);
// (signal) void location-popup (char* path /*none*/);
gi::signal_proxy<void(Gtk::FileChooserWidget, gi::cstring_v path)> signal_location_popup()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget, gi::cstring_v path)> (*this, "location-popup"); }

// (signal) void location-popup-on-paste ();
// (signal) void location-popup-on-paste ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_location_popup_on_paste()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "location-popup-on-paste"); }

// (signal) void location-toggle-popup ();
// (signal) void location-toggle-popup ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_location_toggle_popup()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "location-toggle-popup"); }

// (signal) void places-shortcut ();
// (signal) void places-shortcut ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_places_shortcut()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "places-shortcut"); }

// (signal) void quick-bookmark (gint bookmark_index);
// (signal) void quick-bookmark (gint bookmark_index);
gi::signal_proxy<void(Gtk::FileChooserWidget, gint bookmark_index)> signal_quick_bookmark()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget, gint bookmark_index)> (*this, "quick-bookmark"); }

// (signal) void recent-shortcut ();
// (signal) void recent-shortcut ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_recent_shortcut()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "recent-shortcut"); }

// (signal) void search-shortcut ();
// (signal) void search-shortcut ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_search_shortcut()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "search-shortcut"); }

// (signal) void show-hidden ();
// (signal) void show-hidden ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_show_hidden()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "show-hidden"); }

// (signal) void up-folder ();
// (signal) void up-folder ();
gi::signal_proxy<void(Gtk::FileChooserWidget)> signal_up_folder()
{ return gi::signal_proxy<void(Gtk::FileChooserWidget)> (*this, "up-folder"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidget_extra_def.hpp>)
#include <gtk/filechooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidget_extra.hpp>)
#include <gtk/filechooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooserWidget : public GI_GTK_FILECHOOSERWIDGET_BASE
{ typedef GI_GTK_FILECHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooserWidget>
{ typedef Gtk::FileChooserWidget type; }; 

} // namespace repository

} // namespace gi

#endif
