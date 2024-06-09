// AUTO-GENERATED

#ifndef _GI_GDK_TEXTUREDOWNLOADER_IMPL_HPP_
#define _GI_GDK_TEXTUREDOWNLOADER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkTextureDownloader* /*full*/ gdk_texture_downloader_new (GdkTexture* texture /*none*/);
// ::GdkTextureDownloader* /*full*/ gdk_texture_downloader_new (::GdkTexture* texture /*none*/);
Gdk::TextureDownloader base::TextureDownloaderBase::new_ (Gdk::Texture texture) noexcept
{
  typedef ::GdkTextureDownloader* (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_downloader_new;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (texture_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTextureDownloader* /*full*/ gdk_texture_downloader_copy (const GdkTextureDownloader* self /*none*/);
// ::GdkTextureDownloader* /*full*/ gdk_texture_downloader_copy (const ::GdkTextureDownloader* self /*none*/);
Gdk::TextureDownloader base::TextureDownloaderBase::copy () const noexcept
{
  typedef ::GdkTextureDownloader* (*call_wrap_t) (const ::GdkTextureDownloader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_copy;
  auto _temp_ret = call_wrap_v ((const ::GdkTextureDownloader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ gdk_texture_downloader_download_bytes (const GdkTextureDownloader* self /*none*/, gsize* out_stride);
// ::GBytes* /*full*/ gdk_texture_downloader_download_bytes (const ::GdkTextureDownloader* self /*none*/, gsize* out_stride);
GLib::Bytes base::TextureDownloaderBase::download_bytes (gsize & out_stride) const noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const ::GdkTextureDownloader* self, gsize* out_stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_download_bytes;
  gsize out_stride_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkTextureDownloader*) (gobj_()), (gsize*) (&out_stride_o));
  out_stride = out_stride_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Bytes, gsize> base::TextureDownloaderBase::download_bytes () const noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const ::GdkTextureDownloader* self, gsize* out_stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_download_bytes;
  gsize out_stride_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkTextureDownloader*) (gobj_()), (gsize*) (&out_stride_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = out_stride_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gdk_texture_downloader_download_into (const GdkTextureDownloader* self /*none*/,  data /*none*/, gsize stride);
// void gdk_texture_downloader_download_into (const ::GdkTextureDownloader* self /*none*/, * data /*none*/, gsize stride);
// SKIP; inconsistent array info

// void gdk_texture_downloader_free (GdkTextureDownloader* self /*none*/);
// void gdk_texture_downloader_free (::GdkTextureDownloader* self /*none*/);
// IGNORE; marked ignore

// GdkMemoryFormat gdk_texture_downloader_get_format (const GdkTextureDownloader* self /*none*/);
// ::GdkMemoryFormat gdk_texture_downloader_get_format (const ::GdkTextureDownloader* self /*none*/);
Gdk::MemoryFormat base::TextureDownloaderBase::get_format () const noexcept
{
  typedef ::GdkMemoryFormat (*call_wrap_t) (const ::GdkTextureDownloader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_get_format;
  auto _temp_ret = call_wrap_v ((const ::GdkTextureDownloader*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkTexture* /*none*/ gdk_texture_downloader_get_texture (const GdkTextureDownloader* self /*none*/);
// ::GdkTexture* /*none*/ gdk_texture_downloader_get_texture (const ::GdkTextureDownloader* self /*none*/);
Gdk::Texture base::TextureDownloaderBase::get_texture () const noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (const ::GdkTextureDownloader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_get_texture;
  auto _temp_ret = call_wrap_v ((const ::GdkTextureDownloader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_texture_downloader_set_format (GdkTextureDownloader* self /*none*/, GdkMemoryFormat format);
// void gdk_texture_downloader_set_format (::GdkTextureDownloader* self /*none*/, ::GdkMemoryFormat format);
void base::TextureDownloaderBase::set_format (Gdk::MemoryFormat format) noexcept
{
  typedef void (*call_wrap_t) (::GdkTextureDownloader* self, ::GdkMemoryFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_set_format;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GdkTextureDownloader*) (gobj_()), (::GdkMemoryFormat) (format_to_c));
}

// void gdk_texture_downloader_set_texture (GdkTextureDownloader* self /*none*/, GdkTexture* texture /*none*/);
// void gdk_texture_downloader_set_texture (::GdkTextureDownloader* self /*none*/, ::GdkTexture* texture /*none*/);
void base::TextureDownloaderBase::set_texture (Gdk::Texture texture) noexcept
{
  typedef void (*call_wrap_t) (::GdkTextureDownloader* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_downloader_set_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GdkTextureDownloader*) (gobj_()), (::GdkTexture*) (texture_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/texturedownloader_extra_def_impl.hpp>)
#include <gdk/texturedownloader_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/texturedownloader_extra_impl.hpp>)
#include <gdk/texturedownloader_extra_impl.hpp>
#endif
#endif

#endif
