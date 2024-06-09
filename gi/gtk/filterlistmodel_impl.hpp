// AUTO-GENERATED

#ifndef _GI_GTK_FILTERLISTMODEL_IMPL_HPP_
#define _GI_GTK_FILTERLISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel FilterListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FilterListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel FilterListModelBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FilterListModelBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

// GtkFilterListModel* /*full*/ gtk_filter_list_model_new (GListModel* model /*full,nullable*/, GtkFilter* filter /*full,nullable*/);
// ::GtkFilterListModel* /*full*/ gtk_filter_list_model_new (::GListModel* model /*full,nullable*/, ::GtkFilter* filter /*full,nullable*/);
Gtk::FilterListModel base::FilterListModelBase::new_ (Gio::ListModel model, Gtk::Filter filter) noexcept
{
  typedef ::GtkFilterListModel* (*call_wrap_t) (::GListModel* model, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_filter_list_model_new;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_full);
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (::GtkFilter*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::FilterListModel base::FilterListModelBase::new_ () noexcept
{
  typedef ::GtkFilterListModel* (*call_wrap_t) (::GListModel* model, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_filter_list_model_new;
  auto filter_to_c = nullptr;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (::GtkFilter*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFilter* /*none,nullable*/ gtk_filter_list_model_get_filter (GtkFilterListModel* self /*none*/);
// ::GtkFilter* /*none,nullable*/ gtk_filter_list_model_get_filter (::GtkFilterListModel* self /*none*/);
Gtk::Filter base::FilterListModelBase::get_filter () noexcept
{
  typedef ::GtkFilter* (*call_wrap_t) (::GtkFilterListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_get_filter;
  auto _temp_ret = call_wrap_v ((::GtkFilterListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_filter_list_model_get_incremental (GtkFilterListModel* self /*none*/);
// gboolean gtk_filter_list_model_get_incremental (::GtkFilterListModel* self /*none*/);
bool base::FilterListModelBase::get_incremental () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFilterListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_get_incremental;
  auto _temp_ret = call_wrap_v ((::GtkFilterListModel*) (gobj_()));
  return _temp_ret;
}

// GListModel* /*none,nullable*/ gtk_filter_list_model_get_model (GtkFilterListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_filter_list_model_get_model (::GtkFilterListModel* self /*none*/);
Gio::ListModel base::FilterListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFilterListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkFilterListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_filter_list_model_get_pending (GtkFilterListModel* self /*none*/);
// guint gtk_filter_list_model_get_pending (::GtkFilterListModel* self /*none*/);
guint base::FilterListModelBase::get_pending () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFilterListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_get_pending;
  auto _temp_ret = call_wrap_v ((::GtkFilterListModel*) (gobj_()));
  return _temp_ret;
}

// void gtk_filter_list_model_set_filter (GtkFilterListModel* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void gtk_filter_list_model_set_filter (::GtkFilterListModel* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
void base::FilterListModelBase::set_filter (Gtk::Filter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFilterListModel* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFilterListModel*) (gobj_()), (::GtkFilter*) (filter_to_c));
}
void base::FilterListModelBase::set_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkFilterListModel* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_set_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::GtkFilterListModel*) (gobj_()), (::GtkFilter*) (filter_to_c));
}

// void gtk_filter_list_model_set_incremental (GtkFilterListModel* self /*none*/, gboolean incremental);
// void gtk_filter_list_model_set_incremental (::GtkFilterListModel* self /*none*/, gboolean incremental);
void base::FilterListModelBase::set_incremental (gboolean incremental) noexcept
{
  typedef void (*call_wrap_t) (::GtkFilterListModel* self, gboolean incremental);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_set_incremental;
  auto incremental_to_c = incremental;
  call_wrap_v ((::GtkFilterListModel*) (gobj_()), (gboolean) (incremental_to_c));
}

// void gtk_filter_list_model_set_model (GtkFilterListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_filter_list_model_set_model (::GtkFilterListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::FilterListModelBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkFilterListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkFilterListModel*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::FilterListModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkFilterListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_list_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkFilterListModel*) (gobj_()), (::GListModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filterlistmodel_extra_def_impl.hpp>)
#include <gtk/filterlistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filterlistmodel_extra_impl.hpp>)
#include <gtk/filterlistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FilterListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFilterListModelClass *methods = (::GtkFilterListModelClass *) class_struct;
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
