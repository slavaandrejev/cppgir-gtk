// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELFILTER_IMPL_HPP_
#define _GI_GTK_TREEMODELFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::TreeDragSource TreeModelFilterBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeModelFilterBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel TreeModelFilterBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TreeModelFilterBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

// void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter* filter /*none*/);
// void gtk_tree_model_filter_clear_cache (::GtkTreeModelFilter* filter /*none*/);
void base::TreeModelFilterBase::clear_cache () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_clear_cache;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
}

// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter* filter /*none*/, GtkTreeIter* filter_iter /*none,out,ca*/, GtkTreeIter* child_iter /*none*/);
// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (::GtkTreeModelFilter* filter /*none*/, ::GtkTreeIter* filter_iter /*none,out,ca*/, ::GtkTreeIter* child_iter /*none*/);
bool base::TreeModelFilterBase::convert_child_iter_to_iter (Gtk::TreeIter & filter_iter, Gtk::TreeIter_Ref child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none);
  detail::allocate(filter_iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(filter_iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (filter_iter).gobj_()), (::GtkTreeIter*) (child_iter_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelFilterBase::convert_child_iter_to_iter (Gtk::TreeIter_Ref child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none);
  Gtk::TreeIter filter_iter_c;
  auto filter_iter = &filter_iter_c;
  detail::allocate(*filter_iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*filter_iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) (filter_iter ? (::GtkTreeIter*) (*filter_iter).gobj_() : nullptr), (::GtkTreeIter*) (child_iter_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = filter_iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_child_path_to_path (GtkTreeModelFilter* filter /*none*/, GtkTreePath* child_path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_child_path_to_path (::GtkTreeModelFilter* filter /*none*/, ::GtkTreePath* child_path /*none*/);
Gtk::TreePath base::TreeModelFilterBase::convert_child_path_to_path (Gtk::TreePath_Ref child_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreePath* child_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_child_path_to_path;
  auto child_path_to_c = gi::unwrap (child_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreePath*) (child_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_model_filter_convert_iter_to_child_iter (GtkTreeModelFilter* filter /*none*/, GtkTreeIter* child_iter /*none,out,ca*/, GtkTreeIter* filter_iter /*none*/);
// void gtk_tree_model_filter_convert_iter_to_child_iter (::GtkTreeModelFilter* filter /*none*/, ::GtkTreeIter* child_iter /*none,out,ca*/, ::GtkTreeIter* filter_iter /*none*/);
void base::TreeModelFilterBase::convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter_Ref filter_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_iter_to_child_iter;
  auto filter_iter_to_c = gi::unwrap (filter_iter, gi::transfer_none);
  detail::allocate(child_iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(child_iter).gobj_()), "");
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (child_iter).gobj_()), (::GtkTreeIter*) (filter_iter_to_c));
}
Gtk::TreeIter base::TreeModelFilterBase::convert_iter_to_child_iter (Gtk::TreeIter_Ref filter_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_iter_to_child_iter;
  auto filter_iter_to_c = gi::unwrap (filter_iter, gi::transfer_none);
  Gtk::TreeIter child_iter_c;
  auto child_iter = &child_iter_c;
  detail::allocate(*child_iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*child_iter).gobj_()), "");
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) (child_iter ? (::GtkTreeIter*) (*child_iter).gobj_() : nullptr), (::GtkTreeIter*) (filter_iter_to_c));
  return child_iter_c;
}

// GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_path_to_child_path (GtkTreeModelFilter* filter /*none*/, GtkTreePath* filter_path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_path_to_child_path (::GtkTreeModelFilter* filter /*none*/, ::GtkTreePath* filter_path /*none*/);
Gtk::TreePath base::TreeModelFilterBase::convert_path_to_child_path (Gtk::TreePath_Ref filter_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreePath* filter_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_convert_path_to_child_path;
  auto filter_path_to_c = gi::unwrap (filter_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreePath*) (filter_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreeModel* /*none*/ gtk_tree_model_filter_get_model (GtkTreeModelFilter* filter /*none*/);
// ::GtkTreeModel* /*none*/ gtk_tree_model_filter_get_model (::GtkTreeModelFilter* filter /*none*/);
Gtk::TreeModel base::TreeModelFilterBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_tree_model_filter_refilter (GtkTreeModelFilter* filter /*none*/);
// void gtk_tree_model_filter_refilter (::GtkTreeModelFilter* filter /*none*/);
void base::TreeModelFilterBase::refilter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_refilter;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
}

// void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter* filter /*none*/, int n_columns, GType* types /*none*/, GtkTreeModelFilterModifyFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_model_filter_set_modify_func (::GtkTreeModelFilter* filter /*none*/, gint n_columns, GType* types /*none*/, Gtk::TreeModelFilterModifyFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
void base::TreeModelFilterBase::set_modify_func (gint n_columns, const GType * types, Gtk::TreeModelFilterModifyFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, gint n_columns, GType* types, Gtk::TreeModelFilterModifyFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_set_modify_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto types_to_c = types;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (gint) (n_columns), (GType*) (types_to_c), (Gtk::TreeModelFilterModifyFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_model_filter_set_visible_column (GtkTreeModelFilter* filter /*none*/, int column);
// void gtk_tree_model_filter_set_visible_column (::GtkTreeModelFilter* filter /*none*/, gint column);
void base::TreeModelFilterBase::set_visible_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_set_visible_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (gint) (column_to_c));
}

// void gtk_tree_model_filter_set_visible_func (GtkTreeModelFilter* filter /*none*/, GtkTreeModelFilterVisibleFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_model_filter_set_visible_func (::GtkTreeModelFilter* filter /*none*/, Gtk::TreeModelFilterVisibleFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
void base::TreeModelFilterBase::set_visible_func (Gtk::TreeModelFilterVisibleFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, Gtk::TreeModelFilterVisibleFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_set_visible_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (Gtk::TreeModelFilterVisibleFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_def_impl.hpp>)
#include <gtk/treemodelfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_impl.hpp>)
#include <gtk/treemodelfilter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeModelFilterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeModelFilterClass *methods = (::GtkTreeModelFilterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.modify) methods->modify = (decltype (methods->modify)) detail::method_wrapper<self, void (*) (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::modify_>;
  if (init_data.visible) methods->visible = (decltype (methods->visible)) detail::method_wrapper<self, bool (*) (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::visible_>;
}

// void TreeModelFilter::modify (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/, GValue* value /*none*/, int column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/, ::GValue* value /*none*/, gint column);
void TreeModelFilterClass::modify_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column) noexcept
{
  if (!get_struct_()->modify) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter, ::GValue* value, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->modify;
  auto column_to_c = column;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto child_model_to_c = gi::unwrap (child_model, gi::transfer_none);
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeModel*) (child_model_to_c), (::GtkTreeIter*) (iter_to_c), (::GValue*) (value_to_c), (gint) (column_to_c));
}

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool TreeModelFilterClass::visible_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->visible) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->visible;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto child_model_to_c = gi::unwrap (child_model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeModel*) (child_model_to_c), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
