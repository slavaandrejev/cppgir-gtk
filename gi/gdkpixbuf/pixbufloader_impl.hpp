// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFLOADER_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFLOADER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new ();
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new ();
GdkPixbuf::PixbufLoader base::PixbufLoaderBase::new_ () noexcept
{
  typedef ::GdkPixbufLoader* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_loader_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_mime_type (const char* mime_type /*none*/, GError ** error);
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_mime_type (const char* mime_type /*none*/, GError ** error);
GdkPixbuf::PixbufLoader base::PixbufLoaderBase::new_with_mime_type (const gi::cstring_v mime_type)
{
  typedef ::GdkPixbufLoader* (*call_wrap_t) (const char* mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_loader_new_with_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufLoader base::PixbufLoaderBase::new_with_mime_type (const gi::cstring_v mime_type, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufLoader* (*call_wrap_t) (const char* mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_loader_new_with_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_type (const char* image_type /*none*/, GError ** error);
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_type (const char* image_type /*none*/, GError ** error);
GdkPixbuf::PixbufLoader base::PixbufLoaderBase::new_with_type (const gi::cstring_v image_type)
{
  typedef ::GdkPixbufLoader* (*call_wrap_t) (const char* image_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_loader_new_with_type;
  auto image_type_to_c = gi::unwrap (image_type, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (image_type_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufLoader base::PixbufLoaderBase::new_with_type (const gi::cstring_v image_type, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufLoader* (*call_wrap_t) (const char* image_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_loader_new_with_type;
  auto image_type_to_c = gi::unwrap (image_type, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (image_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_pixbuf_loader_close (GdkPixbufLoader* loader /*none*/, GError ** error);
// gboolean gdk_pixbuf_loader_close (::GdkPixbufLoader* loader /*none*/, GError ** error);
bool base::PixbufLoaderBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_close;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufLoaderBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_close;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GdkPixbufAnimation* /*none,nullable*/ gdk_pixbuf_loader_get_animation (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbufAnimation* /*none,nullable*/ gdk_pixbuf_loader_get_animation (::GdkPixbufLoader* loader /*none*/);
GdkPixbuf::PixbufAnimation base::PixbufLoaderBase::get_animation () noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GdkPixbufLoader* loader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_get_animation;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_loader_get_format (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_loader_get_format (::GdkPixbufLoader* loader /*none*/);
GdkPixbuf::PixbufFormat_Ref base::PixbufLoaderBase::get_format () noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (::GdkPixbufLoader* loader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_get_format;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPixbuf* /*none,nullable*/ gdk_pixbuf_loader_get_pixbuf (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbuf* /*none,nullable*/ gdk_pixbuf_loader_get_pixbuf (::GdkPixbufLoader* loader /*none*/);
GdkPixbuf::Pixbuf base::PixbufLoaderBase::get_pixbuf () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufLoader* loader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_pixbuf_loader_set_size (GdkPixbufLoader* loader /*none*/, int width, int height);
// void gdk_pixbuf_loader_set_size (::GdkPixbufLoader* loader /*none*/, gint width, gint height);
void base::PixbufLoaderBase::set_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufLoader* loader, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_set_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// gboolean gdk_pixbuf_loader_write (GdkPixbufLoader* loader /*none*/, const guchar* buf /*none*/, gsize count, GError ** error);
// gboolean gdk_pixbuf_loader_write (::GdkPixbufLoader* loader /*none*/, const guint8* buf /*none*/, gsize count, GError ** error);
bool base::PixbufLoaderBase::write (const guint8 * buf, gsize count)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, const guint8* buf, gsize count, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_write;
  auto buf_to_c = buf;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (const guint8*) (buf_to_c), (gsize) (count), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufLoaderBase::write (const guint8 * buf, gsize count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, const guint8* buf, gsize count, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_write;
  auto buf_to_c = buf;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (const guint8*) (buf_to_c), (gsize) (count), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gdk_pixbuf_loader_write_bytes (GdkPixbufLoader* loader /*none*/, GBytes* buffer /*none*/, GError ** error);
// gboolean gdk_pixbuf_loader_write_bytes (::GdkPixbufLoader* loader /*none*/, ::GBytes* buffer /*none*/, GError ** error);
bool base::PixbufLoaderBase::write_bytes (GLib::Bytes_Ref buffer)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, ::GBytes* buffer, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_write_bytes;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (::GBytes*) (buffer_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufLoaderBase::write_bytes (GLib::Bytes_Ref buffer, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufLoader* loader, ::GBytes* buffer, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_loader_write_bytes;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (::GBytes*) (buffer_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}






} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufloader_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra_impl.hpp>)
#include <gdkpixbuf/pixbufloader_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {

void PixbufLoaderClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GdkPixbufLoaderClass *methods = (::GdkPixbufLoaderClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.area_prepared) methods->area_prepared = (decltype (methods->area_prepared)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::area_prepared_>;
  if (init_data.area_updated) methods->area_updated = (decltype (methods->area_updated)) detail::method_wrapper<self, void (*) (gint x, gint y, gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::area_updated_>;
  if (init_data.closed) methods->closed = (decltype (methods->closed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::closed_>;
  if (init_data.size_prepared) methods->size_prepared = (decltype (methods->size_prepared)) detail::method_wrapper<self, void (*) (gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::size_prepared_>;
}

// void PixbufLoader::area_prepared (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::area_prepared (::GdkPixbufLoader* loader /*none*/);
void PixbufLoaderClass::area_prepared_ () noexcept
{
  if (!get_struct_()->area_prepared) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkPixbufLoader* loader);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->area_prepared;
  call_wrap_v ((::GdkPixbufLoader*) (gobj_()));
}

// void PixbufLoader::area_updated (GdkPixbufLoader* loader /*none*/, int x, int y, int width, int height);
// void PixbufLoader::area_updated (::GdkPixbufLoader* loader /*none*/, gint x, gint y, gint width, gint height);
void PixbufLoaderClass::area_updated_ (gint x, gint y, gint width, gint height) noexcept
{
  if (!get_struct_()->area_updated) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkPixbufLoader* loader, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->area_updated;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void PixbufLoader::closed (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::closed (::GdkPixbufLoader* loader /*none*/);
void PixbufLoaderClass::closed_ () noexcept
{
  if (!get_struct_()->closed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkPixbufLoader* loader);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closed;
  call_wrap_v ((::GdkPixbufLoader*) (gobj_()));
}

// void PixbufLoader::size_prepared (GdkPixbufLoader* loader /*none*/, int width, int height);
// void PixbufLoader::size_prepared (::GdkPixbufLoader* loader /*none*/, gint width, gint height);
void PixbufLoaderClass::size_prepared_ (gint width, gint height) noexcept
{
  if (!get_struct_()->size_prepared) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkPixbufLoader* loader, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->size_prepared;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GdkPixbufLoader*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

} // namespace internal

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
