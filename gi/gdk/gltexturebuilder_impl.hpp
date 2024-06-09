// AUTO-GENERATED

#ifndef _GI_GDK_GLTEXTUREBUILDER_IMPL_HPP_
#define _GI_GDK_GLTEXTUREBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkGLTextureBuilder* /*full*/ gdk_gl_texture_builder_new ();
// ::GdkGLTextureBuilder* /*full*/ gdk_gl_texture_builder_new ();
Gdk::GLTextureBuilder base::GLTextureBuilderBase::new_ () noexcept
{
  typedef ::GdkGLTextureBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_texture_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_gl_texture_builder_build (GdkGLTextureBuilder* self /*none*/, GDestroyNotify destroy /*none,nullable*/, gpointer data);
// ::GdkTexture* /*full*/ gdk_gl_texture_builder_build (::GdkGLTextureBuilder* self /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/, void* data);
// SKIP; callback misses closure info

// GdkGLContext* /*none,nullable*/ gdk_gl_texture_builder_get_context (GdkGLTextureBuilder* self /*none*/);
// ::GdkGLContext* /*none,nullable*/ gdk_gl_texture_builder_get_context (::GdkGLTextureBuilder* self /*none*/);
Gdk::GLContext base::GLTextureBuilderBase::get_context () noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_context;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkMemoryFormat gdk_gl_texture_builder_get_format (GdkGLTextureBuilder* self /*none*/);
// ::GdkMemoryFormat gdk_gl_texture_builder_get_format (::GdkGLTextureBuilder* self /*none*/);
Gdk::MemoryFormat base::GLTextureBuilderBase::get_format () noexcept
{
  typedef ::GdkMemoryFormat (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_format;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_gl_texture_builder_get_has_mipmap (GdkGLTextureBuilder* self /*none*/);
// gboolean gdk_gl_texture_builder_get_has_mipmap (::GdkGLTextureBuilder* self /*none*/);
bool base::GLTextureBuilderBase::get_has_mipmap () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_has_mipmap;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// int gdk_gl_texture_builder_get_height (GdkGLTextureBuilder* self /*none*/);
// gint gdk_gl_texture_builder_get_height (::GdkGLTextureBuilder* self /*none*/);
gint base::GLTextureBuilderBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_height;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// guint gdk_gl_texture_builder_get_id (GdkGLTextureBuilder* self /*none*/);
// guint gdk_gl_texture_builder_get_id (::GdkGLTextureBuilder* self /*none*/);
guint base::GLTextureBuilderBase::get_id () noexcept
{
  typedef guint (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_id;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// gpointer gdk_gl_texture_builder_get_sync (GdkGLTextureBuilder* self /*none*/);
// void* gdk_gl_texture_builder_get_sync (::GdkGLTextureBuilder* self /*none*/);
gpointer base::GLTextureBuilderBase::get_sync () noexcept
{
  typedef void* (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_sync;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// cairo_region_t* /*none,nullable*/ gdk_gl_texture_builder_get_update_region (GdkGLTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_gl_texture_builder_get_update_region (::GdkGLTextureBuilder* self /*none*/);
cairo::Region_Ref base::GLTextureBuilderBase::get_update_region () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_update_region;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkTexture* /*none,nullable*/ gdk_gl_texture_builder_get_update_texture (GdkGLTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_gl_texture_builder_get_update_texture (::GdkGLTextureBuilder* self /*none*/);
Gdk::Texture base::GLTextureBuilderBase::get_update_texture () noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_update_texture;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_gl_texture_builder_get_width (GdkGLTextureBuilder* self /*none*/);
// gint gdk_gl_texture_builder_get_width (::GdkGLTextureBuilder* self /*none*/);
gint base::GLTextureBuilderBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkGLTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_get_width;
  auto _temp_ret = call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// void gdk_gl_texture_builder_set_context (GdkGLTextureBuilder* self /*none*/, GdkGLContext* context /*none,nullable*/);
// void gdk_gl_texture_builder_set_context (::GdkGLTextureBuilder* self /*none*/, ::GdkGLContext* context /*none,nullable*/);
void base::GLTextureBuilderBase::set_context (Gdk::GLContext context) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::GdkGLContext*) (context_to_c));
}
void base::GLTextureBuilderBase::set_context () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_context;
  auto context_to_c = nullptr;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::GdkGLContext*) (context_to_c));
}

// void gdk_gl_texture_builder_set_format (GdkGLTextureBuilder* self /*none*/, GdkMemoryFormat format);
// void gdk_gl_texture_builder_set_format (::GdkGLTextureBuilder* self /*none*/, ::GdkMemoryFormat format);
void base::GLTextureBuilderBase::set_format (Gdk::MemoryFormat format) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::GdkMemoryFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_format;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::GdkMemoryFormat) (format_to_c));
}

