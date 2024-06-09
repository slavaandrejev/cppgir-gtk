// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEOUTPUTSTREAM_HPP_
#define _GI_GIO_POLLABLEOUTPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class OutputVector;
class OutputVector_Ref;

class PollableOutputStream;

namespace base {


#define GI_GIO_POLLABLEOUTPUTSTREAM_BASE base::PollableOutputStreamBase
class PollableOutputStreamBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GPollableOutputStream BaseObjectType;

PollableOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_pollable_output_stream_get_type(); } 

// gboolean g_pollable_output_stream_can_poll (GPollableOutputStream* stream /*none*/);
// gboolean g_pollable_output_stream_can_poll (::GPollableOutputStream* stream /*none*/);
GI_INLINE_DECL bool can_poll () noexcept;

// GSource* /*full*/ g_pollable_output_stream_create_source (GPollableOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_output_stream_create_source (::GPollableOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source () noexcept;

// gboolean g_pollable_output_stream_is_writable (GPollableOutputStream* stream /*none*/);
// gboolean g_pollable_output_stream_is_writable (::GPollableOutputStream* stream /*none*/);
GI_INLINE_DECL bool is_writable () noexcept;

// gssize g_pollable_output_stream_write_nonblocking (GPollableOutputStream* stream /*none*/, void* buffer /*none*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_output_stream_write_nonblocking (::GPollableOutputStream* stream /*none*/, guint8* buffer /*none*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize write_nonblocking (const guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write_nonblocking (const guint8 * buffer, gsize count);
GI_INLINE_DECL gssize write_nonblocking (const guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write_nonblocking (const guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// GPollableReturn g_pollable_output_stream_writev_nonblocking (GPollableOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GPollableReturn g_pollable_output_stream_writev_nonblocking (::GPollableOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_def.hpp>)
#include <gio/pollableoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra.hpp>)
#include <gio/pollableoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PollableOutputStream : public GI_GIO_POLLABLEOUTPUTSTREAM_BASE
{ typedef GI_GIO_POLLABLEOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPollableOutputStream>
{ typedef Gio::PollableOutputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PollableOutputStreamInterfaceDef
{
typedef PollableOutputStreamInterfaceDef self;
public:
typedef Gio::PollableOutputStream instance_type;
typedef ::GPollableOutputStreamInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_poll) = self;
using GI_MEMBER_CHECK_CONFLICT(create_source) = self;
using GI_MEMBER_CHECK_CONFLICT(is_writable) = self;
using GI_MEMBER_CHECK_CONFLICT(write_nonblocking) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PollableOutputStreamInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream /*none*/);
virtual bool can_poll_ () noexcept = 0;

// GSource* /*full*/ PollableOutputStream::create_source (GPollableOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableOutputStream::create_source (::GPollableOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
virtual GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept = 0;

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream /*none*/);
virtual bool is_writable_ () noexcept = 0;

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, GError ** error);
virtual gssize write_nonblocking_ (const guint8 * buffer, gsize count, GLib::Error * _error) = 0;

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)


};

using PollableOutputStreamImpl = detail::InterfaceImpl<PollableOutputStreamInterfaceDef>;

class PollableOutputStreamInterfaceClassImpl: public detail::InterfaceClassImpl<PollableOutputStreamImpl>
{
friend class internal::PollableOutputStreamInterfaceDef;
typedef PollableOutputStreamInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PollableOutputStreamImpl> super;

protected:
using super::super;

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream /*none*/);
GI_INLINE_DECL bool can_poll_ () noexcept override;

// GSource* /*full*/ PollableOutputStream::create_source (GPollableOutputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableOutputStream::create_source (::GPollableOutputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept override;

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream /*none*/);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream /*none*/);
GI_INLINE_DECL bool is_writable_ () noexcept override;

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream /*none*/, void* buffer /*none,nullable*/, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream /*none*/, guint8* buffer /*none,nullable*/, gsize count, GError ** error);
GI_INLINE_DECL gssize write_nonblocking_ (const guint8 * buffer, gsize count, GLib::Error * _error) override;

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream /*none*/, const GOutputVector* vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream /*none*/, const ::GOutputVector** vectors /*none*/, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)


};


struct PollableOutputStreamInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(PollableOutputStreamInterfaceClassImpl, can_poll)
  GI_MEMBER_DEFINE(PollableOutputStreamInterfaceClassImpl, create_source)
  GI_MEMBER_DEFINE(PollableOutputStreamInterfaceClassImpl, is_writable)
  GI_MEMBER_DEFINE(PollableOutputStreamInterfaceClassImpl, write_nonblocking)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_poll),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_source),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_writable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_nonblocking)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
