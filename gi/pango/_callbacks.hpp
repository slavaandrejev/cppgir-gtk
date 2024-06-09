// AUTO-GENERATED

#ifndef _GI_PANGO__CALLBACKS_HPP_
#define _GI_PANGO__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class Attribute_Ref;
class Font;
class Fontset;

// typedef gpointer (*PangoAttrDataCopyFunc) (gconstpointer user_data);
// typedef void* (*PangoAttrDataCopyFunc) (const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef gboolean (*PangoAttrFilterFunc) (PangoAttribute* attribute /*none*/, gpointer user_data);
// typedef gboolean (*PangoAttrFilterFunc) (::PangoAttribute* attribute /*none*/, void* user_data);
namespace internal {

typedef gboolean (*AttrFilterFunc_CF_CType) (::PangoAttribute* attribute, void* user_data);
GI_INLINE_DECL bool AttrFilterFunc_CF (Pango::Attribute_Ref attribute, AttrFilterFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(AttrFilterFunc_CB_Trait, AttrFilterFunc_CF_CType, AttrFilterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Pango::Attribute_Ref attribute), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> AttrFilterFunc;

// typedef gboolean (*PangoFontsetForeachFunc) (PangoFontset* fontset /*none*/, PangoFont* font /*none*/, gpointer user_data);
// typedef gboolean (*PangoFontsetForeachFunc) (::PangoFontset* fontset /*none*/, ::PangoFont* font /*none*/, void* user_data);
namespace internal {

typedef gboolean (*FontsetForeachFunc_CF_CType) (::PangoFontset* fontset, ::PangoFont* font, void* user_data);
GI_INLINE_DECL bool FontsetForeachFunc_CF (Pango::Fontset fontset, Pango::Font font, FontsetForeachFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FontsetForeachFunc_CB_Trait, FontsetForeachFunc_CF_CType, FontsetForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Pango::Fontset fontset, Pango::Font font), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FontsetForeachFunc;

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
