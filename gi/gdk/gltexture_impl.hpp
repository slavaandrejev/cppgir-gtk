// AUTO-GENERATED

#ifndef _GI_GDK_GLTEXTURE_IMPL_HPP_
#define _GI_GDK_GLTEXTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkTexture* /*full*/ gdk_gl_texture_new (GdkGLContext* context /*none*/, guint id, int width, int height, GDestroyNotify destroy /*none*/, gpointer data);
// ::GdkGLTexture* /*full*/ gdk_gl_texture_new (::GdkGLContext* context /*none*/, guint id, gint width, gint height, GLib::DestroyNotify::cfunction_type destroy /*none*/, void* data);
// IGNORE; deprecated

// void gdk_gl_texture_release (GdkGLTexture* self /*none*/);
// void gdk_gl_texture_release (::GdkGLTexture* self /*none*/);
void base::GLTextureBase::release () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTexture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_release;
  call_wrap_v ((::GdkGLTexture*) (gobj_()));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/gltexture_extra_def_impl.hpp>)
#include <gdk/gltexture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/gltexture_extra_impl.hpp>)
#include <gdk/gltexture_extra_impl.hpp>
#endif
#endif

#endif
