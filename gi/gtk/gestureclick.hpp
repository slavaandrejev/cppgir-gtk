// AUTO-GENERATED

#ifndef _GI_GTK_GESTURECLICK_HPP_
#define _GI_GTK_GESTURECLICK_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GestureClick;

namespace base {


#define GI_GTK_GESTURECLICK_BASE base::GestureClickBase
class GestureClickBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureClick BaseObjectType;

GestureClickBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_click_get_type(); } 

// GtkGesture* /*full*/ gtk_gesture_click_new ();
// ::GtkGestureClick* /*full*/ gtk_gesture_click_new ();
static GI_INLINE_DECL Gtk::GestureClick new_ () noexcept;

// (signal) void pressed (gint n_press, gdouble x, gdouble y);
// (signal) void pressed (gint n_press, gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureClick, gint n_press, gdouble x, gdouble y)> signal_pressed()
{ return gi::signal_proxy<void(Gtk::GestureClick, gint n_press, gdouble x, gdouble y)> (*this, "pressed"); }

// (signal) void released (gint n_press, gdouble x, gdouble y);
// (signal) void released (gint n_press, gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureClick, gint n_press, gdouble x, gdouble y)> signal_released()
{ return gi::signal_proxy<void(Gtk::GestureClick, gint n_press, gdouble x, gdouble y)> (*this, "released"); }

// (signal) void stopped ();
// (signal) void stopped ();
gi::signal_proxy<void(Gtk::GestureClick)> signal_stopped()
{ return gi::signal_proxy<void(Gtk::GestureClick)> (*this, "stopped"); }

// (signal) void unpaired-release (gdouble x, gdouble y, guint button,  sequence /*none,nullable*/);
// (signal) void unpaired-release (gdouble x, gdouble y, guint button, ::GdkEventSequence* sequence /*none,nullable*/);
gi::signal_proxy<void(Gtk::GestureClick, gdouble x, gdouble y, guint button, Gdk::EventSequence_Ref sequence)> signal_unpaired_release()
{ return gi::signal_proxy<void(Gtk::GestureClick, gdouble x, gdouble y, guint button, Gdk::EventSequence_Ref sequence)> (*this, "unpaired-release"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gestureclick_extra_def.hpp>)
#include <gtk/gestureclick_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gestureclick_extra.hpp>)
#include <gtk/gestureclick_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureClick : public GI_GTK_GESTURECLICK_BASE
{ typedef GI_GTK_GESTURECLICK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureClick>
{ typedef Gtk::GestureClick type; }; 

} // namespace repository

} // namespace gi

#endif
