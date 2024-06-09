// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESS_HPP_
#define _GI_GIO_SOCKETADDRESS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SocketConnectable;

class SocketAddress;

namespace base {


#define GI_GIO_SOCKETADDRESS_BASE base::SocketAddressBase
class SocketAddressBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketAddress BaseObjectType;

SocketAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_address_get_type(); } 

GI_INLINE_DECL Gio::SocketConnectable interface_ (gi::interface_tag<Gio::SocketConnectable>);

GI_INLINE_DECL operator Gio::SocketConnectable ();

// GSocketAddress* /*full*/ g_socket_address_new_from_native (gpointer native, gsize len);
// ::GSocketAddress* /*full*/ g_socket_address_new_from_native (void* native, gsize len);
static GI_INLINE_DECL Gio::SocketAddress new_from_native (void* native, gsize len) noexcept;

// GSocketFamily g_socket_address_get_family (GSocketAddress* address /*none*/);
// ::GSocketFamily g_socket_address_get_family (::GSocketAddress* address /*none*/);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// gssize g_socket_address_get_native_size (GSocketAddress* address /*none*/);
// gssize g_socket_address_get_native_size (::GSocketAddress* address /*none*/);
GI_INLINE_DECL gssize get_native_size () noexcept;

// gboolean g_socket_address_to_native (GSocketAddress* address /*none*/, gpointer dest, gsize destlen, GError ** error);
// gboolean g_socket_address_to_native (::GSocketAddress* address /*none*/, void* dest, gsize destlen, GError ** error);
GI_INLINE_DECL bool to_native (void* dest, gsize destlen);
GI_INLINE_DECL bool to_native (void* dest, gsize destlen, GLib::Error * _error) noexcept;

gi::property_proxy<Gio::SocketFamily, base::SocketAddressBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::SocketAddressBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::SocketAddressBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::SocketAddressBase> (*this, "family"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddress_extra_def.hpp>)
#include <gio/socketaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddress_extra.hpp>)
#include <gio/socketaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketAddress : public GI_GIO_SOCKETADDRESS_BASE
{ typedef GI_GIO_SOCKETADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketAddress>
{ typedef Gio::SocketAddress type; }; 

} // namespace repository

} // namespace gi

#include "socketconnectable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketAddressClassDef
{
typedef SocketAddressClassDef self;
public:
typedef Gio::SocketAddress instance_type;
typedef ::GSocketAddressClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_family) = self;
using GI_MEMBER_CHECK_CONFLICT(get_native_size) = self;
using GI_MEMBER_CHECK_CONFLICT(to_native) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketAddressClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GSocketFamily SocketAddress::get_family (GSocketAddress* address /*none*/);
// ::GSocketFamily SocketAddress::get_family (::GSocketAddress* address /*none*/);
virtual Gio::SocketFamily get_family_ () noexcept = 0;

// gssize SocketAddress::get_native_size (GSocketAddress* address /*none*/);
// gssize SocketAddress::get_native_size (::GSocketAddress* address /*none*/);
virtual gssize get_native_size_ () noexcept = 0;

// gboolean SocketAddress::to_native (GSocketAddress* address /*none*/, gpointer dest, gsize destlen, GError ** error);
// gboolean SocketAddress::to_native (::GSocketAddress* address /*none*/, void* dest, gsize destlen, GError ** error);
virtual bool to_native_ (void* dest, gsize destlen, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketAddressClass: public detail::ClassTemplate<Gio::impl::internal::SocketAddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl>
{
friend class internal::SocketAddressClassDef;
typedef SocketAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketAddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SocketConnectableIfaceClassImpl GSocketConnectableIface_type;


// GSocketFamily SocketAddress::get_family (GSocketAddress* address /*none*/);
// ::GSocketFamily SocketAddress::get_family (::GSocketAddress* address /*none*/);
GI_INLINE_DECL Gio::SocketFamily get_family_ () noexcept override;

// gssize SocketAddress::get_native_size (GSocketAddress* address /*none*/);
// gssize SocketAddress::get_native_size (::GSocketAddress* address /*none*/);
GI_INLINE_DECL gssize get_native_size_ () noexcept override;

// gboolean SocketAddress::to_native (GSocketAddress* address /*none*/, gpointer dest, gsize destlen, GError ** error);
// gboolean SocketAddress::to_native (::GSocketAddress* address /*none*/, void* dest, gsize destlen, GError ** error);
GI_INLINE_DECL bool to_native_ (void* dest, gsize destlen, GLib::Error * _error) override;


};


struct SocketAddressClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SocketAddressClass, get_family)
  GI_MEMBER_DEFINE(SocketAddressClass, get_native_size)
  GI_MEMBER_DEFINE(SocketAddressClass, to_native)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_family),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_native_size),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, to_native)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SocketAddressImpl = detail::ObjectImpl<SocketAddress, internal::SocketAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
