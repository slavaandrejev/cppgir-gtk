// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO_FONT_HPP_
#define _GI_PANGOCAIRO_FONT_HPP_


namespace gi {

namespace repository {

namespace PangoCairo {


class Font;

namespace base {


#define GI_PANGOCAIRO_FONT_BASE base::FontBase
class FontBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::PangoCairoFont BaseObjectType;

FontBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_cairo_font_get_type(); } 

// cairo_scaled_font_t* /*none,nullable*/ pango_cairo_font_get_scaled_font (PangoCairoFont* font /*none,nullable*/);
// ::cairo_scaled_font_t* /*none,nullable*/ pango_cairo_font_get_scaled_font (::PangoCairoFont* font /*none,nullable*/);
GI_INLINE_DECL cairo::ScaledFont_Ref get_scaled_font () noexcept;

}; // class

} // namespace base

} // namespace PangoCairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pangocairo/font_extra_def.hpp>)
#include <pangocairo/font_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pangocairo/font_extra.hpp>)
#include <pangocairo/font_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace PangoCairo {

class Font : public GI_PANGOCAIRO_FONT_BASE
{ typedef GI_PANGOCAIRO_FONT_BASE super_type; using super_type::super_type; };

} // namespace PangoCairo

template<> struct declare_cpptype_of<::PangoCairoFont>
{ typedef PangoCairo::Font type; }; 

} // namespace repository

} // namespace gi

#endif
