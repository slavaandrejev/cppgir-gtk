// AUTO-GENERATED

#ifndef _GI_GTK_NOSELECTION_IMPL_HPP_
#define _GI_GTK_NOSELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel NoSelectionBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NoSelectionBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel NoSelectionBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NoSelectionBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

Gtk::SelectionModel NoSelectionBase::interface_ (gi::interface_tag<Gtk::SelectionModel>)
{ return gi::wrap ((Gtk::SelectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NoSelectionBase::operator Gtk::SelectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SelectionModel>()); }

// GtkNoSelection* /*full*/ gtk_no_selection_new (GListModel* model /*full,nullable*/);
// ::GtkNoSelection* /*full*/ gtk_no_selection_new (::GListModel* model /*full,nullable*/);
Gtk::NoSelection base::NoSelectionBase::new_ (Gio::ListModel model) noexcept
{
  typedef ::GtkNoSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_no_selection_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::NoSelection base::NoSelectionBase::new_ () noexcept
{
  typedef ::GtkNoSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_no_selection_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_no_selection_get_model (GtkNoSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_no_selection_get_model (::GtkNoSelection* self /*none*/);
Gio::ListModel base::NoSelectionBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkNoSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_no_selection_get_model;
  auto _temp_ret = call_wrap_v ((::GtkNoSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_no_selection_set_model (GtkNoSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_no_selection_set_model (::GtkNoSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::NoSelectionBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkNoSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_no_selection_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkNoSelection*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::NoSelectionBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkNoSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_no_selection_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkNoSelection*) (gobj_()), (::GListModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/noselection_extra_def_impl.hpp>)
#include <gtk/noselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/noselection_extra_impl.hpp>)
#include <gtk/noselection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NoSelectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkNoSelectionClass *methods = (::GtkNoSelectionClass *) class_struct;
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
