// AUTO-GENERATED

#ifndef _GI_GSK_CAIRORENDERER_IMPL_HPP_
#define _GI_GSK_CAIRORENDERER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskRenderer* /*full*/ gsk_cairo_renderer_new ();
// ::GskCairoRenderer* /*full*/ gsk_cairo_renderer_new ();
Gsk::CairoRenderer base::CairoRendererBase::new_ () noexcept
{
  typedef ::GskCairoRenderer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_cairo_renderer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/cairorenderer_extra_def_impl.hpp>)
#include <gsk/cairorenderer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/cairorenderer_extra_impl.hpp>)
#include <gsk/cairorenderer_extra_impl.hpp>
#endif
#endif

#endif
