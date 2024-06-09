// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEW_IMPL_HPP_
#define _GI_GTK_COLUMNVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable ColumnViewBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ColumnViewBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* /*none*/ gtk_column_view_new (GtkSelectionModel* model /*full,nullable*/);
// ::GtkColumnView* /*none*/ gtk_column_view_new (::GtkSelectionModel* model /*full,nullable*/);
Gtk::ColumnView base::ColumnViewBase::new_ (Gtk::SelectionModel model) noexcept
{
  typedef ::GtkColumnView* (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_column_view_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::ColumnView base::ColumnViewBase::new_ () noexcept
{
  typedef ::GtkColumnView* (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_column_view_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_column_view_append_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_append_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none*/);
void base::ColumnViewBase::append_column (Gtk::ColumnViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkColumnViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_append_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkColumnViewColumn*) (column_to_c));
}

// GListModel* /*none*/ gtk_column_view_get_columns (GtkColumnView* self /*none*/);
// ::GListModel* /*none*/ gtk_column_view_get_columns (::GtkColumnView* self /*none*/);
Gio::ListModel base::ColumnViewBase::get_columns () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_columns;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_get_enable_rubberband (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_enable_rubberband (::GtkColumnView* self /*none*/);
bool base::ColumnViewBase::get_enable_rubberband () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_enable_rubberband;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return _temp_ret;
}

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_header_factory (GtkColumnView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_header_factory (::GtkColumnView* self /*none*/);
Gtk::ListItemFactory base::ColumnViewBase::get_header_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_header_factory;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*none,nullable*/ gtk_column_view_get_model (GtkColumnView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_column_view_get_model (::GtkColumnView* self /*none*/);
Gtk::SelectionModel base::ColumnViewBase::get_model () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_get_reorderable (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_reorderable (::GtkColumnView* self /*none*/);
bool base::ColumnViewBase::get_reorderable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_reorderable;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return _temp_ret;
}

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_row_factory (GtkColumnView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_row_factory (::GtkColumnView* self /*none*/);
Gtk::ListItemFactory base::ColumnViewBase::get_row_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_row_factory;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_get_show_column_separators (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_show_column_separators (::GtkColumnView* self /*none*/);
bool base::ColumnViewBase::get_show_column_separators () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_show_column_separators;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_get_show_row_separators (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_show_row_separators (::GtkColumnView* self /*none*/);
bool base::ColumnViewBase::get_show_row_separators () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_show_row_separators;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_get_single_click_activate (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_single_click_activate (::GtkColumnView* self /*none*/);
bool base::ColumnViewBase::get_single_click_activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_single_click_activate;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return _temp_ret;
}

// GtkSorter* /*none,nullable*/ gtk_column_view_get_sorter (GtkColumnView* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_column_view_get_sorter (::GtkColumnView* self /*none*/);
Gtk::Sorter base::ColumnViewBase::get_sorter () noexcept
{
  typedef ::GtkSorter* (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_sorter;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListTabBehavior gtk_column_view_get_tab_behavior (GtkColumnView* self /*none*/);
// ::GtkListTabBehavior gtk_column_view_get_tab_behavior (::GtkColumnView* self /*none*/);
Gtk::ListTabBehavior base::ColumnViewBase::get_tab_behavior () noexcept
{
  typedef ::GtkListTabBehavior (*call_wrap_t) (::GtkColumnView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_get_tab_behavior;
  auto _temp_ret = call_wrap_v ((::GtkColumnView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_column_view_insert_column (GtkColumnView* self /*none*/, guint position, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_insert_column (::GtkColumnView* self /*none*/, guint position, ::GtkColumnViewColumn* column /*none*/);
void base::ColumnViewBase::insert_column (guint position, Gtk::ColumnViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, guint position, ::GtkColumnViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_insert_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (guint) (position_to_c), (::GtkColumnViewColumn*) (column_to_c));
}

// void gtk_column_view_remove_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_remove_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none*/);
void base::ColumnViewBase::remove_column (Gtk::ColumnViewColumn column) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkColumnViewColumn* column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_remove_column;
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkColumnViewColumn*) (column_to_c));
}

// void gtk_column_view_scroll_to (GtkColumnView* self /*none*/, guint pos, GtkColumnViewColumn* column /*none,nullable*/, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_column_view_scroll_to (::GtkColumnView* self /*none*/, guint pos, ::GtkColumnViewColumn* column /*none,nullable*/, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
void base::ColumnViewBase::scroll_to (guint pos, Gtk::ColumnViewColumn column, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, guint pos, ::GtkColumnViewColumn* column, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_scroll_to;
  auto scroll_to_c = gi::unwrap (std::move(scroll), gi::transfer_full);
  auto flags_to_c = gi::unwrap (flags);
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (guint) (pos_to_c), (::GtkColumnViewColumn*) (column_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}
void base::ColumnViewBase::scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, guint pos, ::GtkColumnViewColumn* column, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_scroll_to;
  auto scroll_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto column_to_c = nullptr;
  auto pos_to_c = pos;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (guint) (pos_to_c), (::GtkColumnViewColumn*) (column_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}

// void gtk_column_view_set_enable_rubberband (GtkColumnView* self /*none*/, gboolean enable_rubberband);
// void gtk_column_view_set_enable_rubberband (::GtkColumnView* self /*none*/, gboolean enable_rubberband);
void base::ColumnViewBase::set_enable_rubberband (gboolean enable_rubberband) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, gboolean enable_rubberband);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_enable_rubberband;
  auto enable_rubberband_to_c = enable_rubberband;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (gboolean) (enable_rubberband_to_c));
}

// void gtk_column_view_set_header_factory (GtkColumnView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_set_header_factory (::GtkColumnView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ColumnViewBase::set_header_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_header_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ColumnViewBase::set_header_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_header_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_column_view_set_model (GtkColumnView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_column_view_set_model (::GtkColumnView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
void base::ColumnViewBase::set_model (Gtk::SelectionModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}
void base::ColumnViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}

// void gtk_column_view_set_reorderable (GtkColumnView* self /*none*/, gboolean reorderable);
// void gtk_column_view_set_reorderable (::GtkColumnView* self /*none*/, gboolean reorderable);
void base::ColumnViewBase::set_reorderable (gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_reorderable;
  auto reorderable_to_c = reorderable;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (gboolean) (reorderable_to_c));
}

// void gtk_column_view_set_row_factory (GtkColumnView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_set_row_factory (::GtkColumnView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ColumnViewBase::set_row_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_row_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ColumnViewBase::set_row_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_row_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_column_view_set_show_column_separators (GtkColumnView* self /*none*/, gboolean show_column_separators);
// void gtk_column_view_set_show_column_separators (::GtkColumnView* self /*none*/, gboolean show_column_separators);
void base::ColumnViewBase::set_show_column_separators (gboolean show_column_separators) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, gboolean show_column_separators);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_show_column_separators;
  auto show_column_separators_to_c = show_column_separators;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (gboolean) (show_column_separators_to_c));
}

// void gtk_column_view_set_show_row_separators (GtkColumnView* self /*none*/, gboolean show_row_separators);
// void gtk_column_view_set_show_row_separators (::GtkColumnView* self /*none*/, gboolean show_row_separators);
void base::ColumnViewBase::set_show_row_separators (gboolean show_row_separators) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, gboolean show_row_separators);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_show_row_separators;
  auto show_row_separators_to_c = show_row_separators;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (gboolean) (show_row_separators_to_c));
}

