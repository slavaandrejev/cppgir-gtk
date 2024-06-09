// AUTO-GENERATED

#ifndef _GI_GLIB_TREE_IMPL_HPP_
#define _GI_GLIB_TREE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GTree* /*full*/ g_tree_new (GCompareFunc key_compare_func /*none*/);
// ::GTree* /*full*/ g_tree_new ( key_compare_func /*none*/);
// IGNORE; not introspectable, key_compare_func type  not supported

// GTree* /*full*/ g_tree_new_full (GCompareDataFunc key_compare_func /*none*/, gpointer key_compare_data, GDestroyNotify key_destroy_func /*none*/, GDestroyNotify value_destroy_func /*none*/);
// ::GTree* /*full*/ g_tree_new_full (GLib::CompareDataFunc::cfunction_type key_compare_func /*none*/, void* key_compare_data, GLib::DestroyNotify::cfunction_type key_destroy_func /*none*/, GLib::DestroyNotify::cfunction_type value_destroy_func /*none*/);
// SKIP; callback misses closure info

// GTree* /*full*/ g_tree_new_with_data (GCompareDataFunc key_compare_func /*none*/, gpointer key_compare_data);
// ::GTree* /*full*/ g_tree_new_with_data (GLib::CompareDataFunc::cfunction_type key_compare_func /*none*/, void* key_compare_data);
// IGNORE; not introspectable, callback misses scope info

// void g_tree_destroy (GTree* tree /*none*/);
// void g_tree_destroy (::GTree* tree /*none*/);
void base::TreeBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_destroy;
  call_wrap_v ((::GTree*) (gobj_()));
}

// void g_tree_foreach (GTree* tree /*none*/, GTraverseFunc func /*none*/, gpointer user_data);
// void g_tree_foreach (::GTree* tree /*none*/, GLib::TraverseFunc::cfunction_type func /*none*/, void* user_data);
void base::TreeBase::foreach (GLib::TraverseFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, GLib::TraverseFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GTree*) (gobj_()), (GLib::TraverseFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void g_tree_foreach_node (GTree* tree /*none*/, GTraverseNodeFunc func /*none*/, gpointer user_data);
// void g_tree_foreach_node (::GTree* tree /*none*/,  func /*none*/, void* user_data);
// SKIP; func type  not supported

// gint g_tree_height (GTree* tree /*none*/);
// gint g_tree_height (::GTree* tree /*none*/);
gint base::TreeBase::height () noexcept
{
  typedef gint (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_height;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()));
  return _temp_ret;
}

// void g_tree_insert (GTree* tree /*none*/, gpointer key, gpointer value);
// void g_tree_insert (::GTree* tree /*none*/, void* key, void* value);
void base::TreeBase::insert (void* key, void* value) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, void* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_insert;
  auto value_to_c = value;
  auto key_to_c = key;
  call_wrap_v ((::GTree*) (gobj_()), (void*) (key_to_c), (void*) (value_to_c));
}

