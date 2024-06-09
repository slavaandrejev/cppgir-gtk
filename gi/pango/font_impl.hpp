// AUTO-GENERATED

#ifndef _GI_PANGO_FONT_IMPL_HPP_
#define _GI_PANGO_FONT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_font_descriptions_free (PangoFontDescription** descs /*full,nullable*/, int n_descs);
// void pango_font_descriptions_free (::PangoFontDescription** descs /*full,nullable*/, gint n_descs);
// IGNORE; marked ignore

// PangoFont* /*full,nullable*/ pango_font_deserialize (PangoContext* context /*none*/, GBytes* bytes /*none*/, GError ** error);
// ::PangoFont* /*full,nullable*/ pango_font_deserialize (::PangoContext* context /*none*/, ::GBytes* bytes /*none*/, GError ** error);
Pango::Font base::FontBase::deserialize (Pango::Context context, GLib::Bytes_Ref bytes)
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_deserialize;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::Font base::FontBase::deserialize (Pango::Context context, GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_deserialize;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontDescription* /*full*/ pango_font_describe (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_describe (::PangoFont* font /*none*/);
Pango::FontDescription base::FontBase::describe () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_describe;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontDescription* /*full*/ pango_font_describe_with_absolute_size (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_describe_with_absolute_size (::PangoFont* font /*none*/);
Pango::FontDescription base::FontBase::describe_with_absolute_size () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_describe_with_absolute_size;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoCoverage* /*full*/ pango_font_get_coverage (PangoFont* font /*none*/, PangoLanguage* language /*none*/);
// ::PangoCoverage* /*full*/ pango_font_get_coverage (::PangoFont* font /*none*/, ::PangoLanguage* language /*none*/);
Pango::Coverage base::FontBase::get_coverage (Pango::Language_Ref language) noexcept
{
  typedef ::PangoCoverage* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_coverage;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontFace* /*none*/ pango_font_get_face (PangoFont* font /*none*/);
// ::PangoFontFace* /*none*/ pango_font_get_face (::PangoFont* font /*none*/);
Pango::FontFace base::FontBase::get_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_face;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_font_get_features (PangoFont* font /*none*/, hb_feature_t* features /*none,out,ca*/, guint len, guint* num_features);
// void pango_font_get_features (::PangoFont* font /*none*/, * features /*none,out,ca*/, guint len, guint* num_features);
// SKIP; container element not supported

// PangoFontMap* /*none,nullable*/ pango_font_get_font_map (PangoFont* font /*none,nullable*/);
// ::PangoFontMap* /*none,nullable*/ pango_font_get_font_map (::PangoFont* font /*none,nullable*/);
Pango::FontMap base::FontBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_font_map;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_font_get_glyph_extents (PangoFont* font /*none,nullable*/, PangoGlyph glyph, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_font_get_glyph_extents (::PangoFont* font /*none,nullable*/, ::PangoGlyph glyph, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::FontBase::get_glyph_extents (::PangoGlyph glyph, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_glyph_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto glyph_to_c = glyph;
  call_wrap_v ((::PangoFont*) (gobj_()), (::PangoGlyph) (glyph_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::FontBase::get_glyph_extents (::PangoGlyph glyph) noexcept
{
  typedef void (*call_wrap_t) (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_glyph_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto glyph_to_c = glyph;
  call_wrap_v ((::PangoFont*) (gobj_()), (::PangoGlyph) (glyph_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// hb_font_t* /*none,nullable*/ pango_font_get_hb_font (PangoFont* font /*none*/);
//  /*none,nullable*/ pango_font_get_hb_font (::PangoFont* font /*none*/);
// IGNORE; not introspectable,  type  not supported

// PangoLanguage** /*none,nullable*/ pango_font_get_languages (PangoFont* font /*none*/);
// ::PangoLanguage** /*none,nullable*/ pango_font_get_languages (::PangoFont* font /*none*/);
gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t> base::FontBase::get_languages () noexcept
{
  typedef ::PangoLanguage** (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_languages;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// PangoFontMetrics* /*full*/ pango_font_get_metrics (PangoFont* font /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ pango_font_get_metrics (::PangoFont* font /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
Pango::FontMetrics base::FontBase::get_metrics (Pango::Language_Ref language) noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_metrics;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::FontMetrics base::FontBase::get_metrics () noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_get_metrics;
  auto language_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_font_has_char (PangoFont* font /*none*/, gunichar wc);
// gboolean pango_font_has_char (::PangoFont* font /*none*/, gunichar wc);
bool base::FontBase::has_char (gunichar wc) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFont* font, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_has_char;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (gunichar) (wc_to_c));
  return _temp_ret;
}

// GBytes* /*full*/ pango_font_serialize (PangoFont* font /*none*/);
// ::GBytes* /*full*/ pango_font_serialize (::PangoFont* font /*none*/);
GLib::Bytes base::FontBase::serialize () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_serialize;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/font_extra_def_impl.hpp>)
#include <pango/font_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/font_extra_impl.hpp>)
#include <pango/font_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::PangoFontClass *methods = (::PangoFontClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.describe) methods->describe = (decltype (methods->describe)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::describe_>;
  if (init_data.describe_absolute) methods->describe_absolute = (decltype (methods->describe_absolute)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::describe_absolute_>;
  if (init_data.get_coverage) methods->get_coverage = (decltype (methods->get_coverage)) detail::method_wrapper<self, Pango::Coverage (*) (Pango::Language_Ref language), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_coverage_>;
  if (init_data.get_font_map) methods->get_font_map = (decltype (methods->get_font_map)) detail::method_wrapper<self, Pango::FontMap (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_font_map_>;
  if (init_data.get_glyph_extents) methods->get_glyph_extents = (decltype (methods->get_glyph_extents)) detail::method_wrapper<self, void (*) (::PangoGlyph glyph, Pango::Rectangle_Ref ink_rect, Pango::Rectangle_Ref logical_rect), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_glyph_extents_>;
  if (init_data.get_metrics) methods->get_metrics = (decltype (methods->get_metrics)) detail::method_wrapper<self, Pango::FontMetrics (*) (Pango::Language_Ref language), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_metrics_>;
}

// hb_font_t* /*full*/ Font::create_hb_font (PangoFont* font /*none*/);
//  /*full*/ Font::create_hb_font (::PangoFont* font /*none*/);
// SKIP;  type  not supported

// PangoFontDescription* /*full*/ Font::describe (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe (::PangoFont* font /*none*/);
Pango::FontDescription FontClass::describe_ () noexcept
{
  if (!get_struct_()->describe) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontDescription* /*full*/ Font::describe_absolute (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe_absolute (::PangoFont* font /*none*/);
Pango::FontDescription FontClass::describe_absolute_ () noexcept
{
  if (!get_struct_()->describe_absolute) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe_absolute;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoCoverage* /*full*/ Font::get_coverage (PangoFont* font /*none*/, PangoLanguage* language /*none*/);
// ::PangoCoverage* /*full*/ Font::get_coverage (::PangoFont* font /*none*/, ::PangoLanguage* language /*none*/);
Pango::Coverage FontClass::get_coverage_ (Pango::Language_Ref language) noexcept
{
  if (!get_struct_()->get_coverage) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoCoverage* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_coverage;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void Font::get_features (PangoFont* font /*none*/, hb_feature_t* features /*none,out,ca*/, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font /*none*/, * features /*none,out,ca*/, guint len, guint* num_features);
// SKIP; container element not supported

// PangoFontMap* /*none,nullable*/ Font::get_font_map (PangoFont* font /*none,nullable*/);
// ::PangoFontMap* /*none,nullable*/ Font::get_font_map (::PangoFont* font /*none,nullable*/);
Pango::FontMap FontClass::get_font_map_ () noexcept
{
  if (!get_struct_()->get_font_map) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontMap* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_map;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void Font::get_glyph_extents (PangoFont* font /*none,nullable*/, PangoGlyph glyph, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void Font::get_glyph_extents (::PangoFont* font /*none,nullable*/, ::PangoGlyph glyph, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void FontClass::get_glyph_extents_ (::PangoGlyph glyph, Pango::Rectangle_Ref ink_rect, Pango::Rectangle_Ref logical_rect) noexcept
{
  if (!get_struct_()->get_glyph_extents) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_glyph_extents;
  auto logical_rect_to_c = gi::unwrap (logical_rect, gi::transfer_none);
  auto ink_rect_to_c = gi::unwrap (ink_rect, gi::transfer_none);
  auto glyph_to_c = glyph;
  call_wrap_v ((::PangoFont*) (gobj_()), (::PangoGlyph) (glyph_to_c), (::PangoRectangle*) (ink_rect_to_c), (::PangoRectangle*) (logical_rect_to_c));
}

// PangoFontMetrics* /*full*/ Font::get_metrics (PangoFont* font /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ Font::get_metrics (::PangoFont* font /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
Pango::FontMetrics FontClass::get_metrics_ (Pango::Language_Ref language) noexcept
{
  if (!get_struct_()->get_metrics) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_metrics;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
