// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCLIENT_HPP_
#define _GI_GIO_SOCKETCLIENT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class ProxyResolver;
class SocketAddress;
class SocketConnectable;
class SocketConnection;

class SocketClient;

namespace base {


#define GI_GIO_SOCKETCLIENT_BASE base::SocketClientBase
class SocketClientBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketClient BaseObjectType;

SocketClientBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_client_get_type(); } 

// GSocketClient* /*full*/ g_socket_client_new ();
// ::GSocketClient* /*full*/ g_socket_client_new ();
static GI_INLINE_DECL Gio::SocketClient new_ () noexcept;

// void g_socket_client_add_application_proxy (GSocketClient* client /*none*/, const gchar* protocol /*none*/);
// void g_socket_client_add_application_proxy (::GSocketClient* client /*none*/, const char* protocol /*none*/);
GI_INLINE_DECL void add_application_proxy (const gi::cstring_v protocol) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect (GSocketClient* client /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect (::GSocketClient* client /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, GLib::Error * _error) noexcept;

// void g_socket_client_connect_async (GSocketClient* client /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_client_connect_async (::GSocketClient* client /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_async (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Gio::SocketConnectable connectable, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_finish (GSocketClient* client /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_finish (::GSocketClient* client /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_host (GSocketClient* client /*none*/, const gchar* host_and_port /*none*/, guint16 default_port, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_host (::GSocketClient* client /*none*/, const char* host_and_port /*none*/, guint16 default_port, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const gi::cstring_v host_and_port, guint16 default_port, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const gi::cstring_v host_and_port, guint16 default_port);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const gi::cstring_v host_and_port, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const gi::cstring_v host_and_port, guint16 default_port, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_host_async (GSocketClient* client /*none*/, const gchar* host_and_port /*none*/, guint16 default_port, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_client_connect_to_host_async (::GSocketClient* client /*none*/, const char* host_and_port /*none*/, guint16 default_port, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_to_host_async (const gi::cstring_v host_and_port, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_host_async (const gi::cstring_v host_and_port, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_host_finish (GSocketClient* client /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_host_finish (::GSocketClient* client /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_host_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_host_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_service (GSocketClient* client /*none*/, const gchar* domain /*none*/, const gchar* service /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_service (::GSocketClient* client /*none*/, const char* domain /*none*/, const char* service /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const gi::cstring_v domain, const gi::cstring_v service, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const gi::cstring_v domain, const gi::cstring_v service);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const gi::cstring_v domain, const gi::cstring_v service, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const gi::cstring_v domain, const gi::cstring_v service, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_service_async (GSocketClient* client /*none*/, const gchar* domain /*none*/, const gchar* service /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_client_connect_to_service_async (::GSocketClient* client /*none*/, const char* domain /*none*/, const char* service /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_to_service_async (const gi::cstring_v domain, const gi::cstring_v service, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_service_async (const gi::cstring_v domain, const gi::cstring_v service, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_service_finish (GSocketClient* client /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_service_finish (::GSocketClient* client /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_service_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_uri (GSocketClient* client /*none*/, const gchar* uri /*none*/, guint16 default_port, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_uri (::GSocketClient* client /*none*/, const char* uri /*none*/, guint16 default_port, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const gi::cstring_v uri, guint16 default_port, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const gi::cstring_v uri, guint16 default_port);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const gi::cstring_v uri, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const gi::cstring_v uri, guint16 default_port, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_uri_async (GSocketClient* client /*none*/, const gchar* uri /*none*/, guint16 default_port, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_client_connect_to_uri_async (::GSocketClient* client /*none*/, const char* uri /*none*/, guint16 default_port, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void connect_to_uri_async (const gi::cstring_v uri, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_uri_async (const gi::cstring_v uri, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* /*full*/ g_socket_client_connect_to_uri_finish (GSocketClient* client /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketConnection* /*full*/ g_socket_client_connect_to_uri_finish (::GSocketClient* client /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_socket_client_get_enable_proxy (GSocketClient* client /*none*/);
// gboolean g_socket_client_get_enable_proxy (::GSocketClient* client /*none*/);
GI_INLINE_DECL bool get_enable_proxy () noexcept;

// GSocketFamily g_socket_client_get_family (GSocketClient* client /*none*/);
// ::GSocketFamily g_socket_client_get_family (::GSocketClient* client /*none*/);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// GSocketAddress* /*none,nullable*/ g_socket_client_get_local_address (GSocketClient* client /*none*/);
// ::GSocketAddress* /*none,nullable*/ g_socket_client_get_local_address (::GSocketClient* client /*none*/);
GI_INLINE_DECL Gio::SocketAddress get_local_address () noexcept;

// GSocketProtocol g_socket_client_get_protocol (GSocketClient* client /*none*/);
// ::GSocketProtocol g_socket_client_get_protocol (::GSocketClient* client /*none*/);
GI_INLINE_DECL Gio::SocketProtocol get_protocol () noexcept;

// GProxyResolver* /*none*/ g_socket_client_get_proxy_resolver (GSocketClient* client /*none*/);
// ::GProxyResolver* /*none*/ g_socket_client_get_proxy_resolver (::GSocketClient* client /*none*/);
GI_INLINE_DECL Gio::ProxyResolver get_proxy_resolver () noexcept;

// GSocketType g_socket_client_get_socket_type (GSocketClient* client /*none*/);
// ::GSocketType g_socket_client_get_socket_type (::GSocketClient* client /*none*/);
GI_INLINE_DECL Gio::SocketType get_socket_type () noexcept;

// guint g_socket_client_get_timeout (GSocketClient* client /*none*/);
// guint g_socket_client_get_timeout (::GSocketClient* client /*none*/);
GI_INLINE_DECL guint get_timeout () noexcept;

// gboolean g_socket_client_get_tls (GSocketClient* client /*none*/);
// gboolean g_socket_client_get_tls (::GSocketClient* client /*none*/);
GI_INLINE_DECL bool get_tls () noexcept;

// GTlsCertificateFlags g_socket_client_get_tls_validation_flags (GSocketClient* client /*none*/);
// ::GTlsCertificateFlags g_socket_client_get_tls_validation_flags (::GSocketClient* client /*none*/);
// IGNORE; deprecated

// void g_socket_client_set_enable_proxy (GSocketClient* client /*none*/, gboolean enable);
// void g_socket_client_set_enable_proxy (::GSocketClient* client /*none*/, gboolean enable);
GI_INLINE_DECL void set_enable_proxy (gboolean enable) noexcept;

// void g_socket_client_set_family (GSocketClient* client /*none*/, GSocketFamily family);
// void g_socket_client_set_family (::GSocketClient* client /*none*/, ::GSocketFamily family);
GI_INLINE_DECL void set_family (Gio::SocketFamily family) noexcept;

// void g_socket_client_set_local_address (GSocketClient* client /*none*/, GSocketAddress* address /*none,nullable*/);
// void g_socket_client_set_local_address (::GSocketClient* client /*none*/, ::GSocketAddress* address /*none,nullable*/);
GI_INLINE_DECL void set_local_address (Gio::SocketAddress address) noexcept;
GI_INLINE_DECL void set_local_address () noexcept;

// void g_socket_client_set_protocol (GSocketClient* client /*none*/, GSocketProtocol protocol);
// void g_socket_client_set_protocol (::GSocketClient* client /*none*/, ::GSocketProtocol protocol);
GI_INLINE_DECL void set_protocol (Gio::SocketProtocol protocol) noexcept;

// void g_socket_client_set_proxy_resolver (GSocketClient* client /*none*/, GProxyResolver* proxy_resolver /*none,nullable*/);
// void g_socket_client_set_proxy_resolver (::GSocketClient* client /*none*/, ::GProxyResolver* proxy_resolver /*none,nullable*/);
GI_INLINE_DECL void set_proxy_resolver (Gio::ProxyResolver proxy_resolver) noexcept;
GI_INLINE_DECL void set_proxy_resolver () noexcept;

// void g_socket_client_set_socket_type (GSocketClient* client /*none*/, GSocketType type);
// void g_socket_client_set_socket_type (::GSocketClient* client /*none*/, ::GSocketType type);
GI_INLINE_DECL void set_socket_type (Gio::SocketType type) noexcept;

// void g_socket_client_set_timeout (GSocketClient* client /*none*/, guint timeout);
// void g_socket_client_set_timeout (::GSocketClient* client /*none*/, guint timeout);
GI_INLINE_DECL void set_timeout (guint timeout) noexcept;

// void g_socket_client_set_tls (GSocketClient* client /*none*/, gboolean tls);
// void g_socket_client_set_tls (::GSocketClient* client /*none*/, gboolean tls);
GI_INLINE_DECL void set_tls (gboolean tls) noexcept;

// void g_socket_client_set_tls_validation_flags (GSocketClient* client /*none*/, GTlsCertificateFlags flags);
// void g_socket_client_set_tls_validation_flags (::GSocketClient* client /*none*/, ::GTlsCertificateFlags flags);
// IGNORE; deprecated

gi::property_proxy<bool, base::SocketClientBase> property_enable_proxy()
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "enable-proxy"); }
const gi::property_proxy<bool, base::SocketClientBase> property_enable_proxy() const
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "enable-proxy"); }

gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> (*this, "family"); }

gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> property_local_address()
{ return gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> (*this, "local-address"); }
const gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> property_local_address() const
{ return gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> (*this, "local-address"); }

gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> property_protocol()
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> (*this, "protocol"); }
const gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> property_protocol() const
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> (*this, "protocol"); }

gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> property_proxy_resolver()
{ return gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> (*this, "proxy-resolver"); }
const gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> property_proxy_resolver() const
{ return gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> (*this, "proxy-resolver"); }

gi::property_proxy<guint, base::SocketClientBase> property_timeout()
{ return gi::property_proxy<guint, base::SocketClientBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::SocketClientBase> property_timeout() const
{ return gi::property_proxy<guint, base::SocketClientBase> (*this, "timeout"); }

gi::property_proxy<bool, base::SocketClientBase> property_tls()
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "tls"); }
const gi::property_proxy<bool, base::SocketClientBase> property_tls() const
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "tls"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> property_tls_validation_flags()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> (*this, "tls-validation-flags"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> property_tls_validation_flags() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> (*this, "tls-validation-flags"); }

gi::property_proxy<Gio::SocketType, base::SocketClientBase> property_type()
{ return gi::property_proxy<Gio::SocketType, base::SocketClientBase> (*this, "type"); }
const gi::property_proxy<Gio::SocketType, base::SocketClientBase> property_type() const
{ return gi::property_proxy<Gio::SocketType, base::SocketClientBase> (*this, "type"); }

