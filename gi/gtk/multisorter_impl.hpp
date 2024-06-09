// AUTO-GENERATED

#ifndef _GI_GTK_MULTISORTER_IMPL_HPP_
#define _GI_GTK_MULTISORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel MultiSorterBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiSorterBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::Buildable MultiSorterBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiSorterBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkMultiSorter* /*full*/ gtk_multi_sorter_new ();
// ::GtkMultiSorter* /*full*/ gtk_multi_sorter_new ();
Gtk::MultiSorter base::MultiSorterBase::new_ () noexcept
{
  typedef ::GtkMultiSorter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_multi_sorter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_multi_sorter_append (GtkMultiSorter* self /*none*/, GtkSorter* sorter /*full*/);
// void gtk_multi_sorter_append (::GtkMultiSorter* self /*none*/, ::GtkSorter* sorter /*full*/);
void base::MultiSorterBase::append (Gtk::Sorter sorter) noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiSorter* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_sorter_append;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_full);
  call_wrap_v ((::GtkMultiSorter*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}

// void gtk_multi_sorter_remove (GtkMultiSorter* self /*none*/, guint position);
// void gtk_multi_sorter_remove (::GtkMultiSorter* self /*none*/, guint position);
void base::MultiSorterBase::remove (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiSorter* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_sorter_remove;
  auto position_to_c = position;
  call_wrap_v ((::GtkMultiSorter*) (gobj_()), (guint) (position_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multisorter_extra_def_impl.hpp>)
#include <gtk/multisorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multisorter_extra_impl.hpp>)
#include <gtk/multisorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MultiSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMultiSorterClass *methods = (::GtkMultiSorterClass *) class_struct;
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
