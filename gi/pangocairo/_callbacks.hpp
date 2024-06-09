// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO__CALLBACKS_HPP_
#define _GI_PANGOCAIRO__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {


// typedef void (*PangoCairoShapeRendererFunc) (cairo_t* cr /*none*/, PangoAttrShape* attr /*none*/, gboolean do_path, gpointer data);
// typedef void (*PangoCairoShapeRendererFunc) (::cairo_t* cr /*none*/, ::PangoAttrShape* attr /*none*/, gboolean do_path, void* data);
namespace internal {

typedef void (*ShapeRendererFunc_CF_CType) (::cairo_t* cr, ::PangoAttrShape* attr, gboolean do_path, void* data);
GI_INLINE_DECL void ShapeRendererFunc_CF (cairo::Context_Ref cr, Pango::AttrShape_Ref attr, gboolean do_path, ShapeRendererFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ShapeRendererFunc_CB_Trait, ShapeRendererFunc_CF_CType, ShapeRendererFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(cairo::Context_Ref cr, Pango::AttrShape_Ref attr, gboolean do_path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> ShapeRendererFunc;

} // namespace PangoCairo

} // namespace repository

} // namespace gi

#endif
