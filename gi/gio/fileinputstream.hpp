// AUTO-GENERATED

#ifndef _GI_GIO_FILEINPUTSTREAM_HPP_
#define _GI_GIO_FILEINPUTSTREAM_HPP_

#include "inputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class FileInfo;
class Seekable;

class FileInputStream;

namespace base {


#define GI_GIO_FILEINPUTSTREAM_BASE base::FileInputStreamBase
class FileInputStreamBase : public Gio::InputStream
{
typedef Gio::InputStream super_type;
public:
typedef ::GFileInputStream BaseObjectType;

FileInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_input_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GFileInfo* /*full*/ g_file_input_stream_query_info (GFileInputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_input_stream_query_info (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, GLib::Error * _error) noexcept;

// void g_file_input_stream_query_info_async (GFileInputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_input_stream_query_info_async (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* /*full*/ g_file_input_stream_query_info_finish (GFileInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_input_stream_query_info_finish (::GFileInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_def.hpp>)
#include <gio/fileinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra.hpp>)
#include <gio/fileinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileInputStream : public GI_GIO_FILEINPUTSTREAM_BASE
{ typedef GI_GIO_FILEINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileInputStream>
{ typedef Gio::FileInputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileInputStreamClassDef
{
typedef FileInputStreamClassDef self;
public:
typedef Gio::FileInputStream instance_type;
typedef ::GFileInputStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(can_seek) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_async) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(seek) = self;
using GI_MEMBER_CHECK_CONFLICT(tell) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FileInputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileInputStream::can_seek (GFileInputStream* stream /*none*/);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream /*none*/);
virtual bool can_seek_ () noexcept = 0;

// GFileInfo* /*full*/ FileInputStream::query_info (GFileInputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void FileInputStream::query_info_async (GFileInputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void query_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileInfo* /*full*/ FileInputStream::query_info_finish (GFileInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info_finish (::GFileInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::FileInfo query_info_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean FileInputStream::seek (GFileInputStream* stream /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// goffset FileInputStream::tell (GFileInputStream* stream /*none*/);
// gint64 FileInputStream::tell (::GFileInputStream* stream /*none*/);
virtual gint64 tell_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FileInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FileInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
friend class internal::FileInputStreamClassDef;
typedef FileInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gboolean FileInputStream::can_seek (GFileInputStream* stream /*none*/);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream /*none*/);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// GFileInfo* /*full*/ FileInputStream::query_info (GFileInputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void FileInputStream::query_info_async (GFileInputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileInfo* /*full*/ FileInputStream::query_info_finish (GFileInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info_finish (::GFileInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean FileInputStream::seek (GFileInputStream* stream /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) override;

// goffset FileInputStream::tell (GFileInputStream* stream /*none*/);
// gint64 FileInputStream::tell (::GFileInputStream* stream /*none*/);
GI_INLINE_DECL gint64 tell_ () noexcept override;


};


struct FileInputStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FileInputStreamClass, can_seek)
  GI_MEMBER_DEFINE(FileInputStreamClass, query_info)
  GI_MEMBER_DEFINE(FileInputStreamClass, query_info_async)
  GI_MEMBER_DEFINE(FileInputStreamClass, query_info_finish)
  GI_MEMBER_DEFINE(FileInputStreamClass, seek)
  GI_MEMBER_DEFINE(FileInputStreamClass, tell)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, tell)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FileInputStreamImpl = detail::ObjectImpl<FileInputStream, internal::FileInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
