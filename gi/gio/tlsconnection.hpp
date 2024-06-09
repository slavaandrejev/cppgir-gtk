// AUTO-GENERATED

#ifndef _GI_GIO_TLSCONNECTION_HPP_
#define _GI_GIO_TLSCONNECTION_HPP_

#include "iostream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class TlsCertificate;
class TlsDatabase;
class TlsInteraction;

class TlsConnection;

namespace base {


#define GI_GIO_TLSCONNECTION_BASE base::TlsConnectionBase
class TlsConnectionBase : public Gio::IOStream
{
typedef Gio::IOStream super_type;
public:
typedef ::GTlsConnection BaseObjectType;

TlsConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_connection_get_type(); } 

// gboolean g_tls_connection_emit_accept_certificate (GTlsConnection* conn /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean g_tls_connection_emit_accept_certificate (::GTlsConnection* conn /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept;

// GTlsCertificate* /*none,nullable*/ g_tls_connection_get_certificate (GTlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_tls_connection_get_certificate (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificate get_certificate () noexcept;

// gboolean g_tls_connection_get_channel_binding_data (GTlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none,out,opt*/, GError ** error);
// gboolean g_tls_connection_get_channel_binding_data (::GTlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray** data /*none,out,opt*/, GError ** error);
// SKIP; inconsistent data out pointer depth (1 vs 2)

// gchar* /*full,nullable*/ g_tls_connection_get_ciphersuite_name (GTlsConnection* conn /*none*/);
// char* /*full,nullable*/ g_tls_connection_get_ciphersuite_name (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring get_ciphersuite_name () noexcept;

// GTlsDatabase* /*none,nullable*/ g_tls_connection_get_database (GTlsConnection* conn /*none*/);
// ::GTlsDatabase* /*none,nullable*/ g_tls_connection_get_database (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsDatabase get_database () noexcept;

// GTlsInteraction* /*none,nullable*/ g_tls_connection_get_interaction (GTlsConnection* conn /*none*/);
// ::GTlsInteraction* /*none,nullable*/ g_tls_connection_get_interaction (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsInteraction get_interaction () noexcept;

// const gchar* /*none,nullable*/ g_tls_connection_get_negotiated_protocol (GTlsConnection* conn /*none*/);
// const char* /*none,nullable*/ g_tls_connection_get_negotiated_protocol (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring_v get_negotiated_protocol () noexcept;

// GTlsCertificate* /*none,nullable*/ g_tls_connection_get_peer_certificate (GTlsConnection* conn /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_tls_connection_get_peer_certificate (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificate get_peer_certificate () noexcept;

// GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (GTlsConnection* conn /*none*/);
// ::GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsCertificateFlags get_peer_certificate_errors () noexcept;

// GTlsProtocolVersion g_tls_connection_get_protocol_version (GTlsConnection* conn /*none*/);
// ::GTlsProtocolVersion g_tls_connection_get_protocol_version (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL Gio::TlsProtocolVersion get_protocol_version () noexcept;

// GTlsRehandshakeMode /*none*/ g_tls_connection_get_rehandshake_mode (GTlsConnection* conn /*none*/);
//  /*none*/ g_tls_connection_get_rehandshake_mode (::GTlsConnection* conn /*none*/);
// IGNORE; deprecated

// gboolean g_tls_connection_get_require_close_notify (GTlsConnection* conn /*none*/);
// gboolean g_tls_connection_get_require_close_notify (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL bool get_require_close_notify () noexcept;

// gboolean g_tls_connection_get_use_system_certdb (GTlsConnection* conn /*none*/);
// gboolean g_tls_connection_get_use_system_certdb (::GTlsConnection* conn /*none*/);
// IGNORE; deprecated

// gboolean g_tls_connection_handshake (GTlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_tls_connection_handshake (::GTlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable);
GI_INLINE_DECL bool handshake ();
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool handshake (GLib::Error * _error) noexcept;

// void g_tls_connection_handshake_async (GTlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_connection_handshake_async (::GTlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_tls_connection_handshake_finish (GTlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_tls_connection_handshake_finish (::GTlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_tls_connection_set_advertised_protocols (GTlsConnection* conn /*none*/, const gchar* const* protocols /*none,nullable*/);
// void g_tls_connection_set_advertised_protocols (::GTlsConnection* conn /*none*/, const char** protocols /*none,nullable*/);
GI_INLINE_DECL void set_advertised_protocols (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> protocols) noexcept;

// void g_tls_connection_set_certificate (GTlsConnection* conn /*none*/, GTlsCertificate* certificate /*none*/);
// void g_tls_connection_set_certificate (::GTlsConnection* conn /*none*/, ::GTlsCertificate* certificate /*none*/);
GI_INLINE_DECL void set_certificate (Gio::TlsCertificate certificate) noexcept;

// void g_tls_connection_set_database (GTlsConnection* conn /*none*/, GTlsDatabase* database /*none,nullable*/);
// void g_tls_connection_set_database (::GTlsConnection* conn /*none*/, ::GTlsDatabase* database /*none,nullable*/);
GI_INLINE_DECL void set_database (Gio::TlsDatabase database) noexcept;
GI_INLINE_DECL void set_database () noexcept;

// void g_tls_connection_set_interaction (GTlsConnection* conn /*none*/, GTlsInteraction* interaction /*none,nullable*/);
// void g_tls_connection_set_interaction (::GTlsConnection* conn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/);
GI_INLINE_DECL void set_interaction (Gio::TlsInteraction interaction) noexcept;
GI_INLINE_DECL void set_interaction () noexcept;

// void g_tls_connection_set_rehandshake_mode (GTlsConnection* conn /*none*/, GTlsRehandshakeMode mode /*none*/);
// void g_tls_connection_set_rehandshake_mode (::GTlsConnection* conn /*none*/,  mode /*none*/);
// IGNORE; deprecated

// void g_tls_connection_set_require_close_notify (GTlsConnection* conn /*none*/, gboolean require_close_notify);
// void g_tls_connection_set_require_close_notify (::GTlsConnection* conn /*none*/, gboolean require_close_notify);
GI_INLINE_DECL void set_require_close_notify (gboolean require_close_notify) noexcept;

// void g_tls_connection_set_use_system_certdb (GTlsConnection* conn /*none*/, gboolean use_system_certdb);
// void g_tls_connection_set_use_system_certdb (::GTlsConnection* conn /*none*/, gboolean use_system_certdb);
// IGNORE; deprecated

gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> property_base_io_stream()
{ return gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> (*this, "base-io-stream"); }
const gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> property_base_io_stream() const
{ return gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> (*this, "base-io-stream"); }

gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "certificate"); }

