// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERFOCUS_HPP_
#define _GI_GTK_EVENTCONTROLLERFOCUS_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EventControllerFocus;

namespace base {


#define GI_GTK_EVENTCONTROLLERFOCUS_BASE base::EventControllerFocusBase
class EventControllerFocusBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkEventControllerFocus BaseObjectType;

EventControllerFocusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_focus_get_type(); } 

// GtkEventController* /*full*/ gtk_event_controller_focus_new ();
// ::GtkEventControllerFocus* /*full*/ gtk_event_controller_focus_new ();
static GI_INLINE_DECL Gtk::EventControllerFocus new_ () noexcept;

// gboolean gtk_event_controller_focus_contains_focus (GtkEventControllerFocus* self /*none*/);
// gboolean gtk_event_controller_focus_contains_focus (::GtkEventControllerFocus* self /*none*/);
GI_INLINE_DECL bool contains_focus () noexcept;

// gboolean gtk_event_controller_focus_is_focus (GtkEventControllerFocus* self /*none*/);
// gboolean gtk_event_controller_focus_is_focus (::GtkEventControllerFocus* self /*none*/);
GI_INLINE_DECL bool is_focus () noexcept;

gi::property_proxy<bool, base::EventControllerFocusBase> property_contains_focus()
{ return gi::property_proxy<bool, base::EventControllerFocusBase> (*this, "contains-focus"); }
const gi::property_proxy<bool, base::EventControllerFocusBase> property_contains_focus() const
{ return gi::property_proxy<bool, base::EventControllerFocusBase> (*this, "contains-focus"); }

gi::property_proxy<bool, base::EventControllerFocusBase> property_is_focus()
{ return gi::property_proxy<bool, base::EventControllerFocusBase> (*this, "is-focus"); }
const gi::property_proxy<bool, base::EventControllerFocusBase> property_is_focus() const
{ return gi::property_proxy<bool, base::EventControllerFocusBase> (*this, "is-focus"); }

// (signal) void enter ();
// (signal) void enter ();
gi::signal_proxy<void(Gtk::EventControllerFocus)> signal_enter()
{ return gi::signal_proxy<void(Gtk::EventControllerFocus)> (*this, "enter"); }

// (signal) void leave ();
// (signal) void leave ();
gi::signal_proxy<void(Gtk::EventControllerFocus)> signal_leave()
{ return gi::signal_proxy<void(Gtk::EventControllerFocus)> (*this, "leave"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerfocus_extra_def.hpp>)
#include <gtk/eventcontrollerfocus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerfocus_extra.hpp>)
#include <gtk/eventcontrollerfocus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventControllerFocus : public GI_GTK_EVENTCONTROLLERFOCUS_BASE
{ typedef GI_GTK_EVENTCONTROLLERFOCUS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventControllerFocus>
{ typedef Gtk::EventControllerFocus type; }; 

} // namespace repository

} // namespace gi

#endif
