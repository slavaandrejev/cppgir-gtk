// AUTO-GENERATED

#ifndef _GI_GTK_FLATTENLISTMODEL_IMPL_HPP_
#define _GI_GTK_FLATTENLISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel FlattenListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FlattenListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel FlattenListModelBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FlattenListModelBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

// GtkFlattenListModel* /*full*/ gtk_flatten_list_model_new (GListModel* model /*full,nullable*/);
// ::GtkFlattenListModel* /*full*/ gtk_flatten_list_model_new (::GListModel* model /*full,nullable*/);
Gtk::FlattenListModel base::FlattenListModelBase::new_ (Gio::ListModel model) noexcept
{
  typedef ::GtkFlattenListModel* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flatten_list_model_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::FlattenListModel base::FlattenListModelBase::new_ () noexcept
{
  typedef ::GtkFlattenListModel* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flatten_list_model_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model (GtkFlattenListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model (::GtkFlattenListModel* self /*none*/);
Gio::ListModel base::FlattenListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFlattenListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flatten_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkFlattenListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model_for_item (GtkFlattenListModel* self /*none*/, guint position);
// ::GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model_for_item (::GtkFlattenListModel* self /*none*/, guint position);
Gio::ListModel base::FlattenListModelBase::get_model_for_item (guint position) noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFlattenListModel* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flatten_list_model_get_model_for_item;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkFlattenListModel*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_flatten_list_model_set_model (GtkFlattenListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_flatten_list_model_set_model (::GtkFlattenListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::FlattenListModelBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlattenListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flatten_list_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkFlattenListModel*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::FlattenListModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlattenListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flatten_list_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkFlattenListModel*) (gobj_()), (::GListModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flattenlistmodel_extra_def_impl.hpp>)
#include <gtk/flattenlistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flattenlistmodel_extra_impl.hpp>)
#include <gtk/flattenlistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FlattenListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFlattenListModelClass *methods = (::GtkFlattenListModelClass *) class_struct;
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
