// AUTO-GENERATED

#ifndef _GI_GTK_CENTERLAYOUT_IMPL_HPP_
#define _GI_GTK_CENTERLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkLayoutManager* /*full*/ gtk_center_layout_new ();
// ::GtkCenterLayout* /*full*/ gtk_center_layout_new ();
Gtk::CenterLayout base::CenterLayoutBase::new_ () noexcept
{
  typedef ::GtkCenterLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_center_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBaselinePosition gtk_center_layout_get_baseline_position (GtkCenterLayout* self /*none*/);
// ::GtkBaselinePosition gtk_center_layout_get_baseline_position (::GtkCenterLayout* self /*none*/);
Gtk::BaselinePosition base::CenterLayoutBase::get_baseline_position () noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_baseline_position;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_center_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_center_widget (::GtkCenterLayout* self /*none*/);
Gtk::Widget base::CenterLayoutBase::get_center_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_center_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_end_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_end_widget (::GtkCenterLayout* self /*none*/);
Gtk::Widget base::CenterLayoutBase::get_end_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_end_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkOrientation gtk_center_layout_get_orientation (GtkCenterLayout* self /*none*/);
// ::GtkOrientation gtk_center_layout_get_orientation (::GtkCenterLayout* self /*none*/);
Gtk::Orientation base::CenterLayoutBase::get_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_center_layout_get_shrink_center_last (GtkCenterLayout* self /*none*/);
// gboolean gtk_center_layout_get_shrink_center_last (::GtkCenterLayout* self /*none*/);
bool base::CenterLayoutBase::get_shrink_center_last () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_shrink_center_last;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_start_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_start_widget (::GtkCenterLayout* self /*none*/);
Gtk::Widget base::CenterLayoutBase::get_start_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCenterLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_get_start_widget;
  auto _temp_ret = call_wrap_v ((::GtkCenterLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_center_layout_set_baseline_position (GtkCenterLayout* self /*none*/, GtkBaselinePosition baseline_position);
// void gtk_center_layout_set_baseline_position (::GtkCenterLayout* self /*none*/, ::GtkBaselinePosition baseline_position);
void base::CenterLayoutBase::set_baseline_position (Gtk::BaselinePosition baseline_position) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkBaselinePosition baseline_position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_baseline_position;
  auto baseline_position_to_c = gi::unwrap (baseline_position);
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkBaselinePosition) (baseline_position_to_c));
}

// void gtk_center_layout_set_center_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_center_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::CenterLayoutBase::set_center_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_center_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::CenterLayoutBase::set_center_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_center_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_center_layout_set_end_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_end_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::CenterLayoutBase::set_end_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_end_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::CenterLayoutBase::set_end_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_end_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_center_layout_set_orientation (GtkCenterLayout* self /*none*/, GtkOrientation orientation);
// void gtk_center_layout_set_orientation (::GtkCenterLayout* self /*none*/, ::GtkOrientation orientation);
void base::CenterLayoutBase::set_orientation (Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}

// void gtk_center_layout_set_shrink_center_last (GtkCenterLayout* self /*none*/, gboolean shrink_center_last);
// void gtk_center_layout_set_shrink_center_last (::GtkCenterLayout* self /*none*/, gboolean shrink_center_last);
void base::CenterLayoutBase::set_shrink_center_last (gboolean shrink_center_last) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, gboolean shrink_center_last);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_shrink_center_last;
  auto shrink_center_last_to_c = shrink_center_last;
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (gboolean) (shrink_center_last_to_c));
}

// void gtk_center_layout_set_start_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_start_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::CenterLayoutBase::set_start_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_start_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::CenterLayoutBase::set_start_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCenterLayout* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_center_layout_set_start_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkCenterLayout*) (gobj_()), (::GtkWidget*) (widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/centerlayout_extra_def_impl.hpp>)
#include <gtk/centerlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/centerlayout_extra_impl.hpp>)
#include <gtk/centerlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CenterLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCenterLayoutClass *methods = (::GtkCenterLayoutClass *) class_struct;
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
