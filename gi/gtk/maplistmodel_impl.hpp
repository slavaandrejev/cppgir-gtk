// AUTO-GENERATED

#ifndef _GI_GTK_MAPLISTMODEL_IMPL_HPP_
#define _GI_GTK_MAPLISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel MapListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MapListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel MapListModelBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MapListModelBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

// GtkMapListModel* /*full*/ gtk_map_list_model_new (GListModel* model /*full,nullable*/, GtkMapListModelMapFunc map_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkMapListModel* /*full*/ gtk_map_list_model_new (::GListModel* model /*full,nullable*/, Gtk::MapListModelMapFunc::cfunction_type map_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
Gtk::MapListModel base::MapListModelBase::new_ (Gio::ListModel model, Gtk::MapListModelMapFunc map_func) noexcept
{
  typedef ::GtkMapListModel* (*call_wrap_t) (::GListModel* model, Gtk::MapListModelMapFunc::cfunction_type map_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_map_list_model_new;
  auto map_func_wrap_ = map_func ? unwrap (std::move (map_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (Gtk::MapListModelMapFunc::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->wrapper : nullptr), (void*) (map_func_wrap_), (GLib::DestroyNotify::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::MapListModel base::MapListModelBase::new_ (Gtk::MapListModelMapFunc map_func) noexcept
{
  typedef ::GtkMapListModel* (*call_wrap_t) (::GListModel* model, Gtk::MapListModelMapFunc::cfunction_type map_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_map_list_model_new;
  auto map_func_wrap_ = map_func ? unwrap (std::move (map_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c), (Gtk::MapListModelMapFunc::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->wrapper : nullptr), (void*) (map_func_wrap_), (GLib::DestroyNotify::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_map_list_model_get_model (GtkMapListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_map_list_model_get_model (::GtkMapListModel* self /*none*/);
Gio::ListModel base::MapListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkMapListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_map_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkMapListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_map_list_model_has_map (GtkMapListModel* self /*none*/);
// gboolean gtk_map_list_model_has_map (::GtkMapListModel* self /*none*/);
bool base::MapListModelBase::has_map () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMapListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_map_list_model_has_map;
  auto _temp_ret = call_wrap_v ((::GtkMapListModel*) (gobj_()));
  return _temp_ret;
}

// void gtk_map_list_model_set_map_func (GtkMapListModel* self /*none*/, GtkMapListModelMapFunc map_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_map_list_model_set_map_func (::GtkMapListModel* self /*none*/, Gtk::MapListModelMapFunc::cfunction_type map_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
void base::MapListModelBase::set_map_func (Gtk::MapListModelMapFunc map_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkMapListModel* self, Gtk::MapListModelMapFunc::cfunction_type map_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_map_list_model_set_map_func;
  auto map_func_wrap_ = map_func ? unwrap (std::move (map_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkMapListModel*) (gobj_()), (Gtk::MapListModelMapFunc::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->wrapper : nullptr), (void*) (map_func_wrap_), (GLib::DestroyNotify::cfunction_type) (map_func_wrap_ ? &map_func_wrap_->destroy : nullptr));
}

// void gtk_map_list_model_set_model (GtkMapListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_map_list_model_set_model (::GtkMapListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::MapListModelBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkMapListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_map_list_model_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkMapListModel*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::MapListModelBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkMapListModel* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_map_list_model_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkMapListModel*) (gobj_()), (::GListModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/maplistmodel_extra_def_impl.hpp>)
#include <gtk/maplistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/maplistmodel_extra_impl.hpp>)
#include <gtk/maplistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MapListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMapListModelClass *methods = (::GtkMapListModelClass *) class_struct;
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
