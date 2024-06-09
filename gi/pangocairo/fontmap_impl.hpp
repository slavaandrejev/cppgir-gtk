// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO_FONTMAP_IMPL_HPP_
#define _GI_PANGOCAIRO_FONTMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {

namespace base {

// PangoFontMap* /*none*/ pango_cairo_font_map_get_default ();
// ::PangoFontMap* /*none*/ pango_cairo_font_map_get_default ();
Pango::FontMap base::FontMapBase::get_default () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMap* /*full*/ pango_cairo_font_map_new ();
// ::PangoFontMap* /*full*/ pango_cairo_font_map_new ();
Pango::FontMap base::FontMapBase::new_ () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontMap* /*full,nullable*/ pango_cairo_font_map_new_for_font_type (cairo_font_type_t fonttype);
// ::PangoFontMap* /*full,nullable*/ pango_cairo_font_map_new_for_font_type (::cairo_font_type_t fonttype);
Pango::FontMap base::FontMapBase::new_for_font_type (cairo::FontType fonttype) noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::cairo_font_type_t fonttype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_new_for_font_type;
  auto fonttype_to_c = gi::unwrap (fonttype);
  auto _temp_ret = call_wrap_v ((::cairo_font_type_t) (fonttype_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// FAILURE on pango_cairo_font_map_create_context; No such node (<xmlattr>.transfer-ownership)
// cairo_font_type_t pango_cairo_font_map_get_font_type (PangoCairoFontMap* fontmap /*none*/);
// ::cairo_font_type_t pango_cairo_font_map_get_font_type (::PangoCairoFontMap* fontmap /*none*/);
cairo::FontType base::FontMapBase::get_font_type () noexcept
{
  typedef ::cairo_font_type_t (*call_wrap_t) (::PangoCairoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_get_font_type;
  auto _temp_ret = call_wrap_v ((::PangoCairoFontMap*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double pango_cairo_font_map_get_resolution (PangoCairoFontMap* fontmap /*none*/);
// gdouble pango_cairo_font_map_get_resolution (::PangoCairoFontMap* fontmap /*none*/);
gdouble base::FontMapBase::get_resolution () noexcept
{
  typedef gdouble (*call_wrap_t) (::PangoCairoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_get_resolution;
  auto _temp_ret = call_wrap_v ((::PangoCairoFontMap*) (gobj_()));
  return _temp_ret;
}

// void pango_cairo_font_map_set_default (PangoCairoFontMap* fontmap /*none,nullable*/);
// void pango_cairo_font_map_set_default (::PangoCairoFontMap* fontmap /*none,nullable*/);
void base::FontMapBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::PangoCairoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_set_default;
  call_wrap_v ((::PangoCairoFontMap*) (gobj_()));
}

// void pango_cairo_font_map_set_resolution (PangoCairoFontMap* fontmap /*none*/, double dpi);
// void pango_cairo_font_map_set_resolution (::PangoCairoFontMap* fontmap /*none*/, gdouble dpi);
void base::FontMapBase::set_resolution (gdouble dpi) noexcept
{
  typedef void (*call_wrap_t) (::PangoCairoFontMap* fontmap, gdouble dpi);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_map_set_resolution;
  auto dpi_to_c = dpi;
  call_wrap_v ((::PangoCairoFontMap*) (gobj_()), (gdouble) (dpi_to_c));
}


} // namespace base

} // namespace PangoCairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pangocairo/fontmap_extra_def_impl.hpp>)
#include <pangocairo/fontmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pangocairo/fontmap_extra_impl.hpp>)
#include <pangocairo/fontmap_extra_impl.hpp>
#endif
#endif

#endif
