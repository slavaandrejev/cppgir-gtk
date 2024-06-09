// AUTO-GENERATED

#ifndef _GI_GTK_SORTER_IMPL_HPP_
#define _GI_GTK_SORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_sorter_changed (GtkSorter* self /*none*/, GtkSorterChange change);
// void gtk_sorter_changed (::GtkSorter* self /*none*/, ::GtkSorterChange change);
void base::SorterBase::changed (Gtk::SorterChange change) noexcept
{
  typedef void (*call_wrap_t) (::GtkSorter* self, ::GtkSorterChange change);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sorter_changed;
  auto change_to_c = gi::unwrap (change);
  call_wrap_v ((::GtkSorter*) (gobj_()), (::GtkSorterChange) (change_to_c));
}

// GtkOrdering gtk_sorter_compare (GtkSorter* self /*none*/, gpointer item1 /*none*/, gpointer item2 /*none*/);
// ::GtkOrdering gtk_sorter_compare (::GtkSorter* self /*none*/, ::GObject* item1 /*none*/, ::GObject* item2 /*none*/);
Gtk::Ordering base::SorterBase::compare (GObject::Object item1, GObject::Object item2) noexcept
{
  typedef ::GtkOrdering (*call_wrap_t) (::GtkSorter* self, ::GObject* item1, ::GObject* item2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sorter_compare;
  auto item2_to_c = gi::unwrap (item2, gi::transfer_none);
  auto item1_to_c = gi::unwrap (item1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (gobj_()), (::GObject*) (item1_to_c), (::GObject*) (item2_to_c));
  return gi::wrap (_temp_ret);
}

// GtkSorterOrder gtk_sorter_get_order (GtkSorter* self /*none*/);
// ::GtkSorterOrder gtk_sorter_get_order (::GtkSorter* self /*none*/);
Gtk::SorterOrder base::SorterBase::get_order () noexcept
{
  typedef ::GtkSorterOrder (*call_wrap_t) (::GtkSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_sorter_get_order;
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (gobj_()));
  return gi::wrap (_temp_ret);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sorter_extra_def_impl.hpp>)
#include <gtk/sorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sorter_extra_impl.hpp>)
#include <gtk/sorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSorterClass *methods = (::GtkSorterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.compare) methods->compare = (decltype (methods->compare)) detail::method_wrapper<self, Gtk::Ordering (*) (GObject::Object item1, GObject::Object item2), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::compare_>;
  if (init_data.get_order) methods->get_order = (decltype (methods->get_order)) detail::method_wrapper<self, Gtk::SorterOrder (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_order_>;
}

// GtkOrdering Sorter::compare (GtkSorter* self /*none*/, gpointer item1 /*none,nullable*/, gpointer item2 /*none,nullable*/);
// ::GtkOrdering Sorter::compare (::GtkSorter* self /*none*/, ::GObject* item1 /*none,nullable*/, ::GObject* item2 /*none,nullable*/);
Gtk::Ordering SorterClass::compare_ (GObject::Object item1, GObject::Object item2) noexcept
{
  if (!get_struct_()->compare) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkOrdering (*call_wrap_t) (::GtkSorter* self, ::GObject* item1, ::GObject* item2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->compare;
  auto item2_to_c = gi::unwrap (item2, gi::transfer_none);
  auto item1_to_c = gi::unwrap (item1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (gobj_()), (::GObject*) (item1_to_c), (::GObject*) (item2_to_c));
  return gi::wrap (_temp_ret);
}

// GtkSorterOrder Sorter::get_order (GtkSorter* self /*none*/);
// ::GtkSorterOrder Sorter::get_order (::GtkSorter* self /*none*/);
Gtk::SorterOrder SorterClass::get_order_ () noexcept
{
  if (!get_struct_()->get_order) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkSorterOrder (*call_wrap_t) (::GtkSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_order;
  auto _temp_ret = call_wrap_v ((::GtkSorter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
