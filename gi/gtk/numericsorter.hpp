// AUTO-GENERATED

#ifndef _GI_GTK_NUMERICSORTER_HPP_
#define _GI_GTK_NUMERICSORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class NumericSorter;

namespace base {


#define GI_GTK_NUMERICSORTER_BASE base::NumericSorterBase
class NumericSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkNumericSorter BaseObjectType;

NumericSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_numeric_sorter_get_type(); } 

// GtkNumericSorter* /*full*/ gtk_numeric_sorter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkNumericSorter* /*full*/ gtk_numeric_sorter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_numeric_sorter_get_expression (GtkNumericSorter* self /*none*/);
//  /*none,nullable*/ gtk_numeric_sorter_get_expression (::GtkNumericSorter* self /*none*/);
// SKIP;  type  not supported

// GtkSortType gtk_numeric_sorter_get_sort_order (GtkNumericSorter* self /*none*/);
// ::GtkSortType gtk_numeric_sorter_get_sort_order (::GtkNumericSorter* self /*none*/);
GI_INLINE_DECL Gtk::SortType get_sort_order () noexcept;

// void gtk_numeric_sorter_set_expression (GtkNumericSorter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_numeric_sorter_set_expression (::GtkNumericSorter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_numeric_sorter_set_sort_order (GtkNumericSorter* self /*none*/, GtkSortType sort_order);
// void gtk_numeric_sorter_set_sort_order (::GtkNumericSorter* self /*none*/, ::GtkSortType sort_order);
GI_INLINE_DECL void set_sort_order (Gtk::SortType sort_order) noexcept;

gi::property_proxy<Gtk::SortType, base::NumericSorterBase> property_sort_order()
{ return gi::property_proxy<Gtk::SortType, base::NumericSorterBase> (*this, "sort-order"); }
const gi::property_proxy<Gtk::SortType, base::NumericSorterBase> property_sort_order() const
{ return gi::property_proxy<Gtk::SortType, base::NumericSorterBase> (*this, "sort-order"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/numericsorter_extra_def.hpp>)
#include <gtk/numericsorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/numericsorter_extra.hpp>)
#include <gtk/numericsorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NumericSorter : public GI_GTK_NUMERICSORTER_BASE
{ typedef GI_GTK_NUMERICSORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNumericSorter>
{ typedef Gtk::NumericSorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NumericSorterClassDef
{
typedef NumericSorterClassDef self;
public:
typedef Gtk::NumericSorter instance_type;
typedef ::GtkNumericSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NumericSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NumericSorterClass: public detail::ClassTemplate<Gtk::impl::internal::NumericSorterClassDef, Gtk::impl::internal::SorterClass>
{
friend class internal::NumericSorterClassDef;
typedef NumericSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NumericSorterClassDef, Gtk::impl::internal::SorterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct NumericSorterClassDef::TypeInitData
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

using NumericSorterImpl = detail::ObjectImpl<NumericSorter, internal::NumericSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
