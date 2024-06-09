// AUTO-GENERATED

#ifndef _GI_GIO_DATAINPUTSTREAM_HPP_
#define _GI_GIO_DATAINPUTSTREAM_HPP_

#include "bufferedinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;

class DataInputStream;

namespace base {


#define GI_GIO_DATAINPUTSTREAM_BASE base::DataInputStreamBase
class DataInputStreamBase : public Gio::BufferedInputStream
{
typedef Gio::BufferedInputStream super_type;
public:
typedef ::GDataInputStream BaseObjectType;

DataInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_data_input_stream_get_type(); } 

// GDataInputStream* /*full*/ g_data_input_stream_new (GInputStream* base_stream /*none*/);
// ::GDataInputStream* /*full*/ g_data_input_stream_new (::GInputStream* base_stream /*none*/);
static GI_INLINE_DECL Gio::DataInputStream new_ (Gio::InputStream base_stream) noexcept;

// GDataStreamByteOrder g_data_input_stream_get_byte_order (GDataInputStream* stream /*none*/);
// ::GDataStreamByteOrder g_data_input_stream_get_byte_order (::GDataInputStream* stream /*none*/);
GI_INLINE_DECL Gio::DataStreamByteOrder get_byte_order () noexcept;

// GDataStreamNewlineType g_data_input_stream_get_newline_type (GDataInputStream* stream /*none*/);
// ::GDataStreamNewlineType g_data_input_stream_get_newline_type (::GDataInputStream* stream /*none*/);
GI_INLINE_DECL Gio::DataStreamNewlineType get_newline_type () noexcept;

// guchar g_data_input_stream_read_byte (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint8 g_data_input_stream_read_byte (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL guint8 read_byte (Gio::Cancellable cancellable);
GI_INLINE_DECL guint8 read_byte ();
GI_INLINE_DECL guint8 read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint8 read_byte (GLib::Error * _error) noexcept;

// gint16 g_data_input_stream_read_int16 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint16 g_data_input_stream_read_int16 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gint16 read_int16 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint16 read_int16 ();
GI_INLINE_DECL gint16 read_int16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint16 read_int16 (GLib::Error * _error) noexcept;

// gint32 g_data_input_stream_read_int32 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint32 g_data_input_stream_read_int32 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gint32 read_int32 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint32 read_int32 ();
GI_INLINE_DECL gint32 read_int32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint32 read_int32 (GLib::Error * _error) noexcept;

// gint64 g_data_input_stream_read_int64 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint64 g_data_input_stream_read_int64 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gint64 read_int64 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint64 read_int64 ();
GI_INLINE_DECL gint64 read_int64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint64 read_int64 (GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_data_input_stream_read_line (GDataInputStream* stream /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint8* /*full,nullable*/ g_data_input_stream_read_line (::GDataInputStream* stream /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line (gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line (gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line ();
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line (GLib::Error * _error) noexcept;

// void g_data_input_stream_read_line_async (GDataInputStream* stream /*none*/, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_line_async (::GDataInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_line_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_line_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// char* /*full,nullable*/ g_data_input_stream_read_line_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// guint8* /*full,nullable*/ g_data_input_stream_read_line_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line_finish (Gio::AsyncResult result, gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> read_line_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> read_line_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_data_input_stream_read_line_finish_utf8 (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full,nullable*/ g_data_input_stream_read_line_finish_utf8 (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::cstring read_line_finish_utf8 (Gio::AsyncResult result, gsize * length);
GI_INLINE_DECL gi::cstring read_line_finish_utf8 (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_finish_utf8 (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_finish_utf8 (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_data_input_stream_read_line_utf8 (GDataInputStream* stream /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full,nullable*/ g_data_input_stream_read_line_utf8 (::GDataInputStream* stream /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring read_line_utf8 (gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::cstring read_line_utf8 (gsize * length);
GI_INLINE_DECL gi::cstring read_line_utf8 (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring read_line_utf8 (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_utf8 (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_utf8 ();
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_utf8 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_line_utf8 (GLib::Error * _error) noexcept;

// guint16 g_data_input_stream_read_uint16 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint16 g_data_input_stream_read_uint16 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL guint16 read_uint16 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint16 read_uint16 ();
GI_INLINE_DECL guint16 read_uint16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint16 read_uint16 (GLib::Error * _error) noexcept;

// guint32 g_data_input_stream_read_uint32 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint32 g_data_input_stream_read_uint32 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL guint32 read_uint32 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint32 read_uint32 ();
GI_INLINE_DECL guint32 read_uint32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint32 read_uint32 (GLib::Error * _error) noexcept;

// guint64 g_data_input_stream_read_uint64 (GDataInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// guint64 g_data_input_stream_read_uint64 (::GDataInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL guint64 read_uint64 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint64 read_uint64 ();
GI_INLINE_DECL guint64 read_uint64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint64 read_uint64 (GLib::Error * _error) noexcept;

// char* /*full*/ g_data_input_stream_read_until (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_data_input_stream_read_until (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated

// void g_data_input_stream_read_until_async (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_until_async (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// char* /*full*/ g_data_input_stream_read_until_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_data_input_stream_read_until_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
// IGNORE; deprecated

// char* /*full*/ g_data_input_stream_read_upto (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gssize stop_chars_len, gsize* length, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_data_input_stream_read_upto (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::cstring read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length);
GI_INLINE_DECL gi::cstring read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len);
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto (const gi::cstring_v stop_chars, gssize stop_chars_len, GLib::Error * _error) noexcept;

// void g_data_input_stream_read_upto_async (GDataInputStream* stream /*none*/, const gchar* stop_chars /*none*/, gssize stop_chars_len, gint io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_data_input_stream_read_upto_async (::GDataInputStream* stream /*none*/, const char* stop_chars /*none*/, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_upto_async (const gi::cstring_v stop_chars, gssize stop_chars_len, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_upto_async (const gi::cstring_v stop_chars, gssize stop_chars_len, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// char* /*full*/ g_data_input_stream_read_upto_finish (GDataInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_data_input_stream_read_upto_finish (::GDataInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::cstring read_upto_finish (Gio::AsyncResult result, gsize * length);
GI_INLINE_DECL gi::cstring read_upto_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<gi::cstring, gsize> read_upto_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_data_input_stream_set_byte_order (GDataInputStream* stream /*none*/, GDataStreamByteOrder order);
// void g_data_input_stream_set_byte_order (::GDataInputStream* stream /*none*/, ::GDataStreamByteOrder order);
GI_INLINE_DECL void set_byte_order (Gio::DataStreamByteOrder order) noexcept;

// void g_data_input_stream_set_newline_type (GDataInputStream* stream /*none*/, GDataStreamNewlineType type);
// void g_data_input_stream_set_newline_type (::GDataInputStream* stream /*none*/, ::GDataStreamNewlineType type);
GI_INLINE_DECL void set_newline_type (Gio::DataStreamNewlineType type) noexcept;

gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> property_byte_order()
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> (*this, "byte-order"); }
const gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> property_byte_order() const
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> (*this, "byte-order"); }

gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> property_newline_type()
{ return gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> (*this, "newline-type"); }
const gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> property_newline_type() const
{ return gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> (*this, "newline-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_def.hpp>)
#include <gio/datainputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra.hpp>)
#include <gio/datainputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DataInputStream : public GI_GIO_DATAINPUTSTREAM_BASE
{ typedef GI_GIO_DATAINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDataInputStream>
{ typedef Gio::DataInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DataInputStreamClassDef
{
typedef DataInputStreamClassDef self;
public:
typedef Gio::DataInputStream instance_type;
typedef ::GDataInputStreamClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DataInputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DataInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::DataInputStreamClassDef, Gio::impl::internal::BufferedInputStreamClass>
{
friend class internal::DataInputStreamClassDef;
typedef DataInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DataInputStreamClassDef, Gio::impl::internal::BufferedInputStreamClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct DataInputStreamClassDef::TypeInitData
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

using DataInputStreamImpl = detail::ObjectImpl<DataInputStream, internal::DataInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
