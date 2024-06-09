// AUTO-GENERATED

#ifndef _GI_GTK_RANGE_IMPL_HPP_
#define _GI_GTK_RANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AccessibleRange RangeBase::interface_ (gi::interface_tag<Gtk::AccessibleRange>)
{ return gi::wrap ((Gtk::AccessibleRange::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

RangeBase::operator Gtk::AccessibleRange ()
{ return interface_ (gi::interface_tag<Gtk::AccessibleRange>()); }

Gtk::Orientable RangeBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

RangeBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkAdjustment* /*none*/ gtk_range_get_adjustment (GtkRange* range /*none*/);
// ::GtkAdjustment* /*none*/ gtk_range_get_adjustment (::GtkRange* range /*none*/);
Gtk::Adjustment base::RangeBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_range_get_fill_level (GtkRange* range /*none*/);
// gdouble gtk_range_get_fill_level (::GtkRange* range /*none*/);
gdouble base::RangeBase::get_fill_level () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_flippable (GtkRange* range /*none*/);
// gboolean gtk_range_get_flippable (::GtkRange* range /*none*/);
bool base::RangeBase::get_flippable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_flippable;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_inverted (GtkRange* range /*none*/);
// gboolean gtk_range_get_inverted (::GtkRange* range /*none*/);
bool base::RangeBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_inverted;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// void gtk_range_get_range_rect (GtkRange* range /*none*/, GdkRectangle* range_rect /*none,out,ca*/);
// void gtk_range_get_range_rect (::GtkRange* range /*none*/, ::GdkRectangle* range_rect /*none,out,ca*/);
void base::RangeBase::get_range_rect (Gdk::Rectangle & range_rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GdkRectangle* range_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_range_rect;
  detail::allocate(range_rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(range_rect).gobj_()), "");
  call_wrap_v ((::GtkRange*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) (range_rect).gobj_()));
}
Gdk::Rectangle base::RangeBase::get_range_rect () noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GdkRectangle* range_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_range_rect;
  Gdk::Rectangle range_rect_c;
  auto range_rect = &range_rect_c;
  detail::allocate(*range_rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*range_rect).gobj_()), "");
  call_wrap_v ((::GtkRange*) (gobj_()), (::GdkRectangle*) (range_rect ? (::GdkRectangle*) (*range_rect).gobj_() : nullptr));
  return range_rect_c;
}

// gboolean gtk_range_get_restrict_to_fill_level (GtkRange* range /*none*/);
// gboolean gtk_range_get_restrict_to_fill_level (::GtkRange* range /*none*/);
bool base::RangeBase::get_restrict_to_fill_level () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_restrict_to_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// int gtk_range_get_round_digits (GtkRange* range /*none*/);
// gint gtk_range_get_round_digits (::GtkRange* range /*none*/);
gint base::RangeBase::get_round_digits () noexcept
{
  typedef gint (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_round_digits;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_show_fill_level (GtkRange* range /*none*/);
// gboolean gtk_range_get_show_fill_level (::GtkRange* range /*none*/);
bool base::RangeBase::get_show_fill_level () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_show_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// void gtk_range_get_slider_range (GtkRange* range /*none*/, int* slider_start, int* slider_end);
// void gtk_range_get_slider_range (::GtkRange* range /*none*/, gint* slider_start, gint* slider_end);
void base::RangeBase::get_slider_range (gint * slider_start, gint * slider_end) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint* slider_start, gint* slider_end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_slider_range;
  gint slider_end_o {};
  gint slider_start_o {};
  call_wrap_v ((::GtkRange*) (gobj_()), (gint*) (slider_start ? &slider_start_o : nullptr), (gint*) (slider_end ? &slider_end_o : nullptr));
  if (slider_end) *slider_end = slider_end_o;
  if (slider_start) *slider_start = slider_start_o;
}
std::tuple<gint, gint> base::RangeBase::get_slider_range () noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint* slider_start, gint* slider_end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_slider_range;
  gint slider_end_o {};
  gint slider_start_o {};
  call_wrap_v ((::GtkRange*) (gobj_()), (gint*) (&slider_start_o), (gint*) (&slider_end_o));
  auto &&tmp_return_1 = slider_start_o;
  auto &&tmp_return_2 = slider_end_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_range_get_slider_size_fixed (GtkRange* range /*none*/);
// gboolean gtk_range_get_slider_size_fixed (::GtkRange* range /*none*/);
bool base::RangeBase::get_slider_size_fixed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_slider_size_fixed;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// double gtk_range_get_value (GtkRange* range /*none*/);
// gdouble gtk_range_get_value (::GtkRange* range /*none*/);
gdouble base::RangeBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_get_value;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// void gtk_range_set_adjustment (GtkRange* range /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_range_set_adjustment (::GtkRange* range /*none*/, ::GtkAdjustment* adjustment /*none*/);
void base::RangeBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_range_set_fill_level (GtkRange* range /*none*/, double fill_level);
// void gtk_range_set_fill_level (::GtkRange* range /*none*/, gdouble fill_level);
void base::RangeBase::set_fill_level (gdouble fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_fill_level;
  auto fill_level_to_c = fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (fill_level_to_c));
}

