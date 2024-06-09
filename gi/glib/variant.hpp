// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANT_HPP_
#define _GI_GLIB_VARIANT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Bytes_Ref;
class Error;
class Error_Ref;
class String;
class String_Ref;
class VariantIter;
class VariantIter_Ref;
class VariantType;
class VariantType_Ref;

class Variant;

namespace base {


#define GI_GLIB_VARIANT_BASE base::VariantBase
class VariantBase : public detail::VariantWrapper
{
typedef detail::VariantWrapper super_type;
public:

VariantBase (std::nullptr_t = nullptr) : super_type() {}

// GVariant* /*full*/ g_variant_new (const gchar* format_string /*none*/,  ..._ /*none*/);
// ::GVariant* /*full*/ g_variant_new (const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*none*/ g_variant_new_array (const GVariantType* child_type /*none,nullable*/, GVariant* const* children /*none,nullable*/, gsize n_children);
// ::GVariant* /*none*/ g_variant_new_array (const ::GVariantType* child_type /*none,nullable*/, ::GVariant** children /*none,nullable*/, gsize n_children);
static GI_INLINE_DECL GLib::Variant new_array (const GLib::VariantType_Ref child_type, gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept;
static GI_INLINE_DECL GLib::Variant new_array (gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept;

// GVariant* /*none*/ g_variant_new_boolean (gboolean value);
// ::GVariant* /*none*/ g_variant_new_boolean (gboolean value);
static GI_INLINE_DECL GLib::Variant new_boolean (gboolean value) noexcept;

// GVariant* /*none*/ g_variant_new_byte (guint8 value);
// ::GVariant* /*none*/ g_variant_new_byte (guint8 value);
static GI_INLINE_DECL GLib::Variant new_byte (guint8 value) noexcept;

// GVariant* /*none*/ g_variant_new_bytestring (const gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_bytestring (const guint8* string /*none*/);
static GI_INLINE_DECL GLib::Variant new_bytestring (gi::CollectionParameter<gi::ZTSpan, guint8, gi::transfer_none_t> string) noexcept;

// GVariant* /*none*/ g_variant_new_bytestring_array (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_bytestring_array (const char** strv /*none*/, gssize length);
static GI_INLINE_DECL GLib::Variant new_bytestring_array (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept;

// GVariant* /*none*/ g_variant_new_dict_entry (GVariant* key /*none*/, GVariant* value /*none*/);
// ::GVariant* /*none*/ g_variant_new_dict_entry (::GVariant* key /*none*/, ::GVariant* value /*none*/);
static GI_INLINE_DECL GLib::Variant new_dict_entry (GLib::Variant key, GLib::Variant value) noexcept;

// GVariant* /*none*/ g_variant_new_double (gdouble value);
// ::GVariant* /*none*/ g_variant_new_double (gdouble value);
static GI_INLINE_DECL GLib::Variant new_double (gdouble value) noexcept;

// GVariant* /*none*/ g_variant_new_fixed_array (const GVariantType* element_type /*none*/, gconstpointer elements, gsize n_elements, gsize element_size);
// ::GVariant* /*none*/ g_variant_new_fixed_array (const ::GVariantType* element_type /*none*/, const void* elements, gsize n_elements, gsize element_size);
static GI_INLINE_DECL GLib::Variant new_fixed_array (const GLib::VariantType_Ref element_type, const void* elements, gsize n_elements, gsize element_size) noexcept;

// GVariant* /*none*/ g_variant_new_from_bytes (const GVariantType* type /*none*/, GBytes* bytes /*none*/, gboolean trusted);
// ::GVariant* /*none*/ g_variant_new_from_bytes (const ::GVariantType* type /*none*/, ::GBytes* bytes /*none*/, gboolean trusted);
static GI_INLINE_DECL GLib::Variant new_from_bytes (const GLib::VariantType_Ref type, GLib::Bytes_Ref bytes, gboolean trusted) noexcept;

// GVariant* /*none*/ g_variant_new_from_data (const GVariantType* type /*none*/, gconstpointer data /*none*/, gsize size, gboolean trusted, GDestroyNotify notify /*none*/, gpointer user_data);
// ::GVariant* /*none*/ g_variant_new_from_data (const ::GVariantType* type /*none*/, const guint8* data /*none*/, gsize size, gboolean trusted, GLib::DestroyNotify::cfunction_type notify /*none*/, void* user_data);
// SKIP; callback misses closure info

// GVariant* /*none*/ g_variant_new_handle (gint32 value);
// ::GVariant* /*none*/ g_variant_new_handle (gint32 value);
static GI_INLINE_DECL GLib::Variant new_handle (gint32 value) noexcept;

// GVariant* /*none*/ g_variant_new_int16 (gint16 value);
// ::GVariant* /*none*/ g_variant_new_int16 (gint16 value);
static GI_INLINE_DECL GLib::Variant new_int16 (gint16 value) noexcept;

// GVariant* /*none*/ g_variant_new_int32 (gint32 value);
// ::GVariant* /*none*/ g_variant_new_int32 (gint32 value);
static GI_INLINE_DECL GLib::Variant new_int32 (gint32 value) noexcept;

// GVariant* /*none*/ g_variant_new_int64 (gint64 value);
// ::GVariant* /*none*/ g_variant_new_int64 (gint64 value);
static GI_INLINE_DECL GLib::Variant new_int64 (gint64 value) noexcept;

// GVariant* /*none*/ g_variant_new_maybe (const GVariantType* child_type /*none,nullable*/, GVariant* child /*none,nullable*/);
// ::GVariant* /*none*/ g_variant_new_maybe (const ::GVariantType* child_type /*none,nullable*/, ::GVariant* child /*none,nullable*/);
static GI_INLINE_DECL GLib::Variant new_maybe (const GLib::VariantType_Ref child_type, GLib::Variant child) noexcept;
static GI_INLINE_DECL GLib::Variant new_maybe () noexcept;

// GVariant* /*none*/ g_variant_new_object_path (const gchar* object_path /*none*/);
// ::GVariant* /*none*/ g_variant_new_object_path (const char* object_path /*none*/);
static GI_INLINE_DECL GLib::Variant new_object_path (const gi::cstring_v object_path) noexcept;

// GVariant* /*none*/ g_variant_new_objv (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_objv (const char** strv /*none*/, gssize length);
static GI_INLINE_DECL GLib::Variant new_objv (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept;

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
static GI_INLINE_DECL GLib::Variant new_signature (const gi::cstring_v signature) noexcept;

// GVariant* /*none*/ g_variant_new_string (const gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_string (const char* string /*none*/);
static GI_INLINE_DECL GLib::Variant new_string (const gi::cstring_v string) noexcept;

// GVariant* /*none*/ g_variant_new_strv (const gchar* const* strv /*none*/, gssize length);
// ::GVariant* /*none*/ g_variant_new_strv (const char** strv /*none*/, gssize length);
static GI_INLINE_DECL GLib::Variant new_strv (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> strv) noexcept;

// GVariant* /*none*/ g_variant_new_take_string (gchar* string /*none*/);
// ::GVariant* /*none*/ g_variant_new_take_string (char* string /*none*/);
static GI_INLINE_DECL GLib::Variant new_take_string (gi::cstring_v string) noexcept;

// GVariant* /*none*/ g_variant_new_tuple (GVariant* const* children /*none*/, gsize n_children);
// ::GVariant* /*none*/ g_variant_new_tuple (::GVariant** children /*none*/, gsize n_children);
static GI_INLINE_DECL GLib::Variant new_tuple (gi::CollectionParameter<gi::DSpan, ::GVariant*, gi::transfer_none_t> children) noexcept;

// GVariant* /*none*/ g_variant_new_uint16 (guint16 value);
// ::GVariant* /*none*/ g_variant_new_uint16 (guint16 value);
static GI_INLINE_DECL GLib::Variant new_uint16 (guint16 value) noexcept;

// GVariant* /*none*/ g_variant_new_uint32 (guint32 value);
// ::GVariant* /*none*/ g_variant_new_uint32 (guint32 value);
static GI_INLINE_DECL GLib::Variant new_uint32 (guint32 value) noexcept;

// GVariant* /*none*/ g_variant_new_uint64 (guint64 value);
// ::GVariant* /*none*/ g_variant_new_uint64 (guint64 value);
static GI_INLINE_DECL GLib::Variant new_uint64 (guint64 value) noexcept;

// GVariant* /*full*/ g_variant_new_va (const gchar* format_string /*none*/, const gchar** endptr /*none,nullable*/, va_list* app /*none*/);
// ::GVariant* /*full*/ g_variant_new_va (const char* format_string /*none*/, const char* endptr /*none,nullable*/,  app /*none*/);
// IGNORE; not introspectable, app type  not supported, inconsistent endptr in pointer depth (2 vs 1)

// GVariant* /*none*/ g_variant_new_variant (GVariant* value /*none*/);
// ::GVariant* /*none*/ g_variant_new_variant (::GVariant* value /*none*/);
static GI_INLINE_DECL GLib::Variant new_variant (GLib::Variant value) noexcept;

// GVariant* /*full*/ g_variant_byteswap (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_byteswap (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::Variant byteswap () noexcept;

// gboolean g_variant_check_format_string (GVariant* value /*none*/, const gchar* format_string /*none*/, gboolean copy_only);
// gboolean g_variant_check_format_string (::GVariant* value /*none*/, const char* format_string /*none*/, gboolean copy_only);
GI_INLINE_DECL bool check_format_string (const gi::cstring_v format_string, gboolean copy_only) noexcept;

// GVariantClass g_variant_classify (GVariant* value /*none*/);
// ::GVariantClass g_variant_classify (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::VariantClass classify () noexcept;

// gint g_variant_compare (gconstpointer one /*none*/, gconstpointer two /*none*/);
// gint g_variant_compare (const ::GVariant* one /*none*/, const ::GVariant* two /*none*/);
GI_INLINE_DECL gint compare (const GLib::Variant two) const noexcept;

// gchar* /*full*/ g_variant_dup_bytestring (GVariant* value /*none*/, gsize* length);
// guint8* /*full*/ g_variant_dup_bytestring (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> dup_bytestring (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gsize> dup_bytestring () noexcept;

// gchar** /*full*/ g_variant_dup_bytestring_array (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_bytestring_array (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> dup_bytestring_array () noexcept;

// gchar** /*full*/ g_variant_dup_objv (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_objv (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_objv (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> dup_objv () noexcept;

// gchar* /*full*/ g_variant_dup_string (GVariant* value /*none*/, gsize* length);
// char* /*full*/ g_variant_dup_string (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::cstring dup_string (gsize & length) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> dup_string () noexcept;

// gchar** /*full*/ g_variant_dup_strv (GVariant* value /*none*/, gsize* length);
// char** /*full*/ g_variant_dup_strv (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_strv (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> dup_strv () noexcept;

// gboolean g_variant_equal (gconstpointer one /*none*/, gconstpointer two /*none*/);
// gboolean g_variant_equal (const ::GVariant* one /*none*/, const ::GVariant* two /*none*/);
GI_INLINE_DECL bool equal (const GLib::Variant two) const noexcept;

// void g_variant_get (GVariant* value /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_get (::GVariant* value /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_variant_get_boolean (GVariant* value /*none*/);
// gboolean g_variant_get_boolean (::GVariant* value /*none*/);
GI_INLINE_DECL bool get_boolean () noexcept;

// guint8 g_variant_get_byte (GVariant* value /*none*/);
// guint8 g_variant_get_byte (::GVariant* value /*none*/);
GI_INLINE_DECL guint8 get_byte () noexcept;

// const gchar* /*none*/ g_variant_get_bytestring (GVariant* value /*none*/);
// const guint8* /*none*/ g_variant_get_bytestring (::GVariant* value /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> get_bytestring () noexcept;

// const gchar** /*container*/ g_variant_get_bytestring_array (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_bytestring_array (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_container_t> get_bytestring_array () noexcept;

// void g_variant_get_child (GVariant* value /*none*/, gsize index_, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_get_child (::GVariant* value /*none*/, gsize index_, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full*/ g_variant_get_child_value (GVariant* value /*none*/, gsize index_);
// ::GVariant* /*full*/ g_variant_get_child_value (::GVariant* value /*none*/, gsize index_);
GI_INLINE_DECL GLib::Variant get_child_value (gsize index_) noexcept;

// gconstpointer g_variant_get_data (GVariant* value /*none*/);
// const void* g_variant_get_data (::GVariant* value /*none*/);
GI_INLINE_DECL gconstpointer get_data () noexcept;

// GBytes* /*full*/ g_variant_get_data_as_bytes (GVariant* value /*none*/);
// ::GBytes* /*full*/ g_variant_get_data_as_bytes (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::Bytes get_data_as_bytes () noexcept;

// gdouble g_variant_get_double (GVariant* value /*none*/);
// gdouble g_variant_get_double (::GVariant* value /*none*/);
GI_INLINE_DECL gdouble get_double () noexcept;

// gconstpointer /*none*/ g_variant_get_fixed_array (GVariant* value /*none*/, gsize* n_elements, gsize element_size);
// const void** /*none*/ g_variant_get_fixed_array (::GVariant* value /*none*/, gsize* n_elements, gsize element_size);
// IGNORE; not introspectable, inconsistent  return pointer depth (1 vs 2)

// gint32 g_variant_get_handle (GVariant* value /*none*/);
// gint32 g_variant_get_handle (::GVariant* value /*none*/);
GI_INLINE_DECL gint32 get_handle () noexcept;

// gint16 g_variant_get_int16 (GVariant* value /*none*/);
// gint16 g_variant_get_int16 (::GVariant* value /*none*/);
GI_INLINE_DECL gint16 get_int16 () noexcept;

// gint32 g_variant_get_int32 (GVariant* value /*none*/);
// gint32 g_variant_get_int32 (::GVariant* value /*none*/);
GI_INLINE_DECL gint32 get_int32 () noexcept;

// gint64 g_variant_get_int64 (GVariant* value /*none*/);
// gint64 g_variant_get_int64 (::GVariant* value /*none*/);
GI_INLINE_DECL gint64 get_int64 () noexcept;

// GVariant* /*full,nullable*/ g_variant_get_maybe (GVariant* value /*none*/);
// ::GVariant* /*full,nullable*/ g_variant_get_maybe (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::Variant get_maybe () noexcept;

// GVariant* /*full*/ g_variant_get_normal_form (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_get_normal_form (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::Variant get_normal_form () noexcept;

// const gchar** /*container*/ g_variant_get_objv (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_objv (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> get_objv (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gsize> get_objv () noexcept;

// gsize g_variant_get_size (GVariant* value /*none*/);
// gsize g_variant_get_size (::GVariant* value /*none*/);
GI_INLINE_DECL gsize get_size () noexcept;

// const gchar* /*none*/ g_variant_get_string (GVariant* value /*none*/, gsize* length);
// const char* /*none*/ g_variant_get_string (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::cstring_v get_string (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring_v, gsize> get_string () noexcept;

// const gchar** /*container*/ g_variant_get_strv (GVariant* value /*none*/, gsize* length);
// const char** /*container*/ g_variant_get_strv (::GVariant* value /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> get_strv (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gsize> get_strv () noexcept;

// const GVariantType* /*none*/ g_variant_get_type (GVariant* value /*none*/);
// const ::GVariantType* /*none*/ g_variant_get_type (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_type () noexcept;

// const gchar* /*none*/ g_variant_get_type_string (GVariant* value /*none*/);
// const char* /*none*/ g_variant_get_type_string (::GVariant* value /*none*/);
GI_INLINE_DECL gi::cstring_v get_type_string () noexcept;

// guint16 g_variant_get_uint16 (GVariant* value /*none*/);
// guint16 g_variant_get_uint16 (::GVariant* value /*none*/);
GI_INLINE_DECL guint16 get_uint16 () noexcept;

// guint32 g_variant_get_uint32 (GVariant* value /*none*/);
// guint32 g_variant_get_uint32 (::GVariant* value /*none*/);
GI_INLINE_DECL guint32 get_uint32 () noexcept;

// guint64 g_variant_get_uint64 (GVariant* value /*none*/);
// guint64 g_variant_get_uint64 (::GVariant* value /*none*/);
GI_INLINE_DECL guint64 get_uint64 () noexcept;

// void g_variant_get_va (GVariant* value /*none*/, const gchar* format_string /*none*/, const gchar** endptr /*none,nullable*/, va_list* app /*none*/);
// void g_variant_get_va (::GVariant* value /*none*/, const char* format_string /*none*/, const char* endptr /*none,nullable*/,  app /*none*/);
// IGNORE; not introspectable, app type  not supported, inconsistent endptr in pointer depth (2 vs 1)

// GVariant* /*full*/ g_variant_get_variant (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_get_variant (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::Variant get_variant () noexcept;

// guint g_variant_hash (gconstpointer value /*none*/);
// guint g_variant_hash (const ::GVariant* value /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_variant_is_container (GVariant* value /*none*/);
// gboolean g_variant_is_container (::GVariant* value /*none*/);
GI_INLINE_DECL bool is_container () noexcept;

// gboolean g_variant_is_floating (GVariant* value /*none*/);
// gboolean g_variant_is_floating (::GVariant* value /*none*/);
GI_INLINE_DECL bool is_floating () noexcept;

// gboolean g_variant_is_normal_form (GVariant* value /*none*/);
// gboolean g_variant_is_normal_form (::GVariant* value /*none*/);
GI_INLINE_DECL bool is_normal_form () noexcept;

// gboolean g_variant_is_of_type (GVariant* value /*none*/, const GVariantType* type /*none*/);
// gboolean g_variant_is_of_type (::GVariant* value /*none*/, const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_of_type (const GLib::VariantType_Ref type) noexcept;

// GVariantIter* /*full*/ g_variant_iter_new (GVariant* value /*none*/);
// ::GVariantIter* /*full*/ g_variant_iter_new (::GVariant* value /*none*/);
GI_INLINE_DECL GLib::VariantIter iter_new () noexcept;

// gboolean g_variant_lookup (GVariant* dictionary /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_lookup (::GVariant* dictionary /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full*/ g_variant_lookup_value (GVariant* dictionary /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full*/ g_variant_lookup_value (::GVariant* dictionary /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GI_INLINE_DECL GLib::Variant lookup_value (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept;
GI_INLINE_DECL GLib::Variant lookup_value (const gi::cstring_v key) noexcept;

// gsize g_variant_n_children (GVariant* value /*none*/);
// gsize g_variant_n_children (::GVariant* value /*none*/);
GI_INLINE_DECL gsize n_children () noexcept;

// gchar* /*full*/ g_variant_print (GVariant* value /*none*/, gboolean type_annotate);
// char* /*full*/ g_variant_print (::GVariant* value /*none*/, gboolean type_annotate);
GI_INLINE_DECL gi::cstring print (gboolean type_annotate) noexcept;

// GString* /*full*/ g_variant_print_string (GVariant* value /*none*/, GString* string /*none,nullable*/, gboolean type_annotate);
// ::GString* /*full*/ g_variant_print_string (::GVariant* value /*none*/, ::GString* string /*none,nullable*/, gboolean type_annotate);
GI_INLINE_DECL GLib::String print_string (GLib::String_Ref string, gboolean type_annotate) noexcept;
GI_INLINE_DECL GLib::String print_string (gboolean type_annotate) noexcept;

// GVariant* /*full*/ g_variant_ref (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_ref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// GVariant* /*full*/ g_variant_ref_sink (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_ref_sink (::GVariant* value /*none*/);
// IGNORE; marked ignore

// void g_variant_store (GVariant* value /*none*/, gpointer data);
// void g_variant_store (::GVariant* value /*none*/, void* data);
GI_INLINE_DECL void store (void* data) noexcept;

// GVariant* /*full*/ g_variant_take_ref (GVariant* value /*none*/);
// ::GVariant* /*full*/ g_variant_take_ref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// void g_variant_unref (GVariant* value /*none*/);
// void g_variant_unref (::GVariant* value /*none*/);
// IGNORE; marked ignore

// gboolean g_variant_is_object_path (const gchar* string /*none*/);
// gboolean g_variant_is_object_path (const char* string /*none*/);
static GI_INLINE_DECL bool is_object_path (const gi::cstring_v string) noexcept;

// gboolean g_variant_is_signature (const gchar* string /*none*/);
// gboolean g_variant_is_signature (const char* string /*none*/);
static GI_INLINE_DECL bool is_signature (const gi::cstring_v string) noexcept;

// GVariant* /*full*/ g_variant_parse (const GVariantType* type /*none,nullable*/, const gchar* text /*none*/, const gchar* limit /*none,nullable*/, const gchar** endptr /*none,nullable*/, GError ** error);
// ::GVariant* /*full*/ g_variant_parse (const ::GVariantType* type /*none,nullable*/, const char* text /*none*/, const char* limit /*none,nullable*/, const char* endptr /*none,nullable*/, GError ** error);
// SKIP; inconsistent endptr in pointer depth (2 vs 1)

// gchar* /*full*/ g_variant_parse_error_print_context (GError* error /*none*/, const gchar* source_str /*none*/);
// char* /*full*/ g_variant_parse_error_print_context (::GError* error /*none*/, const char* source_str /*none*/);
static GI_INLINE_DECL gi::cstring parse_error_print_context (GLib::Error_Ref error, const gi::cstring_v source_str) noexcept;

// GQuark g_variant_parse_error_quark ();
// ::GQuark g_variant_parse_error_quark ();
static GI_INLINE_DECL GLib::Quark parse_error_quark () noexcept;

// GQuark g_variant_parser_get_error_quark ();
// ::GQuark g_variant_parser_get_error_quark ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variant_extra_def.hpp>)
#include <glib/variant_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variant_extra.hpp>)
#include <glib/variant_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Variant : public GI_GLIB_VARIANT_BASE
{ typedef GI_GLIB_VARIANT_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariant>
{ typedef GLib::Variant type; }; 

} // namespace repository

} // namespace gi

#endif
