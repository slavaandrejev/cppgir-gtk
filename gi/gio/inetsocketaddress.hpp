// AUTO-GENERATED

#ifndef _GI_GIO_INETSOCKETADDRESS_HPP_
#define _GI_GIO_INETSOCKETADDRESS_HPP_

#include "socketaddress.hpp"

namespace gi {

namespace repository {

namespace Gio {

class InetAddress;

class InetSocketAddress;

namespace base {


#define GI_GIO_INETSOCKETADDRESS_BASE base::InetSocketAddressBase
class InetSocketAddressBase : public Gio::SocketAddress
{
typedef Gio::SocketAddress super_type;
public:
typedef ::GInetSocketAddress BaseObjectType;

InetSocketAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_inet_socket_address_get_type(); } 

// GSocketAddress* /*full*/ g_inet_socket_address_new (GInetAddress* address /*none*/, guint16 port);
// ::GInetSocketAddress* /*full*/ g_inet_socket_address_new (::GInetAddress* address /*none*/, guint16 port);
static GI_INLINE_DECL Gio::InetSocketAddress new_ (Gio::InetAddress address, guint16 port) noexcept;

// GSocketAddress* /*full,nullable*/ g_inet_socket_address_new_from_string (const char* address /*none*/, guint port);
// ::GInetSocketAddress* /*full,nullable*/ g_inet_socket_address_new_from_string (const char* address /*none*/, guint port);
static GI_INLINE_DECL Gio::InetSocketAddress new_from_string (const gi::cstring_v address, guint port) noexcept;

// GInetAddress* /*none*/ g_inet_socket_address_get_address (GInetSocketAddress* address /*none*/);
// ::GInetAddress* /*none*/ g_inet_socket_address_get_address (::GInetSocketAddress* address /*none*/);
GI_INLINE_DECL Gio::InetAddress get_address () noexcept;

// guint32 g_inet_socket_address_get_flowinfo (GInetSocketAddress* address /*none*/);
// guint32 g_inet_socket_address_get_flowinfo (::GInetSocketAddress* address /*none*/);
GI_INLINE_DECL guint32 get_flowinfo () noexcept;

// guint16 g_inet_socket_address_get_port (GInetSocketAddress* address /*none*/);
// guint16 g_inet_socket_address_get_port (::GInetSocketAddress* address /*none*/);
GI_INLINE_DECL guint16 get_port () noexcept;

// guint32 g_inet_socket_address_get_scope_id (GInetSocketAddress* address /*none*/);
// guint32 g_inet_socket_address_get_scope_id (::GInetSocketAddress* address /*none*/);
GI_INLINE_DECL guint32 get_scope_id () noexcept;

gi::property_proxy<Gio::InetAddress, base::InetSocketAddressBase> property_address()
{ return gi::property_proxy<Gio::InetAddress, base::InetSocketAddressBase> (*this, "address"); }
const gi::property_proxy<Gio::InetAddress, base::InetSocketAddressBase> property_address() const
{ return gi::property_proxy<Gio::InetAddress, base::InetSocketAddressBase> (*this, "address"); }

gi::property_proxy<guint, base::InetSocketAddressBase> property_flowinfo()
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "flowinfo"); }
const gi::property_proxy<guint, base::InetSocketAddressBase> property_flowinfo() const
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "flowinfo"); }

gi::property_proxy<guint, base::InetSocketAddressBase> property_port()
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "port"); }
const gi::property_proxy<guint, base::InetSocketAddressBase> property_port() const
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "port"); }

gi::property_proxy<guint, base::InetSocketAddressBase> property_scope_id()
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "scope-id"); }
const gi::property_proxy<guint, base::InetSocketAddressBase> property_scope_id() const
{ return gi::property_proxy<guint, base::InetSocketAddressBase> (*this, "scope-id"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetsocketaddress_extra_def.hpp>)
#include <gio/inetsocketaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetsocketaddress_extra.hpp>)
#include <gio/inetsocketaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InetSocketAddress : public GI_GIO_INETSOCKETADDRESS_BASE
{ typedef GI_GIO_INETSOCKETADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInetSocketAddress>
{ typedef Gio::InetSocketAddress type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InetSocketAddressClassDef
{
typedef InetSocketAddressClassDef self;
public:
typedef Gio::InetSocketAddress instance_type;
typedef ::GInetSocketAddressClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~InetSocketAddressClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InetSocketAddressClass: public detail::ClassTemplate<Gio::impl::internal::InetSocketAddressClassDef, Gio::impl::internal::SocketAddressClass>
{
friend class internal::InetSocketAddressClassDef;
typedef InetSocketAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::InetSocketAddressClassDef, Gio::impl::internal::SocketAddressClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct InetSocketAddressClassDef::TypeInitData
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

using InetSocketAddressImpl = detail::ObjectImpl<InetSocketAddress, internal::InetSocketAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
