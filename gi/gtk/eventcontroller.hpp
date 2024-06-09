// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLER_HPP_
#define _GI_GTK_EVENTCONTROLLER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class EventController;

namespace base {


#define GI_GTK_EVENTCONTROLLER_BASE base::EventControllerBase
class EventControllerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEventController BaseObjectType;

EventControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_get_type(); } 

// GdkEvent* /*none,nullable*/ gtk_event_controller_get_current_event (GtkEventController* controller /*none*/);
//  /*none,nullable*/ gtk_event_controller_get_current_event (::GtkEventController* controller /*none*/);
// SKIP;  type  not supported

// GdkDevice* /*none,nullable*/ gtk_event_controller_get_current_event_device (GtkEventController* controller /*none*/);
// ::GdkDevice* /*none,nullable*/ gtk_event_controller_get_current_event_device (::GtkEventController* controller /*none*/);
GI_INLINE_DECL Gdk::Device get_current_event_device () noexcept;

// GdkModifierType gtk_event_controller_get_current_event_state (GtkEventController* controller /*none*/);
// ::GdkModifierType gtk_event_controller_get_current_event_state (::GtkEventController* controller /*none*/);
GI_INLINE_DECL Gdk::ModifierType get_current_event_state () noexcept;

// guint32 gtk_event_controller_get_current_event_time (GtkEventController* controller /*none*/);
// guint32 gtk_event_controller_get_current_event_time (::GtkEventController* controller /*none*/);
GI_INLINE_DECL guint32 get_current_event_time () noexcept;

// const char* /*none,nullable*/ gtk_event_controller_get_name (GtkEventController* controller /*none*/);
// const char* /*none,nullable*/ gtk_event_controller_get_name (::GtkEventController* controller /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// GtkPropagationLimit gtk_event_controller_get_propagation_limit (GtkEventController* controller /*none*/);
// ::GtkPropagationLimit gtk_event_controller_get_propagation_limit (::GtkEventController* controller /*none*/);
GI_INLINE_DECL Gtk::PropagationLimit get_propagation_limit () noexcept;

// GtkPropagationPhase gtk_event_controller_get_propagation_phase (GtkEventController* controller /*none*/);
// ::GtkPropagationPhase gtk_event_controller_get_propagation_phase (::GtkEventController* controller /*none*/);
GI_INLINE_DECL Gtk::PropagationPhase get_propagation_phase () noexcept;

// GtkWidget* /*none*/ gtk_event_controller_get_widget (GtkEventController* controller /*none*/);
// ::GtkWidget* /*none*/ gtk_event_controller_get_widget (::GtkEventController* controller /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_event_controller_reset (GtkEventController* controller /*none*/);
// void gtk_event_controller_reset (::GtkEventController* controller /*none*/);
GI_INLINE_DECL void reset () noexcept;

// void gtk_event_controller_set_name (GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
// void gtk_event_controller_set_name (::GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void gtk_event_controller_set_propagation_limit (GtkEventController* controller /*none*/, GtkPropagationLimit limit);
// void gtk_event_controller_set_propagation_limit (::GtkEventController* controller /*none*/, ::GtkPropagationLimit limit);
GI_INLINE_DECL void set_propagation_limit (Gtk::PropagationLimit limit) noexcept;

// void gtk_event_controller_set_propagation_phase (GtkEventController* controller /*none*/, GtkPropagationPhase phase);
// void gtk_event_controller_set_propagation_phase (::GtkEventController* controller /*none*/, ::GtkPropagationPhase phase);
GI_INLINE_DECL void set_propagation_phase (Gtk::PropagationPhase phase) noexcept;

// void gtk_event_controller_set_static_name (GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
// void gtk_event_controller_set_static_name (::GtkEventController* controller /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_static_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_static_name () noexcept;

gi::property_proxy<gi::cstring, base::EventControllerBase> property_name()
{ return gi::property_proxy<gi::cstring, base::EventControllerBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::EventControllerBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::EventControllerBase> (*this, "name"); }

gi::property_proxy<Gtk::PropagationLimit, base::EventControllerBase> property_propagation_limit()
{ return gi::property_proxy<Gtk::PropagationLimit, base::EventControllerBase> (*this, "propagation-limit"); }
const gi::property_proxy<Gtk::PropagationLimit, base::EventControllerBase> property_propagation_limit() const
{ return gi::property_proxy<Gtk::PropagationLimit, base::EventControllerBase> (*this, "propagation-limit"); }

gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> property_propagation_phase()
{ return gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> (*this, "propagation-phase"); }
const gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> property_propagation_phase() const
{ return gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> (*this, "propagation-phase"); }

gi::property_proxy<Gtk::Widget, base::EventControllerBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::EventControllerBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::EventControllerBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::EventControllerBase> (*this, "widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_def.hpp>)
#include <gtk/eventcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra.hpp>)
#include <gtk/eventcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventController : public GI_GTK_EVENTCONTROLLER_BASE
{ typedef GI_GTK_EVENTCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventController>
{ typedef Gtk::EventController type; }; 

} // namespace repository

} // namespace gi

#endif
