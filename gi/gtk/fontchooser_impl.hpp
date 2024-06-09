// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSER_IMPL_HPP_
#define _GI_GTK_FONTCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// char* /*full,nullable*/ gtk_font_chooser_get_font (GtkFontChooser* fontchooser /*none*/);
// char* /*full,nullable*/ gtk_font_chooser_get_font (::GtkFontChooser* fontchooser /*none*/);
gi::cstring base::FontChooserBase::get_font () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontDescription* /*full,nullable*/ gtk_font_chooser_get_font_desc (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontDescription* /*full,nullable*/ gtk_font_chooser_get_font_desc (::GtkFontChooser* fontchooser /*none*/);
Pango::FontDescription base::FontChooserBase::get_font_desc () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_desc;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontFace* /*none,nullable*/ gtk_font_chooser_get_font_face (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFace* /*none,nullable*/ gtk_font_chooser_get_font_face (::GtkFontChooser* fontchooser /*none*/);
Pango::FontFace base::FontChooserBase::get_font_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_face;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontFamily* /*none,nullable*/ gtk_font_chooser_get_font_family (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFamily* /*none,nullable*/ gtk_font_chooser_get_font_family (::GtkFontChooser* fontchooser /*none*/);
Pango::FontFamily base::FontChooserBase::get_font_family () noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_family;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char* /*full*/ gtk_font_chooser_get_font_features (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_font_features (::GtkFontChooser* fontchooser /*none*/);
gi::cstring base::FontChooserBase::get_font_features () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_features;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontMap* /*full,nullable*/ gtk_font_chooser_get_font_map (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontMap* /*full,nullable*/ gtk_font_chooser_get_font_map (::GtkFontChooser* fontchooser /*none*/);
Pango::FontMap base::FontChooserBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_font_chooser_get_font_size (GtkFontChooser* fontchooser /*none*/);
// gint gtk_font_chooser_get_font_size (::GtkFontChooser* fontchooser /*none*/);
gint base::FontChooserBase::get_font_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_font_size;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// char* /*full*/ gtk_font_chooser_get_language (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_language (::GtkFontChooser* fontchooser /*none*/);
gi::cstring base::FontChooserBase::get_language () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_language;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFontChooserLevel gtk_font_chooser_get_level (GtkFontChooser* fontchooser /*none*/);
// ::GtkFontChooserLevel gtk_font_chooser_get_level (::GtkFontChooser* fontchooser /*none*/);
Gtk::FontChooserLevel base::FontChooserBase::get_level () noexcept
{
  typedef ::GtkFontChooserLevel (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_level;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// char* /*full*/ gtk_font_chooser_get_preview_text (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_preview_text (::GtkFontChooser* fontchooser /*none*/);
gi::cstring base::FontChooserBase::get_preview_text () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_preview_text;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_font_chooser_get_show_preview_entry (GtkFontChooser* fontchooser /*none*/);
// gboolean gtk_font_chooser_get_show_preview_entry (::GtkFontChooser* fontchooser /*none*/);
bool base::FontChooserBase::get_show_preview_entry () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_get_show_preview_entry;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// void gtk_font_chooser_set_filter_func (GtkFontChooser* fontchooser /*none*/, GtkFontFilterFunc filter /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_font_chooser_set_filter_func (::GtkFontChooser* fontchooser /*none*/, Gtk::FontFilterFunc::cfunction_type filter /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::FontChooserBase::set_filter_func (Gtk::FontFilterFunc filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_filter_func;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (Gtk::FontFilterFunc::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (void*) (filter_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_wrap_ ? &filter_wrap_->destroy : nullptr));
}

// void gtk_font_chooser_set_font (GtkFontChooser* fontchooser /*none*/, const char* fontname /*none*/);
// void gtk_font_chooser_set_font (::GtkFontChooser* fontchooser /*none*/, const char* fontname /*none*/);
void base::FontChooserBase::set_font (const gi::cstring_v fontname) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_font;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (fontname_to_c));
}

// void gtk_font_chooser_set_font_desc (GtkFontChooser* fontchooser /*none*/, const PangoFontDescription* font_desc /*none*/);
// void gtk_font_chooser_set_font_desc (::GtkFontChooser* fontchooser /*none*/, const ::PangoFontDescription* font_desc /*none*/);
void base::FontChooserBase::set_font_desc (const Pango::FontDescription_Ref font_desc) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const ::PangoFontDescription* font_desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_font_desc;
  auto font_desc_to_c = gi::unwrap (font_desc, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const ::PangoFontDescription*) (font_desc_to_c));
}

// void gtk_font_chooser_set_font_map (GtkFontChooser* fontchooser /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void gtk_font_chooser_set_font_map (::GtkFontChooser* fontchooser /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
void base::FontChooserBase::set_font_map (Pango::FontMap fontmap) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_font_map;
  auto fontmap_to_c = gi::unwrap (fontmap, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}
void base::FontChooserBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_font_map;
  auto fontmap_to_c = nullptr;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}

// void gtk_font_chooser_set_language (GtkFontChooser* fontchooser /*none*/, const char* language /*none*/);
// void gtk_font_chooser_set_language (::GtkFontChooser* fontchooser /*none*/, const char* language /*none*/);
void base::FontChooserBase::set_language (const gi::cstring_v language) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_language;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (language_to_c));
}

