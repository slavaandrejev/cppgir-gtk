// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCONNECTION_HPP_
#define _GI_GIO_DTLSCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class DatagramBased;
class TlsCertificate;
class TlsDatabase;
class TlsInteraction;

class DtlsConnection;

namespace base {


#define GI_GIO_DTLSCONNECTION_BASE base::DtlsConnectionBase
class DtlsConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDtlsConnection BaseObjectType;

DtlsConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dtls_connection_get_type(); } 

// gboolean g_dtls_connection_close (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_close (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_dtls_connection_close_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_close_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_close_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_close_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_dtls_connection_emit_accept_certificate (GDtlsConnection* conn /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean g_dtls_connection_emit_accept_certificate (::GDtlsConnection* conn /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept;

// GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_certificate (GDtlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_certificate (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificate get_certificate () noexcept;

// gboolean g_dtls_connection_get_channel_binding_data (GDtlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none,out,opt*/, GError ** error);
// gboolean g_dtls_connection_get_channel_binding_data (::GDtlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray** data /*none,out,opt*/, GError ** error);
// SKIP; inconsistent data out pointer depth (1 vs 2)

// gchar* /*full,nullable*/ g_dtls_connection_get_ciphersuite_name (GDtlsConnection* conn /*none*/);
// char* /*full,nullable*/ g_dtls_connection_get_ciphersuite_name (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring get_ciphersuite_name () noexcept;

// GTlsDatabase* /*none,nullable*/ g_dtls_connection_get_database (GDtlsConnection* conn /*none*/);
// ::GTlsDatabase* /*none,nullable*/ g_dtls_connection_get_database (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsDatabase get_database () noexcept;

// GTlsInteraction* /*none,nullable*/ g_dtls_connection_get_interaction (GDtlsConnection* conn /*none*/);
// ::GTlsInteraction* /*none,nullable*/ g_dtls_connection_get_interaction (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsInteraction get_interaction () noexcept;

// const gchar* /*none,nullable*/ g_dtls_connection_get_negotiated_protocol (GDtlsConnection* conn /*none*/);
// const char* /*none,nullable*/ g_dtls_connection_get_negotiated_protocol (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring_v get_negotiated_protocol () noexcept;

// GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_peer_certificate (GDtlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_dtls_connection_get_peer_certificate (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificate get_peer_certificate () noexcept;

// GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (GDtlsConnection* conn /*none*/);
// ::GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificateFlags get_peer_certificate_errors () noexcept;

// GTlsProtocolVersion g_dtls_connection_get_protocol_version (GDtlsConnection* conn /*none*/);
// ::GTlsProtocolVersion g_dtls_connection_get_protocol_version (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsProtocolVersion get_protocol_version () noexcept;

// GTlsRehandshakeMode /*none*/ g_dtls_connection_get_rehandshake_mode (GDtlsConnection* conn /*none*/);
//  /*none*/ g_dtls_connection_get_rehandshake_mode (::GDtlsConnection* conn /*none*/);
// IGNORE; deprecated

// gboolean g_dtls_connection_get_require_close_notify (GDtlsConnection* conn /*none*/);
// gboolean g_dtls_connection_get_require_close_notify (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL bool get_require_close_notify () noexcept;

// gboolean g_dtls_connection_handshake (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_handshake (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable);
GI_INLINE_DECL bool handshake ();
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool handshake (GLib::Error * _error) noexcept;

