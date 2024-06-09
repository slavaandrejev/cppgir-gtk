// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEINPUTSTREAM_HPP_
#define _GI_GIO_POLLABLEINPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class PollableInputStream;

namespace base {


#define GI_GIO_POLLABLEINPUTSTREAM_BASE base::PollableInputStreamBase
class PollableInputStreamBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GPollableInputStream BaseObjectType;

PollableInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_pollable_input_stream_get_type(); } 

// gboolean g_pollable_input_stream_can_poll (GPollableInputStream* stream /*none*/);
// gboolean g_pollable_input_stream_can_poll (::GPollableInputStream* stream /*none*/);
GI_INLINE_DECL bool can_poll () noexcept;

// GSource* /*full*/ g_pollable_input_stream_create_source (GPollableInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_pollable_input_stream_create_source (::GPollableInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source () noexcept;

// gboolean g_pollable_input_stream_is_readable (GPollableInputStream* stream /*none*/);
// gboolean g_pollable_input_stream_is_readable (::GPollableInputStream* stream /*none*/);
GI_INLINE_DECL bool is_readable () noexcept;

// gssize g_pollable_input_stream_read_nonblocking (GPollableInputStream* stream /*none*/, void* buffer /*none,out,ca*/, gsize count, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_pollable_input_stream_read_nonblocking (::GPollableInputStream* stream /*none*/, guint8* buffer /*none,out,ca*/, gsize count, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_def.hpp>)
#include <gio/pollableinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra.hpp>)
#include <gio/pollableinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PollableInputStream : public GI_GIO_POLLABLEINPUTSTREAM_BASE
{ typedef GI_GIO_POLLABLEINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPollableInputStream>
{ typedef Gio::PollableInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PollableInputStreamInterfaceDef
{
typedef PollableInputStreamInterfaceDef self;
public:
typedef Gio::PollableInputStream instance_type;
typedef ::GPollableInputStreamInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_poll) = self;
using GI_MEMBER_CHECK_CONFLICT(create_source) = self;
using GI_MEMBER_CHECK_CONFLICT(is_readable) = self;
using GI_MEMBER_CHECK_CONFLICT(read_nonblocking) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PollableInputStreamInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream /*none*/);
virtual bool can_poll_ () noexcept = 0;

// GSource* /*full*/ PollableInputStream::create_source (GPollableInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableInputStream::create_source (::GPollableInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
virtual GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept = 0;

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream /*none*/);
virtual bool is_readable_ () noexcept = 0;

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
virtual gssize read_nonblocking_ (guint8 * buffer, gsize count, GLib::Error * _error) = 0;


};

using PollableInputStreamImpl = detail::InterfaceImpl<PollableInputStreamInterfaceDef>;

class PollableInputStreamInterfaceClassImpl: public detail::InterfaceClassImpl<PollableInputStreamImpl>
{
friend class internal::PollableInputStreamInterfaceDef;
typedef PollableInputStreamInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PollableInputStreamImpl> super;

protected:
using super::super;

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream /*none*/);
GI_INLINE_DECL bool can_poll_ () noexcept override;

// GSource* /*full*/ PollableInputStream::create_source (GPollableInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ PollableInputStream::create_source (::GPollableInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept override;

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream /*none*/);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream /*none*/);
GI_INLINE_DECL bool is_readable_ () noexcept override;

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream /*none*/, void* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream /*none*/, guint8* buffer /*none,out,nullable,ca*/, gsize count, GError ** error);
GI_INLINE_DECL gssize read_nonblocking_ (guint8 * buffer, gsize count, GLib::Error * _error) override;


};


struct PollableInputStreamInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(PollableInputStreamInterfaceClassImpl, can_poll)
  GI_MEMBER_DEFINE(PollableInputStreamInterfaceClassImpl, create_source)
  GI_MEMBER_DEFINE(PollableInputStreamInterfaceClassImpl, is_readable)
  GI_MEMBER_DEFINE(PollableInputStreamInterfaceClassImpl, read_nonblocking)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_poll),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_source),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_readable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_nonblocking)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
