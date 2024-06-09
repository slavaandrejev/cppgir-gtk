// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHBAR_HPP_
#define _GI_GTK_SEARCHBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Editable;
class Widget;

class SearchBar;

namespace base {


#define GI_GTK_SEARCHBAR_BASE base::SearchBarBase
class SearchBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSearchBar BaseObjectType;

SearchBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_search_bar_get_type(); } 

// GtkWidget* /*none*/ gtk_search_bar_new ();
// ::GtkSearchBar* /*none*/ gtk_search_bar_new ();
static GI_INLINE_DECL Gtk::SearchBar new_ () noexcept;

// void gtk_search_bar_connect_entry (GtkSearchBar* bar /*none*/, GtkEditable* entry /*none*/);
// void gtk_search_bar_connect_entry (::GtkSearchBar* bar /*none*/, ::GtkEditable* entry /*none*/);
GI_INLINE_DECL void connect_entry (Gtk::Editable entry) noexcept;

// GtkWidget* /*none,nullable*/ gtk_search_bar_get_child (GtkSearchBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_bar_get_child (::GtkSearchBar* bar /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkWidget* /*none,nullable*/ gtk_search_bar_get_key_capture_widget (GtkSearchBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_bar_get_key_capture_widget (::GtkSearchBar* bar /*none*/);
GI_INLINE_DECL Gtk::Widget get_key_capture_widget () noexcept;

// gboolean gtk_search_bar_get_search_mode (GtkSearchBar* bar /*none*/);
// gboolean gtk_search_bar_get_search_mode (::GtkSearchBar* bar /*none*/);
GI_INLINE_DECL bool get_search_mode () noexcept;

// gboolean gtk_search_bar_get_show_close_button (GtkSearchBar* bar /*none*/);
// gboolean gtk_search_bar_get_show_close_button (::GtkSearchBar* bar /*none*/);
GI_INLINE_DECL bool get_show_close_button () noexcept;

// void gtk_search_bar_set_child (GtkSearchBar* bar /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_search_bar_set_child (::GtkSearchBar* bar /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_search_bar_set_key_capture_widget (GtkSearchBar* bar /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_search_bar_set_key_capture_widget (::GtkSearchBar* bar /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_key_capture_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_key_capture_widget () noexcept;

// void gtk_search_bar_set_search_mode (GtkSearchBar* bar /*none*/, gboolean search_mode);
// void gtk_search_bar_set_search_mode (::GtkSearchBar* bar /*none*/, gboolean search_mode);
GI_INLINE_DECL void set_search_mode (gboolean search_mode) noexcept;

// void gtk_search_bar_set_show_close_button (GtkSearchBar* bar /*none*/, gboolean visible);
// void gtk_search_bar_set_show_close_button (::GtkSearchBar* bar /*none*/, gboolean visible);
GI_INLINE_DECL void set_show_close_button (gboolean visible) noexcept;

gi::property_proxy<Gtk::Widget, base::SearchBarBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::SearchBarBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::SearchBarBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::SearchBarBase> (*this, "child"); }

gi::property_proxy<Gtk::Widget, base::SearchBarBase> property_key_capture_widget()
{ return gi::property_proxy<Gtk::Widget, base::SearchBarBase> (*this, "key-capture-widget"); }
const gi::property_proxy<Gtk::Widget, base::SearchBarBase> property_key_capture_widget() const
{ return gi::property_proxy<Gtk::Widget, base::SearchBarBase> (*this, "key-capture-widget"); }

gi::property_proxy<bool, base::SearchBarBase> property_search_mode_enabled()
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "search-mode-enabled"); }
const gi::property_proxy<bool, base::SearchBarBase> property_search_mode_enabled() const
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "search-mode-enabled"); }

gi::property_proxy<bool, base::SearchBarBase> property_show_close_button()
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "show-close-button"); }
const gi::property_proxy<bool, base::SearchBarBase> property_show_close_button() const
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "show-close-button"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_def.hpp>)
#include <gtk/searchbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra.hpp>)
#include <gtk/searchbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SearchBar : public GI_GTK_SEARCHBAR_BASE
{ typedef GI_GTK_SEARCHBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSearchBar>
{ typedef Gtk::SearchBar type; }; 

} // namespace repository

} // namespace gi

#endif
