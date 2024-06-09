// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONFILTERMODEL_IMPL_HPP_
#define _GI_GTK_SELECTIONFILTERMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel SelectionFilterModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SelectionFilterModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GtkSelectionFilterModel* /*full*/ gtk_selection_filter_model_new (GtkSelectionModel* model /*none,nullable*/);
// ::GtkSelectionFilterModel* /*full*/ gtk_selection_filter_model_new (::GtkSelectionModel* model /*none,nullable*/);
Gtk::SelectionFilterModel base::SelectionFilterModelBase::new_ (Gtk::SelectionModel model) noexcept
{
  typedef ::GtkSelectionFilterModel* (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_filter_model_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::SelectionFilterModel base::SelectionFilterModelBase::new_ () noexcept
{
  typedef ::GtkSelectionFilterModel* (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_filter_model_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSelectionModel* /*none,nullable*/ gtk_selection_filter_model_get_model (GtkSelectionFilterModel* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_selection_filter_model_get_model (::GtkSelectionFilterModel* self /*none*/);
Gtk::SelectionModel base::SelectionFilterModelBase::get_model () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::GtkSelectionFilterModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_filter_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkSelectionFilterModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_selection_filter_model_set_model (GtkSelectionFilterModel* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_selection_filter_model_set_model (::GtkSelectionFilterModel* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
void base::SelectionFilterModelBase::set_model (Gtk::SelectionModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkSelectionFilterModel* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_filter_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkSelectionFilterModel*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}
void base::SelectionFilterModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkSelectionFilterModel* self, ::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_filter_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkSelectionFilterModel*) (gobj_()), (::GtkSelectionModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectionfiltermodel_extra_def_impl.hpp>)
#include <gtk/selectionfiltermodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectionfiltermodel_extra_impl.hpp>)
#include <gtk/selectionfiltermodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SelectionFilterModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSelectionFilterModelClass *methods = (::GtkSelectionFilterModelClass *) class_struct;
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
