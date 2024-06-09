// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODEL_HPP_
#define _GI_GTK_TREEMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeIter_Ref;
class TreePath;
class TreePath_Ref;

class TreeModel;

namespace base {


#define GI_GTK_TREEMODEL_BASE base::TreeModelBase
class TreeModelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeModel BaseObjectType;

TreeModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_model_get_type(); } 

// GtkTreeModel* /*full*/ gtk_tree_model_filter_new (GtkTreeModel* child_model /*none*/, GtkTreePath* root /*none,nullable*/);
// ::GtkTreeModel* /*full*/ gtk_tree_model_filter_new (::GtkTreeModel* child_model /*none*/, ::GtkTreePath* root /*none,nullable*/);
GI_INLINE_DECL Gtk::TreeModel filter_new (Gtk::TreePath_Ref root) noexcept;
GI_INLINE_DECL Gtk::TreeModel filter_new () noexcept;

// void gtk_tree_model_foreach (GtkTreeModel* model /*none*/, GtkTreeModelForeachFunc func /*none*/, gpointer user_data);
// void gtk_tree_model_foreach (::GtkTreeModel* model /*none*/, Gtk::TreeModelForeachFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL void foreach (Gtk::TreeModelForeachFunc func) noexcept;

// void gtk_tree_model_get (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// void gtk_tree_model_get (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GType gtk_tree_model_get_column_type (GtkTreeModel* tree_model /*none*/, int index_);
// GType gtk_tree_model_get_column_type (::GtkTreeModel* tree_model /*none*/, gint index_);
GI_INLINE_DECL GType get_column_type (gint index_) noexcept;

// GtkTreeModelFlags gtk_tree_model_get_flags (GtkTreeModel* tree_model /*none*/);
// ::GtkTreeModelFlags gtk_tree_model_get_flags (::GtkTreeModel* tree_model /*none*/);
GI_INLINE_DECL Gtk::TreeModelFlags get_flags () noexcept;

