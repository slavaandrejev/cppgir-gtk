// AUTO-GENERATED

#ifndef _GI_GTK_GRIDLAYOUTCHILD_IMPL_HPP_
#define _GI_GTK_GRIDLAYOUTCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// int gtk_grid_layout_child_get_column (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_column (::GtkGridLayoutChild* child /*none*/);
gint base::GridLayoutChildBase::get_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGridLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_get_column;
  auto _temp_ret = call_wrap_v ((::GtkGridLayoutChild*) (gobj_()));
  return _temp_ret;
}

// int gtk_grid_layout_child_get_column_span (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_column_span (::GtkGridLayoutChild* child /*none*/);
gint base::GridLayoutChildBase::get_column_span () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGridLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_get_column_span;
  auto _temp_ret = call_wrap_v ((::GtkGridLayoutChild*) (gobj_()));
  return _temp_ret;
}

// int gtk_grid_layout_child_get_row (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_row (::GtkGridLayoutChild* child /*none*/);
gint base::GridLayoutChildBase::get_row () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGridLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_get_row;
  auto _temp_ret = call_wrap_v ((::GtkGridLayoutChild*) (gobj_()));
  return _temp_ret;
}

// int gtk_grid_layout_child_get_row_span (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_row_span (::GtkGridLayoutChild* child /*none*/);
gint base::GridLayoutChildBase::get_row_span () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGridLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_get_row_span;
  auto _temp_ret = call_wrap_v ((::GtkGridLayoutChild*) (gobj_()));
  return _temp_ret;
}

// void gtk_grid_layout_child_set_column (GtkGridLayoutChild* child /*none*/, int column);
// void gtk_grid_layout_child_set_column (::GtkGridLayoutChild* child /*none*/, gint column);
void base::GridLayoutChildBase::set_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayoutChild* child, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_set_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkGridLayoutChild*) (gobj_()), (gint) (column_to_c));
}

// void gtk_grid_layout_child_set_column_span (GtkGridLayoutChild* child /*none*/, int span);
// void gtk_grid_layout_child_set_column_span (::GtkGridLayoutChild* child /*none*/, gint span);
void base::GridLayoutChildBase::set_column_span (gint span) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayoutChild* child, gint span);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_set_column_span;
  auto span_to_c = span;
  call_wrap_v ((::GtkGridLayoutChild*) (gobj_()), (gint) (span_to_c));
}

// void gtk_grid_layout_child_set_row (GtkGridLayoutChild* child /*none*/, int row);
// void gtk_grid_layout_child_set_row (::GtkGridLayoutChild* child /*none*/, gint row);
void base::GridLayoutChildBase::set_row (gint row) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayoutChild* child, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_set_row;
  auto row_to_c = row;
  call_wrap_v ((::GtkGridLayoutChild*) (gobj_()), (gint) (row_to_c));
}

// void gtk_grid_layout_child_set_row_span (GtkGridLayoutChild* child /*none*/, int span);
// void gtk_grid_layout_child_set_row_span (::GtkGridLayoutChild* child /*none*/, gint span);
void base::GridLayoutChildBase::set_row_span (gint span) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridLayoutChild* child, gint span);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_layout_child_set_row_span;
  auto span_to_c = span;
  call_wrap_v ((::GtkGridLayoutChild*) (gobj_()), (gint) (span_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridlayoutchild_extra_def_impl.hpp>)
#include <gtk/gridlayoutchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridlayoutchild_extra_impl.hpp>)
#include <gtk/gridlayoutchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void GridLayoutChildClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkGridLayoutChildClass *methods = (::GtkGridLayoutChildClass *) class_struct;
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
