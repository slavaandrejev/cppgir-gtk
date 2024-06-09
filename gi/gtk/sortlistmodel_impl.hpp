// AUTO-GENERATED

#ifndef _GI_GTK_SORTLISTMODEL_IMPL_HPP_
#define _GI_GTK_SORTLISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel SortListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SortListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel SortListModelBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SortListModelBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

// GtkSortListModel* /*full*/ gtk_sort_list_model_new (GListModel* model /*full,nullable*/, GtkSorter* sorter /*full,nullable*/);
// ::GtkSortListModel* /*full*/ gtk_sort_list_model_new (::GListModel* model /*full,nullable*/, ::GtkSorter* sorter /*full,nullable*/);
Gtk::SortListModel base::SortListModelBase::new_ (Gio::ListModel model, Gtk::Sorter sorter) noexcept
{
  typedef ::GtkSortListModel* (*call_wrap_t) (::GListModel* model, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_sort_list_model_new;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_full);
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (::GtkSorter*) (sorter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::SortListModel base::SortListModelBase::new_ () noexcept
{
  typedef ::GtkSortListModel* (*call_wrap_t) (::GListModel* model, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_sort_list_model_new;
  auto sorter_to_c = nullptr;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (::GtkSorter*) (sorter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_sort_list_model_get_incremental (GtkSortListModel* self /*none*/);
// gboolean gtk_sort_list_model_get_incremental (::GtkSortListModel* self /*none*/);
bool base::SortListModelBase::get_incremental () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSortListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_get_incremental;
  auto _temp_ret = call_wrap_v ((::GtkSortListModel*) (gobj_()));
  return _temp_ret;
}

// GListModel* /*none,nullable*/ gtk_sort_list_model_get_model (GtkSortListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_sort_list_model_get_model (::GtkSortListModel* self /*none*/);
Gio::ListModel base::SortListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkSortListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkSortListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_sort_list_model_get_pending (GtkSortListModel* self /*none*/);
// guint gtk_sort_list_model_get_pending (::GtkSortListModel* self /*none*/);
guint base::SortListModelBase::get_pending () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSortListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_get_pending;
  auto _temp_ret = call_wrap_v ((::GtkSortListModel*) (gobj_()));
  return _temp_ret;
}

// GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_section_sorter (GtkSortListModel* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_section_sorter (::GtkSortListModel* self /*none*/);
Gtk::Sorter base::SortListModelBase::get_section_sorter () noexcept
{
  typedef ::GtkSorter* (*call_wrap_t) (::GtkSortListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_get_section_sorter;
  auto _temp_ret = call_wrap_v ((::GtkSortListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_sorter (GtkSortListModel* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_sorter (::GtkSortListModel* self /*none*/);
Gtk::Sorter base::SortListModelBase::get_sorter () noexcept
{
  typedef ::GtkSorter* (*call_wrap_t) (::GtkSortListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_get_sorter;
  auto _temp_ret = call_wrap_v ((::GtkSortListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_sort_list_model_set_incremental (GtkSortListModel* self /*none*/, gboolean incremental);
// void gtk_sort_list_model_set_incremental (::GtkSortListModel* self /*none*/, gboolean incremental);
void base::SortListModelBase::set_incremental (gboolean incremental) noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, gboolean incremental);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_incremental;
  auto incremental_to_c = incremental;
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (gboolean) (incremental_to_c));
}

// void gtk_sort_list_model_set_model (GtkSortListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_sort_list_model_set_model (::GtkSortListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::SortListModelBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::SortListModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GListModel*) (model_to_c));
}

// void gtk_sort_list_model_set_section_sorter (GtkSortListModel* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_sort_list_model_set_section_sorter (::GtkSortListModel* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
void base::SortListModelBase::set_section_sorter (Gtk::Sorter sorter) noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_section_sorter;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_none);
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}
void base::SortListModelBase::set_section_sorter () noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_section_sorter;
  auto sorter_to_c = nullptr;
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}

// void gtk_sort_list_model_set_sorter (GtkSortListModel* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_sort_list_model_set_sorter (::GtkSortListModel* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
void base::SortListModelBase::set_sorter (Gtk::Sorter sorter) noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_sorter;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_none);
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}
void base::SortListModelBase::set_sorter () noexcept
{
  typedef void (*call_wrap_t) (::GtkSortListModel* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sort_list_model_set_sorter;
  auto sorter_to_c = nullptr;
  call_wrap_v ((::GtkSortListModel*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sortlistmodel_extra_def_impl.hpp>)
#include <gtk/sortlistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sortlistmodel_extra_impl.hpp>)
#include <gtk/sortlistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SortListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSortListModelClass *methods = (::GtkSortListModelClass *) class_struct;
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
