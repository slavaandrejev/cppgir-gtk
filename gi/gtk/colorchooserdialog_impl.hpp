// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_COLORCHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ColorChooser ColorChooserDialogBase::interface_ (gi::interface_tag<Gtk::ColorChooser>)
{ return gi::wrap ((Gtk::ColorChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ColorChooserDialogBase::operator Gtk::ColorChooser ()
{ return interface_ (gi::interface_tag<Gtk::ColorChooser>()); }

// GtkWidget* /*none*/ gtk_color_chooser_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkColorChooserDialog* /*none*/ gtk_color_chooser_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
Gtk::ColorChooserDialog base::ColorChooserDialogBase::new_ (const gi::cstring_v title, Gtk::Window parent) noexcept
{
  typedef ::GtkColorChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_dialog_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::ColorChooserDialog base::ColorChooserDialogBase::new_ () noexcept
{
  typedef ::GtkColorChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_dialog_new;
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra_def_impl.hpp>)
#include <gtk/colorchooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra_impl.hpp>)
#include <gtk/colorchooserdialog_extra_impl.hpp>
#endif
#endif

#endif
