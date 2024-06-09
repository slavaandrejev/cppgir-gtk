// AUTO-GENERATED

#ifndef _GI_GIO_FILEOUTPUTSTREAM_HPP_
#define _GI_GIO_FILEOUTPUTSTREAM_HPP_

#include "outputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class FileInfo;
class Seekable;

class FileOutputStream;

namespace base {


#define GI_GIO_FILEOUTPUTSTREAM_BASE base::FileOutputStreamBase
class FileOutputStreamBase : public Gio::OutputStream
{
typedef Gio::OutputStream super_type;
public:
typedef ::GFileOutputStream BaseObjectType;

FileOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_output_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// char* /*full,nullable*/ g_file_output_stream_get_etag (GFileOutputStream* stream /*none*/);
// char* /*full,nullable*/ g_file_output_stream_get_etag (::GFileOutputStream* stream /*none*/);
GI_INLINE_DECL gi::cstring get_etag () noexcept;

// GFileInfo* /*full*/ g_file_output_stream_query_info (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_output_stream_query_info (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, GLib::Error * _error) noexcept;

// void g_file_output_stream_query_info_async (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_output_stream_query_info_async (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* /*full*/ g_file_output_stream_query_info_finish (GFileOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_output_stream_query_info_finish (::GFileOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileoutputstream_extra_def.hpp>)
#include <gio/fileoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileoutputstream_extra.hpp>)
#include <gio/fileoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileOutputStream : public GI_GIO_FILEOUTPUTSTREAM_BASE
{ typedef GI_GIO_FILEOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileOutputStream>
{ typedef Gio::FileOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileOutputStreamClassDef
{
typedef FileOutputStreamClassDef self;
public:
typedef Gio::FileOutputStream instance_type;
typedef ::GFileOutputStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(can_seek) = self;
using GI_MEMBER_CHECK_CONFLICT(can_truncate) = self;
using GI_MEMBER_CHECK_CONFLICT(get_etag) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_async) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(seek) = self;
using GI_MEMBER_CHECK_CONFLICT(tell) = self;
using GI_MEMBER_CHECK_CONFLICT(truncate_fn) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FileOutputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileOutputStream::can_seek (GFileOutputStream* stream /*none*/);
// gboolean FileOutputStream::can_seek (::GFileOutputStream* stream /*none*/);
virtual bool can_seek_ () noexcept = 0;

// gboolean FileOutputStream::can_truncate (GFileOutputStream* stream /*none*/);
// gboolean FileOutputStream::can_truncate (::GFileOutputStream* stream /*none*/);
virtual bool can_truncate_ () noexcept = 0;

// char* /*full,nullable*/ FileOutputStream::get_etag (GFileOutputStream* stream /*none*/);
// char* /*full,nullable*/ FileOutputStream::get_etag (::GFileOutputStream* stream /*none*/);
virtual gi::cstring get_etag_ () noexcept = 0;

// GFileInfo* /*full*/ FileOutputStream::query_info (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ FileOutputStream::query_info (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void FileOutputStream::query_info_async (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileOutputStream::query_info_async (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void query_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileInfo* /*full*/ FileOutputStream::query_info_finish (GFileOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ FileOutputStream::query_info_finish (::GFileOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::FileInfo query_info_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean FileOutputStream::seek (GFileOutputStream* stream /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileOutputStream::seek (::GFileOutputStream* stream /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// goffset FileOutputStream::tell (GFileOutputStream* stream /*none*/);
// gint64 FileOutputStream::tell (::GFileOutputStream* stream /*none*/);
virtual gint64 tell_ () noexcept = 0;

// gboolean FileOutputStream::truncate_fn (GFileOutputStream* stream /*none*/, goffset size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileOutputStream::truncate_fn (::GFileOutputStream* stream /*none*/, gint64 size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool truncate_fn_ (gint64 size, Gio::Cancellable cancellable, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class FileOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FileOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
friend class internal::FileOutputStreamClassDef;
typedef FileOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gboolean FileOutputStream::can_seek (GFileOutputStream* stream /*none*/);
// gboolean FileOutputStream::can_seek (::GFileOutputStream* stream /*none*/);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// gboolean FileOutputStream::can_truncate (GFileOutputStream* stream /*none*/);
// gboolean FileOutputStream::can_truncate (::GFileOutputStream* stream /*none*/);
GI_INLINE_DECL bool can_truncate_ () noexcept override;

// char* /*full,nullable*/ FileOutputStream::get_etag (GFileOutputStream* stream /*none*/);
// char* /*full,nullable*/ FileOutputStream::get_etag (::GFileOutputStream* stream /*none*/);
GI_INLINE_DECL gi::cstring get_etag_ () noexcept override;

// GFileInfo* /*full*/ FileOutputStream::query_info (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ FileOutputStream::query_info (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void FileOutputStream::query_info_async (GFileOutputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileOutputStream::query_info_async (::GFileOutputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileInfo* /*full*/ FileOutputStream::query_info_finish (GFileOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ FileOutputStream::query_info_finish (::GFileOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean FileOutputStream::seek (GFileOutputStream* stream /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileOutputStream::seek (::GFileOutputStream* stream /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) override;

// goffset FileOutputStream::tell (GFileOutputStream* stream /*none*/);
// gint64 FileOutputStream::tell (::GFileOutputStream* stream /*none*/);
GI_INLINE_DECL gint64 tell_ () noexcept override;

// gboolean FileOutputStream::truncate_fn (GFileOutputStream* stream /*none*/, goffset size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileOutputStream::truncate_fn (::GFileOutputStream* stream /*none*/, gint64 size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool truncate_fn_ (gint64 size, Gio::Cancellable cancellable, GLib::Error * _error) override;


};


struct FileOutputStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FileOutputStreamClass, can_seek)
  GI_MEMBER_DEFINE(FileOutputStreamClass, can_truncate)
  GI_MEMBER_DEFINE(FileOutputStreamClass, get_etag)
  GI_MEMBER_DEFINE(FileOutputStreamClass, query_info)
  GI_MEMBER_DEFINE(FileOutputStreamClass, query_info_async)
  GI_MEMBER_DEFINE(FileOutputStreamClass, query_info_finish)
  GI_MEMBER_DEFINE(FileOutputStreamClass, seek)
  GI_MEMBER_DEFINE(FileOutputStreamClass, tell)
  GI_MEMBER_DEFINE(FileOutputStreamClass, truncate_fn)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_truncate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_etag),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, tell),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, truncate_fn)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FileOutputStreamImpl = detail::ObjectImpl<FileOutputStream, internal::FileOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