// gboolean gtk_tree_model_get_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_model_get_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool get_iter (Gtk::TreeIter & iter, Gtk::TreePath_Ref path) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter (Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_tree_model_get_iter_first (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/);
// gboolean gtk_tree_model_get_iter_first (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/);
GI_INLINE_DECL bool get_iter_first (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter_first () noexcept;

// gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, const char* path_string /*none*/);
// gboolean gtk_tree_model_get_iter_from_string (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, const char* path_string /*none*/);
GI_INLINE_DECL bool get_iter_from_string (Gtk::TreeIter & iter, const gi::cstring_v path_string) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter_from_string (const gi::cstring_v path_string) noexcept;

// int gtk_tree_model_get_n_columns (GtkTreeModel* tree_model /*none*/);
// gint gtk_tree_model_get_n_columns (::GtkTreeModel* tree_model /*none*/);
GI_INLINE_DECL gint get_n_columns () noexcept;

// GtkTreePath* /*full*/ gtk_tree_model_get_path (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_model_get_path (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL Gtk::TreePath get_path (Gtk::TreeIter_Ref iter) noexcept;

// char* /*full,nullable*/ gtk_tree_model_get_string_from_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// char* /*full,nullable*/ gtk_tree_model_get_string_from_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL gi::cstring get_string_from_iter (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_get_valist (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, va_list var_args /*none*/);
// void gtk_tree_model_get_valist (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_model_get_value (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none,out,ca*/);
// void gtk_tree_model_get_value (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none,out,ca*/);
GI_INLINE_DECL void get_value (Gtk::TreeIter_Ref iter, gint column, GObject::Value & value) noexcept;
GI_INLINE_DECL GObject::Value get_value (Gtk::TreeIter_Ref iter, gint column) noexcept;

// gboolean gtk_tree_model_iter_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// gboolean gtk_tree_model_iter_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
GI_INLINE_DECL bool iter_children (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL bool iter_children (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_children (Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_children () noexcept;

// gboolean gtk_tree_model_iter_has_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_has_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_has_child (Gtk::TreeIter_Ref iter) noexcept;

// int gtk_tree_model_iter_n_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,nullable*/);
// gint gtk_tree_model_iter_n_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
GI_INLINE_DECL gint iter_n_children (Gtk::TreeIter_Ref iter) noexcept;
GI_INLINE_DECL gint iter_n_children () noexcept;

// gboolean gtk_tree_model_iter_next (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_next (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_next (Gtk::TreeIter_Ref iter) noexcept;

// gboolean gtk_tree_model_iter_nth_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int n);
// gboolean gtk_tree_model_iter_nth_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint n);
GI_INLINE_DECL bool iter_nth_child (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, gint n) noexcept;
GI_INLINE_DECL bool iter_nth_child (Gtk::TreeIter & iter, gint n) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_nth_child (Gtk::TreeIter_Ref parent, gint n) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_nth_child (gint n) noexcept;

// gboolean gtk_tree_model_iter_parent (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* child /*none*/);
// gboolean gtk_tree_model_iter_parent (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* child /*none*/);
GI_INLINE_DECL bool iter_parent (Gtk::TreeIter & iter, Gtk::TreeIter_Ref child) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_parent (Gtk::TreeIter_Ref child) noexcept;

// gboolean gtk_tree_model_iter_previous (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_model_iter_previous (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_previous (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_ref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_ref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void ref_node (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_row_changed (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_changed (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_changed (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_row_deleted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_model_row_deleted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void row_deleted (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_model_row_has_child_toggled (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_has_child_toggled (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_has_child_toggled (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_row_inserted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_row_inserted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_inserted (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_model_rows_reordered (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, int* new_order);
// void gtk_tree_model_rows_reordered (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, gint new_order);
// IGNORE; not introspectable; shadowed-by rows_reordered_with_length

// void gtk_tree_model_rows_reordered_with_length (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none,nullable*/, int* new_order /*none*/, int length);
// void gtk_tree_model_rows_reordered_with_length (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none,nullable*/, gint* new_order /*none*/, gint length);
GI_INLINE_DECL void rows_reordered (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, const gint * new_order, gint length) noexcept;
GI_INLINE_DECL void rows_reordered (Gtk::TreePath_Ref path, const gint * new_order, gint length) noexcept;

// void gtk_tree_model_unref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void gtk_tree_model_unref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void unref_node (Gtk::TreeIter_Ref iter) noexcept;

// (signal) void row-changed ( path /*none*/,  iter /*none*/);
// (signal) void row-changed (::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> signal_row_changed()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> (*this, "row-changed"); }

// (signal) void row-deleted ( path /*none*/);
// (signal) void row-deleted (::GtkTreePath* path /*none*/);
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path)> signal_row_deleted()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path)> (*this, "row-deleted"); }

// (signal) void row-has-child-toggled ( path /*none*/,  iter /*none*/);
// (signal) void row-has-child-toggled (::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> signal_row_has_child_toggled()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> (*this, "row-has-child-toggled"); }

// (signal) void row-inserted ( path /*none*/,  iter /*none*/);
// (signal) void row-inserted (::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> signal_row_inserted()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter)> (*this, "row-inserted"); }

// (signal) void rows-reordered ( path /*none*/,  iter /*none*/, gpointer new_order);
// (signal) void rows-reordered (::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, void* new_order);
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, void* new_order)> signal_rows_reordered()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, void* new_order)> (*this, "rows-reordered"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_def.hpp>)
#include <gtk/treemodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra.hpp>)
#include <gtk/treemodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeModel : public GI_GTK_TREEMODEL_BASE
{ typedef GI_GTK_TREEMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeModel>
{ typedef Gtk::TreeModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeModelIfaceDef
{
typedef TreeModelIfaceDef self;
public:
typedef Gtk::TreeModel instance_type;
typedef ::GtkTreeModelIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_column_type) = self;
using GI_MEMBER_CHECK_CONFLICT(get_flags) = self;
using GI_MEMBER_CHECK_CONFLICT(get_iter) = self;
using GI_MEMBER_CHECK_CONFLICT(get_n_columns) = self;
using GI_MEMBER_CHECK_CONFLICT(get_path) = self;
using GI_MEMBER_CHECK_CONFLICT(get_value) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_children) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_has_child) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_n_children) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_next) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_nth_child) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_parent) = self;
using GI_MEMBER_CHECK_CONFLICT(iter_previous) = self;
using GI_MEMBER_CHECK_CONFLICT(ref_node) = self;
using GI_MEMBER_CHECK_CONFLICT(row_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(row_deleted) = self;
using GI_MEMBER_CHECK_CONFLICT(row_has_child_toggled) = self;
using GI_MEMBER_CHECK_CONFLICT(row_inserted) = self;
using GI_MEMBER_CHECK_CONFLICT(unref_node) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeModelIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GType TreeModel::get_column_type (GtkTreeModel* tree_model /*none*/, int index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model /*none*/, gint index_);
virtual GType get_column_type_ (gint index_) noexcept = 0;

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model /*none*/);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model /*none*/);
virtual Gtk::TreeModelFlags get_flags_ () noexcept = 0;

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreePath* path /*none*/);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreePath* path /*none*/);
virtual bool get_iter_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept = 0;

