// AUTO-GENERATED

#ifndef _GI_GTK_SCALE_IMPL_HPP_
#define _GI_GTK_SCALE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_scale_new (GtkOrientation orientation, GtkAdjustment* adjustment /*none,nullable*/);
// ::GtkScale* /*none*/ gtk_scale_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment /*none,nullable*/);
Gtk::Scale base::ScaleBase::new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Scale base::ScaleBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new;
  auto adjustment_to_c = nullptr;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_scale_new_with_range (GtkOrientation orientation, double min, double max, double step);
// ::GtkScale* /*none*/ gtk_scale_new_with_range (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
Gtk::Scale base::ScaleBase::new_with_range (Gtk::Orientation orientation, gdouble min, gdouble max, gdouble step) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new_with_range;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_scale_add_mark (GtkScale* scale /*none*/, double value, GtkPositionType position, const char* markup /*none,nullable*/);
// void gtk_scale_add_mark (::GtkScale* scale /*none*/, gdouble value, ::GtkPositionType position, const char* markup /*none,nullable*/);
void base::ScaleBase::add_mark (gdouble value, Gtk::PositionType position, const gi::cstring_v markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_add_mark;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  auto position_to_c = gi::unwrap (position);
  auto value_to_c = value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gdouble) (value_to_c), (::GtkPositionType) (position_to_c), (const char*) (markup_to_c));
}
void base::ScaleBase::add_mark (gdouble value, Gtk::PositionType position) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_add_mark;
  auto markup_to_c = nullptr;
  auto position_to_c = gi::unwrap (position);
  auto value_to_c = value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gdouble) (value_to_c), (::GtkPositionType) (position_to_c), (const char*) (markup_to_c));
}

// void gtk_scale_clear_marks (GtkScale* scale /*none*/);
// void gtk_scale_clear_marks (::GtkScale* scale /*none*/);
void base::ScaleBase::clear_marks () noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_clear_marks;
  call_wrap_v ((::GtkScale*) (gobj_()));
}

// int gtk_scale_get_digits (GtkScale* scale /*none*/);
// gint gtk_scale_get_digits (::GtkScale* scale /*none*/);
gint base::ScaleBase::get_digits () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_digits;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scale_get_draw_value (GtkScale* scale /*none*/);
// gboolean gtk_scale_get_draw_value (::GtkScale* scale /*none*/);
bool base::ScaleBase::get_draw_value () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_draw_value;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scale_get_has_origin (GtkScale* scale /*none*/);
// gboolean gtk_scale_get_has_origin (::GtkScale* scale /*none*/);
bool base::ScaleBase::get_has_origin () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_has_origin;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// PangoLayout* /*none,nullable*/ gtk_scale_get_layout (GtkScale* scale /*none*/);
// ::PangoLayout* /*none,nullable*/ gtk_scale_get_layout (::GtkScale* scale /*none*/);
Pango::Layout base::ScaleBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_scale_get_layout_offsets (GtkScale* scale /*none*/, int* x, int* y);
// void gtk_scale_get_layout_offsets (::GtkScale* scale /*none*/, gint* x, gint* y);
void base::ScaleBase::get_layout_offsets (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkScale*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::ScaleBase::get_layout_offsets () noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkScale*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  auto &&tmp_return_1 = x_o;
  auto &&tmp_return_2 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkPositionType gtk_scale_get_value_pos (GtkScale* scale /*none*/);
// ::GtkPositionType gtk_scale_get_value_pos (::GtkScale* scale /*none*/);
Gtk::PositionType base::ScaleBase::get_value_pos () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_get_value_pos;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scale_set_digits (GtkScale* scale /*none*/, int digits);
// void gtk_scale_set_digits (::GtkScale* scale /*none*/, gint digits);
void base::ScaleBase::set_digits (gint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_set_digits;
  auto digits_to_c = digits;
  call_wrap_v ((::GtkScale*) (gobj_()), (gint) (digits_to_c));
}

// void gtk_scale_set_draw_value (GtkScale* scale /*none*/, gboolean draw_value);
// void gtk_scale_set_draw_value (::GtkScale* scale /*none*/, gboolean draw_value);
void base::ScaleBase::set_draw_value (gboolean draw_value) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gboolean draw_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_set_draw_value;
  auto draw_value_to_c = draw_value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gboolean) (draw_value_to_c));
}

// void gtk_scale_set_format_value_func (GtkScale* scale /*none*/, GtkScaleFormatValueFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy_notify /*none,nullable*/);
// void gtk_scale_set_format_value_func (::GtkScale* scale /*none*/, Gtk::ScaleFormatValueFunc::cfunction_type func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none,nullable*/);
void base::ScaleBase::set_format_value_func (Gtk::ScaleFormatValueFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, Gtk::ScaleFormatValueFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_set_format_value_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkScale*) (gobj_()), (Gtk::ScaleFormatValueFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_scale_set_has_origin (GtkScale* scale /*none*/, gboolean has_origin);
// void gtk_scale_set_has_origin (::GtkScale* scale /*none*/, gboolean has_origin);
void base::ScaleBase::set_has_origin (gboolean has_origin) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gboolean has_origin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_set_has_origin;
  auto has_origin_to_c = has_origin;
  call_wrap_v ((::GtkScale*) (gobj_()), (gboolean) (has_origin_to_c));
}

// void gtk_scale_set_value_pos (GtkScale* scale /*none*/, GtkPositionType pos);
// void gtk_scale_set_value_pos (::GtkScale* scale /*none*/, ::GtkPositionType pos);
void base::ScaleBase::set_value_pos (Gtk::PositionType pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, ::GtkPositionType pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_set_value_pos;
  auto pos_to_c = gi::unwrap (pos);
  call_wrap_v ((::GtkScale*) (gobj_()), (::GtkPositionType) (pos_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_def_impl.hpp>)
#include <gtk/scale_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_impl.hpp>)
#include <gtk/scale_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScaleClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkScaleClass *methods = (::GtkScaleClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_layout_offsets) methods->get_layout_offsets = (decltype (methods->get_layout_offsets)) detail::method_wrapper<self, void (*) (gint & x, gint & y), gi::transfer_full_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_layout_offsets_>;
}

// void Scale::get_layout_offsets (GtkScale* scale /*none*/, int* x, int* y);
// void Scale::get_layout_offsets (::GtkScale* scale /*none*/, gint* x, gint* y);
void ScaleClass::get_layout_offsets_ (gint & x, gint & y) noexcept
{
  if (!get_struct_()->get_layout_offsets) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkScale* scale, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkScale*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  y = y_o;
  x = x_o;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
