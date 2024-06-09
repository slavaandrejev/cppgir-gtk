// AUTO-GENERATED

#ifndef _GI_GTK_ADJUSTMENT_IMPL_HPP_
#define _GI_GTK_ADJUSTMENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAdjustment* /*none*/ gtk_adjustment_new (double value, double lower, double upper, double step_increment, double page_increment, double page_size);
// ::GtkAdjustment* /*none*/ gtk_adjustment_new (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
Gtk::Adjustment base::AdjustmentBase::new_ (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size) noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_adjustment_new;
  auto page_size_to_c = page_size;
  auto page_increment_to_c = page_increment;
  auto step_increment_to_c = step_increment;
  auto upper_to_c = upper;
  auto lower_to_c = lower;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gdouble) (value_to_c), (gdouble) (lower_to_c), (gdouble) (upper_to_c), (gdouble) (step_increment_to_c), (gdouble) (page_increment_to_c), (gdouble) (page_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_adjustment_clamp_page (GtkAdjustment* adjustment /*none*/, double lower, double upper);
// void gtk_adjustment_clamp_page (::GtkAdjustment* adjustment /*none*/, gdouble lower, gdouble upper);
void base::AdjustmentBase::clamp_page (gdouble lower, gdouble upper) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble lower, gdouble upper);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_clamp_page;
  auto upper_to_c = upper;
  auto lower_to_c = lower;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (lower_to_c), (gdouble) (upper_to_c));
}

// void gtk_adjustment_configure (GtkAdjustment* adjustment /*none*/, double value, double lower, double upper, double step_increment, double page_increment, double page_size);
// void gtk_adjustment_configure (::GtkAdjustment* adjustment /*none*/, gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
void base::AdjustmentBase::configure (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_configure;
  auto page_size_to_c = page_size;
  auto page_increment_to_c = page_increment;
  auto step_increment_to_c = step_increment;
  auto upper_to_c = upper;
  auto lower_to_c = lower;
  auto value_to_c = value;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (value_to_c), (gdouble) (lower_to_c), (gdouble) (upper_to_c), (gdouble) (step_increment_to_c), (gdouble) (page_increment_to_c), (gdouble) (page_size_to_c));
}

// double gtk_adjustment_get_lower (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_lower (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_lower () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_lower;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_minimum_increment (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_minimum_increment (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_minimum_increment () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_minimum_increment;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_page_increment (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_page_increment (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_page_increment () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_page_increment;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_page_size (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_page_size (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_page_size () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_page_size;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_step_increment (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_step_increment (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_step_increment () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_step_increment;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_upper (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_upper (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_upper () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_upper;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// double gtk_adjustment_get_value (GtkAdjustment* adjustment /*none*/);
// gdouble gtk_adjustment_get_value (::GtkAdjustment* adjustment /*none*/);
gdouble base::AdjustmentBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_get_value;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (gobj_()));
  return _temp_ret;
}

// void gtk_adjustment_set_lower (GtkAdjustment* adjustment /*none*/, double lower);
// void gtk_adjustment_set_lower (::GtkAdjustment* adjustment /*none*/, gdouble lower);
void base::AdjustmentBase::set_lower (gdouble lower) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble lower);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_lower;
  auto lower_to_c = lower;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (lower_to_c));
}

// void gtk_adjustment_set_page_increment (GtkAdjustment* adjustment /*none*/, double page_increment);
// void gtk_adjustment_set_page_increment (::GtkAdjustment* adjustment /*none*/, gdouble page_increment);
void base::AdjustmentBase::set_page_increment (gdouble page_increment) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble page_increment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_page_increment;
  auto page_increment_to_c = page_increment;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (page_increment_to_c));
}

// void gtk_adjustment_set_page_size (GtkAdjustment* adjustment /*none*/, double page_size);
// void gtk_adjustment_set_page_size (::GtkAdjustment* adjustment /*none*/, gdouble page_size);
void base::AdjustmentBase::set_page_size (gdouble page_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble page_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_page_size;
  auto page_size_to_c = page_size;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (page_size_to_c));
}

// void gtk_adjustment_set_step_increment (GtkAdjustment* adjustment /*none*/, double step_increment);
// void gtk_adjustment_set_step_increment (::GtkAdjustment* adjustment /*none*/, gdouble step_increment);
void base::AdjustmentBase::set_step_increment (gdouble step_increment) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble step_increment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_step_increment;
  auto step_increment_to_c = step_increment;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (step_increment_to_c));
}

// void gtk_adjustment_set_upper (GtkAdjustment* adjustment /*none*/, double upper);
// void gtk_adjustment_set_upper (::GtkAdjustment* adjustment /*none*/, gdouble upper);
void base::AdjustmentBase::set_upper (gdouble upper) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble upper);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_upper;
  auto upper_to_c = upper;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (upper_to_c));
}

// void gtk_adjustment_set_value (GtkAdjustment* adjustment /*none*/, double value);
// void gtk_adjustment_set_value (::GtkAdjustment* adjustment /*none*/, gdouble value);
void base::AdjustmentBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_adjustment_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkAdjustment*) (gobj_()), (gdouble) (value_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/adjustment_extra_def_impl.hpp>)
#include <gtk/adjustment_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/adjustment_extra_impl.hpp>)
#include <gtk/adjustment_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AdjustmentClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkAdjustmentClass *methods = (::GtkAdjustmentClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.value_changed) methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::value_changed_>;
}

// void Adjustment::changed (GtkAdjustment* adjustment /*none*/);
// void Adjustment::changed (::GtkAdjustment* adjustment /*none*/);
void AdjustmentClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkAdjustment*) (gobj_()));
}

// void Adjustment::value_changed (GtkAdjustment* adjustment /*none*/);
// void Adjustment::value_changed (::GtkAdjustment* adjustment /*none*/);
void AdjustmentClass::value_changed_ () noexcept
{
  if (!get_struct_()->value_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  call_wrap_v ((::GtkAdjustment*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
