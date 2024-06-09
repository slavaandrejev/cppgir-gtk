// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKADDRESS_HPP_
#define _GI_GIO_NETWORKADDRESS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SocketConnectable;

class NetworkAddress;

namespace base {


#define GI_GIO_NETWORKADDRESS_BASE base::NetworkAddressBase
class NetworkAddressBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GNetworkAddress BaseObjectType;

NetworkAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_network_address_get_type(); } 

GI_INLINE_DECL Gio::SocketConnectable interface_ (gi::interface_tag<Gio::SocketConnectable>);

GI_INLINE_DECL operator Gio::SocketConnectable ();

// GSocketConnectable* /*full*/ g_network_address_new (const gchar* hostname /*none*/, guint16 port);
// ::GNetworkAddress* /*full*/ g_network_address_new (const char* hostname /*none*/, guint16 port);
static GI_INLINE_DECL Gio::NetworkAddress new_ (const gi::cstring_v hostname, guint16 port) noexcept;

// GSocketConnectable* /*full*/ g_network_address_new_loopback (guint16 port);
// ::GNetworkAddress* /*full*/ g_network_address_new_loopback (guint16 port);
static GI_INLINE_DECL Gio::NetworkAddress new_loopback (guint16 port) noexcept;

// GSocketConnectable* /*full*/ g_network_address_parse (const gchar* host_and_port /*none*/, guint16 default_port, GError ** error);
// ::GNetworkAddress* /*full*/ g_network_address_parse (const char* host_and_port /*none*/, guint16 default_port, GError ** error);
static GI_INLINE_DECL Gio::NetworkAddress parse (const gi::cstring_v host_and_port, guint16 default_port);
static GI_INLINE_DECL Gio::NetworkAddress parse (const gi::cstring_v host_and_port, guint16 default_port, GLib::Error * _error) noexcept;

// GSocketConnectable* /*full*/ g_network_address_parse_uri (const gchar* uri /*none*/, guint16 default_port, GError ** error);
// ::GNetworkAddress* /*full*/ g_network_address_parse_uri (const char* uri /*none*/, guint16 default_port, GError ** error);
static GI_INLINE_DECL Gio::NetworkAddress parse_uri (const gi::cstring_v uri, guint16 default_port);
static GI_INLINE_DECL Gio::NetworkAddress parse_uri (const gi::cstring_v uri, guint16 default_port, GLib::Error * _error) noexcept;

// const gchar* /*none*/ g_network_address_get_hostname (GNetworkAddress* addr /*none*/);
// const char* /*none*/ g_network_address_get_hostname (::GNetworkAddress* addr /*none*/);
GI_INLINE_DECL gi::cstring_v get_hostname () noexcept;

// guint16 g_network_address_get_port (GNetworkAddress* addr /*none*/);
// guint16 g_network_address_get_port (::GNetworkAddress* addr /*none*/);
GI_INLINE_DECL guint16 get_port () noexcept;

// const gchar* /*none,nullable*/ g_network_address_get_scheme (GNetworkAddress* addr /*none*/);
// const char* /*none,nullable*/ g_network_address_get_scheme (::GNetworkAddress* addr /*none*/);
GI_INLINE_DECL gi::cstring_v get_scheme () noexcept;

gi::property_proxy<gi::cstring, base::NetworkAddressBase> property_hostname()
{ return gi::property_proxy<gi::cstring, base::NetworkAddressBase> (*this, "hostname"); }
const gi::property_proxy<gi::cstring, base::NetworkAddressBase> property_hostname() const
{ return gi::property_proxy<gi::cstring, base::NetworkAddressBase> (*this, "hostname"); }

gi::property_proxy<guint, base::NetworkAddressBase> property_port()
{ return gi::property_proxy<guint, base::NetworkAddressBase> (*this, "port"); }
const gi::property_proxy<guint, base::NetworkAddressBase> property_port() const
{ return gi::property_proxy<guint, base::NetworkAddressBase> (*this, "port"); }

gi::property_proxy<gi::cstring, base::NetworkAddressBase> property_scheme()
{ return gi::property_proxy<gi::cstring, base::NetworkAddressBase> (*this, "scheme"); }
const gi::property_proxy<gi::cstring, base::NetworkAddressBase> property_scheme() const
{ return gi::property_proxy<gi::cstring, base::NetworkAddressBase> (*this, "scheme"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkaddress_extra_def.hpp>)
#include <gio/networkaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkaddress_extra.hpp>)
#include <gio/networkaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class NetworkAddress : public GI_GIO_NETWORKADDRESS_BASE
{ typedef GI_GIO_NETWORKADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNetworkAddress>
{ typedef Gio::NetworkAddress type; }; 

} // namespace repository

} // namespace gi

#include "socketconnectable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class NetworkAddressClassDef
{
typedef NetworkAddressClassDef self;
public:
typedef Gio::NetworkAddress instance_type;
typedef ::GNetworkAddressClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NetworkAddressClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NetworkAddressClass: public detail::ClassTemplate<Gio::impl::internal::NetworkAddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl>
{
friend class internal::NetworkAddressClassDef;
typedef NetworkAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::NetworkAddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SocketConnectableIfaceClassImpl GSocketConnectableIface_type;



};


struct NetworkAddressClassDef::TypeInitData
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

using NetworkAddressImpl = detail::ObjectImpl<NetworkAddress, internal::NetworkAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
