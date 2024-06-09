// AUTO-GENERATED

#ifndef _GI_PANGO_CONTEXT_IMPL_HPP_
#define _GI_PANGO_CONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoContext* /*full*/ pango_context_new ();
// ::PangoContext* /*full*/ pango_context_new ();
Pango::Context base::ContextBase::new_ () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_context_changed (PangoContext* context /*none*/);
// void pango_context_changed (::PangoContext* context /*none*/);
void base::ContextBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_changed;
  call_wrap_v ((::PangoContext*) (gobj_()));
}

// PangoDirection pango_context_get_base_dir (PangoContext* context /*none*/);
// ::PangoDirection pango_context_get_base_dir (::PangoContext* context /*none*/);
Pango::Direction base::ContextBase::get_base_dir () noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_base_dir;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoGravity pango_context_get_base_gravity (PangoContext* context /*none*/);
// ::PangoGravity pango_context_get_base_gravity (::PangoContext* context /*none*/);
Pango::Gravity base::ContextBase::get_base_gravity () noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_base_gravity;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoFontDescription* /*none,nullable*/ pango_context_get_font_description (PangoContext* context /*none*/);
// ::PangoFontDescription* /*none,nullable*/ pango_context_get_font_description (::PangoContext* context /*none*/);
Pango::FontDescription_Ref base::ContextBase::get_font_description () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_font_description;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMap* /*none,nullable*/ pango_context_get_font_map (PangoContext* context /*none*/);
// ::PangoFontMap* /*none,nullable*/ pango_context_get_font_map (::PangoContext* context /*none*/);
Pango::FontMap base::ContextBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_font_map;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoGravity pango_context_get_gravity (PangoContext* context /*none*/);
// ::PangoGravity pango_context_get_gravity (::PangoContext* context /*none*/);
Pango::Gravity base::ContextBase::get_gravity () noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_gravity;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoGravityHint pango_context_get_gravity_hint (PangoContext* context /*none*/);
// ::PangoGravityHint pango_context_get_gravity_hint (::PangoContext* context /*none*/);
Pango::GravityHint base::ContextBase::get_gravity_hint () noexcept
{
  typedef ::PangoGravityHint (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_gravity_hint;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoLanguage* /*none*/ pango_context_get_language (PangoContext* context /*none*/);
// ::PangoLanguage* /*none*/ pango_context_get_language (::PangoContext* context /*none*/);
Pango::Language_Ref base::ContextBase::get_language () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_language;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const PangoMatrix* /*none,nullable*/ pango_context_get_matrix (PangoContext* context /*none*/);
// const ::PangoMatrix* /*none,nullable*/ pango_context_get_matrix (::PangoContext* context /*none*/);
Pango::Matrix_Ref base::ContextBase::get_matrix () noexcept
{
  typedef const ::PangoMatrix* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_matrix;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMetrics* /*full*/ pango_context_get_metrics (PangoContext* context /*none*/, const PangoFontDescription* desc /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ pango_context_get_metrics (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
Pango::FontMetrics base::ContextBase::get_metrics (const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_metrics;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::FontMetrics base::ContextBase::get_metrics () noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_metrics;
  auto language_to_c = nullptr;
  auto desc_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_context_get_round_glyph_positions (PangoContext* context /*none*/);
// gboolean pango_context_get_round_glyph_positions (::PangoContext* context /*none*/);
bool base::ContextBase::get_round_glyph_positions () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_round_glyph_positions;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return _temp_ret;
}

// guint pango_context_get_serial (PangoContext* context /*none*/);
// guint pango_context_get_serial (::PangoContext* context /*none*/);
guint base::ContextBase::get_serial () noexcept
{
  typedef guint (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_get_serial;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()));
  return _temp_ret;
}

// void pango_context_list_families (PangoContext* context /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void pango_context_list_families (::PangoContext* context /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
void base::ContextBase::list_families (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  families = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t>>(families_o, n_families, gi::transfer_container);
}
gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> base::ContextBase::list_families () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> families;
  families = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t>>(families_o, n_families, gi::transfer_container);
  return families;
}

// PangoFont* /*full,nullable*/ pango_context_load_font (PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ pango_context_load_font (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
Pango::Font base::ContextBase::load_font (const Pango::FontDescription_Ref desc) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_load_font;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontset* /*full,nullable*/ pango_context_load_fontset (PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ pango_context_load_fontset (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
Pango::Fontset base::ContextBase::load_fontset (const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept
{
  typedef ::PangoFontset* (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_load_fontset;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_context_set_base_dir (PangoContext* context /*none*/, PangoDirection direction);
// void pango_context_set_base_dir (::PangoContext* context /*none*/, ::PangoDirection direction);
void base::ContextBase::set_base_dir (Pango::Direction direction) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_base_dir;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoDirection) (direction_to_c));
}

// void pango_context_set_base_gravity (PangoContext* context /*none*/, PangoGravity gravity);
// void pango_context_set_base_gravity (::PangoContext* context /*none*/, ::PangoGravity gravity);
void base::ContextBase::set_base_gravity (Pango::Gravity gravity) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_base_gravity;
  auto gravity_to_c = gi::unwrap (gravity);
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoGravity) (gravity_to_c));
}

// void pango_context_set_font_description (PangoContext* context /*none*/, const PangoFontDescription* desc /*none,nullable*/);
// void pango_context_set_font_description (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none,nullable*/);
void base::ContextBase::set_font_description (const Pango::FontDescription_Ref desc) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_font_description;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c));
}
void base::ContextBase::set_font_description () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_font_description;
  auto desc_to_c = nullptr;
  call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c));
}

