// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWCELL_IMPL_HPP_
#define _GI_GTK_COLUMNVIEWCELL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none,nullable*/ gtk_column_view_cell_get_child (GtkColumnViewCell* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_column_view_cell_get_child (::GtkColumnViewCell* self /*none*/);
Gtk::Widget base::ColumnViewCellBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkColumnViewCell* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_get_child;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewCell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_cell_get_focusable (GtkColumnViewCell* self /*none*/);
// gboolean gtk_column_view_cell_get_focusable (::GtkColumnViewCell* self /*none*/);
bool base::ColumnViewCellBase::get_focusable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewCell* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_get_focusable;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewCell*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_column_view_cell_get_item (GtkColumnViewCell* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_column_view_cell_get_item (::GtkColumnViewCell* self /*none*/);
GObject::Object base::ColumnViewCellBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkColumnViewCell* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_get_item;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewCell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_column_view_cell_get_position (GtkColumnViewCell* self /*none*/);
// guint gtk_column_view_cell_get_position (::GtkColumnViewCell* self /*none*/);
guint base::ColumnViewCellBase::get_position () noexcept
{
  typedef guint (*call_wrap_t) (::GtkColumnViewCell* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_get_position;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewCell*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_cell_get_selected (GtkColumnViewCell* self /*none*/);
// gboolean gtk_column_view_cell_get_selected (::GtkColumnViewCell* self /*none*/);
bool base::ColumnViewCellBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewCell* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_get_selected;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewCell*) (gobj_()));
  return _temp_ret;
}

// void gtk_column_view_cell_set_child (GtkColumnViewCell* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_column_view_cell_set_child (::GtkColumnViewCell* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ColumnViewCellBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewCell* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewCell*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ColumnViewCellBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewCell* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewCell*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_column_view_cell_set_focusable (GtkColumnViewCell* self /*none*/, gboolean focusable);
// void gtk_column_view_cell_set_focusable (::GtkColumnViewCell* self /*none*/, gboolean focusable);
void base::ColumnViewCellBase::set_focusable (gboolean focusable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewCell* self, gboolean focusable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_cell_set_focusable;
  auto focusable_to_c = focusable;
  call_wrap_v ((::GtkColumnViewCell*) (gobj_()), (gboolean) (focusable_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewcell_extra_def_impl.hpp>)
#include <gtk/columnviewcell_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewcell_extra_impl.hpp>)
#include <gtk/columnviewcell_extra_impl.hpp>
#endif
#endif

#endif
