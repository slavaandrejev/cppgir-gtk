// AUTO-GENERATED

#ifndef _GI_GTK_MULTISELECTION_IMPL_HPP_
#define _GI_GTK_MULTISELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel MultiSelectionBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiSelectionBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel MultiSelectionBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiSelectionBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

Gtk::SelectionModel MultiSelectionBase::interface_ (gi::interface_tag<Gtk::SelectionModel>)
{ return gi::wrap ((Gtk::SelectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiSelectionBase::operator Gtk::SelectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SelectionModel>()); }

// GtkMultiSelection* /*full*/ gtk_multi_selection_new (GListModel* model /*full,nullable*/);
// ::GtkMultiSelection* /*full*/ gtk_multi_selection_new (::GListModel* model /*full,nullable*/);
Gtk::MultiSelection base::MultiSelectionBase::new_ (Gio::ListModel model) noexcept
{
  typedef ::GtkMultiSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_multi_selection_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::MultiSelection base::MultiSelectionBase::new_ () noexcept
{
  typedef ::GtkMultiSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_multi_selection_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_multi_selection_get_model (GtkMultiSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_multi_selection_get_model (::GtkMultiSelection* self /*none*/);
Gio::ListModel base::MultiSelectionBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkMultiSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_selection_get_model;
  auto _temp_ret = call_wrap_v ((::GtkMultiSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_multi_selection_set_model (GtkMultiSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_multi_selection_set_model (::GtkMultiSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::MultiSelectionBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_selection_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkMultiSelection*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::MultiSelectionBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_selection_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkMultiSelection*) (gobj_()), (::GListModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multiselection_extra_def_impl.hpp>)
#include <gtk/multiselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multiselection_extra_impl.hpp>)
#include <gtk/multiselection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MultiSelectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMultiSelectionClass *methods = (::GtkMultiSelectionClass *) class_struct;
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
