// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESTYLUS_HPP_
#define _GI_GTK_GESTURESTYLUS_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GestureStylus;

namespace base {


#define GI_GTK_GESTURESTYLUS_BASE base::GestureStylusBase
class GestureStylusBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureStylus BaseObjectType;

GestureStylusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_stylus_get_type(); } 

// GtkGesture* /*full*/ gtk_gesture_stylus_new ();
// ::GtkGestureStylus* /*full*/ gtk_gesture_stylus_new ();
static GI_INLINE_DECL Gtk::GestureStylus new_ () noexcept;

// gboolean gtk_gesture_stylus_get_axes (GtkGestureStylus* gesture /*none*/,  axes /*none*/,  values /*full,out*/);
// gboolean gtk_gesture_stylus_get_axes (::GtkGestureStylus* gesture /*none*/, * axes /*none*/, ** values /*full,out*/);
// SKIP; inconsistent array info, inconsistent array info

// gboolean gtk_gesture_stylus_get_axis (GtkGestureStylus* gesture /*none*/, GdkAxisUse axis, double* value);
// gboolean gtk_gesture_stylus_get_axis (::GtkGestureStylus* gesture /*none*/, ::GdkAxisUse axis, gdouble* value);
GI_INLINE_DECL bool get_axis (Gdk::AxisUse axis, gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_axis (Gdk::AxisUse axis) noexcept;

// gboolean gtk_gesture_stylus_get_backlog (GtkGestureStylus* gesture /*none*/, GdkTimeCoord** backlog /*full,out*/, guint* n_elems);
// gboolean gtk_gesture_stylus_get_backlog (::GtkGestureStylus* gesture /*none*/, ::GdkTimeCoord*** backlog /*full,out*/, guint* n_elems);
// SKIP; backlog out boxed array not supported (depth 2)

// GdkDeviceTool* /*none,nullable*/ gtk_gesture_stylus_get_device_tool (GtkGestureStylus* gesture /*none*/);
// ::GdkDeviceTool* /*none,nullable*/ gtk_gesture_stylus_get_device_tool (::GtkGestureStylus* gesture /*none*/);
GI_INLINE_DECL Gdk::DeviceTool get_device_tool () noexcept;

// gboolean gtk_gesture_stylus_get_stylus_only (GtkGestureStylus* gesture /*none*/);
// gboolean gtk_gesture_stylus_get_stylus_only (::GtkGestureStylus* gesture /*none*/);
GI_INLINE_DECL bool get_stylus_only () noexcept;

// void gtk_gesture_stylus_set_stylus_only (GtkGestureStylus* gesture /*none*/, gboolean stylus_only);
// void gtk_gesture_stylus_set_stylus_only (::GtkGestureStylus* gesture /*none*/, gboolean stylus_only);
GI_INLINE_DECL void set_stylus_only (gboolean stylus_only) noexcept;

gi::property_proxy<bool, base::GestureStylusBase> property_stylus_only()
{ return gi::property_proxy<bool, base::GestureStylusBase> (*this, "stylus-only"); }
const gi::property_proxy<bool, base::GestureStylusBase> property_stylus_only() const
{ return gi::property_proxy<bool, base::GestureStylusBase> (*this, "stylus-only"); }

// (signal) void down (gdouble x, gdouble y);
// (signal) void down (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> signal_down()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> (*this, "down"); }

// (signal) void motion (gdouble x, gdouble y);
// (signal) void motion (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> signal_motion()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> (*this, "motion"); }

// (signal) void proximity (gdouble x, gdouble y);
// (signal) void proximity (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> signal_proximity()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> (*this, "proximity"); }

// (signal) void up (gdouble x, gdouble y);
// (signal) void up (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> signal_up()
{ return gi::signal_proxy<void(Gtk::GestureStylus, gdouble x, gdouble y)> (*this, "up"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_def.hpp>)
#include <gtk/gesturestylus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra.hpp>)
#include <gtk/gesturestylus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureStylus : public GI_GTK_GESTURESTYLUS_BASE
{ typedef GI_GTK_GESTURESTYLUS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureStylus>
{ typedef Gtk::GestureStylus type; }; 

} // namespace repository

} // namespace gi

#endif
