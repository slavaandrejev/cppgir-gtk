// AUTO-GENERATED

#ifndef _GI_GLIB_TREE_HPP_
#define _GI_GLIB_TREE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Tree_Ref;

class Tree;

namespace base {


#define GI_GLIB_TREE_BASE base::TreeBase
class TreeBase : public gi::detail::GBoxedWrapperBase<TreeBase, ::GTree>
{
typedef gi::detail::GBoxedWrapperBase<TreeBase, ::GTree> super_type;
public:

TreeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_tree_get_type(); } 

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
GI_INLINE_DECL void destroy () noexcept;

// void g_tree_foreach (GTree* tree /*none*/, GTraverseFunc func /*none*/, gpointer user_data);
// void g_tree_foreach (::GTree* tree /*none*/, GLib::TraverseFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL void foreach (GLib::TraverseFunc func) noexcept;

// void g_tree_foreach_node (GTree* tree /*none*/, GTraverseNodeFunc func /*none*/, gpointer user_data);
// void g_tree_foreach_node (::GTree* tree /*none*/,  func /*none*/, void* user_data);
// SKIP; func type  not supported

// gint g_tree_height (GTree* tree /*none*/);
// gint g_tree_height (::GTree* tree /*none*/);
GI_INLINE_DECL gint height () noexcept;

// void g_tree_insert (GTree* tree /*none*/, gpointer key, gpointer value);
// void g_tree_insert (::GTree* tree /*none*/, void* key, void* value);
GI_INLINE_DECL void insert (void* key, void* value) noexcept;

// GTreeNode* /*none,nullable*/ g_tree_insert_node (GTree* tree /*none*/, gpointer key, gpointer value);
//  /*none,nullable*/ g_tree_insert_node (::GTree* tree /*none*/, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_lookup (GTree* tree /*none*/, gconstpointer key);
// void* g_tree_lookup (::GTree* tree /*none*/, const void* key);
GI_INLINE_DECL gpointer lookup (const void* key) noexcept;

// gboolean g_tree_lookup_extended (GTree* tree /*none*/, gconstpointer lookup_key, gpointer* orig_key, gpointer* value);
// gboolean g_tree_lookup_extended (::GTree* tree /*none*/, const void* lookup_key, void** orig_key, void** value);
GI_INLINE_DECL bool lookup_extended (const void* lookup_key, gpointer * orig_key, gpointer * value) noexcept;
GI_INLINE_DECL std::tuple<bool, gpointer, gpointer> lookup_extended (const void* lookup_key) noexcept;

// GTreeNode* /*none,nullable*/ g_tree_lookup_node (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_lookup_node (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported

// GTreeNode* /*none,nullable*/ g_tree_lower_bound (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_lower_bound (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported

// gint g_tree_nnodes (GTree* tree /*none*/);
// gint g_tree_nnodes (::GTree* tree /*none*/);
GI_INLINE_DECL gint nnodes () noexcept;

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
GI_INLINE_DECL bool remove (const void* key) noexcept;

// void g_tree_remove_all (GTree* tree /*none*/);
// void g_tree_remove_all (::GTree* tree /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void g_tree_replace (GTree* tree /*none*/, gpointer key, gpointer value);
// void g_tree_replace (::GTree* tree /*none*/, void* key, void* value);
GI_INLINE_DECL void replace (void* key, void* value) noexcept;

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
GI_INLINE_DECL bool steal (const void* key) noexcept;

// void g_tree_traverse (GTree* tree /*none*/, GTraverseFunc traverse_func /*none*/, GTraverseType traverse_type, gpointer user_data);
// void g_tree_traverse (::GTree* tree /*none*/, GLib::TraverseFunc::cfunction_type traverse_func /*none*/, ::GTraverseType traverse_type, void* user_data);
// IGNORE; deprecated

// void g_tree_unref (GTree* tree /*none*/);
// void g_tree_unref (::GTree* tree /*none*/);
// IGNORE; marked ignore

// GTreeNode* /*none,nullable*/ g_tree_upper_bound (GTree* tree /*none*/, gconstpointer key);
//  /*none,nullable*/ g_tree_upper_bound (::GTree* tree /*none*/, const void* key);
// SKIP;  type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/tree_extra_def.hpp>)
#include <glib/tree_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/tree_extra.hpp>)
#include <glib/tree_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Tree_Ref;

class Tree : public gi::detail::GBoxedWrapper<Tree, ::GTree, GI_GLIB_TREE_BASE, Tree_Ref>
{ typedef gi::detail::GBoxedWrapper<Tree, ::GTree, GI_GLIB_TREE_BASE, Tree_Ref> super_type; using super_type::super_type; };


class Tree_Ref : public gi::detail::GBoxedRefWrapper<Tree, ::GTree, GI_GLIB_TREE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Tree, ::GTree, GI_GLIB_TREE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTree>
{ typedef GLib::Tree type; }; 

} // namespace repository

} // namespace gi

#endif
