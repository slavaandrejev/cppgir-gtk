// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTROWSORTER_HPP_
#define _GI_GTK_TREELISTROWSORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Sorter;

class TreeListRowSorter;

namespace base {


#define GI_GTK_TREELISTROWSORTER_BASE base::TreeListRowSorterBase
class TreeListRowSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkTreeListRowSorter BaseObjectType;

TreeListRowSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_list_row_sorter_get_type(); } 

// GtkTreeListRowSorter* /*full*/ gtk_tree_list_row_sorter_new (GtkSorter* sorter /*full,nullable*/);
// ::GtkTreeListRowSorter* /*full*/ gtk_tree_list_row_sorter_new (::GtkSorter* sorter /*full,nullable*/);
static GI_INLINE_DECL Gtk::TreeListRowSorter new_ (Gtk::Sorter sorter) noexcept;
static GI_INLINE_DECL Gtk::TreeListRowSorter new_ () noexcept;

// GtkSorter* /*none,nullable*/ gtk_tree_list_row_sorter_get_sorter (GtkTreeListRowSorter* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_tree_list_row_sorter_get_sorter (::GtkTreeListRowSorter* self /*none*/);
GI_INLINE_DECL Gtk::Sorter get_sorter () noexcept;

// void gtk_tree_list_row_sorter_set_sorter (GtkTreeListRowSorter* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_tree_list_row_sorter_set_sorter (::GtkTreeListRowSorter* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
GI_INLINE_DECL void set_sorter (Gtk::Sorter sorter) noexcept;
GI_INLINE_DECL void set_sorter () noexcept;

gi::property_proxy<Gtk::Sorter, base::TreeListRowSorterBase> property_sorter()
{ return gi::property_proxy<Gtk::Sorter, base::TreeListRowSorterBase> (*this, "sorter"); }
const gi::property_proxy<Gtk::Sorter, base::TreeListRowSorterBase> property_sorter() const
{ return gi::property_proxy<Gtk::Sorter, base::TreeListRowSorterBase> (*this, "sorter"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistrowsorter_extra_def.hpp>)
#include <gtk/treelistrowsorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistrowsorter_extra.hpp>)
#include <gtk/treelistrowsorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeListRowSorter : public GI_GTK_TREELISTROWSORTER_BASE
{ typedef GI_GTK_TREELISTROWSORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeListRowSorter>
{ typedef Gtk::TreeListRowSorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeListRowSorterClassDef
{
typedef TreeListRowSorterClassDef self;
public:
typedef Gtk::TreeListRowSorter instance_type;
typedef ::GtkTreeListRowSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeListRowSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeListRowSorterClass: public detail::ClassTemplate<Gtk::impl::internal::TreeListRowSorterClassDef, Gtk::impl::internal::SorterClass>
{
friend class internal::TreeListRowSorterClassDef;
typedef TreeListRowSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeListRowSorterClassDef, Gtk::impl::internal::SorterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TreeListRowSorterClassDef::TypeInitData
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

using TreeListRowSorterImpl = detail::ObjectImpl<TreeListRowSorter, internal::TreeListRowSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
