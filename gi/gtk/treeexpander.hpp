// AUTO-GENERATED

#ifndef _GI_GTK_TREEEXPANDER_HPP_
#define _GI_GTK_TREEEXPANDER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class TreeListRow;
class Widget;

class TreeExpander;

namespace base {


#define GI_GTK_TREEEXPANDER_BASE base::TreeExpanderBase
class TreeExpanderBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkTreeExpander BaseObjectType;

TreeExpanderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_expander_get_type(); } 

// GtkWidget* /*none*/ gtk_tree_expander_new ();
// ::GtkTreeExpander* /*none*/ gtk_tree_expander_new ();
static GI_INLINE_DECL Gtk::TreeExpander new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_tree_expander_get_child (GtkTreeExpander* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_tree_expander_get_child (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_tree_expander_get_hide_expander (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_hide_expander (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL bool get_hide_expander () noexcept;

// gboolean gtk_tree_expander_get_indent_for_depth (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_indent_for_depth (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL bool get_indent_for_depth () noexcept;

// gboolean gtk_tree_expander_get_indent_for_icon (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_indent_for_icon (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL bool get_indent_for_icon () noexcept;

// gpointer /*full,nullable*/ gtk_tree_expander_get_item (GtkTreeExpander* self /*none*/);
// ::GObject* /*full,nullable*/ gtk_tree_expander_get_item (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// GtkTreeListRow* /*none,nullable*/ gtk_tree_expander_get_list_row (GtkTreeExpander* self /*none*/);
// ::GtkTreeListRow* /*none,nullable*/ gtk_tree_expander_get_list_row (::GtkTreeExpander* self /*none*/);
GI_INLINE_DECL Gtk::TreeListRow get_list_row () noexcept;

// void gtk_tree_expander_set_child (GtkTreeExpander* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_tree_expander_set_child (::GtkTreeExpander* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_tree_expander_set_hide_expander (GtkTreeExpander* self /*none*/, gboolean hide_expander);
// void gtk_tree_expander_set_hide_expander (::GtkTreeExpander* self /*none*/, gboolean hide_expander);
GI_INLINE_DECL void set_hide_expander (gboolean hide_expander) noexcept;

// void gtk_tree_expander_set_indent_for_depth (GtkTreeExpander* self /*none*/, gboolean indent_for_depth);
// void gtk_tree_expander_set_indent_for_depth (::GtkTreeExpander* self /*none*/, gboolean indent_for_depth);
GI_INLINE_DECL void set_indent_for_depth (gboolean indent_for_depth) noexcept;

// void gtk_tree_expander_set_indent_for_icon (GtkTreeExpander* self /*none*/, gboolean indent_for_icon);
// void gtk_tree_expander_set_indent_for_icon (::GtkTreeExpander* self /*none*/, gboolean indent_for_icon);
GI_INLINE_DECL void set_indent_for_icon (gboolean indent_for_icon) noexcept;

// void gtk_tree_expander_set_list_row (GtkTreeExpander* self /*none*/, GtkTreeListRow* list_row /*none,nullable*/);
// void gtk_tree_expander_set_list_row (::GtkTreeExpander* self /*none*/, ::GtkTreeListRow* list_row /*none,nullable*/);
GI_INLINE_DECL void set_list_row (Gtk::TreeListRow list_row) noexcept;
GI_INLINE_DECL void set_list_row () noexcept;

gi::property_proxy<Gtk::Widget, base::TreeExpanderBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::TreeExpanderBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::TreeExpanderBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::TreeExpanderBase> (*this, "child"); }

gi::property_proxy<bool, base::TreeExpanderBase> property_hide_expander()
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "hide-expander"); }
const gi::property_proxy<bool, base::TreeExpanderBase> property_hide_expander() const
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "hide-expander"); }

gi::property_proxy<bool, base::TreeExpanderBase> property_indent_for_depth()
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "indent-for-depth"); }
const gi::property_proxy<bool, base::TreeExpanderBase> property_indent_for_depth() const
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "indent-for-depth"); }

gi::property_proxy<bool, base::TreeExpanderBase> property_indent_for_icon()
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "indent-for-icon"); }
const gi::property_proxy<bool, base::TreeExpanderBase> property_indent_for_icon() const
{ return gi::property_proxy<bool, base::TreeExpanderBase> (*this, "indent-for-icon"); }

gi::property_proxy<GObject::Object, base::TreeExpanderBase> property_item()
{ return gi::property_proxy<GObject::Object, base::TreeExpanderBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::TreeExpanderBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::TreeExpanderBase> (*this, "item"); }

gi::property_proxy<Gtk::TreeListRow, base::TreeExpanderBase> property_list_row()
{ return gi::property_proxy<Gtk::TreeListRow, base::TreeExpanderBase> (*this, "list-row"); }
const gi::property_proxy<Gtk::TreeListRow, base::TreeExpanderBase> property_list_row() const
{ return gi::property_proxy<Gtk::TreeListRow, base::TreeExpanderBase> (*this, "list-row"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeexpander_extra_def.hpp>)
#include <gtk/treeexpander_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeexpander_extra.hpp>)
#include <gtk/treeexpander_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeExpander : public GI_GTK_TREEEXPANDER_BASE
{ typedef GI_GTK_TREEEXPANDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeExpander>
{ typedef Gtk::TreeExpander type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeExpanderClassDef
{
typedef TreeExpanderClassDef self;
public:
typedef Gtk::TreeExpander instance_type;
typedef ::GtkTreeExpanderClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeExpanderClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeExpanderClass: public detail::ClassTemplate<Gtk::impl::internal::TreeExpanderClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::TreeExpanderClassDef;
typedef TreeExpanderClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeExpanderClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TreeExpanderClassDef::TypeInitData
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

using TreeExpanderImpl = detail::ObjectImpl<TreeExpander, internal::TreeExpanderClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
