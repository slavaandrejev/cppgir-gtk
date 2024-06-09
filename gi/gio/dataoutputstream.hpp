// AUTO-GENERATED

#ifndef _GI_GIO_DATAOUTPUTSTREAM_HPP_
#define _GI_GIO_DATAOUTPUTSTREAM_HPP_

#include "filteroutputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class OutputStream;
class Seekable;

class DataOutputStream;

namespace base {


#define GI_GIO_DATAOUTPUTSTREAM_BASE base::DataOutputStreamBase
class DataOutputStreamBase : public Gio::FilterOutputStream
{
typedef Gio::FilterOutputStream super_type;
public:
typedef ::GDataOutputStream BaseObjectType;

DataOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_data_output_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GDataOutputStream* /*full*/ g_data_output_stream_new (GOutputStream* base_stream /*none*/);
// ::GDataOutputStream* /*full*/ g_data_output_stream_new (::GOutputStream* base_stream /*none*/);
static GI_INLINE_DECL Gio::DataOutputStream new_ (Gio::OutputStream base_stream) noexcept;

// GDataStreamByteOrder g_data_output_stream_get_byte_order (GDataOutputStream* stream /*none*/);
// ::GDataStreamByteOrder g_data_output_stream_get_byte_order (::GDataOutputStream* stream /*none*/);
GI_INLINE_DECL Gio::DataStreamByteOrder get_byte_order () noexcept;

// gboolean g_data_output_stream_put_byte (GDataOutputStream* stream /*none*/, guchar data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_byte (::GDataOutputStream* stream /*none*/, guint8 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_byte (guint8 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_byte (guint8 data);
GI_INLINE_DECL bool put_byte (guint8 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_byte (guint8 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_int16 (GDataOutputStream* stream /*none*/, gint16 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_int16 (::GDataOutputStream* stream /*none*/, gint16 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_int16 (gint16 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_int16 (gint16 data);
GI_INLINE_DECL bool put_int16 (gint16 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_int16 (gint16 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_int32 (GDataOutputStream* stream /*none*/, gint32 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_int32 (::GDataOutputStream* stream /*none*/, gint32 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_int32 (gint32 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_int32 (gint32 data);
GI_INLINE_DECL bool put_int32 (gint32 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_int32 (gint32 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_int64 (GDataOutputStream* stream /*none*/, gint64 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_int64 (::GDataOutputStream* stream /*none*/, gint64 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_int64 (gint64 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_int64 (gint64 data);
GI_INLINE_DECL bool put_int64 (gint64 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_int64 (gint64 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_string (GDataOutputStream* stream /*none*/, const char* str /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_string (::GDataOutputStream* stream /*none*/, const char* str /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_string (const gi::cstring_v str, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_string (const gi::cstring_v str);
GI_INLINE_DECL bool put_string (const gi::cstring_v str, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_string (const gi::cstring_v str, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_uint16 (GDataOutputStream* stream /*none*/, guint16 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_uint16 (::GDataOutputStream* stream /*none*/, guint16 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_uint16 (guint16 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_uint16 (guint16 data);
GI_INLINE_DECL bool put_uint16 (guint16 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_uint16 (guint16 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_uint32 (GDataOutputStream* stream /*none*/, guint32 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_uint32 (::GDataOutputStream* stream /*none*/, guint32 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_uint32 (guint32 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_uint32 (guint32 data);
GI_INLINE_DECL bool put_uint32 (guint32 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_uint32 (guint32 data, GLib::Error * _error) noexcept;

// gboolean g_data_output_stream_put_uint64 (GDataOutputStream* stream /*none*/, guint64 data, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_data_output_stream_put_uint64 (::GDataOutputStream* stream /*none*/, guint64 data, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool put_uint64 (guint64 data, Gio::Cancellable cancellable);
GI_INLINE_DECL bool put_uint64 (guint64 data);
GI_INLINE_DECL bool put_uint64 (guint64 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool put_uint64 (guint64 data, GLib::Error * _error) noexcept;

// void g_data_output_stream_set_byte_order (GDataOutputStream* stream /*none*/, GDataStreamByteOrder order);
// void g_data_output_stream_set_byte_order (::GDataOutputStream* stream /*none*/, ::GDataStreamByteOrder order);
GI_INLINE_DECL void set_byte_order (Gio::DataStreamByteOrder order) noexcept;

gi::property_proxy<Gio::DataStreamByteOrder, base::DataOutputStreamBase> property_byte_order()
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataOutputStreamBase> (*this, "byte-order"); }
const gi::property_proxy<Gio::DataStreamByteOrder, base::DataOutputStreamBase> property_byte_order() const
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataOutputStreamBase> (*this, "byte-order"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dataoutputstream_extra_def.hpp>)
#include <gio/dataoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dataoutputstream_extra.hpp>)
#include <gio/dataoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DataOutputStream : public GI_GIO_DATAOUTPUTSTREAM_BASE
{ typedef GI_GIO_DATAOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDataOutputStream>
{ typedef Gio::DataOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DataOutputStreamClassDef
{
typedef DataOutputStreamClassDef self;
public:
typedef Gio::DataOutputStream instance_type;
typedef ::GDataOutputStreamClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DataOutputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DataOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::DataOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
friend class internal::DataOutputStreamClassDef;
typedef DataOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DataOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;



};


struct DataOutputStreamClassDef::TypeInitData
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

using DataOutputStreamImpl = detail::ObjectImpl<DataOutputStream, internal::DataOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
