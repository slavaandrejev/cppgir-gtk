// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDINPUTSTREAM_HPP_
#define _GI_GIO_BUFFEREDINPUTSTREAM_HPP_

#include "filterinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class Seekable;

class BufferedInputStream;

namespace base {


#define GI_GIO_BUFFEREDINPUTSTREAM_BASE base::BufferedInputStreamBase
class BufferedInputStreamBase : public Gio::FilterInputStream
{
typedef Gio::FilterInputStream super_type;
public:
typedef ::GBufferedInputStream BaseObjectType;

BufferedInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_buffered_input_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GInputStream* /*full*/ g_buffered_input_stream_new (GInputStream* base_stream /*none*/);
// ::GBufferedInputStream* /*full*/ g_buffered_input_stream_new (::GInputStream* base_stream /*none*/);
static GI_INLINE_DECL Gio::BufferedInputStream new_ (Gio::InputStream base_stream) noexcept;

// GInputStream* /*full*/ g_buffered_input_stream_new_sized (GInputStream* base_stream /*none*/, gsize size);
// ::GBufferedInputStream* /*full*/ g_buffered_input_stream_new_sized (::GInputStream* base_stream /*none*/, gsize size);
static GI_INLINE_DECL Gio::BufferedInputStream new_sized (Gio::InputStream base_stream, gsize size) noexcept;

// gssize g_buffered_input_stream_fill (GBufferedInputStream* stream /*none*/, gssize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_buffered_input_stream_fill (::GBufferedInputStream* stream /*none*/, gssize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize fill (gssize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize fill (gssize count);
GI_INLINE_DECL gssize fill (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize fill (gssize count, GLib::Error * _error) noexcept;

// void g_buffered_input_stream_fill_async (GBufferedInputStream* stream /*none*/, gssize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_buffered_input_stream_fill_async (::GBufferedInputStream* stream /*none*/, gssize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void fill_async (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void fill_async (gssize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_buffered_input_stream_fill_finish (GBufferedInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_buffered_input_stream_fill_finish (::GBufferedInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize fill_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize fill_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gsize g_buffered_input_stream_get_available (GBufferedInputStream* stream /*none*/);
// gsize g_buffered_input_stream_get_available (::GBufferedInputStream* stream /*none*/);
GI_INLINE_DECL gsize get_available () noexcept;

// gsize g_buffered_input_stream_get_buffer_size (GBufferedInputStream* stream /*none*/);
// gsize g_buffered_input_stream_get_buffer_size (::GBufferedInputStream* stream /*none*/);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// gsize g_buffered_input_stream_peek (GBufferedInputStream* stream /*none*/, void* buffer /*none*/, gsize offset, gsize count);
// gsize g_buffered_input_stream_peek (::GBufferedInputStream* stream /*none*/, guint8* buffer /*none*/, gsize offset, gsize count);
GI_INLINE_DECL gsize peek (const guint8 * buffer, gsize offset, gsize count) noexcept;

// void* /*none*/ g_buffered_input_stream_peek_buffer (GBufferedInputStream* stream /*none*/, gsize* count);
// guint8* /*none*/ g_buffered_input_stream_peek_buffer (::GBufferedInputStream* stream /*none*/, gsize* count);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> peek_buffer () noexcept;

// int g_buffered_input_stream_read_byte (GBufferedInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_buffered_input_stream_read_byte (::GBufferedInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gint read_byte (Gio::Cancellable cancellable);
GI_INLINE_DECL gint read_byte ();
GI_INLINE_DECL gint read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint read_byte (GLib::Error * _error) noexcept;

// void g_buffered_input_stream_set_buffer_size (GBufferedInputStream* stream /*none*/, gsize size);
// void g_buffered_input_stream_set_buffer_size (::GBufferedInputStream* stream /*none*/, gsize size);
GI_INLINE_DECL void set_buffer_size (gsize size) noexcept;

gi::property_proxy<guint, base::BufferedInputStreamBase> property_buffer_size()
{ return gi::property_proxy<guint, base::BufferedInputStreamBase> (*this, "buffer-size"); }
const gi::property_proxy<guint, base::BufferedInputStreamBase> property_buffer_size() const
{ return gi::property_proxy<guint, base::BufferedInputStreamBase> (*this, "buffer-size"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_def.hpp>)
#include <gio/bufferedinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra.hpp>)
#include <gio/bufferedinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class BufferedInputStream : public GI_GIO_BUFFEREDINPUTSTREAM_BASE
{ typedef GI_GIO_BUFFEREDINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GBufferedInputStream>
{ typedef Gio::BufferedInputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class BufferedInputStreamClassDef
{
typedef BufferedInputStreamClassDef self;
public:
typedef Gio::BufferedInputStream instance_type;
typedef ::GBufferedInputStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(fill) = self;
using GI_MEMBER_CHECK_CONFLICT(fill_async) = self;
using GI_MEMBER_CHECK_CONFLICT(fill_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~BufferedInputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gssize BufferedInputStream::fill (GBufferedInputStream* stream /*none*/, gssize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream /*none*/, gssize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gssize fill_ (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void BufferedInputStream::fill_async (GBufferedInputStream* stream /*none*/, gssize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream /*none*/, gssize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void fill_async_ (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gssize fill_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class BufferedInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::BufferedInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
friend class internal::BufferedInputStreamClassDef;
typedef BufferedInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::BufferedInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gssize BufferedInputStream::fill (GBufferedInputStream* stream /*none*/, gssize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream /*none*/, gssize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize fill_ (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void BufferedInputStream::fill_async (GBufferedInputStream* stream /*none*/, gssize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream /*none*/, gssize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void fill_async_ (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize fill_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct BufferedInputStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(BufferedInputStreamClass, fill)
  GI_MEMBER_DEFINE(BufferedInputStreamClass, fill_async)
  GI_MEMBER_DEFINE(BufferedInputStreamClass, fill_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, fill),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, fill_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, fill_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using BufferedInputStreamImpl = detail::ObjectImpl<BufferedInputStream, internal::BufferedInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