gi::property_proxy<gi::cstring, base::TlsConnectionBase> property_ciphersuite_name()
{ return gi::property_proxy<gi::cstring, base::TlsConnectionBase> (*this, "ciphersuite-name"); }
const gi::property_proxy<gi::cstring, base::TlsConnectionBase> property_ciphersuite_name() const
{ return gi::property_proxy<gi::cstring, base::TlsConnectionBase> (*this, "ciphersuite-name"); }

gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> property_database()
{ return gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> (*this, "database"); }
const gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> property_database() const
{ return gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> (*this, "database"); }

gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> property_interaction()
{ return gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> (*this, "interaction"); }
const gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> property_interaction() const
{ return gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> (*this, "interaction"); }

gi::property_proxy<gi::cstring, base::TlsConnectionBase> property_negotiated_protocol()
{ return gi::property_proxy<gi::cstring, base::TlsConnectionBase> (*this, "negotiated-protocol"); }
const gi::property_proxy<gi::cstring, base::TlsConnectionBase> property_negotiated_protocol() const
{ return gi::property_proxy<gi::cstring, base::TlsConnectionBase> (*this, "negotiated-protocol"); }

gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_peer_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "peer-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_peer_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "peer-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> property_peer_certificate_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> (*this, "peer-certificate-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> property_peer_certificate_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> (*this, "peer-certificate-errors"); }

gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> property_protocol_version()
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> (*this, "protocol-version"); }
const gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> property_protocol_version() const
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> (*this, "protocol-version"); }

gi::property_proxy<bool, base::TlsConnectionBase> property_require_close_notify()
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "require-close-notify"); }
const gi::property_proxy<bool, base::TlsConnectionBase> property_require_close_notify() const
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "require-close-notify"); }

gi::property_proxy<bool, base::TlsConnectionBase> property_use_system_certdb()
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "use-system-certdb"); }
const gi::property_proxy<bool, base::TlsConnectionBase> property_use_system_certdb() const
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "use-system-certdb"); }

