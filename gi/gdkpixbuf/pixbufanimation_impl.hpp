// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATION_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_file (const char* filename /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_file (const char* filename /*none*/, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_file (const gi::cstring_v filename)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_resource (const char* resource_path /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_resource (const char* resource_path /*none*/, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_resource (const gi::cstring_v resource_path)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream_finish (Gio::AsyncResult async_result)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_pixbuf_animation_new_from_stream_async (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_animation_new_from_stream_async (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PixbufAnimationBase::new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufAnimationBase::new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// int gdk_pixbuf_animation_get_height (GdkPixbufAnimation* animation /*none*/);
// gint gdk_pixbuf_animation_get_height (::GdkPixbufAnimation* animation /*none*/);
gint base::PixbufAnimationBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_get_height;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// GdkPixbufAnimationIter* /*full*/ gdk_pixbuf_animation_get_iter (GdkPixbufAnimation* animation /*none*/, const GTimeVal* start_time /*none,nullable*/);
// ::GdkPixbufAnimationIter* /*full*/ gdk_pixbuf_animation_get_iter (::GdkPixbufAnimation* animation /*none*/, const  start_time /*none,nullable*/);
// SKIP; start_time type  not supported

// GdkPixbuf* /*none*/ gdk_pixbuf_animation_get_static_image (GdkPixbufAnimation* animation /*none*/);
// ::GdkPixbuf* /*none*/ gdk_pixbuf_animation_get_static_image (::GdkPixbufAnimation* animation /*none*/);
GdkPixbuf::Pixbuf base::PixbufAnimationBase::get_static_image () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_get_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_pixbuf_animation_get_width (GdkPixbufAnimation* animation /*none*/);
// gint gdk_pixbuf_animation_get_width (::GdkPixbufAnimation* animation /*none*/);
gint base::PixbufAnimationBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_get_width;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_pixbuf_animation_is_static_image (GdkPixbufAnimation* animation /*none*/);
// gboolean gdk_pixbuf_animation_is_static_image (::GdkPixbufAnimation* animation /*none*/);
bool base::PixbufAnimationBase::is_static_image () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_is_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// FAILURE on gdk_pixbuf_animation_ref; No such node (<xmlattr>.transfer-ownership)
// void gdk_pixbuf_animation_unref (GdkPixbufAnimation* animation /*none*/);
// void gdk_pixbuf_animation_unref (::GdkPixbufAnimation* animation /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_impl.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {

void PixbufAnimationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GdkPixbufAnimationClass *methods = (::GdkPixbufAnimationClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_static_image) methods->get_static_image = (decltype (methods->get_static_image)) detail::method_wrapper<self, GdkPixbuf::Pixbuf (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_static_image_>;
  if (init_data.is_static_image) methods->is_static_image = (decltype (methods->is_static_image)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_static_image_>;
}

// GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (GdkPixbufAnimation* animation /*none*/, const GTimeVal* start_time /*none,nullable*/);
// ::GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (::GdkPixbufAnimation* animation /*none*/, const  start_time /*none,nullable*/);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation /*none*/, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation /*none*/, gint width, gint height);
// SKIP; inconsistent height in pointer depth (1 vs 0), inconsistent width in pointer depth (1 vs 0)

// GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (GdkPixbufAnimation* animation /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation /*none*/);
GdkPixbuf::Pixbuf PixbufAnimationClass::get_static_image_ () noexcept
{
  if (!get_struct_()->get_static_image) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation /*none*/);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation /*none*/);
bool PixbufAnimationClass::is_static_image_ () noexcept
{
  if (!get_struct_()->is_static_image) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
