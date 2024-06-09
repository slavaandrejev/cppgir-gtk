// AUTO-GENERATED

#ifndef _GI_GLIB_BYTEARRAY_HPP_
#define _GI_GLIB_BYTEARRAY_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ByteArray_Ref;
class Bytes;
class Bytes_Ref;

class ByteArray;

namespace base {


#define GI_GLIB_BYTEARRAY_BASE base::ByteArrayBase
class ByteArrayBase : public gi::detail::GBoxedWrapperBase<ByteArrayBase, ::GByteArray>
{
typedef gi::detail::GBoxedWrapperBase<ByteArrayBase, ::GByteArray> super_type;
public:

ByteArrayBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_byte_array_get_type(); } 

// guint ByteArray::len (const ::GByteArray* obj /*none*/);
// guint ByteArray::len (const ::GByteArray* obj /*none*/);
GI_INLINE_DECL guint len_ () const noexcept;

//  ByteArray::len (::GByteArray* obj /*none*/, guint _value);
// void ByteArray::len (::GByteArray* obj /*none*/, guint _value);
GI_INLINE_DECL void len_ (guint _value) noexcept;

// GByteArray* /*none*/ g_byte_array_append (GByteArray* array /*none*/, const guint8* data, guint len);
// ::GByteArray* /*none*/ g_byte_array_append (::GByteArray* array /*none*/, const guint8 data, guint len);
// SKIP; inconsistent data in pointer depth (1 vs 0)

// guint8* g_byte_array_free (GByteArray* array /*none*/, gboolean free_segment);
// guint8 g_byte_array_free (::GByteArray* array /*none*/, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* /*full*/ g_byte_array_free_to_bytes (GByteArray* array /*full*/);
// ::GBytes* /*full*/ g_byte_array_free_to_bytes (::GByteArray* array /*full*/);
static GI_INLINE_DECL GLib::Bytes free_to_bytes (GLib::ByteArray array) noexcept;

// GByteArray* /*full*/ g_byte_array_new ();
// ::GByteArray* /*full*/ g_byte_array_new ();
static GI_INLINE_DECL GLib::ByteArray new_ () noexcept;

// GByteArray* /*full*/ g_byte_array_new_take (guint8* data /*full*/, gsize len);
// ::GByteArray* /*full*/ g_byte_array_new_take (guint8* data /*full*/, gsize len);
static GI_INLINE_DECL GLib::ByteArray new_take (const guint8 * data, gsize len) noexcept;

// GByteArray* /*none*/ g_byte_array_prepend (GByteArray* array /*none*/, const guint8* data, guint len);
// ::GByteArray* /*none*/ g_byte_array_prepend (::GByteArray* array /*none*/, const guint8 data, guint len);
// SKIP; inconsistent data in pointer depth (1 vs 0)

// GByteArray* /*full*/ g_byte_array_ref (GByteArray* array /*none*/);
// ::GByteArray* /*full*/ g_byte_array_ref (::GByteArray* array /*none*/);
// IGNORE; marked ignore

// GByteArray* /*none*/ g_byte_array_remove_index (GByteArray* array /*none*/, guint index_);
// ::GByteArray* /*none*/ g_byte_array_remove_index (::GByteArray* array /*none*/, guint index_);
static GI_INLINE_DECL GLib::ByteArray_Ref remove_index (GLib::ByteArray_Ref array, guint index_) noexcept;

// GByteArray* /*none*/ g_byte_array_remove_index_fast (GByteArray* array /*none*/, guint index_);
// ::GByteArray* /*none*/ g_byte_array_remove_index_fast (::GByteArray* array /*none*/, guint index_);
static GI_INLINE_DECL GLib::ByteArray_Ref remove_index_fast (GLib::ByteArray_Ref array, guint index_) noexcept;

// GByteArray* /*none*/ g_byte_array_remove_range (GByteArray* array /*none*/, guint index_, guint length);
// ::GByteArray* /*none*/ g_byte_array_remove_range (::GByteArray* array /*none*/, guint index_, guint length);
static GI_INLINE_DECL GLib::ByteArray_Ref remove_range (GLib::ByteArray_Ref array, guint index_, guint length) noexcept;

// GByteArray* /*none*/ g_byte_array_set_size (GByteArray* array /*none*/, guint length);
// ::GByteArray* /*none*/ g_byte_array_set_size (::GByteArray* array /*none*/, guint length);
static GI_INLINE_DECL GLib::ByteArray_Ref set_size (GLib::ByteArray_Ref array, guint length) noexcept;

// GByteArray* /*full*/ g_byte_array_sized_new (guint reserved_size);
// ::GByteArray* /*full*/ g_byte_array_sized_new (guint reserved_size);
static GI_INLINE_DECL GLib::ByteArray sized_new (guint reserved_size) noexcept;

// void g_byte_array_sort (GByteArray* array /*none*/, GCompareFunc compare_func /*none*/);
// void g_byte_array_sort (::GByteArray* array /*none*/,  compare_func /*none*/);
// SKIP; compare_func type  not supported

// void g_byte_array_sort_with_data (GByteArray* array /*none*/, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// void g_byte_array_sort_with_data (::GByteArray* array /*none*/, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
static GI_INLINE_DECL void sort_with_data (GLib::ByteArray_Ref array, GLib::CompareDataFunc compare_func) noexcept;

// guint8* g_byte_array_steal (GByteArray* array /*none*/, gsize* len);
// guint8 g_byte_array_steal (::GByteArray* array /*none*/, gsize* len);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// void g_byte_array_unref (GByteArray* array /*none*/);
// void g_byte_array_unref (::GByteArray* array /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_def.hpp>)
#include <glib/bytearray_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra.hpp>)
#include <glib/bytearray_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class ByteArray_Ref;

class ByteArray : public gi::detail::GBoxedWrapper<ByteArray, ::GByteArray, GI_GLIB_BYTEARRAY_BASE, ByteArray_Ref>
{ typedef gi::detail::GBoxedWrapper<ByteArray, ::GByteArray, GI_GLIB_BYTEARRAY_BASE, ByteArray_Ref> super_type; using super_type::super_type; };


class ByteArray_Ref : public gi::detail::GBoxedRefWrapper<ByteArray, ::GByteArray, GI_GLIB_BYTEARRAY_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ByteArray, ::GByteArray, GI_GLIB_BYTEARRAY_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GByteArray>
{ typedef GLib::ByteArray type; }; 

} // namespace repository

} // namespace gi

#endif