// void gtk_range_set_flippable (GtkRange* range /*none*/, gboolean flippable);
// void gtk_range_set_flippable (::GtkRange* range /*none*/, gboolean flippable);
void base::RangeBase::set_flippable (gboolean flippable) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean flippable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_flippable;
  auto flippable_to_c = flippable;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (flippable_to_c));
}

// void gtk_range_set_increments (GtkRange* range /*none*/, double step, double page);
// void gtk_range_set_increments (::GtkRange* range /*none*/, gdouble step, gdouble page);
void base::RangeBase::set_increments (gdouble step, gdouble page) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble step, gdouble page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_increments;
  auto page_to_c = page;
  auto step_to_c = step;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (step_to_c), (gdouble) (page_to_c));
}

// void gtk_range_set_inverted (GtkRange* range /*none*/, gboolean setting);
// void gtk_range_set_inverted (::GtkRange* range /*none*/, gboolean setting);
void base::RangeBase::set_inverted (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_inverted;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_range_set_range (GtkRange* range /*none*/, double min, double max);
// void gtk_range_set_range (::GtkRange* range /*none*/, gdouble min, gdouble max);
void base::RangeBase::set_range (gdouble min, gdouble max) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble min, gdouble max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_range;
  auto max_to_c = max;
  auto min_to_c = min;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (min_to_c), (gdouble) (max_to_c));
}

// void gtk_range_set_restrict_to_fill_level (GtkRange* range /*none*/, gboolean restrict_to_fill_level);
// void gtk_range_set_restrict_to_fill_level (::GtkRange* range /*none*/, gboolean restrict_to_fill_level);
void base::RangeBase::set_restrict_to_fill_level (gboolean restrict_to_fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean restrict_to_fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_restrict_to_fill_level;
  auto restrict_to_fill_level_to_c = restrict_to_fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (restrict_to_fill_level_to_c));
}

// void gtk_range_set_round_digits (GtkRange* range /*none*/, int round_digits);
// void gtk_range_set_round_digits (::GtkRange* range /*none*/, gint round_digits);
void base::RangeBase::set_round_digits (gint round_digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint round_digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_round_digits;
  auto round_digits_to_c = round_digits;
  call_wrap_v ((::GtkRange*) (gobj_()), (gint) (round_digits_to_c));
}

// void gtk_range_set_show_fill_level (GtkRange* range /*none*/, gboolean show_fill_level);
// void gtk_range_set_show_fill_level (::GtkRange* range /*none*/, gboolean show_fill_level);
void base::RangeBase::set_show_fill_level (gboolean show_fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean show_fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_show_fill_level;
  auto show_fill_level_to_c = show_fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (show_fill_level_to_c));
}

