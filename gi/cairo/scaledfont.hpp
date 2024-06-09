// AUTO-GENERATED

#ifndef _GI_CAIRO_SCALEDFONT_HPP_
#define _GI_CAIRO_SCALEDFONT_HPP_


namespace gi {

namespace repository {

namespace cairo {


class ScaledFont;

namespace base {


#define GI_CAIRO_SCALEDFONT_BASE base::ScaledFontBase
class ScaledFontBase : public gi::detail::GBoxedWrapperBase<ScaledFontBase, ::cairo_scaled_font_t>
{
typedef gi::detail::GBoxedWrapperBase<ScaledFontBase, ::cairo_scaled_font_t> super_type;
public:

ScaledFontBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_scaled_font_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/scaledfont_extra_def.hpp>)
#include <cairo/scaledfont_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/scaledfont_extra.hpp>)
#include <cairo/scaledfont_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class ScaledFont_Ref;

class ScaledFont : public gi::detail::GBoxedWrapper<ScaledFont, ::cairo_scaled_font_t, GI_CAIRO_SCALEDFONT_BASE, ScaledFont_Ref>
{ typedef gi::detail::GBoxedWrapper<ScaledFont, ::cairo_scaled_font_t, GI_CAIRO_SCALEDFONT_BASE, ScaledFont_Ref> super_type; using super_type::super_type; };


class ScaledFont_Ref : public gi::detail::GBoxedRefWrapper<ScaledFont, ::cairo_scaled_font_t, GI_CAIRO_SCALEDFONT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ScaledFont, ::cairo_scaled_font_t, GI_CAIRO_SCALEDFONT_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_scaled_font_t>
{ typedef cairo::ScaledFont type; }; 

} // namespace repository

} // namespace gi

#endif
