// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREDRAG_IMPL_HPP_
#define _GI_GTK_GESTUREDRAG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* /*full*/ gtk_gesture_drag_new ();
// ::GtkGestureDrag* /*full*/ gtk_gesture_drag_new ();
Gtk::GestureDrag base::GestureDragBase::new_ () noexcept
{
  typedef ::GtkGestureDrag* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_gesture_drag_get_offset (GtkGestureDrag* gesture /*none*/, double* x, double* y);
// gboolean gtk_gesture_drag_get_offset (::GtkGestureDrag* gesture /*none*/, gdouble* x, gdouble* y);
bool base::GestureDragBase::get_offset (gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_drag_get_offset;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureDragBase::get_offset () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_drag_get_offset;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_gesture_drag_get_start_point (GtkGestureDrag* gesture /*none*/, double* x, double* y);
// gboolean gtk_gesture_drag_get_start_point (::GtkGestureDrag* gesture /*none*/, gdouble* x, gdouble* y);
bool base::GestureDragBase::get_start_point (gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_drag_get_start_point;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureDragBase::get_start_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_drag_get_start_point;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra_def_impl.hpp>)
#include <gtk/gesturedrag_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra_impl.hpp>)
#include <gtk/gesturedrag_extra_impl.hpp>
#endif
#endif

#endif
