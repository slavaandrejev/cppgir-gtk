// AUTO-GENERATED

#ifndef _GI_GTK_SCALEBUTTON_IMPL_HPP_
#define _GI_GTK_SCALEBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AccessibleRange ScaleButtonBase::interface_ (gi::interface_tag<Gtk::AccessibleRange>)
{ return gi::wrap ((Gtk::AccessibleRange::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ScaleButtonBase::operator Gtk::AccessibleRange ()
{ return interface_ (gi::interface_tag<Gtk::AccessibleRange>()); }

Gtk::Orientable ScaleButtonBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ScaleButtonBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_scale_button_new (double min, double max, double step, const char** icons /*none,nullable*/);
// ::GtkScaleButton* /*none*/ gtk_scale_button_new (gdouble min, gdouble max, gdouble step, const char** icons /*none,nullable*/);
Gtk::ScaleButton base::ScaleButtonBase::new_ (gdouble min, gdouble max, gdouble step, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> icons) noexcept
{
  typedef ::GtkScaleButton* (*call_wrap_t) (gdouble min, gdouble max, gdouble step, const char** icons);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_new;
  auto icons_w = unwrap (std::move(icons), gi::transfer_none);
  auto icons_to_c = icons_w;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto _temp_ret = call_wrap_v ((gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c), (const char**) (icons_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_scale_button_get_active (GtkScaleButton* button /*none*/);
// gboolean gtk_scale_button_get_active (::GtkScaleButton* button /*none*/);
bool base::ScaleButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return _temp_ret;
}

// GtkAdjustment* /*none*/ gtk_scale_button_get_adjustment (GtkScaleButton* button /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scale_button_get_adjustment (::GtkScaleButton* button /*none*/);
Gtk::Adjustment base::ScaleButtonBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_scale_button_get_minus_button (GtkScaleButton* button /*none*/);
// ::GtkButton* /*none*/ gtk_scale_button_get_minus_button (::GtkScaleButton* button /*none*/);
Gtk::Button base::ScaleButtonBase::get_minus_button () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_minus_button;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_scale_button_get_plus_button (GtkScaleButton* button /*none*/);
// ::GtkButton* /*none*/ gtk_scale_button_get_plus_button (::GtkScaleButton* button /*none*/);
Gtk::Button base::ScaleButtonBase::get_plus_button () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_plus_button;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_scale_button_get_popup (GtkScaleButton* button /*none*/);
// ::GtkWidget* /*none*/ gtk_scale_button_get_popup (::GtkScaleButton* button /*none*/);
Gtk::Widget base::ScaleButtonBase::get_popup () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_popup;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_scale_button_get_value (GtkScaleButton* button /*none*/);
// gdouble gtk_scale_button_get_value (::GtkScaleButton* button /*none*/);
gdouble base::ScaleButtonBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_get_value;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_scale_button_set_adjustment (GtkScaleButton* button /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_scale_button_set_adjustment (::GtkScaleButton* button /*none*/, ::GtkAdjustment* adjustment /*none*/);
void base::ScaleButtonBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_scale_button_set_icons (GtkScaleButton* button /*none*/, const char** icons /*none*/);
// void gtk_scale_button_set_icons (::GtkScaleButton* button /*none*/, const char** icons /*none*/);
void base::ScaleButtonBase::set_icons (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> icons) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, const char** icons);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_set_icons;
  auto icons_w = unwrap (std::move(icons), gi::transfer_none);
  auto icons_to_c = icons_w;
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (const char**) (icons_to_c));
}

// void gtk_scale_button_set_value (GtkScaleButton* button /*none*/, double value);
// void gtk_scale_button_set_value (::GtkScaleButton* button /*none*/, gdouble value);
void base::ScaleButtonBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scale_button_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (gdouble) (value_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_def_impl.hpp>)
#include <gtk/scalebutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_impl.hpp>)
#include <gtk/scalebutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScaleButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkScaleButtonClass *methods = (::GtkScaleButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.value_changed) methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (gdouble value), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::value_changed_>;
}

// void ScaleButton::value_changed (GtkScaleButton* button /*none*/, double value);
// void ScaleButton::value_changed (::GtkScaleButton* button /*none*/, gdouble value);
void ScaleButtonClass::value_changed_ (gdouble value) noexcept
{
  if (!get_struct_()->value_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkScaleButton* button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  auto value_to_c = value;
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (gdouble) (value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
