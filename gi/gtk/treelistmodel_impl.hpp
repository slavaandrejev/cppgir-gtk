// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTMODEL_IMPL_HPP_
#define _GI_GTK_TREELISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel TreeListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GtkTreeListModel* /*full*/ gtk_tree_list_model_new (GListModel* root /*full*/, gboolean passthrough, gboolean autoexpand, GtkTreeListModelCreateModelFunc create_func /*none*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkTreeListModel* /*full*/ gtk_tree_list_model_new (::GListModel* root /*full*/, gboolean passthrough, gboolean autoexpand, Gtk::TreeListModelCreateModelFunc::cfunction_type create_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
Gtk::TreeListModel base::TreeListModelBase::new_ (Gio::ListModel root, gboolean passthrough, gboolean autoexpand, Gtk::TreeListModelCreateModelFunc create_func) noexcept
{
  typedef ::GtkTreeListModel* (*call_wrap_t) (::GListModel* root, gboolean passthrough, gboolean autoexpand, Gtk::TreeListModelCreateModelFunc::cfunction_type create_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_list_model_new;
  auto create_func_wrap_ = create_func ? unwrap (std::move (create_func), gi::scope_notified) : nullptr;
  auto autoexpand_to_c = autoexpand;
  auto passthrough_to_c = passthrough;
  auto root_to_c = gi::unwrap (root, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GListModel*) (root_to_c), (gboolean) (passthrough_to_c), (gboolean) (autoexpand_to_c), (Gtk::TreeListModelCreateModelFunc::cfunction_type) (create_func_wrap_ ? &create_func_wrap_->wrapper : nullptr), (void*) (create_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_func_wrap_ ? &create_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_tree_list_model_get_autoexpand (GtkTreeListModel* self /*none*/);
// gboolean gtk_tree_list_model_get_autoexpand (::GtkTreeListModel* self /*none*/);
bool base::TreeListModelBase::get_autoexpand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_get_autoexpand;
  auto _temp_ret = call_wrap_v ((::GtkTreeListModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_child_row (GtkTreeListModel* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_child_row (::GtkTreeListModel* self /*none*/, guint position);
Gtk::TreeListRow base::TreeListModelBase::get_child_row (guint position) noexcept
{
  typedef ::GtkTreeListRow* (*call_wrap_t) (::GtkTreeListModel* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_get_child_row;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkTreeListModel*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none*/ gtk_tree_list_model_get_model (GtkTreeListModel* self /*none*/);
// ::GListModel* /*none*/ gtk_tree_list_model_get_model (::GtkTreeListModel* self /*none*/);
Gio::ListModel base::TreeListModelBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkTreeListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeListModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_tree_list_model_get_passthrough (GtkTreeListModel* self /*none*/);
// gboolean gtk_tree_list_model_get_passthrough (::GtkTreeListModel* self /*none*/);
bool base::TreeListModelBase::get_passthrough () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_get_passthrough;
  auto _temp_ret = call_wrap_v ((::GtkTreeListModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_row (GtkTreeListModel* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_row (::GtkTreeListModel* self /*none*/, guint position);
Gtk::TreeListRow base::TreeListModelBase::get_row (guint position) noexcept
{
  typedef ::GtkTreeListRow* (*call_wrap_t) (::GtkTreeListModel* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_get_row;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkTreeListModel*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_list_model_set_autoexpand (GtkTreeListModel* self /*none*/, gboolean autoexpand);
// void gtk_tree_list_model_set_autoexpand (::GtkTreeListModel* self /*none*/, gboolean autoexpand);
void base::TreeListModelBase::set_autoexpand (gboolean autoexpand) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeListModel* self, gboolean autoexpand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_model_set_autoexpand;
  auto autoexpand_to_c = autoexpand;
  call_wrap_v ((::GtkTreeListModel*) (gobj_()), (gboolean) (autoexpand_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistmodel_extra_def_impl.hpp>)
#include <gtk/treelistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistmodel_extra_impl.hpp>)
#include <gtk/treelistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeListModelClass *methods = (::GtkTreeListModelClass *) class_struct;
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
