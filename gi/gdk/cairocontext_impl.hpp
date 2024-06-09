// AUTO-GENERATED

#ifndef _GI_GDK_CAIROCONTEXT_IMPL_HPP_
#define _GI_GDK_CAIROCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// cairo_t* /*full,nullable*/ gdk_cairo_context_cairo_create (GdkCairoContext* self /*none*/);
// ::cairo_t* /*full,nullable*/ gdk_cairo_context_cairo_create (::GdkCairoContext* self /*none*/);
cairo::Context base::CairoContextBase::cairo_create () noexcept
{
  typedef ::cairo_t* (*call_wrap_t) (::GdkCairoContext* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_context_cairo_create;
  auto _temp_ret = call_wrap_v ((::GdkCairoContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cairocontext_extra_def_impl.hpp>)
#include <gdk/cairocontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cairocontext_extra_impl.hpp>)
#include <gdk/cairocontext_extra_impl.hpp>
#endif
#endif

#endif
