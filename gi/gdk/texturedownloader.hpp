// AUTO-GENERATED

#ifndef _GI_GDK_TEXTUREDOWNLOADER_HPP_
#define _GI_GDK_TEXTUREDOWNLOADER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Texture;
class TextureDownloader_Ref;

class TextureDownloader;

namespace base {


#define GI_GDK_TEXTUREDOWNLOADER_BASE base::TextureDownloaderBase
class TextureDownloaderBase : public gi::detail::GBoxedWrapperBase<TextureDownloaderBase, ::GdkTextureDownloader>
{
typedef gi::detail::GBoxedWrapperBase<TextureDownloaderBase, ::GdkTextureDownloader> super_type;
public:

TextureDownloaderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_texture_downloader_get_type(); } 

// GdkTextureDownloader* /*full*/ gdk_texture_downloader_new (GdkTexture* texture /*none*/);
// ::GdkTextureDownloader* /*full*/ gdk_texture_downloader_new (::GdkTexture* texture /*none*/);
static GI_INLINE_DECL Gdk::TextureDownloader new_ (Gdk::Texture texture) noexcept;

// GdkTextureDownloader* /*full*/ gdk_texture_downloader_copy (const GdkTextureDownloader* self /*none*/);
// ::GdkTextureDownloader* /*full*/ gdk_texture_downloader_copy (const ::GdkTextureDownloader* self /*none*/);
GI_INLINE_DECL Gdk::TextureDownloader copy () const noexcept;

// GBytes* /*full*/ gdk_texture_downloader_download_bytes (const GdkTextureDownloader* self /*none*/, gsize* out_stride);
// ::GBytes* /*full*/ gdk_texture_downloader_download_bytes (const ::GdkTextureDownloader* self /*none*/, gsize* out_stride);
GI_INLINE_DECL GLib::Bytes download_bytes (gsize & out_stride) const noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, gsize> download_bytes () const noexcept;

// void gdk_texture_downloader_download_into (const GdkTextureDownloader* self /*none*/,  data /*none*/, gsize stride);
// void gdk_texture_downloader_download_into (const ::GdkTextureDownloader* self /*none*/, * data /*none*/, gsize stride);
// SKIP; inconsistent array info

// void gdk_texture_downloader_free (GdkTextureDownloader* self /*none*/);
// void gdk_texture_downloader_free (::GdkTextureDownloader* self /*none*/);
// IGNORE; marked ignore

// GdkMemoryFormat gdk_texture_downloader_get_format (const GdkTextureDownloader* self /*none*/);
// ::GdkMemoryFormat gdk_texture_downloader_get_format (const ::GdkTextureDownloader* self /*none*/);
GI_INLINE_DECL Gdk::MemoryFormat get_format () const noexcept;

// GdkTexture* /*none*/ gdk_texture_downloader_get_texture (const GdkTextureDownloader* self /*none*/);
// ::GdkTexture* /*none*/ gdk_texture_downloader_get_texture (const ::GdkTextureDownloader* self /*none*/);
GI_INLINE_DECL Gdk::Texture get_texture () const noexcept;

// void gdk_texture_downloader_set_format (GdkTextureDownloader* self /*none*/, GdkMemoryFormat format);
// void gdk_texture_downloader_set_format (::GdkTextureDownloader* self /*none*/, ::GdkMemoryFormat format);
GI_INLINE_DECL void set_format (Gdk::MemoryFormat format) noexcept;

// void gdk_texture_downloader_set_texture (GdkTextureDownloader* self /*none*/, GdkTexture* texture /*none*/);
// void gdk_texture_downloader_set_texture (::GdkTextureDownloader* self /*none*/, ::GdkTexture* texture /*none*/);
GI_INLINE_DECL void set_texture (Gdk::Texture texture) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/texturedownloader_extra_def.hpp>)
#include <gdk/texturedownloader_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/texturedownloader_extra.hpp>)
#include <gdk/texturedownloader_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class TextureDownloader_Ref;

class TextureDownloader : public gi::detail::GBoxedWrapper<TextureDownloader, ::GdkTextureDownloader, GI_GDK_TEXTUREDOWNLOADER_BASE, TextureDownloader_Ref>
{ typedef gi::detail::GBoxedWrapper<TextureDownloader, ::GdkTextureDownloader, GI_GDK_TEXTUREDOWNLOADER_BASE, TextureDownloader_Ref> super_type; using super_type::super_type; };


class TextureDownloader_Ref : public gi::detail::GBoxedRefWrapper<TextureDownloader, ::GdkTextureDownloader, GI_GDK_TEXTUREDOWNLOADER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TextureDownloader, ::GdkTextureDownloader, GI_GDK_TEXTUREDOWNLOADER_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkTextureDownloader>
{ typedef Gdk::TextureDownloader type; }; 

} // namespace repository

} // namespace gi

#endif
