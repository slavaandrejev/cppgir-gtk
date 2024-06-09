// AUTO-GENERATED

#ifndef _GI_GDK_TEXTURE_HPP_
#define _GI_GDK_TEXTURE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Paintable;

class Texture;

namespace base {


#define GI_GDK_TEXTURE_BASE base::TextureBase
class TextureBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkTexture BaseObjectType;

TextureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_texture_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

GI_INLINE_DECL Gio::LoadableIcon interface_ (gi::interface_tag<Gio::LoadableIcon>);

GI_INLINE_DECL operator Gio::LoadableIcon ();

// GdkTexture* /*full*/ gdk_texture_new_for_pixbuf (GdkPixbuf* pixbuf /*none*/);
// ::GdkTexture* /*full*/ gdk_texture_new_for_pixbuf (::GdkPixbuf* pixbuf /*none*/);
static GI_INLINE_DECL Gdk::Texture new_for_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;

// GdkTexture* /*full*/ gdk_texture_new_from_bytes (GBytes* bytes /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_bytes (::GBytes* bytes /*none*/, GError ** error);
static GI_INLINE_DECL Gdk::Texture new_from_bytes (GLib::Bytes_Ref bytes);
static GI_INLINE_DECL Gdk::Texture new_from_bytes (GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept;

// GdkTexture* /*full*/ gdk_texture_new_from_file (GFile* file /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_file (::GFile* file /*none*/, GError ** error);
static GI_INLINE_DECL Gdk::Texture new_from_file (Gio::File file);
static GI_INLINE_DECL Gdk::Texture new_from_file (Gio::File file, GLib::Error * _error) noexcept;

// GdkTexture* /*full*/ gdk_texture_new_from_filename (const char* path /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_filename (const char* path /*none*/, GError ** error);
static GI_INLINE_DECL Gdk::Texture new_from_filename (const gi::cstring_v path);
static GI_INLINE_DECL Gdk::Texture new_from_filename (const gi::cstring_v path, GLib::Error * _error) noexcept;

// GdkTexture* /*full*/ gdk_texture_new_from_resource (const char* resource_path /*none*/);
// ::GdkTexture* /*full*/ gdk_texture_new_from_resource (const char* resource_path /*none*/);
static GI_INLINE_DECL Gdk::Texture new_from_resource (const gi::cstring_v resource_path) noexcept;

// void gdk_texture_download (GdkTexture* texture /*none*/,  data /*none*/, gsize stride);
// void gdk_texture_download (::GdkTexture* texture /*none*/, * data /*none*/, gsize stride);
// SKIP; inconsistent array info

// GdkMemoryFormat gdk_texture_get_format (GdkTexture* self /*none*/);
// ::GdkMemoryFormat gdk_texture_get_format (::GdkTexture* self /*none*/);
GI_INLINE_DECL Gdk::MemoryFormat get_format () noexcept;

// int gdk_texture_get_height (GdkTexture* texture /*none*/);
// gint gdk_texture_get_height (::GdkTexture* texture /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// int gdk_texture_get_width (GdkTexture* texture /*none*/);
// gint gdk_texture_get_width (::GdkTexture* texture /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// gboolean gdk_texture_save_to_png (GdkTexture* texture /*none*/, const char* filename /*none*/);
// gboolean gdk_texture_save_to_png (::GdkTexture* texture /*none*/, const char* filename /*none*/);
GI_INLINE_DECL bool save_to_png (const gi::cstring_v filename) noexcept;

// GBytes* /*full*/ gdk_texture_save_to_png_bytes (GdkTexture* texture /*none*/);
// ::GBytes* /*full*/ gdk_texture_save_to_png_bytes (::GdkTexture* texture /*none*/);
GI_INLINE_DECL GLib::Bytes save_to_png_bytes () noexcept;

// gboolean gdk_texture_save_to_tiff (GdkTexture* texture /*none*/, const char* filename /*none*/);
// gboolean gdk_texture_save_to_tiff (::GdkTexture* texture /*none*/, const char* filename /*none*/);
GI_INLINE_DECL bool save_to_tiff (const gi::cstring_v filename) noexcept;

// GBytes* /*full*/ gdk_texture_save_to_tiff_bytes (GdkTexture* texture /*none*/);
// ::GBytes* /*full*/ gdk_texture_save_to_tiff_bytes (::GdkTexture* texture /*none*/);
GI_INLINE_DECL GLib::Bytes save_to_tiff_bytes () noexcept;

gi::property_proxy<gint, base::TextureBase> property_height()
{ return gi::property_proxy<gint, base::TextureBase> (*this, "height"); }
const gi::property_proxy<gint, base::TextureBase> property_height() const
{ return gi::property_proxy<gint, base::TextureBase> (*this, "height"); }

gi::property_proxy<gint, base::TextureBase> property_width()
{ return gi::property_proxy<gint, base::TextureBase> (*this, "width"); }
const gi::property_proxy<gint, base::TextureBase> property_width() const
{ return gi::property_proxy<gint, base::TextureBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/texture_extra_def.hpp>)
#include <gdk/texture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/texture_extra.hpp>)
#include <gdk/texture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Texture : public GI_GDK_TEXTURE_BASE
{ typedef GI_GDK_TEXTURE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkTexture>
{ typedef Gdk::Texture type; }; 

} // namespace repository

} // namespace gi

#endif
