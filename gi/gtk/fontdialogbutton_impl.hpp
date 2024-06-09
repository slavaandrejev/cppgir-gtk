// AUTO-GENERATED

#ifndef _GI_GTK_FONTDIALOGBUTTON_IMPL_HPP_
#define _GI_GTK_FONTDIALOGBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_font_dialog_button_new (GtkFontDialog* dialog /*full,nullable*/);
// ::GtkFontDialogButton* /*none*/ gtk_font_dialog_button_new (::GtkFontDialog* dialog /*full,nullable*/);
Gtk::FontDialogButton base::FontDialogButtonBase::new_ (Gtk::FontDialog dialog) noexcept
{
  typedef ::GtkFontDialogButton* (*call_wrap_t) (::GtkFontDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_dialog_button_new;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (dialog_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::FontDialogButton base::FontDialogButtonBase::new_ () noexcept
{
  typedef ::GtkFontDialogButton* (*call_wrap_t) (::GtkFontDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_dialog_button_new;
  auto dialog_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (dialog_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkFontDialog* /*none,nullable*/ gtk_font_dialog_button_get_dialog (GtkFontDialogButton* self /*none*/);
// ::GtkFontDialog* /*none,nullable*/ gtk_font_dialog_button_get_dialog (::GtkFontDialogButton* self /*none*/);
Gtk::FontDialog base::FontDialogButtonBase::get_dialog () noexcept
{
  typedef ::GtkFontDialog* (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_dialog;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontDescription* /*none,nullable*/ gtk_font_dialog_button_get_font_desc (GtkFontDialogButton* self /*none*/);
// ::PangoFontDescription* /*none,nullable*/ gtk_font_dialog_button_get_font_desc (::GtkFontDialogButton* self /*none*/);
Pango::FontDescription_Ref base::FontDialogButtonBase::get_font_desc () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_font_desc;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_font_dialog_button_get_font_features (GtkFontDialogButton* self /*none*/);
// const char* /*none,nullable*/ gtk_font_dialog_button_get_font_features (::GtkFontDialogButton* self /*none*/);
gi::cstring_v base::FontDialogButtonBase::get_font_features () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_font_features;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLanguage* /*full,nullable*/ gtk_font_dialog_button_get_language (GtkFontDialogButton* self /*none*/);
// ::PangoLanguage* /*full,nullable*/ gtk_font_dialog_button_get_language (::GtkFontDialogButton* self /*none*/);
Pango::Language base::FontDialogButtonBase::get_language () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_language;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFontLevel gtk_font_dialog_button_get_level (GtkFontDialogButton* self /*none*/);
// ::GtkFontLevel gtk_font_dialog_button_get_level (::GtkFontDialogButton* self /*none*/);
Gtk::FontLevel base::FontDialogButtonBase::get_level () noexcept
{
  typedef ::GtkFontLevel (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_level;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_font_dialog_button_get_use_font (GtkFontDialogButton* self /*none*/);
// gboolean gtk_font_dialog_button_get_use_font (::GtkFontDialogButton* self /*none*/);
bool base::FontDialogButtonBase::get_use_font () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_use_font;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_font_dialog_button_get_use_size (GtkFontDialogButton* self /*none*/);
// gboolean gtk_font_dialog_button_get_use_size (::GtkFontDialogButton* self /*none*/);
bool base::FontDialogButtonBase::get_use_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_get_use_size;
  auto _temp_ret = call_wrap_v ((::GtkFontDialogButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_font_dialog_button_set_dialog (GtkFontDialogButton* self /*none*/, GtkFontDialog* dialog /*none*/);
// void gtk_font_dialog_button_set_dialog (::GtkFontDialogButton* self /*none*/, ::GtkFontDialog* dialog /*none*/);
void base::FontDialogButtonBase::set_dialog (Gtk::FontDialog dialog) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, ::GtkFontDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_dialog;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_none);
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (::GtkFontDialog*) (dialog_to_c));
}

// void gtk_font_dialog_button_set_font_desc (GtkFontDialogButton* self /*none*/, const PangoFontDescription* font_desc /*none*/);
// void gtk_font_dialog_button_set_font_desc (::GtkFontDialogButton* self /*none*/, const ::PangoFontDescription* font_desc /*none*/);
void base::FontDialogButtonBase::set_font_desc (const Pango::FontDescription_Ref font_desc) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, const ::PangoFontDescription* font_desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_font_desc;
  auto font_desc_to_c = gi::unwrap (font_desc, gi::transfer_none);
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (const ::PangoFontDescription*) (font_desc_to_c));
}

// void gtk_font_dialog_button_set_font_features (GtkFontDialogButton* self /*none*/, const char* font_features /*none,nullable*/);
// void gtk_font_dialog_button_set_font_features (::GtkFontDialogButton* self /*none*/, const char* font_features /*none,nullable*/);
void base::FontDialogButtonBase::set_font_features (const gi::cstring_v font_features) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, const char* font_features);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_font_features;
  auto font_features_to_c = gi::unwrap (font_features, gi::transfer_none);
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (const char*) (font_features_to_c));
}
void base::FontDialogButtonBase::set_font_features () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, const char* font_features);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_font_features;
  auto font_features_to_c = nullptr;
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (const char*) (font_features_to_c));
}

// void gtk_font_dialog_button_set_language (GtkFontDialogButton* self /*none*/, PangoLanguage* language /*none,nullable*/);
// void gtk_font_dialog_button_set_language (::GtkFontDialogButton* self /*none*/, ::PangoLanguage* language /*none,nullable*/);
void base::FontDialogButtonBase::set_language (Pango::Language_Ref language) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_language;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (::PangoLanguage*) (language_to_c));
}
void base::FontDialogButtonBase::set_language () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_language;
  auto language_to_c = nullptr;
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (::PangoLanguage*) (language_to_c));
}

// void gtk_font_dialog_button_set_level (GtkFontDialogButton* self /*none*/, GtkFontLevel level);
// void gtk_font_dialog_button_set_level (::GtkFontDialogButton* self /*none*/, ::GtkFontLevel level);
void base::FontDialogButtonBase::set_level (Gtk::FontLevel level) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, ::GtkFontLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_level;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (::GtkFontLevel) (level_to_c));
}

// void gtk_font_dialog_button_set_use_font (GtkFontDialogButton* self /*none*/, gboolean use_font);
// void gtk_font_dialog_button_set_use_font (::GtkFontDialogButton* self /*none*/, gboolean use_font);
void base::FontDialogButtonBase::set_use_font (gboolean use_font) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, gboolean use_font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_use_font;
  auto use_font_to_c = use_font;
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (gboolean) (use_font_to_c));
}

// void gtk_font_dialog_button_set_use_size (GtkFontDialogButton* self /*none*/, gboolean use_size);
// void gtk_font_dialog_button_set_use_size (::GtkFontDialogButton* self /*none*/, gboolean use_size);
void base::FontDialogButtonBase::set_use_size (gboolean use_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialogButton* self, gboolean use_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_button_set_use_size;
  auto use_size_to_c = use_size;
  call_wrap_v ((::GtkFontDialogButton*) (gobj_()), (gboolean) (use_size_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontdialogbutton_extra_def_impl.hpp>)
#include <gtk/fontdialogbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontdialogbutton_extra_impl.hpp>)
#include <gtk/fontdialogbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontDialogButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFontDialogButtonClass *methods = (::GtkFontDialogButtonClass *) class_struct;
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
