// AUTO-GENERATED

#ifndef _GI_GTK_COLORBUTTON_IMPL_HPP_
#define _GI_GTK_COLORBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ColorChooser ColorButtonBase::interface_ (gi::interface_tag<Gtk::ColorChooser>)
{ return gi::wrap ((Gtk::ColorChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ColorButtonBase::operator Gtk::ColorChooser ()
{ return interface_ (gi::interface_tag<Gtk::ColorChooser>()); }

// GtkWidget* /*none*/ gtk_color_button_new ();
// ::GtkColorButton* /*none*/ gtk_color_button_new ();
Gtk::ColorButton base::ColorButtonBase::new_ () noexcept
{
  typedef ::GtkColorButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_color_button_new_with_rgba (const GdkRGBA* rgba /*none*/);
// ::GtkColorButton* /*none*/ gtk_color_button_new_with_rgba (const ::GdkRGBA* rgba /*none*/);
Gtk::ColorButton base::ColorButtonBase::new_with_rgba (const Gdk::RGBA_Ref rgba) noexcept
{
  typedef ::GtkColorButton* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_new_with_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (rgba_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_color_button_get_modal (GtkColorButton* button /*none*/);
// gboolean gtk_color_button_get_modal (::GtkColorButton* button /*none*/);
bool base::ColorButtonBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_button_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkColorButton*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_color_button_get_title (GtkColorButton* button /*none*/);
// const char* /*none*/ gtk_color_button_get_title (::GtkColorButton* button /*none*/);
gi::cstring_v base::ColorButtonBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColorButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_button_get_title;
  auto _temp_ret = call_wrap_v ((::GtkColorButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_color_button_set_modal (GtkColorButton* button /*none*/, gboolean modal);
// void gtk_color_button_set_modal (::GtkColorButton* button /*none*/, gboolean modal);
void base::ColorButtonBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorButton* button, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_button_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkColorButton*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_color_button_set_title (GtkColorButton* button /*none*/, const char* title /*none*/);
// void gtk_color_button_set_title (::GtkColorButton* button /*none*/, const char* title /*none*/);
void base::ColorButtonBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorButton* button, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_button_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkColorButton*) (gobj_()), (const char*) (title_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_def_impl.hpp>)
#include <gtk/colorbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_impl.hpp>)
#include <gtk/colorbutton_extra_impl.hpp>
#endif
#endif

#endif
