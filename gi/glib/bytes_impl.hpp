// AUTO-GENERATED

#ifndef _GI_GLIB_BYTES_IMPL_HPP_
#define _GI_GLIB_BYTES_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GBytes* /*full*/ g_bytes_new (gconstpointer data /*none,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new (const guint8* data /*none,nullable*/, gsize size);
GLib::Bytes base::BytesBase::new_ (const guint8 * data, gsize size) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const guint8* data, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bytes_new;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (size));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_bytes_new_static (gconstpointer data /*full,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new_static (const guint8* data /*full,nullable*/, gsize size);
GLib::Bytes base::BytesBase::new_static (const guint8 * data, gsize size) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const guint8* data, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bytes_new_static;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (size));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_bytes_new_take (gpointer data /*full,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new_take (guint8* data /*full,nullable*/, gsize size);
GLib::Bytes base::BytesBase::new_take (const guint8 * data, gsize size) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (guint8* data, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bytes_new_take;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((guint8*) (data_to_c), (gsize) (size));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_bytes_new_with_free_func (gconstpointer data /*none,nullable*/, gsize size, GDestroyNotify free_func /*none*/, gpointer user_data);
// ::GBytes* /*full*/ g_bytes_new_with_free_func (const guint8* data /*none,nullable*/, gsize size, GLib::DestroyNotify::cfunction_type free_func /*none*/, void* user_data);
// IGNORE; not introspectable, callback misses closure info

// gint g_bytes_compare (gconstpointer bytes1 /*none*/, gconstpointer bytes2 /*none*/);
// gint g_bytes_compare (const ::GBytes* bytes1 /*none*/, const ::GBytes* bytes2 /*none*/);
gint base::BytesBase::compare (const GLib::Bytes_Ref bytes2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GBytes* bytes1, const ::GBytes* bytes2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_compare;
  auto bytes2_to_c = gi::unwrap (bytes2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GBytes*) (gobj_()), (const ::GBytes*) (bytes2_to_c));
  return _temp_ret;
}

// gboolean g_bytes_equal (gconstpointer bytes1 /*none*/, gconstpointer bytes2 /*none*/);
// gboolean g_bytes_equal (const ::GBytes* bytes1 /*none*/, const ::GBytes* bytes2 /*none*/);
bool base::BytesBase::equal (const GLib::Bytes_Ref bytes2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GBytes* bytes1, const ::GBytes* bytes2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_equal;
  auto bytes2_to_c = gi::unwrap (bytes2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GBytes*) (gobj_()), (const ::GBytes*) (bytes2_to_c));
  return _temp_ret;
}

// gconstpointer /*none,nullable*/ g_bytes_get_data (GBytes* bytes /*none*/, gsize* size);
// const guint8* /*none,nullable*/ g_bytes_get_data (::GBytes* bytes /*none*/, gsize* size);
gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> base::BytesBase::get_data () noexcept
{
  typedef const guint8* (*call_wrap_t) (::GBytes* bytes, gsize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_get_data;
  gsize size;
  auto _ret_o = call_wrap_v ((::GBytes*) (gobj_()), (gsize*) (&size));
  gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_none_t>>(_ret_o, size, gi::transfer_none);
  return _temp_ret;
}

// gconstpointer g_bytes_get_region (GBytes* bytes /*none*/, gsize element_size, gsize offset, gsize n_elements);
// const void* g_bytes_get_region (::GBytes* bytes /*none*/, gsize element_size, gsize offset, gsize n_elements);
gconstpointer base::BytesBase::get_region (gsize element_size, gsize offset, gsize n_elements) noexcept
{
  typedef const void* (*call_wrap_t) (::GBytes* bytes, gsize element_size, gsize offset, gsize n_elements);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_get_region;
  auto n_elements_to_c = n_elements;
  auto offset_to_c = offset;
  auto element_size_to_c = element_size;
  auto _temp_ret = call_wrap_v ((::GBytes*) (gobj_()), (gsize) (element_size_to_c), (gsize) (offset_to_c), (gsize) (n_elements_to_c));
  return _temp_ret;
}

// gsize g_bytes_get_size (GBytes* bytes /*none*/);
// gsize g_bytes_get_size (::GBytes* bytes /*none*/);
gsize base::BytesBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_get_size;
  auto _temp_ret = call_wrap_v ((::GBytes*) (gobj_()));
  return _temp_ret;
}

// guint g_bytes_hash (gconstpointer bytes /*none*/);
// guint g_bytes_hash (const ::GBytes* bytes /*none*/);
guint base::BytesBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_hash;
  auto _temp_ret = call_wrap_v ((const ::GBytes*) (gobj_()));
  return _temp_ret;
}

// GBytes* /*full*/ g_bytes_new_from_bytes (GBytes* bytes /*none*/, gsize offset, gsize length);
// ::GBytes* /*full*/ g_bytes_new_from_bytes (::GBytes* bytes /*none*/, gsize offset, gsize length);
GLib::Bytes base::BytesBase::new_from_bytes (gsize offset, gsize length) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GBytes* bytes, gsize offset, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_new_from_bytes;
  auto length_to_c = length;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GBytes*) (gobj_()), (gsize) (offset_to_c), (gsize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_bytes_ref (GBytes* bytes /*none*/);
// ::GBytes* /*full*/ g_bytes_ref (::GBytes* bytes /*none*/);
// IGNORE; marked ignore

// void g_bytes_unref (GBytes* bytes /*none,nullable*/);
// void g_bytes_unref (::GBytes* bytes /*none,nullable*/);
// IGNORE; marked ignore

// GByteArray* /*full*/ g_bytes_unref_to_array (GBytes* bytes /*full*/);
// ::GByteArray* /*full*/ g_bytes_unref_to_array (::GBytes* bytes /*full*/);
GLib::ByteArray base::BytesBase::unref_to_array () noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_unref_to_array;
  auto _temp_ret = call_wrap_v ((::GBytes*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer /*full*/ g_bytes_unref_to_data (GBytes* bytes /*full*/, gsize* size);
// guint8* /*full*/ g_bytes_unref_to_data (::GBytes* bytes /*full*/, gsize* size);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base::BytesBase::unref_to_data () noexcept
{
  typedef guint8* (*call_wrap_t) (::GBytes* bytes, gsize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bytes_unref_to_data;
  gsize size;
  auto _ret_o = call_wrap_v ((::GBytes*) (gobj_()), (gsize*) (&size));
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, size, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytes_extra_def_impl.hpp>)
#include <glib/bytes_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytes_extra_impl.hpp>)
#include <glib/bytes_extra_impl.hpp>
#endif
#endif

#endif
