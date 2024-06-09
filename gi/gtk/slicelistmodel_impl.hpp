// AUTO-GENERATED

#ifndef _GI_GTK_SLICELISTMODEL_IMPL_HPP_
#define _GI_GTK_SLICELISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel SliceListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SliceListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel SliceListModelBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SliceListModelBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

// GtkSliceListModel* /*full*/ gtk_slice_list_model_new (GListModel* model /*full,nullable*/, guint offset, guint size);
// ::GtkSliceListModel* /*full*/ gtk_slice_list_model_new (::GListModel* model /*full,nullable*/, guint offset, guint size);
Gtk::SliceListModel base::SliceListModelBase::new_ (Gio::ListModel model, guint offset, guint size) noexcept
{
  typedef ::GtkSliceListModel* (*call_wrap_t) (::GListModel* model, guint offset, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_slice_list_model_new;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (guint) (offset_to_c), (guint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::SliceListModel base::SliceListModelBase::new_ (guint offset, guint size) noexcept
{
  typedef ::GtkSliceListModel* (*call_wrap_t) (::GListModel* model, guint offset, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_slice_list_model_new;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (guint) (offset_to_c), (guint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_slice_list_model_get_model (GtkSliceListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_slice_list_model_get_model (::GtkSliceListModel* self /*none*/);
Gio::ListModel base::SliceListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkSliceListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkSliceListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_slice_list_model_get_offset (GtkSliceListModel* self /*none*/);
// guint gtk_slice_list_model_get_offset (::GtkSliceListModel* self /*none*/);
guint base::SliceListModelBase::get_offset () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSliceListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_get_offset;
  auto _temp_ret = call_wrap_v ((::GtkSliceListModel*) (gobj_()));
  return _temp_ret;
}

// guint gtk_slice_list_model_get_size (GtkSliceListModel* self /*none*/);
// guint gtk_slice_list_model_get_size (::GtkSliceListModel* self /*none*/);
guint base::SliceListModelBase::get_size () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSliceListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_get_size;
  auto _temp_ret = call_wrap_v ((::GtkSliceListModel*) (gobj_()));
  return _temp_ret;
}

// void gtk_slice_list_model_set_model (GtkSliceListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_slice_list_model_set_model (::GtkSliceListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::SliceListModelBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkSliceListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkSliceListModel*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::SliceListModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkSliceListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkSliceListModel*) (gobj_()), (::GListModel*) (model_to_c));
}

// void gtk_slice_list_model_set_offset (GtkSliceListModel* self /*none*/, guint offset);
// void gtk_slice_list_model_set_offset (::GtkSliceListModel* self /*none*/, guint offset);
void base::SliceListModelBase::set_offset (guint offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkSliceListModel* self, guint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_set_offset;
  auto offset_to_c = offset;
  call_wrap_v ((::GtkSliceListModel*) (gobj_()), (guint) (offset_to_c));
}

// void gtk_slice_list_model_set_size (GtkSliceListModel* self /*none*/, guint size);
// void gtk_slice_list_model_set_size (::GtkSliceListModel* self /*none*/, guint size);
void base::SliceListModelBase::set_size (guint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkSliceListModel* self, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_slice_list_model_set_size;
  auto size_to_c = size;
  call_wrap_v ((::GtkSliceListModel*) (gobj_()), (guint) (size_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/slicelistmodel_extra_def_impl.hpp>)
#include <gtk/slicelistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/slicelistmodel_extra_impl.hpp>)
#include <gtk/slicelistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SliceListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSliceListModelClass *methods = (::GtkSliceListModelClass *) class_struct;
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
