// AUTO-GENERATED

#ifndef _GI_GIO_DATAGRAMBASED_HPP_
#define _GI_GIO_DATAGRAMBASED_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class InputMessage;
class InputMessage_Ref;
class OutputMessage;
class OutputMessage_Ref;

class DatagramBased;

namespace base {


#define GI_GIO_DATAGRAMBASED_BASE base::DatagramBasedBase
class DatagramBasedBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDatagramBased BaseObjectType;

DatagramBasedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_datagram_based_get_type(); } 

// GIOCondition g_datagram_based_condition_check (GDatagramBased* datagram_based /*none*/, GIOCondition condition);
// ::GIOCondition g_datagram_based_condition_check (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition);
GI_INLINE_DECL GLib::IOCondition condition_check (GLib::IOCondition condition) noexcept;

// gboolean g_datagram_based_condition_wait (GDatagramBased* datagram_based /*none*/, GIOCondition condition, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_datagram_based_condition_wait (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, GLib::Error * _error) noexcept;

// GSource* /*full*/ g_datagram_based_create_source (GDatagramBased* datagram_based /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_datagram_based_create_source (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition) noexcept;

// gint g_datagram_based_receive_messages (GDatagramBased* datagram_based /*none*/, GInputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_datagram_based_receive_messages (::GDatagramBased* datagram_based /*none*/, ::GInputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gint g_datagram_based_send_messages (GDatagramBased* datagram_based /*none*/, GOutputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_datagram_based_send_messages (::GDatagramBased* datagram_based /*none*/, ::GOutputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra_def.hpp>)
#include <gio/datagrambased_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra.hpp>)
#include <gio/datagrambased_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DatagramBased : public GI_GIO_DATAGRAMBASED_BASE
{ typedef GI_GIO_DATAGRAMBASED_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDatagramBased>
{ typedef Gio::DatagramBased type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DatagramBasedInterfaceDef
{
typedef DatagramBasedInterfaceDef self;
public:
typedef Gio::DatagramBased instance_type;
typedef ::GDatagramBasedInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(condition_check) = self;
using GI_MEMBER_CHECK_CONFLICT(condition_wait) = self;
using GI_MEMBER_CHECK_CONFLICT(create_source) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DatagramBasedInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GIOCondition DatagramBased::condition_check (GDatagramBased* datagram_based /*none*/, GIOCondition condition);
// ::GIOCondition DatagramBased::condition_check (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition);
virtual GLib::IOCondition condition_check_ (GLib::IOCondition condition) noexcept = 0;

// gboolean DatagramBased::condition_wait (GDatagramBased* datagram_based /*none*/, GIOCondition condition, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DatagramBased::condition_wait (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool condition_wait_ (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GSource* /*full*/ DatagramBased::create_source (GDatagramBased* datagram_based /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ DatagramBased::create_source (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/);
virtual GLib::Source create_source_ (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept = 0;

// gint DatagramBased::receive_messages (GDatagramBased* datagram_based /*none*/, GInputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint DatagramBased::receive_messages (::GDatagramBased* datagram_based /*none*/, ::GInputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gint DatagramBased::send_messages (GDatagramBased* datagram_based /*none*/, GOutputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint DatagramBased::send_messages (::GDatagramBased* datagram_based /*none*/, ::GOutputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)


};

using DatagramBasedImpl = detail::InterfaceImpl<DatagramBasedInterfaceDef>;

class DatagramBasedInterfaceClassImpl: public detail::InterfaceClassImpl<DatagramBasedImpl>
{
friend class internal::DatagramBasedInterfaceDef;
typedef DatagramBasedInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DatagramBasedImpl> super;

protected:
using super::super;

// GIOCondition DatagramBased::condition_check (GDatagramBased* datagram_based /*none*/, GIOCondition condition);
// ::GIOCondition DatagramBased::condition_check (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition);
GI_INLINE_DECL GLib::IOCondition condition_check_ (GLib::IOCondition condition) noexcept override;

// gboolean DatagramBased::condition_wait (GDatagramBased* datagram_based /*none*/, GIOCondition condition, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DatagramBased::condition_wait (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool condition_wait_ (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable, GLib::Error * _error) override;

// GSource* /*full*/ DatagramBased::create_source (GDatagramBased* datagram_based /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ DatagramBased::create_source (::GDatagramBased* datagram_based /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source_ (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept override;

// gint DatagramBased::receive_messages (GDatagramBased* datagram_based /*none*/, GInputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint DatagramBased::receive_messages (::GDatagramBased* datagram_based /*none*/, ::GInputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gint DatagramBased::send_messages (GDatagramBased* datagram_based /*none*/, GOutputMessage* messages /*none*/, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint DatagramBased::send_messages (::GDatagramBased* datagram_based /*none*/, ::GOutputMessage** messages /*none*/, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)


};


struct DatagramBasedInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DatagramBasedInterfaceClassImpl, condition_check)
  GI_MEMBER_DEFINE(DatagramBasedInterfaceClassImpl, condition_wait)
  GI_MEMBER_DEFINE(DatagramBasedInterfaceClassImpl, create_source)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, condition_check),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, condition_wait),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_source)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
