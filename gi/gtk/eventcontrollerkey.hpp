// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERKEY_HPP_
#define _GI_GTK_EVENTCONTROLLERKEY_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class IMContext;
class Widget;

class EventControllerKey;

namespace base {


#define GI_GTK_EVENTCONTROLLERKEY_BASE base::EventControllerKeyBase
class EventControllerKeyBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkEventControllerKey BaseObjectType;

EventControllerKeyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_key_get_type(); } 

// GtkEventController* /*full*/ gtk_event_controller_key_new ();
// ::GtkEventControllerKey* /*full*/ gtk_event_controller_key_new ();
static GI_INLINE_DECL Gtk::EventControllerKey new_ () noexcept;

// gboolean gtk_event_controller_key_forward (GtkEventControllerKey* controller /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_event_controller_key_forward (::GtkEventControllerKey* controller /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool forward (Gtk::Widget widget) noexcept;

// guint gtk_event_controller_key_get_group (GtkEventControllerKey* controller /*none*/);
// guint gtk_event_controller_key_get_group (::GtkEventControllerKey* controller /*none*/);
GI_INLINE_DECL guint get_group () noexcept;

// GtkIMContext* /*none,nullable*/ gtk_event_controller_key_get_im_context (GtkEventControllerKey* controller /*none*/);
// ::GtkIMContext* /*none,nullable*/ gtk_event_controller_key_get_im_context (::GtkEventControllerKey* controller /*none*/);
GI_INLINE_DECL Gtk::IMContext get_im_context () noexcept;

// void gtk_event_controller_key_set_im_context (GtkEventControllerKey* controller /*none*/, GtkIMContext* im_context /*none,nullable*/);
// void gtk_event_controller_key_set_im_context (::GtkEventControllerKey* controller /*none*/, ::GtkIMContext* im_context /*none,nullable*/);
GI_INLINE_DECL void set_im_context (Gtk::IMContext im_context) noexcept;
GI_INLINE_DECL void set_im_context () noexcept;

// (signal) void im-update ();
// (signal) void im-update ();
gi::signal_proxy<void(Gtk::EventControllerKey)> signal_im_update()
{ return gi::signal_proxy<void(Gtk::EventControllerKey)> (*this, "im-update"); }

// (signal) gboolean key-pressed (guint keyval, guint keycode,  state);
// (signal) gboolean key-pressed (guint keyval, guint keycode, ::GdkModifierType state);
gi::signal_proxy<bool(Gtk::EventControllerKey, guint keyval, guint keycode, Gdk::ModifierType state)> signal_key_pressed()
{ return gi::signal_proxy<bool(Gtk::EventControllerKey, guint keyval, guint keycode, Gdk::ModifierType state)> (*this, "key-pressed"); }

// (signal) void key-released (guint keyval, guint keycode,  state);
// (signal) void key-released (guint keyval, guint keycode, ::GdkModifierType state);
gi::signal_proxy<void(Gtk::EventControllerKey, guint keyval, guint keycode, Gdk::ModifierType state)> signal_key_released()
{ return gi::signal_proxy<void(Gtk::EventControllerKey, guint keyval, guint keycode, Gdk::ModifierType state)> (*this, "key-released"); }

// (signal) gboolean modifiers ( state);
// (signal) gboolean modifiers (::GdkModifierType state);
gi::signal_proxy<bool(Gtk::EventControllerKey, Gdk::ModifierType state)> signal_modifiers()
{ return gi::signal_proxy<bool(Gtk::EventControllerKey, Gdk::ModifierType state)> (*this, "modifiers"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra_def.hpp>)
#include <gtk/eventcontrollerkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra.hpp>)
#include <gtk/eventcontrollerkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventControllerKey : public GI_GTK_EVENTCONTROLLERKEY_BASE
{ typedef GI_GTK_EVENTCONTROLLERKEY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventControllerKey>
{ typedef Gtk::EventControllerKey type; }; 

} // namespace repository

} // namespace gi

#endif