// (signal) void event ( event,  connectable /*none*/,  connection /*none,nullable*/);
// (signal) void event (::GSocketClientEvent event, ::GSocketConnectable* connectable /*none*/, ::GIOStream* connection /*none,nullable*/);
gi::signal_proxy<void(Gio::SocketClient, Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection)> signal_event()
{ return gi::signal_proxy<void(Gio::SocketClient, Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection)> (*this, "event"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra_def.hpp>)
#include <gio/socketclient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra.hpp>)
#include <gio/socketclient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketClient : public GI_GIO_SOCKETCLIENT_BASE
{ typedef GI_GIO_SOCKETCLIENT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketClient>
{ typedef Gio::SocketClient type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketClientClassDef
{
typedef SocketClientClassDef self;
public:
typedef Gio::SocketClient instance_type;
typedef ::GSocketClientClass class_type;

using GI_MEMBER_CHECK_CONFLICT(event) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketClientClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void SocketClient::event (GSocketClient* client /*none*/, GSocketClientEvent event, GSocketConnectable* connectable /*none*/, GIOStream* connection /*none*/);
// void SocketClient::event (::GSocketClient* client /*none*/, ::GSocketClientEvent event, ::GSocketConnectable* connectable /*none*/, ::GIOStream* connection /*none*/);
virtual void event_ (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketClientClass: public detail::ClassTemplate<Gio::impl::internal::SocketClientClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SocketClientClassDef;
typedef SocketClientClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketClientClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void SocketClient::event (GSocketClient* client /*none*/, GSocketClientEvent event, GSocketConnectable* connectable /*none*/, GIOStream* connection /*none*/);
// void SocketClient::event (::GSocketClient* client /*none*/, ::GSocketClientEvent event, ::GSocketConnectable* connectable /*none*/, ::GIOStream* connection /*none*/);
GI_INLINE_DECL void event_ (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection) noexcept override;


};


struct SocketClientClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SocketClientClass, event)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, event)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SocketClientImpl = detail::ObjectImpl<SocketClient, internal::SocketClientClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
