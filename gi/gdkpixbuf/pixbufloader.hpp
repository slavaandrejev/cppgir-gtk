// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFLOADER_HPP_
#define _GI_GDKPIXBUF_PIXBUFLOADER_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimation;
class PixbufFormat;
class PixbufFormat_Ref;

class PixbufLoader;

namespace base {


#define GI_GDKPIXBUF_PIXBUFLOADER_BASE base::PixbufLoaderBase
class PixbufLoaderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufLoader BaseObjectType;

PixbufLoaderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_loader_get_type(); } 

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new ();
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new ();
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_ () noexcept;

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_mime_type (const char* mime_type /*none*/, GError ** error);
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_mime_type (const char* mime_type /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_mime_type (const gi::cstring_v mime_type);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_mime_type (const gi::cstring_v mime_type, GLib::Error * _error) noexcept;

// GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_type (const char* image_type /*none*/, GError ** error);
// ::GdkPixbufLoader* /*full*/ gdk_pixbuf_loader_new_with_type (const char* image_type /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_type (const gi::cstring_v image_type);
static GI_INLINE_DECL GdkPixbuf::PixbufLoader new_with_type (const gi::cstring_v image_type, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_loader_close (GdkPixbufLoader* loader /*none*/, GError ** error);
// gboolean gdk_pixbuf_loader_close (::GdkPixbufLoader* loader /*none*/, GError ** error);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// GdkPixbufAnimation* /*none,nullable*/ gdk_pixbuf_loader_get_animation (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbufAnimation* /*none,nullable*/ gdk_pixbuf_loader_get_animation (::GdkPixbufLoader* loader /*none*/);
GI_INLINE_DECL GdkPixbuf::PixbufAnimation get_animation () noexcept;

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_loader_get_format (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_loader_get_format (::GdkPixbufLoader* loader /*none*/);
GI_INLINE_DECL GdkPixbuf::PixbufFormat_Ref get_format () noexcept;

// GdkPixbuf* /*none,nullable*/ gdk_pixbuf_loader_get_pixbuf (GdkPixbufLoader* loader /*none*/);
// ::GdkPixbuf* /*none,nullable*/ gdk_pixbuf_loader_get_pixbuf (::GdkPixbufLoader* loader /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// void gdk_pixbuf_loader_set_size (GdkPixbufLoader* loader /*none*/, int width, int height);
// void gdk_pixbuf_loader_set_size (::GdkPixbufLoader* loader /*none*/, gint width, gint height);
GI_INLINE_DECL void set_size (gint width, gint height) noexcept;

// gboolean gdk_pixbuf_loader_write (GdkPixbufLoader* loader /*none*/, const guchar* buf /*none*/, gsize count, GError ** error);
// gboolean gdk_pixbuf_loader_write (::GdkPixbufLoader* loader /*none*/, const guint8* buf /*none*/, gsize count, GError ** error);
GI_INLINE_DECL bool write (const guint8 * buf, gsize count);
GI_INLINE_DECL bool write (const guint8 * buf, gsize count, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_loader_write_bytes (GdkPixbufLoader* loader /*none*/, GBytes* buffer /*none*/, GError ** error);
// gboolean gdk_pixbuf_loader_write_bytes (::GdkPixbufLoader* loader /*none*/, ::GBytes* buffer /*none*/, GError ** error);
GI_INLINE_DECL bool write_bytes (GLib::Bytes_Ref buffer);
GI_INLINE_DECL bool write_bytes (GLib::Bytes_Ref buffer, GLib::Error * _error) noexcept;

// (signal) void area-prepared ();
// (signal) void area-prepared ();
gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> signal_area_prepared()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> (*this, "area-prepared"); }

// (signal) void area-updated (gint x, gint y, gint width, gint height);
// (signal) void area-updated (gint x, gint y, gint width, gint height);
gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint x, gint y, gint width, gint height)> signal_area_updated()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint x, gint y, gint width, gint height)> (*this, "area-updated"); }

