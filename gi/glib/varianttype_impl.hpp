// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTTYPE_IMPL_HPP_
#define _GI_GLIB_VARIANTTYPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantType* /*full*/ g_variant_type_new (const gchar* type_string /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new (const char* type_string /*none*/);
GLib::VariantType base::VariantTypeBase::new_ (const gi::cstring_v type_string) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantType* /*full*/ g_variant_type_new_array (const GVariantType* element /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_array (const ::GVariantType* element /*none*/);
GLib::VariantType base::VariantTypeBase::new_array (const GLib::VariantType_Ref element) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* element);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_array;
  auto element_to_c = gi::unwrap (element, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantType* /*full*/ g_variant_type_new_dict_entry (const GVariantType* key /*none*/, const GVariantType* value /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_dict_entry (const ::GVariantType* key /*none*/, const ::GVariantType* value /*none*/);
GLib::VariantType base::VariantTypeBase::new_dict_entry (const GLib::VariantType_Ref key, const GLib::VariantType_Ref value) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* key, const ::GVariantType* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_dict_entry;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (key_to_c), (const ::GVariantType*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantType* /*full*/ g_variant_type_new_maybe (const GVariantType* element /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_maybe (const ::GVariantType* element /*none*/);
GLib::VariantType base::VariantTypeBase::new_maybe (const GLib::VariantType_Ref element) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* element);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_maybe;
  auto element_to_c = gi::unwrap (element, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantType* /*full*/ g_variant_type_new_tuple (const GVariantType* const* items /*none*/, gint length);
// ::GVariantType* /*full*/ g_variant_type_new_tuple (const ::GVariantType** items /*none*/, gint length);
GLib::VariantType base::VariantTypeBase::new_tuple (gi::CollectionParameter<gi::DSpan, ::GVariantType*, gi::transfer_none_t> items) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType** items, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_tuple;
  auto items_w = unwrap (std::move(items), gi::transfer_none);
  auto items_to_c = items_w;
  auto _temp_ret = call_wrap_v ((const ::GVariantType**) (items_to_c), (gint) (items._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantType* /*full*/ g_variant_type_copy (const GVariantType* type /*none*/);
// ::GVariantType* /*full*/ g_variant_type_copy (const ::GVariantType* type /*none*/);
GLib::VariantType base::VariantTypeBase::copy () const noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_copy;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_variant_type_dup_string (const GVariantType* type /*none*/);
// char* /*full*/ g_variant_type_dup_string (const ::GVariantType* type /*none*/);
gi::cstring base::VariantTypeBase::dup_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_dup_string;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GVariantType* /*none*/ g_variant_type_element (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_element (const ::GVariantType* type /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::element () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_element;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_variant_type_equal (gconstpointer type1 /*none*/, gconstpointer type2 /*none*/);
// gboolean g_variant_type_equal (const ::GVariantType* type1 /*none*/, const ::GVariantType* type2 /*none*/);
bool base::VariantTypeBase::equal (const GLib::VariantType_Ref type2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type1, const ::GVariantType* type2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_equal;
  auto type2_to_c = gi::unwrap (type2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()), (const ::GVariantType*) (type2_to_c));
  return _temp_ret;
}

// const GVariantType* /*none*/ g_variant_type_first (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_first (const ::GVariantType* type /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::first () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_first;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_variant_type_free (GVariantType* type /*none,nullable*/);
// void g_variant_type_free (::GVariantType* type /*none,nullable*/);
// IGNORE; marked ignore

// gsize g_variant_type_get_string_length (const GVariantType* type /*none*/);
// gsize g_variant_type_get_string_length (const ::GVariantType* type /*none*/);
gsize base::VariantTypeBase::get_string_length () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_get_string_length;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// guint g_variant_type_hash (gconstpointer type /*none*/);
// guint g_variant_type_hash (const ::GVariantType* type /*none*/);
guint base::VariantTypeBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_hash;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_array (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_array (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_array () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_array;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_basic (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_basic (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_basic () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_basic;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_container (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_container (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_container () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_container;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_definite (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_definite (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_definite () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_definite;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_dict_entry (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_dict_entry (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_dict_entry () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_dict_entry;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_maybe (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_maybe (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_maybe () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_maybe;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_subtype_of (const GVariantType* type /*none*/, const GVariantType* supertype /*none*/);
// gboolean g_variant_type_is_subtype_of (const ::GVariantType* type /*none*/, const ::GVariantType* supertype /*none*/);
bool base::VariantTypeBase::is_subtype_of (const GLib::VariantType_Ref supertype) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type, const ::GVariantType* supertype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_subtype_of;
  auto supertype_to_c = gi::unwrap (supertype, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()), (const ::GVariantType*) (supertype_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_is_tuple (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_tuple (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_tuple () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_tuple;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_variant (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_variant (const ::GVariantType* type /*none*/);
bool base::VariantTypeBase::is_variant () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_is_variant;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// const GVariantType* /*none*/ g_variant_type_key (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_key (const ::GVariantType* type /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::key () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_key;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gsize g_variant_type_n_items (const GVariantType* type /*none*/);
// gsize g_variant_type_n_items (const ::GVariantType* type /*none*/);
gsize base::VariantTypeBase::n_items () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_n_items;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// const GVariantType* /*none*/ g_variant_type_next (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_next (const ::GVariantType* type /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::next () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_next;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_variant_type_peek_string (const GVariantType* type /*none*/);
// const char* /*none*/ g_variant_type_peek_string (const ::GVariantType* type /*none*/);
gi::cstring_v base::VariantTypeBase::peek_string () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_peek_string;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GVariantType* /*none*/ g_variant_type_value (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_value (const ::GVariantType* type /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::value () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_value;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GVariantType* /*none*/ g_variant_type_checked_ (const gchar* type_string /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_checked_ (const char* type_string /*none*/);
GLib::VariantType_Ref base::VariantTypeBase::checked_ (const gi::cstring_v type_string) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_checked_;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gsize g_variant_type_string_get_depth_ (const gchar* type_string /*none*/);
// gsize g_variant_type_string_get_depth_ (const char* type_string /*none*/);
gsize base::VariantTypeBase::string_get_depth_ (const gi::cstring_v type_string) noexcept
{
  typedef gsize (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_get_depth_;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_string_is_valid (const gchar* type_string /*none*/);
// gboolean g_variant_type_string_is_valid (const char* type_string /*none*/);
bool base::VariantTypeBase::string_is_valid (const gi::cstring_v type_string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_is_valid;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_string_scan (const gchar* string /*none*/, const gchar* limit /*none,nullable*/, const gchar** endptr /*full,out,opt*/);
// gboolean g_variant_type_string_scan (const char* string /*none*/, const char* limit /*none,nullable*/, const char** endptr /*full,out,opt*/);
bool base::VariantTypeBase::string_scan (const gi::cstring_v string, const gi::cstring_v limit, gi::cstring * endptr) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_full);
  return _temp_ret;
}
bool base::VariantTypeBase::string_scan (const gi::cstring_v string, gi::cstring * endptr) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::VariantTypeBase::string_scan (const gi::cstring_v string, const gi::cstring_v limit) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (&endptr_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::VariantTypeBase::string_scan (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (&endptr_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_def_impl.hpp>)
#include <glib/varianttype_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_impl.hpp>)
#include <glib/varianttype_extra_impl.hpp>
#endif
#endif

#endif