// void gtk_column_view_set_single_click_activate (GtkColumnView* self /*none*/, gboolean single_click_activate);
// void gtk_column_view_set_single_click_activate (::GtkColumnView* self /*none*/, gboolean single_click_activate);
void base::ColumnViewBase::set_single_click_activate (gboolean single_click_activate) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, gboolean single_click_activate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_single_click_activate;
  auto single_click_activate_to_c = single_click_activate;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (gboolean) (single_click_activate_to_c));
}

// void gtk_column_view_set_tab_behavior (GtkColumnView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_column_view_set_tab_behavior (::GtkColumnView* self /*none*/, ::GtkListTabBehavior tab_behavior);
void base::ColumnViewBase::set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkListTabBehavior tab_behavior);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_set_tab_behavior;
  auto tab_behavior_to_c = gi::unwrap (tab_behavior);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkListTabBehavior) (tab_behavior_to_c));
}

// void gtk_column_view_sort_by_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none,nullable*/, GtkSortType direction);
// void gtk_column_view_sort_by_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none,nullable*/, ::GtkSortType direction);
void base::ColumnViewBase::sort_by_column (Gtk::ColumnViewColumn column, Gtk::SortType direction) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkColumnViewColumn* column, ::GtkSortType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sort_by_column;
  auto direction_to_c = gi::unwrap (direction);
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkColumnViewColumn*) (column_to_c), (::GtkSortType) (direction_to_c));
}
void base::ColumnViewBase::sort_by_column (Gtk::SortType direction) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnView* self, ::GtkColumnViewColumn* column, ::GtkSortType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_sort_by_column;
  auto direction_to_c = gi::unwrap (direction);
  auto column_to_c = nullptr;
  call_wrap_v ((::GtkColumnView*) (gobj_()), (::GtkColumnViewColumn*) (column_to_c), (::GtkSortType) (direction_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnview_extra_def_impl.hpp>)
#include <gtk/columnview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnview_extra_impl.hpp>)
#include <gtk/columnview_extra_impl.hpp>
#endif
#endif

#endif
