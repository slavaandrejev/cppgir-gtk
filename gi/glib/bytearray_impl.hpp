// AUTO-GENERATED

#ifndef _GI_GLIB_BYTEARRAY_IMPL_HPP_
#define _GI_GLIB_BYTEARRAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static guint _field_len_get (const ::GByteArray* obj) { return (guint) obj->len; }
// guint ByteArray::len (const ::GByteArray* obj /*none*/);
// guint ByteArray::len (const ::GByteArray* obj /*none*/);
guint base::ByteArrayBase::len_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GByteArray* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_get;
  auto _temp_ret = call_wrap_v ((const ::GByteArray*) (gobj_()));
  return _temp_ret;
}

static void _field_len_set (::GByteArray* obj, guint _value) { obj->len = (decltype(obj->len)) _value; }
//  ByteArray::len (::GByteArray* obj /*none*/, guint _value);
// void ByteArray::len (::GByteArray* obj /*none*/, guint _value);
void base::ByteArrayBase::len_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GByteArray* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GByteArray*) (gobj_()), (guint) (_value_to_c));
}

// GByteArray* /*none*/ g_byte_array_append (GByteArray* array /*none*/, const guint8* data, guint len);
// ::GByteArray* /*none*/ g_byte_array_append (::GByteArray* array /*none*/, const guint8 data, guint len);
// SKIP; inconsistent data in pointer depth (1 vs 0)

// guint8* g_byte_array_free (GByteArray* array /*none*/, gboolean free_segment);
// guint8 g_byte_array_free (::GByteArray* array /*none*/, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* /*full*/ g_byte_array_free_to_bytes (GByteArray* array /*full*/);
// ::GBytes* /*full*/ g_byte_array_free_to_bytes (::GByteArray* array /*full*/);
GLib::Bytes base::ByteArrayBase::free_to_bytes (GLib::ByteArray array) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GByteArray* array);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_free_to_bytes;
  auto array_to_c = gi::unwrap (std::move(array), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GByteArray* /*full*/ g_byte_array_new ();
// ::GByteArray* /*full*/ g_byte_array_new ();
GLib::ByteArray base::ByteArrayBase::new_ () noexcept
{
  typedef ::GByteArray* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GByteArray* /*full*/ g_byte_array_new_take (guint8* data /*full*/, gsize len);
// ::GByteArray* /*full*/ g_byte_array_new_take (guint8* data /*full*/, gsize len);
GLib::ByteArray base::ByteArrayBase::new_take (const guint8 * data, gsize len) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (guint8* data, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_new_take;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((guint8*) (data_to_c), (gsize) (len));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GByteArray* /*none*/ g_byte_array_prepend (GByteArray* array /*none*/, const guint8* data, guint len);
// ::GByteArray* /*none*/ g_byte_array_prepend (::GByteArray* array /*none*/, const guint8 data, guint len);
// SKIP; inconsistent data in pointer depth (1 vs 0)

// GByteArray* /*full*/ g_byte_array_ref (GByteArray* array /*none*/);
// ::GByteArray* /*full*/ g_byte_array_ref (::GByteArray* array /*none*/);
// IGNORE; marked ignore

// GByteArray* /*none*/ g_byte_array_remove_index (GByteArray* array /*none*/, guint index_);
// ::GByteArray* /*none*/ g_byte_array_remove_index (::GByteArray* array /*none*/, guint index_);
GLib::ByteArray_Ref base::ByteArrayBase::remove_index (GLib::ByteArray_Ref array, guint index_) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (::GByteArray* array, guint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_remove_index;
  auto index__to_c = index_;
  auto array_to_c = gi::unwrap (array, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c), (guint) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GByteArray* /*none*/ g_byte_array_remove_index_fast (GByteArray* array /*none*/, guint index_);
// ::GByteArray* /*none*/ g_byte_array_remove_index_fast (::GByteArray* array /*none*/, guint index_);
GLib::ByteArray_Ref base::ByteArrayBase::remove_index_fast (GLib::ByteArray_Ref array, guint index_) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (::GByteArray* array, guint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_remove_index_fast;
  auto index__to_c = index_;
  auto array_to_c = gi::unwrap (array, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c), (guint) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GByteArray* /*none*/ g_byte_array_remove_range (GByteArray* array /*none*/, guint index_, guint length);
// ::GByteArray* /*none*/ g_byte_array_remove_range (::GByteArray* array /*none*/, guint index_, guint length);
GLib::ByteArray_Ref base::ByteArrayBase::remove_range (GLib::ByteArray_Ref array, guint index_, guint length) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (::GByteArray* array, guint index_, guint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_remove_range;
  auto length_to_c = length;
  auto index__to_c = index_;
  auto array_to_c = gi::unwrap (array, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c), (guint) (index__to_c), (guint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GByteArray* /*none*/ g_byte_array_set_size (GByteArray* array /*none*/, guint length);
// ::GByteArray* /*none*/ g_byte_array_set_size (::GByteArray* array /*none*/, guint length);
GLib::ByteArray_Ref base::ByteArrayBase::set_size (GLib::ByteArray_Ref array, guint length) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (::GByteArray* array, guint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_set_size;
  auto length_to_c = length;
  auto array_to_c = gi::unwrap (array, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c), (guint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GByteArray* /*full*/ g_byte_array_sized_new (guint reserved_size);
// ::GByteArray* /*full*/ g_byte_array_sized_new (guint reserved_size);
GLib::ByteArray base::ByteArrayBase::sized_new (guint reserved_size) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (guint reserved_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_sized_new;
  auto reserved_size_to_c = reserved_size;
  auto _temp_ret = call_wrap_v ((guint) (reserved_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_byte_array_sort (GByteArray* array /*none*/, GCompareFunc compare_func /*none*/);
// void g_byte_array_sort (::GByteArray* array /*none*/,  compare_func /*none*/);
// SKIP; compare_func type  not supported

// void g_byte_array_sort_with_data (GByteArray* array /*none*/, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// void g_byte_array_sort_with_data (::GByteArray* array /*none*/, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
void base::ByteArrayBase::sort_with_data (GLib::ByteArray_Ref array, GLib::CompareDataFunc compare_func) noexcept
{
  typedef void (*call_wrap_t) (::GByteArray* array, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_byte_array_sort_with_data;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  auto array_to_c = gi::unwrap (array, gi::transfer_none);
  call_wrap_v ((::GByteArray*) (array_to_c), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
}

// guint8* g_byte_array_steal (GByteArray* array /*none*/, gsize* len);
// guint8 g_byte_array_steal (::GByteArray* array /*none*/, gsize* len);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// void g_byte_array_unref (GByteArray* array /*none*/);
// void g_byte_array_unref (::GByteArray* array /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_def_impl.hpp>)
#include <glib/bytearray_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_impl.hpp>)
#include <glib/bytearray_extra_impl.hpp>
#endif
#endif

#endif