// GTreeNode* /*none,nullable*/ g_tree_insert_node (GTree* tree /*none*/, gpointer key, gpointer value);
//  /*none,nullable*/ g_tree_insert_node (::GTree* tree /*none*/, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_lookup (GTree* tree /*none*/, gconstpointer key);
// void* g_tree_lookup (::GTree* tree /*none*/, const void* key);
gpointer base::TreeBase::lookup (const void* key) noexcept
{
  typedef void* (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_lookup;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// gboolean g_tree_lookup_extended (GTree* tree /*none*/, gconstpointer lookup_key, gpointer* orig_key, gpointer* value);
// gboolean g_tree_lookup_extended (::GTree* tree /*none*/, const void* lookup_key, void** orig_key, void** value);
bool base::TreeBase::lookup_extended (const void* lookup_key, gpointer * orig_key, gpointer * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_lookup_extended;
  void* value_o {};
  void* orig_key_o {};
  auto lookup_key_to_c = lookup_key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (lookup_key_to_c), (void**) (orig_key ? &orig_key_o : nullptr), (void**) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  if (orig_key) *orig_key = orig_key_o;
  return _temp_ret;
}
std::tuple<bool, gpointer, gpointer> base::TreeBase::lookup_extended (const void* lookup_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_lookup_extended;
  void* value_o {};
  void* orig_key_o {};
  auto lookup_key_to_c = lookup_key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (lookup_key_to_c), (void**) (&orig_key_o), (void**) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = orig_key_o;
  auto &&tmp_return_3 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GTreeNode* /*none,nullable*/ g_tree_lookup_node (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_lookup_node (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported

// GTreeNode* /*none,nullable*/ g_tree_lower_bound (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_lower_bound (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported

// gint g_tree_nnodes (GTree* tree /*none*/);
// gint g_tree_nnodes (::GTree* tree /*none*/);
gint base::TreeBase::nnodes () noexcept
{
  typedef gint (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_nnodes;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()));
  return _temp_ret;
}

// GTreeNode* /*none,nullable*/ g_tree_node_first (GTree* tree /*none*/);
//  /*none,nullable*/ g_tree_node_first (::GTree* tree /*none*/);
// SKIP;  type  not supported

// GTreeNode* /*none,nullable*/ g_tree_node_last (GTree* tree /*none*/);
//  /*none,nullable*/ g_tree_node_last (::GTree* tree /*none*/);
// SKIP;  type  not supported

// GTree* /*full*/ g_tree_ref (GTree* tree /*none*/);
// ::GTree* /*full*/ g_tree_ref (::GTree* tree /*none*/);
// IGNORE; marked ignore

// gboolean g_tree_remove (GTree* tree /*none*/, gconstpointer key);
// gboolean g_tree_remove (::GTree* tree /*none*/, const void* key);
bool base::TreeBase::remove (const void* key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_remove;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// void g_tree_remove_all (GTree* tree /*none*/);
// void g_tree_remove_all (::GTree* tree /*none*/);
void base::TreeBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_remove_all;
  call_wrap_v ((::GTree*) (gobj_()));
}

// void g_tree_replace (GTree* tree /*none*/, gpointer key, gpointer value);
// void g_tree_replace (::GTree* tree /*none*/, void* key, void* value);
void base::TreeBase::replace (void* key, void* value) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, void* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_replace;
  auto value_to_c = value;
  auto key_to_c = key;
  call_wrap_v ((::GTree*) (gobj_()), (void*) (key_to_c), (void*) (value_to_c));
}

// GTreeNode* /*none,nullable*/ g_tree_replace_node (GTree* tree /*none*/, gpointer key, gpointer value);
//  /*none,nullable*/ g_tree_replace_node (::GTree* tree /*none*/, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_search (GTree* tree /*none*/, GCompareFunc search_func /*none*/, gconstpointer user_data);
// void* g_tree_search (::GTree* tree /*none*/,  search_func /*none*/, const void* user_data);
// SKIP; search_func type  not supported

// GTreeNode* /*none,nullable*/ g_tree_search_node (GTree* tree /*none*/, GCompareFunc search_func /*none*/, gconstpointer user_data);
//  /*none,nullable*/ g_tree_search_node (::GTree* tree /*none*/,  search_func /*none*/, const void* user_data);
// SKIP; search_func type  not supported,  type  not supported

// gboolean g_tree_steal (GTree* tree /*none*/, gconstpointer key);
// gboolean g_tree_steal (::GTree* tree /*none*/, const void* key);
bool base::TreeBase::steal (const void* key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tree_steal;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// void g_tree_traverse (GTree* tree /*none*/, GTraverseFunc traverse_func /*none*/, GTraverseType traverse_type, gpointer user_data);
// void g_tree_traverse (::GTree* tree /*none*/, GLib::TraverseFunc::cfunction_type traverse_func /*none*/, ::GTraverseType traverse_type, void* user_data);
// IGNORE; deprecated

// void g_tree_unref (GTree* tree /*none*/);
// void g_tree_unref (::GTree* tree /*none*/);
// IGNORE; marked ignore

// GTreeNode* /*none,nullable*/ g_tree_upper_bound (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_upper_bound (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/tree_extra_def_impl.hpp>)
#include <glib/tree_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/tree_extra_impl.hpp>)
#include <glib/tree_extra_impl.hpp>
#endif
#endif

#endif
