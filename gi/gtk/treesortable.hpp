// AUTO-GENERATED

#ifndef _GI_GTK_TREESORTABLE_HPP_
#define _GI_GTK_TREESORTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TreeSortable;

namespace base {


#define GI_GTK_TREESORTABLE_BASE base::TreeSortableBase
class TreeSortableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeSortable BaseObjectType;

TreeSortableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_sortable_get_type(); } 

// gboolean gtk_tree_sortable_get_sort_column_id (GtkTreeSortable* sortable /*none*/, int* sort_column_id, GtkSortType* order);
// gboolean gtk_tree_sortable_get_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint* sort_column_id, ::GtkSortType* order);
GI_INLINE_DECL bool get_sort_column_id (gint & sort_column_id, Gtk::SortType & order) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, Gtk::SortType> get_sort_column_id () noexcept;

// gboolean gtk_tree_sortable_has_default_sort_func (GtkTreeSortable* sortable /*none*/);
// gboolean gtk_tree_sortable_has_default_sort_func (::GtkTreeSortable* sortable /*none*/);
GI_INLINE_DECL bool has_default_sort_func () noexcept;

// void gtk_tree_sortable_set_default_sort_func (GtkTreeSortable* sortable /*none*/, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_sortable_set_default_sort_func (::GtkTreeSortable* sortable /*none*/, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_default_sort_func (Gtk::TreeIterCompareFunc sort_func) noexcept;

// void gtk_tree_sortable_set_sort_column_id (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkSortType order);
// void gtk_tree_sortable_set_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, ::GtkSortType order);
GI_INLINE_DECL void set_sort_column_id (gint sort_column_id, Gtk::SortType order) noexcept;

// void gtk_tree_sortable_set_sort_func (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_sortable_set_sort_func (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_sort_func (gint sort_column_id, Gtk::TreeIterCompareFunc sort_func) noexcept;

// void gtk_tree_sortable_sort_column_changed (GtkTreeSortable* sortable /*none*/);
// void gtk_tree_sortable_sort_column_changed (::GtkTreeSortable* sortable /*none*/);
GI_INLINE_DECL void sort_column_changed () noexcept;

// (signal) void sort-column-changed ();
// (signal) void sort-column-changed ();
gi::signal_proxy<void(Gtk::TreeSortable)> signal_sort_column_changed()
{ return gi::signal_proxy<void(Gtk::TreeSortable)> (*this, "sort-column-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra_def.hpp>)
#include <gtk/treesortable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra.hpp>)
#include <gtk/treesortable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeSortable : public GI_GTK_TREESORTABLE_BASE
{ typedef GI_GTK_TREESORTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeSortable>
{ typedef Gtk::TreeSortable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeSortableIfaceDef
{
typedef TreeSortableIfaceDef self;
public:
typedef Gtk::TreeSortable instance_type;
typedef ::GtkTreeSortableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_sort_column_id) = self;
using GI_MEMBER_CHECK_CONFLICT(has_default_sort_func) = self;
using GI_MEMBER_CHECK_CONFLICT(set_default_sort_func) = self;
using GI_MEMBER_CHECK_CONFLICT(set_sort_column_id) = self;
using GI_MEMBER_CHECK_CONFLICT(set_sort_func) = self;
using GI_MEMBER_CHECK_CONFLICT(sort_column_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeSortableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeSortable::get_sort_column_id (GtkTreeSortable* sortable /*none*/, int* sort_column_id, GtkSortType* order);
// gboolean TreeSortable::get_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint* sort_column_id, ::GtkSortType* order);
virtual bool get_sort_column_id_ (gint & sort_column_id, Gtk::SortType & order) noexcept = 0;

// gboolean TreeSortable::has_default_sort_func (GtkTreeSortable* sortable /*none*/);
// gboolean TreeSortable::has_default_sort_func (::GtkTreeSortable* sortable /*none*/);
virtual bool has_default_sort_func_ () noexcept = 0;

// void TreeSortable::set_default_sort_func (GtkTreeSortable* sortable /*none*/, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void TreeSortable::set_default_sort_func (::GtkTreeSortable* sortable /*none*/, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
virtual void set_default_sort_func_ (Gtk::TreeIterCompareFunc sort_func) noexcept = 0;

// void TreeSortable::set_sort_column_id (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkSortType order);
// void TreeSortable::set_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, ::GtkSortType order);
virtual void set_sort_column_id_ (gint sort_column_id, Gtk::SortType order) noexcept = 0;

// void TreeSortable::set_sort_func (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void TreeSortable::set_sort_func (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
virtual void set_sort_func_ (gint sort_column_id, Gtk::TreeIterCompareFunc sort_func) noexcept = 0;

// void TreeSortable::sort_column_changed (GtkTreeSortable* sortable /*none*/);
// void TreeSortable::sort_column_changed (::GtkTreeSortable* sortable /*none*/);
virtual void sort_column_changed_ () noexcept = 0;


};

using TreeSortableImpl = detail::InterfaceImpl<TreeSortableIfaceDef>;

class TreeSortableIfaceClassImpl: public detail::InterfaceClassImpl<TreeSortableImpl>
{
friend class internal::TreeSortableIfaceDef;
typedef TreeSortableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeSortableImpl> super;

protected:
using super::super;

// gboolean TreeSortable::get_sort_column_id (GtkTreeSortable* sortable /*none*/, int* sort_column_id, GtkSortType* order);
// gboolean TreeSortable::get_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint* sort_column_id, ::GtkSortType* order);
GI_INLINE_DECL bool get_sort_column_id_ (gint & sort_column_id, Gtk::SortType & order) noexcept override;

// gboolean TreeSortable::has_default_sort_func (GtkTreeSortable* sortable /*none*/);
// gboolean TreeSortable::has_default_sort_func (::GtkTreeSortable* sortable /*none*/);
GI_INLINE_DECL bool has_default_sort_func_ () noexcept override;

// void TreeSortable::set_default_sort_func (GtkTreeSortable* sortable /*none*/, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void TreeSortable::set_default_sort_func (::GtkTreeSortable* sortable /*none*/, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_default_sort_func_ (Gtk::TreeIterCompareFunc sort_func) noexcept override;

// void TreeSortable::set_sort_column_id (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkSortType order);
// void TreeSortable::set_sort_column_id (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, ::GtkSortType order);
GI_INLINE_DECL void set_sort_column_id_ (gint sort_column_id, Gtk::SortType order) noexcept override;

// void TreeSortable::set_sort_func (GtkTreeSortable* sortable /*none*/, int sort_column_id, GtkTreeIterCompareFunc sort_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void TreeSortable::set_sort_func (::GtkTreeSortable* sortable /*none*/, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_sort_func_ (gint sort_column_id, Gtk::TreeIterCompareFunc sort_func) noexcept override;

// void TreeSortable::sort_column_changed (GtkTreeSortable* sortable /*none*/);
// void TreeSortable::sort_column_changed (::GtkTreeSortable* sortable /*none*/);
GI_INLINE_DECL void sort_column_changed_ () noexcept override;


};


struct TreeSortableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, get_sort_column_id)
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, has_default_sort_func)
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, set_default_sort_func)
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, set_sort_column_id)
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, set_sort_func)
  GI_MEMBER_DEFINE(TreeSortableIfaceClassImpl, sort_column_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_sort_column_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, has_default_sort_func),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_default_sort_func),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_sort_column_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_sort_func),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, sort_column_changed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
