// AUTO-GENERATED

#ifndef _GI_GTK_MEDIAFILE_HPP_
#define _GI_GTK_MEDIAFILE_HPP_

#include "mediastream.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MediaFile;

namespace base {


#define GI_GTK_MEDIAFILE_BASE base::MediaFileBase
class MediaFileBase : public Gtk::MediaStream
{
typedef Gtk::MediaStream super_type;
public:
typedef ::GtkMediaFile BaseObjectType;

MediaFileBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_media_file_get_type(); } 

// GtkMediaStream* /*full*/ gtk_media_file_new ();
// ::GtkMediaFile* /*full*/ gtk_media_file_new ();
static GI_INLINE_DECL Gtk::MediaFile new_ () noexcept;

// GtkMediaStream* /*full*/ gtk_media_file_new_for_file (GFile* file /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_file (::GFile* file /*none*/);
static GI_INLINE_DECL Gtk::MediaFile new_for_file (Gio::File file) noexcept;

// GtkMediaStream* /*full*/ gtk_media_file_new_for_filename (const char* filename /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_filename (const char* filename /*none*/);
static GI_INLINE_DECL Gtk::MediaFile new_for_filename (const gi::cstring_v filename) noexcept;

// GtkMediaStream* /*full*/ gtk_media_file_new_for_input_stream (GInputStream* stream /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_input_stream (::GInputStream* stream /*none*/);
static GI_INLINE_DECL Gtk::MediaFile new_for_input_stream (Gio::InputStream stream) noexcept;

// GtkMediaStream* /*full*/ gtk_media_file_new_for_resource (const char* resource_path /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_resource (const char* resource_path /*none*/);
static GI_INLINE_DECL Gtk::MediaFile new_for_resource (const gi::cstring_v resource_path) noexcept;

// void gtk_media_file_clear (GtkMediaFile* self /*none*/);
// void gtk_media_file_clear (::GtkMediaFile* self /*none*/);
GI_INLINE_DECL void clear () noexcept;

// GFile* /*none,nullable*/ gtk_media_file_get_file (GtkMediaFile* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_media_file_get_file (::GtkMediaFile* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// GInputStream* /*none,nullable*/ gtk_media_file_get_input_stream (GtkMediaFile* self /*none*/);
// ::GInputStream* /*none,nullable*/ gtk_media_file_get_input_stream (::GtkMediaFile* self /*none*/);
GI_INLINE_DECL Gio::InputStream get_input_stream () noexcept;

// void gtk_media_file_set_file (GtkMediaFile* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_media_file_set_file (::GtkMediaFile* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_file () noexcept;

// void gtk_media_file_set_filename (GtkMediaFile* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_media_file_set_filename (::GtkMediaFile* self /*none*/, const char* filename /*none,nullable*/);
GI_INLINE_DECL void set_filename (const gi::cstring_v filename) noexcept;
GI_INLINE_DECL void set_filename () noexcept;

// void gtk_media_file_set_input_stream (GtkMediaFile* self /*none*/, GInputStream* stream /*none,nullable*/);
// void gtk_media_file_set_input_stream (::GtkMediaFile* self /*none*/, ::GInputStream* stream /*none,nullable*/);
GI_INLINE_DECL void set_input_stream (Gio::InputStream stream) noexcept;
GI_INLINE_DECL void set_input_stream () noexcept;

// void gtk_media_file_set_resource (GtkMediaFile* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_media_file_set_resource (::GtkMediaFile* self /*none*/, const char* resource_path /*none,nullable*/);
GI_INLINE_DECL void set_resource (const gi::cstring_v resource_path) noexcept;
GI_INLINE_DECL void set_resource () noexcept;

gi::property_proxy<Gio::File, base::MediaFileBase> property_file()
{ return gi::property_proxy<Gio::File, base::MediaFileBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::MediaFileBase> property_file() const
{ return gi::property_proxy<Gio::File, base::MediaFileBase> (*this, "file"); }

gi::property_proxy<Gio::InputStream, base::MediaFileBase> property_input_stream()
{ return gi::property_proxy<Gio::InputStream, base::MediaFileBase> (*this, "input-stream"); }
const gi::property_proxy<Gio::InputStream, base::MediaFileBase> property_input_stream() const
{ return gi::property_proxy<Gio::InputStream, base::MediaFileBase> (*this, "input-stream"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediafile_extra_def.hpp>)
#include <gtk/mediafile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediafile_extra.hpp>)
#include <gtk/mediafile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MediaFile : public GI_GTK_MEDIAFILE_BASE
{ typedef GI_GTK_MEDIAFILE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMediaFile>
{ typedef Gtk::MediaFile type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MediaFileClassDef
{
typedef MediaFileClassDef self;
public:
typedef Gtk::MediaFile instance_type;
typedef ::GtkMediaFileClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close) = self;
using GI_MEMBER_CHECK_CONFLICT(open) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaFileClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MediaFile::close (GtkMediaFile* self /*none*/);
// void MediaFile::close (::GtkMediaFile* self /*none*/);
virtual void close_ () noexcept = 0;

// void MediaFile::open (GtkMediaFile* self /*none*/);
// void MediaFile::open (::GtkMediaFile* self /*none*/);
virtual void open_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MediaFileClass: public detail::ClassTemplate<Gtk::impl::internal::MediaFileClassDef, Gtk::impl::internal::MediaStreamClass>
{
friend class internal::MediaFileClassDef;
typedef MediaFileClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MediaFileClassDef, Gtk::impl::internal::MediaStreamClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void MediaFile::close (GtkMediaFile* self /*none*/);
// void MediaFile::close (::GtkMediaFile* self /*none*/);
GI_INLINE_DECL void close_ () noexcept override;

// void MediaFile::open (GtkMediaFile* self /*none*/);
// void MediaFile::open (::GtkMediaFile* self /*none*/);
GI_INLINE_DECL void open_ () noexcept override;


};


struct MediaFileClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(MediaFileClass, close)
  GI_MEMBER_DEFINE(MediaFileClass, open)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, open)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MediaFileImpl = detail::ObjectImpl<MediaFile, internal::MediaFileClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
