// AUTO-GENERATED

#ifndef _GI_GTK_SPINBUTTON_IMPL_HPP_
#define _GI_GTK_SPINBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AccessibleRange SpinButtonBase::interface_ (gi::interface_tag<Gtk::AccessibleRange>)
{ return gi::wrap ((Gtk::AccessibleRange::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinButtonBase::operator Gtk::AccessibleRange ()
{ return interface_ (gi::interface_tag<Gtk::AccessibleRange>()); }

Gtk::CellEditable SpinButtonBase::interface_ (gi::interface_tag<Gtk::CellEditable>)
{ return gi::wrap ((Gtk::CellEditable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinButtonBase::operator Gtk::CellEditable ()
{ return interface_ (gi::interface_tag<Gtk::CellEditable>()); }

Gtk::Editable SpinButtonBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinButtonBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

Gtk::Orientable SpinButtonBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinButtonBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_spin_button_new (GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// ::GtkSpinButton* /*none*/ gtk_spin_button_new (::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
Gtk::SpinButton base::SpinButtonBase::new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::SpinButton base::SpinButtonBase::new_ (gdouble climb_rate, guint digits) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_spin_button_new_with_range (double min, double max, double step);
// ::GtkSpinButton* /*none*/ gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
Gtk::SpinButton base::SpinButtonBase::new_with_range (gdouble min, gdouble max, gdouble step) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (gdouble min, gdouble max, gdouble step);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new_with_range;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto _temp_ret = call_wrap_v ((gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_spin_button_configure (GtkSpinButton* spin_button /*none*/, GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// void gtk_spin_button_configure (::GtkSpinButton* spin_button /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
void base::SpinButtonBase::configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}
void base::SpinButtonBase::configure (gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}

// GtkAdjustment* /*none*/ gtk_spin_button_get_adjustment (GtkSpinButton* spin_button /*none*/);
// ::GtkAdjustment* /*none*/ gtk_spin_button_get_adjustment (::GtkSpinButton* spin_button /*none*/);
Gtk::Adjustment base::SpinButtonBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_spin_button_get_climb_rate (GtkSpinButton* spin_button /*none*/);
// gdouble gtk_spin_button_get_climb_rate (::GtkSpinButton* spin_button /*none*/);
gdouble base::SpinButtonBase::get_climb_rate () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_climb_rate;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// guint gtk_spin_button_get_digits (GtkSpinButton* spin_button /*none*/);
// guint gtk_spin_button_get_digits (::GtkSpinButton* spin_button /*none*/);
guint base::SpinButtonBase::get_digits () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_digits;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_get_increments (GtkSpinButton* spin_button /*none*/, double* step, double* page);
// void gtk_spin_button_get_increments (::GtkSpinButton* spin_button /*none*/, gdouble* step, gdouble* page);
void base::SpinButtonBase::get_increments (gdouble * step, gdouble * page) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_increments;
  gdouble page_o {};
  gdouble step_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (step ? &step_o : nullptr), (gdouble*) (page ? &page_o : nullptr));
  if (page) *page = page_o;
  if (step) *step = step_o;
}
std::tuple<gdouble, gdouble> base::SpinButtonBase::get_increments () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_increments;
  gdouble page_o {};
  gdouble step_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (&step_o), (gdouble*) (&page_o));
  auto &&tmp_return_1 = step_o;
  auto &&tmp_return_2 = page_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_spin_button_get_numeric (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_numeric (::GtkSpinButton* spin_button /*none*/);
bool base::SpinButtonBase::get_numeric () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_numeric;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_get_range (GtkSpinButton* spin_button /*none*/, double* min, double* max);
// void gtk_spin_button_get_range (::GtkSpinButton* spin_button /*none*/, gdouble* min, gdouble* max);
void base::SpinButtonBase::get_range (gdouble * min, gdouble * max) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_range;
  gdouble max_o {};
  gdouble min_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (min ? &min_o : nullptr), (gdouble*) (max ? &max_o : nullptr));
  if (max) *max = max_o;
  if (min) *min = min_o;
}
std::tuple<gdouble, gdouble> base::SpinButtonBase::get_range () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_range;
  gdouble max_o {};
  gdouble min_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (&min_o), (gdouble*) (&max_o));
  auto &&tmp_return_1 = min_o;
  auto &&tmp_return_2 = max_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_snap_to_ticks (::GtkSpinButton* spin_button /*none*/);
bool base::SpinButtonBase::get_snap_to_ticks () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_snap_to_ticks;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton* spin_button /*none*/);
// ::GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (::GtkSpinButton* spin_button /*none*/);
Gtk::SpinButtonUpdatePolicy base::SpinButtonBase::get_update_policy () noexcept
{
  typedef ::GtkSpinButtonUpdatePolicy (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_update_policy;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double gtk_spin_button_get_value (GtkSpinButton* spin_button /*none*/);
// gdouble gtk_spin_button_get_value (::GtkSpinButton* spin_button /*none*/);
gdouble base::SpinButtonBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_value;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// int gtk_spin_button_get_value_as_int (GtkSpinButton* spin_button /*none*/);
// gint gtk_spin_button_get_value_as_int (::GtkSpinButton* spin_button /*none*/);
gint base::SpinButtonBase::get_value_as_int () noexcept
{
  typedef gint (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_value_as_int;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_spin_button_get_wrap (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_wrap (::GtkSpinButton* spin_button /*none*/);
bool base::SpinButtonBase::get_wrap () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_get_wrap;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_set_adjustment (GtkSpinButton* spin_button /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_spin_button_set_adjustment (::GtkSpinButton* spin_button /*none*/, ::GtkAdjustment* adjustment /*none*/);
void base::SpinButtonBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_spin_button_set_climb_rate (GtkSpinButton* spin_button /*none*/, double climb_rate);
// void gtk_spin_button_set_climb_rate (::GtkSpinButton* spin_button /*none*/, gdouble climb_rate);
void base::SpinButtonBase::set_climb_rate (gdouble climb_rate) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble climb_rate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_climb_rate;
  auto climb_rate_to_c = climb_rate;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (climb_rate_to_c));
}

// void gtk_spin_button_set_digits (GtkSpinButton* spin_button /*none*/, guint digits);
// void gtk_spin_button_set_digits (::GtkSpinButton* spin_button /*none*/, guint digits);
void base::SpinButtonBase::set_digits (guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_digits;
  auto digits_to_c = digits;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (guint) (digits_to_c));
}

// void gtk_spin_button_set_increments (GtkSpinButton* spin_button /*none*/, double step, double page);
// void gtk_spin_button_set_increments (::GtkSpinButton* spin_button /*none*/, gdouble step, gdouble page);
void base::SpinButtonBase::set_increments (gdouble step, gdouble page) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble step, gdouble page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_increments;
  auto page_to_c = page;
  auto step_to_c = step;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (step_to_c), (gdouble) (page_to_c));
}

// void gtk_spin_button_set_numeric (GtkSpinButton* spin_button /*none*/, gboolean numeric);
// void gtk_spin_button_set_numeric (::GtkSpinButton* spin_button /*none*/, gboolean numeric);
void base::SpinButtonBase::set_numeric (gboolean numeric) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean numeric);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_numeric;
  auto numeric_to_c = numeric;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (numeric_to_c));
}

// void gtk_spin_button_set_range (GtkSpinButton* spin_button /*none*/, double min, double max);
// void gtk_spin_button_set_range (::GtkSpinButton* spin_button /*none*/, gdouble min, gdouble max);
void base::SpinButtonBase::set_range (gdouble min, gdouble max) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble min, gdouble max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_range;
  auto max_to_c = max;
  auto min_to_c = min;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (min_to_c), (gdouble) (max_to_c));
}