// void pango_context_set_font_map (PangoContext* context /*none*/, PangoFontMap* font_map /*none,nullable*/);
// void pango_context_set_font_map (::PangoContext* context /*none*/, ::PangoFontMap* font_map /*none,nullable*/);
void base::ContextBase::set_font_map (Pango::FontMap font_map) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_font_map;
  auto font_map_to_c = gi::unwrap (font_map, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}
void base::ContextBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_font_map;
  auto font_map_to_c = nullptr;
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}

// void pango_context_set_gravity_hint (PangoContext* context /*none*/, PangoGravityHint hint);
// void pango_context_set_gravity_hint (::PangoContext* context /*none*/, ::PangoGravityHint hint);
void base::ContextBase::set_gravity_hint (Pango::GravityHint hint) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_gravity_hint;
  auto hint_to_c = gi::unwrap (hint);
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoGravityHint) (hint_to_c));
}

// void pango_context_set_language (PangoContext* context /*none*/, PangoLanguage* language /*none,nullable*/);
// void pango_context_set_language (::PangoContext* context /*none*/, ::PangoLanguage* language /*none,nullable*/);
void base::ContextBase::set_language (Pango::Language_Ref language) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_language;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoLanguage*) (language_to_c));
}
void base::ContextBase::set_language () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_language;
  auto language_to_c = nullptr;
  call_wrap_v ((::PangoContext*) (gobj_()), (::PangoLanguage*) (language_to_c));
}

// void pango_context_set_matrix (PangoContext* context /*none*/, const PangoMatrix* matrix /*none,nullable*/);
// void pango_context_set_matrix (::PangoContext* context /*none*/, const ::PangoMatrix* matrix /*none,nullable*/);
void base::ContextBase::set_matrix (const Pango::Matrix_Ref matrix) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoMatrix*) (matrix_to_c));
}
void base::ContextBase::set_matrix () noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_matrix;
  auto matrix_to_c = nullptr;
  call_wrap_v ((::PangoContext*) (gobj_()), (const ::PangoMatrix*) (matrix_to_c));
}

// void pango_context_set_round_glyph_positions (PangoContext* context /*none*/, gboolean round_positions);
// void pango_context_set_round_glyph_positions (::PangoContext* context /*none*/, gboolean round_positions);
void base::ContextBase::set_round_glyph_positions (gboolean round_positions) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, gboolean round_positions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_context_set_round_glyph_positions;
  auto round_positions_to_c = round_positions;
  call_wrap_v ((::PangoContext*) (gobj_()), (gboolean) (round_positions_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/context_extra_def_impl.hpp>)
#include <pango/context_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/context_extra_impl.hpp>)
#include <pango/context_extra_impl.hpp>
#endif
#endif

#endif
