// AUTO-GENERATED

#ifndef _GI_PANGO_FONTSETSIMPLE_IMPL_HPP_
#define _GI_PANGO_FONTSETSIMPLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontsetSimple* /*full*/ pango_fontset_simple_new (PangoLanguage* language /*none*/);
// ::PangoFontsetSimple* /*full*/ pango_fontset_simple_new (::PangoLanguage* language /*none*/);
Pango::FontsetSimple base::FontsetSimpleBase::new_ (Pango::Language_Ref language) noexcept
{
  typedef ::PangoFontsetSimple* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_fontset_simple_new;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_fontset_simple_append (PangoFontsetSimple* fontset /*none*/, PangoFont* font /*full*/);
// void pango_fontset_simple_append (::PangoFontsetSimple* fontset /*none*/, ::PangoFont* font /*full*/);
void base::FontsetSimpleBase::append (Pango::Font font) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontsetSimple* fontset, ::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_fontset_simple_append;
  auto font_to_c = gi::unwrap (font, gi::transfer_full);
  call_wrap_v ((::PangoFontsetSimple*) (gobj_()), (::PangoFont*) (font_to_c));
}

// int pango_fontset_simple_size (PangoFontsetSimple* fontset /*none*/);
// gint pango_fontset_simple_size (::PangoFontsetSimple* fontset /*none*/);
gint base::FontsetSimpleBase::size () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontsetSimple* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_fontset_simple_size;
  auto _temp_ret = call_wrap_v ((::PangoFontsetSimple*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontsetsimple_extra_def_impl.hpp>)
#include <pango/fontsetsimple_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontsetsimple_extra_impl.hpp>)
#include <pango/fontsetsimple_extra_impl.hpp>
#endif
#endif

#endif
