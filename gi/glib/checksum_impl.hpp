// AUTO-GENERATED

#ifndef _GI_GLIB_CHECKSUM_IMPL_HPP_
#define _GI_GLIB_CHECKSUM_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GChecksum* /*full,nullable*/ g_checksum_new (GChecksumType checksum_type);
// ::GChecksum* /*full,nullable*/ g_checksum_new (::GChecksumType checksum_type);
GLib::Checksum base::ChecksumBase::new_ (GLib::ChecksumType checksum_type) noexcept
{
  typedef ::GChecksum* (*call_wrap_t) (::GChecksumType checksum_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_checksum_new;
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GChecksum* /*full*/ g_checksum_copy (const GChecksum* checksum /*none*/);
// ::GChecksum* /*full*/ g_checksum_copy (const ::GChecksum* checksum /*none*/);
GLib::Checksum base::ChecksumBase::copy () const noexcept
{
  typedef ::GChecksum* (*call_wrap_t) (const ::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_copy;
  auto _temp_ret = call_wrap_v ((const ::GChecksum*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_checksum_free (GChecksum* checksum /*none*/);
// void g_checksum_free (::GChecksum* checksum /*none*/);
// IGNORE; marked ignore

// void g_checksum_get_digest (GChecksum* checksum /*none*/, guint8* buffer /*none*/, gsize* digest_len);
// void g_checksum_get_digest (::GChecksum* checksum /*none*/, guint8* buffer /*none*/, gsize* digest_len);
void base::ChecksumBase::get_digest (const guint8 * buffer, gsize digest_len) noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum, guint8* buffer, gsize* digest_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_get_digest;
  auto buffer_to_c = buffer;
  call_wrap_v ((::GChecksum*) (gobj_()), (guint8*) (buffer_to_c), (gsize*) (digest_len));
}

// const gchar* /*none*/ g_checksum_get_string (GChecksum* checksum /*none*/);
// const char* /*none*/ g_checksum_get_string (::GChecksum* checksum /*none*/);
gi::cstring_v base::ChecksumBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_get_string;
  auto _temp_ret = call_wrap_v ((::GChecksum*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_checksum_reset (GChecksum* checksum /*none*/);
// void g_checksum_reset (::GChecksum* checksum /*none*/);
void base::ChecksumBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_reset;
  call_wrap_v ((::GChecksum*) (gobj_()));
}

// void g_checksum_update (GChecksum* checksum /*none*/, const guchar* data /*none*/, gssize length);
// void g_checksum_update (::GChecksum* checksum /*none*/, const guint8* data /*none*/, gssize length);
void base::ChecksumBase::update (const guint8 * data, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GChecksum* checksum, const guint8* data, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_update;
  auto data_to_c = data;
  call_wrap_v ((::GChecksum*) (gobj_()), (const guint8*) (data_to_c), (gssize) (length));
}

// gssize g_checksum_type_get_length (GChecksumType checksum_type);
// gssize g_checksum_type_get_length (::GChecksumType checksum_type);
gssize base::ChecksumBase::type_get_length (GLib::ChecksumType checksum_type) noexcept
{
  typedef gssize (*call_wrap_t) (::GChecksumType checksum_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_checksum_type_get_length;
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_def_impl.hpp>)
#include <glib/checksum_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_impl.hpp>)
#include <glib/checksum_extra_impl.hpp>
#endif
#endif

#endif
