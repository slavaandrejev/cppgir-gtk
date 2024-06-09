// AUTO-GENERATED

#ifndef _GI_GIO_IOSTREAM_HPP_
#define _GI_GIO_IOSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class OutputStream;

class IOStream;

namespace base {


#define GI_GIO_IOSTREAM_BASE base::IOStreamBase
class IOStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GIOStream BaseObjectType;

IOStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_io_stream_get_type(); } 

// gboolean g_io_stream_splice_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean g_io_stream_splice_finish (::GAsyncResult* result /*none*/, GError ** error);
static GI_INLINE_DECL bool splice_finish (Gio::AsyncResult result);
static GI_INLINE_DECL bool splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_io_stream_clear_pending (GIOStream* stream /*none*/);
// void g_io_stream_clear_pending (::GIOStream* stream /*none*/);
GI_INLINE_DECL void clear_pending () noexcept;

// gboolean g_io_stream_close (GIOStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_io_stream_close (::GIOStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_io_stream_close_async (GIOStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_io_stream_close_async (::GIOStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_io_stream_close_finish (GIOStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_io_stream_close_finish (::GIOStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GInputStream* /*none*/ g_io_stream_get_input_stream (GIOStream* stream /*none*/);
// ::GInputStream* /*none*/ g_io_stream_get_input_stream (::GIOStream* stream /*none*/);
GI_INLINE_DECL Gio::InputStream get_input_stream () noexcept;

// GOutputStream* /*none*/ g_io_stream_get_output_stream (GIOStream* stream /*none*/);
// ::GOutputStream* /*none*/ g_io_stream_get_output_stream (::GIOStream* stream /*none*/);
GI_INLINE_DECL Gio::OutputStream get_output_stream () noexcept;

// gboolean g_io_stream_has_pending (GIOStream* stream /*none*/);
// gboolean g_io_stream_has_pending (::GIOStream* stream /*none*/);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_io_stream_is_closed (GIOStream* stream /*none*/);
// gboolean g_io_stream_is_closed (::GIOStream* stream /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_io_stream_set_pending (GIOStream* stream /*none*/, GError ** error);
// gboolean g_io_stream_set_pending (::GIOStream* stream /*none*/, GError ** error);
GI_INLINE_DECL bool set_pending ();
GI_INLINE_DECL bool set_pending (GLib::Error * _error) noexcept;

// void g_io_stream_splice_async (GIOStream* stream1 /*none*/, GIOStream* stream2 /*none*/, GIOStreamSpliceFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_io_stream_splice_async (::GIOStream* stream1 /*none*/, ::GIOStream* stream2 /*none*/, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

gi::property_proxy<bool, base::IOStreamBase> property_closed()
{ return gi::property_proxy<bool, base::IOStreamBase> (*this, "closed"); }
const gi::property_proxy<bool, base::IOStreamBase> property_closed() const
{ return gi::property_proxy<bool, base::IOStreamBase> (*this, "closed"); }

gi::property_proxy<Gio::InputStream, base::IOStreamBase> property_input_stream()
{ return gi::property_proxy<Gio::InputStream, base::IOStreamBase> (*this, "input-stream"); }
const gi::property_proxy<Gio::InputStream, base::IOStreamBase> property_input_stream() const
{ return gi::property_proxy<Gio::InputStream, base::IOStreamBase> (*this, "input-stream"); }

gi::property_proxy<Gio::OutputStream, base::IOStreamBase> property_output_stream()
{ return gi::property_proxy<Gio::OutputStream, base::IOStreamBase> (*this, "output-stream"); }
const gi::property_proxy<Gio::OutputStream, base::IOStreamBase> property_output_stream() const
{ return gi::property_proxy<Gio::OutputStream, base::IOStreamBase> (*this, "output-stream"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_def.hpp>)
#include <gio/iostream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iostream_extra.hpp>)
#include <gio/iostream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class IOStream : public GI_GIO_IOSTREAM_BASE
{ typedef GI_GIO_IOSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIOStream>
{ typedef Gio::IOStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IOStreamClassDef
{
typedef IOStreamClassDef self;
public:
typedef Gio::IOStream instance_type;
typedef ::GIOStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close_async) = self;
using GI_MEMBER_CHECK_CONFLICT(close_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(close_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(get_input_stream) = self;
using GI_MEMBER_CHECK_CONFLICT(get_output_stream) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~IOStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void IOStream::close_async (GIOStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void IOStream::close_async (::GIOStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean IOStream::close_finish (GIOStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean IOStream::close_finish (::GIOStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean IOStream::close_fn (GIOStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean IOStream::close_fn (::GIOStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GInputStream* /*none*/ IOStream::get_input_stream (GIOStream* stream /*none*/);
// ::GInputStream* /*none*/ IOStream::get_input_stream (::GIOStream* stream /*none*/);
virtual Gio::InputStream get_input_stream_ () noexcept = 0;

// GOutputStream* /*none*/ IOStream::get_output_stream (GIOStream* stream /*none*/);
// ::GOutputStream* /*none*/ IOStream::get_output_stream (::GIOStream* stream /*none*/);
virtual Gio::OutputStream get_output_stream_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IOStreamClass: public detail::ClassTemplate<Gio::impl::internal::IOStreamClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::IOStreamClassDef;
typedef IOStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::IOStreamClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void IOStream::close_async (GIOStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void IOStream::close_async (::GIOStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean IOStream::close_finish (GIOStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean IOStream::close_finish (::GIOStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean IOStream::close_fn (GIOStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean IOStream::close_fn (::GIOStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// GInputStream* /*none*/ IOStream::get_input_stream (GIOStream* stream /*none*/);
// ::GInputStream* /*none*/ IOStream::get_input_stream (::GIOStream* stream /*none*/);
GI_INLINE_DECL Gio::InputStream get_input_stream_ () noexcept override;

// GOutputStream* /*none*/ IOStream::get_output_stream (GIOStream* stream /*none*/);
// ::GOutputStream* /*none*/ IOStream::get_output_stream (::GIOStream* stream /*none*/);
GI_INLINE_DECL Gio::OutputStream get_output_stream_ () noexcept override;


};


struct IOStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(IOStreamClass, close_async)
  GI_MEMBER_DEFINE(IOStreamClass, close_finish)
  GI_MEMBER_DEFINE(IOStreamClass, close_fn)
  GI_MEMBER_DEFINE(IOStreamClass, get_input_stream)
  GI_MEMBER_DEFINE(IOStreamClass, get_output_stream)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_input_stream),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_output_stream)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using IOStreamImpl = detail::ObjectImpl<IOStream, internal::IOStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
