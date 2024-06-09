// AUTO-GENERATED

#ifndef _GI_GTK_LISTVIEW_IMPL_HPP_
#define _GI_GTK_LISTVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_list_view_new (GtkSelectionModel* model /*full,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkListView* /*none*/ gtk_list_view_new (::GtkSelectionModel* model /*full,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
Gtk::ListView base::ListViewBase::new_ (Gtk::SelectionModel model, Gtk::ListItemFactory factory) noexcept
{
  typedef ::GtkListView* (*call_wrap_t) (::GtkSelectionModel* model, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_view_new;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_full);
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::ListView base::ListViewBase::new_ () noexcept
{
  typedef ::GtkListView* (*call_wrap_t) (::GtkSelectionModel* model, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_view_new;
  auto factory_to_c = nullptr;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_list_view_get_enable_rubberband (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_enable_rubberband (::GtkListView* self /*none*/);
bool base::ListViewBase::get_enable_rubberband () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_enable_rubberband;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return _temp_ret;
}

// GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_factory (GtkListView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_factory (::GtkListView* self /*none*/);
Gtk::ListItemFactory base::ListViewBase::get_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_factory;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_header_factory (GtkListView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_header_factory (::GtkListView* self /*none*/);
Gtk::ListItemFactory base::ListViewBase::get_header_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_header_factory;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*none,nullable*/ gtk_list_view_get_model (GtkListView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_list_view_get_model (::GtkListView* self /*none*/);
Gtk::SelectionModel base::ListViewBase::get_model () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_list_view_get_show_separators (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_show_separators (::GtkListView* self /*none*/);
bool base::ListViewBase::get_show_separators () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_show_separators;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_list_view_get_single_click_activate (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_single_click_activate (::GtkListView* self /*none*/);
bool base::ListViewBase::get_single_click_activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_single_click_activate;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return _temp_ret;
}

// GtkListTabBehavior gtk_list_view_get_tab_behavior (GtkListView* self /*none*/);
// ::GtkListTabBehavior gtk_list_view_get_tab_behavior (::GtkListView* self /*none*/);
Gtk::ListTabBehavior base::ListViewBase::get_tab_behavior () noexcept
{
  typedef ::GtkListTabBehavior (*call_wrap_t) (::GtkListView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_get_tab_behavior;
  auto _temp_ret = call_wrap_v ((::GtkListView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_list_view_scroll_to (GtkListView* self /*none*/, guint pos, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_list_view_scroll_to (::GtkListView* self /*none*/, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
void base::ListViewBase::scroll_to (guint pos, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_scroll_to;
  auto scroll_to_c = gi::unwrap (std::move(scroll), gi::transfer_full);
  auto flags_to_c = gi::unwrap (flags);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkListView*) (gobj_()), (guint) (pos_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}
void base::ListViewBase::scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_scroll_to;
  auto scroll_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto pos_to_c = pos;
  call_wrap_v ((::GtkListView*) (gobj_()), (guint) (pos_to_c), (::GtkListScrollFlags) (flags_to_c), (::GtkScrollInfo*) (scroll_to_c));
}

// void gtk_list_view_set_enable_rubberband (GtkListView* self /*none*/, gboolean enable_rubberband);
// void gtk_list_view_set_enable_rubberband (::GtkListView* self /*none*/, gboolean enable_rubberband);
void base::ListViewBase::set_enable_rubberband (gboolean enable_rubberband) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, gboolean enable_rubberband);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_enable_rubberband;
  auto enable_rubberband_to_c = enable_rubberband;
  call_wrap_v ((::GtkListView*) (gobj_()), (gboolean) (enable_rubberband_to_c));
}

// void gtk_list_view_set_factory (GtkListView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_list_view_set_factory (::GtkListView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ListViewBase::set_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ListViewBase::set_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_list_view_set_header_factory (GtkListView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_list_view_set_header_factory (::GtkListView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ListViewBase::set_header_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_header_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ListViewBase::set_header_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_header_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_list_view_set_model (GtkListView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_list_view_set_model (::GtkListView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
void base::ListViewBase::set_model (Gtk::SelectionModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}
void base::ListViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}

// void gtk_list_view_set_show_separators (GtkListView* self /*none*/, gboolean show_separators);
// void gtk_list_view_set_show_separators (::GtkListView* self /*none*/, gboolean show_separators);
void base::ListViewBase::set_show_separators (gboolean show_separators) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, gboolean show_separators);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_show_separators;
  auto show_separators_to_c = show_separators;
  call_wrap_v ((::GtkListView*) (gobj_()), (gboolean) (show_separators_to_c));
}

// void gtk_list_view_set_single_click_activate (GtkListView* self /*none*/, gboolean single_click_activate);
// void gtk_list_view_set_single_click_activate (::GtkListView* self /*none*/, gboolean single_click_activate);
void base::ListViewBase::set_single_click_activate (gboolean single_click_activate) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, gboolean single_click_activate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_single_click_activate;
  auto single_click_activate_to_c = single_click_activate;
  call_wrap_v ((::GtkListView*) (gobj_()), (gboolean) (single_click_activate_to_c));
}

// void gtk_list_view_set_tab_behavior (GtkListView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_list_view_set_tab_behavior (::GtkListView* self /*none*/, ::GtkListTabBehavior tab_behavior);
void base::ListViewBase::set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept
{
  typedef void (*call_wrap_t) (::GtkListView* self, ::GtkListTabBehavior tab_behavior);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_view_set_tab_behavior;
  auto tab_behavior_to_c = gi::unwrap (tab_behavior);
  call_wrap_v ((::GtkListView*) (gobj_()), (::GtkListTabBehavior) (tab_behavior_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listview_extra_def_impl.hpp>)
#include <gtk/listview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listview_extra_impl.hpp>)
#include <gtk/listview_extra_impl.hpp>
#endif
#endif

#endif
