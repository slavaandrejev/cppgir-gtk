// AUTO-GENERATED

#ifndef _GI_GTK_STATUSBAR_HPP_
#define _GI_GTK_STATUSBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Statusbar;

namespace base {


#define GI_GTK_STATUSBAR_BASE base::StatusbarBase
class StatusbarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkStatusbar BaseObjectType;

StatusbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_statusbar_get_type(); } 

// GtkWidget* /*none*/ gtk_statusbar_new ();
// ::GtkStatusbar* /*none*/ gtk_statusbar_new ();
static GI_INLINE_DECL Gtk::Statusbar new_ () noexcept;

// guint gtk_statusbar_get_context_id (GtkStatusbar* statusbar /*none*/, const char* context_description /*none*/);
// guint gtk_statusbar_get_context_id (::GtkStatusbar* statusbar /*none*/, const char* context_description /*none*/);
GI_INLINE_DECL guint get_context_id (const gi::cstring_v context_description) noexcept;

// void gtk_statusbar_pop (GtkStatusbar* statusbar /*none*/, guint context_id);
// void gtk_statusbar_pop (::GtkStatusbar* statusbar /*none*/, guint context_id);
GI_INLINE_DECL void pop (guint context_id) noexcept;

// guint gtk_statusbar_push (GtkStatusbar* statusbar /*none*/, guint context_id, const char* text /*none*/);
// guint gtk_statusbar_push (::GtkStatusbar* statusbar /*none*/, guint context_id, const char* text /*none*/);
GI_INLINE_DECL guint push (guint context_id, const gi::cstring_v text) noexcept;

// void gtk_statusbar_remove (GtkStatusbar* statusbar /*none*/, guint context_id, guint message_id);
// void gtk_statusbar_remove (::GtkStatusbar* statusbar /*none*/, guint context_id, guint message_id);
GI_INLINE_DECL void remove (guint context_id, guint message_id) noexcept;

// void gtk_statusbar_remove_all (GtkStatusbar* statusbar /*none*/, guint context_id);
// void gtk_statusbar_remove_all (::GtkStatusbar* statusbar /*none*/, guint context_id);
GI_INLINE_DECL void remove_all (guint context_id) noexcept;

// (signal) void text-popped (guint context_id, gchar* text /*none*/);
// (signal) void text-popped (guint context_id, char* text /*none*/);
gi::signal_proxy<void(Gtk::Statusbar, guint context_id, gi::cstring_v text)> signal_text_popped()
{ return gi::signal_proxy<void(Gtk::Statusbar, guint context_id, gi::cstring_v text)> (*this, "text-popped"); }

// (signal) void text-pushed (guint context_id, gchar* text /*none*/);
// (signal) void text-pushed (guint context_id, char* text /*none*/);
gi::signal_proxy<void(Gtk::Statusbar, guint context_id, gi::cstring_v text)> signal_text_pushed()
{ return gi::signal_proxy<void(Gtk::Statusbar, guint context_id, gi::cstring_v text)> (*this, "text-pushed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_def.hpp>)
#include <gtk/statusbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra.hpp>)
#include <gtk/statusbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Statusbar : public GI_GTK_STATUSBAR_BASE
{ typedef GI_GTK_STATUSBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStatusbar>
{ typedef Gtk::Statusbar type; }; 

} // namespace repository

} // namespace gi

#endif
