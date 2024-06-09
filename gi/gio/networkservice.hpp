// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKSERVICE_HPP_
#define _GI_GIO_NETWORKSERVICE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SocketConnectable;

class NetworkService;

namespace base {


#define GI_GIO_NETWORKSERVICE_BASE base::NetworkServiceBase
class NetworkServiceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GNetworkService BaseObjectType;

NetworkServiceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_network_service_get_type(); } 

GI_INLINE_DECL Gio::SocketConnectable interface_ (gi::interface_tag<Gio::SocketConnectable>);

GI_INLINE_DECL operator Gio::SocketConnectable ();

// GSocketConnectable* /*full*/ g_network_service_new (const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/);
// ::GNetworkService* /*full*/ g_network_service_new (const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/);
static GI_INLINE_DECL Gio::NetworkService new_ (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain) noexcept;

// const gchar* /*none*/ g_network_service_get_domain (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_domain (::GNetworkService* srv /*none*/);
GI_INLINE_DECL gi::cstring_v get_domain () noexcept;

// const gchar* /*none*/ g_network_service_get_protocol (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_protocol (::GNetworkService* srv /*none*/);
GI_INLINE_DECL gi::cstring_v get_protocol () noexcept;

// const gchar* /*none*/ g_network_service_get_scheme (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_scheme (::GNetworkService* srv /*none*/);
GI_INLINE_DECL gi::cstring_v get_scheme () noexcept;

// const gchar* /*none*/ g_network_service_get_service (GNetworkService* srv /*none*/);
// const char* /*none*/ g_network_service_get_service (::GNetworkService* srv /*none*/);
GI_INLINE_DECL gi::cstring_v get_service () noexcept;

// void g_network_service_set_scheme (GNetworkService* srv /*none*/, const gchar* scheme /*none*/);
// void g_network_service_set_scheme (::GNetworkService* srv /*none*/, const char* scheme /*none*/);
GI_INLINE_DECL void set_scheme (const gi::cstring_v scheme) noexcept;

gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_domain()
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "domain"); }
const gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_domain() const
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "domain"); }

gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_protocol()
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "protocol"); }
const gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_protocol() const
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "protocol"); }

gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_scheme()
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "scheme"); }
const gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_scheme() const
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "scheme"); }

gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_service()
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "service"); }
const gi::property_proxy<gi::cstring, base::NetworkServiceBase> property_service() const
{ return gi::property_proxy<gi::cstring, base::NetworkServiceBase> (*this, "service"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra_def.hpp>)
#include <gio/networkservice_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra.hpp>)
#include <gio/networkservice_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class NetworkService : public GI_GIO_NETWORKSERVICE_BASE
{ typedef GI_GIO_NETWORKSERVICE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNetworkService>
{ typedef Gio::NetworkService type; }; 

} // namespace repository

} // namespace gi

#include "socketconnectable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class NetworkServiceClassDef
{
typedef NetworkServiceClassDef self;
public:
typedef Gio::NetworkService instance_type;
typedef ::GNetworkServiceClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NetworkServiceClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NetworkServiceClass: public detail::ClassTemplate<Gio::impl::internal::NetworkServiceClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl>
{
friend class internal::NetworkServiceClassDef;
typedef NetworkServiceClass self;
typedef detail::ClassTemplate<Gio::impl::internal::NetworkServiceClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl> super;

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


struct NetworkServiceClassDef::TypeInitData
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

using NetworkServiceImpl = detail::ObjectImpl<NetworkService, internal::NetworkServiceClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
