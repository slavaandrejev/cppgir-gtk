// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATION_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATION_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimationIter;

class PixbufAnimation;

namespace base {


#define GI_GDKPIXBUF_PIXBUFANIMATION_BASE base::PixbufAnimationBase
class PixbufAnimationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufAnimation BaseObjectType;

PixbufAnimationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_animation_get_type(); } 

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_file (const char* filename /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_file (const char* filename /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_file (const gi::cstring_v filename);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_resource (const char* resource_path /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_resource (const char* resource_path /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_resource (const gi::cstring_v resource_path);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept;

// GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// ::GdkPixbufAnimation* /*full,nullable*/ gdk_pixbuf_animation_new_from_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream_finish (Gio::AsyncResult async_result);
static GI_INLINE_DECL GdkPixbuf::PixbufAnimation new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept;

// void gdk_pixbuf_animation_new_from_stream_async (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_animation_new_from_stream_async (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept;

// int gdk_pixbuf_animation_get_height (GdkPixbufAnimation* animation /*none*/);
// gint gdk_pixbuf_animation_get_height (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// GdkPixbufAnimationIter* /*full*/ gdk_pixbuf_animation_get_iter (GdkPixbufAnimation* animation /*none*/, const GTimeVal* start_time /*none,nullable*/);
// ::GdkPixbufAnimationIter* /*full*/ gdk_pixbuf_animation_get_iter (::GdkPixbufAnimation* animation /*none*/, const  start_time /*none,nullable*/);
// SKIP; start_time type  not supported

// GdkPixbuf* /*none*/ gdk_pixbuf_animation_get_static_image (GdkPixbufAnimation* animation /*none*/);
// ::GdkPixbuf* /*none*/ gdk_pixbuf_animation_get_static_image (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_static_image () noexcept;

// int gdk_pixbuf_animation_get_width (GdkPixbufAnimation* animation /*none*/);
// gint gdk_pixbuf_animation_get_width (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// gboolean gdk_pixbuf_animation_is_static_image (GdkPixbufAnimation* animation /*none*/);
// gboolean gdk_pixbuf_animation_is_static_image (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL bool is_static_image () noexcept;

// FAILURE on gdk_pixbuf_animation_ref; No such node (<xmlattr>.transfer-ownership)
// void gdk_pixbuf_animation_unref (GdkPixbufAnimation* animation /*none*/);
// void gdk_pixbuf_animation_unref (::GdkPixbufAnimation* animation /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_def.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra.hpp>)
#include <gdkpixbuf/pixbufanimation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufAnimation : public GI_GDKPIXBUF_PIXBUFANIMATION_BASE
{ typedef GI_GDKPIXBUF_PIXBUFANIMATION_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufAnimation>
{ typedef GdkPixbuf::PixbufAnimation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufAnimationClassDef
{
typedef PixbufAnimationClassDef self;
public:
typedef GdkPixbuf::PixbufAnimation instance_type;
typedef ::GdkPixbufAnimationClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_static_image) = self;
using GI_MEMBER_CHECK_CONFLICT(is_static_image) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PixbufAnimationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (GdkPixbufAnimation* animation /*none*/, const GTimeVal* start_time /*none,nullable*/);
// ::GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (::GdkPixbufAnimation* animation /*none*/, const  start_time /*none,nullable*/);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation /*none*/, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation /*none*/, gint width, gint height);
// SKIP; inconsistent height in pointer depth (1 vs 0), inconsistent width in pointer depth (1 vs 0)

// GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (GdkPixbufAnimation* animation /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation /*none*/);
virtual GdkPixbuf::Pixbuf get_static_image_ () noexcept = 0;

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation /*none*/);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation /*none*/);
virtual bool is_static_image_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufAnimationClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::PixbufAnimationClassDef;
typedef PixbufAnimationClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (GdkPixbufAnimation* animation /*none*/, const GTimeVal* start_time /*none,nullable*/);
// ::GdkPixbufAnimationIter* /*full*/ PixbufAnimation::get_iter (::GdkPixbufAnimation* animation /*none*/, const  start_time /*none,nullable*/);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation /*none*/, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation /*none*/, gint width, gint height);
// SKIP; inconsistent height in pointer depth (1 vs 0), inconsistent width in pointer depth (1 vs 0)

// GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (GdkPixbufAnimation* animation /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_static_image_ () noexcept override;

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation /*none*/);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation /*none*/);
GI_INLINE_DECL bool is_static_image_ () noexcept override;


};


struct PixbufAnimationClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PixbufAnimationClass, get_static_image)
  GI_MEMBER_DEFINE(PixbufAnimationClass, is_static_image)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_static_image),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_static_image)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PixbufAnimationImpl = detail::ObjectImpl<PixbufAnimation, internal::PixbufAnimationClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