// void gtk_range_set_slider_size_fixed (GtkRange* range /*none*/, gboolean size_fixed);
// void gtk_range_set_slider_size_fixed (::GtkRange* range /*none*/, gboolean size_fixed);
void base::RangeBase::set_slider_size_fixed (gboolean size_fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean size_fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_slider_size_fixed;
  auto size_fixed_to_c = size_fixed;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (size_fixed_to_c));
}

// void gtk_range_set_value (GtkRange* range /*none*/, double value);
// void gtk_range_set_value (::GtkRange* range /*none*/, gdouble value);
void base::RangeBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_range_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (value_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/range_extra_def_impl.hpp>)
#include <gtk/range_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/range_extra_impl.hpp>)
#include <gtk/range_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RangeClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkRangeClass *methods = (::GtkRangeClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.adjust_bounds) methods->adjust_bounds = (decltype (methods->adjust_bounds)) detail::method_wrapper<self, void (*) (gdouble new_value), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::adjust_bounds_>;
  if (init_data.change_value) methods->change_value = (decltype (methods->change_value)) detail::method_wrapper<self, bool (*) (Gtk::ScrollType scroll, gdouble new_value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::change_value_>;
  if (init_data.get_range_border) methods->get_range_border = (decltype (methods->get_range_border)) detail::method_wrapper<self, void (*) (Gtk::Border_Ref border_), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_range_border_>;
  if (init_data.move_slider) methods->move_slider = (decltype (methods->move_slider)) detail::method_wrapper<self, void (*) (Gtk::ScrollType scroll), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::move_slider_>;
  if (init_data.value_changed) methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::value_changed_>;
}

// void Range::adjust_bounds (GtkRange* range /*none*/, double new_value);
// void Range::adjust_bounds (::GtkRange* range /*none*/, gdouble new_value);
void RangeClass::adjust_bounds_ (gdouble new_value) noexcept
{
  if (!get_struct_()->adjust_bounds) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->adjust_bounds;
  auto new_value_to_c = new_value;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (new_value_to_c));
}

// gboolean Range::change_value (GtkRange* range /*none*/, GtkScrollType scroll, double new_value);
// gboolean Range::change_value (::GtkRange* range /*none*/, ::GtkScrollType scroll, gdouble new_value);
bool RangeClass::change_value_ (Gtk::ScrollType scroll, gdouble new_value) noexcept
{
  if (!get_struct_()->change_value) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkRange* range, ::GtkScrollType scroll, gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_value;
  auto new_value_to_c = new_value;
  auto scroll_to_c = gi::unwrap (scroll);
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()), (::GtkScrollType) (scroll_to_c), (gdouble) (new_value_to_c));
  return _temp_ret;
}

// void Range::get_range_border (GtkRange* range /*none*/, GtkBorder* border_ /*none*/);
// void Range::get_range_border (::GtkRange* range /*none*/, ::GtkBorder* border_ /*none*/);
void RangeClass::get_range_border_ (Gtk::Border_Ref border_) noexcept
{
  if (!get_struct_()->get_range_border) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkBorder* border_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_range_border;
  auto border__to_c = gi::unwrap (border_, gi::transfer_none);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkBorder*) (border__to_c));
}

// void Range::move_slider (GtkRange* range /*none*/, GtkScrollType scroll);
// void Range::move_slider (::GtkRange* range /*none*/, ::GtkScrollType scroll);
void RangeClass::move_slider_ (Gtk::ScrollType scroll) noexcept
{
  if (!get_struct_()->move_slider) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkScrollType scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_slider;
  auto scroll_to_c = gi::unwrap (scroll);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkScrollType) (scroll_to_c));
}

// void Range::value_changed (GtkRange* range /*none*/);
// void Range::value_changed (::GtkRange* range /*none*/);
void RangeClass::value_changed_ () noexcept
{
  if (!get_struct_()->value_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  call_wrap_v ((::GtkRange*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
