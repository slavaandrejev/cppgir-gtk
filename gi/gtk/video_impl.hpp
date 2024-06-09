// AUTO-GENERATED

#ifndef _GI_GTK_VIDEO_IMPL_HPP_
#define _GI_GTK_VIDEO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_video_new ();
// ::GtkVideo* /*none*/ gtk_video_new ();
Gtk::Video base::VideoBase::new_ () noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_video_new_for_file (GFile* file /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_file (::GFile* file /*none,nullable*/);
Gtk::Video base::VideoBase::new_for_file (Gio::File file) noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Video base::VideoBase::new_for_file () noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_file;
  auto file_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_video_new_for_filename (const char* filename /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_filename (const char* filename /*none,nullable*/);
Gtk::Video base::VideoBase::new_for_filename (const gi::cstring_v filename) noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Video base::VideoBase::new_for_filename () noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_filename;
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_video_new_for_media_stream (GtkMediaStream* stream /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_media_stream (::GtkMediaStream* stream /*none,nullable*/);
Gtk::Video base::VideoBase::new_for_media_stream (Gtk::MediaStream stream) noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_media_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Video base::VideoBase::new_for_media_stream () noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_media_stream;
  auto stream_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_video_new_for_resource (const char* resource_path /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_resource (const char* resource_path /*none,nullable*/);
Gtk::Video base::VideoBase::new_for_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Video base::VideoBase::new_for_resource () noexcept
{
  typedef ::GtkVideo* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_video_new_for_resource;
  auto resource_path_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_video_get_autoplay (GtkVideo* self /*none*/);
// gboolean gtk_video_get_autoplay (::GtkVideo* self /*none*/);
bool base::VideoBase::get_autoplay () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkVideo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_get_autoplay;
  auto _temp_ret = call_wrap_v ((::GtkVideo*) (gobj_()));
  return _temp_ret;
}

// GFile* /*none,nullable*/ gtk_video_get_file (GtkVideo* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_video_get_file (::GtkVideo* self /*none*/);
Gio::File base::VideoBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkVideo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_get_file;
  auto _temp_ret = call_wrap_v ((::GtkVideo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_video_get_loop (GtkVideo* self /*none*/);
// gboolean gtk_video_get_loop (::GtkVideo* self /*none*/);
bool base::VideoBase::get_loop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkVideo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_get_loop;
  auto _temp_ret = call_wrap_v ((::GtkVideo*) (gobj_()));
  return _temp_ret;
}

// GtkMediaStream* /*none,nullable*/ gtk_video_get_media_stream (GtkVideo* self /*none*/);
// ::GtkMediaStream* /*none,nullable*/ gtk_video_get_media_stream (::GtkVideo* self /*none*/);
Gtk::MediaStream base::VideoBase::get_media_stream () noexcept
{
  typedef ::GtkMediaStream* (*call_wrap_t) (::GtkVideo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_get_media_stream;
  auto _temp_ret = call_wrap_v ((::GtkVideo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_video_set_autoplay (GtkVideo* self /*none*/, gboolean autoplay);
// void gtk_video_set_autoplay (::GtkVideo* self /*none*/, gboolean autoplay);
void base::VideoBase::set_autoplay (gboolean autoplay) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, gboolean autoplay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_autoplay;
  auto autoplay_to_c = autoplay;
  call_wrap_v ((::GtkVideo*) (gobj_()), (gboolean) (autoplay_to_c));
}

// void gtk_video_set_file (GtkVideo* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_video_set_file (::GtkVideo* self /*none*/, ::GFile* file /*none,nullable*/);
void base::VideoBase::set_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkVideo*) (gobj_()), (::GFile*) (file_to_c));
}
void base::VideoBase::set_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkVideo*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_video_set_filename (GtkVideo* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_video_set_filename (::GtkVideo* self /*none*/, const char* filename /*none,nullable*/);
void base::VideoBase::set_filename (const gi::cstring_v filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::GtkVideo*) (gobj_()), (const char*) (filename_to_c));
}
void base::VideoBase::set_filename () noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_filename;
  auto filename_to_c = nullptr;
  call_wrap_v ((::GtkVideo*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_video_set_loop (GtkVideo* self /*none*/, gboolean loop);
// void gtk_video_set_loop (::GtkVideo* self /*none*/, gboolean loop);
void base::VideoBase::set_loop (gboolean loop) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, gboolean loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_loop;
  auto loop_to_c = loop;
  call_wrap_v ((::GtkVideo*) (gobj_()), (gboolean) (loop_to_c));
}

// void gtk_video_set_media_stream (GtkVideo* self /*none*/, GtkMediaStream* stream /*none,nullable*/);
// void gtk_video_set_media_stream (::GtkVideo* self /*none*/, ::GtkMediaStream* stream /*none,nullable*/);
void base::VideoBase::set_media_stream (Gtk::MediaStream stream) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, ::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_media_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GtkVideo*) (gobj_()), (::GtkMediaStream*) (stream_to_c));
}
void base::VideoBase::set_media_stream () noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, ::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_media_stream;
  auto stream_to_c = nullptr;
  call_wrap_v ((::GtkVideo*) (gobj_()), (::GtkMediaStream*) (stream_to_c));
}

// void gtk_video_set_resource (GtkVideo* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_video_set_resource (::GtkVideo* self /*none*/, const char* resource_path /*none,nullable*/);
void base::VideoBase::set_resource (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GtkVideo*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::VideoBase::set_resource () noexcept
{
  typedef void (*call_wrap_t) (::GtkVideo* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_video_set_resource;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GtkVideo*) (gobj_()), (const char*) (resource_path_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/video_extra_def_impl.hpp>)
#include <gtk/video_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/video_extra_impl.hpp>)
#include <gtk/video_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void VideoClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkVideoClass *methods = (::GtkVideoClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
