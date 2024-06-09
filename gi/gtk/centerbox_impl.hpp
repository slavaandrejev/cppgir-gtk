// AUTO-GENERATED

#ifndef _GI_GTK_CENTERBOX_IMPL_HPP_
#define _GI_GTK_CENTERBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable CenterBoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CenterBoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_center_box_new ();
// ::GtkCenterBox* /*none*/ gtk_center_box_new ();
Gtk::CenterBox base::CenterBoxBase::new_ () noexcept
{
  typedef ::GtkCenterBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_center_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkBaselinePosition gtk_center_box_get_baseline_position (GtkCenterBox* self /*none*/);
// ::GtkBaselinePosition gtk_center_box_get_baseline_position (::GtkCenterBox* self /*none*/);
Gtk::BaselinePosition base::CenterBoxBase::get_baseline_position () noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkCenterBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_get_baseline_position;
  auto _temp_ret = call_wrap_v ((::GtkCenterBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ gtk_center_box_get_center_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_center_widget (::GtkCenterBox* self /*none*/);
Gtk::Widget base::CenterBoxBase::get_center_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_get_center_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_center_box_get_end_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_end_widget (::GtkCenterBox* self /*none*/);
Gtk::Widget base::CenterBoxBase::get_end_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_get_end_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_center_box_get_shrink_center_last (GtkCenterBox* self /*none*/);
// gboolean gtk_center_box_get_shrink_center_last (::GtkCenterBox* self /*none*/);
bool base::CenterBoxBase::get_shrink_center_last () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCenterBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_get_shrink_center_last;
  auto _temp_ret = call_wrap_v ((::GtkCenterBox*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_center_box_get_start_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_start_widget (::GtkCenterBox* self /*none*/);
Gtk::Widget base::CenterBoxBase::get_start_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_get_start_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_center_box_set_baseline_position (GtkCenterBox* self /*none*/, GtkBaselinePosition position);
// void gtk_center_box_set_baseline_position (::GtkCenterBox* self /*none*/, ::GtkBaselinePosition position);
void base::CenterBoxBase::set_baseline_position (Gtk::BaselinePosition position) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkBaselinePosition position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_baseline_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkBaselinePosition) (position_to_c));
}

// void gtk_center_box_set_center_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_center_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::CenterBoxBase::set_center_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_center_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::CenterBoxBase::set_center_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_center_widget;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_center_box_set_end_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_end_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::CenterBoxBase::set_end_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_end_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::CenterBoxBase::set_end_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_end_widget;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_center_box_set_shrink_center_last (GtkCenterBox* self /*none*/, gboolean shrink_center_last);
// void gtk_center_box_set_shrink_center_last (::GtkCenterBox* self /*none*/, gboolean shrink_center_last);
void base::CenterBoxBase::set_shrink_center_last (gboolean shrink_center_last) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, gboolean shrink_center_last);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_shrink_center_last;
  auto shrink_center_last_to_c = shrink_center_last;
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (gboolean) (shrink_center_last_to_c));
}

// void gtk_center_box_set_start_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_start_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::CenterBoxBase::set_start_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_start_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::CenterBoxBase::set_start_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_box_set_start_widget;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkCenterBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/centerbox_extra_def_impl.hpp>)
#include <gtk/centerbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/centerbox_extra_impl.hpp>)
#include <gtk/centerbox_extra_impl.hpp>
#endif
#endif

#endif
