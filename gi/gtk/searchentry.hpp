// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHENTRY_HPP_
#define _GI_GTK_SEARCHENTRY_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Editable;
class Widget;

class SearchEntry;

namespace base {


#define GI_GTK_SEARCHENTRY_BASE base::SearchEntryBase
class SearchEntryBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSearchEntry BaseObjectType;

SearchEntryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_search_entry_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ gtk_search_entry_new ();
// ::GtkSearchEntry* /*none*/ gtk_search_entry_new ();
static GI_INLINE_DECL Gtk::SearchEntry new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_search_entry_get_key_capture_widget (GtkSearchEntry* entry /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_search_entry_get_key_capture_widget (::GtkSearchEntry* entry /*none*/);
GI_INLINE_DECL Gtk::Widget get_key_capture_widget () noexcept;

// const char* /*none,nullable*/ gtk_search_entry_get_placeholder_text (GtkSearchEntry* entry /*none*/);
// const char* /*none,nullable*/ gtk_search_entry_get_placeholder_text (::GtkSearchEntry* entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_placeholder_text () noexcept;

// guint gtk_search_entry_get_search_delay (GtkSearchEntry* entry /*none*/);
// guint gtk_search_entry_get_search_delay (::GtkSearchEntry* entry /*none*/);
GI_INLINE_DECL guint get_search_delay () noexcept;

// void gtk_search_entry_set_key_capture_widget (GtkSearchEntry* entry /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_search_entry_set_key_capture_widget (::GtkSearchEntry* entry /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_key_capture_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_key_capture_widget () noexcept;

// void gtk_search_entry_set_placeholder_text (GtkSearchEntry* entry /*none*/, const char* text /*none,nullable*/);
// void gtk_search_entry_set_placeholder_text (::GtkSearchEntry* entry /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_placeholder_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_placeholder_text () noexcept;

// void gtk_search_entry_set_search_delay (GtkSearchEntry* entry /*none*/, guint delay);
// void gtk_search_entry_set_search_delay (::GtkSearchEntry* entry /*none*/, guint delay);
GI_INLINE_DECL void set_search_delay (guint delay) noexcept;

gi::property_proxy<bool, base::SearchEntryBase> property_activates_default()
{ return gi::property_proxy<bool, base::SearchEntryBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::SearchEntryBase> property_activates_default() const
{ return gi::property_proxy<bool, base::SearchEntryBase> (*this, "activates-default"); }

gi::property_proxy<gi::cstring, base::SearchEntryBase> property_placeholder_text()
{ return gi::property_proxy<gi::cstring, base::SearchEntryBase> (*this, "placeholder-text"); }
const gi::property_proxy<gi::cstring, base::SearchEntryBase> property_placeholder_text() const
{ return gi::property_proxy<gi::cstring, base::SearchEntryBase> (*this, "placeholder-text"); }

gi::property_proxy<guint, base::SearchEntryBase> property_search_delay()
{ return gi::property_proxy<guint, base::SearchEntryBase> (*this, "search-delay"); }
const gi::property_proxy<guint, base::SearchEntryBase> property_search_delay() const
{ return gi::property_proxy<guint, base::SearchEntryBase> (*this, "search-delay"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_activate()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "activate"); }

// (signal) void next-match ();
// (signal) void next-match ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_next_match()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "next-match"); }

// (signal) void previous-match ();
// (signal) void previous-match ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_previous_match()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "previous-match"); }

// (signal) void search-changed ();
// (signal) void search-changed ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_search_changed()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "search-changed"); }

// (signal) void search-started ();
// (signal) void search-started ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_search_started()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "search-started"); }

// (signal) void stop-search ();
// (signal) void stop-search ();
gi::signal_proxy<void(Gtk::SearchEntry)> signal_stop_search()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "stop-search"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_def.hpp>)
#include <gtk/searchentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra.hpp>)
#include <gtk/searchentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SearchEntry : public GI_GTK_SEARCHENTRY_BASE
{ typedef GI_GTK_SEARCHENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSearchEntry>
{ typedef Gtk::SearchEntry type; }; 

} // namespace repository

} // namespace gi

#endif