// void gtk_spin_button_set_snap_to_ticks (GtkSpinButton* spin_button /*none*/, gboolean snap_to_ticks);
// void gtk_spin_button_set_snap_to_ticks (::GtkSpinButton* spin_button /*none*/, gboolean snap_to_ticks);
void base::SpinButtonBase::set_snap_to_ticks (gboolean snap_to_ticks) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean snap_to_ticks);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_snap_to_ticks;
  auto snap_to_ticks_to_c = snap_to_ticks;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (snap_to_ticks_to_c));
}

// void gtk_spin_button_set_update_policy (GtkSpinButton* spin_button /*none*/, GtkSpinButtonUpdatePolicy policy);
// void gtk_spin_button_set_update_policy (::GtkSpinButton* spin_button /*none*/, ::GtkSpinButtonUpdatePolicy policy);
void base::SpinButtonBase::set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkSpinButtonUpdatePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_update_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkSpinButtonUpdatePolicy) (policy_to_c));
}

// void gtk_spin_button_set_value (GtkSpinButton* spin_button /*none*/, double value);
// void gtk_spin_button_set_value (::GtkSpinButton* spin_button /*none*/, gdouble value);
void base::SpinButtonBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (value_to_c));
}

// void gtk_spin_button_set_wrap (GtkSpinButton* spin_button /*none*/, gboolean wrap);
// void gtk_spin_button_set_wrap (::GtkSpinButton* spin_button /*none*/, gboolean wrap);
void base::SpinButtonBase::set_wrap (gboolean wrap) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_set_wrap;
  auto wrap_to_c = wrap;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (wrap_to_c));
}

// void gtk_spin_button_spin (GtkSpinButton* spin_button /*none*/, GtkSpinType direction, double increment);
// void gtk_spin_button_spin (::GtkSpinButton* spin_button /*none*/, ::GtkSpinType direction, gdouble increment);
void base::SpinButtonBase::spin (Gtk::SpinType direction, gdouble increment) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkSpinType direction, gdouble increment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_spin;
  auto increment_to_c = increment;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkSpinType) (direction_to_c), (gdouble) (increment_to_c));
}

// void gtk_spin_button_update (GtkSpinButton* spin_button /*none*/);
// void gtk_spin_button_update (::GtkSpinButton* spin_button /*none*/);
void base::SpinButtonBase::update () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spin_button_update;
  call_wrap_v ((::GtkSpinButton*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_def_impl.hpp>)
#include <gtk/spinbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_impl.hpp>)
#include <gtk/spinbutton_extra_impl.hpp>
#endif
#endif

#endif
