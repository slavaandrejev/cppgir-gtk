// AUTO-GENERATED

#ifndef _GI_GIO_TLSCERTIFICATE_IMPL_HPP_
#define _GI_GIO_TLSCERTIFICATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_file (const gchar* file /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_file (const char* file /*none*/, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_file (const gi::cstring_v file)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_file (const gi::cstring_v file, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_file_with_password (const gchar* file /*none*/, const gchar* password /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_file_with_password (const char* file /*none*/, const char* password /*none*/, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_file_with_password (const gi::cstring_v file, const gi::cstring_v password)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* file, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_file_with_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), (const char*) (password_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_file_with_password (const gi::cstring_v file, const gi::cstring_v password, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* file, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_file_with_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), (const char*) (password_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_files (const gchar* cert_file /*none*/, const gchar* key_file /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_files (const char* cert_file /*none*/, const char* key_file /*none*/, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_files (const gi::cstring_v cert_file, const gi::cstring_v key_file)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* cert_file, const char* key_file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_files;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  auto cert_file_to_c = gi::unwrap (cert_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (cert_file_to_c), (const char*) (key_file_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_files (const gi::cstring_v cert_file, const gi::cstring_v key_file, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* cert_file, const char* key_file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_files;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  auto cert_file_to_c = gi::unwrap (cert_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (cert_file_to_c), (const char*) (key_file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pem (const gchar* data /*none*/, gssize length, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pem (const char* data /*none*/, gssize length, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_pem (const gi::cstring_v data, gssize length)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* data, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pem;
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (data_to_c), (gssize) (length_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pem (const gi::cstring_v data, gssize length, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* data, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pem;
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (data_to_c), (gssize) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs11_uris (const gchar* pkcs11_uri /*none*/, const gchar* private_key_pkcs11_uri /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs11_uris (const char* pkcs11_uri /*none*/, const char* private_key_pkcs11_uri /*none,nullable*/, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, const gi::cstring_v private_key_pkcs11_uri)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* pkcs11_uri, const char* private_key_pkcs11_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs11_uris;
  auto private_key_pkcs11_uri_to_c = gi::unwrap (private_key_pkcs11_uri, gi::transfer_none);
  auto pkcs11_uri_to_c = gi::unwrap (pkcs11_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pkcs11_uri_to_c), (const char*) (private_key_pkcs11_uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* pkcs11_uri, const char* private_key_pkcs11_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs11_uris;
  auto private_key_pkcs11_uri_to_c = nullptr;
  auto pkcs11_uri_to_c = gi::unwrap (pkcs11_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pkcs11_uri_to_c), (const char*) (private_key_pkcs11_uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, const gi::cstring_v private_key_pkcs11_uri, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* pkcs11_uri, const char* private_key_pkcs11_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs11_uris;
  auto private_key_pkcs11_uri_to_c = gi::unwrap (private_key_pkcs11_uri, gi::transfer_none);
  auto pkcs11_uri_to_c = gi::unwrap (pkcs11_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pkcs11_uri_to_c), (const char*) (private_key_pkcs11_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs11_uris (const gi::cstring_v pkcs11_uri, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const char* pkcs11_uri, const char* private_key_pkcs11_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs11_uris;
  auto private_key_pkcs11_uri_to_c = nullptr;
  auto pkcs11_uri_to_c = gi::unwrap (pkcs11_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pkcs11_uri_to_c), (const char*) (private_key_pkcs11_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs12 (const guint8* data /*none*/, gsize length, const gchar* password /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_certificate_new_from_pkcs12 (const guint8* data /*none*/, gsize length, const char* password /*none,nullable*/, GError ** error);
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs12 (const guint8 * data, gsize length, const gi::cstring_v password)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const guint8* data, gsize length, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs12;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (length), (const char*) (password_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs12 (const guint8 * data, gsize length)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const guint8* data, gsize length, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs12;
  auto password_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (length), (const char*) (password_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs12 (const guint8 * data, gsize length, const gi::cstring_v password, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const guint8* data, gsize length, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs12;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (length), (const char*) (password_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsCertificateBase::new_from_pkcs12 (const guint8 * data, gsize length, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (const guint8* data, gsize length, const char* password, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_certificate_new_from_pkcs12;
  auto password_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (length), (const char*) (password_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_tls_certificate_list_new_from_file (const gchar* file /*none*/, GError ** error);
// ::GList* /*full*/ g_tls_certificate_list_new_from_file (const char* file /*none*/, GError ** error);
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsCertificateBase::list_new_from_file (const gi::cstring_v file)
{
  typedef ::GList* (*call_wrap_t) (const char* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_list_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsCertificateBase::list_new_from_file (const gi::cstring_v file, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_list_new_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GPtrArray* /*container,nullable*/ g_tls_certificate_get_dns_names (GTlsCertificate* cert /*none*/);
//  /*container,nullable*/ g_tls_certificate_get_dns_names (::GTlsCertificate* cert /*none*/);
// SKIP;  type  not supported

// GPtrArray* /*container,nullable*/ g_tls_certificate_get_ip_addresses (GTlsCertificate* cert /*none*/);
//  /*container,nullable*/ g_tls_certificate_get_ip_addresses (::GTlsCertificate* cert /*none*/);
// SKIP;  type  not supported

// GTlsCertificate* /*none,nullable*/ g_tls_certificate_get_issuer (GTlsCertificate* cert /*none*/);
// ::GTlsCertificate* /*none,nullable*/ g_tls_certificate_get_issuer (::GTlsCertificate* cert /*none*/);
Gio::TlsCertificate base::TlsCertificateBase::get_issuer () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsCertificate* cert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_get_issuer;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full,nullable*/ g_tls_certificate_get_issuer_name (GTlsCertificate* cert /*none*/);
// char* /*full,nullable*/ g_tls_certificate_get_issuer_name (::GTlsCertificate* cert /*none*/);
gi::cstring base::TlsCertificateBase::get_issuer_name () noexcept
{
  typedef char* (*call_wrap_t) (::GTlsCertificate* cert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_get_issuer_name;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_after (GTlsCertificate* cert /*none*/);
// ::GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_after (::GTlsCertificate* cert /*none*/);
GLib::DateTime base::TlsCertificateBase::get_not_valid_after () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GTlsCertificate* cert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_get_not_valid_after;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_before (GTlsCertificate* cert /*none*/);
// ::GDateTime* /*full,nullable*/ g_tls_certificate_get_not_valid_before (::GTlsCertificate* cert /*none*/);
GLib::DateTime base::TlsCertificateBase::get_not_valid_before () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GTlsCertificate* cert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_get_not_valid_before;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_tls_certificate_get_subject_name (GTlsCertificate* cert /*none*/);
// char* /*full,nullable*/ g_tls_certificate_get_subject_name (::GTlsCertificate* cert /*none*/);
gi::cstring base::TlsCertificateBase::get_subject_name () noexcept
{
  typedef char* (*call_wrap_t) (::GTlsCertificate* cert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_get_subject_name;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_tls_certificate_is_same (GTlsCertificate* cert_one /*none*/, GTlsCertificate* cert_two /*none*/);
// gboolean g_tls_certificate_is_same (::GTlsCertificate* cert_one /*none*/, ::GTlsCertificate* cert_two /*none*/);
bool base::TlsCertificateBase::is_same (Gio::TlsCertificate cert_two) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsCertificate* cert_one, ::GTlsCertificate* cert_two);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_is_same;
  auto cert_two_to_c = gi::unwrap (cert_two, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()), (::GTlsCertificate*) (cert_two_to_c));
  return _temp_ret;
}

// GTlsCertificateFlags g_tls_certificate_verify (GTlsCertificate* cert /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsCertificate* trusted_ca /*none,nullable*/);
// ::GTlsCertificateFlags g_tls_certificate_verify (::GTlsCertificate* cert /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsCertificate* trusted_ca /*none,nullable*/);
Gio::TlsCertificateFlags base::TlsCertificateBase::verify (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsCertificate* cert, ::GSocketConnectable* identity, ::GTlsCertificate* trusted_ca);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_verify;
  auto trusted_ca_to_c = gi::unwrap (trusted_ca, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()), (::GSocketConnectable*) (identity_to_c), (::GTlsCertificate*) (trusted_ca_to_c));
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsCertificateBase::verify () noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsCertificate* cert, ::GSocketConnectable* identity, ::GTlsCertificate* trusted_ca);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_certificate_verify;
  auto trusted_ca_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()), (::GSocketConnectable*) (identity_to_c), (::GTlsCertificate*) (trusted_ca_to_c));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlscertificate_extra_def_impl.hpp>)
#include <gio/tlscertificate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlscertificate_extra_impl.hpp>)
#include <gio/tlscertificate_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsCertificateClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GTlsCertificateClass *methods = (::GTlsCertificateClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.verify) methods->verify = (decltype (methods->verify)) detail::method_wrapper<self, Gio::TlsCertificateFlags (*) (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::verify_>;
}

// GTlsCertificateFlags TlsCertificate::verify (GTlsCertificate* cert /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsCertificate* trusted_ca /*none,nullable*/);
// ::GTlsCertificateFlags TlsCertificate::verify (::GTlsCertificate* cert /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsCertificate* trusted_ca /*none,nullable*/);
Gio::TlsCertificateFlags TlsCertificateClass::verify_ (Gio::SocketConnectable identity, Gio::TlsCertificate trusted_ca) noexcept
{
  if (!get_struct_()->verify) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsCertificate* cert, ::GSocketConnectable* identity, ::GTlsCertificate* trusted_ca);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->verify;
  auto trusted_ca_to_c = gi::unwrap (trusted_ca, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (gobj_()), (::GSocketConnectable*) (identity_to_c), (::GTlsCertificate*) (trusted_ca_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
