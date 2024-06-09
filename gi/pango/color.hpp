// AUTO-GENERATED

#ifndef _GI_PANGO_COLOR_HPP_
#define _GI_PANGO_COLOR_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Color_Ref;

class Color;

namespace base {


#define GI_PANGO_COLOR_BASE base::ColorBase
class ColorBase : public gi::detail::GBoxedWrapperBase<ColorBase, ::PangoColor>
{
typedef gi::detail::GBoxedWrapperBase<ColorBase, ::PangoColor> super_type;
public:

ColorBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_color_get_type(); } 

// guint16 Color::red (const ::PangoColor* obj /*none*/);
// guint16 Color::red (const ::PangoColor* obj /*none*/);
GI_INLINE_DECL guint16 red_ () const noexcept;

//  Color::red (::PangoColor* obj /*none*/, guint16 _value);
// void Color::red (::PangoColor* obj /*none*/, guint16 _value);
GI_INLINE_DECL void red_ (guint16 _value) noexcept;

// guint16 Color::green (const ::PangoColor* obj /*none*/);
// guint16 Color::green (const ::PangoColor* obj /*none*/);
GI_INLINE_DECL guint16 green_ () const noexcept;

//  Color::green (::PangoColor* obj /*none*/, guint16 _value);
// void Color::green (::PangoColor* obj /*none*/, guint16 _value);
GI_INLINE_DECL void green_ (guint16 _value) noexcept;

// guint16 Color::blue (const ::PangoColor* obj /*none*/);
// guint16 Color::blue (const ::PangoColor* obj /*none*/);
GI_INLINE_DECL guint16 blue_ () const noexcept;

//  Color::blue (::PangoColor* obj /*none*/, guint16 _value);
// void Color::blue (::PangoColor* obj /*none*/, guint16 _value);
GI_INLINE_DECL void blue_ (guint16 _value) noexcept;

// PangoColor* /*full,nullable*/ pango_color_copy (const PangoColor* src /*none,nullable*/);
// ::PangoColor* /*full,nullable*/ pango_color_copy (const ::PangoColor* src /*none,nullable*/);
GI_INLINE_DECL Pango::Color copy () const noexcept;

// void pango_color_free (PangoColor* color /*none,nullable*/);
// void pango_color_free (::PangoColor* color /*none,nullable*/);
// IGNORE; marked ignore

// gboolean pango_color_parse (PangoColor* color /*none,nullable*/, const char* spec /*none*/);
// gboolean pango_color_parse (::PangoColor* color /*none,nullable*/, const char* spec /*none*/);
GI_INLINE_DECL bool parse (const gi::cstring_v spec) noexcept;

// gboolean pango_color_parse_with_alpha (PangoColor* color /*none,nullable*/, guint16* alpha, const char* spec /*none*/);
// gboolean pango_color_parse_with_alpha (::PangoColor* color /*none,nullable*/, guint16* alpha, const char* spec /*none*/);
GI_INLINE_DECL bool parse_with_alpha (guint16 * alpha, const gi::cstring_v spec) noexcept;
GI_INLINE_DECL std::tuple<bool, guint16> parse_with_alpha (const gi::cstring_v spec) noexcept;

// char* /*full*/ pango_color_to_string (const PangoColor* color /*none*/);
// char* /*full*/ pango_color_to_string (const ::PangoColor* color /*none*/);
GI_INLINE_DECL gi::cstring to_string () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/color_extra_def.hpp>)
#include <pango/color_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/color_extra.hpp>)
#include <pango/color_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Color_Ref;

class Color : public gi::detail::GBoxedWrapper<Color, ::PangoColor, GI_PANGO_COLOR_BASE, Color_Ref>
{ typedef gi::detail::GBoxedWrapper<Color, ::PangoColor, GI_PANGO_COLOR_BASE, Color_Ref> super_type; using super_type::super_type; };


class Color_Ref : public gi::detail::GBoxedRefWrapper<Color, ::PangoColor, GI_PANGO_COLOR_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Color, ::PangoColor, GI_PANGO_COLOR_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoColor>
{ typedef Pango::Color type; }; 

} // namespace repository

} // namespace gi

#endif
