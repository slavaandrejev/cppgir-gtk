// AUTO-GENERATED

#ifndef _GI_GLIB_BYTES_HPP_
#define _GI_GLIB_BYTES_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ByteArray;
class ByteArray_Ref;
class Bytes_Ref;

class Bytes;

namespace base {


#define GI_GLIB_BYTES_BASE base::BytesBase
class BytesBase : public gi::detail::GBoxedWrapperBase<BytesBase, ::GBytes>
{
typedef gi::detail::GBoxedWrapperBase<BytesBase, ::GBytes> super_type;
public:

BytesBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_bytes_get_type(); } 

// GBytes* /*full*/ g_bytes_new (gconstpointer data /*none,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new (const guint8* data /*none,nullable*/, gsize size);
static GI_INLINE_DECL GLib::Bytes new_ (const guint8 * data, gsize size) noexcept;

// GBytes* /*full*/ g_bytes_new_static (gconstpointer data /*full,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new_static (const guint8* data /*full,nullable*/, gsize size);
static GI_INLINE_DECL GLib::Bytes new_static (const guint8 * data, gsize size) noexcept;

// GBytes* /*full*/ g_bytes_new_take (gpointer data /*full,nullable*/, gsize size);
// ::GBytes* /*full*/ g_bytes_new_take (guint8* data /*full,nullable*/, gsize size);
static GI_INLINE_DECL GLib::Bytes new_take (const guint8 * data, gsize size) noexcept;

// GBytes* /*full*/ g_bytes_new_with_free_func (gconstpointer data /*none,nullable*/, gsize size, GDestroyNotify free_func /*none*/, gpointer user_data);
// ::GBytes* /*full*/ g_bytes_new_with_free_func (const guint8* data /*none,nullable*/, gsize size, GLib::DestroyNotify::cfunction_type free_func /*none*/, void* user_data);
// IGNORE; not introspectable, callback misses closure info

// gint g_bytes_compare (gconstpointer bytes1 /*none*/, gconstpointer bytes2 /*none*/);
// gint g_bytes_compare (const ::GBytes* bytes1 /*none*/, const ::GBytes* bytes2 /*none*/);
GI_INLINE_DECL gint compare (const GLib::Bytes_Ref bytes2) const noexcept;

// gboolean g_bytes_equal (gconstpointer bytes1 /*none*/, gconstpointer bytes2 /*none*/);
// gboolean g_bytes_equal (const ::GBytes* bytes1 /*none*/, const ::GBytes* bytes2 /*none*/);
GI_INLINE_DECL bool equal (const GLib::Bytes_Ref bytes2) const noexcept;

// gconstpointer /*none,nullable*/ g_bytes_get_data (GBytes* bytes /*none*/, gsize* size);
// const guint8* /*none,nullable*/ g_bytes_get_data (::GBytes* bytes /*none*/, gsize* size);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> get_data () noexcept;

// gconstpointer g_bytes_get_region (GBytes* bytes /*none*/, gsize element_size, gsize offset, gsize n_elements);
// const void* g_bytes_get_region (::GBytes* bytes /*none*/, gsize element_size, gsize offset, gsize n_elements);
GI_INLINE_DECL gconstpointer get_region (gsize element_size, gsize offset, gsize n_elements) noexcept;

// gsize g_bytes_get_size (GBytes* bytes /*none*/);
// gsize g_bytes_get_size (::GBytes* bytes /*none*/);
GI_INLINE_DECL gsize get_size () noexcept;

// guint g_bytes_hash (gconstpointer bytes /*none*/);
// guint g_bytes_hash (const ::GBytes* bytes /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// GBytes* /*full*/ g_bytes_new_from_bytes (GBytes* bytes /*none*/, gsize offset, gsize length);
// ::GBytes* /*full*/ g_bytes_new_from_bytes (::GBytes* bytes /*none*/, gsize offset, gsize length);
GI_INLINE_DECL GLib::Bytes new_from_bytes (gsize offset, gsize length) noexcept;

// GBytes* /*full*/ g_bytes_ref (GBytes* bytes /*none*/);
// ::GBytes* /*full*/ g_bytes_ref (::GBytes* bytes /*none*/);
// IGNORE; marked ignore

// void g_bytes_unref (GBytes* bytes /*none,nullable*/);
// void g_bytes_unref (::GBytes* bytes /*none,nullable*/);
// IGNORE; marked ignore

// GByteArray* /*full*/ g_bytes_unref_to_array (GBytes* bytes /*full*/);
// ::GByteArray* /*full*/ g_bytes_unref_to_array (::GBytes* bytes /*full*/);
GI_INLINE_DECL GLib::ByteArray unref_to_array () noexcept;

// gpointer /*full*/ g_bytes_unref_to_data (GBytes* bytes /*full*/, gsize* size);
// guint8* /*full*/ g_bytes_unref_to_data (::GBytes* bytes /*full*/, gsize* size);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> unref_to_data () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytes_extra_def.hpp>)
#include <glib/bytes_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytes_extra.hpp>)
#include <glib/bytes_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Bytes_Ref;

class Bytes : public gi::detail::GBoxedWrapper<Bytes, ::GBytes, GI_GLIB_BYTES_BASE, Bytes_Ref>
{ typedef gi::detail::GBoxedWrapper<Bytes, ::GBytes, GI_GLIB_BYTES_BASE, Bytes_Ref> super_type; using super_type::super_type; };


class Bytes_Ref : public gi::detail::GBoxedRefWrapper<Bytes, ::GBytes, GI_GLIB_BYTES_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Bytes, ::GBytes, GI_GLIB_BYTES_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GBytes>
{ typedef GLib::Bytes type; }; 

} // namespace repository

} // namespace gi

#endif