// int TreeModel::get_n_columns (GtkTreeModel* tree_model /*none*/);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model /*none*/);
virtual gint get_n_columns_ () noexcept = 0;

// GtkTreePath* /*full*/ TreeModel::get_path (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// ::GtkTreePath* /*full*/ TreeModel::get_path (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual Gtk::TreePath get_path_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::get_value (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none,out,ca*/);
// void TreeModel::get_value (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none,out,ca*/);
virtual void get_value_ (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept = 0;

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
virtual bool iter_children_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent) noexcept = 0;

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual bool iter_has_child_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// int TreeModel::iter_n_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,nullable*/);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
virtual gint iter_n_children_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual bool iter_next_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint n);
virtual bool iter_nth_child_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent, gint n) noexcept = 0;

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* child /*none*/);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* child /*none*/);
virtual bool iter_parent_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref child) noexcept = 0;

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual bool iter_previous_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::ref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::ref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual void ref_node_ (Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::row_changed (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_changed (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
virtual void row_changed_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::row_deleted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
virtual void row_deleted_ (Gtk::TreePath_Ref path) noexcept = 0;

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
virtual void row_has_child_toggled_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::row_inserted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
virtual void row_inserted_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept = 0;

// void TreeModel::unref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::unref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual void unref_node_ (Gtk::TreeIter_Ref iter) noexcept = 0;


};

using TreeModelImpl = detail::InterfaceImpl<TreeModelIfaceDef>;

class TreeModelIfaceClassImpl: public detail::InterfaceClassImpl<TreeModelImpl>
{
friend class internal::TreeModelIfaceDef;
typedef TreeModelIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeModelImpl> super;

protected:
using super::super;

// GType TreeModel::get_column_type (GtkTreeModel* tree_model /*none*/, int index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model /*none*/, gint index_);
GI_INLINE_DECL GType get_column_type_ (gint index_) noexcept override;

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model /*none*/);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model /*none*/);
GI_INLINE_DECL Gtk::TreeModelFlags get_flags_ () noexcept override;

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreePath* path /*none*/);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool get_iter_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept override;

// int TreeModel::get_n_columns (GtkTreeModel* tree_model /*none*/);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model /*none*/);
GI_INLINE_DECL gint get_n_columns_ () noexcept override;

// GtkTreePath* /*full*/ TreeModel::get_path (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// ::GtkTreePath* /*full*/ TreeModel::get_path (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL Gtk::TreePath get_path_ (Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::get_value (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none,out,ca*/);
// void TreeModel::get_value (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none,out,ca*/);
GI_INLINE_DECL void get_value_ (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept override;

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
GI_INLINE_DECL bool iter_children_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent) noexcept override;

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_has_child_ (Gtk::TreeIter_Ref iter) noexcept override;

// int TreeModel::iter_n_children (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,nullable*/);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,nullable*/);
GI_INLINE_DECL gint iter_n_children_ (Gtk::TreeIter_Ref iter) noexcept override;

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_next_ (Gtk::TreeIter_Ref iter) noexcept override;

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint n);
GI_INLINE_DECL bool iter_nth_child_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref parent, gint n) noexcept override;

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* child /*none*/);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* child /*none*/);
GI_INLINE_DECL bool iter_parent_ (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref child) noexcept override;

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_previous_ (Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::ref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::ref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void ref_node_ (Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::row_changed (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_changed (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_changed_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::row_deleted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void row_deleted_ (Gtk::TreePath_Ref path) noexcept override;

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_has_child_toggled_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::row_inserted (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void row_inserted_ (Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter) noexcept override;

// void TreeModel::unref_node (GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/);
// void TreeModel::unref_node (::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL void unref_node_ (Gtk::TreeIter_Ref iter) noexcept override;


};


struct TreeModelIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_column_type)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_flags)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_iter)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_n_columns)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_path)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, get_value)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_children)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_has_child)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_n_children)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_next)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_nth_child)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_parent)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, iter_previous)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, ref_node)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, row_changed)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, row_deleted)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, row_has_child_toggled)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, row_inserted)
  GI_MEMBER_DEFINE(TreeModelIfaceClassImpl, unref_node)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_column_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_flags),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_iter),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_n_columns),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_value),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_children),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_has_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_n_children),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_next),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_nth_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_parent),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iter_previous),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ref_node),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_deleted),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_has_child_toggled),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_inserted),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unref_node)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
