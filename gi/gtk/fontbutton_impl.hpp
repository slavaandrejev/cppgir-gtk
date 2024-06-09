// AUTO-GENERATED

#ifndef _GI_GTK_FONTBUTTON_IMPL_HPP_
#define _GI_GTK_FONTBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FontChooser FontButtonBase::interface_ (gi::interface_tag<Gtk::FontChooser>)
{ return gi::wrap ((Gtk::FontChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FontButtonBase::operator Gtk::FontChooser ()
{ return interface_ (gi::interface_tag<Gtk::FontChooser>()); }

// GtkWidget* /*none*/ gtk_font_button_new ();
// ::GtkFontButton* /*none*/ gtk_font_button_new ();
Gtk::FontButton base::FontButtonBase::new_ () noexcept
{
  typedef ::GtkFontButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_font_button_new_with_font (const char* fontname /*none*/);
// ::GtkFontButton* /*none*/ gtk_font_button_new_with_font (const char* fontname /*none*/);
Gtk::FontButton base::FontButtonBase::new_with_font (const gi::cstring_v fontname) noexcept
{
  typedef ::GtkFontButton* (*call_wrap_t) (const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_new_with_font;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (fontname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_font_button_get_modal (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_modal (::GtkFontButton* font_button /*none*/);
bool base::FontButtonBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_font_button_get_title (GtkFontButton* font_button /*none*/);
// const char* /*none*/ gtk_font_button_get_title (::GtkFontButton* font_button /*none*/);
gi::cstring_v base::FontButtonBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_get_title;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_font_button_get_use_font (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_use_font (::GtkFontButton* font_button /*none*/);
bool base::FontButtonBase::get_use_font () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_get_use_font;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_font_button_get_use_size (GtkFontButton* font_button /*none*/);
// gboolean gtk_font_button_get_use_size (::GtkFontButton* font_button /*none*/);
bool base::FontButtonBase::get_use_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_get_use_size;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_font_button_set_modal (GtkFontButton* font_button /*none*/, gboolean modal);
// void gtk_font_button_set_modal (::GtkFontButton* font_button /*none*/, gboolean modal);
void base::FontButtonBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_font_button_set_title (GtkFontButton* font_button /*none*/, const char* title /*none*/);
// void gtk_font_button_set_title (::GtkFontButton* font_button /*none*/, const char* title /*none*/);
void base::FontButtonBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkFontButton*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_font_button_set_use_font (GtkFontButton* font_button /*none*/, gboolean use_font);
// void gtk_font_button_set_use_font (::GtkFontButton* font_button /*none*/, gboolean use_font);
void base::FontButtonBase::set_use_font (gboolean use_font) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean use_font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_set_use_font;
  auto use_font_to_c = use_font;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (use_font_to_c));
}

// void gtk_font_button_set_use_size (GtkFontButton* font_button /*none*/, gboolean use_size);
// void gtk_font_button_set_use_size (::GtkFontButton* font_button /*none*/, gboolean use_size);
void base::FontButtonBase::set_use_size (gboolean use_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean use_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_button_set_use_size;
  auto use_size_to_c = use_size;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (use_size_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_def_impl.hpp>)
#include <gtk/fontbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_impl.hpp>)
#include <gtk/fontbutton_extra_impl.hpp>
#endif
#endif

#endif
