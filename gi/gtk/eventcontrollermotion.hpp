// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERMOTION_HPP_
#define _GI_GTK_EVENTCONTROLLERMOTION_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EventControllerMotion;

namespace base {


#define GI_GTK_EVENTCONTROLLERMOTION_BASE base::EventControllerMotionBase
class EventControllerMotionBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkEventControllerMotion BaseObjectType;

EventControllerMotionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_motion_get_type(); } 

// GtkEventController* /*full*/ gtk_event_controller_motion_new ();
// ::GtkEventControllerMotion* /*full*/ gtk_event_controller_motion_new ();
static GI_INLINE_DECL Gtk::EventControllerMotion new_ () noexcept;

// gboolean gtk_event_controller_motion_contains_pointer (GtkEventControllerMotion* self /*none*/);
// gboolean gtk_event_controller_motion_contains_pointer (::GtkEventControllerMotion* self /*none*/);
GI_INLINE_DECL bool contains_pointer () noexcept;

// gboolean gtk_event_controller_motion_is_pointer (GtkEventControllerMotion* self /*none*/);
// gboolean gtk_event_controller_motion_is_pointer (::GtkEventControllerMotion* self /*none*/);
GI_INLINE_DECL bool is_pointer () noexcept;

gi::property_proxy<bool, base::EventControllerMotionBase> property_contains_pointer()
{ return gi::property_proxy<bool, base::EventControllerMotionBase> (*this, "contains-pointer"); }
const gi::property_proxy<bool, base::EventControllerMotionBase> property_contains_pointer() const
{ return gi::property_proxy<bool, base::EventControllerMotionBase> (*this, "contains-pointer"); }

gi::property_proxy<bool, base::EventControllerMotionBase> property_is_pointer()
{ return gi::property_proxy<bool, base::EventControllerMotionBase> (*this, "is-pointer"); }
const gi::property_proxy<bool, base::EventControllerMotionBase> property_is_pointer() const
{ return gi::property_proxy<bool, base::EventControllerMotionBase> (*this, "is-pointer"); }

// (signal) void enter (gdouble x, gdouble y);
// (signal) void enter (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::EventControllerMotion, gdouble x, gdouble y)> signal_enter()
{ return gi::signal_proxy<void(Gtk::EventControllerMotion, gdouble x, gdouble y)> (*this, "enter"); }

// (signal) void leave ();
// (signal) void leave ();
gi::signal_proxy<void(Gtk::EventControllerMotion)> signal_leave()
{ return gi::signal_proxy<void(Gtk::EventControllerMotion)> (*this, "leave"); }

// (signal) void motion (gdouble x, gdouble y);
// (signal) void motion (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::EventControllerMotion, gdouble x, gdouble y)> signal_motion()
{ return gi::signal_proxy<void(Gtk::EventControllerMotion, gdouble x, gdouble y)> (*this, "motion"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra_def.hpp>)
#include <gtk/eventcontrollermotion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra.hpp>)
#include <gtk/eventcontrollermotion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventControllerMotion : public GI_GTK_EVENTCONTROLLERMOTION_BASE
{ typedef GI_GTK_EVENTCONTROLLERMOTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventControllerMotion>
{ typedef Gtk::EventControllerMotion type; }; 

} // namespace repository

} // namespace gi

#endif
