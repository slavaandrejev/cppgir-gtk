// AUTO-GENERATED

#ifndef _GI_GIO_TLSBACKEND_HPP_
#define _GI_GIO_TLSBACKEND_HPP_


namespace gi {

namespace repository {

namespace Gio {

class TlsDatabase;

class TlsBackend;

namespace base {


#define GI_GIO_TLSBACKEND_BASE base::TlsBackendBase
class TlsBackendBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GTlsBackend BaseObjectType;

TlsBackendBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_backend_get_type(); } 

// GTlsBackend* /*none*/ g_tls_backend_get_default ();
// ::GTlsBackend* /*none*/ g_tls_backend_get_default ();
static GI_INLINE_DECL Gio::TlsBackend get_default () noexcept;

// GType g_tls_backend_get_certificate_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_certificate_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_certificate_type () noexcept;

// GType g_tls_backend_get_client_connection_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_client_connection_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_client_connection_type () noexcept;

// GTlsDatabase* /*full*/ g_tls_backend_get_default_database (GTlsBackend* backend /*none*/);
// ::GTlsDatabase* /*full*/ g_tls_backend_get_default_database (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL Gio::TlsDatabase get_default_database () noexcept;

// GType g_tls_backend_get_dtls_client_connection_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_dtls_client_connection_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_dtls_client_connection_type () noexcept;

// GType g_tls_backend_get_dtls_server_connection_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_dtls_server_connection_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_dtls_server_connection_type () noexcept;

// GType g_tls_backend_get_file_database_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_file_database_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_file_database_type () noexcept;

// GType g_tls_backend_get_server_connection_type (GTlsBackend* backend /*none*/);
// GType g_tls_backend_get_server_connection_type (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL GType get_server_connection_type () noexcept;

// void g_tls_backend_set_default_database (GTlsBackend* backend /*none*/, GTlsDatabase* database /*none,nullable*/);
// void g_tls_backend_set_default_database (::GTlsBackend* backend /*none*/, ::GTlsDatabase* database /*none,nullable*/);
GI_INLINE_DECL void set_default_database (Gio::TlsDatabase database) noexcept;
GI_INLINE_DECL void set_default_database () noexcept;

// gboolean g_tls_backend_supports_dtls (GTlsBackend* backend /*none*/);
// gboolean g_tls_backend_supports_dtls (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL bool supports_dtls () noexcept;

// gboolean g_tls_backend_supports_tls (GTlsBackend* backend /*none*/);
// gboolean g_tls_backend_supports_tls (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL bool supports_tls () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsbackend_extra_def.hpp>)
#include <gio/tlsbackend_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsbackend_extra.hpp>)
#include <gio/tlsbackend_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsBackend : public GI_GIO_TLSBACKEND_BASE
{ typedef GI_GIO_TLSBACKEND_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsBackend>
{ typedef Gio::TlsBackend type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsBackendInterfaceDef
{
typedef TlsBackendInterfaceDef self;
public:
typedef Gio::TlsBackend instance_type;
typedef ::GTlsBackendInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_default_database) = self;
using GI_MEMBER_CHECK_CONFLICT(supports_dtls) = self;
using GI_MEMBER_CHECK_CONFLICT(supports_tls) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsBackendInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GTlsDatabase* /*full*/ TlsBackend::get_default_database (GTlsBackend* backend /*none*/);
// ::GTlsDatabase* /*full*/ TlsBackend::get_default_database (::GTlsBackend* backend /*none*/);
virtual Gio::TlsDatabase get_default_database_ () noexcept = 0;

// gboolean TlsBackend::supports_dtls (GTlsBackend* backend /*none*/);
// gboolean TlsBackend::supports_dtls (::GTlsBackend* backend /*none*/);
virtual bool supports_dtls_ () noexcept = 0;

// gboolean TlsBackend::supports_tls (GTlsBackend* backend /*none*/);
// gboolean TlsBackend::supports_tls (::GTlsBackend* backend /*none*/);
virtual bool supports_tls_ () noexcept = 0;


};

using TlsBackendImpl = detail::InterfaceImpl<TlsBackendInterfaceDef>;

class TlsBackendInterfaceClassImpl: public detail::InterfaceClassImpl<TlsBackendImpl>
{
friend class internal::TlsBackendInterfaceDef;
typedef TlsBackendInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TlsBackendImpl> super;

protected:
using super::super;

// GTlsDatabase* /*full*/ TlsBackend::get_default_database (GTlsBackend* backend /*none*/);
// ::GTlsDatabase* /*full*/ TlsBackend::get_default_database (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL Gio::TlsDatabase get_default_database_ () noexcept override;

// gboolean TlsBackend::supports_dtls (GTlsBackend* backend /*none*/);
// gboolean TlsBackend::supports_dtls (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL bool supports_dtls_ () noexcept override;

// gboolean TlsBackend::supports_tls (GTlsBackend* backend /*none*/);
// gboolean TlsBackend::supports_tls (::GTlsBackend* backend /*none*/);
GI_INLINE_DECL bool supports_tls_ () noexcept override;


};


struct TlsBackendInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsBackendInterfaceClassImpl, get_default_database)
  GI_MEMBER_DEFINE(TlsBackendInterfaceClassImpl, supports_dtls)
  GI_MEMBER_DEFINE(TlsBackendInterfaceClassImpl, supports_tls)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_default_database),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, supports_dtls),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, supports_tls)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
