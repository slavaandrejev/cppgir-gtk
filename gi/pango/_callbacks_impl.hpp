// AUTO-GENERATED

#ifndef _GI_PANGO__CALLBACKS_IMPL_HPP_
#define _GI_PANGO__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

// typedef gpointer (*PangoAttrDataCopyFunc) (gconstpointer user_data);
// typedef void* (*PangoAttrDataCopyFunc) (const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef gboolean (*PangoAttrFilterFunc) (PangoAttribute* attribute /*none*/, gpointer user_data);
// typedef gboolean (*PangoAttrFilterFunc) (::PangoAttribute* attribute /*none*/, void* user_data);
namespace internal {

bool AttrFilterFunc_CF (Pango::Attribute_Ref attribute, AttrFilterFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = _call ((::PangoAttribute*) (attribute_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*PangoFontsetForeachFunc) (PangoFontset* fontset /*none*/, PangoFont* font /*none*/, gpointer user_data);
// typedef gboolean (*PangoFontsetForeachFunc) (::PangoFontset* fontset /*none*/, ::PangoFont* font /*none*/, void* user_data);
namespace internal {

bool FontsetForeachFunc_CF (Pango::Fontset fontset, Pango::Font font, FontsetForeachFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  auto fontset_to_c = gi::unwrap (fontset, gi::transfer_none);
  auto _temp_ret = _call ((::PangoFontset*) (fontset_to_c), (::PangoFont*) (font_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


} // namespace Pango

} // namespace repository

} // namespace gi

#endif
