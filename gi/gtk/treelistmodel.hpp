// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTMODEL_HPP_
#define _GI_GTK_TREELISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeListRow;

class TreeListModel;

namespace base {


#define GI_GTK_TREELISTMODEL_BASE base::TreeListModelBase
class TreeListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeListModel BaseObjectType;

TreeListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// GtkTreeListModel* /*full*/ gtk_tree_list_model_new (GListModel* root /*full*/, gboolean passthrough, gboolean autoexpand, GtkTreeListModelCreateModelFunc create_func /*none*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkTreeListModel* /*full*/ gtk_tree_list_model_new (::GListModel* root /*full*/, gboolean passthrough, gboolean autoexpand, Gtk::TreeListModelCreateModelFunc::cfunction_type create_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
static GI_INLINE_DECL Gtk::TreeListModel new_ (Gio::ListModel root, gboolean passthrough, gboolean autoexpand, Gtk::TreeListModelCreateModelFunc create_func) noexcept;

// gboolean gtk_tree_list_model_get_autoexpand (GtkTreeListModel* self /*none*/);
// gboolean gtk_tree_list_model_get_autoexpand (::GtkTreeListModel* self /*none*/);
GI_INLINE_DECL bool get_autoexpand () noexcept;

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_child_row (GtkTreeListModel* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_child_row (::GtkTreeListModel* self /*none*/, guint position);
GI_INLINE_DECL Gtk::TreeListRow get_child_row (guint position) noexcept;

// GListModel* /*none*/ gtk_tree_list_model_get_model (GtkTreeListModel* self /*none*/);
// ::GListModel* /*none*/ gtk_tree_list_model_get_model (::GtkTreeListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// gboolean gtk_tree_list_model_get_passthrough (GtkTreeListModel* self /*none*/);
// gboolean gtk_tree_list_model_get_passthrough (::GtkTreeListModel* self /*none*/);
GI_INLINE_DECL bool get_passthrough () noexcept;

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_row (GtkTreeListModel* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_model_get_row (::GtkTreeListModel* self /*none*/, guint position);
GI_INLINE_DECL Gtk::TreeListRow get_row (guint position) noexcept;

// void gtk_tree_list_model_set_autoexpand (GtkTreeListModel* self /*none*/, gboolean autoexpand);
// void gtk_tree_list_model_set_autoexpand (::GtkTreeListModel* self /*none*/, gboolean autoexpand);
GI_INLINE_DECL void set_autoexpand (gboolean autoexpand) noexcept;

gi::property_proxy<bool, base::TreeListModelBase> property_autoexpand()
{ return gi::property_proxy<bool, base::TreeListModelBase> (*this, "autoexpand"); }
const gi::property_proxy<bool, base::TreeListModelBase> property_autoexpand() const
{ return gi::property_proxy<bool, base::TreeListModelBase> (*this, "autoexpand"); }

gi::property_proxy<GType, base::TreeListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::TreeListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::TreeListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::TreeListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::TreeListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::TreeListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::TreeListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::TreeListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::TreeListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::TreeListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::TreeListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::TreeListModelBase> (*this, "n-items"); }

gi::property_proxy<bool, base::TreeListModelBase> property_passthrough()
{ return gi::property_proxy<bool, base::TreeListModelBase> (*this, "passthrough"); }
const gi::property_proxy<bool, base::TreeListModelBase> property_passthrough() const
{ return gi::property_proxy<bool, base::TreeListModelBase> (*this, "passthrough"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistmodel_extra_def.hpp>)
#include <gtk/treelistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistmodel_extra.hpp>)
#include <gtk/treelistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeListModel : public GI_GTK_TREELISTMODEL_BASE
{ typedef GI_GTK_TREELISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeListModel>
{ typedef Gtk::TreeListModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeListModelClassDef
{
typedef TreeListModelClassDef self;
public:
typedef Gtk::TreeListModel instance_type;
typedef ::GtkTreeListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeListModelClass: public detail::ClassTemplate<Gtk::impl::internal::TreeListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::TreeListModelClassDef;
typedef TreeListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};


struct TreeListModelClassDef::TypeInitData
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

using TreeListModelImpl = detail::ObjectImpl<TreeListModel, internal::TreeListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
