// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSHAPE_IMPL_HPP_
#define _GI_PANGO_ATTRSHAPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoAttribute* /*full*/ pango_attr_shape_new (const PangoRectangle* ink_rect /*none*/, const PangoRectangle* logical_rect /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_shape_new (const ::PangoRectangle* ink_rect /*none*/, const ::PangoRectangle* logical_rect /*none*/);
Pango::Attribute base::AttrShapeBase::new_ (const Pango::Rectangle_Ref ink_rect, const Pango::Rectangle_Ref logical_rect) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const ::PangoRectangle* ink_rect, const ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_shape_new;
  auto logical_rect_to_c = gi::unwrap (logical_rect, gi::transfer_none);
  auto ink_rect_to_c = gi::unwrap (ink_rect, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoRectangle*) (ink_rect_to_c), (const ::PangoRectangle*) (logical_rect_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_shape_new_with_data (const PangoRectangle* ink_rect /*none*/, const PangoRectangle* logical_rect /*none*/, gpointer data, PangoAttrDataCopyFunc copy_func /*none,nullable*/, GDestroyNotify destroy_func /*none,nullable*/);
// ::PangoAttribute* /*full*/ pango_attr_shape_new_with_data (const ::PangoRectangle* ink_rect /*none*/, const ::PangoRectangle* logical_rect /*none*/, void* data,  copy_func /*none,nullable*/, GLib::DestroyNotify::cfunction_type destroy_func /*none,nullable*/);
// SKIP; copy_func type  not supported


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra_def_impl.hpp>)
#include <pango/attrshape_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra_impl.hpp>)
#include <pango/attrshape_extra_impl.hpp>
#endif
#endif

#endif
