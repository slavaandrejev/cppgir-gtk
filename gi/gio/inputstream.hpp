// AUTO-GENERATED

#ifndef _GI_GIO_INPUTSTREAM_HPP_
#define _GI_GIO_INPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class InputStream;

namespace base {


#define GI_GIO_INPUTSTREAM_BASE base::InputStreamBase
class InputStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GInputStream BaseObjectType;

InputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_input_stream_get_type(); } 

// void g_input_stream_clear_pending (GInputStream* stream /*none*/);
// void g_input_stream_clear_pending (::GInputStream* stream /*none*/);
GI_INLINE_DECL void clear_pending () noexcept;

// gboolean g_input_stream_close (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_input_stream_close (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_input_stream_close_async (GInputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_close_async (::GInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_input_stream_close_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_input_stream_close_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_input_stream_has_pending (GInputStream* stream /*none*/);
// gboolean g_input_stream_has_pending (::GInputStream* stream /*none*/);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_input_stream_is_closed (GInputStream* stream /*none*/);
// gboolean g_input_stream_is_closed (::GInputStream* stream /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gssize g_input_stream_read (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_input_stream_read (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize read (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize read (guint8 * buffer, gsize count);
GI_INLINE_DECL gssize read (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize read (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// gboolean g_input_stream_read_all (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, gsize* bytes_read, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_input_stream_read_all (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gsize* bytes_read, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable);
GI_INLINE_DECL bool read_all (guint8 * buffer, gsize count, gsize & bytes_read);
GI_INLINE_DECL bool read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool read_all (guint8 * buffer, gsize count, gsize & bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gsize> read_all (guint8 * buffer, gsize count);
GI_INLINE_DECL std::tuple<bool, gsize> read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> read_all (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// void g_input_stream_read_all_async (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_all_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_input_stream_read_all_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, gsize* bytes_read, GError ** error);
// gboolean g_input_stream_read_all_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, gsize* bytes_read, GError ** error);
GI_INLINE_DECL bool read_all_finish (Gio::AsyncResult result, gsize & bytes_read);
GI_INLINE_DECL bool read_all_finish (Gio::AsyncResult result, gsize & bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> read_all_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> read_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_input_stream_read_async (GInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GBytes* /*full*/ g_input_stream_read_bytes (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_input_stream_read_bytes (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Bytes read_bytes (gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Bytes read_bytes (gsize count);
GI_INLINE_DECL GLib::Bytes read_bytes (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Bytes read_bytes (gsize count, GLib::Error * _error) noexcept;

// void g_input_stream_read_bytes_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_read_bytes_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_bytes_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_bytes_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GBytes* /*full*/ g_input_stream_read_bytes_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GBytes* /*full*/ g_input_stream_read_bytes_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL GLib::Bytes read_bytes_finish (Gio::AsyncResult result);
GI_INLINE_DECL GLib::Bytes read_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gssize g_input_stream_read_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_input_stream_read_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize read_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_input_stream_set_pending (GInputStream* stream /*none*/, GError ** error);
// gboolean g_input_stream_set_pending (::GInputStream* stream /*none*/, GError ** error);
GI_INLINE_DECL bool set_pending ();
GI_INLINE_DECL bool set_pending (GLib::Error * _error) noexcept;

// gssize g_input_stream_skip (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_input_stream_skip (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize skip (gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize skip (gsize count);
GI_INLINE_DECL gssize skip (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize skip (gsize count, GLib::Error * _error) noexcept;

// void g_input_stream_skip_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_input_stream_skip_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void skip_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void skip_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_input_stream_skip_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize g_input_stream_skip_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize skip_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize skip_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra_def.hpp>)
#include <gio/inputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra.hpp>)
#include <gio/inputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InputStream : public GI_GIO_INPUTSTREAM_BASE
{ typedef GI_GIO_INPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInputStream>
{ typedef Gio::InputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InputStreamClassDef
{
typedef InputStreamClassDef self;
public:
typedef Gio::InputStream instance_type;
typedef ::GInputStreamClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close_async) = self;
using GI_MEMBER_CHECK_CONFLICT(close_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(close_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(read_async) = self;
using GI_MEMBER_CHECK_CONFLICT(read_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(read_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(skip) = self;
using GI_MEMBER_CHECK_CONFLICT(skip_async) = self;
using GI_MEMBER_CHECK_CONFLICT(skip_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~InputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void InputStream::close_async (GInputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::close_async (::GInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean InputStream::close_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean InputStream::close_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean InputStream::close_fn (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean InputStream::close_fn (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void InputStream::read_async (GInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::read_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void read_async_ (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gssize InputStream::read_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::read_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gssize read_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gssize InputStream::read_fn (GInputStream* stream /*none*/, void* buffer, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::read_fn (::GInputStream* stream /*none*/, void* buffer, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gssize read_fn_ (void* buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// gssize InputStream::skip (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::skip (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gssize skip_ (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void InputStream::skip_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::skip_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void skip_async_ (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gssize InputStream::skip_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::skip_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gssize skip_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class InputStreamClass: public detail::ClassTemplate<Gio::impl::internal::InputStreamClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::InputStreamClassDef;
typedef InputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::InputStreamClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void InputStream::close_async (GInputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::close_async (::GInputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean InputStream::close_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean InputStream::close_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean InputStream::close_fn (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean InputStream::close_fn (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void InputStream::read_async (GInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::read_async (::GInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async_ (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gssize InputStream::read_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::read_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize read_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gssize InputStream::read_fn (GInputStream* stream /*none*/, void* buffer, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::read_fn (::GInputStream* stream /*none*/, void* buffer, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize read_fn_ (void* buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) override;

// gssize InputStream::skip (GInputStream* stream /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize InputStream::skip (::GInputStream* stream /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize skip_ (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void InputStream::skip_async (GInputStream* stream /*none*/, gsize count, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void InputStream::skip_async (::GInputStream* stream /*none*/, gsize count, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void skip_async_ (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gssize InputStream::skip_finish (GInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gssize InputStream::skip_finish (::GInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gssize skip_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct InputStreamClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(InputStreamClass, close_async)
  GI_MEMBER_DEFINE(InputStreamClass, close_finish)
  GI_MEMBER_DEFINE(InputStreamClass, close_fn)
  GI_MEMBER_DEFINE(InputStreamClass, read_async)
  GI_MEMBER_DEFINE(InputStreamClass, read_finish)
  GI_MEMBER_DEFINE(InputStreamClass, read_fn)
  GI_MEMBER_DEFINE(InputStreamClass, skip)
  GI_MEMBER_DEFINE(InputStreamClass, skip_async)
  GI_MEMBER_DEFINE(InputStreamClass, skip_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, skip),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, skip_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, skip_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using InputStreamImpl = detail::ObjectImpl<InputStream, internal::InputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
