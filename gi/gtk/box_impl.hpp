// AUTO-GENERATED

#ifndef _GI_GTK_BOX_IMPL_HPP_
#define _GI_GTK_BOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable BoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_box_new (GtkOrientation orientation, int spacing);
// ::GtkBox* /*none*/ gtk_box_new (::GtkOrientation orientation, gint spacing);
Gtk::Box base::BoxBase::new_ (Gtk::Orientation orientation, gint spacing) noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkOrientation orientation, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_new;
  auto spacing_to_c = spacing;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (gint) (spacing_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_box_append (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_append (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
void base::BoxBase::append (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// int gtk_box_get_baseline_child (GtkBox* box /*none*/);
// gint gtk_box_get_baseline_child (::GtkBox* box /*none*/);
gint base::BoxBase::get_baseline_child () noexcept
{
  typedef gint (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_get_baseline_child;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return _temp_ret;
}

// GtkBaselinePosition gtk_box_get_baseline_position (GtkBox* box /*none*/);
// ::GtkBaselinePosition gtk_box_get_baseline_position (::GtkBox* box /*none*/);
Gtk::BaselinePosition base::BoxBase::get_baseline_position () noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_get_baseline_position;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_box_get_homogeneous (GtkBox* box /*none*/);
// gboolean gtk_box_get_homogeneous (::GtkBox* box /*none*/);
bool base::BoxBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return _temp_ret;
}

// int gtk_box_get_spacing (GtkBox* box /*none*/);
// gint gtk_box_get_spacing (::GtkBox* box /*none*/);
gint base::BoxBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return _temp_ret;
}

// void gtk_box_insert_child_after (GtkBox* box /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void gtk_box_insert_child_after (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
void base::BoxBase::insert_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_insert_child_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}
void base::BoxBase::insert_child_after (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_insert_child_after;
  auto sibling_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}

// void gtk_box_prepend (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_prepend (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
void base::BoxBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_box_remove (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_remove (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
void base::BoxBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_box_reorder_child_after (GtkBox* box /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void gtk_box_reorder_child_after (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
void base::BoxBase::reorder_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_reorder_child_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}
void base::BoxBase::reorder_child_after (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_reorder_child_after;
  auto sibling_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}

// void gtk_box_set_baseline_child (GtkBox* box /*none*/, int child);
// void gtk_box_set_baseline_child (::GtkBox* box /*none*/, gint child);
void base::BoxBase::set_baseline_child (gint child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, gint child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_set_baseline_child;
  auto child_to_c = child;
  call_wrap_v ((::GtkBox*) (gobj_()), (gint) (child_to_c));
}

// void gtk_box_set_baseline_position (GtkBox* box /*none*/, GtkBaselinePosition position);
// void gtk_box_set_baseline_position (::GtkBox* box /*none*/, ::GtkBaselinePosition position);
void base::BoxBase::set_baseline_position (Gtk::BaselinePosition position) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkBaselinePosition position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_set_baseline_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkBaselinePosition) (position_to_c));
}

// void gtk_box_set_homogeneous (GtkBox* box /*none*/, gboolean homogeneous);
// void gtk_box_set_homogeneous (::GtkBox* box /*none*/, gboolean homogeneous);
void base::BoxBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkBox*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_box_set_spacing (GtkBox* box /*none*/, int spacing);
// void gtk_box_set_spacing (::GtkBox* box /*none*/, gint spacing);
void base::BoxBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_box_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkBox*) (gobj_()), (gint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/box_extra_def_impl.hpp>)
#include <gtk/box_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/box_extra_impl.hpp>)
#include <gtk/box_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BoxClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkBoxClass *methods = (::GtkBoxClass *) class_struct;
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
