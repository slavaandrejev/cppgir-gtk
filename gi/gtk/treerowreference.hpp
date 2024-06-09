// AUTO-GENERATED

#ifndef _GI_GTK_TREEROWREFERENCE_HPP_
#define _GI_GTK_TREEROWREFERENCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;
class TreeRowReference_Ref;

class TreeRowReference;

namespace base {


#define GI_GTK_TREEROWREFERENCE_BASE base::TreeRowReferenceBase
class TreeRowReferenceBase : public gi::detail::GBoxedWrapperBase<TreeRowReferenceBase, ::GtkTreeRowReference>
{
typedef gi::detail::GBoxedWrapperBase<TreeRowReferenceBase, ::GtkTreeRowReference> super_type;
public:

TreeRowReferenceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_tree_row_reference_get_type(); } 

// GtkTreeRowReference* /*full,nullable*/ gtk_tree_row_reference_new (GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/);
// ::GtkTreeRowReference* /*full,nullable*/ gtk_tree_row_reference_new (::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/);
static GI_INLINE_DECL Gtk::TreeRowReference new_ (Gtk::TreeModel model, Gtk::TreePath_Ref path) noexcept;

// GtkTreeRowReference* /*full,nullable*/ gtk_tree_row_reference_new_proxy (GObject* proxy /*none*/, GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/);
// ::GtkTreeRowReference* /*full,nullable*/ gtk_tree_row_reference_new_proxy (::GObject* proxy /*none*/, ::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/);
static GI_INLINE_DECL Gtk::TreeRowReference new_proxy (GObject::Object proxy, Gtk::TreeModel model, Gtk::TreePath_Ref path) noexcept;

// GtkTreeRowReference* /*full*/ gtk_tree_row_reference_copy (GtkTreeRowReference* reference /*none*/);
// ::GtkTreeRowReference* /*full*/ gtk_tree_row_reference_copy (::GtkTreeRowReference* reference /*none*/);
GI_INLINE_DECL Gtk::TreeRowReference copy () noexcept;

// void gtk_tree_row_reference_free (GtkTreeRowReference* reference /*none,nullable*/);
// void gtk_tree_row_reference_free (::GtkTreeRowReference* reference /*none,nullable*/);
// IGNORE; marked ignore

// GtkTreeModel* /*none*/ gtk_tree_row_reference_get_model (GtkTreeRowReference* reference /*none*/);
// ::GtkTreeModel* /*none*/ gtk_tree_row_reference_get_model (::GtkTreeRowReference* reference /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// GtkTreePath* /*full,nullable*/ gtk_tree_row_reference_get_path (GtkTreeRowReference* reference /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_row_reference_get_path (::GtkTreeRowReference* reference /*none*/);
GI_INLINE_DECL Gtk::TreePath get_path () noexcept;

// gboolean gtk_tree_row_reference_valid (GtkTreeRowReference* reference /*none,nullable*/);
// gboolean gtk_tree_row_reference_valid (::GtkTreeRowReference* reference /*none,nullable*/);
GI_INLINE_DECL bool valid () noexcept;

// void gtk_tree_row_reference_deleted (GObject* proxy /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_row_reference_deleted (::GObject* proxy /*none*/, ::GtkTreePath* path /*none*/);
static GI_INLINE_DECL void deleted (GObject::Object proxy, Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_row_reference_inserted (GObject* proxy /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_row_reference_inserted (::GObject* proxy /*none*/, ::GtkTreePath* path /*none*/);
static GI_INLINE_DECL void inserted (GObject::Object proxy, Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_row_reference_reordered (GObject* proxy /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/,  new_order /*none*/);
// void gtk_tree_row_reference_reordered (::GObject* proxy /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, * new_order /*none*/);
// IGNORE; not introspectable, inconsistent array info

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra_def.hpp>)
#include <gtk/treerowreference_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra.hpp>)
#include <gtk/treerowreference_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeRowReference_Ref;

class TreeRowReference : public gi::detail::GBoxedWrapper<TreeRowReference, ::GtkTreeRowReference, GI_GTK_TREEROWREFERENCE_BASE, TreeRowReference_Ref>
{ typedef gi::detail::GBoxedWrapper<TreeRowReference, ::GtkTreeRowReference, GI_GTK_TREEROWREFERENCE_BASE, TreeRowReference_Ref> super_type; using super_type::super_type; };


class TreeRowReference_Ref : public gi::detail::GBoxedRefWrapper<TreeRowReference, ::GtkTreeRowReference, GI_GTK_TREEROWREFERENCE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TreeRowReference, ::GtkTreeRowReference, GI_GTK_TREEROWREFERENCE_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeRowReference>
{ typedef Gtk::TreeRowReference type; }; 

} // namespace repository

} // namespace gi

#endif
