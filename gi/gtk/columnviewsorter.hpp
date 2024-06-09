// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWSORTER_HPP_
#define _GI_GTK_COLUMNVIEWSORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewColumn;

class ColumnViewSorter;

namespace base {


#define GI_GTK_COLUMNVIEWSORTER_BASE base::ColumnViewSorterBase
class ColumnViewSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkColumnViewSorter BaseObjectType;

ColumnViewSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_column_view_sorter_get_type(); } 

// guint gtk_column_view_sorter_get_n_sort_columns (GtkColumnViewSorter* self /*none*/);
// guint gtk_column_view_sorter_get_n_sort_columns (::GtkColumnViewSorter* self /*none*/);
GI_INLINE_DECL guint get_n_sort_columns () noexcept;

// GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_nth_sort_column (GtkColumnViewSorter* self /*none*/, guint position, GtkSortType* sort_order);
// ::GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_nth_sort_column (::GtkColumnViewSorter* self /*none*/, guint position, ::GtkSortType* sort_order);
GI_INLINE_DECL Gtk::ColumnViewColumn get_nth_sort_column (guint position, Gtk::SortType & sort_order) noexcept;
GI_INLINE_DECL std::tuple<Gtk::ColumnViewColumn, Gtk::SortType> get_nth_sort_column (guint position) noexcept;

// GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_primary_sort_column (GtkColumnViewSorter* self /*none*/);
// ::GtkColumnViewColumn* /*none,nullable*/ gtk_column_view_sorter_get_primary_sort_column (::GtkColumnViewSorter* self /*none*/);
GI_INLINE_DECL Gtk::ColumnViewColumn get_primary_sort_column () noexcept;

// GtkSortType gtk_column_view_sorter_get_primary_sort_order (GtkColumnViewSorter* self /*none*/);
// ::GtkSortType gtk_column_view_sorter_get_primary_sort_order (::GtkColumnViewSorter* self /*none*/);
GI_INLINE_DECL Gtk::SortType get_primary_sort_order () noexcept;

gi::property_proxy<Gtk::ColumnViewColumn, base::ColumnViewSorterBase> property_primary_sort_column()
{ return gi::property_proxy<Gtk::ColumnViewColumn, base::ColumnViewSorterBase> (*this, "primary-sort-column"); }
const gi::property_proxy<Gtk::ColumnViewColumn, base::ColumnViewSorterBase> property_primary_sort_column() const
{ return gi::property_proxy<Gtk::ColumnViewColumn, base::ColumnViewSorterBase> (*this, "primary-sort-column"); }

gi::property_proxy<Gtk::SortType, base::ColumnViewSorterBase> property_primary_sort_order()
{ return gi::property_proxy<Gtk::SortType, base::ColumnViewSorterBase> (*this, "primary-sort-order"); }
const gi::property_proxy<Gtk::SortType, base::ColumnViewSorterBase> property_primary_sort_order() const
{ return gi::property_proxy<Gtk::SortType, base::ColumnViewSorterBase> (*this, "primary-sort-order"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewsorter_extra_def.hpp>)
#include <gtk/columnviewsorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewsorter_extra.hpp>)
#include <gtk/columnviewsorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewSorter : public GI_GTK_COLUMNVIEWSORTER_BASE
{ typedef GI_GTK_COLUMNVIEWSORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColumnViewSorter>
{ typedef Gtk::ColumnViewSorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColumnViewSorterClassDef
{
typedef ColumnViewSorterClassDef self;
public:
typedef Gtk::ColumnViewSorter instance_type;
typedef ::GtkColumnViewSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ColumnViewSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColumnViewSorterClass: public detail::ClassTemplate<Gtk::impl::internal::ColumnViewSorterClassDef, Gtk::impl::internal::SorterClass>
{
friend class internal::ColumnViewSorterClassDef;
typedef ColumnViewSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColumnViewSorterClassDef, Gtk::impl::internal::SorterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ColumnViewSorterClassDef::TypeInitData
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

using ColumnViewSorterImpl = detail::ObjectImpl<ColumnViewSorter, internal::ColumnViewSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
