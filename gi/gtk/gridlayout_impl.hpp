// AUTO-GENERATED

#ifndef _GI_GTK_GRIDLAYOUT_IMPL_HPP_
#define _GI_GTK_GRIDLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkLayoutManager* /*full*/ gtk_grid_layout_new ();
// ::GtkGridLayout* /*full*/ gtk_grid_layout_new ();
Gtk::GridLayout base::GridLayoutBase::new_ () noexcept
{
  typedef ::GtkGridLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_grid_layout_get_baseline_row (GtkGridLayout* grid /*none*/);
// gint gtk_grid_layout_get_baseline_row (::GtkGridLayout* grid /*none*/);
gint base::GridLayoutBase::get_baseline_row () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGridLayout* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_baseline_row;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_grid_layout_get_column_homogeneous (GtkGridLayout* grid /*none*/);
// gboolean gtk_grid_layout_get_column_homogeneous (::GtkGridLayout* grid /*none*/);
bool base::GridLayoutBase::get_column_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGridLayout* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_column_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()));
  return _temp_ret;
}

// guint gtk_grid_layout_get_column_spacing (GtkGridLayout* grid /*none*/);
// guint gtk_grid_layout_get_column_spacing (::GtkGridLayout* grid /*none*/);
guint base::GridLayoutBase::get_column_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGridLayout* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()));
  return _temp_ret;
}

// GtkBaselinePosition gtk_grid_layout_get_row_baseline_position (GtkGridLayout* grid /*none*/, int row);
// ::GtkBaselinePosition gtk_grid_layout_get_row_baseline_position (::GtkGridLayout* grid /*none*/, gint row);
Gtk::BaselinePosition base::GridLayoutBase::get_row_baseline_position (gint row) noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkGridLayout* grid, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_row_baseline_position;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()), (gint) (row_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_grid_layout_get_row_homogeneous (GtkGridLayout* grid /*none*/);
// gboolean gtk_grid_layout_get_row_homogeneous (::GtkGridLayout* grid /*none*/);
bool base::GridLayoutBase::get_row_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGridLayout* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_row_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()));
  return _temp_ret;
}

// guint gtk_grid_layout_get_row_spacing (GtkGridLayout* grid /*none*/);
// guint gtk_grid_layout_get_row_spacing (::GtkGridLayout* grid /*none*/);
guint base::GridLayoutBase::get_row_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGridLayout* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkGridLayout*) (gobj_()));
  return _temp_ret;
}

// void gtk_grid_layout_set_baseline_row (GtkGridLayout* grid /*none*/, int row);
// void gtk_grid_layout_set_baseline_row (::GtkGridLayout* grid /*none*/, gint row);
void base::GridLayoutBase::set_baseline_row (gint row) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_baseline_row;
  auto row_to_c = row;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (gint) (row_to_c));
}

// void gtk_grid_layout_set_column_homogeneous (GtkGridLayout* grid /*none*/, gboolean homogeneous);
// void gtk_grid_layout_set_column_homogeneous (::GtkGridLayout* grid /*none*/, gboolean homogeneous);
void base::GridLayoutBase::set_column_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_column_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_grid_layout_set_column_spacing (GtkGridLayout* grid /*none*/, guint spacing);
// void gtk_grid_layout_set_column_spacing (::GtkGridLayout* grid /*none*/, guint spacing);
void base::GridLayoutBase::set_column_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_column_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_grid_layout_set_row_baseline_position (GtkGridLayout* grid /*none*/, int row, GtkBaselinePosition pos);
// void gtk_grid_layout_set_row_baseline_position (::GtkGridLayout* grid /*none*/, gint row, ::GtkBaselinePosition pos);
void base::GridLayoutBase::set_row_baseline_position (gint row, Gtk::BaselinePosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, gint row, ::GtkBaselinePosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_row_baseline_position;
  auto pos_to_c = gi::unwrap (pos);
  auto row_to_c = row;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (gint) (row_to_c), (::GtkBaselinePosition) (pos_to_c));
}

// void gtk_grid_layout_set_row_homogeneous (GtkGridLayout* grid /*none*/, gboolean homogeneous);
// void gtk_grid_layout_set_row_homogeneous (::GtkGridLayout* grid /*none*/, gboolean homogeneous);
void base::GridLayoutBase::set_row_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_row_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_grid_layout_set_row_spacing (GtkGridLayout* grid /*none*/, guint spacing);
// void gtk_grid_layout_set_row_spacing (::GtkGridLayout* grid /*none*/, guint spacing);
void base::GridLayoutBase::set_row_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayout* grid, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_set_row_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkGridLayout*) (gobj_()), (guint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridlayout_extra_def_impl.hpp>)
#include <gtk/gridlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridlayout_extra_impl.hpp>)
#include <gtk/gridlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void GridLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkGridLayoutClass *methods = (::GtkGridLayoutClass *) class_struct;
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
