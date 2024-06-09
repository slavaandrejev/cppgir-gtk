// AUTO-GENERATED

#ifndef _GI_GTK_MEDIASTREAM_IMPL_HPP_
#define _GI_GTK_MEDIASTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gdk::Paintable MediaStreamBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MediaStreamBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

// void gtk_media_stream_ended (GtkMediaStream* self /*none*/);
// void gtk_media_stream_ended (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::ended () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_ended;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_error (GtkMediaStream* self /*none*/, GQuark domain, int code, const char* format /*none*/,  ..._ /*none*/);
// void gtk_media_stream_error (::GtkMediaStream* self /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_media_stream_error_valist (GtkMediaStream* self /*none*/, GQuark domain, int code, const char* format /*none*/, va_list args /*none*/);
// void gtk_media_stream_error_valist (::GtkMediaStream* self /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void gtk_media_stream_gerror (GtkMediaStream* self /*none*/, GError* error /*full*/);
// void gtk_media_stream_gerror (::GtkMediaStream* self /*none*/, ::GError* error /*full*/);
void base::MediaStreamBase::gerror (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_gerror;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (::GError*) (error_to_c));
}

// gint64 gtk_media_stream_get_duration (GtkMediaStream* self /*none*/);
// gint64 gtk_media_stream_get_duration (::GtkMediaStream* self /*none*/);
gint64 base::MediaStreamBase::get_duration () noexcept
{
  typedef gint64 (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_duration;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_get_ended (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_ended (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::get_ended () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_ended;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// const GError* /*none,nullable*/ gtk_media_stream_get_error (GtkMediaStream* self /*none*/);
// const ::GError* /*none,nullable*/ gtk_media_stream_get_error (::GtkMediaStream* self /*none*/);
GLib::Error_Ref base::MediaStreamBase::get_error () noexcept
{
  typedef const ::GError* (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_error;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_media_stream_get_loop (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_loop (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::get_loop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_loop;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_get_muted (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_muted (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::get_muted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_muted;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_get_playing (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_playing (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::get_playing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_playing;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gint64 gtk_media_stream_get_timestamp (GtkMediaStream* self /*none*/);
// gint64 gtk_media_stream_get_timestamp (::GtkMediaStream* self /*none*/);
gint64 base::MediaStreamBase::get_timestamp () noexcept
{
  typedef gint64 (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_timestamp;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// double gtk_media_stream_get_volume (GtkMediaStream* self /*none*/);
// gdouble gtk_media_stream_get_volume (::GtkMediaStream* self /*none*/);
gdouble base::MediaStreamBase::get_volume () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_get_volume;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_has_audio (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_has_audio (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::has_audio () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_has_audio;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_has_video (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_has_video (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::has_video () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_has_video;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_is_prepared (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_prepared (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::is_prepared () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_is_prepared;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_is_seekable (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_seekable (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::is_seekable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_is_seekable;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_media_stream_is_seeking (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_seeking (::GtkMediaStream* self /*none*/);
bool base::MediaStreamBase::is_seeking () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_is_seeking;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// void gtk_media_stream_pause (GtkMediaStream* self /*none*/);
// void gtk_media_stream_pause (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::pause () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_pause;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_play (GtkMediaStream* self /*none*/);
// void gtk_media_stream_play (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::play () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_play;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_prepared (GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
// void gtk_media_stream_prepared (::GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
void base::MediaStreamBase::prepared (gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_prepared;
  auto duration_to_c = duration;
  auto seekable_to_c = seekable;
  auto has_video_to_c = has_video;
  auto has_audio_to_c = has_audio;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (has_audio_to_c), (gboolean) (has_video_to_c), (gboolean) (seekable_to_c), (gint64) (duration_to_c));
}

// void gtk_media_stream_realize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void gtk_media_stream_realize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
void base::MediaStreamBase::realize (Gdk::Surface surface) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, ::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_realize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (::GdkSurface*) (surface_to_c));
}

// void gtk_media_stream_seek (GtkMediaStream* self /*none*/, gint64 timestamp);
// void gtk_media_stream_seek (::GtkMediaStream* self /*none*/, gint64 timestamp);
void base::MediaStreamBase::seek (gint64 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gint64 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_seek;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gint64) (timestamp_to_c));
}

// void gtk_media_stream_seek_failed (GtkMediaStream* self /*none*/);
// void gtk_media_stream_seek_failed (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::seek_failed () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_seek_failed;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_seek_success (GtkMediaStream* self /*none*/);
// void gtk_media_stream_seek_success (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::seek_success () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_seek_success;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_set_loop (GtkMediaStream* self /*none*/, gboolean loop);
// void gtk_media_stream_set_loop (::GtkMediaStream* self /*none*/, gboolean loop);
void base::MediaStreamBase::set_loop (gboolean loop) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_set_loop;
  auto loop_to_c = loop;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (loop_to_c));
}

// void gtk_media_stream_set_muted (GtkMediaStream* self /*none*/, gboolean muted);
// void gtk_media_stream_set_muted (::GtkMediaStream* self /*none*/, gboolean muted);
void base::MediaStreamBase::set_muted (gboolean muted) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean muted);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_set_muted;
  auto muted_to_c = muted;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (muted_to_c));
}

// void gtk_media_stream_set_playing (GtkMediaStream* self /*none*/, gboolean playing);
// void gtk_media_stream_set_playing (::GtkMediaStream* self /*none*/, gboolean playing);
void base::MediaStreamBase::set_playing (gboolean playing) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean playing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_set_playing;
  auto playing_to_c = playing;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (playing_to_c));
}

// void gtk_media_stream_set_volume (GtkMediaStream* self /*none*/, double volume);
// void gtk_media_stream_set_volume (::GtkMediaStream* self /*none*/, gdouble volume);
void base::MediaStreamBase::set_volume (gdouble volume) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gdouble volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_set_volume;
  auto volume_to_c = volume;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gdouble) (volume_to_c));
}

// void gtk_media_stream_stream_ended (GtkMediaStream* self /*none*/);
// void gtk_media_stream_stream_ended (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::stream_ended () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_stream_ended;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_stream_prepared (GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
// void gtk_media_stream_stream_prepared (::GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
void base::MediaStreamBase::stream_prepared (gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_stream_prepared;
  auto duration_to_c = duration;
  auto seekable_to_c = seekable;
  auto has_video_to_c = has_video;
  auto has_audio_to_c = has_audio;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (has_audio_to_c), (gboolean) (has_video_to_c), (gboolean) (seekable_to_c), (gint64) (duration_to_c));
}

// void gtk_media_stream_stream_unprepared (GtkMediaStream* self /*none*/);
// void gtk_media_stream_stream_unprepared (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::stream_unprepared () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_stream_unprepared;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_unprepared (GtkMediaStream* self /*none*/);
// void gtk_media_stream_unprepared (::GtkMediaStream* self /*none*/);
void base::MediaStreamBase::unprepared () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_unprepared;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// void gtk_media_stream_unrealize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void gtk_media_stream_unrealize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
void base::MediaStreamBase::unrealize (Gdk::Surface surface) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, ::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_unrealize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (::GdkSurface*) (surface_to_c));
}

// void gtk_media_stream_update (GtkMediaStream* self /*none*/, gint64 timestamp);
// void gtk_media_stream_update (::GtkMediaStream* self /*none*/, gint64 timestamp);
void base::MediaStreamBase::update (gint64 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gint64 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_stream_update;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gint64) (timestamp_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediastream_extra_def_impl.hpp>)
#include <gtk/mediastream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediastream_extra_impl.hpp>)
#include <gtk/mediastream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MediaStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMediaStreamClass *methods = (::GtkMediaStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.pause) methods->pause = (decltype (methods->pause)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::pause_>;
  if (init_data.play) methods->play = (decltype (methods->play)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::play_>;
  if (init_data.realize) methods->realize = (decltype (methods->realize)) detail::method_wrapper<self, void (*) (Gdk::Surface surface), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::realize_>;
  if (init_data.seek) methods->seek = (decltype (methods->seek)) detail::method_wrapper<self, void (*) (gint64 timestamp), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::seek_>;
  if (init_data.unrealize) methods->unrealize = (decltype (methods->unrealize)) detail::method_wrapper<self, void (*) (Gdk::Surface surface), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::unrealize_>;
  if (init_data.update_audio) methods->update_audio = (decltype (methods->update_audio)) detail::method_wrapper<self, void (*) (gboolean muted, gdouble volume), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::update_audio_>;
}

// void MediaStream::pause (GtkMediaStream* self /*none*/);
// void MediaStream::pause (::GtkMediaStream* self /*none*/);
void MediaStreamClass::pause_ () noexcept
{
  if (!get_struct_()->pause) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pause;
  call_wrap_v ((::GtkMediaStream*) (gobj_()));
}

// gboolean MediaStream::play (GtkMediaStream* self /*none*/);
// gboolean MediaStream::play (::GtkMediaStream* self /*none*/);
bool MediaStreamClass::play_ () noexcept
{
  if (!get_struct_()->play) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkMediaStream* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->play;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (gobj_()));
  return _temp_ret;
}

// void MediaStream::realize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::realize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
void MediaStreamClass::realize_ (Gdk::Surface surface) noexcept
{
  if (!get_struct_()->realize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaStream* self, ::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->realize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (::GdkSurface*) (surface_to_c));
}

// void MediaStream::seek (GtkMediaStream* self /*none*/, gint64 timestamp);
// void MediaStream::seek (::GtkMediaStream* self /*none*/, gint64 timestamp);
void MediaStreamClass::seek_ (gint64 timestamp) noexcept
{
  if (!get_struct_()->seek) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gint64 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->seek;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gint64) (timestamp_to_c));
}

// void MediaStream::unrealize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::unrealize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
void MediaStreamClass::unrealize_ (Gdk::Surface surface) noexcept
{
  if (!get_struct_()->unrealize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaStream* self, ::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unrealize;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (::GdkSurface*) (surface_to_c));
}

// void MediaStream::update_audio (GtkMediaStream* self /*none*/, gboolean muted, double volume);
// void MediaStream::update_audio (::GtkMediaStream* self /*none*/, gboolean muted, gdouble volume);
void MediaStreamClass::update_audio_ (gboolean muted, gdouble volume) noexcept
{
  if (!get_struct_()->update_audio) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaStream* self, gboolean muted, gdouble volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->update_audio;
  auto volume_to_c = volume;
  auto muted_to_c = muted;
  call_wrap_v ((::GtkMediaStream*) (gobj_()), (gboolean) (muted_to_c), (gdouble) (volume_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
