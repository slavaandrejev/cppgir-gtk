// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERSCROLL_HPP_
#define _GI_GTK_EVENTCONTROLLERSCROLL_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EventControllerScroll;

namespace base {


#define GI_GTK_EVENTCONTROLLERSCROLL_BASE base::EventControllerScrollBase
class EventControllerScrollBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkEventControllerScroll BaseObjectType;

EventControllerScrollBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_scroll_get_type(); } 

// GtkEventController* /*full*/ gtk_event_controller_scroll_new (GtkEventControllerScrollFlags flags);
// ::GtkEventControllerScroll* /*full*/ gtk_event_controller_scroll_new (::GtkEventControllerScrollFlags flags);
static GI_INLINE_DECL Gtk::EventControllerScroll new_ (Gtk::EventControllerScrollFlags flags) noexcept;

// GtkEventControllerScrollFlags gtk_event_controller_scroll_get_flags (GtkEventControllerScroll* scroll /*none*/);
// ::GtkEventControllerScrollFlags gtk_event_controller_scroll_get_flags (::GtkEventControllerScroll* scroll /*none*/);
GI_INLINE_DECL Gtk::EventControllerScrollFlags get_flags () noexcept;

// GdkScrollUnit gtk_event_controller_scroll_get_unit (GtkEventControllerScroll* scroll /*none*/);
// ::GdkScrollUnit gtk_event_controller_scroll_get_unit (::GtkEventControllerScroll* scroll /*none*/);
GI_INLINE_DECL Gdk::ScrollUnit get_unit () noexcept;

// void gtk_event_controller_scroll_set_flags (GtkEventControllerScroll* scroll /*none*/, GtkEventControllerScrollFlags flags);
// void gtk_event_controller_scroll_set_flags (::GtkEventControllerScroll* scroll /*none*/, ::GtkEventControllerScrollFlags flags);
GI_INLINE_DECL void set_flags (Gtk::EventControllerScrollFlags flags) noexcept;

gi::property_proxy<Gtk::EventControllerScrollFlags, base::EventControllerScrollBase> property_flags()
{ return gi::property_proxy<Gtk::EventControllerScrollFlags, base::EventControllerScrollBase> (*this, "flags"); }
const gi::property_proxy<Gtk::EventControllerScrollFlags, base::EventControllerScrollBase> property_flags() const
{ return gi::property_proxy<Gtk::EventControllerScrollFlags, base::EventControllerScrollBase> (*this, "flags"); }

// (signal) void decelerate (gdouble vel_x, gdouble vel_y);
// (signal) void decelerate (gdouble vel_x, gdouble vel_y);
gi::signal_proxy<void(Gtk::EventControllerScroll, gdouble vel_x, gdouble vel_y)> signal_decelerate()
{ return gi::signal_proxy<void(Gtk::EventControllerScroll, gdouble vel_x, gdouble vel_y)> (*this, "decelerate"); }

// (signal) gboolean scroll (gdouble dx, gdouble dy);
// (signal) gboolean scroll (gdouble dx, gdouble dy);
gi::signal_proxy<bool(Gtk::EventControllerScroll, gdouble dx, gdouble dy)> signal_scroll()
{ return gi::signal_proxy<bool(Gtk::EventControllerScroll, gdouble dx, gdouble dy)> (*this, "scroll"); }

// (signal) void scroll-begin ();
// (signal) void scroll-begin ();
gi::signal_proxy<void(Gtk::EventControllerScroll)> signal_scroll_begin()
{ return gi::signal_proxy<void(Gtk::EventControllerScroll)> (*this, "scroll-begin"); }

// (signal) void scroll-end ();
// (signal) void scroll-end ();
gi::signal_proxy<void(Gtk::EventControllerScroll)> signal_scroll_end()
{ return gi::signal_proxy<void(Gtk::EventControllerScroll)> (*this, "scroll-end"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerscroll_extra_def.hpp>)
#include <gtk/eventcontrollerscroll_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerscroll_extra.hpp>)
#include <gtk/eventcontrollerscroll_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventControllerScroll : public GI_GTK_EVENTCONTROLLERSCROLL_BASE
{ typedef GI_GTK_EVENTCONTROLLERSCROLL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventControllerScroll>
{ typedef Gtk::EventControllerScroll type; }; 

} // namespace repository

} // namespace gi

#endif
