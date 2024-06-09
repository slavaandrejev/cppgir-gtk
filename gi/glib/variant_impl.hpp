// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANT_IMPL_HPP_
#define _GI_GLIB_VARIANT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariant* /*full*/ g_variant_new (const gchar* format_string /*none*/,  ..._ /*none*/);
// ::GVariant* /*full*/ g_variant_new (const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*none*/ g_variant_new_array (const GVariantType* child_type /*none,nullable*/, GVariant* const* children /*none,nullable*/, gsize n_children);
// ::GVariant* /*none*/ g_variant_new_array (const ::GVariantType* child_type /*none,nullable*/, ::GVariant** children /*none,nullable*/, gsize n_children);
GLib::Variant base::VariantBase::new_array (const GLib::VariantType_Ref child_type, gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_array;
  auto children_w = unwrap (std::move(children), gi::transfer_none);
  auto children_to_c = children_w;
  auto child_type_to_c = gi::unwrap (child_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant**) (children_to_c), (gsize) (children._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::Variant base::VariantBase::new_array (gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_array;
  auto children_w = unwrap (std::move(children), gi::transfer_none);
  auto children_to_c = children_w;
  auto child_type_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant**) (children_to_c), (gsize) (children._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_boolean (gboolean value);
// ::GVariant* /*none*/ g_variant_new_boolean (gboolean value);
GLib::Variant base::VariantBase::new_boolean (gboolean value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_boolean;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gboolean) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_byte (guint8 value);
// ::GVariant* /*none*/ g_variant_new_byte (guint8 value);
GLib::Variant base::VariantBase::new_byte (guint8 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint8 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_byte;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint8) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_bytestring (const gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_bytestring (const guint8* string /*none*/);
GLib::Variant base::VariantBase::new_bytestring (gi::CollectionParameter<gi::ZTSpan, guint8, gi::transfer_none_t> string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const guint8* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_bytestring;
  auto string_w = unwrap (std::move(string), gi::transfer_none);
  auto string_to_c = string_w;
  auto _temp_ret = call_wrap_v ((const guint8*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_bytestring_array (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_bytestring_array (const char** strv /*none*/, gssize length);
GLib::Variant base::VariantBase::new_bytestring_array (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_bytestring_array;
  auto strv_w = unwrap (std::move(strv), gi::transfer_none);
  auto strv_to_c = strv_w;
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_dict_entry (GVariant* key /*none*/, GVariant* value /*none*/);
// ::GVariant* /*none*/ g_variant_new_dict_entry (::GVariant* key /*none*/, ::GVariant* value /*none*/);
GLib::Variant base::VariantBase::new_dict_entry (GLib::Variant key, GLib::Variant value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_dict_entry;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (key_to_c), (::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_double (gdouble value);
// ::GVariant* /*none*/ g_variant_new_double (gdouble value);
GLib::Variant base::VariantBase::new_double (gdouble value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_double;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gdouble) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_fixed_array (const GVariantType* element_type /*none*/, gconstpointer elements, gsize n_elements, gsize element_size);
// ::GVariant* /*none*/ g_variant_new_fixed_array (const ::GVariantType* element_type /*none*/, const void* elements, gsize n_elements, gsize element_size);
GLib::Variant base::VariantBase::new_fixed_array (const GLib::VariantType_Ref element_type, const void* elements, gsize n_elements, gsize element_size) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* element_type, const void* elements, gsize n_elements, gsize element_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_fixed_array;
  auto element_size_to_c = element_size;
  auto n_elements_to_c = n_elements;
  auto elements_to_c = elements;
  auto element_type_to_c = gi::unwrap (element_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_type_to_c), (const void*) (elements_to_c), (gsize) (n_elements_to_c), (gsize) (element_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_from_bytes (const GVariantType* type /*none*/, GBytes* bytes /*none*/, gboolean trusted);
// ::GVariant* /*none*/ g_variant_new_from_bytes (const ::GVariantType* type /*none*/, ::GBytes* bytes /*none*/, gboolean trusted);
GLib::Variant base::VariantBase::new_from_bytes (const GLib::VariantType_Ref type, GLib::Bytes_Ref bytes, gboolean trusted) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* type, ::GBytes* bytes, gboolean trusted);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_from_bytes;
  auto trusted_to_c = trusted;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (type_to_c), (::GBytes*) (bytes_to_c), (gboolean) (trusted_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_from_data (const GVariantType* type /*none*/, gconstpointer data /*none*/, gsize size, gboolean trusted, GDestroyNotify notify /*none*/, gpointer user_data);
// ::GVariant* /*none*/ g_variant_new_from_data (const ::GVariantType* type /*none*/, const guint8* data /*none*/, gsize size, gboolean trusted, GLib::DestroyNotify::cfunction_type notify /*none*/, void* user_data);
// SKIP; callback misses closure info

// GVariant* /*none*/ g_variant_new_handle (gint32 value);
// ::GVariant* /*none*/ g_variant_new_handle (gint32 value);
GLib::Variant base::VariantBase::new_handle (gint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_handle;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_int16 (gint16 value);
// ::GVariant* /*none*/ g_variant_new_int16 (gint16 value);
GLib::Variant base::VariantBase::new_int16 (gint16 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint16 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int16;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint16) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_int32 (gint32 value);
// ::GVariant* /*none*/ g_variant_new_int32 (gint32 value);
GLib::Variant base::VariantBase::new_int32 (gint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int32;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_int64 (gint64 value);
// ::GVariant* /*none*/ g_variant_new_int64 (gint64 value);
GLib::Variant base::VariantBase::new_int64 (gint64 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int64;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint64) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_maybe (const GVariantType* child_type /*none,nullable*/, GVariant* child /*none,nullable*/);
// ::GVariant* /*none*/ g_variant_new_maybe (const ::GVariantType* child_type /*none,nullable*/, ::GVariant* child /*none,nullable*/);
GLib::Variant base::VariantBase::new_maybe (const GLib::VariantType_Ref child_type, GLib::Variant child) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant* child);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_maybe;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto child_type_to_c = gi::unwrap (child_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::Variant base::VariantBase::new_maybe () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant* child);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_maybe;
  auto child_to_c = nullptr;
  auto child_type_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_object_path (const gchar* object_path /*none*/);
// ::GVariant* /*none*/ g_variant_new_object_path (const char* object_path /*none*/);
GLib::Variant base::VariantBase::new_object_path (const gi::cstring_v object_path) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_object_path;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_objv (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_objv (const char** strv /*none*/, gssize length);
GLib::Variant base::VariantBase::new_objv (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_objv;
  auto strv_w = unwrap (std::move(strv), gi::transfer_none);
  auto strv_to_c = strv_w;
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full*/ g_variant_new_parsed (const gchar* format /*none*/,  ..._ /*none*/);
// ::GVariant* /*full*/ g_variant_new_parsed (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full*/ g_variant_new_parsed_va (const gchar* format /*none*/, va_list* app /*none*/);
// ::GVariant* /*full*/ g_variant_new_parsed_va (const char* format /*none*/,  app /*none*/);
// IGNORE; not introspectable, app type  not supported

// GVariant* /*none*/ g_variant_new_printf (const gchar* format_string /*none*/,  ..._ /*none*/);
// ::GVariant* /*none*/ g_variant_new_printf (const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*none*/ g_variant_new_signature (const gchar* signature /*none*/);
// ::GVariant* /*none*/ g_variant_new_signature (const char* signature /*none*/);
GLib::Variant base::VariantBase::new_signature (const gi::cstring_v signature) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* signature);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_signature;
  auto signature_to_c = gi::unwrap (signature, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (signature_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_string (const gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_string (const char* string /*none*/);
GLib::Variant base::VariantBase::new_string (const gi::cstring_v string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_strv (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_strv (const char** strv /*none*/, gssize length);
GLib::Variant base::VariantBase::new_strv (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_strv;
  auto strv_w = unwrap (std::move(strv), gi::transfer_none);
  auto strv_to_c = strv_w;
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_take_string (gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_take_string (char* string /*none*/);
GLib::Variant base::VariantBase::new_take_string (gi::cstring_v string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_take_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_tuple (GVariant* const* children /*none*/, gsize n_children);
// ::GVariant* /*none*/ g_variant_new_tuple (::GVariant** children /*none*/, gsize n_children);
GLib::Variant base::VariantBase::new_tuple (gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_tuple;
  auto children_w = unwrap (std::move(children), gi::transfer_none);
  auto children_to_c = children_w;
  auto _temp_ret = call_wrap_v ((::GVariant**) (children_to_c), (gsize) (children._size()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_uint16 (guint16 value);
// ::GVariant* /*none*/ g_variant_new_uint16 (guint16 value);
GLib::Variant base::VariantBase::new_uint16 (guint16 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint16 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint16;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint16) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_uint32 (guint32 value);
// ::GVariant* /*none*/ g_variant_new_uint32 (guint32 value);
GLib::Variant base::VariantBase::new_uint32 (guint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint32;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_variant_new_uint64 (guint64 value);
// ::GVariant* /*none*/ g_variant_new_uint64 (guint64 value);
GLib::Variant base::VariantBase::new_uint64 (guint64 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint64;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint64) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full*/ g_variant_new_va (const gchar* format_string /*none*/, const gchar** endptr /*none,nullable*/, va_list* app /*none*/);
// ::GVariant* /*full*/ g_variant_new_va (const char* format_string /*none*/, const char* endptr /*none,nullable*/,  app /*none*/);
// IGNORE; not introspectable, app type  not supported, inconsistent endptr in pointer depth (2 vs 1)

// GVariant* /*none*/ g_variant_new_variant (GVariant* value /*none*/);
// ::GVariant* /*none*/ g_variant_new_variant (::GVariant* value /*none*/);
GLib::Variant base::VariantBase::new_variant (GLib::Variant value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_variant;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full*/ g_variant_byteswap (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_byteswap (::GVariant* value /*none*/);
GLib::Variant base::VariantBase::byteswap () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_byteswap;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_variant_check_format_string (GVariant* value /*none*/, const gchar* format_string /*none*/, gboolean copy_only);
// gboolean g_variant_check_format_string (::GVariant* value /*none*/, const char* format_string /*none*/, gboolean copy_only);
bool base::VariantBase::check_format_string (const gi::cstring_v format_string, gboolean copy_only) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value, const char* format_string, gboolean copy_only);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_check_format_string;
  auto copy_only_to_c = copy_only;
  auto format_string_to_c = gi::unwrap (format_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (format_string_to_c), (gboolean) (copy_only_to_c));
  return _temp_ret;
}

// GVariantClass g_variant_classify (GVariant* value /*none*/);
// ::GVariantClass g_variant_classify (::GVariant* value /*none*/);
GLib::VariantClass base::VariantBase::classify () noexcept
{
  typedef ::GVariantClass (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_classify;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint g_variant_compare (gconstpointer one /*none*/, gconstpointer two /*none*/);
// gint g_variant_compare (const ::GVariant* one /*none*/, const ::GVariant* two /*none*/);
gint base::VariantBase::compare (const GLib::Variant two) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GVariant* one, const ::GVariant* two);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_compare;
  auto two_to_c = gi::unwrap (two, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()), (const ::GVariant*) (two_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_variant_dup_bytestring (GVariant* value /*none*/, gsize* length);
// guint8* /*full*/ g_variant_dup_bytestring (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> base::VariantBase::dup_bytestring (gsize * length) noexcept
{
  typedef guint8* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_bytestring;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> base::VariantBase::dup_bytestring () noexcept
{
  typedef guint8* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_bytestring;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar** /*full*/ g_variant_dup_bytestring_array (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_bytestring_array (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::VariantBase::dup_bytestring_array () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_bytestring_array;
  gsize length;
  auto _ret_o = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length));
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  return _temp_ret;
}

// gchar** /*full*/ g_variant_dup_objv (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_objv (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::VariantBase::dup_objv (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::VariantBase::dup_objv () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_variant_dup_string (GVariant* value /*none*/, gsize* length);
// char* /*full*/ g_variant_dup_string (::GVariant* value /*none*/, gsize* length);
gi::cstring base::VariantBase::dup_string (gsize & length) noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  length = length_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::VariantBase::dup_string () noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar** /*full*/ g_variant_dup_strv (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_strv (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::VariantBase::dup_strv (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::VariantBase::dup_strv () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dup_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_variant_equal (gconstpointer one /*none*/, gconstpointer two /*none*/);
// gboolean g_variant_equal (const ::GVariant* one /*none*/, const ::GVariant* two /*none*/);
bool base::VariantBase::equal (const GLib::Variant two) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariant* one, const ::GVariant* two);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_equal;
  auto two_to_c = gi::unwrap (two, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()), (const ::GVariant*) (two_to_c));
  return _temp_ret;
}

// void g_variant_get (GVariant* value /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_get (::GVariant* value /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_variant_get_boolean (GVariant* value /*none*/);
// gboolean g_variant_get_boolean (::GVariant* value /*none*/);
bool base::VariantBase::get_boolean () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_boolean;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint8 g_variant_get_byte (GVariant* value /*none*/);
// guint8 g_variant_get_byte (::GVariant* value /*none*/);
guint8 base::VariantBase::get_byte () noexcept
{
  typedef guint8 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_byte;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_variant_get_bytestring (GVariant* value /*none*/);
// const guint8* /*none*/ g_variant_get_bytestring (::GVariant* value /*none*/);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> base::VariantBase::get_bytestring () noexcept
{
  typedef const guint8* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_bytestring;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar** /*container*/ g_variant_get_bytestring_array (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_bytestring_array (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::DSpan, char*, gi::transfer_container_t> base::VariantBase::get_bytestring_array () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_bytestring_array;
  gsize length;
  auto _ret_o = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length));
  gi::Collection<gi::DSpan, char*, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  return _temp_ret;
}

// void g_variant_get_child (GVariant* value /*none*/, gsize index_, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_get_child (::GVariant* value /*none*/, gsize index_, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full*/ g_variant_get_child_value (GVariant* value /*none*/, gsize index_);
// ::GVariant* /*full*/ g_variant_get_child_value (::GVariant* value /*none*/, gsize index_);
GLib::Variant base::VariantBase::get_child_value (gsize index_) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value, gsize index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_child_value;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gconstpointer g_variant_get_data (GVariant* value /*none*/);
// const void* g_variant_get_data (::GVariant* value /*none*/);
gconstpointer base::VariantBase::get_data () noexcept
{
  typedef const void* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_data;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// GBytes* /*full*/ g_variant_get_data_as_bytes (GVariant* value /*none*/);
// ::GBytes* /*full*/ g_variant_get_data_as_bytes (::GVariant* value /*none*/);
GLib::Bytes base::VariantBase::get_data_as_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_data_as_bytes;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gdouble g_variant_get_double (GVariant* value /*none*/);
// gdouble g_variant_get_double (::GVariant* value /*none*/);
gdouble base::VariantBase::get_double () noexcept
{
  typedef gdouble (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_double;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gconstpointer /*none*/ g_variant_get_fixed_array (GVariant* value /*none*/, gsize* n_elements, gsize element_size);
// const void** /*none*/ g_variant_get_fixed_array (::GVariant* value /*none*/, gsize* n_elements, gsize element_size);
// IGNORE; not introspectable, inconsistent  return pointer depth (1 vs 2)

// gint32 g_variant_get_handle (GVariant* value /*none*/);
// gint32 g_variant_get_handle (::GVariant* value /*none*/);
gint32 base::VariantBase::get_handle () noexcept
{
  typedef gint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_handle;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint16 g_variant_get_int16 (GVariant* value /*none*/);
// gint16 g_variant_get_int16 (::GVariant* value /*none*/);
gint16 base::VariantBase::get_int16 () noexcept
{
  typedef gint16 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_int16;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint32 g_variant_get_int32 (GVariant* value /*none*/);
// gint32 g_variant_get_int32 (::GVariant* value /*none*/);
gint32 base::VariantBase::get_int32 () noexcept
{
  typedef gint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_int32;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint64 g_variant_get_int64 (GVariant* value /*none*/);
// gint64 g_variant_get_int64 (::GVariant* value /*none*/);
gint64 base::VariantBase::get_int64 () noexcept
{
  typedef gint64 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_int64;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// GVariant* /*full,nullable*/ g_variant_get_maybe (GVariant* value /*none*/);
// ::GVariant* /*full,nullable*/ g_variant_get_maybe (::GVariant* value /*none*/);
GLib::Variant base::VariantBase::get_maybe () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_maybe;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ g_variant_get_normal_form (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_get_normal_form (::GVariant* value /*none*/);
GLib::Variant base::VariantBase::get_normal_form () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_normal_form;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar** /*container*/ g_variant_get_objv (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_objv (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> base::VariantBase::get_objv (gsize * length) noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gsize> base::VariantBase::get_objv () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gsize g_variant_get_size (GVariant* value /*none*/);
// gsize g_variant_get_size (::GVariant* value /*none*/);
gsize base::VariantBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_size;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_variant_get_string (GVariant* value /*none*/, gsize* length);
// const char* /*none*/ g_variant_get_string (::GVariant* value /*none*/, gsize* length);
gi::cstring_v base::VariantBase::get_string (gsize * length) noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<gi::cstring_v, gsize> base::VariantBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const gchar** /*container*/ g_variant_get_strv (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_strv (::GVariant* value /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> base::VariantBase::get_strv (gsize * length) noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gsize> base::VariantBase::get_strv () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const GVariantType* /*none*/ g_variant_get_type (GVariant* value /*none*/);
// const ::GVariantType* /*none*/ g_variant_get_type (::GVariant* value /*none*/);
GLib::VariantType_Ref base::VariantBase::get_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_type;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_variant_get_type_string (GVariant* value /*none*/);
// const char* /*none*/ g_variant_get_type_string (::GVariant* value /*none*/);
gi::cstring_v base::VariantBase::get_type_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_type_string;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 g_variant_get_uint16 (GVariant* value /*none*/);
// guint16 g_variant_get_uint16 (::GVariant* value /*none*/);
guint16 base::VariantBase::get_uint16 () noexcept
{
  typedef guint16 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_uint16;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint32 g_variant_get_uint32 (GVariant* value /*none*/);
// guint32 g_variant_get_uint32 (::GVariant* value /*none*/);
guint32 base::VariantBase::get_uint32 () noexcept
{
  typedef guint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_uint32;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint64 g_variant_get_uint64 (GVariant* value /*none*/);
// guint64 g_variant_get_uint64 (::GVariant* value /*none*/);
guint64 base::VariantBase::get_uint64 () noexcept
{
  typedef guint64 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_uint64;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// void g_variant_get_va (GVariant* value /*none*/, const gchar* format_string /*none*/, const gchar** endptr /*none,nullable*/, va_list* app /*none*/);
// void g_variant_get_va (::GVariant* value /*none*/, const char* format_string /*none*/, const char* endptr /*none,nullable*/,  app /*none*/);
// IGNORE; not introspectable, app type  not supported, inconsistent endptr in pointer depth (2 vs 1)

// GVariant* /*full*/ g_variant_get_variant (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_get_variant (::GVariant* value /*none*/);
GLib::Variant base::VariantBase::get_variant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_variant;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint g_variant_hash (gconstpointer value /*none*/);
// guint g_variant_hash (const ::GVariant* value /*none*/);
guint base::VariantBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_hash;
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_container (GVariant* value /*none*/);
// gboolean g_variant_is_container (::GVariant* value /*none*/);
bool base::VariantBase::is_container () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_container;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_floating (GVariant* value /*none*/);
// gboolean g_variant_is_floating (::GVariant* value /*none*/);
bool base::VariantBase::is_floating () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_floating;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_normal_form (GVariant* value /*none*/);
// gboolean g_variant_is_normal_form (::GVariant* value /*none*/);
bool base::VariantBase::is_normal_form () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_normal_form;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_of_type (GVariant* value /*none*/, const GVariantType* type /*none*/);
// gboolean g_variant_is_of_type (::GVariant* value /*none*/, const ::GVariantType* type /*none*/);
bool base::VariantBase::is_of_type (const GLib::VariantType_Ref type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_of_type;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const ::GVariantType*) (type_to_c));
  return _temp_ret;
}

// GVariantIter* /*full*/ g_variant_iter_new (GVariant* value /*none*/);
// ::GVariantIter* /*full*/ g_variant_iter_new (::GVariant* value /*none*/);
GLib::VariantIter base::VariantBase::iter_new () noexcept
{
  typedef ::GVariantIter* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_iter_new;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_variant_lookup (GVariant* dictionary /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_lookup (::GVariant* dictionary /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full*/ g_variant_lookup_value (GVariant* dictionary /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full*/ g_variant_lookup_value (::GVariant* dictionary /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GLib::Variant base::VariantBase::lookup_value (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_lookup_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::VariantBase::lookup_value (const gi::cstring_v key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_lookup_value;
  auto expected_type_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gsize g_variant_n_children (GVariant* value /*none*/);
// gsize g_variant_n_children (::GVariant* value /*none*/);
gsize base::VariantBase::n_children () noexcept
{
  typedef gsize (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_n_children;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gchar* /*full*/ g_variant_print (GVariant* value /*none*/, gboolean type_annotate);
// char* /*full*/ g_variant_print (::GVariant* value /*none*/, gboolean type_annotate);
gi::cstring base::VariantBase::print (gboolean type_annotate) noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_print;
  auto type_annotate_to_c = type_annotate;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GString* /*full*/ g_variant_print_string (GVariant* value /*none*/, GString* string /*none,nullable*/, gboolean type_annotate);
// ::GString* /*full*/ g_variant_print_string (::GVariant* value /*none*/, ::GString* string /*none,nullable*/, gboolean type_annotate);
GLib::String base::VariantBase::print_string (GLib::String_Ref string, gboolean type_annotate) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GVariant* value, ::GString* string, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_print_string;
  auto type_annotate_to_c = type_annotate;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (::GString*) (string_to_c), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::String base::VariantBase::print_string (gboolean type_annotate) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GVariant* value, ::GString* string, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_print_string;
  auto type_annotate_to_c = type_annotate;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (::GString*) (string_to_c), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ g_variant_ref (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_ref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// GVariant* /*full*/ g_variant_ref_sink (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_ref_sink (::GVariant* value /*none*/);
// IGNORE; marked ignore

// void g_variant_store (GVariant* value /*none*/, gpointer data);
// void g_variant_store (::GVariant* value /*none*/, void* data);
void base::VariantBase::store (void* data) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_store;
  auto data_to_c = data;
  call_wrap_v ((::GVariant*) (gobj_()), (void*) (data_to_c));
}

// GVariant* /*full*/ g_variant_take_ref (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_take_ref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// void g_variant_unref (GVariant* value /*none*/);
// void g_variant_unref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// gboolean g_variant_is_object_path (const gchar* string /*none*/);
// gboolean g_variant_is_object_path (const char* string /*none*/);
bool base::VariantBase::is_object_path (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_object_path;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_variant_is_signature (const gchar* string /*none*/);
// gboolean g_variant_is_signature (const char* string /*none*/);
bool base::VariantBase::is_signature (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_is_signature;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// GVariant* /*full*/ g_variant_parse (const GVariantType* type /*none,nullable*/, const gchar* text /*none*/, const gchar* limit /*none,nullable*/, const gchar** endptr /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_variant_parse (const ::GVariantType* type /*none,nullable*/, const char* text /*none*/, const char* limit /*none,nullable*/, const char* endptr /*none,nullable*/, GError ** error);
// SKIP; inconsistent endptr in pointer depth (2 vs 1)

// gchar* /*full*/ g_variant_parse_error_print_context (GError* error /*none*/, const gchar* source_str /*none*/);
// char* /*full*/ g_variant_parse_error_print_context (::GError* error /*none*/, const char* source_str /*none*/);
gi::cstring base::VariantBase::parse_error_print_context (GLib::Error_Ref error, const gi::cstring_v source_str) noexcept
{
  typedef char* (*call_wrap_t) (::GError* error, const char* source_str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_parse_error_print_context;
  auto source_str_to_c = gi::unwrap (source_str, gi::transfer_none);
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GError*) (error_to_c), (const char*) (source_str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GQuark g_variant_parse_error_quark ();
// ::GQuark g_variant_parse_error_quark ();
GLib::Quark base::VariantBase::parse_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_parse_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GQuark g_variant_parser_get_error_quark ();
// ::GQuark g_variant_parser_get_error_quark ();
// IGNORE; deprecated


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variant_extra_def_impl.hpp>)
#include <glib/variant_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variant_extra_impl.hpp>)
#include <glib/variant_extra_impl.hpp>
#endif
#endif

#endif