// void gtk_font_chooser_set_level (GtkFontChooser* fontchooser /*none*/, GtkFontChooserLevel level);
// void gtk_font_chooser_set_level (::GtkFontChooser* fontchooser /*none*/, ::GtkFontChooserLevel level);
void base::FontChooserBase::set_level (Gtk::FontChooserLevel level) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::GtkFontChooserLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_level;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::GtkFontChooserLevel) (level_to_c));
}

// void gtk_font_chooser_set_preview_text (GtkFontChooser* fontchooser /*none*/, const char* text /*none*/);
// void gtk_font_chooser_set_preview_text (::GtkFontChooser* fontchooser /*none*/, const char* text /*none*/);
void base::FontChooserBase::set_preview_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_preview_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_font_chooser_set_show_preview_entry (GtkFontChooser* fontchooser /*none*/, gboolean show_preview_entry);
// void gtk_font_chooser_set_show_preview_entry (::GtkFontChooser* fontchooser /*none*/, gboolean show_preview_entry);
void base::FontChooserBase::set_show_preview_entry (gboolean show_preview_entry) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, gboolean show_preview_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_chooser_set_show_preview_entry;
  auto show_preview_entry_to_c = show_preview_entry;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (gboolean) (show_preview_entry_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_def_impl.hpp>)
#include <gtk/fontchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_impl.hpp>)
#include <gtk/fontchooser_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontChooserIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkFontChooserIface *methods = (::GtkFontChooserIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.font_activated) methods->font_activated = (decltype (methods->font_activated)) detail::method_wrapper<self, void (*) (const gi::cstring_v fontname), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::font_activated_>;
  if (init_data.get_font_face) methods->get_font_face = (decltype (methods->get_font_face)) detail::method_wrapper<self, Pango::FontFace (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_font_face_>;
  if (init_data.get_font_family) methods->get_font_family = (decltype (methods->get_font_family)) detail::method_wrapper<self, Pango::FontFamily (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_font_family_>;
  if (init_data.get_font_map) methods->get_font_map = (decltype (methods->get_font_map)) detail::method_wrapper<self, Pango::FontMap (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_font_map_>;
  if (init_data.get_font_size) methods->get_font_size = (decltype (methods->get_font_size)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_font_size_>;
  if (init_data.set_filter_func) methods->set_filter_func = (decltype (methods->set_filter_func)) detail::method_wrapper<self, void (*) (Gtk::FontFilterFunc filter), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, Gtk::internal::FontFilterFunc_CB_Trait, detail::args_index<0, 1, 2>>>, void  (Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy)>::wrapper<&self::set_filter_func_>;
  if (init_data.set_font_map) methods->set_font_map = (decltype (methods->set_font_map)) detail::method_wrapper<self, void (*) (Pango::FontMap fontmap), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_font_map_>;
}

// void FontChooser::font_activated (GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
// void FontChooser::font_activated (::GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
void FontChooserIfaceClassImpl::font_activated_ (const gi::cstring_v fontname) noexcept
{
  if (!get_struct_()->font_activated) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkFontChooser* chooser, const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->font_activated;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (fontname_to_c));
}

// PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (::GtkFontChooser* fontchooser /*none*/);
Pango::FontFace FontChooserIfaceClassImpl::get_font_face_ () noexcept
{
  if (!get_struct_()->get_font_face) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_face;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (::GtkFontChooser* fontchooser /*none*/);
Pango::FontFamily FontChooserIfaceClassImpl::get_font_family_ () noexcept
{
  if (!get_struct_()->get_font_family) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_family;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (::GtkFontChooser* fontchooser /*none*/);
Pango::FontMap FontChooserIfaceClassImpl::get_font_map_ () noexcept
{
  if (!get_struct_()->get_font_map) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int FontChooser::get_font_size (GtkFontChooser* fontchooser /*none*/);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser /*none*/);
gint FontChooserIfaceClassImpl::get_font_size_ () noexcept
{
  if (!get_struct_()->get_font_size) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_size;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser /*none*/, GtkFontFilterFunc filter /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser /*none*/, Gtk::FontFilterFunc::cfunction_type filter /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void FontChooserIfaceClassImpl::set_filter_func_ (Gtk::FontFilterFunc filter) noexcept
{
  if (!get_struct_()->set_filter_func) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_filter_func;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (Gtk::FontFilterFunc::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (void*) (filter_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_wrap_ ? &filter_wrap_->destroy : nullptr));
}

// void FontChooser::set_font_map (GtkFontChooser* fontchooser /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
void FontChooserIfaceClassImpl::set_font_map_ (Pango::FontMap fontmap) noexcept
{
  if (!get_struct_()->set_font_map) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_font_map;
  auto fontmap_to_c = gi::unwrap (fontmap, gi::transfer_none);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