// void gdk_gl_texture_builder_set_has_mipmap (GdkGLTextureBuilder* self /*none*/, gboolean has_mipmap);
// void gdk_gl_texture_builder_set_has_mipmap (::GdkGLTextureBuilder* self /*none*/, gboolean has_mipmap);
void base::GLTextureBuilderBase::set_has_mipmap (gboolean has_mipmap) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, gboolean has_mipmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_has_mipmap;
  auto has_mipmap_to_c = has_mipmap;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (gboolean) (has_mipmap_to_c));
}

// void gdk_gl_texture_builder_set_height (GdkGLTextureBuilder* self /*none*/, int height);
// void gdk_gl_texture_builder_set_height (::GdkGLTextureBuilder* self /*none*/, gint height);
void base::GLTextureBuilderBase::set_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_height;
  auto height_to_c = height;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (gint) (height_to_c));
}

// void gdk_gl_texture_builder_set_id (GdkGLTextureBuilder* self /*none*/, guint id);
// void gdk_gl_texture_builder_set_id (::GdkGLTextureBuilder* self /*none*/, guint id);
void base::GLTextureBuilderBase::set_id (guint id) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_id;
  auto id_to_c = id;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (guint) (id_to_c));
}

// void gdk_gl_texture_builder_set_sync (GdkGLTextureBuilder* self /*none*/, gpointer sync);
// void gdk_gl_texture_builder_set_sync (::GdkGLTextureBuilder* self /*none*/, void* sync);
void base::GLTextureBuilderBase::set_sync (void* sync) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, void* sync);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_sync;
  auto sync_to_c = sync;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (void*) (sync_to_c));
}

// void gdk_gl_texture_builder_set_update_region (GdkGLTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_gl_texture_builder_set_update_region (::GdkGLTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
void base::GLTextureBuilderBase::set_update_region (cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_update_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::GLTextureBuilderBase::set_update_region () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_update_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gdk_gl_texture_builder_set_update_texture (GdkGLTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_gl_texture_builder_set_update_texture (::GdkGLTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
void base::GLTextureBuilderBase::set_update_texture (Gdk::Texture texture) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_update_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}
void base::GLTextureBuilderBase::set_update_texture () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_update_texture;
  auto texture_to_c = nullptr;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}

// void gdk_gl_texture_builder_set_width (GdkGLTextureBuilder* self /*none*/, int width);
// void gdk_gl_texture_builder_set_width (::GdkGLTextureBuilder* self /*none*/, gint width);
void base::GLTextureBuilderBase::set_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLTextureBuilder* self, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_texture_builder_set_width;
  auto width_to_c = width;
  call_wrap_v ((::GdkGLTextureBuilder*) (gobj_()), (gint) (width_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/gltexturebuilder_extra_def_impl.hpp>)
#include <gdk/gltexturebuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/gltexturebuilder_extra_impl.hpp>)
#include <gdk/gltexturebuilder_extra_impl.hpp>
#endif
#endif

#endif
