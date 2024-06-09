// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWSORTER_IMPL_HPP_
#define _GI_GTK_COLUMNVIEWSORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// guint gtk_column_view_sorter_get_n_sort_columns (GtkColumnViewSorter* self /*none*/);
// guint gtk_column_view_sorter_get_n_sort_columns (::GtkColumnViewSorter* self /*none*/);
guint base::ColumnViewSorterBase::get_n_sort_columns () noexcept
{
  typedef guint (*call_wrap_t) (::GtkColumnViewSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sorter_get_n_sort_columns;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewSorter*) (gobj_()));
  return _temp_ret;
}

// GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_nth_sort_column (GtkColumnViewSorter* self /*none*/, guint position, GtkSortType* sort_order);
// ::GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_nth_sort_column (::GtkColumnViewSorter* self /*none*/, guint position, ::GtkSortType* sort_order);
Gtk::ColumnViewColumn base::ColumnViewSorterBase::get_nth_sort_column (guint position, Gtk::SortType & sort_order) noexcept
{
  typedef ::GtkColumnViewColumn* (*call_wrap_t) (::GtkColumnViewSorter* self, guint position, ::GtkSortType* sort_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sorter_get_nth_sort_column;
  ::GtkSortType sort_order_o {};
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewSorter*) (gobj_()), (guint) (position_to_c), (::GtkSortType*) (&sort_order_o));
  sort_order = gi::wrap (sort_order_o);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<Gtk::ColumnViewColumn, Gtk::SortType> base::ColumnViewSorterBase::get_nth_sort_column (guint position) noexcept
{
  typedef ::GtkColumnViewColumn* (*call_wrap_t) (::GtkColumnViewSorter* self, guint position, ::GtkSortType* sort_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sorter_get_nth_sort_column;
  ::GtkSortType sort_order_o {};
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewSorter*) (gobj_()), (guint) (position_to_c), (::GtkSortType*) (&sort_order_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = gi::wrap (sort_order_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_primary_sort_column (GtkColumnViewSorter* self /*none*/);
// ::GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_primary_sort_column (::GtkColumnViewSorter* self /*none*/);
Gtk::ColumnViewColumn base::ColumnViewSorterBase::get_primary_sort_column () noexcept
{
  typedef ::GtkColumnViewColumn* (*call_wrap_t) (::GtkColumnViewSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sorter_get_primary_sort_column;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewSorter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSortType gtk_column_view_sorter_get_primary_sort_order (GtkColumnViewSorter* self /*none*/);
// ::GtkSortType gtk_column_view_sorter_get_primary_sort_order (::GtkColumnViewSorter* self /*none*/);
Gtk::SortType base::ColumnViewSorterBase::get_primary_sort_order () noexcept
{
  typedef ::GtkSortType (*call_wrap_t) (::GtkColumnViewSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sorter_get_primary_sort_order;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewSorter*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewsorter_extra_def_impl.hpp>)
#include <gtk/columnviewsorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewsorter_extra_impl.hpp>)
#include <gtk/columnviewsorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColumnViewSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkColumnViewSorterClass *methods = (::GtkColumnViewSorterClass *) class_struct;
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
