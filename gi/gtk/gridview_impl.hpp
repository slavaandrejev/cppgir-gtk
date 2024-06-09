// AUTO-GENERATED

#ifndef _GI_GTK_GRIDVIEW_IMPL_HPP_
#define _GI_GTK_GRIDVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_grid_view_new (GtkSelectionModel* model /*full,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkGridView* /*none*/ gtk_grid_view_new (::GtkSelectionModel* model /*full,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
Gtk::GridView base::GridViewBase::new_ (Gtk::SelectionModel model, Gtk::ListItemFactory factory) noexcept
{
  typedef ::GtkGridView* (*call_wrap_t) (::GtkSelectionModel* model, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_view_new;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_full);
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::GridView base::GridViewBase::new_ () noexcept
{
  typedef ::GtkGridView* (*call_wrap_t) (::GtkSelectionModel* model, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_view_new;
  auto factory_to_c = nullptr;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_grid_view_get_enable_rubberband (GtkGridView* self /*none*/);
// gboolean gtk_grid_view_get_enable_rubberband (::GtkGridView* self /*none*/);
bool base::GridViewBase::get_enable_rubberband () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_enable_rubberband;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return _temp_ret;
}

// GtkListItemFactory* /*none,nullable*/ gtk_grid_view_get_factory (GtkGridView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_grid_view_get_factory (::GtkGridView* self /*none*/);
Gtk::ListItemFactory base::GridViewBase::get_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_factory;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_grid_view_get_max_columns (GtkGridView* self /*none*/);
// guint gtk_grid_view_get_max_columns (::GtkGridView* self /*none*/);
guint base::GridViewBase::get_max_columns () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_max_columns;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return _temp_ret;
}

// guint gtk_grid_view_get_min_columns (GtkGridView* self /*none*/);
// guint gtk_grid_view_get_min_columns (::GtkGridView* self /*none*/);
guint base::GridViewBase::get_min_columns () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_min_columns;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return _temp_ret;
}

// GtkSelectionModel* /*none,nullable*/ gtk_grid_view_get_model (GtkGridView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_grid_view_get_model (::GtkGridView* self /*none*/);
Gtk::SelectionModel base::GridViewBase::get_model () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_grid_view_get_single_click_activate (GtkGridView* self /*none*/);
// gboolean gtk_grid_view_get_single_click_activate (::GtkGridView* self /*none*/);
bool base::GridViewBase::get_single_click_activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_single_click_activate;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return _temp_ret;
}

// GtkListTabBehavior gtk_grid_view_get_tab_behavior (GtkGridView* self /*none*/);
// ::GtkListTabBehavior gtk_grid_view_get_tab_behavior (::GtkGridView* self /*none*/);
Gtk::ListTabBehavior base::GridViewBase::get_tab_behavior () noexcept
{
  typedef ::GtkListTabBehavior (*call_wrap_t) (::GtkGridView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_get_tab_behavior;
  auto _temp_ret = call_wrap_v ((::GtkGridView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_grid_view_scroll_to (GtkGridView* self /*none*/, guint pos, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_grid_view_scroll_to (::GtkGridView* self /*none*/, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
void base::GridViewBase::scroll_to (guint pos, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_scroll_to;
  auto scroll_to_c = gi::unwrap (std::move(scroll), gi::transfer_full);
  auto flags_to_c = gi::unwrap (flags);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkGridView*) (gobj_()), (guint) (pos_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}
void base::GridViewBase::scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_scroll_to;
  auto scroll_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkGridView*) (gobj_()), (guint) (pos_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}

// void gtk_grid_view_set_enable_rubberband (GtkGridView* self /*none*/, gboolean enable_rubberband);
// void gtk_grid_view_set_enable_rubberband (::GtkGridView* self /*none*/, gboolean enable_rubberband);
void base::GridViewBase::set_enable_rubberband (gboolean enable_rubberband) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, gboolean enable_rubberband);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_enable_rubberband;
  auto enable_rubberband_to_c = enable_rubberband;
  call_wrap_v ((::GtkGridView*) (gobj_()), (gboolean) (enable_rubberband_to_c));
}

// void gtk_grid_view_set_factory (GtkGridView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_grid_view_set_factory (::GtkGridView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::GridViewBase::set_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkGridView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::GridViewBase::set_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkGridView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_grid_view_set_max_columns (GtkGridView* self /*none*/, guint max_columns);
// void gtk_grid_view_set_max_columns (::GtkGridView* self /*none*/, guint max_columns);
void base::GridViewBase::set_max_columns (guint max_columns) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, guint max_columns);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_max_columns;
  auto max_columns_to_c = max_columns;
  call_wrap_v ((::GtkGridView*) (gobj_()), (guint) (max_columns_to_c));
}

// void gtk_grid_view_set_min_columns (GtkGridView* self /*none*/, guint min_columns);
// void gtk_grid_view_set_min_columns (::GtkGridView* self /*none*/, guint min_columns);
void base::GridViewBase::set_min_columns (guint min_columns) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, guint min_columns);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_min_columns;
  auto min_columns_to_c = min_columns;
  call_wrap_v ((::GtkGridView*) (gobj_()), (guint) (min_columns_to_c));
}

// void gtk_grid_view_set_model (GtkGridView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_grid_view_set_model (::GtkGridView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
void base::GridViewBase::set_model (Gtk::SelectionModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkGridView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}
void base::GridViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkGridView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}

// void gtk_grid_view_set_single_click_activate (GtkGridView* self /*none*/, gboolean single_click_activate);
// void gtk_grid_view_set_single_click_activate (::GtkGridView* self /*none*/, gboolean single_click_activate);
void base::GridViewBase::set_single_click_activate (gboolean single_click_activate) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, gboolean single_click_activate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_single_click_activate;
  auto single_click_activate_to_c = single_click_activate;
  call_wrap_v ((::GtkGridView*) (gobj_()), (gboolean) (single_click_activate_to_c));
}

// void gtk_grid_view_set_tab_behavior (GtkGridView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_grid_view_set_tab_behavior (::GtkGridView* self /*none*/, ::GtkListTabBehavior tab_behavior);
void base::GridViewBase::set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept
{
  typedef void (*call_wrap_t) (::GtkGridView* self, ::GtkListTabBehavior tab_behavior);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_grid_view_set_tab_behavior;
  auto tab_behavior_to_c = gi::unwrap (tab_behavior);
  call_wrap_v ((::GtkGridView*) (gobj_()), (::GtkListTabBehavior) (tab_behavior_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridview_extra_def_impl.hpp>)
#include <gtk/gridview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridview_extra_impl.hpp>)
#include <gtk/gridview_extra_impl.hpp>
#endif
#endif

#endif