// void g_dtls_connection_handshake_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_handshake_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_handshake_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_handshake_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_dtls_connection_set_advertised_protocols (GDtlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void g_dtls_connection_set_advertised_protocols (::GDtlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
GI_INLINE_DECL void set_advertised_protocols (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept;

// void g_dtls_connection_set_certificate (GDtlsConnection* conn /*none*/, GTlsCertificate* certificate /*none*/);
// void g_dtls_connection_set_certificate (::GDtlsConnection* conn /*none*/, ::GTlsCertificate* certificate /*none*/);
GI_INLINE_DECL void set_certificate (Gio::TlsCertificate certificate) noexcept;

// void g_dtls_connection_set_database (GDtlsConnection* conn /*none*/, GTlsDatabase* database /*none,nullable*/);
// void g_dtls_connection_set_database (::GDtlsConnection* conn /*none*/, ::GTlsDatabase* database /*none,nullable*/);
GI_INLINE_DECL void set_database (Gio::TlsDatabase database) noexcept;
GI_INLINE_DECL void set_database () noexcept;

// void g_dtls_connection_set_interaction (GDtlsConnection* conn /*none*/, GTlsInteraction* interaction /*none,nullable*/);
// void g_dtls_connection_set_interaction (::GDtlsConnection* conn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/);
GI_INLINE_DECL void set_interaction (Gio::TlsInteraction interaction) noexcept;
GI_INLINE_DECL void set_interaction () noexcept;

// void g_dtls_connection_set_rehandshake_mode (GDtlsConnection* conn /*none*/, GTlsRehandshakeMode mode /*none*/);
// void g_dtls_connection_set_rehandshake_mode (::GDtlsConnection* conn /*none*/,  mode /*none*/);
// IGNORE; deprecated

// void g_dtls_connection_set_require_close_notify (GDtlsConnection* conn /*none*/, gboolean require_close_notify);
// void g_dtls_connection_set_require_close_notify (::GDtlsConnection* conn /*none*/, gboolean require_close_notify);
GI_INLINE_DECL void set_require_close_notify (gboolean require_close_notify) noexcept;

// gboolean g_dtls_connection_shutdown (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_dtls_connection_shutdown (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept;

// void g_dtls_connection_shutdown_async (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_dtls_connection_shutdown_async (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_shutdown_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_dtls_connection_shutdown_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool shutdown_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool shutdown_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> property_base_socket()
{ return gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> (*this, "base-socket"); }
const gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> property_base_socket() const
{ return gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> (*this, "base-socket"); }

gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "certificate"); }

gi::property_proxy<gi::cstring, base::DtlsConnectionBase> property_ciphersuite_name()
{ return gi::property_proxy<gi::cstring, base::DtlsConnectionBase> (*this, "ciphersuite-name"); }
const gi::property_proxy<gi::cstring, base::DtlsConnectionBase> property_ciphersuite_name() const
{ return gi::property_proxy<gi::cstring, base::DtlsConnectionBase> (*this, "ciphersuite-name"); }

gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> property_database()
{ return gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> (*this, "database"); }
const gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> property_database() const
{ return gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> (*this, "database"); }

gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> property_interaction()
{ return gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> (*this, "interaction"); }
const gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> property_interaction() const
{ return gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> (*this, "interaction"); }

gi::property_proxy<gi::cstring, base::DtlsConnectionBase> property_negotiated_protocol()
{ return gi::property_proxy<gi::cstring, base::DtlsConnectionBase> (*this, "negotiated-protocol"); }
const gi::property_proxy<gi::cstring, base::DtlsConnectionBase> property_negotiated_protocol() const
{ return gi::property_proxy<gi::cstring, base::DtlsConnectionBase> (*this, "negotiated-protocol"); }

gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_peer_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "peer-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_peer_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "peer-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> property_peer_certificate_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> (*this, "peer-certificate-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> property_peer_certificate_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> (*this, "peer-certificate-errors"); }

gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> property_protocol_version()
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> (*this, "protocol-version"); }
const gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> property_protocol_version() const
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> (*this, "protocol-version"); }

gi::property_proxy<bool, base::DtlsConnectionBase> property_require_close_notify()
{ return gi::property_proxy<bool, base::DtlsConnectionBase> (*this, "require-close-notify"); }
const gi::property_proxy<bool, base::DtlsConnectionBase> property_require_close_notify() const
{ return gi::property_proxy<bool, base::DtlsConnectionBase> (*this, "require-close-notify"); }