// (signal) gboolean accept-certificate ( peer_cert /*none*/,  errors);
// (signal) gboolean accept-certificate (::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
gi::signal_proxy<bool(Gio::TlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> signal_accept_certificate()
{ return gi::signal_proxy<bool(Gio::TlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> (*this, "accept-certificate"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra_def.hpp>)
#include <gio/tlsconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra.hpp>)
#include <gio/tlsconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsConnection : public GI_GIO_TLSCONNECTION_BASE
{ typedef GI_GIO_TLSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsConnection>
{ typedef Gio::TlsConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsConnectionClassDef
{
typedef TlsConnectionClassDef self;
public:
typedef Gio::TlsConnection instance_type;
typedef ::GTlsConnectionClass class_type;

using GI_MEMBER_CHECK_CONFLICT(accept_certificate) = self;
using GI_MEMBER_CHECK_CONFLICT(get_binding_data) = self;
using GI_MEMBER_CHECK_CONFLICT(get_negotiated_protocol) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake_async) = self;
using GI_MEMBER_CHECK_CONFLICT(handshake_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsConnectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean TlsConnection::accept_certificate (GTlsConnection* connection /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean TlsConnection::accept_certificate (::GTlsConnection* connection /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
virtual bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept = 0;

// gboolean TlsConnection::get_binding_data (GTlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none*/, GError ** error);
// gboolean TlsConnection::get_binding_data (::GTlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray* data /*none*/, GError ** error);
virtual bool get_binding_data_ (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error) = 0;

// const gchar* /*none,nullable*/ TlsConnection::get_negotiated_protocol (GTlsConnection* conn /*none*/);
// const char* /*none,nullable*/ TlsConnection::get_negotiated_protocol (::GTlsConnection* conn /*none*/);
virtual gi::cstring_v get_negotiated_protocol_ () noexcept = 0;

// gboolean TlsConnection::handshake (GTlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean TlsConnection::handshake (::GTlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool handshake_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsConnection::handshake_async (GTlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsConnection::handshake_async (::GTlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void handshake_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean TlsConnection::handshake_finish (GTlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean TlsConnection::handshake_finish (::GTlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool handshake_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class TlsConnectionClass: public detail::ClassTemplate<Gio::impl::internal::TlsConnectionClassDef, Gio::impl::internal::IOStreamClass>
{
friend class internal::TlsConnectionClassDef;
typedef TlsConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsConnectionClassDef, Gio::impl::internal::IOStreamClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean TlsConnection::accept_certificate (GTlsConnection* connection /*none*/, GTlsCertificate* peer_cert /*none*/, GTlsCertificateFlags errors);
// gboolean TlsConnection::accept_certificate (::GTlsConnection* connection /*none*/, ::GTlsCertificate* peer_cert /*none*/, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept override;

// gboolean TlsConnection::get_binding_data (GTlsConnection* conn /*none*/, GTlsChannelBindingType type, GByteArray* data /*none*/, GError ** error);
// gboolean TlsConnection::get_binding_data (::GTlsConnection* conn /*none*/, ::GTlsChannelBindingType type, ::GByteArray* data /*none*/, GError ** error);
GI_INLINE_DECL bool get_binding_data_ (Gio::TlsChannelBindingType type, GLib::ByteArray_Ref data, GLib::Error * _error) override;

// const gchar* /*none,nullable*/ TlsConnection::get_negotiated_protocol (GTlsConnection* conn /*none*/);
// const char* /*none,nullable*/ TlsConnection::get_negotiated_protocol (::GTlsConnection* conn /*none*/);
GI_INLINE_DECL gi::cstring_v get_negotiated_protocol_ () noexcept override;

// gboolean TlsConnection::handshake (GTlsConnection* conn /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean TlsConnection::handshake (::GTlsConnection* conn /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool handshake_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsConnection::handshake_async (GTlsConnection* conn /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsConnection::handshake_async (::GTlsConnection* conn /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void handshake_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean TlsConnection::handshake_finish (GTlsConnection* conn /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean TlsConnection::handshake_finish (::GTlsConnection* conn /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool handshake_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct TlsConnectionClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsConnectionClass, accept_certificate)
  GI_MEMBER_DEFINE(TlsConnectionClass, get_binding_data)
  GI_MEMBER_DEFINE(TlsConnectionClass, get_negotiated_protocol)
  GI_MEMBER_DEFINE(TlsConnectionClass, handshake)
  GI_MEMBER_DEFINE(TlsConnectionClass, handshake_async)
  GI_MEMBER_DEFINE(TlsConnectionClass, handshake_finish)

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
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handshake_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TlsConnectionImpl = detail::ObjectImpl<TlsConnection, internal::TlsConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
