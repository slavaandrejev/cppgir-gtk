// AUTO-GENERATED

#ifndef _GI_GTK_TREESTORE_HPP_
#define _GI_GTK_TREESTORE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class TreeDragDest;
class TreeDragSource;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreeSortable;

class TreeStore;

namespace base {


#define GI_GTK_TREESTORE_BASE base::TreeStoreBase
class TreeStoreBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeStore BaseObjectType;

TreeStoreBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_store_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::TreeDragDest interface_ (gi::interface_tag<Gtk::TreeDragDest>);

GI_INLINE_DECL operator Gtk::TreeDragDest ();

GI_INLINE_DECL Gtk::TreeDragSource interface_ (gi::interface_tag<Gtk::TreeDragSource>);

GI_INLINE_DECL operator Gtk::TreeDragSource ();

GI_INLINE_DECL Gtk::TreeModel interface_ (gi::interface_tag<Gtk::TreeModel>);

GI_INLINE_DECL operator Gtk::TreeModel ();

GI_INLINE_DECL Gtk::TreeSortable interface_ (gi::interface_tag<Gtk::TreeSortable>);

GI_INLINE_DECL operator Gtk::TreeSortable ();

// GtkTreeStore* /*full*/ gtk_tree_store_new (int n_columns,  ..._ /*none*/);
// ::GtkTreeStore* /*full*/ gtk_tree_store_new (gint n_columns,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkTreeStore* /*full*/ gtk_tree_store_newv (int n_columns, GType* types /*none*/);
// ::GtkTreeStore* /*full*/ gtk_tree_store_newv (gint n_columns, GType* types /*none*/);
static GI_INLINE_DECL Gtk::TreeStore new_ (gint n_columns, const GType * types) noexcept;

// void gtk_tree_store_append (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// void gtk_tree_store_append (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
GI_INLINE_DECL void append (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL void append (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter append (Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL Gtk::TreeIter append () noexcept;

// void gtk_tree_store_clear (GtkTreeStore* tree_store /*none*/);
// void gtk_tree_store_clear (::GtkTreeStore* tree_store /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void gtk_tree_store_insert (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, int position);
// void gtk_tree_store_insert (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position);
GI_INLINE_DECL void insert (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, gint position) noexcept;
GI_INLINE_DECL void insert (Gtk::TreeIter & iter, gint position) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert (Gtk::TreeIter_Ref parent, gint position) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert (gint position) noexcept;

// void gtk_tree_store_insert_after (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_tree_store_insert_after (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, ::GtkTreeIter* sibling /*none,nullable*/);
GI_INLINE_DECL void insert_after (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept;
GI_INLINE_DECL void insert_after (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_after (Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_after () noexcept;

// void gtk_tree_store_insert_before (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/, GtkTreeIter* sibling /*none,nullable*/);
// void gtk_tree_store_insert_before (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/, ::GtkTreeIter* sibling /*none,nullable*/);
GI_INLINE_DECL void insert_before (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept;
GI_INLINE_DECL void insert_before (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_before (Gtk::TreeIter_Ref parent, Gtk::TreeIter_Ref sibling) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_before () noexcept;

// void gtk_tree_store_insert_with_values (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, GtkTreeIter* parent /*none,nullable*/, int position,  ..._ /*none*/);
// void gtk_tree_store_insert_with_values (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by insert_with_valuesv, varargs not supported

// void gtk_tree_store_insert_with_valuesv (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,opt,ca*/, GtkTreeIter* parent /*none,nullable*/, int position, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_tree_store_insert_with_valuesv (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,opt,ca*/, ::GtkTreeIter* parent /*none,nullable*/, gint position, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// gboolean gtk_tree_store_is_ancestor (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* descendant /*none*/);
// gboolean gtk_tree_store_is_ancestor (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* descendant /*none*/);
GI_INLINE_DECL bool is_ancestor (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref descendant) noexcept;

// int gtk_tree_store_iter_depth (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gint gtk_tree_store_iter_depth (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL gint iter_depth (Gtk::TreeIter_Ref iter) noexcept;

// gboolean gtk_tree_store_iter_is_valid (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_store_iter_is_valid (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool iter_is_valid (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_store_move_after (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_tree_store_move_after (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
GI_INLINE_DECL void move_after (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept;
GI_INLINE_DECL void move_after (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_store_move_before (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, GtkTreeIter* position /*none,nullable*/);
// void gtk_tree_store_move_before (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreeIter* position /*none,nullable*/);
GI_INLINE_DECL void move_before (Gtk::TreeIter_Ref iter, Gtk::TreeIter_Ref position) noexcept;
GI_INLINE_DECL void move_before (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_store_prepend (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none,out,ca*/, GtkTreeIter* parent /*none,nullable*/);
// void gtk_tree_store_prepend (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none,out,ca*/, ::GtkTreeIter* parent /*none,nullable*/);
GI_INLINE_DECL void prepend (Gtk::TreeIter & iter, Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL void prepend (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter prepend (Gtk::TreeIter_Ref parent) noexcept;
GI_INLINE_DECL Gtk::TreeIter prepend () noexcept;

// gboolean gtk_tree_store_remove (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/);
// gboolean gtk_tree_store_remove (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool remove (Gtk::TreeIter_Ref iter) noexcept;

// void gtk_tree_store_reorder (GtkTreeStore* tree_store /*none*/, GtkTreeIter* parent /*none,nullable*/,  new_order /*none*/);
// void gtk_tree_store_reorder (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* parent /*none,nullable*/, * new_order /*none*/);
// IGNORE; not introspectable, inconsistent array info

// void gtk_tree_store_set (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// void gtk_tree_store_set (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_tree_store_set_column_types (GtkTreeStore* tree_store /*none*/, int n_columns, GType* types /*none*/);
// void gtk_tree_store_set_column_types (::GtkTreeStore* tree_store /*none*/, gint n_columns, GType* types /*none*/);
GI_INLINE_DECL void set_column_types (gint n_columns, const GType * types) noexcept;

// void gtk_tree_store_set_valist (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, va_list var_args /*none*/);
// void gtk_tree_store_set_valist (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_store_set_value (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, int column, GValue* value /*none*/);
// void gtk_tree_store_set_value (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, gint column, ::GValue* value /*none*/);
GI_INLINE_DECL void set_value (Gtk::TreeIter_Ref iter, gint column, GObject::Value_Ref value) noexcept;

// void gtk_tree_store_set_valuesv (GtkTreeStore* tree_store /*none*/, GtkTreeIter* iter /*none*/, int* columns /*none*/, GValue* values /*none*/, int n_values);
// void gtk_tree_store_set_valuesv (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* iter /*none*/, gint* columns /*none*/, ::GValue** values /*none*/, gint n_values);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_tree_store_swap (GtkTreeStore* tree_store /*none*/, GtkTreeIter* a /*none*/, GtkTreeIter* b /*none*/);
// void gtk_tree_store_swap (::GtkTreeStore* tree_store /*none*/, ::GtkTreeIter* a /*none*/, ::GtkTreeIter* b /*none*/);
GI_INLINE_DECL void swap (Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_def.hpp>)
#include <gtk/treestore_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra.hpp>)
#include <gtk/treestore_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeStore : public GI_GTK_TREESTORE_BASE
{ typedef GI_GTK_TREESTORE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeStore>
{ typedef Gtk::TreeStore type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"
#include "treedragdest.hpp"
#include "treedragsource.hpp"
#include "treemodel.hpp"
#include "treesortable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeStoreClassDef
{
typedef TreeStoreClassDef self;
public:
typedef Gtk::TreeStore instance_type;
typedef ::GtkTreeStoreClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeStoreClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeStoreClass: public detail::ClassTemplate<Gtk::impl::internal::TreeStoreClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::TreeDragDestIfaceClassImpl, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl>
{
friend class internal::TreeStoreClassDef;
typedef TreeStoreClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeStoreClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::TreeDragDestIfaceClassImpl, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;
typedef Gtk::impl::internal::TreeDragDestIfaceClassImpl GtkTreeDragDestIface_type;
typedef Gtk::impl::internal::TreeDragSourceIfaceClassImpl GtkTreeDragSourceIface_type;
typedef Gtk::impl::internal::TreeModelIfaceClassImpl GtkTreeModelIface_type;
typedef Gtk::impl::internal::TreeSortableIfaceClassImpl GtkTreeSortableIface_type;



};


struct TreeStoreClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TreeStoreImpl = detail::ObjectImpl<TreeStore, internal::TreeStoreClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
