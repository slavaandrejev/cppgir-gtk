// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMAP_IMPL_HPP_
#define _GI_PANGO_FONTMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

Gio::ListModel FontMapBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FontMapBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// void pango_font_map_changed (PangoFontMap* fontmap /*none*/);
// void pango_font_map_changed (::PangoFontMap* fontmap /*none*/);
void base::FontMapBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_changed;
  call_wrap_v ((::PangoFontMap*) (gobj_()));
}

// PangoContext* /*full*/ pango_font_map_create_context (PangoFontMap* fontmap /*none*/);
// ::PangoContext* /*full*/ pango_font_map_create_context (::PangoFontMap* fontmap /*none*/);
Pango::Context base::FontMapBase::create_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_create_context;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontFamily* /*none*/ pango_font_map_get_family (PangoFontMap* fontmap /*none*/, const char* name /*none*/);
// ::PangoFontFamily* /*none*/ pango_font_map_get_family (::PangoFontMap* fontmap /*none*/, const char* name /*none*/);
Pango::FontFamily base::FontMapBase::get_family (const gi::cstring_v name) noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontMap* fontmap, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_get_family;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint pango_font_map_get_serial (PangoFontMap* fontmap /*none*/);
// guint pango_font_map_get_serial (::PangoFontMap* fontmap /*none*/);
guint base::FontMapBase::get_serial () noexcept
{
  typedef guint (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_get_serial;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return _temp_ret;
}

// void pango_font_map_list_families (PangoFontMap* fontmap /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void pango_font_map_list_families (::PangoFontMap* fontmap /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
void base::FontMapBase::list_families (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  families = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t>>(families_o, n_families, gi::transfer_container);
}
gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> base::FontMapBase::list_families () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> families;
  families = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t>>(families_o, n_families, gi::transfer_container);
  return families;
}

// PangoFont* /*full,nullable*/ pango_font_map_load_font (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ pango_font_map_load_font (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
Pango::Font base::FontMapBase::load_font (Pango::Context context, const Pango::FontDescription_Ref desc) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_load_font;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontset* /*full,nullable*/ pango_font_map_load_fontset (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ pango_font_map_load_fontset (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
Pango::Fontset base::FontMapBase::load_fontset (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept
{
  typedef ::PangoFontset* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_map_load_fontset;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_def_impl.hpp>)
#include <pango/fontmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_impl.hpp>)
#include <pango/fontmap_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontMapClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::PangoFontMapClass *methods = (::PangoFontMapClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.get_family) methods->get_family = (decltype (methods->get_family)) detail::method_wrapper<self, Pango::FontFamily (*) (const gi::cstring_v name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_family_>;
  if (init_data.get_serial) methods->get_serial = (decltype (methods->get_serial)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_serial_>;
  if (init_data.list_families) methods->list_families = (decltype (methods->list_families)) detail::method_wrapper<self, void (*) (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_container_t, false, void, detail::args_index<0, 1>>>, void  (::PangoFontFamily*** families, gint* n_families)>::wrapper<&self::list_families_>;
  if (init_data.load_font) methods->load_font = (decltype (methods->load_font)) detail::method_wrapper<self, Pango::Font (*) (Pango::Context context, const Pango::FontDescription_Ref desc), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::load_font_>;
  if (init_data.load_fontset) methods->load_fontset = (decltype (methods->load_fontset)) detail::method_wrapper<self, Pango::Fontset (*) (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::load_fontset_>;
}

// void FontMap::changed (PangoFontMap* fontmap /*none*/);
// void FontMap::changed (::PangoFontMap* fontmap /*none*/);
void FontMapClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::PangoFontMap*) (gobj_()));
}

// PangoFontFamily* /*none*/ FontMap::get_family (PangoFontMap* fontmap /*none*/, const char* name /*none*/);
// ::PangoFontFamily* /*none*/ FontMap::get_family (::PangoFontMap* fontmap /*none*/, const char* name /*none*/);
Pango::FontFamily FontMapClass::get_family_ (const gi::cstring_v name) noexcept
{
  if (!get_struct_()->get_family) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontMap* fontmap, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_family;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint FontMap::get_serial (PangoFontMap* fontmap /*none*/);
// guint FontMap::get_serial (::PangoFontMap* fontmap /*none*/);
guint FontMapClass::get_serial_ () noexcept
{
  if (!get_struct_()->get_serial) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_serial;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return _temp_ret;
}

// void FontMap::list_families (PangoFontMap* fontmap /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
void FontMapClass::list_families_ (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept
{
  if (!get_struct_()->list_families) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  families = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t>>(families_o, n_families, gi::transfer_container);
}

// PangoFont* /*full,nullable*/ FontMap::load_font (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ FontMap::load_font (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
Pango::Font FontMapClass::load_font_ (Pango::Context context, const Pango::FontDescription_Ref desc) noexcept
{
  if (!get_struct_()->load_font) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_font;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontset* /*full,nullable*/ FontMap::load_fontset (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ FontMap::load_fontset (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
Pango::Fontset FontMapClass::load_fontset_ (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept
{
  if (!get_struct_()->load_fontset) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontset* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_fontset;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
