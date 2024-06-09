// AUTO-GENERATED

#ifndef _GI_GTK_TREEPATH_HPP_
#define _GI_GTK_TREEPATH_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreePath_Ref;

class TreePath;

namespace base {


#define GI_GTK_TREEPATH_BASE base::TreePathBase
class TreePathBase : public gi::detail::GBoxedWrapperBase<TreePathBase, ::GtkTreePath>
{
typedef gi::detail::GBoxedWrapperBase<TreePathBase, ::GtkTreePath> super_type;
public:

TreePathBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_tree_path_get_type(); } 

// GtkTreePath* /*full*/ gtk_tree_path_new ();
// ::GtkTreePath* /*full*/ gtk_tree_path_new ();
static GI_INLINE_DECL Gtk::TreePath new_ () noexcept;

// GtkTreePath* /*full*/ gtk_tree_path_new_first ();
// ::GtkTreePath* /*full*/ gtk_tree_path_new_first ();
static GI_INLINE_DECL Gtk::TreePath new_first () noexcept;

// GtkTreePath* /*full*/ gtk_tree_path_new_from_indices (int first_index,  ..._ /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_path_new_from_indices (gint first_index,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by new_from_indicesv, varargs not supported

// GtkTreePath* /*full*/ gtk_tree_path_new_from_indicesv (int* indices /*none*/, gsize length);
// ::GtkTreePath* /*full*/ gtk_tree_path_new_from_indicesv (gint* indices /*none*/, gsize length);
static GI_INLINE_DECL Gtk::TreePath new_from_indices (const gint * indices, gsize length) noexcept;

// GtkTreePath* /*full,nullable*/ gtk_tree_path_new_from_string (const char* path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_path_new_from_string (const char* path /*none*/);
static GI_INLINE_DECL Gtk::TreePath new_from_string (const gi::cstring_v path) noexcept;

// void gtk_tree_path_append_index (GtkTreePath* path /*none*/, int index_);
// void gtk_tree_path_append_index (::GtkTreePath* path /*none*/, gint index_);
GI_INLINE_DECL void append_index (gint index_) noexcept;

// int gtk_tree_path_compare (const GtkTreePath* a /*none*/, const GtkTreePath* b /*none*/);
// gint gtk_tree_path_compare (const ::GtkTreePath* a /*none*/, const ::GtkTreePath* b /*none*/);
GI_INLINE_DECL gint compare (const Gtk::TreePath_Ref b) const noexcept;

// GtkTreePath* /*full*/ gtk_tree_path_copy (const GtkTreePath* path /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_path_copy (const ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gtk::TreePath copy () const noexcept;

// void gtk_tree_path_down (GtkTreePath* path /*none*/);
// void gtk_tree_path_down (::GtkTreePath* path /*none*/);
GI_INLINE_DECL void down () noexcept;

// void gtk_tree_path_free (GtkTreePath* path /*none,nullable*/);
// void gtk_tree_path_free (::GtkTreePath* path /*none,nullable*/);
// IGNORE; marked ignore

// int gtk_tree_path_get_depth (GtkTreePath* path /*none*/);
// gint gtk_tree_path_get_depth (::GtkTreePath* path /*none*/);
GI_INLINE_DECL gint get_depth () noexcept;

// int* gtk_tree_path_get_indices (GtkTreePath* path /*none*/);
// gint gtk_tree_path_get_indices (::GtkTreePath* path /*none*/);
// IGNORE; not introspectable; shadowed-by get_indices_with_depth

// int* /*none,nullable*/ gtk_tree_path_get_indices_with_depth (GtkTreePath* path /*none*/, int* depth);
// gint* /*none,nullable*/ gtk_tree_path_get_indices_with_depth (::GtkTreePath* path /*none*/, gint* depth);
GI_INLINE_DECL gi::Collection<gi::DSpan, gint, gi::transfer_none_t> get_indices () noexcept;

// gboolean gtk_tree_path_is_ancestor (GtkTreePath* path /*none*/, GtkTreePath* descendant /*none*/);
// gboolean gtk_tree_path_is_ancestor (::GtkTreePath* path /*none*/, ::GtkTreePath* descendant /*none*/);
GI_INLINE_DECL bool is_ancestor (Gtk::TreePath_Ref descendant) noexcept;

// gboolean gtk_tree_path_is_descendant (GtkTreePath* path /*none*/, GtkTreePath* ancestor /*none*/);
// gboolean gtk_tree_path_is_descendant (::GtkTreePath* path /*none*/, ::GtkTreePath* ancestor /*none*/);
GI_INLINE_DECL bool is_descendant (Gtk::TreePath_Ref ancestor) noexcept;

// void gtk_tree_path_next (GtkTreePath* path /*none*/);
// void gtk_tree_path_next (::GtkTreePath* path /*none*/);
GI_INLINE_DECL void next () noexcept;

// void gtk_tree_path_prepend_index (GtkTreePath* path /*none*/, int index_);
// void gtk_tree_path_prepend_index (::GtkTreePath* path /*none*/, gint index_);
GI_INLINE_DECL void prepend_index (gint index_) noexcept;

// gboolean gtk_tree_path_prev (GtkTreePath* path /*none*/);
// gboolean gtk_tree_path_prev (::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool prev () noexcept;

// char* /*full,nullable*/ gtk_tree_path_to_string (GtkTreePath* path /*none*/);
// char* /*full,nullable*/ gtk_tree_path_to_string (::GtkTreePath* path /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// gboolean gtk_tree_path_up (GtkTreePath* path /*none*/);
// gboolean gtk_tree_path_up (::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool up () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_def.hpp>)
#include <gtk/treepath_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra.hpp>)
#include <gtk/treepath_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreePath_Ref;

class TreePath : public gi::detail::GBoxedWrapper<TreePath, ::GtkTreePath, GI_GTK_TREEPATH_BASE, TreePath_Ref>
{ typedef gi::detail::GBoxedWrapper<TreePath, ::GtkTreePath, GI_GTK_TREEPATH_BASE, TreePath_Ref> super_type; using super_type::super_type; };


class TreePath_Ref : public gi::detail::GBoxedRefWrapper<TreePath, ::GtkTreePath, GI_GTK_TREEPATH_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TreePath, ::GtkTreePath, GI_GTK_TREEPATH_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreePath>
{ typedef Gtk::TreePath type; }; 

} // namespace repository

} // namespace gi

#endif
