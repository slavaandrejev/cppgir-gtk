// AUTO-GENERATED

#ifndef _GI_GTK_MEDIASTREAM_HPP_
#define _GI_GTK_MEDIASTREAM_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class MediaStream;

namespace base {


#define GI_GTK_MEDIASTREAM_BASE base::MediaStreamBase
class MediaStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkMediaStream BaseObjectType;

MediaStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_media_stream_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

// void gtk_media_stream_ended (GtkMediaStream* self /*none*/);
// void gtk_media_stream_ended (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void ended () noexcept;

// void gtk_media_stream_error (GtkMediaStream* self /*none*/, GQuark domain, int code, const char* format /*none*/,  ..._ /*none*/);
// void gtk_media_stream_error (::GtkMediaStream* self /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_media_stream_error_valist (GtkMediaStream* self /*none*/, GQuark domain, int code, const char* format /*none*/, va_list args /*none*/);
// void gtk_media_stream_error_valist (::GtkMediaStream* self /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void gtk_media_stream_gerror (GtkMediaStream* self /*none*/, GError* error /*full*/);
// void gtk_media_stream_gerror (::GtkMediaStream* self /*none*/, ::GError* error /*full*/);
GI_INLINE_DECL void gerror (GLib::Error error) noexcept;

// gint64 gtk_media_stream_get_duration (GtkMediaStream* self /*none*/);
// gint64 gtk_media_stream_get_duration (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL gint64 get_duration () noexcept;

// gboolean gtk_media_stream_get_ended (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_ended (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool get_ended () noexcept;

// const GError* /*none,nullable*/ gtk_media_stream_get_error (GtkMediaStream* self /*none*/);
// const ::GError* /*none,nullable*/ gtk_media_stream_get_error (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL GLib::Error_Ref get_error () noexcept;

// gboolean gtk_media_stream_get_loop (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_loop (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool get_loop () noexcept;

// gboolean gtk_media_stream_get_muted (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_muted (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool get_muted () noexcept;

// gboolean gtk_media_stream_get_playing (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_get_playing (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool get_playing () noexcept;

// gint64 gtk_media_stream_get_timestamp (GtkMediaStream* self /*none*/);
// gint64 gtk_media_stream_get_timestamp (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL gint64 get_timestamp () noexcept;

// double gtk_media_stream_get_volume (GtkMediaStream* self /*none*/);
// gdouble gtk_media_stream_get_volume (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL gdouble get_volume () noexcept;

// gboolean gtk_media_stream_has_audio (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_has_audio (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool has_audio () noexcept;

// gboolean gtk_media_stream_has_video (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_has_video (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool has_video () noexcept;

// gboolean gtk_media_stream_is_prepared (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_prepared (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool is_prepared () noexcept;

// gboolean gtk_media_stream_is_seekable (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_seekable (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool is_seekable () noexcept;

// gboolean gtk_media_stream_is_seeking (GtkMediaStream* self /*none*/);
// gboolean gtk_media_stream_is_seeking (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool is_seeking () noexcept;

// void gtk_media_stream_pause (GtkMediaStream* self /*none*/);
// void gtk_media_stream_pause (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void pause () noexcept;

// void gtk_media_stream_play (GtkMediaStream* self /*none*/);
// void gtk_media_stream_play (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void play () noexcept;

// void gtk_media_stream_prepared (GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
// void gtk_media_stream_prepared (::GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
GI_INLINE_DECL void prepared (gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration) noexcept;

// void gtk_media_stream_realize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void gtk_media_stream_realize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
GI_INLINE_DECL void realize (Gdk::Surface surface) noexcept;

// void gtk_media_stream_seek (GtkMediaStream* self /*none*/, gint64 timestamp);
// void gtk_media_stream_seek (::GtkMediaStream* self /*none*/, gint64 timestamp);
GI_INLINE_DECL void seek (gint64 timestamp) noexcept;

// void gtk_media_stream_seek_failed (GtkMediaStream* self /*none*/);
// void gtk_media_stream_seek_failed (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void seek_failed () noexcept;

// void gtk_media_stream_seek_success (GtkMediaStream* self /*none*/);
// void gtk_media_stream_seek_success (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void seek_success () noexcept;

// void gtk_media_stream_set_loop (GtkMediaStream* self /*none*/, gboolean loop);
// void gtk_media_stream_set_loop (::GtkMediaStream* self /*none*/, gboolean loop);
GI_INLINE_DECL void set_loop (gboolean loop) noexcept;

// void gtk_media_stream_set_muted (GtkMediaStream* self /*none*/, gboolean muted);
// void gtk_media_stream_set_muted (::GtkMediaStream* self /*none*/, gboolean muted);
GI_INLINE_DECL void set_muted (gboolean muted) noexcept;

// void gtk_media_stream_set_playing (GtkMediaStream* self /*none*/, gboolean playing);
// void gtk_media_stream_set_playing (::GtkMediaStream* self /*none*/, gboolean playing);
GI_INLINE_DECL void set_playing (gboolean playing) noexcept;

// void gtk_media_stream_set_volume (GtkMediaStream* self /*none*/, double volume);
// void gtk_media_stream_set_volume (::GtkMediaStream* self /*none*/, gdouble volume);
GI_INLINE_DECL void set_volume (gdouble volume) noexcept;

// void gtk_media_stream_stream_ended (GtkMediaStream* self /*none*/);
// void gtk_media_stream_stream_ended (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void stream_ended () noexcept;

// void gtk_media_stream_stream_prepared (GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
// void gtk_media_stream_stream_prepared (::GtkMediaStream* self /*none*/, gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration);
GI_INLINE_DECL void stream_prepared (gboolean has_audio, gboolean has_video, gboolean seekable, gint64 duration) noexcept;

// void gtk_media_stream_stream_unprepared (GtkMediaStream* self /*none*/);
// void gtk_media_stream_stream_unprepared (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void stream_unprepared () noexcept;

// void gtk_media_stream_unprepared (GtkMediaStream* self /*none*/);
// void gtk_media_stream_unprepared (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void unprepared () noexcept;

// void gtk_media_stream_unrealize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void gtk_media_stream_unrealize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
GI_INLINE_DECL void unrealize (Gdk::Surface surface) noexcept;

// void gtk_media_stream_update (GtkMediaStream* self /*none*/, gint64 timestamp);
// void gtk_media_stream_update (::GtkMediaStream* self /*none*/, gint64 timestamp);
GI_INLINE_DECL void update (gint64 timestamp) noexcept;

gi::property_proxy<gint64, base::MediaStreamBase> property_duration()
{ return gi::property_proxy<gint64, base::MediaStreamBase> (*this, "duration"); }
const gi::property_proxy<gint64, base::MediaStreamBase> property_duration() const
{ return gi::property_proxy<gint64, base::MediaStreamBase> (*this, "duration"); }

gi::property_proxy<bool, base::MediaStreamBase> property_ended()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "ended"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_ended() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "ended"); }

