// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODEL_IMPL_HPP_
#define _GI_GTK_TREEMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreeModel* /*full*/ gtk_tree_model_filter_new (GtkTreeModel* child_model /*none*/, GtkTreePath* root /*none,nullable*/);
// ::GtkTreeModel* /*full*/ gtk_tree_model_filter_new (::GtkTreeModel* child_model /*none*/, ::GtkTreePath* root /*none,nullable*/);
Gtk::TreeModel base::TreeModelBase::filter_new (Gtk::TreePath_Ref root) noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModel* child_model, ::GtkTreePath* root);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_new;
  auto root_to_c = gi::unwrap (root, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (root_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::TreeModel base::TreeModelBase::filter_new () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModel* child_model, ::GtkTreePath* root);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_filter_new;
  auto root_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (root_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_model_foreach (GtkTreeModel* model /*none*/, GtkTreeModelForeachFunc func /*none*/, gpointer user_data);
// void gtk_tree_model_foreach (::GtkTreeModel* model /*none*/, Gtk::TreeModelForeachFunc::cfunction_type func /*none*/, void* user_data);
void base::TreeModelBase::foreach (Gtk::TreeModelForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* model, Gtk::TreeModelForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (Gtk::TreeModelForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_tree_model_get (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// void gtk_tree_model_get (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GType gtk_tree_model_get_column_type (GtkTreeModel* tree_model /*none*/, int index_);
// GType gtk_tree_model_get_column_type (::GtkTreeModel* tree_model /*none*/, gint index_);
GType base::TreeModelBase::get_column_type (gint index_) noexcept
{
  typedef GType (*call_wrap_t) (::GtkTreeModel* tree_model, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_column_type;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (gint) (index__to_c));
  return _temp_ret;
}

// GtkTreeModelFlags gtk_tree_model_get_flags (GtkTreeModel* tree_model /*none*/);
// ::GtkTreeModelFlags gtk_tree_model_get_flags (::GtkTreeModel* tree_model /*none*/);
Gtk::TreeModelFlags base::TreeModelBase::get_flags () noexcept
{
  typedef ::GtkTreeModelFlags (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_flags;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_tree_model_get_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_model_get_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreePath* path /*none*/);
bool base::TreeModelBase::get_iter (Gtk::TreeIter & iter, Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreePath*) (path_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_tree_model_get_iter_first (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// gboolean gtk_tree_model_get_iter_first (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
bool base::TreeModelBase::get_iter_first (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter_first;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter_first () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter_first;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, const char* path_string /*none*/);
// gboolean gtk_tree_model_get_iter_from_string (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, const char* path_string /*none*/);
bool base::TreeModelBase::get_iter_from_string (Gtk::TreeIter & iter, const gi::cstring_v path_string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter_from_string;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (const char*) (path_string_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter_from_string (const gi::cstring_v path_string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_iter_from_string;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (const char*) (path_string_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int gtk_tree_model_get_n_columns (GtkTreeModel* tree_model /*none*/);
// gint gtk_tree_model_get_n_columns (::GtkTreeModel* tree_model /*none*/);
gint base::TreeModelBase::get_n_columns () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_n_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreePath* /*full*/ gtk_tree_model_get_path (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_model_get_path (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
Gtk::TreePath base::TreeModelBase::get_path (Gtk::TreeIter_Ref iter) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_path;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ gtk_tree_model_get_string_from_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// char* /*full,nullable*/ gtk_tree_model_get_string_from_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
gi::cstring base::TreeModelBase::get_string_from_iter (Gtk::TreeIter_Ref iter) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_string_from_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_model_get_valist (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, va_list var_args /*none*/);
// void gtk_tree_model_get_valist (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_model_get_value (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none,out,ca*/);
// void gtk_tree_model_get_value (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none,out,ca*/);
void base::TreeModelBase::get_value (Gtk::TreeIter_Ref iter, gint column, GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_value;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) ((GValue*) (value).gobj_()));
}
GObject::Value base::TreeModelBase::get_value (Gtk::TreeIter_Ref iter, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_get_value;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr));
  return value_c;
}

// gboolean gtk_tree_model_iter_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// gboolean gtk_tree_model_iter_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
bool base::TreeModelBase::iter_children (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_children;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
  return _temp_ret;
}
bool base::TreeModelBase::iter_children (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_children;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_children (Gtk::TreeIter_Ref parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_children;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_children () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_children;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_tree_model_iter_has_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_has_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeModelBase::iter_has_child (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_has_child;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// int gtk_tree_model_iter_n_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,nullable*/);
// gint gtk_tree_model_iter_n_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
gint base::TreeModelBase::iter_n_children (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_n_children;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}
gint base::TreeModelBase::iter_n_children () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_n_children;
  auto iter_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_model_iter_next (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_next (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeModelBase::iter_next (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_next;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_model_iter_nth_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int n);
// gboolean gtk_tree_model_iter_nth_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint n);
bool base::TreeModelBase::iter_nth_child (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  return _temp_ret;
}
bool base::TreeModelBase::iter_nth_child (Gtk::TreeIter & iter, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = nullptr;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_nth_child (Gtk::TreeIter_Ref parent, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_nth_child (gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = nullptr;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_tree_model_iter_parent (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* child /*none*/);
// gboolean gtk_tree_model_iter_parent (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* child /*none*/);
bool base::TreeModelBase::iter_parent (Gtk::TreeIter & iter, Gtk::TreeIter_Ref child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_parent;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) (iter).gobj_()), (::GtkTreeIter*) (child_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_parent (Gtk::TreeIter_Ref child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_parent;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr), (::GtkTreeIter*) (child_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_tree_model_iter_previous (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_previous (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool base::TreeModelBase::iter_previous (Gtk::TreeIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_iter_previous;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_model_ref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_ref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeModelBase::ref_node (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_ref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_changed (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_changed (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeModelBase::row_changed (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_row_changed;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_deleted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_model_row_deleted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
void base::TreeModelBase::row_deleted (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_row_deleted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_model_row_has_child_toggled (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_has_child_toggled (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeModelBase::row_has_child_toggled (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_row_has_child_toggled;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_inserted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_inserted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeModelBase::row_inserted (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_row_inserted;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_rows_reordered (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, int* new_order);
// void gtk_tree_model_rows_reordered (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, gint new_order);
// IGNORE; not introspectable; shadowed-by rows_reordered_with_length

// void gtk_tree_model_rows_reordered_with_length (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none,nullable*/, int* new_order /*none*/, int length);
// void gtk_tree_model_rows_reordered_with_length (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none,nullable*/, gint* new_order /*none*/, gint length);
void base::TreeModelBase::rows_reordered (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, const gint * new_order, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_rows_reordered_with_length;
  auto new_order_to_c = new_order;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (gint*) (new_order_to_c), (gint) (length));
}
void base::TreeModelBase::rows_reordered (Gtk::TreePath_Ref path, const gint * new_order, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_rows_reordered_with_length;
  auto new_order_to_c = new_order;
  auto iter_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (gint*) (new_order_to_c), (gint) (length));
}

// void gtk_tree_model_unref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_unref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
void base::TreeModelBase::unref_node (Gtk::TreeIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_model_unref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_def_impl.hpp>)
#include <gtk/treemodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_impl.hpp>)
#include <gtk/treemodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeModelIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkTreeModelIface *methods = (::GtkTreeModelIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_column_type) methods->get_column_type = (decltype (methods->get_column_type)) detail::method_wrapper<self, GType (*) (gint index_), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_column_type_>;
  if (init_data.get_flags) methods->get_flags = (decltype (methods->get_flags)) detail::method_wrapper<self, Gtk::TreeModelFlags (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_flags_>;
  if (init_data.get_iter) methods->get_iter = (decltype (methods->get_iter)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_iter_>;
  if (init_data.get_n_columns) methods->get_n_columns = (decltype (methods->get_n_columns)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_n_columns_>;
  if (init_data.get_path) methods->get_path = (decltype (methods->get_path)) detail::method_wrapper<self, Gtk::TreePath (*) (Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_path_>;
  if (init_data.get_value) methods->get_value = (decltype (methods->get_value)) detail::method_wrapper<self, void (*) (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_value_>;
  if (init_data.iter_children) methods->iter_children = (decltype (methods->iter_children)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::iter_children_>;
  if (init_data.iter_has_child) methods->iter_has_child = (decltype (methods->iter_has_child)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iter_has_child_>;
  if (init_data.iter_n_children) methods->iter_n_children = (decltype (methods->iter_n_children)) detail::method_wrapper<self, gint (*) (Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iter_n_children_>;
  if (init_data.iter_next) methods->iter_next = (decltype (methods->iter_next)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iter_next_>;
  if (init_data.iter_nth_child) methods->iter_nth_child = (decltype (methods->iter_nth_child)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent, gint n), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::iter_nth_child_>;
  if (init_data.iter_parent) methods->iter_parent = (decltype (methods->iter_parent)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref child), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::iter_parent_>;
  if (init_data.iter_previous) methods->iter_previous = (decltype (methods->iter_previous)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iter_previous_>;
  if (init_data.ref_node) methods->ref_node = (decltype (methods->ref_node)) detail::method_wrapper<self, void (*) (Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::ref_node_>;
  if (init_data.row_changed) methods->row_changed = (decltype (methods->row_changed)) detail::method_wrapper<self, void (*) (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::row_changed_>;
  if (init_data.row_deleted) methods->row_deleted = (decltype (methods->row_deleted)) detail::method_wrapper<self, void (*) (Gtk::TreePath_Ref path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::row_deleted_>;
  if (init_data.row_has_child_toggled) methods->row_has_child_toggled = (decltype (methods->row_has_child_toggled)) detail::method_wrapper<self, void (*) (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::row_has_child_toggled_>;
  if (init_data.row_inserted) methods->row_inserted = (decltype (methods->row_inserted)) detail::method_wrapper<self, void (*) (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::row_inserted_>;
  if (init_data.unref_node) methods->unref_node = (decltype (methods->unref_node)) detail::method_wrapper<self, void (*) (Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::unref_node_>;
}

// GType TreeModel::get_column_type (GtkTreeModel* tree_model /*none*/, int index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model /*none*/, gint index_);
GType TreeModelIfaceClassImpl::get_column_type_ (gint index_) noexcept
{
  if (!get_struct_()->get_column_type) { g_critical ("no method in class struct"); return {}; }
  typedef GType (*call_wrap_t) (::GtkTreeModel* tree_model, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_column_type;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (gint) (index__to_c));
  return _temp_ret;
}

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model /*none*/);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model /*none*/);
Gtk::TreeModelFlags TreeModelIfaceClassImpl::get_flags_ () noexcept
{
  if (!get_struct_()->get_flags) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkTreeModelFlags (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_flags;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreePath* path /*none*/);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreePath* path /*none*/);
bool TreeModelIfaceClassImpl::get_iter_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept
{
  if (!get_struct_()->get_iter) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_iter;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// int TreeModel::get_n_columns (GtkTreeModel* tree_model /*none*/);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model /*none*/);
gint TreeModelIfaceClassImpl::get_n_columns_ () noexcept
{
  if (!get_struct_()->get_n_columns) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreePath* /*full*/ TreeModel::get_path (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// ::GtkTreePath* /*full*/ TreeModel::get_path (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
Gtk::TreePath TreeModelIfaceClassImpl::get_path_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->get_path) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_path;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void TreeModel::get_value (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none,out,ca*/);
// void TreeModel::get_value (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none,out,ca*/);
void TreeModelIfaceClassImpl::get_value_ (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept
{
  if (!get_struct_()->get_value) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value_to_c));
}

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
bool TreeModelIfaceClassImpl::iter_children_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent) noexcept
{
  if (!get_struct_()->iter_children) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_children;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (parent_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool TreeModelIfaceClassImpl::iter_has_child_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->iter_has_child) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_has_child;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// int TreeModel::iter_n_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,nullable*/);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
gint TreeModelIfaceClassImpl::iter_n_children_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->iter_n_children) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_n_children;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool TreeModelIfaceClassImpl::iter_next_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->iter_next) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_next;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint n);
bool TreeModelIfaceClassImpl::iter_nth_child_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent, gint n) noexcept
{
  if (!get_struct_()->iter_nth_child) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* child /*none*/);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* child /*none*/);
bool TreeModelIfaceClassImpl::iter_parent_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref child) noexcept
{
  if (!get_struct_()->iter_parent) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_parent;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (child_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
bool TreeModelIfaceClassImpl::iter_previous_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->iter_previous) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_previous;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void TreeModel::ref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::ref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
void TreeModelIfaceClassImpl::ref_node_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->ref_node) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_changed (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_changed (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void TreeModelIfaceClassImpl::row_changed_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->row_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_changed;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_deleted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
void TreeModelIfaceClassImpl::row_deleted_ (Gtk::TreePath_Ref path) noexcept
{
  if (!get_struct_()->row_deleted) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_deleted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void TreeModelIfaceClassImpl::row_has_child_toggled_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->row_has_child_toggled) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_has_child_toggled;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_inserted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
void TreeModelIfaceClassImpl::row_inserted_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->row_inserted) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_inserted;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::unref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::unref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
void TreeModelIfaceClassImpl::unref_node_ (Gtk::TreeIter_Ref iter) noexcept
{
  if (!get_struct_()->unref_node) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
