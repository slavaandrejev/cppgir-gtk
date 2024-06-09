// AUTO-GENERATED

#ifndef _GI_GDK_MEMORYTEXTURE_IMPL_HPP_
#define _GI_GDK_MEMORYTEXTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkTexture* /*full*/ gdk_memory_texture_new (int width, int height, GdkMemoryFormat format, GBytes* bytes /*none*/, gsize stride);
// ::GdkMemoryTexture* /*full*/ gdk_memory_texture_new (gint width, gint height, ::GdkMemoryFormat format, ::GBytes* bytes /*none*/, gsize stride);
Gdk::MemoryTexture base::MemoryTextureBase::new_ (gint width, gint height, Gdk::MemoryFormat format, GLib::Bytes_Ref bytes, gsize stride) noexcept
{
  typedef ::GdkMemoryTexture* (*call_wrap_t) (gint width, gint height, ::GdkMemoryFormat format, ::GBytes* bytes, gsize stride);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_memory_texture_new;
  auto stride_to_c = stride;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto format_to_c = gi::unwrap (format);
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((gint) (width_to_c), (gint) (height_to_c), (::GdkMemoryFormat) (format_to_c), (::GBytes*) (bytes_to_c), (gsize) (stride_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/memorytexture_extra_def_impl.hpp>)
#include <gdk/memorytexture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/memorytexture_extra_impl.hpp>)
#include <gdk/memorytexture_extra_impl.hpp>
#endif
#endif

#endif
