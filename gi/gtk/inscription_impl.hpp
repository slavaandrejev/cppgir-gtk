// AUTO-GENERATED

#ifndef _GI_GTK_INSCRIPTION_IMPL_HPP_
#define _GI_GTK_INSCRIPTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_inscription_new (const char* text /*none,nullable*/);
// ::GtkInscription* /*none*/ gtk_inscription_new (const char* text /*none,nullable*/);
Gtk::Inscription base::InscriptionBase::new_ (const gi::cstring_v text) noexcept
{
  typedef ::GtkInscription* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_inscription_new;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Inscription base::InscriptionBase::new_ () noexcept
{
  typedef ::GtkInscription* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_inscription_new;
  auto text_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrList* /*none,nullable*/ gtk_inscription_get_attributes (GtkInscription* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_inscription_get_attributes (::GtkInscription* self /*none*/);
Pango::AttrList_Ref base::InscriptionBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_inscription_get_min_chars (GtkInscription* self /*none*/);
// guint gtk_inscription_get_min_chars (::GtkInscription* self /*none*/);
guint base::InscriptionBase::get_min_chars () noexcept
{
  typedef guint (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_min_chars;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// guint gtk_inscription_get_min_lines (GtkInscription* self /*none*/);
// guint gtk_inscription_get_min_lines (::GtkInscription* self /*none*/);
guint base::InscriptionBase::get_min_lines () noexcept
{
  typedef guint (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_min_lines;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// guint gtk_inscription_get_nat_chars (GtkInscription* self /*none*/);
// guint gtk_inscription_get_nat_chars (::GtkInscription* self /*none*/);
guint base::InscriptionBase::get_nat_chars () noexcept
{
  typedef guint (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_nat_chars;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// guint gtk_inscription_get_nat_lines (GtkInscription* self /*none*/);
// guint gtk_inscription_get_nat_lines (::GtkInscription* self /*none*/);
guint base::InscriptionBase::get_nat_lines () noexcept
{
  typedef guint (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_nat_lines;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_inscription_get_text (GtkInscription* self /*none*/);
// const char* /*none,nullable*/ gtk_inscription_get_text (::GtkInscription* self /*none*/);
gi::cstring_v base::InscriptionBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_text;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkInscriptionOverflow gtk_inscription_get_text_overflow (GtkInscription* self /*none*/);
// ::GtkInscriptionOverflow gtk_inscription_get_text_overflow (::GtkInscription* self /*none*/);
Gtk::InscriptionOverflow base::InscriptionBase::get_text_overflow () noexcept
{
  typedef ::GtkInscriptionOverflow (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_text_overflow;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoWrapMode gtk_inscription_get_wrap_mode (GtkInscription* self /*none*/);
// ::PangoWrapMode gtk_inscription_get_wrap_mode (::GtkInscription* self /*none*/);
Pango::WrapMode base::InscriptionBase::get_wrap_mode () noexcept
{
  typedef ::PangoWrapMode (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_wrap_mode;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// float gtk_inscription_get_xalign (GtkInscription* self /*none*/);
// gfloat gtk_inscription_get_xalign (::GtkInscription* self /*none*/);
gfloat base::InscriptionBase::get_xalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_xalign;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// float gtk_inscription_get_yalign (GtkInscription* self /*none*/);
// gfloat gtk_inscription_get_yalign (::GtkInscription* self /*none*/);
gfloat base::InscriptionBase::get_yalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkInscription* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_get_yalign;
  auto _temp_ret = call_wrap_v ((::GtkInscription*) (gobj_()));
  return _temp_ret;
}

// void gtk_inscription_set_attributes (GtkInscription* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_inscription_set_attributes (::GtkInscription* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
void base::InscriptionBase::set_attributes (Pango::AttrList_Ref attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  call_wrap_v ((::GtkInscription*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}
void base::InscriptionBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_attributes;
  auto attrs_to_c = nullptr;
  call_wrap_v ((::GtkInscription*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_inscription_set_markup (GtkInscription* self /*none*/, const char* markup /*none,nullable*/);
// void gtk_inscription_set_markup (::GtkInscription* self /*none*/, const char* markup /*none,nullable*/);
void base::InscriptionBase::set_markup (const gi::cstring_v markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::GtkInscription*) (gobj_()), (const char*) (markup_to_c));
}
void base::InscriptionBase::set_markup () noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_markup;
  auto markup_to_c = nullptr;
  call_wrap_v ((::GtkInscription*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_inscription_set_min_chars (GtkInscription* self /*none*/, guint min_chars);
// void gtk_inscription_set_min_chars (::GtkInscription* self /*none*/, guint min_chars);
void base::InscriptionBase::set_min_chars (guint min_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, guint min_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_min_chars;
  auto min_chars_to_c = min_chars;
  call_wrap_v ((::GtkInscription*) (gobj_()), (guint) (min_chars_to_c));
}

// void gtk_inscription_set_min_lines (GtkInscription* self /*none*/, guint min_lines);
// void gtk_inscription_set_min_lines (::GtkInscription* self /*none*/, guint min_lines);
void base::InscriptionBase::set_min_lines (guint min_lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, guint min_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_min_lines;
  auto min_lines_to_c = min_lines;
  call_wrap_v ((::GtkInscription*) (gobj_()), (guint) (min_lines_to_c));
}

// void gtk_inscription_set_nat_chars (GtkInscription* self /*none*/, guint nat_chars);
// void gtk_inscription_set_nat_chars (::GtkInscription* self /*none*/, guint nat_chars);
void base::InscriptionBase::set_nat_chars (guint nat_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, guint nat_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_nat_chars;
  auto nat_chars_to_c = nat_chars;
  call_wrap_v ((::GtkInscription*) (gobj_()), (guint) (nat_chars_to_c));
}

// void gtk_inscription_set_nat_lines (GtkInscription* self /*none*/, guint nat_lines);
// void gtk_inscription_set_nat_lines (::GtkInscription* self /*none*/, guint nat_lines);
void base::InscriptionBase::set_nat_lines (guint nat_lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, guint nat_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_nat_lines;
  auto nat_lines_to_c = nat_lines;
  call_wrap_v ((::GtkInscription*) (gobj_()), (guint) (nat_lines_to_c));
}

// void gtk_inscription_set_text (GtkInscription* self /*none*/, const char* text /*none,nullable*/);
// void gtk_inscription_set_text (::GtkInscription* self /*none*/, const char* text /*none,nullable*/);
void base::InscriptionBase::set_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkInscription*) (gobj_()), (const char*) (text_to_c));
}
void base::InscriptionBase::set_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkInscription*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_inscription_set_text_overflow (GtkInscription* self /*none*/, GtkInscriptionOverflow overflow);
// void gtk_inscription_set_text_overflow (::GtkInscription* self /*none*/, ::GtkInscriptionOverflow overflow);
void base::InscriptionBase::set_text_overflow (Gtk::InscriptionOverflow overflow) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, ::GtkInscriptionOverflow overflow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_text_overflow;
  auto overflow_to_c = gi::unwrap (overflow);
  call_wrap_v ((::GtkInscription*) (gobj_()), (::GtkInscriptionOverflow) (overflow_to_c));
}

// void gtk_inscription_set_wrap_mode (GtkInscription* self /*none*/, PangoWrapMode wrap_mode);
// void gtk_inscription_set_wrap_mode (::GtkInscription* self /*none*/, ::PangoWrapMode wrap_mode);
void base::InscriptionBase::set_wrap_mode (Pango::WrapMode wrap_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, ::PangoWrapMode wrap_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_wrap_mode;
  auto wrap_mode_to_c = gi::unwrap (wrap_mode);
  call_wrap_v ((::GtkInscription*) (gobj_()), (::PangoWrapMode) (wrap_mode_to_c));
}

// void gtk_inscription_set_xalign (GtkInscription* self /*none*/, float xalign);
// void gtk_inscription_set_xalign (::GtkInscription* self /*none*/, gfloat xalign);
void base::InscriptionBase::set_xalign (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_xalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkInscription*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_inscription_set_yalign (GtkInscription* self /*none*/, float yalign);
// void gtk_inscription_set_yalign (::GtkInscription* self /*none*/, gfloat yalign);
void base::InscriptionBase::set_yalign (gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkInscription* self, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_inscription_set_yalign;
  auto yalign_to_c = yalign;
  call_wrap_v ((::GtkInscription*) (gobj_()), (gfloat) (yalign_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/inscription_extra_def_impl.hpp>)
#include <gtk/inscription_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/inscription_extra_impl.hpp>)
#include <gtk/inscription_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void InscriptionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkInscriptionClass *methods = (::GtkInscriptionClass *) class_struct;
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
