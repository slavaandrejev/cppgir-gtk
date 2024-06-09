// AUTO-GENERATED

#ifndef _GI_GTK_BOXLAYOUT_IMPL_HPP_
#define _GI_GTK_BOXLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable BoxLayoutBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BoxLayoutBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkLayoutManager* /*full*/ gtk_box_layout_new (GtkOrientation orientation);
// ::GtkBoxLayout* /*full*/ gtk_box_layout_new (::GtkOrientation orientation);
Gtk::BoxLayout base::BoxLayoutBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkBoxLayout* (*call_wrap_t) (::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_layout_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_box_layout_get_baseline_child (GtkBoxLayout* box_layout /*none*/);
// gint gtk_box_layout_get_baseline_child (::GtkBoxLayout* box_layout /*none*/);
gint base::BoxLayoutBase::get_baseline_child () noexcept
{
  typedef gint (*call_wrap_t) (::GtkBoxLayout* box_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_get_baseline_child;
  auto _temp_ret = call_wrap_v ((::GtkBoxLayout*) (gobj_()));
  return _temp_ret;
}

// GtkBaselinePosition gtk_box_layout_get_baseline_position (GtkBoxLayout* box_layout /*none*/);
// ::GtkBaselinePosition gtk_box_layout_get_baseline_position (::GtkBoxLayout* box_layout /*none*/);
Gtk::BaselinePosition base::BoxLayoutBase::get_baseline_position () noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkBoxLayout* box_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_get_baseline_position;
  auto _temp_ret = call_wrap_v ((::GtkBoxLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_box_layout_get_homogeneous (GtkBoxLayout* box_layout /*none*/);
// gboolean gtk_box_layout_get_homogeneous (::GtkBoxLayout* box_layout /*none*/);
bool base::BoxLayoutBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBoxLayout* box_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkBoxLayout*) (gobj_()));
  return _temp_ret;
}

// guint gtk_box_layout_get_spacing (GtkBoxLayout* box_layout /*none*/);
// guint gtk_box_layout_get_spacing (::GtkBoxLayout* box_layout /*none*/);
guint base::BoxLayoutBase::get_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkBoxLayout* box_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkBoxLayout*) (gobj_()));
  return _temp_ret;
}

// void gtk_box_layout_set_baseline_child (GtkBoxLayout* box_layout /*none*/, int child);
// void gtk_box_layout_set_baseline_child (::GtkBoxLayout* box_layout /*none*/, gint child);
void base::BoxLayoutBase::set_baseline_child (gint child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBoxLayout* box_layout, gint child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_set_baseline_child;
  auto child_to_c = child;
  call_wrap_v ((::GtkBoxLayout*) (gobj_()), (gint) (child_to_c));
}

// void gtk_box_layout_set_baseline_position (GtkBoxLayout* box_layout /*none*/, GtkBaselinePosition position);
// void gtk_box_layout_set_baseline_position (::GtkBoxLayout* box_layout /*none*/, ::GtkBaselinePosition position);
void base::BoxLayoutBase::set_baseline_position (Gtk::BaselinePosition position) noexcept
{
  typedef void (*call_wrap_t) (::GtkBoxLayout* box_layout, ::GtkBaselinePosition position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_set_baseline_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkBoxLayout*) (gobj_()), (::GtkBaselinePosition) (position_to_c));
}

// void gtk_box_layout_set_homogeneous (GtkBoxLayout* box_layout /*none*/, gboolean homogeneous);
// void gtk_box_layout_set_homogeneous (::GtkBoxLayout* box_layout /*none*/, gboolean homogeneous);
void base::BoxLayoutBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkBoxLayout* box_layout, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkBoxLayout*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_box_layout_set_spacing (GtkBoxLayout* box_layout /*none*/, guint spacing);
// void gtk_box_layout_set_spacing (::GtkBoxLayout* box_layout /*none*/, guint spacing);
void base::BoxLayoutBase::set_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkBoxLayout* box_layout, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_layout_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkBoxLayout*) (gobj_()), (guint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/boxlayout_extra_def_impl.hpp>)
#include <gtk/boxlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/boxlayout_extra_impl.hpp>)
#include <gtk/boxlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BoxLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkBoxLayoutClass *methods = (::GtkBoxLayoutClass *) class_struct;
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
