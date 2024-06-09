// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTSTREAM_HPP_
#define _GI_GIO_OUTPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class OutputVector;
class OutputVector_Ref;

class OutputStream;

namespace base {


#define GI_GIO_OUTPUTSTREAM_BASE base::OutputStreamBase
class OutputStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GOutputStream BaseObjectType;

OutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_output_stream_get_type(); } 

// void g_output_stream_clear_pending (GOutputStream* stream /*none*/);
// void g_output_stream_clear_pending (::GOutputStream* stream /*none*/);
GI_INLINE_DECL void clear_pending () noexcept;

// gboolean g_output_stream_close (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_close (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_output_stream_close_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_close_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_close_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_output_stream_close_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_flush (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_flush (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool flush (Gio::Cancellable cancellable);
GI_INLINE_DECL bool flush ();
GI_INLINE_DECL bool flush (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool flush (GLib::Error * _error) noexcept;

// void g_output_stream_flush_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_flush_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void flush_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void flush_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_flush_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_output_stream_flush_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_has_pending (GOutputStream* stream /*none*/);
// gboolean g_output_stream_has_pending (::GOutputStream* stream /*none*/);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_output_stream_is_closed (GOutputStream* stream /*none*/);
// gboolean g_output_stream_is_closed (::GOutputStream* stream /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_output_stream_is_closing (GOutputStream* stream /*none*/);
// gboolean g_output_stream_is_closing (::GOutputStream* stream /*none*/);
GI_INLINE_DECL bool is_closing () noexcept;

// gboolean g_output_stream_printf (GOutputStream* stream /*none*/, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gboolean g_output_stream_printf (::GOutputStream* stream /*none*/, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_output_stream_set_pending (GOutputStream* stream /*none*/, GError ** error);
// gboolean g_output_stream_set_pending (::GOutputStream* stream /*none*/, GError ** error);
GI_INLINE_DECL bool set_pending ();
GI_INLINE_DECL bool set_pending (GLib::Error * _error) noexcept;

// gssize g_output_stream_splice (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_splice (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, GLib::Error * _error) noexcept;

// void g_output_stream_splice_async (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_splice_async (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_splice_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_splice_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize splice_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_vprintf (GOutputStream* stream /*none*/, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// gboolean g_output_stream_vprintf (::GOutputStream* stream /*none*/, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported, inconsistent error in pointer depth (2 vs 1)

// gssize g_output_stream_write (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_write (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize write (const guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write (const guint8 * buffer, gsize count);
GI_INLINE_DECL gssize write (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// gboolean g_output_stream_write_all (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_write_all (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool write_all (const guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable);
GI_INLINE_DECL bool write_all (const guint8 * buffer, gsize count, gsize * bytes_written);
GI_INLINE_DECL bool write_all (const guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool write_all (const guint8 * buffer, gsize count, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all (const guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gsize> write_all (const guint8 * buffer, gsize count);
GI_INLINE_DECL std::tuple<bool, gsize> write_all (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// void g_output_stream_write_all_async (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_all_async (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_all_async (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_all_async (const guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_write_all_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_write_all_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool write_all_finish (Gio::AsyncResult result, gsize * bytes_written);
GI_INLINE_DECL bool write_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> write_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_output_stream_write_async (GOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_async (::GOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_async (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_async (const guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_write_bytes (GOutputStream* stream /*none*/, GBytes* bytes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_output_stream_write_bytes (::GOutputStream* stream /*none*/, ::GBytes* bytes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes_Ref bytes, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes_Ref bytes);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes_Ref bytes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write_bytes (GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept;

// void g_output_stream_write_bytes_async (GOutputStream* stream /*none*/, GBytes* bytes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_write_bytes_async (::GOutputStream* stream /*none*/, ::GBytes* bytes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_bytes_async (GLib::Bytes_Ref bytes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_bytes_async (GLib::Bytes_Ref bytes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_write_bytes_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_write_bytes_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize write_bytes_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize write_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gssize g_output_stream_write_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_output_stream_write_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize write_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize write_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_writev (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_writev (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_all (GOutputStream* stream /*none*/, GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_output_stream_writev_all (::GOutputStream* stream /*none*/, ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// void g_output_stream_writev_all_async (GOutputStream* stream /*none*/, GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_writev_all_async (::GOutputStream* stream /*none*/, ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_all_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_all_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool writev_all_finish (Gio::AsyncResult result, gsize * bytes_written);
GI_INLINE_DECL bool writev_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> writev_all_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> writev_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_output_stream_writev_async (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_output_stream_writev_async (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean g_output_stream_writev_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool writev_finish (Gio::AsyncResult result, gsize * bytes_written);
GI_INLINE_DECL bool writev_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> writev_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> writev_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_def.hpp>)
#include <gio/outputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra.hpp>)
#include <gio/outputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class OutputStream : public GI_GIO_OUTPUTSTREAM_BASE
{ typedef GI_GIO_OUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GOutputStream>
{ typedef Gio::OutputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class OutputStreamClassDef
{
typedef OutputStreamClassDef self;
public:
typedef Gio::OutputStream instance_type;
typedef ::GOutputStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close_async) = self;
using GI_MEMBER_CHECK_CONFLICT(close_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(close_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(flush) = self;
using GI_MEMBER_CHECK_CONFLICT(flush_async) = self;
using GI_MEMBER_CHECK_CONFLICT(flush_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(splice) = self;
using GI_MEMBER_CHECK_CONFLICT(splice_async) = self;
using GI_MEMBER_CHECK_CONFLICT(splice_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(write_async) = self;
using GI_MEMBER_CHECK_CONFLICT(write_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(write_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(writev_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~OutputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void OutputStream::close_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::close_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean OutputStream::close_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::close_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean OutputStream::close_fn (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::close_fn (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// gboolean OutputStream::flush (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::flush (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool flush_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void OutputStream::flush_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::flush_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void flush_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean OutputStream::flush_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::flush_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool flush_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gssize OutputStream::splice (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::splice (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gssize splice_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void OutputStream::splice_async (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::splice_async (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void splice_async_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gssize OutputStream::splice_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::splice_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gssize splice_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void OutputStream::write_async (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::write_async (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void write_async_ (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gssize OutputStream::write_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::write_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gssize write_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gssize OutputStream::write_fn (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::write_fn (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gssize write_fn_ (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void OutputStream::writev_async (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::writev_async (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean OutputStream::writev_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean OutputStream::writev_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
virtual bool writev_finish_ (Gio::AsyncResult result, gsize & bytes_written, GLib::Error * _error) = 0;

// gboolean OutputStream::writev_fn (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::writev_fn (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)


};

GI_CLASS_IMPL_BEGIN


class OutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::OutputStreamClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::OutputStreamClassDef;
typedef OutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::OutputStreamClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void OutputStream::close_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::close_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean OutputStream::close_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::close_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean OutputStream::close_fn (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::close_fn (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// gboolean OutputStream::flush (GOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::flush (::GOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool flush_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void OutputStream::flush_async (GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::flush_async (::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void flush_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean OutputStream::flush_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean OutputStream::flush_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool flush_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gssize OutputStream::splice (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::splice (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize splice_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void OutputStream::splice_async (GOutputStream* stream /*none*/, GInputStream* source /*none*/, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::splice_async (::GOutputStream* stream /*none*/, ::GInputStream* source /*none*/, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void splice_async_ (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gssize OutputStream::splice_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::splice_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize splice_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void OutputStream::write_async (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::write_async (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_async_ (const guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gssize OutputStream::write_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize OutputStream::write_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize write_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gssize OutputStream::write_fn (GOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize OutputStream::write_fn (::GOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize write_fn_ (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void OutputStream::writev_async (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void OutputStream::writev_async (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; vectors in boxed array not supported (depth 1)

// gboolean OutputStream::writev_finish (GOutputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
// gboolean OutputStream::writev_finish (::GOutputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool writev_finish_ (Gio::AsyncResult result, gsize & bytes_written, GLib::Error * _error) override;

// gboolean OutputStream::writev_fn (GOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean OutputStream::writev_fn (::GOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)


};


struct OutputStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(OutputStreamClass, close_async)
  GI_MEMBER_DEFINE(OutputStreamClass, close_finish)
  GI_MEMBER_DEFINE(OutputStreamClass, close_fn)
  GI_MEMBER_DEFINE(OutputStreamClass, flush)
  GI_MEMBER_DEFINE(OutputStreamClass, flush_async)
  GI_MEMBER_DEFINE(OutputStreamClass, flush_finish)
  GI_MEMBER_DEFINE(OutputStreamClass, splice)
  GI_MEMBER_DEFINE(OutputStreamClass, splice_async)
  GI_MEMBER_DEFINE(OutputStreamClass, splice_finish)
  GI_MEMBER_DEFINE(OutputStreamClass, write_async)
  GI_MEMBER_DEFINE(OutputStreamClass, write_finish)
  GI_MEMBER_DEFINE(OutputStreamClass, write_fn)
  GI_MEMBER_DEFINE(OutputStreamClass, writev_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, flush),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, flush_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, flush_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, splice),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, splice_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, splice_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, writev_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using OutputStreamImpl = detail::ObjectImpl<OutputStream, internal::OutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
