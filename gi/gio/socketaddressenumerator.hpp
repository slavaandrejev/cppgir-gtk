// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESSENUMERATOR_HPP_
#define _GI_GIO_SOCKETADDRESSENUMERATOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class SocketAddress;

class SocketAddressEnumerator;

namespace base {


#define GI_GIO_SOCKETADDRESSENUMERATOR_BASE base::SocketAddressEnumeratorBase
class SocketAddressEnumeratorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketAddressEnumerator BaseObjectType;

SocketAddressEnumeratorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_address_enumerator_get_type(); } 

// GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketAddress next ();
GI_INLINE_DECL Gio::SocketAddress next (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketAddress next (GLib::Error * _error) noexcept;

// void g_socket_address_enumerator_next_async (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_address_enumerator_next_async (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void next_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void next_async (Gio::AsyncReadyCallback callback) noexcept;

// GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next_finish (GSocketAddressEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next_finish (::GSocketAddressEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketAddress next_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_def.hpp>)
#include <gio/socketaddressenumerator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra.hpp>)
#include <gio/socketaddressenumerator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketAddressEnumerator : public GI_GIO_SOCKETADDRESSENUMERATOR_BASE
{ typedef GI_GIO_SOCKETADDRESSENUMERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketAddressEnumerator>
{ typedef Gio::SocketAddressEnumerator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketAddressEnumeratorClassDef
{
typedef SocketAddressEnumeratorClassDef self;
public:
typedef Gio::SocketAddressEnumerator instance_type;
typedef ::GSocketAddressEnumeratorClass class_type;

using GI_MEMBER_CHECK_CONFLICT(next) = self;
using GI_MEMBER_CHECK_CONFLICT(next_async) = self;
using GI_MEMBER_CHECK_CONFLICT(next_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketAddressEnumeratorClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::SocketAddress next_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void next_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::SocketAddress next_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketAddressEnumeratorClass: public detail::ClassTemplate<Gio::impl::internal::SocketAddressEnumeratorClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SocketAddressEnumeratorClassDef;
typedef SocketAddressEnumeratorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketAddressEnumeratorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void next_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct SocketAddressEnumeratorClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SocketAddressEnumeratorClass, next)
  GI_MEMBER_DEFINE(SocketAddressEnumeratorClass, next_async)
  GI_MEMBER_DEFINE(SocketAddressEnumeratorClass, next_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SocketAddressEnumeratorImpl = detail::ObjectImpl<SocketAddressEnumerator, internal::SocketAddressEnumeratorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
