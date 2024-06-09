// AUTO-GENERATED

#ifndef _GI_GTK_GESTURE_IMPL_HPP_
#define _GI_GTK_GESTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_gesture_get_bounding_box (GtkGesture* gesture /*none*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_gesture_get_bounding_box (::GtkGesture* gesture /*none*/, ::GdkRectangle* rect /*none,out,ca*/);
bool base::GestureBase::get_bounding_box (Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_bounding_box;
  detail::allocate(rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(rect).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) (rect).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::GestureBase::get_bounding_box () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_bounding_box;
  Gdk::Rectangle rect_c;
  auto rect = &rect_c;
  detail::allocate(*rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*rect).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkRectangle*) (rect ? (::GdkRectangle*) (*rect).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_gesture_get_bounding_box_center (GtkGesture* gesture /*none*/, double* x, double* y);
// gboolean gtk_gesture_get_bounding_box_center (::GtkGesture* gesture /*none*/, gdouble* x, gdouble* y);
bool base::GestureBase::get_bounding_box_center (gdouble & x, gdouble & y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_bounding_box_center;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_bounding_box_center () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_bounding_box_center;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GdkDevice* /*none,nullable*/ gtk_gesture_get_device (GtkGesture* gesture /*none*/);
// ::GdkDevice* /*none,nullable*/ gtk_gesture_get_device (::GtkGesture* gesture /*none*/);
Gdk::Device base::GestureBase::get_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_device;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*container*/ gtk_gesture_get_group (GtkGesture* gesture /*none*/);
// ::GList* /*container*/ gtk_gesture_get_group (::GtkGesture* gesture /*none*/);
gi::Collection<GList, ::GtkGesture*, gi::transfer_container_t> base::GestureBase::get_group () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_group;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkGesture*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// GdkEvent* /*none,nullable*/ gtk_gesture_get_last_event (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/);
//  /*none,nullable*/ gtk_gesture_get_last_event (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/);
// SKIP;  type  not supported

// GdkEventSequence* /*none,nullable*/ gtk_gesture_get_last_updated_sequence (GtkGesture* gesture /*none*/);
// ::GdkEventSequence* /*none,nullable*/ gtk_gesture_get_last_updated_sequence (::GtkGesture* gesture /*none*/);
Gdk::EventSequence_Ref base::GestureBase::get_last_updated_sequence () noexcept
{
  typedef ::GdkEventSequence* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_last_updated_sequence;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_gesture_get_point (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/, double* x, double* y);
// gboolean gtk_gesture_get_point (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/, gdouble* x, gdouble* y);
bool base::GestureBase::get_point (Gdk::EventSequence_Ref sequence, gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
bool base::GestureBase::get_point (gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_point (Gdk::EventSequence_Ref sequence) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GtkEventSequenceState gtk_gesture_get_sequence_state (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none*/);
// ::GtkEventSequenceState gtk_gesture_get_sequence_state (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none*/);
Gtk::EventSequenceState base::GestureBase::get_sequence_state (Gdk::EventSequence_Ref sequence) noexcept
{
  typedef ::GtkEventSequenceState (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_sequence_state;
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return gi::wrap (_temp_ret);
}

// GList* /*container*/ gtk_gesture_get_sequences (GtkGesture* gesture /*none*/);
// ::GList* /*container*/ gtk_gesture_get_sequences (::GtkGesture* gesture /*none*/);
gi::Collection<GList, ::GdkEventSequence*, gi::transfer_container_t> base::GestureBase::get_sequences () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_get_sequences;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GdkEventSequence*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_gesture_group (GtkGesture* group_gesture /*none*/, GtkGesture* gesture /*none*/);
// void gtk_gesture_group (::GtkGesture* group_gesture /*none*/, ::GtkGesture* gesture /*none*/);
void base::GestureBase::group (Gtk::Gesture gesture) noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* group_gesture, ::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_group;
  auto gesture_to_c = gi::unwrap (gesture, gi::transfer_none);
  call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkGesture*) (gesture_to_c));
}

// gboolean gtk_gesture_handles_sequence (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/);
// gboolean gtk_gesture_handles_sequence (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/);
bool base::GestureBase::handles_sequence (Gdk::EventSequence_Ref sequence) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_handles_sequence;
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return _temp_ret;
}
bool base::GestureBase::handles_sequence () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_handles_sequence;
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_is_active (GtkGesture* gesture /*none*/);
// gboolean gtk_gesture_is_active (::GtkGesture* gesture /*none*/);
bool base::GestureBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_is_active;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gesture_is_grouped_with (GtkGesture* gesture /*none*/, GtkGesture* other /*none*/);
// gboolean gtk_gesture_is_grouped_with (::GtkGesture* gesture /*none*/, ::GtkGesture* other /*none*/);
bool base::GestureBase::is_grouped_with (Gtk::Gesture other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GtkGesture* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_is_grouped_with;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkGesture*) (other_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_is_recognized (GtkGesture* gesture /*none*/);
// gboolean gtk_gesture_is_recognized (::GtkGesture* gesture /*none*/);
bool base::GestureBase::is_recognized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_is_recognized;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gesture_set_sequence_state (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none*/, GtkEventSequenceState state);
// gboolean gtk_gesture_set_sequence_state (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none*/, ::GtkEventSequenceState state);
bool base::GestureBase::set_sequence_state (Gdk::EventSequence_Ref sequence, Gtk::EventSequenceState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, ::GtkEventSequenceState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_set_sequence_state;
  auto state_to_c = gi::unwrap (state);
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (::GtkEventSequenceState) (state_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_set_state (GtkGesture* gesture /*none*/, GtkEventSequenceState state);
// gboolean gtk_gesture_set_state (::GtkGesture* gesture /*none*/, ::GtkEventSequenceState state);
bool base::GestureBase::set_state (Gtk::EventSequenceState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GtkEventSequenceState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_set_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkEventSequenceState) (state_to_c));
  return _temp_ret;
}

// void gtk_gesture_ungroup (GtkGesture* gesture /*none*/);
// void gtk_gesture_ungroup (::GtkGesture* gesture /*none*/);
void base::GestureBase::ungroup () noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gesture_ungroup;
  call_wrap_v ((::GtkGesture*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_def_impl.hpp>)
#include <gtk/gesture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_impl.hpp>)
#include <gtk/gesture_extra_impl.hpp>
#endif
#endif

#endif
