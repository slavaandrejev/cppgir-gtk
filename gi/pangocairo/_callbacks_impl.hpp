// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO__CALLBACKS_IMPL_HPP_
#define _GI_PANGOCAIRO__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {

// typedef void (*PangoCairoShapeRendererFunc) (cairo_t* cr /*none*/, PangoAttrShape* attr /*none*/, gboolean do_path, gpointer data);
// typedef void (*PangoCairoShapeRendererFunc) (::cairo_t* cr /*none*/, ::PangoAttrShape* attr /*none*/, gboolean do_path, void* data);
namespace internal {

void ShapeRendererFunc_CF (cairo::Context_Ref cr, Pango::AttrShape_Ref attr, gboolean do_path, ShapeRendererFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto do_path_to_c = do_path;
  auto attr_to_c = gi::unwrap (attr, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  _call ((::cairo_t*) (cr_to_c), (::PangoAttrShape*) (attr_to_c), (gboolean) (do_path_to_c), (void*) (data_to_c));
}
} // namespace internal


} // namespace PangoCairo

} // namespace repository

} // namespace gi

#endif
