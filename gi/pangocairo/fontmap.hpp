// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO_FONTMAP_HPP_
#define _GI_PANGOCAIRO_FONTMAP_HPP_


namespace gi {

namespace repository {

namespace PangoCairo {


class FontMap;

namespace base {


#define GI_PANGOCAIRO_FONTMAP_BASE base::FontMapBase
class FontMapBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::PangoCairoFontMap BaseObjectType;

FontMapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_cairo_font_map_get_type(); } 

// PangoFontMap* /*none*/ pango_cairo_font_map_get_default ();
// ::PangoFontMap* /*none*/ pango_cairo_font_map_get_default ();
static GI_INLINE_DECL Pango::FontMap get_default () noexcept;

// PangoFontMap* /*full*/ pango_cairo_font_map_new ();
// ::PangoFontMap* /*full*/ pango_cairo_font_map_new ();
static GI_INLINE_DECL Pango::FontMap new_ () noexcept;

// PangoFontMap* /*full,nullable*/ pango_cairo_font_map_new_for_font_type (cairo_font_type_t fonttype);
// ::PangoFontMap* /*full,nullable*/ pango_cairo_font_map_new_for_font_type (::cairo_font_type_t fonttype);
static GI_INLINE_DECL Pango::FontMap new_for_font_type (cairo::FontType fonttype) noexcept;

// FAILURE on pango_cairo_font_map_create_context; No such node (<xmlattr>.transfer-ownership)
// cairo_font_type_t pango_cairo_font_map_get_font_type (PangoCairoFontMap* fontmap /*none*/);
// ::cairo_font_type_t pango_cairo_font_map_get_font_type (::PangoCairoFontMap* fontmap /*none*/);
GI_INLINE_DECL cairo::FontType get_font_type () noexcept;

// double pango_cairo_font_map_get_resolution (PangoCairoFontMap* fontmap /*none*/);
// gdouble pango_cairo_font_map_get_resolution (::PangoCairoFontMap* fontmap /*none*/);
GI_INLINE_DECL gdouble get_resolution () noexcept;

// void pango_cairo_font_map_set_default (PangoCairoFontMap* fontmap /*none,nullable*/);
// void pango_cairo_font_map_set_default (::PangoCairoFontMap* fontmap /*none,nullable*/);
GI_INLINE_DECL void set_default () noexcept;

// void pango_cairo_font_map_set_resolution (PangoCairoFontMap* fontmap /*none*/, double dpi);
// void pango_cairo_font_map_set_resolution (::PangoCairoFontMap* fontmap /*none*/, gdouble dpi);
GI_INLINE_DECL void set_resolution (gdouble dpi) noexcept;

}; // class

} // namespace base

} // namespace PangoCairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pangocairo/fontmap_extra_def.hpp>)
#include <pangocairo/fontmap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pangocairo/fontmap_extra.hpp>)
#include <pangocairo/fontmap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace PangoCairo {

class FontMap : public GI_PANGOCAIRO_FONTMAP_BASE
{ typedef GI_PANGOCAIRO_FONTMAP_BASE super_type; using super_type::super_type; };

} // namespace PangoCairo

template<> struct declare_cpptype_of<::PangoCairoFontMap>
{ typedef PangoCairo::FontMap type; }; 

} // namespace repository

} // namespace gi

#endif
