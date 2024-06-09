// AUTO-GENERATED

#ifndef _GI_GTK_VIDEO_HPP_
#define _GI_GTK_VIDEO_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class MediaStream;

class Video;

namespace base {


#define GI_GTK_VIDEO_BASE base::VideoBase
class VideoBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkVideo BaseObjectType;

VideoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_video_get_type(); } 

// GtkWidget* /*none*/ gtk_video_new ();
// ::GtkVideo* /*none*/ gtk_video_new ();
static GI_INLINE_DECL Gtk::Video new_ () noexcept;

// GtkWidget* /*none*/ gtk_video_new_for_file (GFile* file /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_file (::GFile* file /*none,nullable*/);
static GI_INLINE_DECL Gtk::Video new_for_file (Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::Video new_for_file () noexcept;

// GtkWidget* /*none*/ gtk_video_new_for_filename (const char* filename /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_filename (const char* filename /*none,nullable*/);
static GI_INLINE_DECL Gtk::Video new_for_filename (const gi::cstring_v filename) noexcept;
static GI_INLINE_DECL Gtk::Video new_for_filename () noexcept;

// GtkWidget* /*none*/ gtk_video_new_for_media_stream (GtkMediaStream* stream /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_media_stream (::GtkMediaStream* stream /*none,nullable*/);
static GI_INLINE_DECL Gtk::Video new_for_media_stream (Gtk::MediaStream stream) noexcept;
static GI_INLINE_DECL Gtk::Video new_for_media_stream () noexcept;

// GtkWidget* /*none*/ gtk_video_new_for_resource (const char* resource_path /*none,nullable*/);
// ::GtkVideo* /*none*/ gtk_video_new_for_resource (const char* resource_path /*none,nullable*/);
static GI_INLINE_DECL Gtk::Video new_for_resource (const gi::cstring_v resource_path) noexcept;
static GI_INLINE_DECL Gtk::Video new_for_resource () noexcept;

// gboolean gtk_video_get_autoplay (GtkVideo* self /*none*/);
// gboolean gtk_video_get_autoplay (::GtkVideo* self /*none*/);
GI_INLINE_DECL bool get_autoplay () noexcept;

// GFile* /*none,nullable*/ gtk_video_get_file (GtkVideo* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_video_get_file (::GtkVideo* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// gboolean gtk_video_get_loop (GtkVideo* self /*none*/);
// gboolean gtk_video_get_loop (::GtkVideo* self /*none*/);
GI_INLINE_DECL bool get_loop () noexcept;

// GtkMediaStream* /*none,nullable*/ gtk_video_get_media_stream (GtkVideo* self /*none*/);
// ::GtkMediaStream* /*none,nullable*/ gtk_video_get_media_stream (::GtkVideo* self /*none*/);
GI_INLINE_DECL Gtk::MediaStream get_media_stream () noexcept;

// void gtk_video_set_autoplay (GtkVideo* self /*none*/, gboolean autoplay);
// void gtk_video_set_autoplay (::GtkVideo* self /*none*/, gboolean autoplay);
GI_INLINE_DECL void set_autoplay (gboolean autoplay) noexcept;

// void gtk_video_set_file (GtkVideo* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_video_set_file (::GtkVideo* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_file () noexcept;

// void gtk_video_set_filename (GtkVideo* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_video_set_filename (::GtkVideo* self /*none*/, const char* filename /*none,nullable*/);
GI_INLINE_DECL void set_filename (const gi::cstring_v filename) noexcept;
GI_INLINE_DECL void set_filename () noexcept;

// void gtk_video_set_loop (GtkVideo* self /*none*/, gboolean loop);
// void gtk_video_set_loop (::GtkVideo* self /*none*/, gboolean loop);
GI_INLINE_DECL void set_loop (gboolean loop) noexcept;

// void gtk_video_set_media_stream (GtkVideo* self /*none*/, GtkMediaStream* stream /*none,nullable*/);
// void gtk_video_set_media_stream (::GtkVideo* self /*none*/, ::GtkMediaStream* stream /*none,nullable*/);
GI_INLINE_DECL void set_media_stream (Gtk::MediaStream stream) noexcept;
GI_INLINE_DECL void set_media_stream () noexcept;

// void gtk_video_set_resource (GtkVideo* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_video_set_resource (::GtkVideo* self /*none*/, const char* resource_path /*none,nullable*/);
GI_INLINE_DECL void set_resource (const gi::cstring_v resource_path) noexcept;
GI_INLINE_DECL void set_resource () noexcept;

gi::property_proxy<bool, base::VideoBase> property_autoplay()
{ return gi::property_proxy<bool, base::VideoBase> (*this, "autoplay"); }
const gi::property_proxy<bool, base::VideoBase> property_autoplay() const
{ return gi::property_proxy<bool, base::VideoBase> (*this, "autoplay"); }

gi::property_proxy<Gio::File, base::VideoBase> property_file()
{ return gi::property_proxy<Gio::File, base::VideoBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::VideoBase> property_file() const
{ return gi::property_proxy<Gio::File, base::VideoBase> (*this, "file"); }

gi::property_proxy<bool, base::VideoBase> property_loop()
{ return gi::property_proxy<bool, base::VideoBase> (*this, "loop"); }
const gi::property_proxy<bool, base::VideoBase> property_loop() const
{ return gi::property_proxy<bool, base::VideoBase> (*this, "loop"); }

gi::property_proxy<Gtk::MediaStream, base::VideoBase> property_media_stream()
{ return gi::property_proxy<Gtk::MediaStream, base::VideoBase> (*this, "media-stream"); }
const gi::property_proxy<Gtk::MediaStream, base::VideoBase> property_media_stream() const
{ return gi::property_proxy<Gtk::MediaStream, base::VideoBase> (*this, "media-stream"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/video_extra_def.hpp>)
#include <gtk/video_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/video_extra.hpp>)
#include <gtk/video_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Video : public GI_GTK_VIDEO_BASE
{ typedef GI_GTK_VIDEO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVideo>
{ typedef Gtk::Video type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VideoClassDef
{
typedef VideoClassDef self;
public:
typedef Gtk::Video instance_type;
typedef ::GtkVideoClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~VideoClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VideoClass: public detail::ClassTemplate<Gtk::impl::internal::VideoClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::VideoClassDef;
typedef VideoClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VideoClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct VideoClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using VideoImpl = detail::ObjectImpl<Video, internal::VideoClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
