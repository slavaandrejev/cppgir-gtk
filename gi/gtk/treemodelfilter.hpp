// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELFILTER_HPP_
#define _GI_GTK_TREEMODELFILTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeDragSource;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;

class TreeModelFilter;

namespace base {


#define GI_GTK_TREEMODELFILTER_BASE base::TreeModelFilterBase
class TreeModelFilterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeModelFilter BaseObjectType;

TreeModelFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_model_filter_get_type(); } 

GI_INLINE_DECL Gtk::TreeDragSource interface_ (gi::interface_tag<Gtk::TreeDragSource>);

GI_INLINE_DECL operator Gtk::TreeDragSource ();

GI_INLINE_DECL Gtk::TreeModel interface_ (gi::interface_tag<Gtk::TreeModel>);

GI_INLINE_DECL operator Gtk::TreeModel ();

// void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter* filter /*none*/);
// void gtk_tree_model_filter_clear_cache (::GtkTreeModelFilter* filter /*none*/);
GI_INLINE_DECL void clear_cache () noexcept;

// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter* filter /*none*/, GtkTreeIter* filter_iter /*none,out,ca*/, GtkTreeIter* child_iter /*none*/);
// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (::GtkTreeModelFilter* filter /*none*/, ::GtkTreeIter* filter_iter /*none,out,ca*/, ::GtkTreeIter* child_iter /*none*/);
GI_INLINE_DECL bool convert_child_iter_to_iter (Gtk::TreeIter & filter_iter, Gtk::TreeIter_Ref child_iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> convert_child_iter_to_iter (Gtk::TreeIter_Ref child_iter) noexcept;

// GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_child_path_to_path (GtkTreeModelFilter* filter /*none*/, GtkTreePath* child_path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_child_path_to_path (::GtkTreeModelFilter* filter /*none*/, ::GtkTreePath* child_path /*none*/);
GI_INLINE_DECL Gtk::TreePath convert_child_path_to_path (Gtk::TreePath_Ref child_path) noexcept;

// void gtk_tree_model_filter_convert_iter_to_child_iter (GtkTreeModelFilter* filter /*none*/, GtkTreeIter* child_iter /*none,out,ca*/, GtkTreeIter* filter_iter /*none*/);
// void gtk_tree_model_filter_convert_iter_to_child_iter (::GtkTreeModelFilter* filter /*none*/, ::GtkTreeIter* child_iter /*none,out,ca*/, ::GtkTreeIter* filter_iter /*none*/);
GI_INLINE_DECL void convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter_Ref filter_iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter convert_iter_to_child_iter (Gtk::TreeIter_Ref filter_iter) noexcept;

// GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_path_to_child_path (GtkTreeModelFilter* filter /*none*/, GtkTreePath* filter_path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_model_filter_convert_path_to_child_path (::GtkTreeModelFilter* filter /*none*/, ::GtkTreePath* filter_path /*none*/);
GI_INLINE_DECL Gtk::TreePath convert_path_to_child_path (Gtk::TreePath_Ref filter_path) noexcept;

// GtkTreeModel* /*none*/ gtk_tree_model_filter_get_model (GtkTreeModelFilter* filter /*none*/);
// ::GtkTreeModel* /*none*/ gtk_tree_model_filter_get_model (::GtkTreeModelFilter* filter /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// void gtk_tree_model_filter_refilter (GtkTreeModelFilter* filter /*none*/);
// void gtk_tree_model_filter_refilter (::GtkTreeModelFilter* filter /*none*/);
GI_INLINE_DECL void refilter () noexcept;

// void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter* filter /*none*/, int n_columns, GType* types /*none*/, GtkTreeModelFilterModifyFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_model_filter_set_modify_func (::GtkTreeModelFilter* filter /*none*/, gint n_columns, GType* types /*none*/, Gtk::TreeModelFilterModifyFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_modify_func (gint n_columns, const GType * types, Gtk::TreeModelFilterModifyFunc func) noexcept;

// void gtk_tree_model_filter_set_visible_column (GtkTreeModelFilter* filter /*none*/, int column);
// void gtk_tree_model_filter_set_visible_column (::GtkTreeModelFilter* filter /*none*/, gint column);
GI_INLINE_DECL void set_visible_column (gint column) noexcept;

// void gtk_tree_model_filter_set_visible_func (GtkTreeModelFilter* filter /*none*/, GtkTreeModelFilterVisibleFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_model_filter_set_visible_func (::GtkTreeModelFilter* filter /*none*/, Gtk::TreeModelFilterVisibleFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_visible_func (Gtk::TreeModelFilterVisibleFunc func) noexcept;

gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> property_child_model()
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> (*this, "child-model"); }
const gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> property_child_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> (*this, "child-model"); }

gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> property_virtual_root()
{ return gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> (*this, "virtual-root"); }
const gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> property_virtual_root() const
{ return gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> (*this, "virtual-root"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_def.hpp>)
#include <gtk/treemodelfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra.hpp>)
#include <gtk/treemodelfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeModelFilter : public GI_GTK_TREEMODELFILTER_BASE
{ typedef GI_GTK_TREEMODELFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeModelFilter>
{ typedef Gtk::TreeModelFilter type; }; 

} // namespace repository

} // namespace gi

#include "treedragsource.hpp"
#include "treemodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeModelFilterClassDef
{
typedef TreeModelFilterClassDef self;
public:
typedef Gtk::TreeModelFilter instance_type;
typedef ::GtkTreeModelFilterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(modify) = self;
using GI_MEMBER_CHECK_CONFLICT(visible) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeModelFilterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TreeModelFilter::modify (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/, GValue* value /*none*/, int column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/, ::GValue* value /*none*/, gint column);
virtual void modify_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column) noexcept = 0;

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/);
virtual bool visible_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TreeModelFilterClass: public detail::ClassTemplate<Gtk::impl::internal::TreeModelFilterClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl>
{
friend class internal::TreeModelFilterClassDef;
typedef TreeModelFilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeModelFilterClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::TreeDragSourceIfaceClassImpl GtkTreeDragSourceIface_type;
typedef Gtk::impl::internal::TreeModelIfaceClassImpl GtkTreeModelIface_type;


// void TreeModelFilter::modify (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/, GValue* value /*none*/, int column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/, ::GValue* value /*none*/, gint column);
GI_INLINE_DECL void modify_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column) noexcept override;

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self /*none*/, GtkTreeModel* child_model /*none*/, GtkTreeIter* iter /*none*/);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self /*none*/, ::GtkTreeModel* child_model /*none*/, ::GtkTreeIter* iter /*none*/);
GI_INLINE_DECL bool visible_ (Gtk::TreeModel child_model, Gtk::TreeIter_Ref iter) noexcept override;


};


struct TreeModelFilterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeModelFilterClass, modify)
  GI_MEMBER_DEFINE(TreeModelFilterClass, visible)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, modify),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, visible)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TreeModelFilterImpl = detail::ObjectImpl<TreeModelFilter, internal::TreeModelFilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
