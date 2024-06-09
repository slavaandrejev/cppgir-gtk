// AUTO-GENERATED

#ifndef _GI_GTK_FIXED_IMPL_HPP_
#define _GI_GTK_FIXED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_fixed_new ();
// ::GtkFixed* /*none*/ gtk_fixed_new ();
Gtk::Fixed base::FixedBase::new_ () noexcept
{
  typedef ::GtkFixed* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_fixed_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_fixed_get_child_position (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double* x, double* y);
// void gtk_fixed_get_child_position (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble* x, gdouble* y);
void base::FixedBase::get_child_position (Gtk::Widget widget, gdouble & x, gdouble & y) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_get_child_position;
  gdouble y_o {};
  gdouble x_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<gdouble, gdouble> base::FixedBase::get_child_position (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_get_child_position;
  gdouble y_o {};
  gdouble x_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = x_o;
  auto &&tmp_return_2 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GskTransform* /*none,nullable*/ gtk_fixed_get_child_transform (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/);
// ::GskTransform* /*none,nullable*/ gtk_fixed_get_child_transform (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/);
Gsk::Transform_Ref base::FixedBase::get_child_transform (Gtk::Widget widget) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_get_child_transform;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_fixed_move (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double x, double y);
// void gtk_fixed_move (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble x, gdouble y);
void base::FixedBase::move (Gtk::Widget widget, gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_move;
  auto y_to_c = y;
  auto x_to_c = x;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void gtk_fixed_put (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double x, double y);
// void gtk_fixed_put (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble x, gdouble y);
void base::FixedBase::put (Gtk::Widget widget, gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_put;
  auto y_to_c = y;
  auto x_to_c = x;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void gtk_fixed_remove (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/);
// void gtk_fixed_remove (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/);
void base::FixedBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_fixed_set_child_transform (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, GskTransform* transform /*none,nullable*/);
// void gtk_fixed_set_child_transform (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, ::GskTransform* transform /*none,nullable*/);
void base::FixedBase::set_child_transform (Gtk::Widget widget, Gsk::Transform_Ref transform) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_set_child_transform;
  auto transform_to_c = gi::unwrap (transform, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GskTransform*) (transform_to_c));
}
void base::FixedBase::set_child_transform (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_set_child_transform;
  auto transform_to_c = nullptr;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GskTransform*) (transform_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra_def_impl.hpp>)
#include <gtk/fixed_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra_impl.hpp>)
#include <gtk/fixed_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FixedClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFixedClass *methods = (::GtkFixedClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
