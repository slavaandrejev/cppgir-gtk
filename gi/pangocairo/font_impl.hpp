// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO_FONT_IMPL_HPP_
#define _GI_PANGOCAIRO_FONT_IMPL_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {

namespace base {

// cairo_scaled_font_t* /*none,nullable*/ pango_cairo_font_get_scaled_font (PangoCairoFont* font /*none,nullable*/);
// ::cairo_scaled_font_t* /*none,nullable*/ pango_cairo_font_get_scaled_font (::PangoCairoFont* font /*none,nullable*/);
cairo::ScaledFont_Ref base::FontBase::get_scaled_font () noexcept
{
  typedef ::cairo_scaled_font_t* (*call_wrap_t) (::PangoCairoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_font_get_scaled_font;
  auto _temp_ret = call_wrap_v ((::PangoCairoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace PangoCairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pangocairo/font_extra_def_impl.hpp>)
#include <pangocairo/font_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pangocairo/font_extra_impl.hpp>)
#include <pangocairo/font_extra_impl.hpp>
#endif
#endif

#endif
