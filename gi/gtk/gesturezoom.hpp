// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREZOOM_HPP_
#define _GI_GTK_GESTUREZOOM_HPP_

#include "gesture.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GestureZoom;

namespace base {


#define GI_GTK_GESTUREZOOM_BASE base::GestureZoomBase
class GestureZoomBase : public Gtk::Gesture
{
typedef Gtk::Gesture super_type;
public:
typedef ::GtkGestureZoom BaseObjectType;

GestureZoomBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_zoom_get_type(); } 

// GtkGesture* /*full*/ gtk_gesture_zoom_new ();
// ::GtkGestureZoom* /*full*/ gtk_gesture_zoom_new ();
static GI_INLINE_DECL Gtk::GestureZoom new_ () noexcept;

// double gtk_gesture_zoom_get_scale_delta (GtkGestureZoom* gesture /*none*/);
// gdouble gtk_gesture_zoom_get_scale_delta (::GtkGestureZoom* gesture /*none*/);
GI_INLINE_DECL gdouble get_scale_delta () noexcept;

// (signal) void scale-changed (gdouble scale);
// (signal) void scale-changed (gdouble scale);
gi::signal_proxy<void(Gtk::GestureZoom, gdouble scale)> signal_scale_changed()
{ return gi::signal_proxy<void(Gtk::GestureZoom, gdouble scale)> (*this, "scale-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturezoom_extra_def.hpp>)
#include <gtk/gesturezoom_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturezoom_extra.hpp>)
#include <gtk/gesturezoom_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureZoom : public GI_GTK_GESTUREZOOM_BASE
{ typedef GI_GTK_GESTUREZOOM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureZoom>
{ typedef Gtk::GestureZoom type; }; 

} // namespace repository

} // namespace gi

#endif
