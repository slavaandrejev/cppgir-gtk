// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUF_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUF_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

Gio::Icon PixbufBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PixbufBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

Gio::LoadableIcon PixbufBase::interface_ (gi::interface_tag<Gio::LoadableIcon>)
{ return gi::wrap ((Gio::LoadableIcon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PixbufBase::operator Gio::LoadableIcon ()
{ return interface_ (gi::interface_tag<Gio::LoadableIcon>()); }

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new (GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
GdkPixbuf::Pixbuf base::PixbufBase::new_ (GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new;
  auto height_to_c = height;
  auto width_to_c = width;
  auto bits_per_sample_to_c = bits_per_sample;
  auto has_alpha_to_c = has_alpha;
  auto colorspace_to_c = gi::unwrap (colorspace);
  auto _temp_ret = call_wrap_v ((::GdkColorspace) (colorspace_to_c), (gboolean) (has_alpha_to_c), (gint) (bits_per_sample_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_bytes (GBytes* data /*none*/, GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height, int rowstride);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_bytes (::GBytes* data /*none*/, ::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_bytes (GLib::Bytes_Ref data, GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GBytes* data, ::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_bytes;
  auto rowstride_to_c = rowstride;
  auto height_to_c = height;
  auto width_to_c = width;
  auto bits_per_sample_to_c = bits_per_sample;
  auto has_alpha_to_c = has_alpha;
  auto colorspace_to_c = gi::unwrap (colorspace);
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c), (::GdkColorspace) (colorspace_to_c), (gboolean) (has_alpha_to_c), (gint) (bits_per_sample_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint) (rowstride_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_data ( data /*none*/, GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height, int rowstride, GdkPixbufDestroyNotify destroy_fn /*none,nullable*/, gpointer destroy_fn_data);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_data (* data /*none*/, ::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride,  destroy_fn /*none,nullable*/, void* destroy_fn_data);
// SKIP; inconsistent array info

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file (const char* filename /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file (const char* filename /*none*/, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file (const gi::cstring_v filename)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_scale (const char* filename /*none*/, int width, int height, gboolean preserve_aspect_ratio, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_scale (const char* filename /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file_at_scale (const gi::cstring_v filename, gint width, gint height, gboolean preserve_aspect_ratio)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file_at_scale;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file_at_scale (const gi::cstring_v filename, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file_at_scale;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_size (const char* filename /*none*/, int width, int height, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_size (const char* filename /*none*/, gint width, gint height, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file_at_size (const gi::cstring_v filename, gint width, gint height)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, gint width, gint height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file_at_size;
  auto height_to_c = height;
  auto width_to_c = width;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (width_to_c), (gint) (height_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_file_at_size (const gi::cstring_v filename, gint width, gint height, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* filename, gint width, gint height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_file_at_size;
  auto height_to_c = height;
  auto width_to_c = width;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (width_to_c), (gint) (height_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_inline (gint data_length, const guint8* data /*none*/, gboolean copy_pixels, GError ** error);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_inline (gint data_length, const guint8* data /*none*/, gboolean copy_pixels, GError ** error);
// IGNORE; deprecated

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource (const char* resource_path /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource (const char* resource_path /*none*/, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_resource (const gi::cstring_v resource_path)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource_at_scale (const char* resource_path /*none*/, int width, int height, gboolean preserve_aspect_ratio, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource_at_scale (const char* resource_path /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_resource_at_scale (const gi::cstring_v resource_path, gint width, gint height, gboolean preserve_aspect_ratio)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* resource_path, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_resource_at_scale;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_resource_at_scale (const gi::cstring_v resource_path, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char* resource_path, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_resource_at_scale;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream (Gio::InputStream stream)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_at_scale (GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_at_scale (::GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_at_scale;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_at_scale;
  auto cancellable_to_c = nullptr;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_at_scale;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_at_scale;
  auto cancellable_to_c = nullptr;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_finish (Gio::AsyncResult async_result)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::Pixbuf base::PixbufBase::new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_xpm_data (const char** data /*none*/);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_xpm_data (const char** data /*none*/);
GdkPixbuf::Pixbuf base::PixbufBase::new_from_xpm_data (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> data) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const char** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_new_from_xpm_data;
  auto data_w = unwrap (std::move(data), gi::transfer_none);
  auto data_to_c = data_w;
  auto _temp_ret = call_wrap_v ((const char**) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint gdk_pixbuf_calculate_rowstride (GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height);
// gint gdk_pixbuf_calculate_rowstride (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
gint base::PixbufBase::calculate_rowstride (GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height) noexcept
{
  typedef gint (*call_wrap_t) (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_calculate_rowstride;
  auto height_to_c = height;
  auto width_to_c = width;
  auto bits_per_sample_to_c = bits_per_sample;
  auto has_alpha_to_c = has_alpha;
  auto colorspace_to_c = gi::unwrap (colorspace);
  auto _temp_ret = call_wrap_v ((::GdkColorspace) (colorspace_to_c), (gboolean) (has_alpha_to_c), (gint) (bits_per_sample_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return _temp_ret;
}

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info (const gchar* filename /*none*/, gint* width, gint* height);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info (const char* filename /*none*/, gint* width, gint* height);
GdkPixbuf::PixbufFormat_Ref base::PixbufBase::get_file_info (const gi::cstring_v filename, gint * width, gint * height) noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (const char* filename, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info;
  gint height_o {};
  gint width_o {};
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> base::PixbufBase::get_file_info (const gi::cstring_v filename) noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (const char* filename, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info;
  gint height_o {};
  gint width_o {};
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = width_o;
  auto &&tmp_return_3 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gdk_pixbuf_get_file_info_async (const gchar* filename /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_get_file_info_async (const char* filename /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PixbufBase::get_file_info_async (const gi::cstring_v filename, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* filename, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((const char*) (filename_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufBase::get_file_info_async (const gi::cstring_v filename, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* filename, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((const char*) (filename_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info_finish (GAsyncResult* async_result /*none*/, gint* width, gint* height, GError ** error);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info_finish (::GAsyncResult* async_result /*none*/, gint* width, gint* height, GError ** error);
GdkPixbuf::PixbufFormat_Ref base::PixbufBase::get_file_info_finish (Gio::AsyncResult async_result, gint & width, gint & height)
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (::GAsyncResult* async_result, gint* width, gint* height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_finish;
  gint height_o {};
  gint width_o {};
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), (gint*) (&width_o), (gint*) (&height_o), &error);
  height = height_o;
  width = width_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GdkPixbuf::PixbufFormat_Ref base::PixbufBase::get_file_info_finish (Gio::AsyncResult async_result, gint & width, gint & height, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (::GAsyncResult* async_result, gint* width, gint* height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_finish;
  gint height_o {};
  gint width_o {};
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), (gint*) (&width_o), (gint*) (&height_o), _error ? &_error_o : nullptr);
  height = height_o;
  width = width_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> base::PixbufBase::get_file_info_finish (Gio::AsyncResult async_result)
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (::GAsyncResult* async_result, gint* width, gint* height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_finish;
  gint height_o {};
  gint width_o {};
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), (gint*) (&width_o), (gint*) (&height_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = width_o;
  auto &&tmp_return_3 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> base::PixbufBase::get_file_info_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (::GAsyncResult* async_result, gint* width, gint* height, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_file_info_finish;
  gint height_o {};
  gint width_o {};
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), (gint*) (&width_o), (gint*) (&height_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = width_o;
  auto &&tmp_return_3 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GSList* /*container*/ gdk_pixbuf_get_formats ();
// ::GSList* /*container*/ gdk_pixbuf_get_formats ();
gi::Collection<GSList, ::GdkPixbufFormat*, gi::transfer_container_t> base::PixbufBase::get_formats () noexcept
{
  typedef ::GSList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_formats;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<GSList, ::GdkPixbufFormat*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// gboolean gdk_pixbuf_init_modules (const char* path /*none*/, GError ** error);
// gboolean gdk_pixbuf_init_modules (const char* path /*none*/, GError ** error);
bool base::PixbufBase::init_modules (const gi::cstring_v path)
{
  typedef gboolean (*call_wrap_t) (const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_init_modules;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::init_modules (const gi::cstring_v path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_init_modules;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gdk_pixbuf_new_from_stream_async (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_new_from_stream_async (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PixbufBase::new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufBase::new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gdk_pixbuf_new_from_stream_at_scale_async (GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_new_from_stream_at_scale_async (::GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PixbufBase::new_from_stream_at_scale_async (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_new_from_stream_at_scale_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufBase::new_from_stream_at_scale_async (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_new_from_stream_at_scale_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto preserve_aspect_ratio_to_c = preserve_aspect_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (gint) (width_to_c), (gint) (height_to_c), (gboolean) (preserve_aspect_ratio_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_pixbuf_save_to_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// gboolean gdk_pixbuf_save_to_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
bool base::PixbufBase::save_to_stream_finish (Gio::AsyncResult async_result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::save_to_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GdkPixbuf* /*full*/ gdk_pixbuf_add_alpha (const GdkPixbuf* pixbuf /*none*/, gboolean substitute_color, guchar r, guchar g, guchar b);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_add_alpha (const ::GdkPixbuf* pixbuf /*none*/, gboolean substitute_color, guint8 r, guint8 g, guint8 b);
GdkPixbuf::Pixbuf base::PixbufBase::add_alpha (gboolean substitute_color, guint8 r, guint8 g, guint8 b) const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* pixbuf, gboolean substitute_color, guint8 r, guint8 g, guint8 b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_add_alpha;
  auto b_to_c = b;
  auto g_to_c = g;
  auto r_to_c = r;
  auto substitute_color_to_c = substitute_color;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (gboolean) (substitute_color_to_c), (guint8) (r_to_c), (guint8) (g_to_c), (guint8) (b_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_apply_embedded_orientation (GdkPixbuf* src /*none*/);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_apply_embedded_orientation (::GdkPixbuf* src /*none*/);
GdkPixbuf::Pixbuf base::PixbufBase::apply_embedded_orientation () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbuf* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_apply_embedded_orientation;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_pixbuf_composite (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type, int overall_alpha);
// void gdk_pixbuf_composite (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha);
void base::PixbufBase::composite (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type, gint overall_alpha) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkPixbuf* src, ::GdkPixbuf* dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_composite;
  auto overall_alpha_to_c = overall_alpha;
  auto interp_type_to_c = gi::unwrap (interp_type);
  auto scale_y_to_c = scale_y;
  auto scale_x_to_c = scale_x;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto dest_height_to_c = dest_height;
  auto dest_width_to_c = dest_width;
  auto dest_y_to_c = dest_y;
  auto dest_x_to_c = dest_x;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (::GdkPixbuf*) (dest_to_c), (gint) (dest_x_to_c), (gint) (dest_y_to_c), (gint) (dest_width_to_c), (gint) (dest_height_to_c), (gdouble) (offset_x_to_c), (gdouble) (offset_y_to_c), (gdouble) (scale_x_to_c), (gdouble) (scale_y_to_c), (::GdkInterpType) (interp_type_to_c), (gint) (overall_alpha_to_c));
}

// void gdk_pixbuf_composite_color (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type, int overall_alpha, int check_x, int check_y, int check_size, guint32 color1, guint32 color2);
// void gdk_pixbuf_composite_color (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha, gint check_x, gint check_y, gint check_size, guint32 color1, guint32 color2);
void base::PixbufBase::composite_color (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type, gint overall_alpha, gint check_x, gint check_y, gint check_size, guint32 color1, guint32 color2) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkPixbuf* src, ::GdkPixbuf* dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha, gint check_x, gint check_y, gint check_size, guint32 color1, guint32 color2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_composite_color;
  auto color2_to_c = color2;
  auto color1_to_c = color1;
  auto check_size_to_c = check_size;
  auto check_y_to_c = check_y;
  auto check_x_to_c = check_x;
  auto overall_alpha_to_c = overall_alpha;
  auto interp_type_to_c = gi::unwrap (interp_type);
  auto scale_y_to_c = scale_y;
  auto scale_x_to_c = scale_x;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto dest_height_to_c = dest_height;
  auto dest_width_to_c = dest_width;
  auto dest_y_to_c = dest_y;
  auto dest_x_to_c = dest_x;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (::GdkPixbuf*) (dest_to_c), (gint) (dest_x_to_c), (gint) (dest_y_to_c), (gint) (dest_width_to_c), (gint) (dest_height_to_c), (gdouble) (offset_x_to_c), (gdouble) (offset_y_to_c), (gdouble) (scale_x_to_c), (gdouble) (scale_y_to_c), (::GdkInterpType) (interp_type_to_c), (gint) (overall_alpha_to_c), (gint) (check_x_to_c), (gint) (check_y_to_c), (gint) (check_size_to_c), (guint32) (color1_to_c), (guint32) (color2_to_c));
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_composite_color_simple (const GdkPixbuf* src /*none*/, int dest_width, int dest_height, GdkInterpType interp_type, int overall_alpha, int check_size, guint32 color1, guint32 color2);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_composite_color_simple (const ::GdkPixbuf* src /*none*/, gint dest_width, gint dest_height, ::GdkInterpType interp_type, gint overall_alpha, gint check_size, guint32 color1, guint32 color2);
GdkPixbuf::Pixbuf base::PixbufBase::composite_color_simple (gint dest_width, gint dest_height, GdkPixbuf::InterpType interp_type, gint overall_alpha, gint check_size, guint32 color1, guint32 color2) const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* src, gint dest_width, gint dest_height, ::GdkInterpType interp_type, gint overall_alpha, gint check_size, guint32 color1, guint32 color2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_composite_color_simple;
  auto color2_to_c = color2;
  auto color1_to_c = color1;
  auto check_size_to_c = check_size;
  auto overall_alpha_to_c = overall_alpha;
  auto interp_type_to_c = gi::unwrap (interp_type);
  auto dest_height_to_c = dest_height;
  auto dest_width_to_c = dest_width;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (gint) (dest_width_to_c), (gint) (dest_height_to_c), (::GdkInterpType) (interp_type_to_c), (gint) (overall_alpha_to_c), (gint) (check_size_to_c), (guint32) (color1_to_c), (guint32) (color2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_copy (const GdkPixbuf* pixbuf /*none*/);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_copy (const ::GdkPixbuf* pixbuf /*none*/);
GdkPixbuf::Pixbuf base::PixbufBase::copy () const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_copy;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_pixbuf_copy_area (const GdkPixbuf* src_pixbuf /*none*/, int src_x, int src_y, int width, int height, GdkPixbuf* dest_pixbuf /*none*/, int dest_x, int dest_y);
// void gdk_pixbuf_copy_area (const ::GdkPixbuf* src_pixbuf /*none*/, gint src_x, gint src_y, gint width, gint height, ::GdkPixbuf* dest_pixbuf /*none*/, gint dest_x, gint dest_y);
void base::PixbufBase::copy_area (gint src_x, gint src_y, gint width, gint height, GdkPixbuf::Pixbuf dest_pixbuf, gint dest_x, gint dest_y) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkPixbuf* src_pixbuf, gint src_x, gint src_y, gint width, gint height, ::GdkPixbuf* dest_pixbuf, gint dest_x, gint dest_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_copy_area;
  auto dest_y_to_c = dest_y;
  auto dest_x_to_c = dest_x;
  auto dest_pixbuf_to_c = gi::unwrap (dest_pixbuf, gi::transfer_none);
  auto height_to_c = height;
  auto width_to_c = width;
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint) (width_to_c), (gint) (height_to_c), (::GdkPixbuf*) (dest_pixbuf_to_c), (gint) (dest_x_to_c), (gint) (dest_y_to_c));
}

// gboolean gdk_pixbuf_copy_options (GdkPixbuf* src_pixbuf /*none*/, GdkPixbuf* dest_pixbuf /*none*/);
// gboolean gdk_pixbuf_copy_options (::GdkPixbuf* src_pixbuf /*none*/, ::GdkPixbuf* dest_pixbuf /*none*/);
bool base::PixbufBase::copy_options (GdkPixbuf::Pixbuf dest_pixbuf) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* src_pixbuf, ::GdkPixbuf* dest_pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_copy_options;
  auto dest_pixbuf_to_c = gi::unwrap (dest_pixbuf, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GdkPixbuf*) (dest_pixbuf_to_c));
  return _temp_ret;
}

// void gdk_pixbuf_fill (GdkPixbuf* pixbuf /*none*/, guint32 pixel);
// void gdk_pixbuf_fill (::GdkPixbuf* pixbuf /*none*/, guint32 pixel);
void base::PixbufBase::fill (guint32 pixel) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbuf* pixbuf, guint32 pixel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_fill;
  auto pixel_to_c = pixel;
  call_wrap_v ((::GdkPixbuf*) (gobj_()), (guint32) (pixel_to_c));
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_flip (const GdkPixbuf* src /*none*/, gboolean horizontal);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_flip (const ::GdkPixbuf* src /*none*/, gboolean horizontal);
GdkPixbuf::Pixbuf base::PixbufBase::flip (gboolean horizontal) const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* src, gboolean horizontal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_flip;
  auto horizontal_to_c = horizontal;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (gboolean) (horizontal_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gdk_pixbuf_get_bits_per_sample (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_bits_per_sample (const ::GdkPixbuf* pixbuf /*none*/);
gint base::PixbufBase::get_bits_per_sample () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_bits_per_sample;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// gsize gdk_pixbuf_get_byte_length (const GdkPixbuf* pixbuf /*none*/);
// gsize gdk_pixbuf_get_byte_length (const ::GdkPixbuf* pixbuf /*none*/);
gsize base::PixbufBase::get_byte_length () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_byte_length;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// GdkColorspace gdk_pixbuf_get_colorspace (const GdkPixbuf* pixbuf /*none*/);
// ::GdkColorspace gdk_pixbuf_get_colorspace (const ::GdkPixbuf* pixbuf /*none*/);
GdkPixbuf::Colorspace base::PixbufBase::get_colorspace () const noexcept
{
  typedef ::GdkColorspace (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_colorspace;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_pixbuf_get_has_alpha (const GdkPixbuf* pixbuf /*none*/);
// gboolean gdk_pixbuf_get_has_alpha (const ::GdkPixbuf* pixbuf /*none*/);
bool base::PixbufBase::get_has_alpha () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_has_alpha;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// int gdk_pixbuf_get_height (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_height (const ::GdkPixbuf* pixbuf /*none*/);
gint base::PixbufBase::get_height () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_height;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// int gdk_pixbuf_get_n_channels (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_n_channels (const ::GdkPixbuf* pixbuf /*none*/);
gint base::PixbufBase::get_n_channels () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_n_channels;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ gdk_pixbuf_get_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/);
// const char* /*none,nullable*/ gdk_pixbuf_get_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/);
gi::cstring_v base::PixbufBase::get_option (const gi::cstring_v key) noexcept
{
  typedef const char* (*call_wrap_t) (::GdkPixbuf* pixbuf, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_option;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GHashTable* /*container*/ gdk_pixbuf_get_options (GdkPixbuf* pixbuf /*none*/);
// ::GHashTable* /*container*/ gdk_pixbuf_get_options (::GdkPixbuf* pixbuf /*none*/);
gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_container_t> base::PixbufBase::get_options () noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_options;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()));
  return gi::wrap_to<gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

//  /*none*/ gdk_pixbuf_get_pixels (const GdkPixbuf* pixbuf /*none*/);
// * /*none*/ gdk_pixbuf_get_pixels (const ::GdkPixbuf* pixbuf /*none*/);
// SKIP; inconsistent array info

// guchar* /*none*/ gdk_pixbuf_get_pixels_with_length (const GdkPixbuf* pixbuf /*none*/, guint* length);
// guint8* /*none*/ gdk_pixbuf_get_pixels_with_length (const ::GdkPixbuf* pixbuf /*none*/, guint* length);
gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> base::PixbufBase::get_pixels () const noexcept
{
  typedef guint8* (*call_wrap_t) (const ::GdkPixbuf* pixbuf, guint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_pixels_with_length;
  guint length;
  auto _ret_o = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (guint*) (&length));
  gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_none_t>>(_ret_o, length, gi::transfer_none);
  return _temp_ret;
}

// int gdk_pixbuf_get_rowstride (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_rowstride (const ::GdkPixbuf* pixbuf /*none*/);
gint base::PixbufBase::get_rowstride () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_rowstride;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// int gdk_pixbuf_get_width (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_width (const ::GdkPixbuf* pixbuf /*none*/);
gint base::PixbufBase::get_width () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_get_width;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* /*full*/ gdk_pixbuf_new_subpixbuf (GdkPixbuf* src_pixbuf /*none*/, int src_x, int src_y, int width, int height);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_subpixbuf (::GdkPixbuf* src_pixbuf /*none*/, gint src_x, gint src_y, gint width, gint height);
GdkPixbuf::Pixbuf base::PixbufBase::new_subpixbuf (gint src_x, gint src_y, gint width, gint height) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbuf* src_pixbuf, gint src_x, gint src_y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_new_subpixbuf;
  auto height_to_c = height;
  auto width_to_c = width;
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ gdk_pixbuf_read_pixel_bytes (const GdkPixbuf* pixbuf /*none*/);
// ::GBytes* /*full*/ gdk_pixbuf_read_pixel_bytes (const ::GdkPixbuf* pixbuf /*none*/);
GLib::Bytes base::PixbufBase::read_pixel_bytes () const noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_read_pixel_bytes;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const guint8* gdk_pixbuf_read_pixels (const GdkPixbuf* pixbuf /*none*/);
// const guint8 gdk_pixbuf_read_pixels (const ::GdkPixbuf* pixbuf /*none*/);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// FAILURE on gdk_pixbuf_ref; No such node (<xmlattr>.transfer-ownership)
// gboolean gdk_pixbuf_remove_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/);
// gboolean gdk_pixbuf_remove_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/);
bool base::PixbufBase::remove_option (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_remove_option;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_rotate_simple (const GdkPixbuf* src /*none*/, GdkPixbufRotation angle);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_rotate_simple (const ::GdkPixbuf* src /*none*/, ::GdkPixbufRotation angle);
GdkPixbuf::Pixbuf base::PixbufBase::rotate_simple (GdkPixbuf::PixbufRotation angle) const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* src, ::GdkPixbufRotation angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_rotate_simple;
  auto angle_to_c = gi::unwrap (angle);
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (::GdkPixbufRotation) (angle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_pixbuf_saturate_and_pixelate (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, gfloat saturation, gboolean pixelate);
// void gdk_pixbuf_saturate_and_pixelate (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gfloat saturation, gboolean pixelate);
void base::PixbufBase::saturate_and_pixelate (GdkPixbuf::Pixbuf dest, gfloat saturation, gboolean pixelate) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkPixbuf* src, ::GdkPixbuf* dest, gfloat saturation, gboolean pixelate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_saturate_and_pixelate;
  auto pixelate_to_c = pixelate;
  auto saturation_to_c = saturation;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (::GdkPixbuf*) (dest_to_c), (gfloat) (saturation_to_c), (gboolean) (pixelate_to_c));
}

// gboolean gdk_pixbuf_save (GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save (::GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_buffer (GdkPixbuf* pixbuf /*none*/, gchar** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_buffer (::GdkPixbuf* pixbuf /*none*/, guint8** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_bufferv (GdkPixbuf* pixbuf /*none*/, gchar** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_bufferv (::GdkPixbuf* pixbuf /*none*/, guint8** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
bool base::PixbufBase::save_to_bufferv (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & buffer, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, guint8** buffer, gsize* buffer_size, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_bufferv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  typedef guint8 buffer_cpptype;
  typedef traits::ctype<buffer_cpptype>::type buffer_ctype;
  buffer_ctype *buffer_o;
  gsize buffer_size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (guint8**) ((guint8**) &buffer_o), (gsize*) (&buffer_size), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), &error);
  buffer = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(buffer_o, buffer_size, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::save_to_bufferv (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & buffer, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, guint8** buffer, gsize* buffer_size, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_bufferv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  typedef guint8 buffer_cpptype;
  typedef traits::ctype<buffer_cpptype>::type buffer_ctype;
  buffer_ctype *buffer_o;
  gsize buffer_size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (guint8**) ((guint8**) &buffer_o), (gsize*) (&buffer_size), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), _error ? &_error_o : nullptr);
  buffer = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(buffer_o, buffer_size, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> base::PixbufBase::save_to_bufferv (const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, guint8** buffer, gsize* buffer_size, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_bufferv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  typedef guint8 buffer_cpptype;
  typedef traits::ctype<buffer_cpptype>::type buffer_ctype;
  buffer_ctype *buffer_o;
  gsize buffer_size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (guint8**) ((guint8**) &buffer_o), (gsize*) (&buffer_size), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> buffer;
  buffer = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(buffer_o, buffer_size, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = buffer;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> base::PixbufBase::save_to_bufferv (const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, guint8** buffer, gsize* buffer_size, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_bufferv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  typedef guint8 buffer_cpptype;
  typedef traits::ctype<buffer_cpptype>::type buffer_ctype;
  buffer_ctype *buffer_o;
  gsize buffer_size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (guint8**) ((guint8**) &buffer_o), (gsize*) (&buffer_size), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> buffer;
  buffer = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(buffer_o, buffer_size, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = buffer;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gdk_pixbuf_save_to_callback (GdkPixbuf* pixbuf /*none*/, GdkPixbufSaveFunc save_func /*none*/, gpointer user_data, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_callback (::GdkPixbuf* pixbuf /*none*/, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func /*none*/, void* user_data, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_callbackv (GdkPixbuf* pixbuf /*none*/, GdkPixbufSaveFunc save_func /*none*/, gpointer user_data, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_callbackv (::GdkPixbuf* pixbuf /*none*/, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func /*none*/, void* user_data, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
bool base::PixbufBase::save_to_callbackv (GdkPixbuf::PixbufSaveFunc save_func, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func, void* user_data, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_callbackv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto save_func_wrap_ = save_func ? unwrap (std::move (save_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(save_func_wrap_)>::type> save_func_wrap__sp (save_func_wrap_);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (GdkPixbuf::PixbufSaveFunc::cfunction_type) (save_func_wrap_ ? &save_func_wrap_->wrapper : nullptr), (void*) (save_func_wrap_), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::save_to_callbackv (GdkPixbuf::PixbufSaveFunc save_func, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func, void* user_data, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_callbackv;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto save_func_wrap_ = save_func ? unwrap (std::move (save_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(save_func_wrap_)>::type> save_func_wrap__sp (save_func_wrap_);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (GdkPixbuf::PixbufSaveFunc::cfunction_type) (save_func_wrap_ ? &save_func_wrap_->wrapper : nullptr), (void*) (save_func_wrap_), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gdk_pixbuf_save_to_stream (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const char* type /*none*/, GCancellable* cancellable /*none,nullable*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_stream (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gdk_pixbuf_save_to_stream_async (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const gchar* type /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data,  ..._ /*none*/);
// void gdk_pixbuf_save_to_stream_async (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_streamv (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_streamv (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::PixbufBase::save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv;
  auto cancellable_to_c = nullptr;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::PixbufBase::save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv;
  auto cancellable_to_c = nullptr;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gdk_pixbuf_save_to_streamv_async (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const gchar* type /*none*/, gchar** option_keys /*none,nullable*/, gchar** option_values /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_save_to_streamv_async (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PixbufBase::save_to_streamv_async (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufBase::save_to_streamv_async (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbuf* pixbuf, ::GOutputStream* stream, const char* type, char** option_keys, char** option_values, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_save_to_streamv_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GdkPixbuf*) (gobj_()), (::GOutputStream*) (stream_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_pixbuf_savev (GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_savev (::GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
bool base::PixbufBase::savev (const gi::cstring_v filename, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values)
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, const char* filename, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_savev;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (const char*) (filename_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PixbufBase::savev (const gi::cstring_v filename, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, const char* filename, const char* type, char** option_keys, char** option_values, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_savev;
  auto option_values_w = unwrap (std::move(option_values), gi::transfer_none);
  auto option_values_to_c = option_values_w;
  auto option_keys_w = unwrap (std::move(option_keys), gi::transfer_none);
  auto option_keys_to_c = option_keys_w;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (const char*) (filename_to_c), (const char*) (type_to_c), (char**) (option_keys_to_c), (char**) (option_values_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gdk_pixbuf_scale (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type);
// void gdk_pixbuf_scale (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type);
void base::PixbufBase::scale (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type) const noexcept
{
  typedef void (*call_wrap_t) (const ::GdkPixbuf* src, ::GdkPixbuf* dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_scale;
  auto interp_type_to_c = gi::unwrap (interp_type);
  auto scale_y_to_c = scale_y;
  auto scale_x_to_c = scale_x;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto dest_height_to_c = dest_height;
  auto dest_width_to_c = dest_width;
  auto dest_y_to_c = dest_y;
  auto dest_x_to_c = dest_x;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (::GdkPixbuf*) (dest_to_c), (gint) (dest_x_to_c), (gint) (dest_y_to_c), (gint) (dest_width_to_c), (gint) (dest_height_to_c), (gdouble) (offset_x_to_c), (gdouble) (offset_y_to_c), (gdouble) (scale_x_to_c), (gdouble) (scale_y_to_c), (::GdkInterpType) (interp_type_to_c));
}

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_scale_simple (const GdkPixbuf* src /*none*/, int dest_width, int dest_height, GdkInterpType interp_type);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_scale_simple (const ::GdkPixbuf* src /*none*/, gint dest_width, gint dest_height, ::GdkInterpType interp_type);
GdkPixbuf::Pixbuf base::PixbufBase::scale_simple (gint dest_width, gint dest_height, GdkPixbuf::InterpType interp_type) const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GdkPixbuf* src, gint dest_width, gint dest_height, ::GdkInterpType interp_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_scale_simple;
  auto interp_type_to_c = gi::unwrap (interp_type);
  auto dest_height_to_c = dest_height;
  auto dest_width_to_c = dest_width;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (gobj_()), (gint) (dest_width_to_c), (gint) (dest_height_to_c), (::GdkInterpType) (interp_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_pixbuf_set_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// gboolean gdk_pixbuf_set_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/, const char* value /*none*/);
bool base::PixbufBase::set_option (const gi::cstring_v key, const gi::cstring_v value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbuf* pixbuf, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_set_option;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// void gdk_pixbuf_unref (GdkPixbuf* pixbuf /*none*/);
// void gdk_pixbuf_unref (::GdkPixbuf* pixbuf /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbuf_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbuf_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbuf_extra_impl.hpp>)
#include <gdkpixbuf/pixbuf_extra_impl.hpp>
#endif
#endif

#endif
