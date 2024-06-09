// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREROTATE_HPP_
#define _GI_GTK_GESTUREROTATE_HPP_

#include "gesture.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GestureRotate;

namespace base {


#define GI_GTK_GESTUREROTATE_BASE base::GestureRotateBase
class GestureRotateBase : public Gtk::Gesture
{
typedef Gtk::Gesture super_type;
public:
typedef ::GtkGestureRotate BaseObjectType;

GestureRotateBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_rotate_get_type(); } 

// GtkGesture* /*full*/ gtk_gesture_rotate_new ();
// ::GtkGestureRotate* /*full*/ gtk_gesture_rotate_new ();
static GI_INLINE_DECL Gtk::GestureRotate new_ () noexcept;

// double gtk_gesture_rotate_get_angle_delta (GtkGestureRotate* gesture /*none*/);
// gdouble gtk_gesture_rotate_get_angle_delta (::GtkGestureRotate* gesture /*none*/);
GI_INLINE_DECL gdouble get_angle_delta () noexcept;

// (signal) void angle-changed (gdouble angle, gdouble angle_delta);
// (signal) void angle-changed (gdouble angle, gdouble angle_delta);
gi::signal_proxy<void(Gtk::GestureRotate, gdouble angle, gdouble angle_delta)> signal_angle_changed()
{ return gi::signal_proxy<void(Gtk::GestureRotate, gdouble angle, gdouble angle_delta)> (*this, "angle-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturerotate_extra_def.hpp>)
#include <gtk/gesturerotate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturerotate_extra.hpp>)
#include <gtk/gesturerotate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureRotate : public GI_GTK_GESTUREROTATE_BASE
{ typedef GI_GTK_GESTUREROTATE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureRotate>
{ typedef Gtk::GestureRotate type; }; 

} // namespace repository

} // namespace gi

#endif
