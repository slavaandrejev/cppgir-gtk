// AUTO-GENERATED

#ifndef _GI_GTK_SINGLESELECTION_IMPL_HPP_
#define _GI_GTK_SINGLESELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel SingleSelectionBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SingleSelectionBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel SingleSelectionBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SingleSelectionBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

Gtk::SelectionModel SingleSelectionBase::interface_ (gi::interface_tag<Gtk::SelectionModel>)
{ return gi::wrap ((Gtk::SelectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SingleSelectionBase::operator Gtk::SelectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SelectionModel>()); }

// GtkSingleSelection* /*full*/ gtk_single_selection_new (GListModel* model /*full,nullable*/);
// ::GtkSingleSelection* /*full*/ gtk_single_selection_new (::GListModel* model /*full,nullable*/);
Gtk::SingleSelection base::SingleSelectionBase::new_ (Gio::ListModel model) noexcept
{
  typedef ::GtkSingleSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_single_selection_new;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::SingleSelection base::SingleSelectionBase::new_ () noexcept
{
  typedef ::GtkSingleSelection* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_single_selection_new;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_single_selection_get_autoselect (GtkSingleSelection* self /*none*/);
// gboolean gtk_single_selection_get_autoselect (::GtkSingleSelection* self /*none*/);
bool base::SingleSelectionBase::get_autoselect () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSingleSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_get_autoselect;
  auto _temp_ret = call_wrap_v ((::GtkSingleSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_single_selection_get_can_unselect (GtkSingleSelection* self /*none*/);
// gboolean gtk_single_selection_get_can_unselect (::GtkSingleSelection* self /*none*/);
bool base::SingleSelectionBase::get_can_unselect () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSingleSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_get_can_unselect;
  auto _temp_ret = call_wrap_v ((::GtkSingleSelection*) (gobj_()));
  return _temp_ret;
}

// GListModel* /*none,nullable*/ gtk_single_selection_get_model (GtkSingleSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_single_selection_get_model (::GtkSingleSelection* self /*none*/);
Gio::ListModel base::SingleSelectionBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkSingleSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_get_model;
  auto _temp_ret = call_wrap_v ((::GtkSingleSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_single_selection_get_selected (GtkSingleSelection* self /*none*/);
// guint gtk_single_selection_get_selected (::GtkSingleSelection* self /*none*/);
guint base::SingleSelectionBase::get_selected () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSingleSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_get_selected;
  auto _temp_ret = call_wrap_v ((::GtkSingleSelection*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_single_selection_get_selected_item (GtkSingleSelection* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_single_selection_get_selected_item (::GtkSingleSelection* self /*none*/);
GObject::Object base::SingleSelectionBase::get_selected_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkSingleSelection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_get_selected_item;
  auto _temp_ret = call_wrap_v ((::GtkSingleSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_single_selection_set_autoselect (GtkSingleSelection* self /*none*/, gboolean autoselect);
// void gtk_single_selection_set_autoselect (::GtkSingleSelection* self /*none*/, gboolean autoselect);
void base::SingleSelectionBase::set_autoselect (gboolean autoselect) noexcept
{
  typedef void (*call_wrap_t) (::GtkSingleSelection* self, gboolean autoselect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_set_autoselect;
  auto autoselect_to_c = autoselect;
  call_wrap_v ((::GtkSingleSelection*) (gobj_()), (gboolean) (autoselect_to_c));
}

// void gtk_single_selection_set_can_unselect (GtkSingleSelection* self /*none*/, gboolean can_unselect);
// void gtk_single_selection_set_can_unselect (::GtkSingleSelection* self /*none*/, gboolean can_unselect);
void base::SingleSelectionBase::set_can_unselect (gboolean can_unselect) noexcept
{
  typedef void (*call_wrap_t) (::GtkSingleSelection* self, gboolean can_unselect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_set_can_unselect;
  auto can_unselect_to_c = can_unselect;
  call_wrap_v ((::GtkSingleSelection*) (gobj_()), (gboolean) (can_unselect_to_c));
}

// void gtk_single_selection_set_model (GtkSingleSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_single_selection_set_model (::GtkSingleSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::SingleSelectionBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkSingleSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkSingleSelection*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::SingleSelectionBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkSingleSelection* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkSingleSelection*) (gobj_()), (::GListModel*) (model_to_c));
}

// void gtk_single_selection_set_selected (GtkSingleSelection* self /*none*/, guint position);
// void gtk_single_selection_set_selected (::GtkSingleSelection* self /*none*/, guint position);
void base::SingleSelectionBase::set_selected (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkSingleSelection* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_single_selection_set_selected;
  auto position_to_c = position;
  call_wrap_v ((::GtkSingleSelection*) (gobj_()), (guint) (position_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/singleselection_extra_def_impl.hpp>)
#include <gtk/singleselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/singleselection_extra_impl.hpp>)
#include <gtk/singleselection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SingleSelectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSingleSelectionClass *methods = (::GtkSingleSelectionClass *) class_struct;
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