gi::property_proxy<GLib::Error, base::MediaStreamBase> property_error()
{ return gi::property_proxy<GLib::Error, base::MediaStreamBase> (*this, "error"); }
const gi::property_proxy<GLib::Error, base::MediaStreamBase> property_error() const
{ return gi::property_proxy<GLib::Error, base::MediaStreamBase> (*this, "error"); }

gi::property_proxy<bool, base::MediaStreamBase> property_has_audio()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "has-audio"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_has_audio() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "has-audio"); }

gi::property_proxy<bool, base::MediaStreamBase> property_has_video()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "has-video"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_has_video() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "has-video"); }

gi::property_proxy<bool, base::MediaStreamBase> property_loop()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "loop"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_loop() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "loop"); }

gi::property_proxy<bool, base::MediaStreamBase> property_muted()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "muted"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_muted() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "muted"); }

gi::property_proxy<bool, base::MediaStreamBase> property_playing()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "playing"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_playing() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "playing"); }

gi::property_proxy<bool, base::MediaStreamBase> property_prepared()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "prepared"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_prepared() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "prepared"); }

gi::property_proxy<bool, base::MediaStreamBase> property_seekable()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "seekable"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_seekable() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "seekable"); }

gi::property_proxy<bool, base::MediaStreamBase> property_seeking()
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "seeking"); }
const gi::property_proxy<bool, base::MediaStreamBase> property_seeking() const
{ return gi::property_proxy<bool, base::MediaStreamBase> (*this, "seeking"); }

gi::property_proxy<gint64, base::MediaStreamBase> property_timestamp()
{ return gi::property_proxy<gint64, base::MediaStreamBase> (*this, "timestamp"); }
const gi::property_proxy<gint64, base::MediaStreamBase> property_timestamp() const
{ return gi::property_proxy<gint64, base::MediaStreamBase> (*this, "timestamp"); }

