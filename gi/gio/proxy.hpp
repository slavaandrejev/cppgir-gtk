// AUTO-GENERATED

#ifndef _GI_GIO_PROXY_HPP_
#define _GI_GIO_PROXY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class ProxyAddress;

class Proxy;

namespace base {


#define GI_GIO_PROXY_BASE base::ProxyBase
class ProxyBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GProxy BaseObjectType;

ProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_get_type(); } 

// GProxy* /*full,nullable*/ g_proxy_get_default_for_protocol (const gchar* protocol /*none*/);
// ::GProxy* /*full,nullable*/ g_proxy_get_default_for_protocol (const char* protocol /*none*/);
static GI_INLINE_DECL Gio::Proxy get_default_for_protocol (const gi::cstring_v protocol) noexcept;

// GIOStream* /*full*/ g_proxy_connect (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ g_proxy_connect (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, GLib::Error * _error) noexcept;

// void g_proxy_connect_async (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_proxy_connect_async (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::AsyncReadyCallback callback) noexcept;

// GIOStream* /*full*/ g_proxy_connect_finish (GProxy* proxy /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GIOStream* /*full*/ g_proxy_connect_finish (::GProxy* proxy /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_proxy_supports_hostname (GProxy* proxy /*none*/);
// gboolean g_proxy_supports_hostname (::GProxy* proxy /*none*/);
GI_INLINE_DECL bool supports_hostname () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_def.hpp>)
#include <gio/proxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxy_extra.hpp>)
#include <gio/proxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Proxy : public GI_GIO_PROXY_BASE
{ typedef GI_GIO_PROXY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxy>
{ typedef Gio::Proxy type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyInterfaceDef
{
typedef ProxyInterfaceDef self;
public:
typedef Gio::Proxy instance_type;
typedef ::GProxyInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(connect) = self;
using GI_MEMBER_CHECK_CONFLICT(connect_async) = self;
using GI_MEMBER_CHECK_CONFLICT(connect_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(supports_hostname) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ProxyInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GIOStream* /*full*/ Proxy::connect (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::IOStream connect_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Proxy::connect_async (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void connect_async_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GIOStream* /*full*/ Proxy::connect_finish (GProxy* proxy /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect_finish (::GProxy* proxy /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::IOStream connect_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean Proxy::supports_hostname (GProxy* proxy /*none*/);
// gboolean Proxy::supports_hostname (::GProxy* proxy /*none*/);
virtual bool supports_hostname_ () noexcept = 0;


};

using ProxyImpl = detail::InterfaceImpl<ProxyInterfaceDef>;

class ProxyInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyImpl>
{
friend class internal::ProxyInterfaceDef;
typedef ProxyInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyImpl> super;

protected:
using super::super;

// GIOStream* /*full*/ Proxy::connect (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::IOStream connect_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Proxy::connect_async (GProxy* proxy /*none*/, GIOStream* connection /*none*/, GProxyAddress* proxy_address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy /*none*/, ::GIOStream* connection /*none*/, ::GProxyAddress* proxy_address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_async_ (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GIOStream* /*full*/ Proxy::connect_finish (GProxy* proxy /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GIOStream* /*full*/ Proxy::connect_finish (::GProxy* proxy /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::IOStream connect_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean Proxy::supports_hostname (GProxy* proxy /*none*/);
// gboolean Proxy::supports_hostname (::GProxy* proxy /*none*/);
GI_INLINE_DECL bool supports_hostname_ () noexcept override;


};


struct ProxyInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ProxyInterfaceClassImpl, connect)
  GI_MEMBER_DEFINE(ProxyInterfaceClassImpl, connect_async)
  GI_MEMBER_DEFINE(ProxyInterfaceClassImpl, connect_finish)
  GI_MEMBER_DEFINE(ProxyInterfaceClassImpl, supports_hostname)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, connect),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, connect_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, connect_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, supports_hostname)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
