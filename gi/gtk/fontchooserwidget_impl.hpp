// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_FONTCHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FontChooser FontChooserWidgetBase::interface_ (gi::interface_tag<Gtk::FontChooser>)
{ return gi::wrap ((Gtk::FontChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FontChooserWidgetBase::operator Gtk::FontChooser ()
{ return interface_ (gi::interface_tag<Gtk::FontChooser>()); }

// GtkWidget* /*none*/ gtk_font_chooser_widget_new ();
// ::GtkFontChooserWidget* /*none*/ gtk_font_chooser_widget_new ();
Gtk::FontChooserWidget base::FontChooserWidgetBase::new_ () noexcept
{
  typedef ::GtkFontChooserWidget* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_widget_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra_def_impl.hpp>)
#include <gtk/fontchooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra_impl.hpp>)
#include <gtk/fontchooserwidget_extra_impl.hpp>
#endif
#endif

#endif
