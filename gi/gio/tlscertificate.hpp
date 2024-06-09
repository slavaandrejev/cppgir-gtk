// AUTO-GENERATED

#ifndef _GI_GIO_TLSCERTIFICATE_HPP_
#define _GI_GIO_TLSCERTIFICATE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SocketConnectable;

class TlsCertificate;

namespace base {


#define GI_GIO_TLSCERTIFICATE_BASE base::TlsCertificateBase
class TlsCertificateBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsCertificate BaseObjectType;

TlsCertificateBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_certificate_get_type(); } 

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_file (const gchar* file /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_file (const char* file /*none*/, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_file (const gi::cstring_v file);
static GI_INLINE_DECL Gio::TlsCertificate new_from_file (const gi::cstring_v file, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_file_with_password (const gchar* file /*none*/, const gchar* password /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_file_with_password (const char* file /*none*/, const char* password /*none*/, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_file_with_password (const gi::cstring_v file, const gi::cstring_v password);
static GI_INLINE_DECL Gio::TlsCertificate new_from_file_with_password (const gi::cstring_v file, const gi::cstring_v password, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_files (const gchar* cert_file /*none*/, const gchar* key_file /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_files (const char* cert_file /*none*/, const char* key_file /*none*/, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_files (const gi::cstring_v cert_file, const gi::cstring_v key_file);
static GI_INLINE_DECL Gio::TlsCertificate new_from_files (const gi::cstring_v cert_file, const gi::cstring_v key_file, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pem (const gchar* data /*none*/, gssize length, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pem (const char* data /*none*/, gssize length, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pem (const gi::cstring_v data, gssize length);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pem (const gi::cstring_v data, gssize length, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs11_uris (const gchar* pkcs11_uri /*none*/, const gchar* private_key_pkcs11_uri /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs11_uris (const char* pkcs11_uri /*none*/, const char* private_key_pkcs11_uri /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, const gi::cstring_v private_key_pkcs11_uri);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, const gi::cstring_v private_key_pkcs11_uri, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, GLib::Error * _error) noexcept;

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs12 (const guint8* data /*none*/, gsize length, const gchar* password /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs12 (const guint8* data /*none*/, gsize length, const char* password /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs12 (const guint8 * data, gsize length, const gi::cstring_v password);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs12 (const guint8 * data, gsize length);
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs12 (const guint8 * data, gsize length, const gi::cstring_v password, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::TlsCertificate new_from_pkcs12 (const guint8 * data, gsize length, GLib::Error * _error) noexcept;

// GList* /*full*/ g_tls_certificate_list_new_from_file (const gchar* file /*none*/, GError ** error);
// ::GList* /*full*/ g_tls_certificate_list_new_from_file (const char* file /*none*/, GError ** error);
static GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> list_new_from_file (const gi::cstring_v file);
static GI_INLINE_DECL gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> list_new_from_file (const gi::cstring_v file, GLib::Error * _error) noexcept;

// GPtrArray* /*container,nullable*/ g_tls_certificate_get_dns_names (GTlsCertificate* cert /*none*/);
//  /*container,nullable*/ g_tls_certificate_get_dns_names (::GTlsCertificate* cert /*none*/);
// SKIP;  type  not supported

// GPtrArray* /*container,nullable*/ g_tls_certificate_get_ip_addresses (GTlsCertificate* cert /*none*/);
//  /*container,nullable*/ g_tls_certificate_get_ip_addresses (::GTlsCertificate* cert /*none*/);
// SKIP;  type  not supported

// GTlsCertificate* /*none,nullable*/ g_tls_certificate_get_issuer (GTlsCertificate* cert /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_tls_certificate_get_issuer (::GTlsCertificate* cert /*none*/);
GI_INLINE_DECL Gio::TlsCertificate get_issuer () noexcept;

// gchar* /*full,nullable*/ g_tls_certificate_get_issuer_name (GTlsCertificate* cert /*none*/);
// char* /*full,nullable*/ g_tls_certificate_get_issuer_name (::GTlsCertificate* cert /*none*/);
GI_INLINE_DECL gi::cstring get_issuer_name () noexcept;

// GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_after (GTlsCertificate* cert /*none*/);
// ::GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_after (::GTlsCertificate* cert /*none*/);
GI_INLINE_DECL GLib::DateTime get_not_valid_after () noexcept;

// GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_before (GTlsCertificate* cert /*none*/);
// ::GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_before (::GTlsCertificate* cert /*none*/);
GI_INLINE_DECL GLib::DateTime get_not_valid_before () noexcept;

// gchar* /*full,nullable*/ g_tls_certificate_get_subject_name (GTlsCertificate* cert /*none*/);
// char* /*full,nullable*/ g_tls_certificate_get_subject_name (::GTlsCertificate* cert /*none*/);
GI_INLINE_DECL gi::cstring get_subject_name () noexcept;

// gboolean g_tls_certificate_is_same (GTlsCertificate* cert_one /*none*/, GTlsCertificate* cert_two /*none*/);
// gboolean g_tls_certificate_is_same (::GTlsCertificate* cert_one /*none*/, ::GTlsCertificate* cert_two /*none*/);
GI_INLINE_DECL bool is_same (Gio::TlsCertificate cert_two) noexcept;

// GTlsCertificateFlags g_tls_certificate_verify (GTlsCertificate* cert /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsCertificate* trusted_ca /*none,nullable*/);
// ::GTlsCertificateFlags g_tls_certificate_verify (::GTlsCertificate* cert /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsCertificate* trusted_ca /*none,nullable*/);
GI_INLINE_DECL Gio::TlsCertificateFlags verify (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca) noexcept;
GI_INLINE_DECL Gio::TlsCertificateFlags verify () noexcept;

gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> property_certificate()
{ return gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> (*this, "certificate"); }
const gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> property_certificate() const
{ return gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> (*this, "certificate"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_certificate_pem()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "certificate-pem"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_certificate_pem() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "certificate-pem"); }

gi::property_proxy<Gio::TlsCertificate, base::TlsCertificateBase> property_issuer()
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsCertificateBase> (*this, "issuer"); }
const gi::property_proxy<Gio::TlsCertificate, base::TlsCertificateBase> property_issuer() const
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsCertificateBase> (*this, "issuer"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_issuer_name()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "issuer-name"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_issuer_name() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "issuer-name"); }

gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> property_not_valid_after()
{ return gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> (*this, "not-valid-after"); }
const gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> property_not_valid_after() const
{ return gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> (*this, "not-valid-after"); }

gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> property_not_valid_before()
{ return gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> (*this, "not-valid-before"); }
const gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> property_not_valid_before() const
{ return gi::property_proxy<GLib::DateTime, base::TlsCertificateBase> (*this, "not-valid-before"); }

gi::property_proxy_write<gi::cstring, base::TlsCertificateBase> property_password()
{ return gi::property_proxy_write<gi::cstring, base::TlsCertificateBase> (*this, "password"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_pkcs11_uri()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "pkcs11-uri"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_pkcs11_uri() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "pkcs11-uri"); }

gi::property_proxy_write<GLib::ByteArray, base::TlsCertificateBase> property_pkcs12_data()
{ return gi::property_proxy_write<GLib::ByteArray, base::TlsCertificateBase> (*this, "pkcs12-data"); }

gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> property_private_key()
{ return gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> (*this, "private-key"); }
const gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> property_private_key() const
{ return gi::property_proxy<GLib::ByteArray, base::TlsCertificateBase> (*this, "private-key"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_private_key_pem()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "private-key-pem"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_private_key_pem() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "private-key-pem"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_private_key_pkcs11_uri()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "private-key-pkcs11-uri"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_private_key_pkcs11_uri() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "private-key-pkcs11-uri"); }

gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_subject_name()
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "subject-name"); }
const gi::property_proxy<gi::cstring, base::TlsCertificateBase> property_subject_name() const
{ return gi::property_proxy<gi::cstring, base::TlsCertificateBase> (*this, "subject-name"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlscertificate_extra_def.hpp>)
#include <gio/tlscertificate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlscertificate_extra.hpp>)
#include <gio/tlscertificate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsCertificate : public GI_GIO_TLSCERTIFICATE_BASE
{ typedef GI_GIO_TLSCERTIFICATE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsCertificate>
{ typedef Gio::TlsCertificate type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsCertificateClassDef
{
typedef TlsCertificateClassDef self;
public:
typedef Gio::TlsCertificate instance_type;
typedef ::GTlsCertificateClass class_type;

using GI_MEMBER_CHECK_CONFLICT(verify) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsCertificateClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GTlsCertificateFlags TlsCertificate::verify (GTlsCertificate* cert /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsCertificate* trusted_ca /*none,nullable*/);
// ::GTlsCertificateFlags TlsCertificate::verify (::GTlsCertificate* cert /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsCertificate* trusted_ca /*none,nullable*/);
virtual Gio::TlsCertificateFlags verify_ (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TlsCertificateClass: public detail::ClassTemplate<Gio::impl::internal::TlsCertificateClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TlsCertificateClassDef;
typedef TlsCertificateClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsCertificateClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GTlsCertificateFlags TlsCertificate::verify (GTlsCertificate* cert /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsCertificate* trusted_ca /*none,nullable*/);
// ::GTlsCertificateFlags TlsCertificate::verify (::GTlsCertificate* cert /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsCertificate* trusted_ca /*none,nullable*/);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_ (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca) noexcept override;


};


struct TlsCertificateClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsCertificateClass, verify)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, verify)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TlsCertificateImpl = detail::ObjectImpl<TlsCertificate, internal::TlsCertificateClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