// (signal) void closed ();
// (signal) void closed ();
gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> signal_closed()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader)> (*this, "closed"); }

// (signal) void size-prepared (gint width, gint height);
// (signal) void size-prepared (gint width, gint height);
gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint width, gint height)> signal_size_prepared()
{ return gi::signal_proxy<void(GdkPixbuf::PixbufLoader, gint width, gint height)> (*this, "size-prepared"); }

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra_def.hpp>)
#include <gdkpixbuf/pixbufloader_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufloader_extra.hpp>)
#include <gdkpixbuf/pixbufloader_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufLoader : public GI_GDKPIXBUF_PIXBUFLOADER_BASE
{ typedef GI_GDKPIXBUF_PIXBUFLOADER_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufLoader>
{ typedef GdkPixbuf::PixbufLoader type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufLoaderClassDef
{
typedef PixbufLoaderClassDef self;
public:
typedef GdkPixbuf::PixbufLoader instance_type;
typedef ::GdkPixbufLoaderClass class_type;

using GI_MEMBER_CHECK_CONFLICT(area_prepared) = self;
using GI_MEMBER_CHECK_CONFLICT(area_updated) = self;
using GI_MEMBER_CHECK_CONFLICT(closed) = self;
using GI_MEMBER_CHECK_CONFLICT(size_prepared) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PixbufLoaderClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PixbufLoader::area_prepared (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::area_prepared (::GdkPixbufLoader* loader /*none*/);
virtual void area_prepared_ () noexcept = 0;

// void PixbufLoader::area_updated (GdkPixbufLoader* loader /*none*/, int x, int y, int width, int height);
// void PixbufLoader::area_updated (::GdkPixbufLoader* loader /*none*/, gint x, gint y, gint width, gint height);
virtual void area_updated_ (gint x, gint y, gint width, gint height) noexcept = 0;

// void PixbufLoader::closed (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::closed (::GdkPixbufLoader* loader /*none*/);
virtual void closed_ () noexcept = 0;

// void PixbufLoader::size_prepared (GdkPixbufLoader* loader /*none*/, int width, int height);
// void PixbufLoader::size_prepared (::GdkPixbufLoader* loader /*none*/, gint width, gint height);
virtual void size_prepared_ (gint width, gint height) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufLoaderClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufLoaderClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::PixbufLoaderClassDef;
typedef PixbufLoaderClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufLoaderClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void PixbufLoader::area_prepared (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::area_prepared (::GdkPixbufLoader* loader /*none*/);
GI_INLINE_DECL void area_prepared_ () noexcept override;

// void PixbufLoader::area_updated (GdkPixbufLoader* loader /*none*/, int x, int y, int width, int height);
// void PixbufLoader::area_updated (::GdkPixbufLoader* loader /*none*/, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void area_updated_ (gint x, gint y, gint width, gint height) noexcept override;

// void PixbufLoader::closed (GdkPixbufLoader* loader /*none*/);
// void PixbufLoader::closed (::GdkPixbufLoader* loader /*none*/);
GI_INLINE_DECL void closed_ () noexcept override;

// void PixbufLoader::size_prepared (GdkPixbufLoader* loader /*none*/, int width, int height);
// void PixbufLoader::size_prepared (::GdkPixbufLoader* loader /*none*/, gint width, gint height);
GI_INLINE_DECL void size_prepared_ (gint width, gint height) noexcept override;


};


struct PixbufLoaderClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PixbufLoaderClass, area_prepared)
  GI_MEMBER_DEFINE(PixbufLoaderClass, area_updated)
  GI_MEMBER_DEFINE(PixbufLoaderClass, closed)
  GI_MEMBER_DEFINE(PixbufLoaderClass, size_prepared)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, area_prepared),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, area_updated),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, closed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, size_prepared)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PixbufLoaderImpl = detail::ObjectImpl<PixbufLoader, internal::PixbufLoaderClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