// (signal) gboolean accept-certificate ( peer_cert /*none*/,  errors);
// (signal) gboolean accept-certificate (::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
gi::signal_proxy<bool(Gio::DtlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> signal_accept_certificate()
{ return gi::signal_proxy<bool(Gio::DtlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> (*this, "accept-certificate"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_def.hpp>)
#include <gio/dtlsconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra.hpp>)
#include <gio/dtlsconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DtlsConnection : public GI_GIO_DTLSCONNECTION_BASE
{ typedef GI_GIO_DTLSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDtlsConnection>
{ typedef Gio::DtlsConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DtlsConnectionInterfaceDef
{
typedef DtlsConnectionInterfaceDef self;
public:
typedef Gio::DtlsConnection instance_type;
typedef ::GDtlsConnectionInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(accept_certificate) = self;
using GI_MEMBER_CHECK_CONFLICT(get_binding_data) = self;
using GI_MEMBER_CHECK_CONFLICT(get_negotiated_protocol) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake_async) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(set_advertised_protocols) = self;
using GI_MEMBER_CHECK_CONFLICT(shutdown) = self;
using GI_MEMBER_CHECK_CONFLICT(shutdown_async) = self;
using GI_MEMBER_CHECK_CONFLICT(shutdown_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DtlsConnectionInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
virtual bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept = 0;

// gboolean DtlsConnection::get_binding_data (GDtlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none*/, GError ** error);
// gboolean DtlsConnection::get_binding_data (::GDtlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray* data /*none*/, GError ** error);
virtual bool get_binding_data_ (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error) = 0;

// const gchar* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (GDtlsConnection* conn /*none*/);
// const char* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (::GDtlsConnection* conn /*none*/);
virtual gi::cstring_v get_negotiated_protocol_ () noexcept = 0;

// gboolean DtlsConnection::handshake (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::handshake (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool handshake_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void DtlsConnection::handshake_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::handshake_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void handshake_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean DtlsConnection::handshake_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::handshake_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool handshake_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void DtlsConnection::set_advertised_protocols (GDtlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void DtlsConnection::set_advertised_protocols (::GDtlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
virtual void set_advertised_protocols_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept = 0;

// gboolean DtlsConnection::shutdown (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::shutdown (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool shutdown_ (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void DtlsConnection::shutdown_async (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::shutdown_async (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void shutdown_async_ (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean DtlsConnection::shutdown_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::shutdown_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool shutdown_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

using DtlsConnectionImpl = detail::InterfaceImpl<DtlsConnectionInterfaceDef>;

class DtlsConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<DtlsConnectionImpl>
{
friend class internal::DtlsConnectionInterfaceDef;
typedef DtlsConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DtlsConnectionImpl> super;

protected:
using super::super;

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept override;

// gboolean DtlsConnection::get_binding_data (GDtlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none*/, GError ** error);
// gboolean DtlsConnection::get_binding_data (::GDtlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray* data /*none*/, GError ** error);
GI_INLINE_DECL bool get_binding_data_ (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error) override;

// const gchar* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (GDtlsConnection* conn /*none*/);
// const char* /*none,nullable*/ DtlsConnection::get_negotiated_protocol (::GDtlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring_v get_negotiated_protocol_ () noexcept override;

// gboolean DtlsConnection::handshake (GDtlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::handshake (::GDtlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool handshake_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void DtlsConnection::handshake_async (GDtlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::handshake_async (::GDtlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void handshake_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean DtlsConnection::handshake_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::handshake_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool handshake_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void DtlsConnection::set_advertised_protocols (GDtlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void DtlsConnection::set_advertised_protocols (::GDtlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
GI_INLINE_DECL void set_advertised_protocols_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept override;

// gboolean DtlsConnection::shutdown (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean DtlsConnection::shutdown (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool shutdown_ (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void DtlsConnection::shutdown_async (GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void DtlsConnection::shutdown_async (::GDtlsConnection* conn /*none*/, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void shutdown_async_ (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean DtlsConnection::shutdown_finish (GDtlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean DtlsConnection::shutdown_finish (::GDtlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool shutdown_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct DtlsConnectionInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, accept_certificate)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, get_binding_data)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, get_negotiated_protocol)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, handshake)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, handshake_async)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, handshake_finish)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, set_advertised_protocols)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, shutdown)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, shutdown_async)
  GI_MEMBER_DEFINE(DtlsConnectionInterfaceClassImpl, shutdown_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, accept_certificate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_binding_data),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_negotiated_protocol),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handshake),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handshake_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handshake_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_advertised_protocols),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, shutdown),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, shutdown_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, shutdown_finish)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
