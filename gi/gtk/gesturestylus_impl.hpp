// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESTYLUS_IMPL_HPP_
#define _GI_GTK_GESTURESTYLUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_stylus_new ();
// ::GtkGestureStylus* /*full*/ gtk_gesture_stylus_new ();
Gtk::GestureStylus base::GestureStylusBase::new_ () noexcept
{
  typedef ::GtkGestureStylus* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_stylus_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_gesture_stylus_get_axes (GtkGestureStylus* gesture /*none*/,  axes /*none*/,  values /*full,out*/);
// gboolean gtk_gesture_stylus_get_axes (::GtkGestureStylus* gesture /*none*/, * axes /*none*/, ** values /*full,out*/);
// SKIP; inconsistent array info, inconsistent array info

// gboolean gtk_gesture_stylus_get_axis (GtkGestureStylus* gesture /*none*/, GdkAxisUse axis, double* value);
// gboolean gtk_gesture_stylus_get_axis (::GtkGestureStylus* gesture /*none*/, ::GdkAxisUse axis, gdouble* value);
bool base::GestureStylusBase::get_axis (Gdk::AxisUse axis, gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_stylus_get_axis;
  gdouble value_o {};
  auto axis_to_c = gi::unwrap (axis);
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()), (::GdkAxisUse) (axis_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::GestureStylusBase::get_axis (Gdk::AxisUse axis) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_stylus_get_axis;
  gdouble value_o {};
  auto axis_to_c = gi::unwrap (axis);
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()), (::GdkAxisUse) (axis_to_c), (gdouble*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_gesture_stylus_get_backlog (GtkGestureStylus* gesture /*none*/, GdkTimeCoord** backlog /*full,out*/, guint* n_elems);
// gboolean gtk_gesture_stylus_get_backlog (::GtkGestureStylus* gesture /*none*/, ::GdkTimeCoord*** backlog /*full,out*/, guint* n_elems);
// SKIP; backlog out boxed array not supported (depth 2)

// GdkDeviceTool* /*none,nullable*/ gtk_gesture_stylus_get_device_tool (GtkGestureStylus* gesture /*none*/);
// ::GdkDeviceTool* /*none,nullable*/ gtk_gesture_stylus_get_device_tool (::GtkGestureStylus* gesture /*none*/);
Gdk::DeviceTool base::GestureStylusBase::get_device_tool () noexcept
{
  typedef ::GdkDeviceTool* (*call_wrap_t) (::GtkGestureStylus* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_stylus_get_device_tool;
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_gesture_stylus_get_stylus_only (GtkGestureStylus* gesture /*none*/);
// gboolean gtk_gesture_stylus_get_stylus_only (::GtkGestureStylus* gesture /*none*/);
bool base::GestureStylusBase::get_stylus_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureStylus* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_stylus_get_stylus_only;
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()));
  return _temp_ret;
}

// void gtk_gesture_stylus_set_stylus_only (GtkGestureStylus* gesture /*none*/, gboolean stylus_only);
// void gtk_gesture_stylus_set_stylus_only (::GtkGestureStylus* gesture /*none*/, gboolean stylus_only);
void base::GestureStylusBase::set_stylus_only (gboolean stylus_only) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureStylus* gesture, gboolean stylus_only);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_stylus_set_stylus_only;
  auto stylus_only_to_c = stylus_only;
  call_wrap_v ((::GtkGestureStylus*) (gobj_()), (gboolean) (stylus_only_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_def_impl.hpp>)
#include <gtk/gesturestylus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_impl.hpp>)
#include <gtk/gesturestylus_extra_impl.hpp>
#endif
#endif

#endif
