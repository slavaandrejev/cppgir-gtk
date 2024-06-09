// AUTO-GENERATED

#ifndef _GI_GIO_PROXYADDRESS_HPP_
#define _GI_GIO_PROXYADDRESS_HPP_

#include "inetsocketaddress.hpp"

namespace gi {

namespace repository {

namespace Gio {

class InetAddress;

class ProxyAddress;

namespace base {


#define GI_GIO_PROXYADDRESS_BASE base::ProxyAddressBase
class ProxyAddressBase : public Gio::InetSocketAddress
{
typedef Gio::InetSocketAddress super_type;
public:
typedef ::GProxyAddress BaseObjectType;

ProxyAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_address_get_type(); } 

// GSocketAddress* /*full*/ g_proxy_address_new (GInetAddress* inetaddr /*none*/, guint16 port, const gchar* protocol /*none*/, const gchar* dest_hostname /*none*/, guint16 dest_port, const gchar* username /*none,nullable*/, const gchar* password /*none,nullable*/);
// ::GProxyAddress* /*full*/ g_proxy_address_new (::GInetAddress* inetaddr /*none*/, guint16 port, const char* protocol /*none*/, const char* dest_hostname /*none*/, guint16 dest_port, const char* username /*none,nullable*/, const char* password /*none,nullable*/);
static GI_INLINE_DECL Gio::ProxyAddress new_ (Gio::InetAddress inetaddr, guint16 port, const gi::cstring_v protocol, const gi::cstring_v dest_hostname, guint16 dest_port, const gi::cstring_v username, const gi::cstring_v password) noexcept;
static GI_INLINE_DECL Gio::ProxyAddress new_ (Gio::InetAddress inetaddr, guint16 port, const gi::cstring_v protocol, const gi::cstring_v dest_hostname, guint16 dest_port) noexcept;

// const gchar* /*none*/ g_proxy_address_get_destination_hostname (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_destination_hostname (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_destination_hostname () noexcept;

// guint16 g_proxy_address_get_destination_port (GProxyAddress* proxy /*none*/);
// guint16 g_proxy_address_get_destination_port (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL guint16 get_destination_port () noexcept;

// const gchar* /*none*/ g_proxy_address_get_destination_protocol (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_destination_protocol (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_destination_protocol () noexcept;

// const gchar* /*none,nullable*/ g_proxy_address_get_password (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_password (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_password () noexcept;

// const gchar* /*none*/ g_proxy_address_get_protocol (GProxyAddress* proxy /*none*/);
// const char* /*none*/ g_proxy_address_get_protocol (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_protocol () noexcept;

// const gchar* /*none,nullable*/ g_proxy_address_get_uri (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_uri (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_uri () noexcept;

// const gchar* /*none,nullable*/ g_proxy_address_get_username (GProxyAddress* proxy /*none*/);
// const char* /*none,nullable*/ g_proxy_address_get_username (::GProxyAddress* proxy /*none*/);
GI_INLINE_DECL gi::cstring_v get_username () noexcept;

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_destination_hostname()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "destination-hostname"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_destination_hostname() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "destination-hostname"); }

gi::property_proxy<guint, base::ProxyAddressBase> property_destination_port()
{ return gi::property_proxy<guint, base::ProxyAddressBase> (*this, "destination-port"); }
const gi::property_proxy<guint, base::ProxyAddressBase> property_destination_port() const
{ return gi::property_proxy<guint, base::ProxyAddressBase> (*this, "destination-port"); }

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_destination_protocol()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "destination-protocol"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_destination_protocol() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "destination-protocol"); }

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_password()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "password"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_password() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "password"); }

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_protocol()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "protocol"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_protocol() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "protocol"); }

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_uri()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "uri"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_uri() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "uri"); }

gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_username()
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "username"); }
const gi::property_proxy<gi::cstring, base::ProxyAddressBase> property_username() const
{ return gi::property_proxy<gi::cstring, base::ProxyAddressBase> (*this, "username"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra_def.hpp>)
#include <gio/proxyaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra.hpp>)
#include <gio/proxyaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ProxyAddress : public GI_GIO_PROXYADDRESS_BASE
{ typedef GI_GIO_PROXYADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxyAddress>
{ typedef Gio::ProxyAddress type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyAddressClassDef
{
typedef ProxyAddressClassDef self;
public:
typedef Gio::ProxyAddress instance_type;
typedef ::GProxyAddressClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ProxyAddressClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ProxyAddressClass: public detail::ClassTemplate<Gio::impl::internal::ProxyAddressClassDef, Gio::impl::internal::InetSocketAddressClass>
{
friend class internal::ProxyAddressClassDef;
typedef ProxyAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ProxyAddressClassDef, Gio::impl::internal::InetSocketAddressClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ProxyAddressClassDef::TypeInitData
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

using ProxyAddressImpl = detail::ObjectImpl<ProxyAddress, internal::ProxyAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
