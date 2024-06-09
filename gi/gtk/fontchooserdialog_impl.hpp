// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_FONTCHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FontChooser FontChooserDialogBase::interface_ (gi::interface_tag<Gtk::FontChooser>)
{ return gi::wrap ((Gtk::FontChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FontChooserDialogBase::operator Gtk::FontChooser ()
{ return interface_ (gi::interface_tag<Gtk::FontChooser>()); }

// GtkWidget* /*none*/ gtk_font_chooser_dialog_new (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/);
// ::GtkFontChooserDialog* /*none*/ gtk_font_chooser_dialog_new (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/);
Gtk::FontChooserDialog base::FontChooserDialogBase::new_ (const gi::cstring_v title, Gtk::Window parent) noexcept
{
  typedef ::GtkFontChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_dialog_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::FontChooserDialog base::FontChooserDialogBase::new_ () noexcept
{
  typedef ::GtkFontChooserDialog* (*call_wrap_t) (const char* title, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_dialog_new;
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
#if __has_include(<gtk/fontchooserdialog_extra_def_impl.hpp>)
#include <gtk/fontchooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserdialog_extra_impl.hpp>)
#include <gtk/fontchooserdialog_extra_impl.hpp>
#endif
#endif

#endif
