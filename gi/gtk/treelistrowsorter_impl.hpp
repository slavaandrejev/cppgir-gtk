// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTROWSORTER_IMPL_HPP_
#define _GI_GTK_TREELISTROWSORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreeListRowSorter* /*full*/ gtk_tree_list_row_sorter_new (GtkSorter* sorter /*full,nullable*/);
// ::GtkTreeListRowSorter* /*full*/ gtk_tree_list_row_sorter_new (::GtkSorter* sorter /*full,nullable*/);
Gtk::TreeListRowSorter base::TreeListRowSorterBase::new_ (Gtk::Sorter sorter) noexcept
{
  typedef ::GtkTreeListRowSorter* (*call_wrap_t) (::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_list_row_sorter_new;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (sorter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::TreeListRowSorter base::TreeListRowSorterBase::new_ () noexcept
{
  typedef ::GtkTreeListRowSorter* (*call_wrap_t) (::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_list_row_sorter_new;
  auto sorter_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (sorter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSorter* /*none,nullable*/ gtk_tree_list_row_sorter_get_sorter (GtkTreeListRowSorter* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_tree_list_row_sorter_get_sorter (::GtkTreeListRowSorter* self /*none*/);
Gtk::Sorter base::TreeListRowSorterBase::get_sorter () noexcept
{
  typedef ::GtkSorter* (*call_wrap_t) (::GtkTreeListRowSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_sorter_get_sorter;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRowSorter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_tree_list_row_sorter_set_sorter (GtkTreeListRowSorter* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_tree_list_row_sorter_set_sorter (::GtkTreeListRowSorter* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
void base::TreeListRowSorterBase::set_sorter (Gtk::Sorter sorter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeListRowSorter* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_sorter_set_sorter;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_none);
  call_wrap_v ((::GtkTreeListRowSorter*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}
void base::TreeListRowSorterBase::set_sorter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeListRowSorter* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_sorter_set_sorter;
  auto sorter_to_c = nullptr;
  call_wrap_v ((::GtkTreeListRowSorter*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistrowsorter_extra_def_impl.hpp>)
#include <gtk/treelistrowsorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistrowsorter_extra_impl.hpp>)
#include <gtk/treelistrowsorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeListRowSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeListRowSorterClass *methods = (::GtkTreeListRowSorterClass *) class_struct;
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
