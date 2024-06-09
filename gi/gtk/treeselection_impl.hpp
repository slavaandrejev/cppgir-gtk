// AUTO-GENERATED

#ifndef _GI_GTK_TREESELECTION_IMPL_HPP_
#define _GI_GTK_TREESELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// int gtk_tree_selection_count_selected_rows (GtkTreeSelection* selection /*none*/);
// gint gtk_tree_selection_count_selected_rows (::GtkTreeSelection* selection /*none*/);
gint base::TreeSelectionBase::count_selected_rows () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_count_selected_rows;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return _temp_ret;
}

// GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection* selection /*none*/);
// ::GtkSelectionMode gtk_tree_selection_get_mode (::GtkTreeSelection* selection /*none*/);
Gtk::SelectionMode base::TreeSelectionBase::get_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_mode;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// FAILURE on gtk_tree_selection_get_select_function; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_selection_get_selected (GtkTreeSelection* selection /*none*/, GtkTreeModel** model /*none,out,opt*/, GtkTreeIter* iter /*none,out,opt,ca*/);
// gboolean gtk_tree_selection_get_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel** model /*none,out,opt*/, ::GtkTreeIter* iter /*none,out,opt,ca*/);
bool base::TreeSelectionBase::get_selected (Gtk::TreeModel * model, Gtk::TreeIter * iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_selected;
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (model ? &model_o : nullptr), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  if (model) *model = gi::wrap (model_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreeIter> base::TreeSelectionBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_selected;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (&model_o), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (model_o, gi::transfer_none);
  auto &&tmp_return_3 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GList* /*full*/ gtk_tree_selection_get_selected_rows (GtkTreeSelection* selection /*none*/, GtkTreeModel** model /*none,out,opt*/);
// ::GList* /*full*/ gtk_tree_selection_get_selected_rows (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel** model /*none,out,opt*/);
gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t> base::TreeSelectionBase::get_selected_rows (Gtk::TreeModel * model) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_selected_rows;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (model ? &model_o : nullptr));
  if (model) *model = gi::wrap (model_o, gi::transfer_none);
  return gi::wrap_to<gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t>, Gtk::TreeModel> base::TreeSelectionBase::get_selected_rows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_selected_rows;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (&model_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (model_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkTreeView* /*none*/ gtk_tree_selection_get_tree_view (GtkTreeSelection* selection /*none*/);
// ::GtkTreeView* /*none*/ gtk_tree_selection_get_tree_view (::GtkTreeSelection* selection /*none*/);
Gtk::TreeView base::TreeSelectionBase::get_tree_view () noexcept
{
  typedef ::GtkTreeView* (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_tree_view;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gpointer gtk_tree_selection_get_user_data (GtkTreeSelection* selection /*none*/);
// void* gtk_tree_selection_get_user_data (::GtkTreeSelection* selection /*none*/);
gpointer base::TreeSelectionBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_get_user_data;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_selection_iter_is_selected (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_selection_iter_is_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeSelectionBase::iter_is_selected (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_iter_is_selected;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_selection_path_is_selected (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_selection_path_is_selected (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
bool base::TreeSelectionBase::path_is_selected (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_path_is_selected;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_tree_selection_select_all (GtkTreeSelection* selection /*none*/);
// void gtk_tree_selection_select_all (::GtkTreeSelection* selection /*none*/);
void base::TreeSelectionBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_select_all;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()));
}

// void gtk_tree_selection_select_iter (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_selection_select_iter (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeSelectionBase::select_iter (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_select_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_selection_select_path (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_selection_select_path (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
void base::TreeSelectionBase::select_path (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_select_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_selection_select_range (GtkTreeSelection* selection /*none*/, GtkTreePath* start_path /*none*/, GtkTreePath* end_path /*none*/);
// void gtk_tree_selection_select_range (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* start_path /*none*/, ::GtkTreePath* end_path /*none*/);
void base::TreeSelectionBase::select_range (Gtk::TreePath_Ref start_path, Gtk::TreePath_Ref end_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_select_range;
  auto end_path_to_c = gi::unwrap (end_path, gi::transfer_none);
  auto start_path_to_c = gi::unwrap (start_path, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (start_path_to_c), (::GtkTreePath*) (end_path_to_c));
}

// void gtk_tree_selection_selected_foreach (GtkTreeSelection* selection /*none*/, GtkTreeSelectionForeachFunc func /*none*/, gpointer data);
// void gtk_tree_selection_selected_foreach (::GtkTreeSelection* selection /*none*/, Gtk::TreeSelectionForeachFunc::cfunction_type func /*none*/, void* data);
void base::TreeSelectionBase::selected_foreach (Gtk::TreeSelectionForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, Gtk::TreeSelectionForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (Gtk::TreeSelectionForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_tree_selection_set_mode (GtkTreeSelection* selection /*none*/, GtkSelectionMode type);
// void gtk_tree_selection_set_mode (::GtkTreeSelection* selection /*none*/, ::GtkSelectionMode type);
void base::TreeSelectionBase::set_mode (Gtk::SelectionMode type) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkSelectionMode type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_set_mode;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkSelectionMode) (type_to_c));
}

// void gtk_tree_selection_set_select_function (GtkTreeSelection* selection /*none*/, GtkTreeSelectionFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// void gtk_tree_selection_set_select_function (::GtkTreeSelection* selection /*none*/, Gtk::TreeSelectionFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::TreeSelectionBase::set_select_function (Gtk::TreeSelectionFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, Gtk::TreeSelectionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_set_select_function;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (Gtk::TreeSelectionFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_selection_unselect_all (GtkTreeSelection* selection /*none*/);
// void gtk_tree_selection_unselect_all (::GtkTreeSelection* selection /*none*/);
void base::TreeSelectionBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_unselect_all;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()));
}

// void gtk_tree_selection_unselect_iter (GtkTreeSelection* selection /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_selection_unselect_iter (::GtkTreeSelection* selection /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeSelectionBase::unselect_iter (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_unselect_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_selection_unselect_path (GtkTreeSelection* selection /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_selection_unselect_path (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* path /*none*/);
void base::TreeSelectionBase::unselect_path (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_unselect_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_selection_unselect_range (GtkTreeSelection* selection /*none*/, GtkTreePath* start_path /*none*/, GtkTreePath* end_path /*none*/);
// void gtk_tree_selection_unselect_range (::GtkTreeSelection* selection /*none*/, ::GtkTreePath* start_path /*none*/, ::GtkTreePath* end_path /*none*/);
void base::TreeSelectionBase::unselect_range (Gtk::TreePath_Ref start_path, Gtk::TreePath_Ref end_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_selection_unselect_range;
  auto end_path_to_c = gi::unwrap (end_path, gi::transfer_none);
  auto start_path_to_c = gi::unwrap (start_path, gi::transfer_none);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (start_path_to_c), (::GtkTreePath*) (end_path_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_def_impl.hpp>)
#include <gtk/treeselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_impl.hpp>)
#include <gtk/treeselection_extra_impl.hpp>
#endif
#endif

#endif
