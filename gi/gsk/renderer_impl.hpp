// AUTO-GENERATED

#ifndef _GI_GSK_RENDERER_IMPL_HPP_
#define _GI_GSK_RENDERER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskRenderer* /*full,nullable*/ gsk_renderer_new_for_surface (GdkSurface* surface /*none*/);
// ::GskRenderer* /*full,nullable*/ gsk_renderer_new_for_surface (::GdkSurface* surface /*none*/);
Gsk::Renderer base::RendererBase::new_for_surface (Gdk::Surface surface) noexcept
{
  typedef ::GskRenderer* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_renderer_new_for_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkSurface* /*none,nullable*/ gsk_renderer_get_surface (GskRenderer* renderer /*none*/);
// ::GdkSurface* /*none,nullable*/ gsk_renderer_get_surface (::GskRenderer* renderer /*none*/);
Gdk::Surface base::RendererBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GskRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_get_surface;
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gsk_renderer_is_realized (GskRenderer* renderer /*none*/);
// gboolean gsk_renderer_is_realized (::GskRenderer* renderer /*none*/);
bool base::RendererBase::is_realized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_is_realized;
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()));
  return _temp_ret;
}

// gboolean gsk_renderer_realize (GskRenderer* renderer /*none*/, GdkSurface* surface /*none,nullable*/, GError ** error);
// gboolean gsk_renderer_realize (::GskRenderer* renderer /*none*/, ::GdkSurface* surface /*none,nullable*/, GError ** error);
bool base::RendererBase::realize (Gdk::Surface surface)
{
  typedef gboolean (*call_wrap_t) (::GskRenderer* renderer, ::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_realize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()), (::GdkSurface*) (surface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RendererBase::realize ()
{
  typedef gboolean (*call_wrap_t) (::GskRenderer* renderer, ::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_realize;
  auto surface_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()), (::GdkSurface*) (surface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RendererBase::realize (Gdk::Surface surface, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskRenderer* renderer, ::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_realize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()), (::GdkSurface*) (surface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::RendererBase::realize (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskRenderer* renderer, ::GdkSurface* surface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_realize;
  auto surface_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GskRenderer*) (gobj_()), (::GdkSurface*) (surface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gsk_renderer_render (GskRenderer* renderer /*none*/, GskRenderNode* root /*none*/, const cairo_region_t* region /*none,nullable*/);
// void gsk_renderer_render (::GskRenderer* renderer /*none*/,  root /*none*/, const ::cairo_region_t* region /*none,nullable*/);
// SKIP; root type  not supported

// GdkTexture* /*full*/ gsk_renderer_render_texture (GskRenderer* renderer /*none*/, GskRenderNode* root /*none*/, const graphene_rect_t* viewport /*none,nullable*/);
// ::GdkTexture* /*full*/ gsk_renderer_render_texture (::GskRenderer* renderer /*none*/,  root /*none*/, const ::graphene_rect_t* viewport /*none,nullable*/);
// SKIP; root type  not supported

// void gsk_renderer_unrealize (GskRenderer* renderer /*none*/);
// void gsk_renderer_unrealize (::GskRenderer* renderer /*none*/);
void base::RendererBase::unrealize () noexcept
{
  typedef void (*call_wrap_t) (::GskRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_renderer_unrealize;
  call_wrap_v ((::GskRenderer*) (gobj_()));
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/renderer_extra_def_impl.hpp>)
#include <gsk/renderer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/renderer_extra_impl.hpp>)
#include <gsk/renderer_extra_impl.hpp>
#endif
#endif

#endif