gi::property_proxy<gdouble, base::MediaStreamBase> property_volume()
{ return gi::property_proxy<gdouble, base::MediaStreamBase> (*this, "volume"); }
const gi::property_proxy<gdouble, base::MediaStreamBase> property_volume() const
{ return gi::property_proxy<gdouble, base::MediaStreamBase> (*this, "volume"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediastream_extra_def.hpp>)
#include <gtk/mediastream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediastream_extra.hpp>)
#include <gtk/mediastream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MediaStream : public GI_GTK_MEDIASTREAM_BASE
{ typedef GI_GTK_MEDIASTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMediaStream>
{ typedef Gtk::MediaStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MediaStreamClassDef
{
typedef MediaStreamClassDef self;
public:
typedef Gtk::MediaStream instance_type;
typedef ::GtkMediaStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(pause) = self;
using GI_MEMBER_CHECK_CONFLICT(play) = self;
using GI_MEMBER_CHECK_CONFLICT(realize) = self;
using GI_MEMBER_CHECK_CONFLICT(seek) = self;
using GI_MEMBER_CHECK_CONFLICT(unrealize) = self;
using GI_MEMBER_CHECK_CONFLICT(update_audio) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MediaStream::pause (GtkMediaStream* self /*none*/);
// void MediaStream::pause (::GtkMediaStream* self /*none*/);
virtual void pause_ () noexcept = 0;

// gboolean MediaStream::play (GtkMediaStream* self /*none*/);
// gboolean MediaStream::play (::GtkMediaStream* self /*none*/);
virtual bool play_ () noexcept = 0;

// void MediaStream::realize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::realize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
virtual void realize_ (Gdk::Surface surface) noexcept = 0;

// void MediaStream::seek (GtkMediaStream* self /*none*/, gint64 timestamp);
// void MediaStream::seek (::GtkMediaStream* self /*none*/, gint64 timestamp);
virtual void seek_ (gint64 timestamp) noexcept = 0;

// void MediaStream::unrealize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::unrealize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
virtual void unrealize_ (Gdk::Surface surface) noexcept = 0;

// void MediaStream::update_audio (GtkMediaStream* self /*none*/, gboolean muted, double volume);
// void MediaStream::update_audio (::GtkMediaStream* self /*none*/, gboolean muted, gdouble volume);
virtual void update_audio_ (gboolean muted, gdouble volume) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MediaStreamClass: public detail::ClassTemplate<Gtk::impl::internal::MediaStreamClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl>
{
friend class internal::MediaStreamClassDef;
typedef MediaStreamClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MediaStreamClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gdk::impl::internal::PaintableInterfaceClassImpl GdkPaintableInterface_type;


// void MediaStream::pause (GtkMediaStream* self /*none*/);
// void MediaStream::pause (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL void pause_ () noexcept override;

// gboolean MediaStream::play (GtkMediaStream* self /*none*/);
// gboolean MediaStream::play (::GtkMediaStream* self /*none*/);
GI_INLINE_DECL bool play_ () noexcept override;

// void MediaStream::realize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::realize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
GI_INLINE_DECL void realize_ (Gdk::Surface surface) noexcept override;

// void MediaStream::seek (GtkMediaStream* self /*none*/, gint64 timestamp);
// void MediaStream::seek (::GtkMediaStream* self /*none*/, gint64 timestamp);
GI_INLINE_DECL void seek_ (gint64 timestamp) noexcept override;

// void MediaStream::unrealize (GtkMediaStream* self /*none*/, GdkSurface* surface /*none*/);
// void MediaStream::unrealize (::GtkMediaStream* self /*none*/, ::GdkSurface* surface /*none*/);
GI_INLINE_DECL void unrealize_ (Gdk::Surface surface) noexcept override;

// void MediaStream::update_audio (GtkMediaStream* self /*none*/, gboolean muted, double volume);
// void MediaStream::update_audio (::GtkMediaStream* self /*none*/, gboolean muted, gdouble volume);
GI_INLINE_DECL void update_audio_ (gboolean muted, gdouble volume) noexcept override;


};


struct MediaStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(MediaStreamClass, pause)
  GI_MEMBER_DEFINE(MediaStreamClass, play)
  GI_MEMBER_DEFINE(MediaStreamClass, realize)
  GI_MEMBER_DEFINE(MediaStreamClass, seek)
  GI_MEMBER_DEFINE(MediaStreamClass, unrealize)
  GI_MEMBER_DEFINE(MediaStreamClass, update_audio)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, pause),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, play),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, realize),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unrealize),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, update_audio)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MediaStreamImpl = detail::ObjectImpl<MediaStream, internal::MediaStreamClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
