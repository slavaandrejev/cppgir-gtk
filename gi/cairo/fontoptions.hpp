// AUTO-GENERATED

#ifndef _GI_CAIRO_FONTOPTIONS_HPP_
#define _GI_CAIRO_FONTOPTIONS_HPP_


namespace gi {

namespace repository {

namespace cairo {


class FontOptions;

namespace base {


#define GI_CAIRO_FONTOPTIONS_BASE base::FontOptionsBase
class FontOptionsBase : public gi::detail::GBoxedWrapperBase<FontOptionsBase, ::cairo_font_options_t>
{
typedef gi::detail::GBoxedWrapperBase<FontOptionsBase, ::cairo_font_options_t> super_type;
public:

FontOptionsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_font_options_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/fontoptions_extra_def.hpp>)
#include <cairo/fontoptions_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/fontoptions_extra.hpp>)
#include <cairo/fontoptions_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class FontOptions_Ref;

class FontOptions : public gi::detail::GBoxedWrapper<FontOptions, ::cairo_font_options_t, GI_CAIRO_FONTOPTIONS_BASE, FontOptions_Ref>
{ typedef gi::detail::GBoxedWrapper<FontOptions, ::cairo_font_options_t, GI_CAIRO_FONTOPTIONS_BASE, FontOptions_Ref> super_type; using super_type::super_type; };


class FontOptions_Ref : public gi::detail::GBoxedRefWrapper<FontOptions, ::cairo_font_options_t, GI_CAIRO_FONTOPTIONS_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FontOptions, ::cairo_font_options_t, GI_CAIRO_FONTOPTIONS_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_font_options_t>
{ typedef cairo::FontOptions type; }; 

} // namespace repository

} // namespace gi

#endif
