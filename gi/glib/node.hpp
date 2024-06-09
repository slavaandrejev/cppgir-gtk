// AUTO-GENERATED

#ifndef _GI_GLIB_NODE_HPP_
#define _GI_GLIB_NODE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Node_Ref;

class Node;

namespace base {


#define GI_GLIB_NODE_BASE base::NodeBase
class NodeBase : public gi::detail::CBoxedWrapperBase<NodeBase, ::GNode>
{
typedef gi::detail::CBoxedWrapperBase<NodeBase, ::GNode> super_type;
public:

NodeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GNode* /*none*/ Node::next (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::next (const ::GNode* obj /*none*/);
GI_INLINE_DECL GLib::Node_Ref next_ () const noexcept;

// ::GNode* /*none*/ Node::prev (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::prev (const ::GNode* obj /*none*/);
GI_INLINE_DECL GLib::Node_Ref prev_ () const noexcept;

// ::GNode* /*none*/ Node::parent (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::parent (const ::GNode* obj /*none*/);
GI_INLINE_DECL GLib::Node_Ref parent_ () const noexcept;

// ::GNode* /*none*/ Node::children (const ::GNode* obj /*none*/);
// ::GNode* /*none*/ Node::children (const ::GNode* obj /*none*/);
GI_INLINE_DECL GLib::Node_Ref children_ () const noexcept;

// gint g_node_child_index (GNode* node /*none*/, gpointer data);
// gint g_node_child_index (::GNode* node /*none*/, void* data);
GI_INLINE_DECL gint child_index (void* data) noexcept;

// gint g_node_child_position (GNode* node /*none*/, GNode* child /*none*/);
// gint g_node_child_position (::GNode* node /*none*/, ::GNode* child /*none*/);
GI_INLINE_DECL gint child_position (GLib::Node_Ref child) noexcept;

// void g_node_children_foreach (GNode* node /*none*/, GTraverseFlags flags, GNodeForeachFunc func /*none*/, gpointer data);
// void g_node_children_foreach (::GNode* node /*none*/, ::GTraverseFlags flags, GLib::NodeForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void children_foreach (GLib::TraverseFlags flags, GLib::NodeForeachFunc func) noexcept;

// FAILURE on g_node_copy; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_copy_deep; No such node (<xmlattr>.transfer-ownership)
// guint g_node_depth (GNode* node /*none*/);
// guint g_node_depth (::GNode* node /*none*/);
GI_INLINE_DECL guint depth () noexcept;

// void g_node_destroy (GNode* root /*none*/);
// void g_node_destroy (::GNode* root /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// FAILURE on g_node_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_find_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_first_sibling; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_get_root; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_after; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_before; No such node (<xmlattr>.transfer-ownership)
// gboolean g_node_is_ancestor (GNode* node /*none*/, GNode* descendant /*none*/);
// gboolean g_node_is_ancestor (::GNode* node /*none*/, ::GNode* descendant /*none*/);
GI_INLINE_DECL bool is_ancestor (GLib::Node_Ref descendant) noexcept;

// FAILURE on g_node_last_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_last_sibling; No such node (<xmlattr>.transfer-ownership)
// guint g_node_max_height (GNode* root /*none*/);
// guint g_node_max_height (::GNode* root /*none*/);
GI_INLINE_DECL guint max_height () noexcept;

// guint g_node_n_children (GNode* node /*none*/);
// guint g_node_n_children (::GNode* node /*none*/);
GI_INLINE_DECL guint n_children () noexcept;

// guint g_node_n_nodes (GNode* root /*none*/, GTraverseFlags flags);
// guint g_node_n_nodes (::GNode* root /*none*/, ::GTraverseFlags flags);
GI_INLINE_DECL guint n_nodes (GLib::TraverseFlags flags) noexcept;

// FAILURE on g_node_nth_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_prepend; No such node (<xmlattr>.transfer-ownership)
// void g_node_reverse_children (GNode* node /*none*/);
// void g_node_reverse_children (::GNode* node /*none*/);
GI_INLINE_DECL void reverse_children () noexcept;

// void g_node_traverse (GNode* root /*none*/, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func /*none*/, gpointer data);
// void g_node_traverse (::GNode* root /*none*/, ::GTraverseType order, ::GTraverseFlags flags, gint max_depth, GLib::NodeTraverseFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void traverse (GLib::TraverseType order, GLib::TraverseFlags flags, gint max_depth, GLib::NodeTraverseFunc func) noexcept;

// void g_node_unlink (GNode* node /*none*/);
// void g_node_unlink (::GNode* node /*none*/);
GI_INLINE_DECL void unlink () noexcept;

// FAILURE on g_node_new; No such node (<xmlattr>.transfer-ownership)
// void g_node_pop_allocator ();
// void g_node_pop_allocator ();
static GI_INLINE_DECL void pop_allocator () noexcept;

// void g_node_push_allocator (GAllocator* allocator /*none*/);
// void g_node_push_allocator ( allocator /*none*/);
// SKIP; allocator type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/node_extra_def.hpp>)
#include <glib/node_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/node_extra.hpp>)
#include <glib/node_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Node_Ref;

class Node : public gi::detail::CBoxedWrapper<Node, ::GNode, GI_GLIB_NODE_BASE, Node_Ref>
{ typedef gi::detail::CBoxedWrapper<Node, ::GNode, GI_GLIB_NODE_BASE, Node_Ref> super_type; using super_type::super_type; };


class Node_Ref : public gi::detail::CBoxedRefWrapper<Node, ::GNode, GI_GLIB_NODE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Node, ::GNode, GI_GLIB_NODE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GNode>
{ typedef GLib::Node type; }; 

} // namespace repository

} // namespace gi

#endif
