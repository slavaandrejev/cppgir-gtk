// AUTO-GENERATED

#ifndef _GI_GLIB_HMAC_IMPL_HPP_
#define _GI_GLIB_HMAC_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GHmac* /*full,nullable*/ g_hmac_new (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len);
// ::GHmac* /*full,nullable*/ g_hmac_new (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len);
GLib::Hmac base::HmacBase::new_ (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len) noexcept
{
  typedef ::GHmac* (*call_wrap_t) (::GChecksumType digest_type, const guint8* key, gsize key_len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hmac_new;
  auto key_to_c = key;
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (const guint8*) (key_to_c), (gsize) (key_len));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GHmac* /*full*/ g_hmac_copy (const GHmac* hmac /*none*/);
// ::GHmac* /*full*/ g_hmac_copy (const ::GHmac* hmac /*none*/);
GLib::Hmac base::HmacBase::copy () const noexcept
{
  typedef ::GHmac* (*call_wrap_t) (const ::GHmac* hmac);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hmac_copy;
  auto _temp_ret = call_wrap_v ((const ::GHmac*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_hmac_get_digest (GHmac* hmac /*none*/, guint8* buffer /*none*/, gsize* digest_len);
// void g_hmac_get_digest (::GHmac* hmac /*none*/, guint8* buffer /*none*/, gsize* digest_len);
void base::HmacBase::get_digest (const guint8 * buffer, gsize digest_len) noexcept
{
  typedef void (*call_wrap_t) (::GHmac* hmac, guint8* buffer, gsize* digest_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hmac_get_digest;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GHmac*) (gobj_()), (guint8*) (buffer_to_c), (gsize*) (digest_len));
}

// const gchar* /*none*/ g_hmac_get_string (GHmac* hmac /*none*/);
// const char* /*none*/ g_hmac_get_string (::GHmac* hmac /*none*/);
gi::cstring_v base::HmacBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GHmac* hmac);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hmac_get_string;
  auto _temp_ret = call_wrap_v ((::GHmac*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GHmac* /*full*/ g_hmac_ref (GHmac* hmac /*none*/);
// ::GHmac* /*full*/ g_hmac_ref (::GHmac* hmac /*none*/);
// IGNORE; marked ignore

// void g_hmac_unref (GHmac* hmac /*full*/);
// void g_hmac_unref (::GHmac* hmac /*full*/);
// IGNORE; marked ignore

// void g_hmac_update (GHmac* hmac /*none*/, const guchar* data /*none*/, gssize length);
// void g_hmac_update (::GHmac* hmac /*none*/, const guint8* data /*none*/, gssize length);
void base::HmacBase::update (const guint8 * data, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GHmac* hmac, const guint8* data, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hmac_update;
  auto data_to_c = data;
  call_wrap_v ((::GHmac*) (gobj_()), (const guint8*) (data_to_c), (gssize) (length));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hmac_extra_def_impl.hpp>)
#include <glib/hmac_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hmac_extra_impl.hpp>)
#include <glib/hmac_extra_impl.hpp>
#endif
#endif

#endif
