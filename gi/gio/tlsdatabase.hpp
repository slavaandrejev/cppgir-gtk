// AUTO-GENERATED

#ifndef _GI_GIO_TLSDATABASE_HPP_
#define _GI_GIO_TLSDATABASE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class SocketConnectable;
class TlsCertificate;
class TlsInteraction;

class TlsDatabase;

namespace base {


#define GI_GIO_TLSDATABASE_BASE base::TlsDatabaseBase
class TlsDatabaseBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsDatabase BaseObjectType;

TlsDatabaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_database_get_type(); } 

// gchar* /*full,nullable*/ g_tls_database_create_certificate_handle (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/);
// char* /*full,nullable*/ g_tls_database_create_certificate_handle (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/);
GI_INLINE_DECL gi::cstring create_certificate_handle (Gio::TlsCertificate certificate) noexcept;

// GTlsCertificate* /*full,nullable*/ g_tls_database_lookup_certificate_for_handle (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full,nullable*/ g_tls_database_lookup_certificate_for_handle (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificate_for_handle_async (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificate_for_handle_async (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificate_for_handle_async (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificate_for_handle_async (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_for_handle_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_for_handle_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificate_issuer_async (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificate_issuer_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_tls_database_lookup_certificates_issued_by (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_tls_database_lookup_certificates_issued_by (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificates_issued_by_async (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificates_issued_by_async (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificates_issued_by_async (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificates_issued_by_async (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_tls_database_lookup_certificates_issued_by_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_tls_database_lookup_certificates_issued_by_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GTlsCertificateFlags g_tls_database_verify_chain (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_verify_chain_async (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_verify_chain_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void verify_chain_async (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void verify_chain_async (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificateFlags g_tls_database_verify_chain_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_def.hpp>)
#include <gio/tlsdatabase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra.hpp>)
#include <gio/tlsdatabase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsDatabase : public GI_GIO_TLSDATABASE_BASE
{ typedef GI_GIO_TLSDATABASE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsDatabase>
{ typedef Gio::TlsDatabase type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsDatabaseClassDef
{
typedef TlsDatabaseClassDef self;
public:
typedef Gio::TlsDatabase instance_type;
typedef ::GTlsDatabaseClass class_type;

using GI_MEMBER_CHECK_CONFLICT(create_certificate_handle) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_for_handle) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_for_handle_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_for_handle_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_issuer) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_issuer_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificate_issuer_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificates_issued_by) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificates_issued_by_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_certificates_issued_by_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(verify_chain) = self;
using GI_MEMBER_CHECK_CONFLICT(verify_chain_async) = self;
using GI_MEMBER_CHECK_CONFLICT(verify_chain_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsDatabaseClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* /*full,nullable*/ TlsDatabase::create_certificate_handle (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/);
// char* /*full,nullable*/ TlsDatabase::create_certificate_handle (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/);
virtual gi::cstring create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept = 0;

// GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::TlsCertificate lookup_certificate_for_handle_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_certificate_for_handle_async_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::TlsCertificate lookup_certificate_for_handle_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::TlsCertificate lookup_certificate_issuer_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_certificate_issuer_async_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::TlsCertificate lookup_certificate_issuer_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_certificates_issued_by_async_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::TlsCertificateFlags verify_chain_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsDatabase::verify_chain_async (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void verify_chain_async_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::TlsCertificateFlags verify_chain_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class TlsDatabaseClass: public detail::ClassTemplate<Gio::impl::internal::TlsDatabaseClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TlsDatabaseClassDef;
typedef TlsDatabaseClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsDatabaseClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gchar* /*full,nullable*/ TlsDatabase::create_certificate_handle (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/);
// char* /*full,nullable*/ TlsDatabase::create_certificate_handle (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/);
GI_INLINE_DECL gi::cstring create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept override;

// GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificate_for_handle_async_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificate_issuer_async_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_certificates_issued_by_async_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> lookup_certificates_issued_by_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsDatabase::verify_chain_async (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void verify_chain_async_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct TlsDatabaseClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsDatabaseClass, create_certificate_handle)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_for_handle)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_for_handle_async)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_for_handle_finish)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_issuer)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_issuer_async)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificate_issuer_finish)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificates_issued_by)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificates_issued_by_async)
  GI_MEMBER_DEFINE(TlsDatabaseClass, lookup_certificates_issued_by_finish)
  GI_MEMBER_DEFINE(TlsDatabaseClass, verify_chain)
  GI_MEMBER_DEFINE(TlsDatabaseClass, verify_chain_async)
  GI_MEMBER_DEFINE(TlsDatabaseClass, verify_chain_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_certificate_handle),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_for_handle),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_for_handle_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_for_handle_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_issuer),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_issuer_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificate_issuer_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificates_issued_by),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificates_issued_by_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_certificates_issued_by_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, verify_chain),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, verify_chain_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, verify_chain_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TlsDatabaseImpl = detail::ObjectImpl<TlsDatabase, internal::TlsDatabaseClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
