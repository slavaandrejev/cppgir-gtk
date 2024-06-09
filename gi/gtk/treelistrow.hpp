// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTROW_HPP_
#define _GI_GTK_TREELISTROW_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TreeListRow;

namespace base {


#define GI_GTK_TREELISTROW_BASE base::TreeListRowBase
class TreeListRowBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeListRow BaseObjectType;

TreeListRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_list_row_get_type(); } 

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_child_row (GtkTreeListRow* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_child_row (::GtkTreeListRow* self /*none*/, guint position);
GI_INLINE_DECL Gtk::TreeListRow get_child_row (guint position) noexcept;

// GListModel* /*none,nullable*/ gtk_tree_list_row_get_children (GtkTreeListRow* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_tree_list_row_get_children (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_children () noexcept;

// guint gtk_tree_list_row_get_depth (GtkTreeListRow* self /*none*/);
// guint gtk_tree_list_row_get_depth (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL guint get_depth () noexcept;

// gboolean gtk_tree_list_row_get_expanded (GtkTreeListRow* self /*none*/);
// gboolean gtk_tree_list_row_get_expanded (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL bool get_expanded () noexcept;

// gpointer /*full,nullable*/ gtk_tree_list_row_get_item (GtkTreeListRow* self /*none*/);
// ::GObject* /*full,nullable*/ gtk_tree_list_row_get_item (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_parent (GtkTreeListRow* self /*none*/);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_parent (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL Gtk::TreeListRow get_parent () noexcept;

// guint gtk_tree_list_row_get_position (GtkTreeListRow* self /*none*/);
// guint gtk_tree_list_row_get_position (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL guint get_position () noexcept;

// gboolean gtk_tree_list_row_is_expandable (GtkTreeListRow* self /*none*/);
// gboolean gtk_tree_list_row_is_expandable (::GtkTreeListRow* self /*none*/);
GI_INLINE_DECL bool is_expandable () noexcept;

// void gtk_tree_list_row_set_expanded (GtkTreeListRow* self /*none*/, gboolean expanded);
// void gtk_tree_list_row_set_expanded (::GtkTreeListRow* self /*none*/, gboolean expanded);
GI_INLINE_DECL void set_expanded (gboolean expanded) noexcept;

gi::property_proxy<Gio::ListModel, base::TreeListRowBase> property_children()
{ return gi::property_proxy<Gio::ListModel, base::TreeListRowBase> (*this, "children"); }
const gi::property_proxy<Gio::ListModel, base::TreeListRowBase> property_children() const
{ return gi::property_proxy<Gio::ListModel, base::TreeListRowBase> (*this, "children"); }

gi::property_proxy<guint, base::TreeListRowBase> property_depth()
{ return gi::property_proxy<guint, base::TreeListRowBase> (*this, "depth"); }
const gi::property_proxy<guint, base::TreeListRowBase> property_depth() const
{ return gi::property_proxy<guint, base::TreeListRowBase> (*this, "depth"); }

gi::property_proxy<bool, base::TreeListRowBase> property_expandable()
{ return gi::property_proxy<bool, base::TreeListRowBase> (*this, "expandable"); }
const gi::property_proxy<bool, base::TreeListRowBase> property_expandable() const
{ return gi::property_proxy<bool, base::TreeListRowBase> (*this, "expandable"); }

gi::property_proxy<bool, base::TreeListRowBase> property_expanded()
{ return gi::property_proxy<bool, base::TreeListRowBase> (*this, "expanded"); }
const gi::property_proxy<bool, base::TreeListRowBase> property_expanded() const
{ return gi::property_proxy<bool, base::TreeListRowBase> (*this, "expanded"); }

gi::property_proxy<GObject::Object, base::TreeListRowBase> property_item()
{ return gi::property_proxy<GObject::Object, base::TreeListRowBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::TreeListRowBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::TreeListRowBase> (*this, "item"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistrow_extra_def.hpp>)
#include <gtk/treelistrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistrow_extra.hpp>)
#include <gtk/treelistrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeListRow : public GI_GTK_TREELISTROW_BASE
{ typedef GI_GTK_TREELISTROW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeListRow>
{ typedef Gtk::TreeListRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeListRowClassDef
{
typedef TreeListRowClassDef self;
public:
typedef Gtk::TreeListRow instance_type;
typedef ::GtkTreeListRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeListRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeListRowClass: public detail::ClassTemplate<Gtk::impl::internal::TreeListRowClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TreeListRowClassDef;
typedef TreeListRowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeListRowClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TreeListRowClassDef::TypeInitData
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

using TreeListRowImpl = detail::ObjectImpl<TreeListRow, internal::TreeListRowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
