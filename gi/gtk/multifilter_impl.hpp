// AUTO-GENERATED

#ifndef _GI_GTK_MULTIFILTER_IMPL_HPP_
#define _GI_GTK_MULTIFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel MultiFilterBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiFilterBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::Buildable MultiFilterBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MultiFilterBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// void gtk_multi_filter_append (GtkMultiFilter* self /*none*/, GtkFilter* filter /*full*/);
// void gtk_multi_filter_append (::GtkMultiFilter* self /*none*/, ::GtkFilter* filter /*full*/);
void base::MultiFilterBase::append (Gtk::Filter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiFilter* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_filter_append;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_full);
  call_wrap_v ((::GtkMultiFilter*) (gobj_()), (::GtkFilter*) (filter_to_c));
}

// void gtk_multi_filter_remove (GtkMultiFilter* self /*none*/, guint position);
// void gtk_multi_filter_remove (::GtkMultiFilter* self /*none*/, guint position);
void base::MultiFilterBase::remove (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkMultiFilter* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_multi_filter_remove;
  auto position_to_c = position;
  call_wrap_v ((::GtkMultiFilter*) (gobj_()), (guint) (position_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multifilter_extra_def_impl.hpp>)
#include <gtk/multifilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multifilter_extra_impl.hpp>)
#include <gtk/multifilter_extra_impl.hpp>
#endif
#endif

#endif
