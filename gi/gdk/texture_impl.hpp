// AUTO-GENERATED

#ifndef _GI_GDK_TEXTURE_IMPL_HPP_
#define _GI_GDK_TEXTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

Gdk::Paintable TextureBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextureBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

Gio::Icon TextureBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextureBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

Gio::LoadableIcon TextureBase::interface_ (gi::interface_tag<Gio::LoadableIcon>)
{ return gi::wrap ((Gio::LoadableIcon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextureBase::operator Gio::LoadableIcon ()
{ return interface_ (gi::interface_tag<Gio::LoadableIcon>()); }

// GdkTexture* /*full*/ gdk_texture_new_for_pixbuf (GdkPixbuf* pixbuf /*none*/);
// ::GdkTexture* /*full*/ gdk_texture_new_for_pixbuf (::GdkPixbuf* pixbuf /*none*/);
Gdk::Texture base::TextureBase::new_for_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_for_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_texture_new_from_bytes (GBytes* bytes /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_bytes (::GBytes* bytes /*none*/, GError ** error);
Gdk::Texture base::TextureBase::new_from_bytes (GLib::Bytes_Ref bytes)
{
  typedef ::GdkTexture* (*call_wrap_t) (::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Texture base::TextureBase::new_from_bytes (GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_texture_new_from_file (GFile* file /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_file (::GFile* file /*none*/, GError ** error);
Gdk::Texture base::TextureBase::new_from_file (Gio::File file)
{
  typedef ::GdkTexture* (*call_wrap_t) (::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Texture base::TextureBase::new_from_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_texture_new_from_filename (const char* path /*none*/, GError ** error);
// ::GdkTexture* /*full*/ gdk_texture_new_from_filename (const char* path /*none*/, GError ** error);
Gdk::Texture base::TextureBase::new_from_filename (const gi::cstring_v path)
{
  typedef ::GdkTexture* (*call_wrap_t) (const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_filename;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Texture base::TextureBase::new_from_filename (const gi::cstring_v path, GLib::Error * _error) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_filename;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_texture_new_from_resource (const char* resource_path /*none*/);
// ::GdkTexture* /*full*/ gdk_texture_new_from_resource (const char* resource_path /*none*/);
Gdk::Texture base::TextureBase::new_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_texture_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_texture_download (GdkTexture* texture /*none*/,  data /*none*/, gsize stride);
// void gdk_texture_download (::GdkTexture* texture /*none*/, * data /*none*/, gsize stride);
// SKIP; inconsistent array info

// GdkMemoryFormat gdk_texture_get_format (GdkTexture* self /*none*/);
// ::GdkMemoryFormat gdk_texture_get_format (::GdkTexture* self /*none*/);
Gdk::MemoryFormat base::TextureBase::get_format () noexcept
{
  typedef ::GdkMemoryFormat (*call_wrap_t) (::GdkTexture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_get_format;
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gdk_texture_get_height (GdkTexture* texture /*none*/);
// gint gdk_texture_get_height (::GdkTexture* texture /*none*/);
gint base::TextureBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_get_height;
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()));
  return _temp_ret;
}

// int gdk_texture_get_width (GdkTexture* texture /*none*/);
// gint gdk_texture_get_width (::GdkTexture* texture /*none*/);
gint base::TextureBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_get_width;
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_texture_save_to_png (GdkTexture* texture /*none*/, const char* filename /*none*/);
// gboolean gdk_texture_save_to_png (::GdkTexture* texture /*none*/, const char* filename /*none*/);
bool base::TextureBase::save_to_png (const gi::cstring_v filename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkTexture* texture, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_save_to_png;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()), (const char*) (filename_to_c));
  return _temp_ret;
}

// GBytes* /*full*/ gdk_texture_save_to_png_bytes (GdkTexture* texture /*none*/);
// ::GBytes* /*full*/ gdk_texture_save_to_png_bytes (::GdkTexture* texture /*none*/);
GLib::Bytes base::TextureBase::save_to_png_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_save_to_png_bytes;
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_texture_save_to_tiff (GdkTexture* texture /*none*/, const char* filename /*none*/);
// gboolean gdk_texture_save_to_tiff (::GdkTexture* texture /*none*/, const char* filename /*none*/);
bool base::TextureBase::save_to_tiff (const gi::cstring_v filename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkTexture* texture, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_save_to_tiff;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()), (const char*) (filename_to_c));
  return _temp_ret;
}

// GBytes* /*full*/ gdk_texture_save_to_tiff_bytes (GdkTexture* texture /*none*/);
// ::GBytes* /*full*/ gdk_texture_save_to_tiff_bytes (::GdkTexture* texture /*none*/);
GLib::Bytes base::TextureBase::save_to_tiff_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_save_to_tiff_bytes;
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/texture_extra_def_impl.hpp>)
#include <gdk/texture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/texture_extra_impl.hpp>)
#include <gdk/texture_extra_impl.hpp>
#endif
#endif

#endif
