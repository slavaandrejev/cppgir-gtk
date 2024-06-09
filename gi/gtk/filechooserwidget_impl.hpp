// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_FILECHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserWidgetBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileChooserWidgetBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkWidget* /*none*/ gtk_file_chooser_widget_new (GtkFileChooserAction action);
// ::GtkFileChooserWidget* /*none*/ gtk_file_chooser_widget_new (::GtkFileChooserAction action);
Gtk::FileChooserWidget base::FileChooserWidgetBase::new_ (Gtk::FileChooserAction action) noexcept
{
  typedef ::GtkFileChooserWidget* (*call_wrap_t) (::GtkFileChooserAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_widget_new;
  auto action_to_c = gi::unwrap (action);
  auto _temp_ret = call_wrap_v ((::GtkFileChooserAction) (action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}














} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidget_extra_def_impl.hpp>)
#include <gtk/filechooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidget_extra_impl.hpp>)
#include <gtk/filechooserwidget_extra_impl.hpp>
#endif
#endif

#endif
