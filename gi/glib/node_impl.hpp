// AUTO-GENERATED

#ifndef _GI_GLIB_NODE_IMPL_HPP_
#define _GI_GLIB_NODE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static ::GNode* _field_next_get (const ::GNode* obj) { return (::GNode*) obj->next; }
// ::GNode* /*none*/ Node::next (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::next (const ::GNode* obj /*none*/);
GLib::Node_Ref base::NodeBase::next_ () const noexcept
{
  typedef ::GNode* (*call_wrap_t) (const ::GNode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_get;
  auto _temp_ret = call_wrap_v ((const ::GNode*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GNode* _field_prev_get (const ::GNode* obj) { return (::GNode*) obj->prev; }
// ::GNode* /*none*/ Node::prev (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::prev (const ::GNode* obj /*none*/);
GLib::Node_Ref base::NodeBase::prev_ () const noexcept
{
  typedef ::GNode* (*call_wrap_t) (const ::GNode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_prev_get;
  auto _temp_ret = call_wrap_v ((const ::GNode*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GNode* _field_parent_get (const ::GNode* obj) { return (::GNode*) obj->parent; }
// ::GNode* /*none*/ Node::parent (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::parent (const ::GNode* obj /*none*/);
GLib::Node_Ref base::NodeBase::parent_ () const noexcept
{
  typedef ::GNode* (*call_wrap_t) (const ::GNode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parent_get;
  auto _temp_ret = call_wrap_v ((const ::GNode*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GNode* _field_children_get (const ::GNode* obj) { return (::GNode*) obj->children; }
// ::GNode* /*none*/ Node::children (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::children (const ::GNode* obj /*none*/);
GLib::Node_Ref base::NodeBase::children_ () const noexcept
{
  typedef ::GNode* (*call_wrap_t) (const ::GNode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_children_get;
  auto _temp_ret = call_wrap_v ((const ::GNode*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_node_child_index (GNode* node /*none*/, gpointer data);
// gint g_node_child_index (::GNode* node /*none*/, void* data);
gint base::NodeBase::child_index (void* data) noexcept
{
  typedef gint (*call_wrap_t) (::GNode* node, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_child_index;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()), (void*) (data_to_c));
  return _temp_ret;
}

// gint g_node_child_position (GNode* node /*none*/, GNode* child /*none*/);
// gint g_node_child_position (::GNode* node /*none*/, ::GNode* child /*none*/);
gint base::NodeBase::child_position (GLib::Node_Ref child) noexcept
{
  typedef gint (*call_wrap_t) (::GNode* node, ::GNode* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_child_position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()), (::GNode*) (child_to_c));
  return _temp_ret;
}

// void g_node_children_foreach (GNode* node /*none*/, GTraverseFlags flags, GNodeForeachFunc func /*none*/, gpointer data);
// void g_node_children_foreach (::GNode* node /*none*/, ::GTraverseFlags flags, GLib::NodeForeachFunc::cfunction_type func /*none*/, void* data);
void base::NodeBase::children_foreach (GLib::TraverseFlags flags, GLib::NodeForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GNode* node, ::GTraverseFlags flags, GLib::NodeForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_children_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GNode*) (gobj_()), (::GTraverseFlags) (flags_to_c), (GLib::NodeForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// FAILURE on g_node_copy; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_copy_deep; No such node (<xmlattr>.transfer-ownership)
// guint g_node_depth (GNode* node /*none*/);
// guint g_node_depth (::GNode* node /*none*/);
guint base::NodeBase::depth () noexcept
{
  typedef guint (*call_wrap_t) (::GNode* node);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_depth;
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()));
  return _temp_ret;
}

// void g_node_destroy (GNode* root /*none*/);
// void g_node_destroy (::GNode* root /*none*/);
void base::NodeBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GNode* root);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_destroy;
  call_wrap_v ((::GNode*) (gobj_()));
}

// FAILURE on g_node_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_find_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_first_sibling; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_get_root; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_after; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_before; No such node (<xmlattr>.transfer-ownership)
// gboolean g_node_is_ancestor (GNode* node /*none*/, GNode* descendant /*none*/);
// gboolean g_node_is_ancestor (::GNode* node /*none*/, ::GNode* descendant /*none*/);
bool base::NodeBase::is_ancestor (GLib::Node_Ref descendant) noexcept
{
  typedef gboolean (*call_wrap_t) (::GNode* node, ::GNode* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_is_ancestor;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()), (::GNode*) (descendant_to_c));
  return _temp_ret;
}

// FAILURE on g_node_last_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_last_sibling; No such node (<xmlattr>.transfer-ownership)
// guint g_node_max_height (GNode* root /*none*/);
// guint g_node_max_height (::GNode* root /*none*/);
guint base::NodeBase::max_height () noexcept
{
  typedef guint (*call_wrap_t) (::GNode* root);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_max_height;
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()));
  return _temp_ret;
}

// guint g_node_n_children (GNode* node /*none*/);
// guint g_node_n_children (::GNode* node /*none*/);
guint base::NodeBase::n_children () noexcept
{
  typedef guint (*call_wrap_t) (::GNode* node);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_n_children;
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()));
  return _temp_ret;
}

// guint g_node_n_nodes (GNode* root /*none*/, GTraverseFlags flags);
// guint g_node_n_nodes (::GNode* root /*none*/, ::GTraverseFlags flags);
guint base::NodeBase::n_nodes (GLib::TraverseFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GNode* root, ::GTraverseFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_n_nodes;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GNode*) (gobj_()), (::GTraverseFlags) (flags_to_c));
  return _temp_ret;
}

// FAILURE on g_node_nth_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_prepend; No such node (<xmlattr>.transfer-ownership)
// void g_node_reverse_children (GNode* node /*none*/);
// void g_node_reverse_children (::GNode* node /*none*/);
void base::NodeBase::reverse_children () noexcept
{
  typedef void (*call_wrap_t) (::GNode* node);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_reverse_children;
  call_wrap_v ((::GNode*) (gobj_()));
}

// void g_node_traverse (GNode* root /*none*/, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func /*none*/, gpointer data);
// void g_node_traverse (::GNode* root /*none*/, ::GTraverseType order, ::GTraverseFlags flags, gint max_depth, GLib::NodeTraverseFunc::cfunction_type func /*none*/, void* data);
void base::NodeBase::traverse (GLib::TraverseType order, GLib::TraverseFlags flags, gint max_depth, GLib::NodeTraverseFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GNode* root, ::GTraverseType order, ::GTraverseFlags flags, gint max_depth, GLib::NodeTraverseFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_traverse;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto max_depth_to_c = max_depth;
  auto flags_to_c = gi::unwrap (flags);
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((::GNode*) (gobj_()), (::GTraverseType) (order_to_c), (::GTraverseFlags) (flags_to_c), (gint) (max_depth_to_c), (GLib::NodeTraverseFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void g_node_unlink (GNode* node /*none*/);
// void g_node_unlink (::GNode* node /*none*/);
void base::NodeBase::unlink () noexcept
{
  typedef void (*call_wrap_t) (::GNode* node);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_unlink;
  call_wrap_v ((::GNode*) (gobj_()));
}

// FAILURE on g_node_new; No such node (<xmlattr>.transfer-ownership)
// void g_node_pop_allocator ();
// void g_node_pop_allocator ();
void base::NodeBase::pop_allocator () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_node_pop_allocator;
  call_wrap_v ();
}

// void g_node_push_allocator (GAllocator* allocator /*none*/);
// void g_node_push_allocator ( allocator /*none*/);
// SKIP; allocator type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/node_extra_def_impl.hpp>)
#include <glib/node_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/node_extra_impl.hpp>)
#include <glib/node_extra_impl.hpp>
#endif
#endif

#endif
