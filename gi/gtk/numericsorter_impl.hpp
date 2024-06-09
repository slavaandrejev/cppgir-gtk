// AUTO-GENERATED

#ifndef _GI_GTK_NUMERICSORTER_IMPL_HPP_
#define _GI_GTK_NUMERICSORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkNumericSorter* /*full*/ gtk_numeric_sorter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkNumericSorter* /*full*/ gtk_numeric_sorter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_numeric_sorter_get_expression (GtkNumericSorter* self /*none*/);
//  /*none,nullable*/ gtk_numeric_sorter_get_expression (::GtkNumericSorter* self /*none*/);
// SKIP;  type  not supported

// GtkSortType gtk_numeric_sorter_get_sort_order (GtkNumericSorter* self /*none*/);
// ::GtkSortType gtk_numeric_sorter_get_sort_order (::GtkNumericSorter* self /*none*/);
Gtk::SortType base::NumericSorterBase::get_sort_order () noexcept
{
  typedef ::GtkSortType (*call_wrap_t) (::GtkNumericSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_numeric_sorter_get_sort_order;
  auto _temp_ret = call_wrap_v ((::GtkNumericSorter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_numeric_sorter_set_expression (GtkNumericSorter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_numeric_sorter_set_expression (::GtkNumericSorter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_numeric_sorter_set_sort_order (GtkNumericSorter* self /*none*/, GtkSortType sort_order);
// void gtk_numeric_sorter_set_sort_order (::GtkNumericSorter* self /*none*/, ::GtkSortType sort_order);
void base::NumericSorterBase::set_sort_order (Gtk::SortType sort_order) noexcept
{
  typedef void (*call_wrap_t) (::GtkNumericSorter* self, ::GtkSortType sort_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_numeric_sorter_set_sort_order;
  auto sort_order_to_c = gi::unwrap (sort_order);
  call_wrap_v ((::GtkNumericSorter*) (gobj_()), (::GtkSortType) (sort_order_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/numericsorter_extra_def_impl.hpp>)
#include <gtk/numericsorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/numericsorter_extra_impl.hpp>)
#include <gtk/numericsorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NumericSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkNumericSorterClass *methods = (::GtkNumericSorterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
