// AUTO-GENERATED

#ifndef _GI_GIO_TLSDATABASE_IMPL_HPP_
#define _GI_GIO_TLSDATABASE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gchar* /*full,nullable*/ g_tls_database_create_certificate_handle (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/);
// char* /*full,nullable*/ g_tls_database_create_certificate_handle (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/);
gi::cstring base::TlsDatabaseBase::create_certificate_handle (Gio::TlsCertificate certificate) noexcept
{
  typedef char* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_create_certificate_handle;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full,nullable*/ g_tls_database_lookup_certificate_for_handle (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full,nullable*/ g_tls_database_lookup_certificate_for_handle (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_tls_database_lookup_certificate_for_handle_async (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificate_for_handle_async (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsDatabaseBase::lookup_certificate_for_handle_async (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificate_for_handle_async (const gi::cstring_v handle, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_for_handle_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_for_handle_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_for_handle_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_tls_database_lookup_certificate_issuer_async (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificate_issuer_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsDatabaseBase::lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ g_tls_database_lookup_certificate_issuer_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificate_issuer_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_tls_database_lookup_certificates_issued_by (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_tls_database_lookup_certificates_issued_by (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_tls_database_lookup_certificates_issued_by_async (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_lookup_certificates_issued_by_async (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsDatabaseBase::lookup_certificates_issued_by_async (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificates_issued_by_async (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_tls_database_lookup_certificates_issued_by_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_tls_database_lookup_certificates_issued_by_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> base::TlsDatabaseBase::lookup_certificates_issued_by_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_lookup_certificates_issued_by_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GTlsCertificateFlags g_tls_database_verify_chain (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void g_tls_database_verify_chain_async (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_database_verify_chain_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::TlsDatabaseBase::verify_chain_async (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::verify_chain_async (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::TlsDatabaseVerifyFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificateFlags g_tls_database_verify_chain_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_database_verify_chain_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_def_impl.hpp>)
#include <gio/tlsdatabase_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_impl.hpp>)
#include <gio/tlsdatabase_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsDatabaseClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GTlsDatabaseClass *methods = (::GTlsDatabaseClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.create_certificate_handle) methods->create_certificate_handle = (decltype (methods->create_certificate_handle)) detail::method_wrapper<self, gi::cstring (*) (Gio::TlsCertificate certificate), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::create_certificate_handle_>;
  if (init_data.lookup_certificate_for_handle) methods->lookup_certificate_for_handle = (decltype (methods->lookup_certificate_for_handle)) detail::method_wrapper<self, Gio::TlsCertificate (*) (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificate_for_handle_>;
  if (init_data.lookup_certificate_for_handle_async) methods->lookup_certificate_for_handle_async = (decltype (methods->lookup_certificate_for_handle_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_certificate_for_handle_async_>;
  if (init_data.lookup_certificate_for_handle_finish) methods->lookup_certificate_for_handle_finish = (decltype (methods->lookup_certificate_for_handle_finish)) detail::method_wrapper<self, Gio::TlsCertificate (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificate_for_handle_finish_>;
  if (init_data.lookup_certificate_issuer) methods->lookup_certificate_issuer = (decltype (methods->lookup_certificate_issuer)) detail::method_wrapper<self, Gio::TlsCertificate (*) (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificate_issuer_>;
  if (init_data.lookup_certificate_issuer_async) methods->lookup_certificate_issuer_async = (decltype (methods->lookup_certificate_issuer_async)) detail::method_wrapper<self, void (*) (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_certificate_issuer_async_>;
  if (init_data.lookup_certificate_issuer_finish) methods->lookup_certificate_issuer_finish = (decltype (methods->lookup_certificate_issuer_finish)) detail::method_wrapper<self, Gio::TlsCertificate (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificate_issuer_finish_>;
  if (init_data.lookup_certificates_issued_by) methods->lookup_certificates_issued_by = (decltype (methods->lookup_certificates_issued_by)) detail::method_wrapper<self, gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> (*) (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificates_issued_by_>;
  if (init_data.lookup_certificates_issued_by_async) methods->lookup_certificates_issued_by_async = (decltype (methods->lookup_certificates_issued_by_async)) detail::method_wrapper<self, void (*) (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::lookup_certificates_issued_by_async_>;
  if (init_data.lookup_certificates_issued_by_finish) methods->lookup_certificates_issued_by_finish = (decltype (methods->lookup_certificates_issued_by_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::lookup_certificates_issued_by_finish_>;
  if (init_data.verify_chain) methods->verify_chain = (decltype (methods->verify_chain)) detail::method_wrapper<self, Gio::TlsCertificateFlags (*) (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::verify_chain_>;
  if (init_data.verify_chain_async) methods->verify_chain_async = (decltype (methods->verify_chain_async)) detail::method_wrapper<self, void (*) (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<4>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<5>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<6, 7>>>, void  (::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::verify_chain_async_>;
  if (init_data.verify_chain_finish) methods->verify_chain_finish = (decltype (methods->verify_chain_finish)) detail::method_wrapper<self, Gio::TlsCertificateFlags (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::verify_chain_finish_>;
}

// gchar* /*full,nullable*/ TlsDatabase::create_certificate_handle (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/);
// char* /*full,nullable*/ TlsDatabase::create_certificate_handle (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/);
gi::cstring TlsDatabaseClass::create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept
{
  if (!get_struct_()->create_certificate_handle) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_certificate_handle;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full,nullable*/ TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificate TlsDatabaseClass::lookup_certificate_for_handle_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificate_for_handle) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_for_handle;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self /*none*/, const gchar* handle /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self /*none*/, const char* handle /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsDatabaseClass::lookup_certificate_for_handle_async_ (const gi::cstring_v handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_certificate_for_handle_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_for_handle_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificate TlsDatabaseClass::lookup_certificate_for_handle_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificate_for_handle_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_for_handle_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificate TlsDatabaseClass::lookup_certificate_issuer_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificate_issuer) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_issuer;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self /*none*/, GTlsCertificate* certificate /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* certificate /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsDatabaseClass::lookup_certificate_issuer_async_ (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_certificate_issuer_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_issuer_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificate* /*full*/ TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificate TlsDatabaseClass::lookup_certificate_issuer_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificate_issuer_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificate_issuer_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> TlsDatabaseClass::lookup_certificates_issued_by_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificates_issued_by) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificates_issued_by;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self /*none*/, GByteArray* issuer_raw_dn /*none*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self /*none*/, ::GByteArray* issuer_raw_dn /*none*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsDatabaseClass::lookup_certificates_issued_by_async_ (GLib::ByteArray_Ref issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->lookup_certificates_issued_by_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificates_issued_by_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t> TlsDatabaseClass::lookup_certificates_issued_by_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->lookup_certificates_issued_by_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_certificates_issued_by_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GTlsCertificate*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::TlsCertificateFlags TlsDatabaseClass::verify_chain_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->verify_chain) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->verify_chain;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void TlsDatabase::verify_chain_async (GTlsDatabase* self /*none*/, GTlsCertificate* chain /*none*/, const gchar* purpose /*none*/, GSocketConnectable* identity /*none,nullable*/, GTlsInteraction* interaction /*none,nullable*/, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self /*none*/, ::GTlsCertificate* chain /*none*/, const char* purpose /*none*/, ::GSocketConnectable* identity /*none,nullable*/, ::GTlsInteraction* interaction /*none,nullable*/, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void TlsDatabaseClass::verify_chain_async_ (Gio::TlsCertificate chain, const gi::cstring_v purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->verify_chain_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->verify_chain_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::TlsCertificateFlags TlsDatabaseClass::verify_chain_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->verify_chain_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->verify_chain_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
