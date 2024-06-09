// AUTO-GENERATED

#ifndef _GI_GLIB__FUNCTIONS_HPP_
#define _GI_GLIB__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace UnicodeScriptNS_ {

// GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
// ::GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
GI_INLINE_DECL GLib::UnicodeScript from_iso15924 (guint32 iso15924) noexcept;

// guint32 g_unicode_script_to_iso15924 (GUnicodeScript script);
// guint32 g_unicode_script_to_iso15924 (::GUnicodeScript script);
GI_INLINE_DECL guint32 to_iso15924 (GLib::UnicodeScript script) noexcept;

} // namespace UnicodeScriptNS_

// int g_access (const gchar* filename /*none*/, int mode);
// gint g_access (const char* filename /*none*/, gint mode);
GI_INLINE_DECL gint access (const gi::cstring_v filename, gint mode) noexcept;

// gpointer g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
GI_INLINE_DECL gpointer aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept;

// gpointer g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
GI_INLINE_DECL gpointer aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept;

// void g_aligned_free_sized (gpointer mem, size_t alignment, size_t size);
// void g_aligned_free_sized (void* mem, gsize alignment, gsize size);
GI_INLINE_DECL void aligned_free_sized (void* mem, gsize alignment, gsize size) noexcept;

// gint g_ascii_digit_value (gchar c);
// gint g_ascii_digit_value (gchar c);
GI_INLINE_DECL gint ascii_digit_value (gchar c) noexcept;

// gchar* /*full*/ g_ascii_dtostr (gchar* buffer /*none*/, gint buf_len, gdouble d);
// char* /*full*/ g_ascii_dtostr (char* buffer /*none*/, gint buf_len, gdouble d);
GI_INLINE_DECL gi::cstring ascii_dtostr (gi::cstring_v buffer, gint buf_len, gdouble d) noexcept;

// gchar* /*full*/ g_ascii_formatd (gchar* buffer /*none*/, gint buf_len, const gchar* format /*none*/, gdouble d);
// char* /*full*/ g_ascii_formatd (char* buffer /*none*/, gint buf_len, const char* format /*none*/, gdouble d);
GI_INLINE_DECL gi::cstring ascii_formatd (gi::cstring_v buffer, gint buf_len, const gi::cstring_v format, gdouble d) noexcept;

// gint g_ascii_strcasecmp (const gchar* s1 /*none*/, const gchar* s2 /*none*/);
// gint g_ascii_strcasecmp (const char* s1 /*none*/, const char* s2 /*none*/);
GI_INLINE_DECL gint ascii_strcasecmp (const gi::cstring_v s1, const gi::cstring_v s2) noexcept;

// gchar* /*full*/ g_ascii_strdown (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_ascii_strdown (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring ascii_strdown (const gi::cstring_v str, gssize len) noexcept;

// gboolean g_ascii_string_to_signed (const gchar* str /*none*/, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
// gboolean g_ascii_string_to_signed (const char* str /*none*/, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
GI_INLINE_DECL bool ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, gint64 * out_num);
GI_INLINE_DECL bool ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, gint64 * out_num, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max);
GI_INLINE_DECL std::tuple<bool, gint64> ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, GLib::Error * _error) noexcept;

// gboolean g_ascii_string_to_unsigned (const gchar* str /*none*/, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
// gboolean g_ascii_string_to_unsigned (const char* str /*none*/, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
GI_INLINE_DECL bool ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, guint64 * out_num);
GI_INLINE_DECL bool ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, guint64 * out_num, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max);
GI_INLINE_DECL std::tuple<bool, guint64> ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, GLib::Error * _error) noexcept;

// gint g_ascii_strncasecmp (const gchar* s1 /*none*/, const gchar* s2 /*none*/, gsize n);
// gint g_ascii_strncasecmp (const char* s1 /*none*/, const char* s2 /*none*/, gsize n);
GI_INLINE_DECL gint ascii_strncasecmp (const gi::cstring_v s1, const gi::cstring_v s2, gsize n) noexcept;

// gdouble g_ascii_strtod (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/);
// gdouble g_ascii_strtod (const char* nptr /*none*/, char** endptr /*none,out,opt*/);
GI_INLINE_DECL gdouble ascii_strtod (const gi::cstring_v nptr, gi::cstring_v * endptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gi::cstring_v> ascii_strtod (const gi::cstring_v nptr) noexcept;

// gint64 g_ascii_strtoll (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/, guint base);
// gint64 g_ascii_strtoll (const char* nptr /*none*/, char** endptr /*none,out,opt*/, guint base);
GI_INLINE_DECL gint64 ascii_strtoll (const gi::cstring_v nptr, gi::cstring_v * endptr, guint base) noexcept;
GI_INLINE_DECL std::tuple<gint64, gi::cstring_v> ascii_strtoll (const gi::cstring_v nptr, guint base) noexcept;

// guint64 g_ascii_strtoull (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/, guint base);
// guint64 g_ascii_strtoull (const char* nptr /*none*/, char** endptr /*none,out,opt*/, guint base);
GI_INLINE_DECL guint64 ascii_strtoull (const gi::cstring_v nptr, gi::cstring_v * endptr, guint base) noexcept;
GI_INLINE_DECL std::tuple<guint64, gi::cstring_v> ascii_strtoull (const gi::cstring_v nptr, guint base) noexcept;

// gchar* /*full*/ g_ascii_strup (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_ascii_strup (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring ascii_strup (const gi::cstring_v str, gssize len) noexcept;

// gchar g_ascii_tolower (gchar c);
// gchar g_ascii_tolower (gchar c);
GI_INLINE_DECL gchar ascii_tolower (gchar c) noexcept;

// gchar g_ascii_toupper (gchar c);
// gchar g_ascii_toupper (gchar c);
GI_INLINE_DECL gchar ascii_toupper (gchar c) noexcept;

// gint g_ascii_xdigit_value (gchar c);
// gint g_ascii_xdigit_value (gchar c);
GI_INLINE_DECL gint ascii_xdigit_value (gchar c) noexcept;

// void g_assert_warning (const char* log_domain /*none*/, const char* file /*none*/, const int line, const char* pretty_function /*none*/, const char* expression /*none*/);
// void g_assert_warning (const char* log_domain /*none*/, const char* file /*none*/, const gint line, const char* pretty_function /*none*/, const char* expression /*none*/);
// IGNORE; marked ignore

// void g_assertion_message (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* message /*none*/);
// void g_assertion_message (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* message /*none*/);
GI_INLINE_DECL void assertion_message (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v message) noexcept;

// void g_assertion_message_cmpint (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, guint64 arg1, const char* cmp /*none*/, guint64 arg2, char numtype);
// void g_assertion_message_cmpint (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, guint64 arg1, const char* cmp /*none*/, guint64 arg2, gchar numtype);
GI_INLINE_DECL void assertion_message_cmpint (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, guint64 arg1, const gi::cstring_v cmp, guint64 arg2, gchar numtype) noexcept;

// void g_assertion_message_cmpnum (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, long double arg1 /*none*/, const char* cmp /*none*/, long double arg2 /*none*/, char numtype);
// void g_assertion_message_cmpnum (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/,  arg1 /*none*/, const char* cmp /*none*/,  arg2 /*none*/, gchar numtype);
// IGNORE; not introspectable, arg2 type  not supported, arg1 type  not supported

// void g_assertion_message_cmpstr (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* cmp /*none*/, const char* arg2 /*none*/);
// void g_assertion_message_cmpstr (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* cmp /*none*/, const char* arg2 /*none*/);
GI_INLINE_DECL void assertion_message_cmpstr (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, const gi::cstring_v arg1, const gi::cstring_v cmp, const gi::cstring_v arg2) noexcept;

// void g_assertion_message_cmpstrv (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const char* const* arg1 /*none*/, const char* const* arg2 /*none*/, gsize first_wrong_idx);
// void g_assertion_message_cmpstrv (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* arg2 /*none*/, gsize first_wrong_idx);
// SKIP; inconsistent arg2 in pointer depth (2 vs 1), inconsistent arg1 in pointer depth (2 vs 1)

// void g_assertion_message_error (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const GError* error /*none*/, GQuark error_domain, int error_code);
// void g_assertion_message_error (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const ::GError* error /*none*/, ::GQuark error_domain, gint error_code);
GI_INLINE_DECL void assertion_message_error (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, const GLib::Error_Ref error, ::GQuark error_domain, gint error_code) noexcept;

// void g_assertion_message_expr (const char* domain /*none,nullable*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none,nullable*/);
// void g_assertion_message_expr (const char* domain /*none,nullable*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none,nullable*/);
GI_INLINE_DECL void assertion_message_expr (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr) noexcept;
GI_INLINE_DECL void assertion_message_expr (const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept;

// gint g_atomic_int_add (volatile gint* atomic, gint val);
// gint g_atomic_int_add (gint atomic, gint val);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// guint g_atomic_int_and (volatile guint* atomic, guint val);
// guint g_atomic_int_and (guint atomic, guint val);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gboolean g_atomic_int_compare_and_exchange (volatile gint* atomic, gint oldval, gint newval);
// gboolean g_atomic_int_compare_and_exchange (gint atomic, gint oldval, gint newval);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gboolean g_atomic_int_compare_and_exchange_full (gint* atomic, gint oldval, gint newval, gint* preval);
// gboolean g_atomic_int_compare_and_exchange_full (gint atomic, gint oldval, gint newval, gint* preval);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gboolean g_atomic_int_dec_and_test (volatile gint* atomic);
// gboolean g_atomic_int_dec_and_test (gint atomic);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gint g_atomic_int_exchange (gint* atomic, gint newval);
// gint g_atomic_int_exchange (gint atomic, gint newval);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gint g_atomic_int_get (volatile const gint* atomic);
// gint g_atomic_int_get (const gint atomic);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// void g_atomic_int_inc (volatile gint* atomic);
// void g_atomic_int_inc (gint atomic);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// guint g_atomic_int_or (volatile guint* atomic, guint val);
// guint g_atomic_int_or (guint atomic, guint val);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// void g_atomic_int_set (volatile gint* atomic, gint newval);
// void g_atomic_int_set (gint atomic, gint newval);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// guint g_atomic_int_xor (volatile guint* atomic, guint val);
// guint g_atomic_int_xor (guint atomic, guint val);
// SKIP; inconsistent atomic in pointer depth (1 vs 0)

// gintptr g_atomic_pointer_add (void* atomic, gssize val);
// gintptr g_atomic_pointer_add (void* atomic, gssize val);
GI_INLINE_DECL gintptr atomic_pointer_add (void* atomic, gssize val) noexcept;

// guintptr g_atomic_pointer_and (void* atomic, gsize val);
// guintptr g_atomic_pointer_and (void* atomic, gsize val);
GI_INLINE_DECL guintptr atomic_pointer_and (void* atomic, gsize val) noexcept;

// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, gpointer oldval, gpointer newval);
// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval);
GI_INLINE_DECL bool atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval) noexcept;

// gboolean g_atomic_pointer_compare_and_exchange_full (void* atomic, gpointer oldval, gpointer newval, void* preval);
// gboolean g_atomic_pointer_compare_and_exchange_full (void* atomic, void* oldval, void* newval, void** preval);
// SKIP; inconsistent preval out pointer depth (1 vs 2)

// gpointer g_atomic_pointer_exchange (void* atomic, gpointer newval);
// void* g_atomic_pointer_exchange (void* atomic, void* newval);
GI_INLINE_DECL gpointer atomic_pointer_exchange (void* atomic, void* newval) noexcept;

// gpointer g_atomic_pointer_get (void* atomic);
// void* g_atomic_pointer_get (void* atomic);
GI_INLINE_DECL gpointer atomic_pointer_get (void* atomic) noexcept;

// guintptr g_atomic_pointer_or (void* atomic, gsize val);
// guintptr g_atomic_pointer_or (void* atomic, gsize val);
GI_INLINE_DECL guintptr atomic_pointer_or (void* atomic, gsize val) noexcept;

// void g_atomic_pointer_set (void* atomic, gpointer newval);
// void g_atomic_pointer_set (void* atomic, void* newval);
GI_INLINE_DECL void atomic_pointer_set (void* atomic, void* newval) noexcept;

// guintptr g_atomic_pointer_xor (void* atomic, gsize val);
// guintptr g_atomic_pointer_xor (void* atomic, gsize val);
GI_INLINE_DECL guintptr atomic_pointer_xor (void* atomic, gsize val) noexcept;

// gpointer g_atomic_rc_box_acquire (gpointer mem_block);
// void* g_atomic_rc_box_acquire (void* mem_block);
GI_INLINE_DECL gpointer atomic_rc_box_acquire (void* mem_block) noexcept;

// gpointer g_atomic_rc_box_alloc (gsize block_size);
// void* g_atomic_rc_box_alloc (gsize block_size);
GI_INLINE_DECL gpointer atomic_rc_box_alloc (gsize block_size) noexcept;

// gpointer g_atomic_rc_box_alloc0 (gsize block_size);
// void* g_atomic_rc_box_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer atomic_rc_box_alloc0 (gsize block_size) noexcept;

// gpointer g_atomic_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_atomic_rc_box_dup (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer atomic_rc_box_dup (gsize block_size, const void* mem_block) noexcept;

// gsize g_atomic_rc_box_get_size (gpointer mem_block);
// gsize g_atomic_rc_box_get_size (void* mem_block);
GI_INLINE_DECL gsize atomic_rc_box_get_size (void* mem_block) noexcept;

// void g_atomic_rc_box_release (gpointer mem_block);
// void g_atomic_rc_box_release (void* mem_block);
GI_INLINE_DECL void atomic_rc_box_release (void* mem_block) noexcept;

// void g_atomic_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func /*none*/);
// void g_atomic_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func /*none*/);
// SKIP; callback misses closure info

// gboolean g_atomic_ref_count_compare (gatomicrefcount* arc, gint val);
// gboolean g_atomic_ref_count_compare (gint arc, gint val);
// SKIP; inconsistent arc in pointer depth (1 vs 0)

// gboolean g_atomic_ref_count_dec (gatomicrefcount* arc);
// gboolean g_atomic_ref_count_dec (gint arc);
// SKIP; inconsistent arc in pointer depth (1 vs 0)

// void g_atomic_ref_count_inc (gatomicrefcount* arc);
// void g_atomic_ref_count_inc (gint arc);
// SKIP; inconsistent arc in pointer depth (1 vs 0)

// void g_atomic_ref_count_init (gatomicrefcount* arc);
// void g_atomic_ref_count_init (gint arc);
// SKIP; inconsistent arc in pointer depth (1 vs 0)

// guchar* /*full*/ g_base64_decode (const gchar* text /*none*/, gsize* out_len);
// guint8* /*full*/ g_base64_decode (const char* text /*none*/, gsize* out_len);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base64_decode (const gi::cstring_v text) noexcept;

// guchar* g_base64_decode_inplace (gchar* text /*full,inout*/, gsize* out_len);
// guint8 g_base64_decode_inplace (guint8** text /*full,inout*/, gsize* out_len);
// SKIP; inconsistent text inout pointer depth (1 vs 2), inconsistent  return pointer depth (1 vs 0)

// gsize g_base64_decode_step (const gchar* in /*none*/, gsize len,  out /*none,out,ca*/, gint* state, guint* save);
// gsize g_base64_decode_step (const guint8* in /*none*/, gsize len, * out /*none,out,ca*/, gint* state, guint* save);
// IGNORE; not introspectable, inconsistent array info

// gchar* /*full*/ g_base64_encode (const guchar* data /*none,nullable*/, gsize len);
// char* /*full*/ g_base64_encode (const guint8* data /*none,nullable*/, gsize len);
GI_INLINE_DECL gi::cstring base64_encode (const guint8 * data, gsize len) noexcept;

// gsize g_base64_encode_close (gboolean break_lines,  out /*full,out*/, gint* state, gint* save);
// gsize g_base64_encode_close (gboolean break_lines, ** out /*full,out*/, gint* state, gint* save);
// SKIP; inconsistent array info

// gsize g_base64_encode_step (const guchar* in /*none*/, gsize len, gboolean break_lines,  out /*full,out*/, gint* state, gint* save);
// gsize g_base64_encode_step (const guint8* in /*none*/, gsize len, gboolean break_lines, ** out /*full,out*/, gint* state, gint* save);
// SKIP; inconsistent array info

// void g_bit_lock (volatile gint* address, gint lock_bit);
// void g_bit_lock (gint address, gint lock_bit);
// SKIP; inconsistent address in pointer depth (1 vs 0)

// gint g_bit_nth_lsf (gulong mask, gint nth_bit);
// gint g_bit_nth_lsf (gulong mask, gint nth_bit);
GI_INLINE_DECL gint bit_nth_lsf (gulong mask, gint nth_bit) noexcept;

// gint g_bit_nth_msf (gulong mask, gint nth_bit);
// gint g_bit_nth_msf (gulong mask, gint nth_bit);
GI_INLINE_DECL gint bit_nth_msf (gulong mask, gint nth_bit) noexcept;

// guint g_bit_storage (gulong number);
// guint g_bit_storage (gulong number);
GI_INLINE_DECL guint bit_storage (gulong number) noexcept;

// gboolean g_bit_trylock (volatile gint* address, gint lock_bit);
// gboolean g_bit_trylock (gint address, gint lock_bit);
// SKIP; inconsistent address in pointer depth (1 vs 0)

// void g_bit_unlock (volatile gint* address, gint lock_bit);
// void g_bit_unlock (gint address, gint lock_bit);
// SKIP; inconsistent address in pointer depth (1 vs 0)

// void g_blow_chunks ();
// void g_blow_chunks ();
GI_INLINE_DECL void blow_chunks () noexcept;

// gchar* /*full*/ g_build_filename (const gchar* first_element /*none*/,  ..._ /*none*/);
// char* /*full*/ g_build_filename (const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_build_filename_valist (const gchar* first_element /*none*/, va_list* args /*none*/);
// char* /*full*/ g_build_filename_valist (const char* first_element /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gchar* /*full*/ g_build_filenamev (gchar** args /*none*/);
// char* /*full*/ g_build_filenamev (char** args /*none*/);
GI_INLINE_DECL gi::cstring build_filenamev (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept;

// gchar* /*full*/ g_build_path (const gchar* separator /*none*/, const gchar* first_element /*none*/,  ..._ /*none*/);
// char* /*full*/ g_build_path (const char* separator /*none*/, const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_build_pathv (const gchar* separator /*none*/, gchar** args /*none*/);
// char* /*full*/ g_build_pathv (const char* separator /*none*/, char** args /*none*/);
GI_INLINE_DECL gi::cstring build_pathv (const gi::cstring_v separator, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept;

// gchar* /*full*/ g_canonicalize_filename (const gchar* filename /*none*/, const gchar* relative_to /*none,nullable*/);
// char* /*full*/ g_canonicalize_filename (const char* filename /*none*/, const char* relative_to /*none,nullable*/);
GI_INLINE_DECL gi::cstring canonicalize_filename (const gi::cstring_v filename, const gi::cstring_v relative_to) noexcept;
GI_INLINE_DECL gi::cstring canonicalize_filename (const gi::cstring_v filename) noexcept;

// int g_chdir (const gchar* path /*none*/);
// gint g_chdir (const char* path /*none*/);
GI_INLINE_DECL gint chdir (const gi::cstring_v path) noexcept;

// const gchar* /*none,nullable*/ glib_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* /*none,nullable*/ glib_check_version (guint required_major, guint required_minor, guint required_micro);
GI_INLINE_DECL gi::cstring_v check_version (guint required_major, guint required_minor, guint required_micro) noexcept;

// guint g_child_watch_add (GPid pid, GChildWatchFunc function /*none*/, gpointer data);
// guint g_child_watch_add (::GPid pid, GLib::ChildWatchFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by child_watch_add_full

// guint g_child_watch_add_full (gint priority, GPid pid, GChildWatchFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_child_watch_add_full (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
GI_INLINE_DECL guint child_watch_add (gint priority, ::GPid pid, GLib::ChildWatchFunc function) noexcept;

// GSource* /*full*/ g_child_watch_source_new (GPid pid);
// ::GSource* /*full*/ g_child_watch_source_new (::GPid pid);
GI_INLINE_DECL GLib::Source child_watch_source_new (::GPid pid) noexcept;

// int g_chmod (const gchar* filename /*none*/, int mode);
// gint g_chmod (const char* filename /*none*/, gint mode);
GI_INLINE_DECL gint chmod (const gi::cstring_v filename, gint mode) noexcept;

// void g_clear_error (GError ** error);
// void g_clear_error (GError ** error);
GI_INLINE_DECL void clear_error ();
GI_INLINE_DECL void clear_error (GLib::Error * _error) noexcept;

// void g_clear_handle_id (guint* tag_ptr, GClearHandleFunc clear_func /*none*/);
// void g_clear_handle_id (guint tag_ptr,  clear_func /*none*/);
// IGNORE; not introspectable, clear_func type  not supported, inconsistent tag_ptr in pointer depth (1 vs 0)

// void g_clear_list (GList** list_ptr /*none*/, GDestroyNotify destroy /*none,nullable*/);
// void g_clear_list (::GList* list_ptr /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// IGNORE; not introspectable, callback misses closure info, inconsistent list_ptr in pointer depth (2 vs 1)

// void g_clear_pointer (gpointer* pp, GDestroyNotify destroy /*none*/);
// void g_clear_pointer (void** pp, GLib::DestroyNotify::cfunction_type destroy /*none*/);
// IGNORE; not introspectable, callback misses closure info

// void g_clear_slist (GSList** slist_ptr /*none*/, GDestroyNotify destroy /*none,nullable*/);
// void g_clear_slist (::GSList* slist_ptr /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// IGNORE; not introspectable, callback misses closure info, inconsistent slist_ptr in pointer depth (2 vs 1)

// gboolean g_close (gint fd, GError ** error);
// gboolean g_close (gint fd, GError ** error);
GI_INLINE_DECL bool close (gint fd);
GI_INLINE_DECL bool close (gint fd, GLib::Error * _error) noexcept;

// gchar* /*full,nullable*/ g_compute_checksum_for_bytes (GChecksumType checksum_type, GBytes* data /*none*/);
// char* /*full,nullable*/ g_compute_checksum_for_bytes (::GChecksumType checksum_type, ::GBytes* data /*none*/);
GI_INLINE_DECL gi::cstring compute_checksum_for_bytes (GLib::ChecksumType checksum_type, GLib::Bytes_Ref data) noexcept;

// gchar* /*full,nullable*/ g_compute_checksum_for_data (GChecksumType checksum_type, const guchar* data /*none*/, gsize length);
// char* /*full,nullable*/ g_compute_checksum_for_data (::GChecksumType checksum_type, const guint8* data /*none*/, gsize length);
GI_INLINE_DECL gi::cstring compute_checksum_for_data (GLib::ChecksumType checksum_type, const guint8 * data, gsize length) noexcept;

// gchar* /*full,nullable*/ g_compute_checksum_for_string (GChecksumType checksum_type, const gchar* str /*none*/, gssize length);
// char* /*full,nullable*/ g_compute_checksum_for_string (::GChecksumType checksum_type, const char* str /*none*/, gssize length);
GI_INLINE_DECL gi::cstring compute_checksum_for_string (GLib::ChecksumType checksum_type, const gi::cstring_v str, gssize length) noexcept;

// gchar* /*full*/ g_compute_hmac_for_bytes (GChecksumType digest_type, GBytes* key /*none*/, GBytes* data /*none*/);
// char* /*full*/ g_compute_hmac_for_bytes (::GChecksumType digest_type, ::GBytes* key /*none*/, ::GBytes* data /*none*/);
GI_INLINE_DECL gi::cstring compute_hmac_for_bytes (GLib::ChecksumType digest_type, GLib::Bytes_Ref key, GLib::Bytes_Ref data) noexcept;

// gchar* /*full*/ g_compute_hmac_for_data (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len, const guchar* data /*none*/, gsize length);
// char* /*full*/ g_compute_hmac_for_data (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len, const guint8* data /*none*/, gsize length);
GI_INLINE_DECL gi::cstring compute_hmac_for_data (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len, const guint8 * data, gsize length) noexcept;

// gchar* /*full*/ g_compute_hmac_for_string (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len, const gchar* str /*none*/, gssize length);
// char* /*full*/ g_compute_hmac_for_string (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len, const char* str /*none*/, gssize length);
GI_INLINE_DECL gi::cstring compute_hmac_for_string (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len, const gi::cstring_v str, gssize length) noexcept;

// gchar* /*full*/ g_convert (const gchar* str /*none*/, gssize len, const gchar* to_codeset /*none*/, const gchar* from_codeset /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert (const guint8* str /*none*/, gssize len, const char* to_codeset /*none*/, const char* from_codeset /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, gsize * bytes_read);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset);
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, GLib::Error * _error) noexcept;

// GQuark g_convert_error_quark ();
// ::GQuark g_convert_error_quark ();
GI_INLINE_DECL GLib::Quark convert_error_quark () noexcept;

// gchar* /*full*/ g_convert_with_fallback (const gchar* str /*none*/, gssize len, const gchar* to_codeset /*none*/, const gchar* from_codeset /*none*/, const gchar* fallback /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert_with_fallback (const guint8* str /*none*/, gssize len, const char* to_codeset /*none*/, const char* from_codeset /*none*/, const char* fallback /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, gsize * bytes_read);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback);
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_convert_with_iconv (const gchar* str /*none*/, gssize len, GIConv converter /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert_with_iconv (const guint8* str /*none*/, gssize len,  converter /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// IGNORE; not introspectable, converter type  not supported

// int g_creat (const gchar* filename /*none*/, int mode);
// gint g_creat (const char* filename /*none*/, gint mode);
GI_INLINE_DECL gint creat (const gi::cstring_v filename, gint mode) noexcept;

// void g_datalist_clear (GData** datalist /*none*/);
// void g_datalist_clear ( datalist /*none*/);
// IGNORE; not introspectable, datalist type  not supported

// void g_datalist_foreach (GData** datalist /*none*/, GDataForeachFunc func /*none*/, gpointer user_data);
// void g_datalist_foreach ( datalist /*none*/, GLib::DataForeachFunc::cfunction_type func /*none*/, void* user_data);
// SKIP; datalist type  not supported

// gpointer g_datalist_get_data (GData** datalist /*none*/, const gchar* key /*none*/);
// void* g_datalist_get_data ( datalist /*none*/, const char* key /*none*/);
// SKIP; datalist type  not supported

// guint g_datalist_get_flags (GData** datalist /*none*/);
// guint g_datalist_get_flags ( datalist /*none*/);
// SKIP; datalist type  not supported

// gpointer g_datalist_id_dup_data (GData** datalist /*none*/, GQuark key_id, GDuplicateFunc dup_func /*none,nullable*/, gpointer user_data);
// void* g_datalist_id_dup_data ( datalist /*none*/, ::GQuark key_id, GLib::DuplicateFunc::cfunction_type dup_func /*none,nullable*/, void* user_data);
// IGNORE; not introspectable, datalist type  not supported

// gpointer g_datalist_id_get_data (GData** datalist /*none*/, GQuark key_id);
// void* g_datalist_id_get_data ( datalist /*none*/, ::GQuark key_id);
// SKIP; datalist type  not supported

// void g_datalist_id_remove_multiple (GData** datalist /*none*/, GQuark* keys /*none*/, gsize n_keys);
// void g_datalist_id_remove_multiple ( datalist /*none*/, ::GQuark* keys /*none*/, gsize n_keys);
// SKIP; datalist type  not supported

// gpointer g_datalist_id_remove_no_notify (GData** datalist /*none*/, GQuark key_id);
// void* g_datalist_id_remove_no_notify ( datalist /*none*/, ::GQuark key_id);
// IGNORE; not introspectable, datalist type  not supported

// gboolean g_datalist_id_replace_data (GData** datalist /*none*/, GQuark key_id, gpointer oldval, gpointer newval, GDestroyNotify destroy /*none,nullable*/, GDestroyNotify* old_destroy /*none,out,opt*/);
// gboolean g_datalist_id_replace_data ( datalist /*none*/, ::GQuark key_id, void* oldval, void* newval, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/, GLib::DestroyNotify::cfunction_type old_destroy /*none,out,opt*/);
// IGNORE; not introspectable, function out callback parameter not supported

// void g_datalist_id_set_data_full (GData** datalist /*none*/, GQuark key_id, gpointer data, GDestroyNotify destroy_func /*none,nullable*/);
// void g_datalist_id_set_data_full ( datalist /*none*/, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func /*none,nullable*/);
// IGNORE; not introspectable, callback misses closure info, datalist type  not supported

// void g_datalist_init (GData** datalist /*none*/);
// void g_datalist_init ( datalist /*none*/);
// IGNORE; not introspectable, datalist type  not supported

// void g_datalist_set_flags (GData** datalist /*none*/, guint flags);
// void g_datalist_set_flags ( datalist /*none*/, guint flags);
// SKIP; datalist type  not supported

// void g_datalist_unset_flags (GData** datalist /*none*/, guint flags);
// void g_datalist_unset_flags ( datalist /*none*/, guint flags);
// SKIP; datalist type  not supported

// void g_dataset_destroy (gconstpointer dataset_location);
// void g_dataset_destroy (const void* dataset_location);
GI_INLINE_DECL void dataset_destroy (const void* dataset_location) noexcept;

// void g_dataset_foreach (gconstpointer dataset_location, GDataForeachFunc func /*none*/, gpointer user_data);
// void g_dataset_foreach (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL void dataset_foreach (const void* dataset_location, GLib::DataForeachFunc func) noexcept;

// gpointer g_dataset_id_get_data (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_get_data (const void* dataset_location, ::GQuark key_id);
GI_INLINE_DECL gpointer dataset_id_get_data (const void* dataset_location, ::GQuark key_id) noexcept;

// gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id);
GI_INLINE_DECL gpointer dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id) noexcept;

// void g_dataset_id_set_data_full (gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func /*none*/);
// void g_dataset_id_set_data_full (const void* dataset_location, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func /*none*/);
// IGNORE; not introspectable, callback misses closure info

// const gchar* /*none*/ g_dcgettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/, gint category);
// const char* /*none*/ g_dcgettext (const char* domain /*none,nullable*/, const char* msgid /*none*/, gint category);
GI_INLINE_DECL gi::cstring_v dcgettext (const gi::cstring_v domain, const gi::cstring_v msgid, gint category) noexcept;
GI_INLINE_DECL gi::cstring_v dcgettext (const gi::cstring_v msgid, gint category) noexcept;

// const gchar* /*none*/ g_dgettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/);
// const char* /*none*/ g_dgettext (const char* domain /*none,nullable*/, const char* msgid /*none*/);
GI_INLINE_DECL gi::cstring_v dgettext (const gi::cstring_v domain, const gi::cstring_v msgid) noexcept;
GI_INLINE_DECL gi::cstring_v dgettext (const gi::cstring_v msgid) noexcept;

// gboolean g_direct_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_direct_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool direct_equal (const void* v1, const void* v2) noexcept;

// guint g_direct_hash (gconstpointer v);
// guint g_direct_hash (const void* v);
GI_INLINE_DECL guint direct_hash (const void* v) noexcept;

// const gchar* /*none*/ g_dngettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/, const gchar* msgid_plural /*none*/, gulong n);
// const char* /*none*/ g_dngettext (const char* domain /*none,nullable*/, const char* msgid /*none*/, const char* msgid_plural /*none*/, gulong n);
GI_INLINE_DECL gi::cstring_v dngettext (const gi::cstring_v domain, const gi::cstring_v msgid, const gi::cstring_v msgid_plural, gulong n) noexcept;
GI_INLINE_DECL gi::cstring_v dngettext (const gi::cstring_v msgid, const gi::cstring_v msgid_plural, gulong n) noexcept;

// gboolean g_double_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_double_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool double_equal (const void* v1, const void* v2) noexcept;

// guint g_double_hash (gconstpointer v);
// guint g_double_hash (const void* v);
GI_INLINE_DECL guint double_hash (const void* v) noexcept;

// const gchar* /*none*/ g_dpgettext (const gchar* domain /*none,nullable*/, const gchar* msgctxtid /*none*/, gsize msgidoffset);
// const char* /*none*/ g_dpgettext (const char* domain /*none,nullable*/, const char* msgctxtid /*none*/, gsize msgidoffset);
GI_INLINE_DECL gi::cstring_v dpgettext (const gi::cstring_v domain, const gi::cstring_v msgctxtid, gsize msgidoffset) noexcept;
GI_INLINE_DECL gi::cstring_v dpgettext (const gi::cstring_v msgctxtid, gsize msgidoffset) noexcept;

// const gchar* /*none*/ g_dpgettext2 (const gchar* domain /*none,nullable*/, const gchar* context /*none*/, const gchar* msgid /*none*/);
// const char* /*none*/ g_dpgettext2 (const char* domain /*none,nullable*/, const char* context /*none*/, const char* msgid /*none*/);
GI_INLINE_DECL gi::cstring_v dpgettext2 (const gi::cstring_v domain, const gi::cstring_v context, const gi::cstring_v msgid) noexcept;
GI_INLINE_DECL gi::cstring_v dpgettext2 (const gi::cstring_v context, const gi::cstring_v msgid) noexcept;

// const gchar* /*none,nullable*/ g_environ_getenv (gchar** envp /*none,nullable*/, const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_environ_getenv (char** envp /*none,nullable*/, const char* variable /*none*/);
GI_INLINE_DECL gi::cstring_v environ_getenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, const gi::cstring_v variable) noexcept;

// gchar** /*full*/ g_environ_setenv (gchar** envp /*full,nullable*/, const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// char** /*full*/ g_environ_setenv (char** envp /*full,nullable*/, const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> environ_setenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_full_t> envp, const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept;

// gchar** /*full*/ g_environ_unsetenv (gchar** envp /*full,nullable*/, const gchar* variable /*none*/);
// char** /*full*/ g_environ_unsetenv (char** envp /*full,nullable*/, const char* variable /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> environ_unsetenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_full_t> envp, const gi::cstring_v variable) noexcept;

// GFileError g_file_error_from_errno (gint err_no);
// ::GFileError g_file_error_from_errno (gint err_no);
GI_INLINE_DECL GLib::FileError file_error_from_errno (gint err_no) noexcept;

// GQuark g_file_error_quark ();
// ::GQuark g_file_error_quark ();
GI_INLINE_DECL GLib::Quark file_error_quark () noexcept;

// gboolean g_file_get_contents (const gchar* filename /*none*/, gchar** contents /*full,out*/, gsize* length, GError ** error);
// gboolean g_file_get_contents (const char* filename /*none*/, guint8** contents /*full,out*/, gsize* length, GError ** error);
GI_INLINE_DECL bool file_get_contents (const gi::cstring_v filename, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents);
GI_INLINE_DECL bool file_get_contents (const gi::cstring_v filename, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> file_get_contents (const gi::cstring_v filename);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> file_get_contents (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gint g_file_open_tmp (const gchar* tmpl /*none,nullable*/, gchar** name_used /*full,out*/, GError ** error);
// gint g_file_open_tmp (const char* tmpl /*none,nullable*/, char** name_used /*full,out*/, GError ** error);
GI_INLINE_DECL gint file_open_tmp (const gi::cstring_v tmpl, gi::cstring & name_used);
GI_INLINE_DECL gint file_open_tmp (gi::cstring & name_used);
GI_INLINE_DECL gint file_open_tmp (const gi::cstring_v tmpl, gi::cstring & name_used, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint file_open_tmp (gi::cstring & name_used, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gint, gi::cstring> file_open_tmp (const gi::cstring_v tmpl);
GI_INLINE_DECL std::tuple<gint, gi::cstring> file_open_tmp ();
GI_INLINE_DECL std::tuple<gint, gi::cstring> file_open_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gint, gi::cstring> file_open_tmp (GLib::Error * _error) noexcept;

// gchar* /*full*/ g_file_read_link (const gchar* filename /*none*/, GError ** error);
// char* /*full*/ g_file_read_link (const char* filename /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring file_read_link (const gi::cstring_v filename);
GI_INLINE_DECL gi::cstring file_read_link (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gboolean g_file_set_contents (const gchar* filename /*none*/, const gchar* contents /*none*/, gssize length, GError ** error);
// gboolean g_file_set_contents (const char* filename /*none*/, const guint8* contents /*none*/, gssize length, GError ** error);
GI_INLINE_DECL bool file_set_contents (const gi::cstring_v filename, const guint8 * contents, gssize length);
GI_INLINE_DECL bool file_set_contents (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::Error * _error) noexcept;

// gboolean g_file_set_contents_full (const gchar* filename /*none*/, const gchar* contents /*none*/, gssize length, GFileSetContentsFlags flags, int mode, GError ** error);
// gboolean g_file_set_contents_full (const char* filename /*none*/, const guint8* contents /*none*/, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
GI_INLINE_DECL bool file_set_contents_full (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode);
GI_INLINE_DECL bool file_set_contents_full (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode, GLib::Error * _error) noexcept;

// gboolean g_file_test (const gchar* filename /*none*/, GFileTest test);
// gboolean g_file_test (const char* filename /*none*/, ::GFileTest test);
GI_INLINE_DECL bool file_test (const gi::cstring_v filename, GLib::FileTest test) noexcept;

// gchar* /*full*/ g_filename_display_basename (const gchar* filename /*none*/);
// char* /*full*/ g_filename_display_basename (const char* filename /*none*/);
GI_INLINE_DECL gi::cstring filename_display_basename (const gi::cstring_v filename) noexcept;

// gchar* /*full*/ g_filename_display_name (const gchar* filename /*none*/);
// char* /*full*/ g_filename_display_name (const char* filename /*none*/);
GI_INLINE_DECL gi::cstring filename_display_name (const gi::cstring_v filename) noexcept;

// gchar* /*full*/ g_filename_from_uri (const gchar* uri /*none*/, gchar** hostname /*full,out,opt,nullable*/, GError ** error);
// char* /*full*/ g_filename_from_uri (const char* uri /*none*/, char** hostname /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring filename_from_uri (const gi::cstring_v uri, gi::cstring * hostname);
GI_INLINE_DECL gi::cstring filename_from_uri (const gi::cstring_v uri, gi::cstring * hostname, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gi::cstring> filename_from_uri (const gi::cstring_v uri);
GI_INLINE_DECL std::tuple<gi::cstring, gi::cstring> filename_from_uri (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_filename_from_utf8 (const gchar* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_filename_from_utf8 (const char* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::cstring filename_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, gsize * bytes_written);
GI_INLINE_DECL gi::cstring filename_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> filename_from_utf8 (const gi::cstring_v utf8string, gssize len);
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> filename_from_utf8 (const gi::cstring_v utf8string, gssize len, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_filename_to_uri (const gchar* filename /*none*/, const gchar* hostname /*none,nullable*/, GError ** error);
// char* /*full*/ g_filename_to_uri (const char* filename /*none*/, const char* hostname /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring filename_to_uri (const gi::cstring_v filename, const gi::cstring_v hostname);
GI_INLINE_DECL gi::cstring filename_to_uri (const gi::cstring_v filename);
GI_INLINE_DECL gi::cstring filename_to_uri (const gi::cstring_v filename, const gi::cstring_v hostname, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring filename_to_uri (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_filename_to_utf8 (const gchar* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_filename_to_utf8 (const char* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::cstring filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written);
GI_INLINE_DECL gi::cstring filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> filename_to_utf8 (const gi::cstring_v opsysstring, gssize len);
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, GLib::Error * _error) noexcept;

// gchar* /*full,nullable*/ g_find_program_in_path (const gchar* program /*none*/);
// char* /*full,nullable*/ g_find_program_in_path (const char* program /*none*/);
GI_INLINE_DECL gi::cstring find_program_in_path (const gi::cstring_v program) noexcept;

// FILE* g_fopen (const gchar* filename /*none*/, const gchar* mode /*none*/);
// void* g_fopen (const char* filename /*none*/, const char* mode /*none*/);
GI_INLINE_DECL gpointer fopen (const gi::cstring_v filename, const gi::cstring_v mode) noexcept;

// gchar* /*full*/ g_format_size (guint64 size);
// char* /*full*/ g_format_size (guint64 size);
GI_INLINE_DECL gi::cstring format_size (guint64 size) noexcept;

// gchar* /*full*/ g_format_size_full (guint64 size, GFormatSizeFlags flags);
// char* /*full*/ g_format_size_full (guint64 size, ::GFormatSizeFlags flags);
GI_INLINE_DECL gi::cstring format_size_full (guint64 size, GLib::FormatSizeFlags flags) noexcept;

// gint g_fprintf (FILE* file, const gchar* format /*none*/,  ..._ /*none*/);
// gint g_fprintf (void* file, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_free (gpointer mem);
// void g_free (void* mem);
// IGNORE; marked ignore

// void g_free_sized (gpointer mem, size_t size);
// void g_free_sized (void* mem, gsize size);
GI_INLINE_DECL void free_sized (void* mem, gsize size) noexcept;

// FILE* g_freopen (const gchar* filename /*none*/, const gchar* mode /*none*/, FILE* stream);
// void* g_freopen (const char* filename /*none*/, const char* mode /*none*/, void* stream);
GI_INLINE_DECL gpointer freopen (const gi::cstring_v filename, const gi::cstring_v mode, void* stream) noexcept;

// gint g_fsync (gint fd);
// gint g_fsync (gint fd);
GI_INLINE_DECL gint fsync (gint fd) noexcept;

// const gchar* /*none,nullable*/ g_get_application_name ();
// const char* /*none,nullable*/ g_get_application_name ();
GI_INLINE_DECL gi::cstring_v get_application_name () noexcept;

// gboolean g_get_charset (const char** charset /*none,out,opt*/);
// gboolean g_get_charset (const char** charset /*none,out,opt*/);
GI_INLINE_DECL bool get_charset (gi::cstring_v * charset) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v> get_charset () noexcept;

// gchar* /*full*/ g_get_codeset ();
// char* /*full*/ g_get_codeset ();
GI_INLINE_DECL gi::cstring get_codeset () noexcept;

// gboolean g_get_console_charset (const char** charset /*none,out,opt*/);
// gboolean g_get_console_charset (const char** charset /*none,out,opt*/);
GI_INLINE_DECL bool get_console_charset (gi::cstring_v * charset) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v> get_console_charset () noexcept;

// gchar* /*full*/ g_get_current_dir ();
// char* /*full*/ g_get_current_dir ();
GI_INLINE_DECL gi::cstring get_current_dir () noexcept;

// gchar** /*full*/ g_get_environ ();
// char** /*full*/ g_get_environ ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_environ () noexcept;

// gboolean g_get_filename_charsets (const gchar*** filename_charsets /*none,out*/);
// gboolean g_get_filename_charsets (const char*** filename_charsets /*none,out*/);
GI_INLINE_DECL bool get_filename_charsets (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> & filename_charsets) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>> get_filename_charsets () noexcept;

// const gchar* /*none*/ g_get_home_dir ();
// const char* /*none*/ g_get_home_dir ();
GI_INLINE_DECL gi::cstring_v get_home_dir () noexcept;

// const gchar* /*none*/ g_get_host_name ();
// const char* /*none*/ g_get_host_name ();
GI_INLINE_DECL gi::cstring_v get_host_name () noexcept;

// const gchar* const* /*none*/ g_get_language_names ();
// const char** /*none*/ g_get_language_names ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_language_names () noexcept;

// const gchar* const* /*none*/ g_get_language_names_with_category (const gchar* category_name /*none*/);
// const char** /*none*/ g_get_language_names_with_category (const char* category_name /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_language_names_with_category (const gi::cstring_v category_name) noexcept;

// gchar** /*full*/ g_get_locale_variants (const gchar* locale /*none*/);
// char** /*full*/ g_get_locale_variants (const char* locale /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_variants (const gi::cstring_v locale) noexcept;

// gint64 g_get_monotonic_time ();
// gint64 g_get_monotonic_time ();
GI_INLINE_DECL gint64 get_monotonic_time () noexcept;

// guint g_get_num_processors ();
// guint g_get_num_processors ();
GI_INLINE_DECL guint get_num_processors () noexcept;

// gchar* /*full,nullable*/ g_get_os_info (const gchar* key_name /*none*/);
// char* /*full,nullable*/ g_get_os_info (const char* key_name /*none*/);
GI_INLINE_DECL gi::cstring get_os_info (const gi::cstring_v key_name) noexcept;

// const gchar* /*none,nullable*/ g_get_prgname ();
// const char* /*none,nullable*/ g_get_prgname ();
GI_INLINE_DECL gi::cstring_v get_prgname () noexcept;

// const gchar* /*none*/ g_get_real_name ();
// const char* /*none*/ g_get_real_name ();
GI_INLINE_DECL gi::cstring_v get_real_name () noexcept;

// gint64 g_get_real_time ();
// gint64 g_get_real_time ();
GI_INLINE_DECL gint64 get_real_time () noexcept;

// const gchar* const* /*none*/ g_get_system_config_dirs ();
// const char** /*none*/ g_get_system_config_dirs ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_system_config_dirs () noexcept;

// const gchar* const* /*none*/ g_get_system_data_dirs ();
// const char** /*none*/ g_get_system_data_dirs ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_system_data_dirs () noexcept;

// const gchar* /*none*/ g_get_tmp_dir ();
// const char* /*none*/ g_get_tmp_dir ();
GI_INLINE_DECL gi::cstring_v get_tmp_dir () noexcept;

// const gchar* /*none*/ g_get_user_cache_dir ();
// const char* /*none*/ g_get_user_cache_dir ();
GI_INLINE_DECL gi::cstring_v get_user_cache_dir () noexcept;

// const gchar* /*none*/ g_get_user_config_dir ();
// const char* /*none*/ g_get_user_config_dir ();
GI_INLINE_DECL gi::cstring_v get_user_config_dir () noexcept;

// const gchar* /*none*/ g_get_user_data_dir ();
// const char* /*none*/ g_get_user_data_dir ();
GI_INLINE_DECL gi::cstring_v get_user_data_dir () noexcept;

// const gchar* /*none*/ g_get_user_name ();
// const char* /*none*/ g_get_user_name ();
GI_INLINE_DECL gi::cstring_v get_user_name () noexcept;

// const gchar* /*none*/ g_get_user_runtime_dir ();
// const char* /*none*/ g_get_user_runtime_dir ();
GI_INLINE_DECL gi::cstring_v get_user_runtime_dir () noexcept;

// const gchar* /*none,nullable*/ g_get_user_special_dir (GUserDirectory directory);
// const char* /*none,nullable*/ g_get_user_special_dir (::GUserDirectory directory);
GI_INLINE_DECL gi::cstring_v get_user_special_dir (GLib::UserDirectory directory) noexcept;

// const gchar* /*none*/ g_get_user_state_dir ();
// const char* /*none*/ g_get_user_state_dir ();
GI_INLINE_DECL gi::cstring_v get_user_state_dir () noexcept;

// const gchar* /*none,nullable*/ g_getenv (const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_getenv (const char* variable /*none*/);
GI_INLINE_DECL gi::cstring_v getenv (const gi::cstring_v variable) noexcept;

// gboolean g_hostname_is_ascii_encoded (const gchar* hostname /*none*/);
// gboolean g_hostname_is_ascii_encoded (const char* hostname /*none*/);
GI_INLINE_DECL bool hostname_is_ascii_encoded (const gi::cstring_v hostname) noexcept;

// gboolean g_hostname_is_ip_address (const gchar* hostname /*none*/);
// gboolean g_hostname_is_ip_address (const char* hostname /*none*/);
GI_INLINE_DECL bool hostname_is_ip_address (const gi::cstring_v hostname) noexcept;

// gboolean g_hostname_is_non_ascii (const gchar* hostname /*none*/);
// gboolean g_hostname_is_non_ascii (const char* hostname /*none*/);
GI_INLINE_DECL bool hostname_is_non_ascii (const gi::cstring_v hostname) noexcept;

// gchar* /*full,nullable*/ g_hostname_to_ascii (const gchar* hostname /*none*/);
// char* /*full,nullable*/ g_hostname_to_ascii (const char* hostname /*none*/);
GI_INLINE_DECL gi::cstring hostname_to_ascii (const gi::cstring_v hostname) noexcept;

// gchar* /*full,nullable*/ g_hostname_to_unicode (const gchar* hostname /*none*/);
// char* /*full,nullable*/ g_hostname_to_unicode (const char* hostname /*none*/);
GI_INLINE_DECL gi::cstring hostname_to_unicode (const gi::cstring_v hostname) noexcept;

// gsize g_iconv (GIConv converter /*none*/, gchar** inbuf /*none*/, gsize* inbytes_left, gchar** outbuf /*none*/, gsize* outbytes_left);
// gsize g_iconv ( converter /*none*/, char* inbuf /*none*/, gsize* inbytes_left, char* outbuf /*none*/, gsize* outbytes_left);
// IGNORE; not introspectable, inconsistent outbuf in pointer depth (2 vs 1), inconsistent inbuf in pointer depth (2 vs 1), converter type  not supported

// guint g_idle_add (GSourceFunc function /*none*/, gpointer data);
// guint g_idle_add (GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by idle_add_full

// guint g_idle_add_full (gint priority, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_idle_add_full (gint priority, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
GI_INLINE_DECL guint idle_add (gint priority, GLib::SourceFunc function) noexcept;

// guint g_idle_add_once (GSourceOnceFunc function /*none*/, gpointer data);
// guint g_idle_add_once (GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// gboolean g_idle_remove_by_data (gpointer data);
// gboolean g_idle_remove_by_data (void* data);
GI_INLINE_DECL bool idle_remove_by_data (void* data) noexcept;

// GSource* /*full*/ g_idle_source_new ();
// ::GSource* /*full*/ g_idle_source_new ();
GI_INLINE_DECL GLib::Source idle_source_new () noexcept;

// gboolean g_int64_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int64_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool int64_equal (const void* v1, const void* v2) noexcept;

// guint g_int64_hash (gconstpointer v);
// guint g_int64_hash (const void* v);
GI_INLINE_DECL guint int64_hash (const void* v) noexcept;

// gboolean g_int_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool int_equal (const void* v1, const void* v2) noexcept;

// guint g_int_hash (gconstpointer v);
// guint g_int_hash (const void* v);
GI_INLINE_DECL guint int_hash (const void* v) noexcept;

// const gchar* /*none*/ g_intern_static_string (const gchar* string /*none,nullable*/);
// const char* /*none*/ g_intern_static_string (const char* string /*none,nullable*/);
GI_INLINE_DECL gi::cstring_v intern_static_string (const gi::cstring_v string) noexcept;
GI_INLINE_DECL gi::cstring_v intern_static_string () noexcept;

// const gchar* /*none*/ g_intern_string (const gchar* string /*none,nullable*/);
// const char* /*none*/ g_intern_string (const char* string /*none,nullable*/);
GI_INLINE_DECL gi::cstring_v intern_string (const gi::cstring_v string) noexcept;
GI_INLINE_DECL gi::cstring_v intern_string () noexcept;

// guint g_io_add_watch (GIOChannel* channel /*none*/, GIOCondition condition, GIOFunc func /*none*/, gpointer user_data);
// guint g_io_add_watch (::GIOChannel* channel /*none*/, ::GIOCondition condition, GLib::IOFunc::cfunction_type func /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by io_add_watch_full

// guint g_io_add_watch_full (GIOChannel* channel /*none*/, gint priority, GIOCondition condition, GIOFunc func /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_io_add_watch_full (::GIOChannel* channel /*none*/, gint priority, ::GIOCondition condition, GLib::IOFunc::cfunction_type func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
GI_INLINE_DECL guint io_add_watch (GLib::IOChannel_Ref channel, gint priority, GLib::IOCondition condition, GLib::IOFunc func) noexcept;

// GSource* /*full*/ g_io_create_watch (GIOChannel* channel /*none*/, GIOCondition condition);
// ::GSource* /*full*/ g_io_create_watch (::GIOChannel* channel /*none*/, ::GIOCondition condition);
GI_INLINE_DECL GLib::Source io_create_watch (GLib::IOChannel_Ref channel, GLib::IOCondition condition) noexcept;

// gchar** /*full*/ g_listenv ();
// char** /*full*/ g_listenv ();
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> listenv () noexcept;

// gchar* /*full*/ g_locale_from_utf8 (const gchar* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_locale_from_utf8 (const char* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> locale_from_utf8 (const gi::cstring_v utf8string, gssize len);
GI_INLINE_DECL std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_locale_to_utf8 (const gchar* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_locale_to_utf8 (const guint8* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL gi::cstring locale_to_utf8 (const guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written);
GI_INLINE_DECL gi::cstring locale_to_utf8 (const guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> locale_to_utf8 (const guint8 * opsysstring, gssize len);
GI_INLINE_DECL std::tuple<gi::cstring, gsize, gsize> locale_to_utf8 (const guint8 * opsysstring, gssize len, GLib::Error * _error) noexcept;

// void g_log (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* format /*none*/,  ..._ /*none*/);
// void g_log (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_log_default_handler (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* message /*none,nullable*/, gpointer unused_data);
// void g_log_default_handler (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* message /*none,nullable*/, void* unused_data);
GI_INLINE_DECL void log_default_handler (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, void* unused_data) noexcept;
GI_INLINE_DECL void log_default_handler (GLib::LogLevelFlags log_level, void* unused_data) noexcept;

// gboolean g_log_get_debug_enabled ();
// gboolean g_log_get_debug_enabled ();
GI_INLINE_DECL bool log_get_debug_enabled () noexcept;

// void g_log_remove_handler (const gchar* log_domain /*none*/, guint handler_id);
// void g_log_remove_handler (const char* log_domain /*none*/, guint handler_id);
GI_INLINE_DECL void log_remove_handler (const gi::cstring_v log_domain, guint handler_id) noexcept;

// GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_always_fatal (::GLogLevelFlags fatal_mask);
GI_INLINE_DECL GLib::LogLevelFlags log_set_always_fatal (GLib::LogLevelFlags fatal_mask) noexcept;

// void g_log_set_debug_enabled (gboolean enabled);
// void g_log_set_debug_enabled (gboolean enabled);
GI_INLINE_DECL void log_set_debug_enabled (gboolean enabled) noexcept;

// FAILURE on g_log_set_default_handler; No such node (<xmlattr>.transfer-ownership)
// GLogLevelFlags g_log_set_fatal_mask (const gchar* log_domain /*none*/, GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_fatal_mask (const char* log_domain /*none*/, ::GLogLevelFlags fatal_mask);
GI_INLINE_DECL GLib::LogLevelFlags log_set_fatal_mask (const gi::cstring_v log_domain, GLib::LogLevelFlags fatal_mask) noexcept;

// guint g_log_set_handler (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_levels, GLogFunc log_func /*none*/, gpointer user_data);
// guint g_log_set_handler (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by log_set_handler_full

// guint g_log_set_handler_full (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_levels, GLogFunc log_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// guint g_log_set_handler_full (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL guint log_set_handler (const gi::cstring_v log_domain, GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept;
GI_INLINE_DECL guint log_set_handler (GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept;

// void g_log_set_writer_func (GLogWriterFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free /*none*/);
// void g_log_set_writer_func ( func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free /*none*/);
// SKIP; func type  not supported

// void g_log_structured (const gchar* log_domain /*none*/, GLogLevelFlags log_level,  ..._ /*none*/);
// void g_log_structured (const char* log_domain /*none*/, ::GLogLevelFlags log_level,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_log_structured_array (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields);
// void g_log_structured_array (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields);
// SKIP; fields in boxed array not supported (depth 1)

// void g_log_structured_standard (const gchar* log_domain /*none*/, GLogLevelFlags log_level, const gchar* file /*none*/, const gchar* line /*none*/, const gchar* func /*none*/, const gchar* message_format /*none*/,  ..._ /*none*/);
// void g_log_structured_standard (const char* log_domain /*none*/, ::GLogLevelFlags log_level, const char* file /*none*/, const char* line /*none*/, const char* func /*none*/, const char* message_format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_log_variant (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, GVariant* fields /*none*/);
// void g_log_variant (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, ::GVariant* fields /*none*/);
GI_INLINE_DECL void log_variant (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept;
GI_INLINE_DECL void log_variant (GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept;

// GLogWriterOutput g_log_writer_default (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_default (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// void g_log_writer_default_set_debug_domains (const gchar* const* domains /*none,nullable*/);
// void g_log_writer_default_set_debug_domains (const char* domains /*none,nullable*/);
// SKIP; inconsistent domains in pointer depth (2 vs 1)

// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
GI_INLINE_DECL void log_writer_default_set_use_stderr (gboolean use_stderr) noexcept;

// gboolean g_log_writer_default_would_drop (GLogLevelFlags log_level, const char* log_domain /*none,nullable*/);
// gboolean g_log_writer_default_would_drop (::GLogLevelFlags log_level, const char* log_domain /*none,nullable*/);
GI_INLINE_DECL bool log_writer_default_would_drop (GLib::LogLevelFlags log_level, const gi::cstring_v log_domain) noexcept;
GI_INLINE_DECL bool log_writer_default_would_drop (GLib::LogLevelFlags log_level) noexcept;

// gchar* /*full*/ g_log_writer_format_fields (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gboolean use_color);
// char* /*full*/ g_log_writer_format_fields (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, gboolean use_color);
// SKIP; fields in boxed array not supported (depth 1)

// gboolean g_log_writer_is_journald (gint output_fd);
// gboolean g_log_writer_is_journald (gint output_fd);
GI_INLINE_DECL bool log_writer_is_journald (gint output_fd) noexcept;

// GLogWriterOutput g_log_writer_journald (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_journald (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// GLogWriterOutput g_log_writer_standard_streams (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_standard_streams (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// gboolean g_log_writer_supports_color (gint output_fd);
// gboolean g_log_writer_supports_color (gint output_fd);
GI_INLINE_DECL bool log_writer_supports_color (gint output_fd) noexcept;

// void g_logv (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* format /*none*/, va_list args /*none*/);
// void g_logv (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// int g_lstat (const gchar* filename /*none*/, GStatBuf* buf /*none*/);
// gint g_lstat (const char* filename /*none*/,  buf /*none*/);
// SKIP; buf type  not supported

// GSource* /*none,nullable*/ g_main_current_source ();
// ::GSource* /*none,nullable*/ g_main_current_source ();
GI_INLINE_DECL GLib::Source_Ref main_current_source () noexcept;

// gint g_main_depth ();
// gint g_main_depth ();
GI_INLINE_DECL gint main_depth () noexcept;

// gpointer g_malloc (gsize n_bytes);
// void* g_malloc (gsize n_bytes);
GI_INLINE_DECL gpointer malloc (gsize n_bytes) noexcept;

// gpointer g_malloc0 (gsize n_bytes);
// void* g_malloc0 (gsize n_bytes);
GI_INLINE_DECL gpointer malloc0 (gsize n_bytes) noexcept;

// gpointer g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gboolean g_markup_collect_attributes (const gchar* element_name /*none*/, const gchar** attribute_names /*none*/, const gchar** attribute_values /*none*/, GError** error /*none*/, GMarkupCollectType first_type, const gchar* first_attr /*none*/,  ..._ /*none*/);
// gboolean g_markup_collect_attributes (const char* element_name /*none*/, const char* attribute_names /*none*/, const char* attribute_values /*none*/, ::GError* error /*none*/, ::GMarkupCollectType first_type, const char* first_attr /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GQuark g_markup_error_quark ();
// ::GQuark g_markup_error_quark ();
GI_INLINE_DECL GLib::Quark markup_error_quark () noexcept;

// gchar* /*full*/ g_markup_escape_text (const gchar* text /*none*/, gssize length);
// char* /*full*/ g_markup_escape_text (const char* text /*none*/, gssize length);
GI_INLINE_DECL gi::cstring markup_escape_text (const gi::cstring_v text, gssize length) noexcept;

// gchar* /*full*/ g_markup_printf_escaped (const char* format /*none*/,  ..._ /*none*/);
// char* /*full*/ g_markup_printf_escaped (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_markup_vprintf_escaped (const char* format /*none*/, va_list args /*none*/);
// char* /*full*/ g_markup_vprintf_escaped (const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gpointer g_memdup2 (gconstpointer mem, gsize byte_size);
// void* g_memdup2 (const void* mem, gsize byte_size);
GI_INLINE_DECL gpointer memdup2 (const void* mem, gsize byte_size) noexcept;

// int g_mkdir (const gchar* filename /*none*/, int mode);
// gint g_mkdir (const char* filename /*none*/, gint mode);
GI_INLINE_DECL gint mkdir (const gi::cstring_v filename, gint mode) noexcept;

// gint g_mkdir_with_parents (const gchar* pathname /*none*/, gint mode);
// gint g_mkdir_with_parents (const char* pathname /*none*/, gint mode);
GI_INLINE_DECL gint mkdir_with_parents (const gi::cstring_v pathname, gint mode) noexcept;

// gchar* /*full,nullable*/ g_mkdtemp (gchar* tmpl /*none*/);
// char* /*full,nullable*/ g_mkdtemp (char* tmpl /*none*/);
GI_INLINE_DECL gi::cstring mkdtemp (gi::cstring_v tmpl) noexcept;

// gchar* /*full,nullable*/ g_mkdtemp_full (gchar* tmpl /*none*/, gint mode);
// char* /*full,nullable*/ g_mkdtemp_full (char* tmpl /*none*/, gint mode);
GI_INLINE_DECL gi::cstring mkdtemp_full (gi::cstring_v tmpl, gint mode) noexcept;

// gint g_mkstemp (gchar* tmpl /*none*/);
// gint g_mkstemp (char* tmpl /*none*/);
GI_INLINE_DECL gint mkstemp (gi::cstring_v tmpl) noexcept;

// gint g_mkstemp_full (gchar* tmpl /*none*/, gint flags, gint mode);
// gint g_mkstemp_full (char* tmpl /*none*/, gint flags, gint mode);
GI_INLINE_DECL gint mkstemp_full (gi::cstring_v tmpl, gint flags, gint mode) noexcept;

// void g_nullify_pointer (gpointer* nullify_location);
// void g_nullify_pointer (void* nullify_location);
// SKIP; inconsistent nullify_location in pointer depth (2 vs 1)

// GQuark g_number_parser_error_quark ();
// ::GQuark g_number_parser_error_quark ();
GI_INLINE_DECL GLib::Quark number_parser_error_quark () noexcept;

// void g_on_error_query (const gchar* prg_name /*none*/);
// void g_on_error_query (const char* prg_name /*none*/);
GI_INLINE_DECL void on_error_query (const gi::cstring_v prg_name) noexcept;

// void g_on_error_stack_trace (const gchar* prg_name /*none*/);
// void g_on_error_stack_trace (const char* prg_name /*none*/);
GI_INLINE_DECL void on_error_stack_trace (const gi::cstring_v prg_name) noexcept;

// int g_open (const gchar* filename /*none*/, int flags, int mode);
// gint g_open (const char* filename /*none*/, gint flags, gint mode);
GI_INLINE_DECL gint open (const gi::cstring_v filename, gint flags, gint mode) noexcept;

// GQuark g_option_error_quark ();
// ::GQuark g_option_error_quark ();
GI_INLINE_DECL GLib::Quark option_error_quark () noexcept;

// guint g_parse_debug_string (const gchar* string /*none,nullable*/, const GDebugKey* keys /*none*/, guint nkeys);
// guint g_parse_debug_string (const char* string /*none,nullable*/, const ::GDebugKey** keys /*none*/, guint nkeys);
// SKIP; keys in boxed array not supported (depth 1)

// gchar* /*full*/ g_path_get_basename (const gchar* file_name /*none*/);
// char* /*full*/ g_path_get_basename (const char* file_name /*none*/);
GI_INLINE_DECL gi::cstring path_get_basename (const gi::cstring_v file_name) noexcept;

// gchar* /*full*/ g_path_get_dirname (const gchar* file_name /*none*/);
// char* /*full*/ g_path_get_dirname (const char* file_name /*none*/);
GI_INLINE_DECL gi::cstring path_get_dirname (const gi::cstring_v file_name) noexcept;

// gboolean g_path_is_absolute (const gchar* file_name /*none*/);
// gboolean g_path_is_absolute (const char* file_name /*none*/);
GI_INLINE_DECL bool path_is_absolute (const gi::cstring_v file_name) noexcept;

// const gchar* /*none,nullable*/ g_path_skip_root (const gchar* file_name /*none*/);
// const char* /*none,nullable*/ g_path_skip_root (const char* file_name /*none*/);
GI_INLINE_DECL gi::cstring_v path_skip_root (const gi::cstring_v file_name) noexcept;

// gboolean g_pattern_match_simple (const gchar* pattern /*none*/, const gchar* string /*none*/);
// gboolean g_pattern_match_simple (const char* pattern /*none*/, const char* string /*none*/);
GI_INLINE_DECL bool pattern_match_simple (const gi::cstring_v pattern, const gi::cstring_v string) noexcept;

// void g_pointer_bit_lock (void* address, gint lock_bit);
// void g_pointer_bit_lock (void* address, gint lock_bit);
GI_INLINE_DECL void pointer_bit_lock (void* address, gint lock_bit) noexcept;

// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
GI_INLINE_DECL bool pointer_bit_trylock (void* address, gint lock_bit) noexcept;

// void g_pointer_bit_unlock (void* address, gint lock_bit);
// void g_pointer_bit_unlock (void* address, gint lock_bit);
GI_INLINE_DECL void pointer_bit_unlock (void* address, gint lock_bit) noexcept;

// gint g_poll (GPollFD* fds /*none*/, guint nfds, gint timeout);
// gint g_poll (::GPollFD* fds /*none*/, guint nfds, gint timeout);
GI_INLINE_DECL gint poll (GLib::PollFD_Ref fds, guint nfds, gint timeout) noexcept;

// void g_prefix_error (GError** err /*full,inout,opt,nullable*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_prefix_error (::GError** err /*full,inout,opt,nullable*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_prefix_error_literal (GError** err /*full,inout,opt,nullable*/, const gchar* prefix /*none*/);
// void g_prefix_error_literal (::GError** err /*full,inout,opt,nullable*/, const char* prefix /*none*/);
GI_INLINE_DECL void prefix_error_literal (GLib::Error * err, const gi::cstring_v prefix) noexcept;

// void g_print (const gchar* format /*none*/,  ..._ /*none*/);
// void g_print (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_printerr (const gchar* format /*none*/,  ..._ /*none*/);
// void g_printerr (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gint g_printf (const gchar* format /*none*/,  ..._ /*none*/);
// gint g_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gsize g_printf_string_upper_bound (const gchar* format /*none*/, va_list args /*none*/);
// gsize g_printf_string_upper_bound (const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_propagate_error (GError** dest /*full,out,opt,nullable*/, GError* src /*full*/);
// void g_propagate_error (::GError** dest /*full,out,opt,nullable*/, ::GError* src /*full*/);
GI_INLINE_DECL void propagate_error (GLib::Error * dest, GLib::Error src) noexcept;
GI_INLINE_DECL GLib::Error propagate_error (GLib::Error src) noexcept;

// void g_propagate_prefixed_error (GError** dest /*none*/, GError* src /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_propagate_prefixed_error (::GError* dest /*none*/, ::GError* src /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_qsort_with_data (gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// void g_qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
GI_INLINE_DECL void qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc compare_func) noexcept;

// GQuark g_quark_from_static_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_from_static_string (const char* string /*none,nullable*/);
GI_INLINE_DECL GLib::Quark quark_from_static_string (const gi::cstring_v string) noexcept;
GI_INLINE_DECL GLib::Quark quark_from_static_string () noexcept;

// GQuark g_quark_from_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_from_string (const char* string /*none,nullable*/);
GI_INLINE_DECL GLib::Quark quark_from_string (const gi::cstring_v string) noexcept;
GI_INLINE_DECL GLib::Quark quark_from_string () noexcept;

// const gchar* /*none*/ g_quark_to_string (GQuark quark);
// const char* /*none*/ g_quark_to_string (::GQuark quark);
GI_INLINE_DECL gi::cstring_v quark_to_string (::GQuark quark) noexcept;

// GQuark g_quark_try_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_try_string (const char* string /*none,nullable*/);
GI_INLINE_DECL GLib::Quark quark_try_string (const gi::cstring_v string) noexcept;
GI_INLINE_DECL GLib::Quark quark_try_string () noexcept;

// gdouble g_random_double ();
// gdouble g_random_double ();
GI_INLINE_DECL gdouble random_double () noexcept;

// gdouble g_random_double_range (gdouble begin, gdouble end);
// gdouble g_random_double_range (gdouble begin, gdouble end);
GI_INLINE_DECL gdouble random_double_range (gdouble begin, gdouble end) noexcept;

// guint32 g_random_int ();
// guint32 g_random_int ();
GI_INLINE_DECL guint32 random_int () noexcept;

// gint32 g_random_int_range (gint32 begin, gint32 end);
// gint32 g_random_int_range (gint32 begin, gint32 end);
GI_INLINE_DECL gint32 random_int_range (gint32 begin, gint32 end) noexcept;

// void g_random_set_seed (guint32 seed);
// void g_random_set_seed (guint32 seed);
GI_INLINE_DECL void random_set_seed (guint32 seed) noexcept;

// gpointer g_rc_box_acquire (gpointer mem_block);
// void* g_rc_box_acquire (void* mem_block);
GI_INLINE_DECL gpointer rc_box_acquire (void* mem_block) noexcept;

// gpointer g_rc_box_alloc (gsize block_size);
// void* g_rc_box_alloc (gsize block_size);
GI_INLINE_DECL gpointer rc_box_alloc (gsize block_size) noexcept;

// gpointer g_rc_box_alloc0 (gsize block_size);
// void* g_rc_box_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer rc_box_alloc0 (gsize block_size) noexcept;

// gpointer g_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_rc_box_dup (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer rc_box_dup (gsize block_size, const void* mem_block) noexcept;

// gsize g_rc_box_get_size (gpointer mem_block);
// gsize g_rc_box_get_size (void* mem_block);
GI_INLINE_DECL gsize rc_box_get_size (void* mem_block) noexcept;

// void g_rc_box_release (gpointer mem_block);
// void g_rc_box_release (void* mem_block);
GI_INLINE_DECL void rc_box_release (void* mem_block) noexcept;

// void g_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func /*none*/);
// void g_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func /*none*/);
// SKIP; callback misses closure info

// gpointer g_realloc (gpointer mem, gsize n_bytes);
// void* g_realloc (void* mem, gsize n_bytes);
GI_INLINE_DECL gpointer realloc (void* mem, gsize n_bytes) noexcept;

// gpointer g_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept;

// gboolean g_ref_count_compare (grefcount* rc, gint val);
// gboolean g_ref_count_compare (gint rc, gint val);
// SKIP; inconsistent rc in pointer depth (1 vs 0)

// gboolean g_ref_count_dec (grefcount* rc);
// gboolean g_ref_count_dec (gint rc);
// SKIP; inconsistent rc in pointer depth (1 vs 0)

// void g_ref_count_inc (grefcount* rc);
// void g_ref_count_inc (gint rc);
// SKIP; inconsistent rc in pointer depth (1 vs 0)

// void g_ref_count_init (grefcount* rc);
// void g_ref_count_init (gint rc);
// SKIP; inconsistent rc in pointer depth (1 vs 0)

// char* /*full*/ g_ref_string_acquire (char* str /*none*/);
// char* /*full*/ g_ref_string_acquire (char* str /*none*/);
GI_INLINE_DECL gi::cstring ref_string_acquire (gi::cstring_v str) noexcept;

// gsize g_ref_string_length (char* str /*none*/);
// gsize g_ref_string_length (char* str /*none*/);
GI_INLINE_DECL gsize ref_string_length (gi::cstring_v str) noexcept;

// char* /*full*/ g_ref_string_new (const char* str /*none*/);
// char* /*full*/ g_ref_string_new (const char* str /*none*/);
GI_INLINE_DECL gi::cstring ref_string_new (const gi::cstring_v str) noexcept;

// char* /*full*/ g_ref_string_new_intern (const char* str /*none*/);
// char* /*full*/ g_ref_string_new_intern (const char* str /*none*/);
GI_INLINE_DECL gi::cstring ref_string_new_intern (const gi::cstring_v str) noexcept;

// char* /*full*/ g_ref_string_new_len (const char* str /*none*/, gssize len);
// char* /*full*/ g_ref_string_new_len (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring ref_string_new_len (const gi::cstring_v str, gssize len) noexcept;

// void g_ref_string_release (char* str /*none*/);
// void g_ref_string_release (char* str /*none*/);
GI_INLINE_DECL void ref_string_release (gi::cstring_v str) noexcept;

// void g_reload_user_special_dirs_cache ();
// void g_reload_user_special_dirs_cache ();
GI_INLINE_DECL void reload_user_special_dirs_cache () noexcept;

// int g_remove (const gchar* filename /*none*/);
// gint g_remove (const char* filename /*none*/);
GI_INLINE_DECL gint remove (const gi::cstring_v filename) noexcept;

// int g_rename (const gchar* oldfilename /*none*/, const gchar* newfilename /*none*/);
// gint g_rename (const char* oldfilename /*none*/, const char* newfilename /*none*/);
GI_INLINE_DECL gint rename (const gi::cstring_v oldfilename, const gi::cstring_v newfilename) noexcept;

// void g_return_if_fail_warning (const char* log_domain /*none,nullable*/, const char* pretty_function /*none*/, const char* expression /*none,nullable*/);
// void g_return_if_fail_warning (const char* log_domain /*none,nullable*/, const char* pretty_function /*none*/, const char* expression /*none,nullable*/);
GI_INLINE_DECL void return_if_fail_warning (const gi::cstring_v log_domain, const gi::cstring_v pretty_function, const gi::cstring_v expression) noexcept;
GI_INLINE_DECL void return_if_fail_warning (const gi::cstring_v pretty_function) noexcept;

// int g_rmdir (const gchar* filename /*none*/);
// gint g_rmdir (const char* filename /*none*/);
GI_INLINE_DECL gint rmdir (const gi::cstring_v filename) noexcept;

// void g_set_application_name (const gchar* application_name /*none*/);
// void g_set_application_name (const char* application_name /*none*/);
GI_INLINE_DECL void set_application_name (const gi::cstring_v application_name) noexcept;

// void g_set_error (GError** err /*full,out,opt*/, GQuark domain, gint code, const gchar* format /*none*/,  ..._ /*none*/);
// void g_set_error (::GError** err /*full,out,opt*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_set_error_literal (GError** err /*full,out,opt*/, GQuark domain, gint code, const gchar* message /*none*/);
// void g_set_error_literal (::GError** err /*full,out,opt*/, ::GQuark domain, gint code, const char* message /*none*/);
GI_INLINE_DECL void set_error_literal (GLib::Error * err, ::GQuark domain, gint code, const gi::cstring_v message) noexcept;
GI_INLINE_DECL GLib::Error set_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept;

// void g_set_prgname (const gchar* prgname /*none*/);
// void g_set_prgname (const char* prgname /*none*/);
GI_INLINE_DECL void set_prgname (const gi::cstring_v prgname) noexcept;

// FAILURE on g_set_print_handler; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_set_printerr_handler; No such node (<xmlattr>.transfer-ownership)
// void g_set_user_dirs (const gchar* first_dir_type /*none*/,  ..._ /*none*/);
// void g_set_user_dirs (const char* first_dir_type /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_setenv (const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// gboolean g_setenv (const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
GI_INLINE_DECL bool setenv (const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept;

// GQuark g_shell_error_quark ();
// ::GQuark g_shell_error_quark ();
GI_INLINE_DECL GLib::Quark shell_error_quark () noexcept;

// gboolean g_shell_parse_argv (const gchar* command_line /*none*/, gint* argcp, gchar*** argvp /*full,out,opt*/, GError ** error);
// gboolean g_shell_parse_argv (const char* command_line /*none*/, gint* argcp, char*** argvp /*full,out,opt*/, GError ** error);
GI_INLINE_DECL bool shell_parse_argv (const gi::cstring_v command_line, gint * argcp, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * argvp);
GI_INLINE_DECL bool shell_parse_argv (const gi::cstring_v command_line, gint * argcp, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * argvp, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> shell_parse_argv (const gi::cstring_v command_line);
GI_INLINE_DECL std::tuple<bool, gint, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> shell_parse_argv (const gi::cstring_v command_line, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_shell_quote (const gchar* unquoted_string /*none*/);
// char* /*full*/ g_shell_quote (const char* unquoted_string /*none*/);
GI_INLINE_DECL gi::cstring shell_quote (const gi::cstring_v unquoted_string) noexcept;

// gchar* /*full*/ g_shell_unquote (const gchar* quoted_string /*none*/, GError ** error);
// char* /*full*/ g_shell_unquote (const char* quoted_string /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring shell_unquote (const gi::cstring_v quoted_string);
GI_INLINE_DECL gi::cstring shell_unquote (const gi::cstring_v quoted_string, GLib::Error * _error) noexcept;

// gpointer g_slice_alloc (gsize block_size);
// void* g_slice_alloc (gsize block_size);
GI_INLINE_DECL gpointer slice_alloc (gsize block_size) noexcept;

// gpointer g_slice_alloc0 (gsize block_size);
// void* g_slice_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer slice_alloc0 (gsize block_size) noexcept;

// gpointer g_slice_copy (gsize block_size, gconstpointer mem_block);
// void* g_slice_copy (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer slice_copy (gsize block_size, const void* mem_block) noexcept;

// void g_slice_free1 (gsize block_size, gpointer mem_block);
// void g_slice_free1 (gsize block_size, void* mem_block);
GI_INLINE_DECL void slice_free1 (gsize block_size, void* mem_block) noexcept;

// void g_slice_free_chain_with_offset (gsize block_size, gpointer mem_chain, gsize next_offset);
// void g_slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset);
GI_INLINE_DECL void slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset) noexcept;

// gint64 g_slice_get_config (GSliceConfig ckey);
// gint64 g_slice_get_config (::GSliceConfig ckey);
// IGNORE; marked ignore

// gint64* g_slice_get_config_state (GSliceConfig ckey, gint64 address, guint* n_values);
// gint64 g_slice_get_config_state (::GSliceConfig ckey, gint64 address, guint n_values);
// SKIP; inconsistent n_values in pointer depth (1 vs 0), inconsistent  return pointer depth (1 vs 0)

// void g_slice_set_config (GSliceConfig ckey, gint64 value);
// void g_slice_set_config (::GSliceConfig ckey, gint64 value);
// IGNORE; marked ignore

// gint g_snprintf (gchar* string /*none*/, gulong n, const gchar* format /*none*/,  ..._ /*none*/);
// gint g_snprintf (char* string /*none*/, gulong n, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// guint g_spaced_primes_closest (guint num);
// guint g_spaced_primes_closest (guint num);
GI_INLINE_DECL guint spaced_primes_closest (guint num) noexcept;

// gboolean g_spawn_async (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, GError ** error);
// gboolean g_spawn_async (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, GError ** error);
GI_INLINE_DECL bool spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid);
GI_INLINE_DECL bool spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid);
GI_INLINE_DECL bool spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_fds (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_spawn_async_with_fds (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
GI_INLINE_DECL bool spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_pipes (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
// gboolean g_spawn_async_with_pipes (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
GI_INLINE_DECL bool spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error);
GI_INLINE_DECL bool spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error);
GI_INLINE_DECL bool spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_pipes_and_fds (const gchar* working_directory /*none,nullable*/, const gchar* const* argv /*none*/, const gchar* const* envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds /*none,nullable*/, const gint* target_fds /*none,nullable*/, gsize n_fds, GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
// gboolean g_spawn_async_with_pipes_and_fds (const char* working_directory /*none,nullable*/, const char** argv /*none*/, const char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds /*none,nullable*/, const gint* target_fds /*none,nullable*/, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept;

// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
GI_INLINE_DECL bool spawn_check_wait_status (gint wait_status);
GI_INLINE_DECL bool spawn_check_wait_status (gint wait_status, GLib::Error * _error) noexcept;

// void g_spawn_close_pid (GPid pid);
// void g_spawn_close_pid (::GPid pid);
GI_INLINE_DECL void spawn_close_pid (::GPid pid) noexcept;

// gboolean g_spawn_command_line_async (const gchar* command_line /*none*/, GError ** error);
// gboolean g_spawn_command_line_async (const char* command_line /*none*/, GError ** error);
GI_INLINE_DECL bool spawn_command_line_async (const gi::cstring_v command_line);
GI_INLINE_DECL bool spawn_command_line_async (const gi::cstring_v command_line, GLib::Error * _error) noexcept;

// gboolean g_spawn_command_line_sync (const gchar* command_line /*none*/, gchar** standard_output /*full,out,opt*/, gchar** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
// gboolean g_spawn_command_line_sync (const char* command_line /*none*/, guint8** standard_output /*full,out,opt*/, guint8** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
GI_INLINE_DECL bool spawn_command_line_sync (const gi::cstring_v command_line, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status);
GI_INLINE_DECL bool spawn_command_line_sync (const gi::cstring_v command_line, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_command_line_sync (const gi::cstring_v command_line);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_command_line_sync (const gi::cstring_v command_line, GLib::Error * _error) noexcept;

// GQuark g_spawn_error_quark ();
// ::GQuark g_spawn_error_quark ();
GI_INLINE_DECL GLib::Quark spawn_error_quark () noexcept;

// GQuark g_spawn_exit_error_quark ();
// ::GQuark g_spawn_exit_error_quark ();
GI_INLINE_DECL GLib::Quark spawn_exit_error_quark () noexcept;

// gboolean g_spawn_sync (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, gchar** standard_output /*full,out,opt*/, gchar** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
// gboolean g_spawn_sync (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, guint8** standard_output /*full,out,opt*/, guint8** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
GI_INLINE_DECL bool spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status);
GI_INLINE_DECL bool spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status);
GI_INLINE_DECL bool spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gint g_sprintf (gchar* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gint g_sprintf (char* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// int g_stat (const gchar* filename /*none*/, GStatBuf* buf /*none*/);
// gint g_stat (const char* filename /*none*/,  buf /*none*/);
// SKIP; buf type  not supported

// gchar* /*full*/ g_stpcpy (gchar* dest /*none*/, const char* src /*none*/);
// char* /*full*/ g_stpcpy (char* dest /*none*/, const char* src /*none*/);
GI_INLINE_DECL gi::cstring stpcpy (gi::cstring_v dest, const gi::cstring_v src) noexcept;

// gboolean g_str_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_str_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool str_equal (const void* v1, const void* v2) noexcept;

// gboolean g_str_has_prefix (const gchar* str /*none*/, const gchar* prefix /*none*/);
// gboolean g_str_has_prefix (const char* str /*none*/, const char* prefix /*none*/);
GI_INLINE_DECL bool str_has_prefix (const gi::cstring_v str, const gi::cstring_v prefix) noexcept;

// gboolean g_str_has_suffix (const gchar* str /*none*/, const gchar* suffix /*none*/);
// gboolean g_str_has_suffix (const char* str /*none*/, const char* suffix /*none*/);
GI_INLINE_DECL bool str_has_suffix (const gi::cstring_v str, const gi::cstring_v suffix) noexcept;

// guint g_str_hash (gconstpointer v);
// guint g_str_hash (const void* v);
GI_INLINE_DECL guint str_hash (const void* v) noexcept;

// gboolean g_str_is_ascii (const gchar* str /*none*/);
// gboolean g_str_is_ascii (const char* str /*none*/);
GI_INLINE_DECL bool str_is_ascii (const gi::cstring_v str) noexcept;

// gboolean g_str_match_string (const gchar* search_term /*none*/, const gchar* potential_hit /*none*/, gboolean accept_alternates);
// gboolean g_str_match_string (const char* search_term /*none*/, const char* potential_hit /*none*/, gboolean accept_alternates);
GI_INLINE_DECL bool str_match_string (const gi::cstring_v search_term, const gi::cstring_v potential_hit, gboolean accept_alternates) noexcept;

// gchar* /*full*/ g_str_to_ascii (const gchar* str /*none*/, const gchar* from_locale /*none,nullable*/);
// char* /*full*/ g_str_to_ascii (const char* str /*none*/, const char* from_locale /*none,nullable*/);
GI_INLINE_DECL gi::cstring str_to_ascii (const gi::cstring_v str, const gi::cstring_v from_locale) noexcept;
GI_INLINE_DECL gi::cstring str_to_ascii (const gi::cstring_v str) noexcept;

// gchar** /*full*/ g_str_tokenize_and_fold (const gchar* string /*none*/, const gchar* translit_locale /*none,nullable*/, gchar*** ascii_alternates /*full,out*/);
// char** /*full*/ g_str_tokenize_and_fold (const char* string /*none*/, const char* translit_locale /*none,nullable*/, char*** ascii_alternates /*full,out*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> str_tokenize_and_fold (const gi::cstring_v string, const gi::cstring_v translit_locale, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & ascii_alternates) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> str_tokenize_and_fold (const gi::cstring_v string, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & ascii_alternates) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> str_tokenize_and_fold (const gi::cstring_v string, const gi::cstring_v translit_locale) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> str_tokenize_and_fold (const gi::cstring_v string) noexcept;

// gchar* /*full*/ g_strcanon (gchar* string /*none*/, const gchar* valid_chars /*none*/, gchar substitutor);
// char* /*full*/ g_strcanon (char* string /*none*/, const char* valid_chars /*none*/, gchar substitutor);
GI_INLINE_DECL gi::cstring strcanon (gi::cstring_v string, const gi::cstring_v valid_chars, gchar substitutor) noexcept;

// gchar* /*full*/ g_strchomp (gchar* string /*none*/);
// char* /*full*/ g_strchomp (char* string /*none*/);
GI_INLINE_DECL gi::cstring strchomp (gi::cstring_v string) noexcept;

// gchar* /*full*/ g_strchug (gchar* string /*none*/);
// char* /*full*/ g_strchug (char* string /*none*/);
GI_INLINE_DECL gi::cstring strchug (gi::cstring_v string) noexcept;

// int g_strcmp0 (const char* str1 /*none,nullable*/, const char* str2 /*none,nullable*/);
// gint g_strcmp0 (const char* str1 /*none,nullable*/, const char* str2 /*none,nullable*/);
GI_INLINE_DECL gint strcmp0 (const gi::cstring_v str1, const gi::cstring_v str2) noexcept;
GI_INLINE_DECL gint strcmp0 () noexcept;

// gchar* /*full*/ g_strcompress (const gchar* source /*none*/);
// char* /*full*/ g_strcompress (const char* source /*none*/);
GI_INLINE_DECL gi::cstring strcompress (const gi::cstring_v source) noexcept;

// gchar* /*full*/ g_strconcat (const gchar* string1 /*none*/,  ..._ /*none*/);
// char* /*full*/ g_strconcat (const char* string1 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_strdelimit (gchar* string /*none*/, const gchar* delimiters /*none,nullable*/, gchar new_delimiter);
// char* /*full*/ g_strdelimit (char* string /*none*/, const char* delimiters /*none,nullable*/, gchar new_delimiter);
GI_INLINE_DECL gi::cstring strdelimit (gi::cstring_v string, const gi::cstring_v delimiters, gchar new_delimiter) noexcept;
GI_INLINE_DECL gi::cstring strdelimit (gi::cstring_v string, gchar new_delimiter) noexcept;

// gchar* /*full*/ g_strdup (const gchar* str /*none,nullable*/);
// char* /*full*/ g_strdup (const char* str /*none,nullable*/);
GI_INLINE_DECL gi::cstring strdup (const gi::cstring_v str) noexcept;
GI_INLINE_DECL gi::cstring strdup () noexcept;

// gchar* /*full,nullable*/ g_strdup_printf (const gchar* format /*none*/,  ..._ /*none*/);
// char* /*full,nullable*/ g_strdup_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full,nullable*/ g_strdup_vprintf (const gchar* format /*none*/, va_list args /*none*/);
// char* /*full,nullable*/ g_strdup_vprintf (const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gchar** /*full,nullable*/ g_strdupv (gchar** str_array /*none,nullable*/);
// char** /*full,nullable*/ g_strdupv (char* str_array /*none,nullable*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// const gchar* /*none*/ g_strerror (gint errnum);
// const char* /*none*/ g_strerror (gint errnum);
GI_INLINE_DECL gi::cstring_v strerror (gint errnum) noexcept;

// gchar* /*full*/ g_strescape (const gchar* source /*none*/, const gchar* exceptions /*none,nullable*/);
// char* /*full*/ g_strescape (const char* source /*none*/, const char* exceptions /*none,nullable*/);
GI_INLINE_DECL gi::cstring strescape (const gi::cstring_v source, const gi::cstring_v exceptions) noexcept;
GI_INLINE_DECL gi::cstring strescape (const gi::cstring_v source) noexcept;

// void g_strfreev (gchar** str_array /*full,nullable*/);
// void g_strfreev (char* str_array /*full,nullable*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// const gchar* /*none*/ g_strip_context (const gchar* msgid /*none*/, const gchar* msgval /*none*/);
// const char* /*none*/ g_strip_context (const char* msgid /*none*/, const char* msgval /*none*/);
GI_INLINE_DECL gi::cstring_v strip_context (const gi::cstring_v msgid, const gi::cstring_v msgval) noexcept;

// gchar* /*full*/ g_strjoin (const gchar* separator /*none,nullable*/,  ..._ /*none*/);
// char* /*full*/ g_strjoin (const char* separator /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_strjoinv (const gchar* separator /*none,nullable*/, gchar** str_array /*none*/);
// char* /*full*/ g_strjoinv (const char* separator /*none,nullable*/, char* str_array /*none*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// gsize g_strlcat (gchar* dest /*none*/, const gchar* src /*none*/, gsize dest_size);
// gsize g_strlcat (char* dest /*none*/, const char* src /*none*/, gsize dest_size);
GI_INLINE_DECL gsize strlcat (gi::cstring_v dest, const gi::cstring_v src, gsize dest_size) noexcept;

// gsize g_strlcpy (gchar* dest /*none*/, const gchar* src /*none*/, gsize dest_size);
// gsize g_strlcpy (char* dest /*none*/, const char* src /*none*/, gsize dest_size);
GI_INLINE_DECL gsize strlcpy (gi::cstring_v dest, const gi::cstring_v src, gsize dest_size) noexcept;

// gchar* /*full*/ g_strndup (const gchar* str /*none*/, gsize n);
// char* /*full*/ g_strndup (const char* str /*none*/, gsize n);
GI_INLINE_DECL gi::cstring strndup (const gi::cstring_v str, gsize n) noexcept;

// gchar* /*full*/ g_strnfill (gsize length, gchar fill_char);
// char* /*full*/ g_strnfill (gsize length, gchar fill_char);
GI_INLINE_DECL gi::cstring strnfill (gsize length, gchar fill_char) noexcept;

// gchar* /*full*/ g_strreverse (gchar* string /*none*/);
// char* /*full*/ g_strreverse (char* string /*none*/);
GI_INLINE_DECL gi::cstring strreverse (gi::cstring_v string) noexcept;

// gchar* /*full*/ g_strrstr (const gchar* haystack /*none*/, const gchar* needle /*none*/);
// char* /*full*/ g_strrstr (const char* haystack /*none*/, const char* needle /*none*/);
GI_INLINE_DECL gi::cstring strrstr (const gi::cstring_v haystack, const gi::cstring_v needle) noexcept;

// gchar* /*full*/ g_strrstr_len (const gchar* haystack /*none*/, gssize haystack_len, const gchar* needle /*none*/);
// char* /*full*/ g_strrstr_len (const char* haystack /*none*/, gssize haystack_len, const char* needle /*none*/);
GI_INLINE_DECL gi::cstring strrstr_len (const gi::cstring_v haystack, gssize haystack_len, const gi::cstring_v needle) noexcept;

// const gchar* /*none*/ g_strsignal (gint signum);
// const char* /*none*/ g_strsignal (gint signum);
GI_INLINE_DECL gi::cstring_v strsignal (gint signum) noexcept;

// gchar** /*full*/ g_strsplit (const gchar* string /*none*/, const gchar* delimiter /*none*/, gint max_tokens);
// char** /*full*/ g_strsplit (const char* string /*none*/, const char* delimiter /*none*/, gint max_tokens);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> strsplit (const gi::cstring_v string, const gi::cstring_v delimiter, gint max_tokens) noexcept;

// gchar** /*full*/ g_strsplit_set (const gchar* string /*none*/, const gchar* delimiters /*none*/, gint max_tokens);
// char** /*full*/ g_strsplit_set (const char* string /*none*/, const char* delimiters /*none*/, gint max_tokens);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> strsplit_set (const gi::cstring_v string, const gi::cstring_v delimiters, gint max_tokens) noexcept;

// gchar* /*full*/ g_strstr_len (const gchar* haystack /*none*/, gssize haystack_len, const gchar* needle /*none*/);
// char* /*full*/ g_strstr_len (const char* haystack /*none*/, gssize haystack_len, const char* needle /*none*/);
GI_INLINE_DECL gi::cstring strstr_len (const gi::cstring_v haystack, gssize haystack_len, const gi::cstring_v needle) noexcept;

// gdouble g_strtod (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/);
// gdouble g_strtod (const char* nptr /*none*/, char** endptr /*none,out,opt*/);
GI_INLINE_DECL gdouble strtod (const gi::cstring_v nptr, gi::cstring_v * endptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gi::cstring_v> strtod (const gi::cstring_v nptr) noexcept;

// gboolean g_strv_contains (const gchar* const* strv /*none*/, const gchar* str /*none*/);
// gboolean g_strv_contains (const char* strv /*none*/, const char* str /*none*/);
// IGNORE; marked ignore

// gboolean g_strv_equal (const gchar* const* strv1 /*none*/, const gchar* const* strv2 /*none*/);
// gboolean g_strv_equal (const char* strv1 /*none*/, const char* strv2 /*none*/);
// SKIP; inconsistent strv2 in pointer depth (2 vs 1), inconsistent strv1 in pointer depth (2 vs 1)

// GType g_strv_get_type ();
// GType g_strv_get_type ();
GI_INLINE_DECL GType strv_get_type () noexcept;

// guint g_strv_length (gchar** str_array /*none*/);
// guint g_strv_length (char* str_array /*none*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// void g_test_add_data_func (const char* testpath /*none*/, gconstpointer test_data, GTestDataFunc test_func /*none*/);
// void g_test_add_data_func (const char* testpath /*none*/, const void* test_data,  test_func /*none*/);
// SKIP; test_func type  not supported

// void g_test_add_data_func_full (const char* testpath /*none*/, gpointer test_data, GTestDataFunc test_func /*none*/, GDestroyNotify data_free_func /*none*/);
// void g_test_add_data_func_full (const char* testpath /*none*/, void* test_data,  test_func /*none*/, GLib::DestroyNotify::cfunction_type data_free_func /*none*/);
// SKIP; test_func type  not supported

// void g_test_add_func (const char* testpath /*none*/, GTestFunc test_func /*none*/);
// void g_test_add_func (const char* testpath /*none*/,  test_func /*none*/);
// SKIP; test_func type  not supported

// void g_test_add_vtable (const char* testpath /*none*/, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup /*none*/, GTestFixtureFunc data_test /*none*/, GTestFixtureFunc data_teardown /*none*/);
// void g_test_add_vtable (const char* testpath /*none*/, gsize data_size, const void* test_data,  data_setup /*none*/,  data_test /*none*/,  data_teardown /*none*/);
// IGNORE; not introspectable, data_teardown type  not supported, data_test type  not supported, data_setup type  not supported

// void g_test_assert_expected_messages_internal (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/);
// void g_test_assert_expected_messages_internal (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/);
GI_INLINE_DECL void test_assert_expected_messages_internal (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept;

// void g_test_bug (const char* bug_uri_snippet /*none*/);
// void g_test_bug (const char* bug_uri_snippet /*none*/);
GI_INLINE_DECL void test_bug (const gi::cstring_v bug_uri_snippet) noexcept;

// void g_test_bug_base (const char* uri_pattern /*none*/);
// void g_test_bug_base (const char* uri_pattern /*none*/);
GI_INLINE_DECL void test_bug_base (const gi::cstring_v uri_pattern) noexcept;

// gchar* /*full*/ g_test_build_filename (GTestFileType file_type, const gchar* first_path /*none*/,  ..._ /*none*/);
// char* /*full*/ g_test_build_filename (::GTestFileType file_type, const char* first_path /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_test_create_case; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_test_create_suite; No such node (<xmlattr>.transfer-ownership)
// void g_test_disable_crash_reporting ();
// void g_test_disable_crash_reporting ();
GI_INLINE_DECL void test_disable_crash_reporting () noexcept;

// void g_test_expect_message (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* pattern /*none*/);
// void g_test_expect_message (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* pattern /*none*/);
GI_INLINE_DECL void test_expect_message (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v pattern) noexcept;
GI_INLINE_DECL void test_expect_message (GLib::LogLevelFlags log_level, const gi::cstring_v pattern) noexcept;

// void g_test_fail ();
// void g_test_fail ();
GI_INLINE_DECL void test_fail () noexcept;

// void g_test_fail_printf (const char* format /*none*/,  ..._ /*none*/);
// void g_test_fail_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_failed ();
// gboolean g_test_failed ();
GI_INLINE_DECL bool test_failed () noexcept;

// const gchar* /*none*/ g_test_get_dir (GTestFileType file_type);
// const char* /*none*/ g_test_get_dir (::GTestFileType file_type);
GI_INLINE_DECL gi::cstring_v test_get_dir (GLib::TestFileType file_type) noexcept;

// const gchar* /*none*/ g_test_get_filename (GTestFileType file_type, const gchar* first_path /*none*/,  ..._ /*none*/);
// const char* /*none*/ g_test_get_filename (::GTestFileType file_type, const char* first_path /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const char* /*none*/ g_test_get_path ();
// const char* /*none*/ g_test_get_path ();
GI_INLINE_DECL gi::cstring_v test_get_path () noexcept;

// FAILURE on g_test_get_root; No such node (<xmlattr>.transfer-ownership)
// void g_test_incomplete (const gchar* msg /*none,nullable*/);
// void g_test_incomplete (const char* msg /*none,nullable*/);
GI_INLINE_DECL void test_incomplete (const gi::cstring_v msg) noexcept;
GI_INLINE_DECL void test_incomplete () noexcept;

// void g_test_incomplete_printf (const char* format /*none*/,  ..._ /*none*/);
// void g_test_incomplete_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_test_init (int* argc, char*** argv /*none*/,  ..._ /*none*/);
// void g_test_init (gint argc, char* argv /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_test_log_set_fatal_handler (GTestLogFatalFunc log_func /*none*/, gpointer user_data);
// void g_test_log_set_fatal_handler (GLib::TestLogFatalFunc::cfunction_type log_func /*none*/, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// const char* /*none*/ g_test_log_type_name (GTestLogType log_type);
// const char* /*none*/ g_test_log_type_name (::GTestLogType log_type);
GI_INLINE_DECL gi::cstring_v test_log_type_name (GLib::TestLogType log_type) noexcept;

// void g_test_maximized_result (double maximized_quantity, const char* format /*none*/,  ..._ /*none*/);
// void g_test_maximized_result (gdouble maximized_quantity, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_test_message (const char* format /*none*/,  ..._ /*none*/);
// void g_test_message (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_test_minimized_result (double minimized_quantity, const char* format /*none*/,  ..._ /*none*/);
// void g_test_minimized_result (gdouble minimized_quantity, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_test_queue_destroy (GDestroyNotify destroy_func /*none*/, gpointer destroy_data);
// void g_test_queue_destroy (GLib::DestroyNotify::cfunction_type destroy_func /*none*/, void* destroy_data);
// SKIP; callback misses closure info

// double g_test_rand_double ();
// gdouble g_test_rand_double ();
GI_INLINE_DECL gdouble test_rand_double () noexcept;

// double g_test_rand_double_range (double range_start, double range_end);
// gdouble g_test_rand_double_range (gdouble range_start, gdouble range_end);
GI_INLINE_DECL gdouble test_rand_double_range (gdouble range_start, gdouble range_end) noexcept;

// gint32 g_test_rand_int ();
// gint32 g_test_rand_int ();
GI_INLINE_DECL gint32 test_rand_int () noexcept;

// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
GI_INLINE_DECL gint32 test_rand_int_range (gint32 begin, gint32 end) noexcept;

// int g_test_run ();
// gint g_test_run ();
GI_INLINE_DECL gint test_run () noexcept;

// int g_test_run_suite (GTestSuite* suite /*none*/);
// gint g_test_run_suite ( suite /*none*/);
// SKIP; suite type  not supported

// void g_test_set_nonfatal_assertions ();
// void g_test_set_nonfatal_assertions ();
GI_INLINE_DECL void test_set_nonfatal_assertions () noexcept;

// void g_test_skip (const gchar* msg /*none,nullable*/);
// void g_test_skip (const char* msg /*none,nullable*/);
GI_INLINE_DECL void test_skip (const gi::cstring_v msg) noexcept;
GI_INLINE_DECL void test_skip () noexcept;

// void g_test_skip_printf (const char* format /*none*/,  ..._ /*none*/);
// void g_test_skip_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_subprocess ();
// gboolean g_test_subprocess ();
GI_INLINE_DECL bool test_subprocess () noexcept;

// void g_test_summary (const char* summary /*none*/);
// void g_test_summary (const char* summary /*none*/);
GI_INLINE_DECL void test_summary (const gi::cstring_v summary) noexcept;

// double g_test_timer_elapsed ();
// gdouble g_test_timer_elapsed ();
GI_INLINE_DECL gdouble test_timer_elapsed () noexcept;

// double g_test_timer_last ();
// gdouble g_test_timer_last ();
GI_INLINE_DECL gdouble test_timer_last () noexcept;

// void g_test_timer_start ();
// void g_test_timer_start ();
GI_INLINE_DECL void test_timer_start () noexcept;

// void g_test_trap_assertions (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, guint64 assertion_flags, const char* pattern /*none*/);
// void g_test_trap_assertions (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, guint64 assertion_flags, const char* pattern /*none*/);
GI_INLINE_DECL void test_trap_assertions (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, guint64 assertion_flags, const gi::cstring_v pattern) noexcept;

// gboolean g_test_trap_has_passed ();
// gboolean g_test_trap_has_passed ();
GI_INLINE_DECL bool test_trap_has_passed () noexcept;

// gboolean g_test_trap_reached_timeout ();
// gboolean g_test_trap_reached_timeout ();
GI_INLINE_DECL bool test_trap_reached_timeout () noexcept;

// void g_test_trap_subprocess (const char* test_path /*none,nullable*/, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess (const char* test_path /*none,nullable*/, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
GI_INLINE_DECL void test_trap_subprocess (const gi::cstring_v test_path, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;
GI_INLINE_DECL void test_trap_subprocess (guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;

// void g_test_trap_subprocess_with_envp (const char* test_path /*none,nullable*/, const char* const* envp /*none,nullable*/, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess_with_envp (const char* test_path /*none,nullable*/, const char** envp /*none,nullable*/, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
GI_INLINE_DECL void test_trap_subprocess_with_envp (const gi::cstring_v test_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;
GI_INLINE_DECL void test_trap_subprocess_with_envp (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;

// guint g_timeout_add (guint interval, GSourceFunc function /*none*/, gpointer data);
// guint g_timeout_add (guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_full

// guint g_timeout_add_full (gint priority, guint interval, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_timeout_add_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
GI_INLINE_DECL guint timeout_add (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// guint g_timeout_add_once (guint interval, GSourceOnceFunc function /*none*/, gpointer data);
// guint g_timeout_add_once (guint interval, GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// guint g_timeout_add_seconds (guint interval, GSourceFunc function /*none*/, gpointer data);
// guint g_timeout_add_seconds (guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_seconds_full

// guint g_timeout_add_seconds_full (gint priority, guint interval, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_timeout_add_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
GI_INLINE_DECL guint timeout_add_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// guint g_timeout_add_seconds_once (guint interval, GSourceOnceFunc function /*none*/, gpointer data);
// guint g_timeout_add_seconds_once (guint interval, GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// GSource* /*full*/ g_timeout_source_new (guint interval);
// ::GSource* /*full*/ g_timeout_source_new (guint interval);
GI_INLINE_DECL GLib::Source timeout_source_new (guint interval) noexcept;

// GSource* /*full*/ g_timeout_source_new_seconds (guint interval);
// ::GSource* /*full*/ g_timeout_source_new_seconds (guint interval);
GI_INLINE_DECL GLib::Source timeout_source_new_seconds (guint interval) noexcept;

// gpointer g_try_malloc (gsize n_bytes);
// void* g_try_malloc (gsize n_bytes);
GI_INLINE_DECL gpointer try_malloc (gsize n_bytes) noexcept;

// gpointer g_try_malloc0 (gsize n_bytes);
// void* g_try_malloc0 (gsize n_bytes);
GI_INLINE_DECL gpointer try_malloc0 (gsize n_bytes) noexcept;

// gpointer g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_try_realloc (gpointer mem, gsize n_bytes);
// void* g_try_realloc (void* mem, gsize n_bytes);
GI_INLINE_DECL gpointer try_realloc (void* mem, gsize n_bytes) noexcept;

// gpointer g_try_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept;

// gunichar2* g_ucs4_to_utf16 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_ucs4_to_utf16 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_ucs4_to_utf8 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// char* /*full*/ g_ucs4_to_utf8 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
GI_INLINE_DECL gi::cstring ucs4_to_utf8 (const gunichar * str, glong len, glong * items_read, glong * items_written);
GI_INLINE_DECL gi::cstring ucs4_to_utf8 (const gunichar * str, glong len, glong * items_read, glong * items_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, glong, glong> ucs4_to_utf8 (const gunichar * str, glong len);
GI_INLINE_DECL std::tuple<gi::cstring, glong, glong> ucs4_to_utf8 (const gunichar * str, glong len, GLib::Error * _error) noexcept;

// GUnicodeBreakType g_unichar_break_type (gunichar c);
// ::GUnicodeBreakType g_unichar_break_type (gunichar c);
GI_INLINE_DECL GLib::UnicodeBreakType unichar_break_type (gunichar c) noexcept;

// gint g_unichar_combining_class (gunichar uc);
// gint g_unichar_combining_class (gunichar uc);
GI_INLINE_DECL gint unichar_combining_class (gunichar uc) noexcept;

// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
GI_INLINE_DECL bool unichar_compose (gunichar a, gunichar b, gunichar & ch) noexcept;
GI_INLINE_DECL std::tuple<bool, gunichar> unichar_compose (gunichar a, gunichar b) noexcept;

// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
GI_INLINE_DECL bool unichar_decompose (gunichar ch, gunichar & a, gunichar & b) noexcept;
GI_INLINE_DECL std::tuple<bool, gunichar, gunichar> unichar_decompose (gunichar ch) noexcept;

// gint g_unichar_digit_value (gunichar c);
// gint g_unichar_digit_value (gunichar c);
GI_INLINE_DECL gint unichar_digit_value (gunichar c) noexcept;

// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar* result, gsize result_len);
// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar result, gsize result_len);
// SKIP; inconsistent result out pointer depth (1 vs 0)

// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
GI_INLINE_DECL bool unichar_get_mirror_char (gunichar ch, gunichar & mirrored_ch) noexcept;
GI_INLINE_DECL std::tuple<bool, gunichar> unichar_get_mirror_char (gunichar ch) noexcept;

// GUnicodeScript g_unichar_get_script (gunichar ch);
// ::GUnicodeScript g_unichar_get_script (gunichar ch);
GI_INLINE_DECL GLib::UnicodeScript unichar_get_script (gunichar ch) noexcept;

// gboolean g_unichar_isalnum (gunichar c);
// gboolean g_unichar_isalnum (gunichar c);
GI_INLINE_DECL bool unichar_isalnum (gunichar c) noexcept;

// gboolean g_unichar_isalpha (gunichar c);
// gboolean g_unichar_isalpha (gunichar c);
GI_INLINE_DECL bool unichar_isalpha (gunichar c) noexcept;

// gboolean g_unichar_iscntrl (gunichar c);
// gboolean g_unichar_iscntrl (gunichar c);
GI_INLINE_DECL bool unichar_iscntrl (gunichar c) noexcept;

// gboolean g_unichar_isdefined (gunichar c);
// gboolean g_unichar_isdefined (gunichar c);
GI_INLINE_DECL bool unichar_isdefined (gunichar c) noexcept;

// gboolean g_unichar_isdigit (gunichar c);
// gboolean g_unichar_isdigit (gunichar c);
GI_INLINE_DECL bool unichar_isdigit (gunichar c) noexcept;

// gboolean g_unichar_isgraph (gunichar c);
// gboolean g_unichar_isgraph (gunichar c);
GI_INLINE_DECL bool unichar_isgraph (gunichar c) noexcept;

// gboolean g_unichar_islower (gunichar c);
// gboolean g_unichar_islower (gunichar c);
GI_INLINE_DECL bool unichar_islower (gunichar c) noexcept;

// gboolean g_unichar_ismark (gunichar c);
// gboolean g_unichar_ismark (gunichar c);
GI_INLINE_DECL bool unichar_ismark (gunichar c) noexcept;

// gboolean g_unichar_isprint (gunichar c);
// gboolean g_unichar_isprint (gunichar c);
GI_INLINE_DECL bool unichar_isprint (gunichar c) noexcept;

// gboolean g_unichar_ispunct (gunichar c);
// gboolean g_unichar_ispunct (gunichar c);
GI_INLINE_DECL bool unichar_ispunct (gunichar c) noexcept;

// gboolean g_unichar_isspace (gunichar c);
// gboolean g_unichar_isspace (gunichar c);
GI_INLINE_DECL bool unichar_isspace (gunichar c) noexcept;

// gboolean g_unichar_istitle (gunichar c);
// gboolean g_unichar_istitle (gunichar c);
GI_INLINE_DECL bool unichar_istitle (gunichar c) noexcept;

// gboolean g_unichar_isupper (gunichar c);
// gboolean g_unichar_isupper (gunichar c);
GI_INLINE_DECL bool unichar_isupper (gunichar c) noexcept;

// gboolean g_unichar_iswide (gunichar c);
// gboolean g_unichar_iswide (gunichar c);
GI_INLINE_DECL bool unichar_iswide (gunichar c) noexcept;

// gboolean g_unichar_iswide_cjk (gunichar c);
// gboolean g_unichar_iswide_cjk (gunichar c);
GI_INLINE_DECL bool unichar_iswide_cjk (gunichar c) noexcept;

// gboolean g_unichar_isxdigit (gunichar c);
// gboolean g_unichar_isxdigit (gunichar c);
GI_INLINE_DECL bool unichar_isxdigit (gunichar c) noexcept;

// gboolean g_unichar_iszerowidth (gunichar c);
// gboolean g_unichar_iszerowidth (gunichar c);
GI_INLINE_DECL bool unichar_iszerowidth (gunichar c) noexcept;

// gint g_unichar_to_utf8 (gunichar c, gchar* outbuf /*none,out,opt,ca*/);
// gint g_unichar_to_utf8 (gunichar c, char* outbuf /*none,out,opt,ca*/);
// IGNORE; marked ignore

// gunichar g_unichar_tolower (gunichar c);
// gunichar g_unichar_tolower (gunichar c);
GI_INLINE_DECL gunichar unichar_tolower (gunichar c) noexcept;

// gunichar g_unichar_totitle (gunichar c);
// gunichar g_unichar_totitle (gunichar c);
GI_INLINE_DECL gunichar unichar_totitle (gunichar c) noexcept;

// gunichar g_unichar_toupper (gunichar c);
// gunichar g_unichar_toupper (gunichar c);
GI_INLINE_DECL gunichar unichar_toupper (gunichar c) noexcept;

// GUnicodeType g_unichar_type (gunichar c);
// ::GUnicodeType g_unichar_type (gunichar c);
GI_INLINE_DECL GLib::UnicodeType unichar_type (gunichar c) noexcept;

// gboolean g_unichar_validate (gunichar ch);
// gboolean g_unichar_validate (gunichar ch);
GI_INLINE_DECL bool unichar_validate (gunichar ch) noexcept;

// gint g_unichar_xdigit_value (gunichar c);
// gint g_unichar_xdigit_value (gunichar c);
GI_INLINE_DECL gint unichar_xdigit_value (gunichar c) noexcept;

// void g_unicode_canonical_ordering (gunichar* string /*none*/, gsize len);
// void g_unicode_canonical_ordering (gunichar* string /*none*/, gsize len);
GI_INLINE_DECL void unicode_canonical_ordering (const gunichar * string, gsize len) noexcept;

// GQuark g_unix_error_quark ();
// ::GQuark g_unix_error_quark ();
GI_INLINE_DECL GLib::Quark unix_error_quark () noexcept;

// guint g_unix_fd_add (gint fd, GIOCondition condition, GUnixFDSourceFunc function /*none*/, gpointer user_data);
// guint g_unix_fd_add (gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function /*none*/, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_unix_fd_add_full (gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_unix_fd_add_full (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
GI_INLINE_DECL guint unix_fd_add_full (gint priority, gint fd, GLib::IOCondition condition, GLib::UnixFDSourceFunc function) noexcept;

// GSource* /*full*/ g_unix_fd_source_new (gint fd, GIOCondition condition);
// ::GSource* /*full*/ g_unix_fd_source_new (gint fd, ::GIOCondition condition);
GI_INLINE_DECL GLib::Source unix_fd_source_new (gint fd, GLib::IOCondition condition) noexcept;

// passwd* g_unix_get_passwd_entry (const gchar* user_name /*none*/, GError ** error);
// void* g_unix_get_passwd_entry (const char* user_name /*none*/, GError ** error);
GI_INLINE_DECL gpointer unix_get_passwd_entry (const gi::cstring_v user_name);
GI_INLINE_DECL gpointer unix_get_passwd_entry (const gi::cstring_v user_name, GLib::Error * _error) noexcept;

// gboolean g_unix_open_pipe (gint* fds /*none*/, gint flags, GError ** error);
// gboolean g_unix_open_pipe (gint* fds /*none*/, gint flags, GError ** error);
GI_INLINE_DECL bool unix_open_pipe (gi::CollectionParameter<gi::FSpan<2>, gint, gi::transfer_none_t> fds, gint flags);
GI_INLINE_DECL bool unix_open_pipe (gi::CollectionParameter<gi::FSpan<2>, gint, gi::transfer_none_t> fds, gint flags, GLib::Error * _error) noexcept;

// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
GI_INLINE_DECL bool unix_set_fd_nonblocking (gint fd, gboolean nonblock);
GI_INLINE_DECL bool unix_set_fd_nonblocking (gint fd, gboolean nonblock, GLib::Error * _error) noexcept;

// guint g_unix_signal_add (gint signum, GSourceFunc handler /*none*/, gpointer user_data);
// guint g_unix_signal_add (gint signum, GLib::SourceFunc::cfunction_type handler /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by unix_signal_add_full

// guint g_unix_signal_add_full (gint priority, gint signum, GSourceFunc handler /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_unix_signal_add_full (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
GI_INLINE_DECL guint unix_signal_add (gint priority, gint signum, GLib::SourceFunc handler) noexcept;

// GSource* /*full*/ g_unix_signal_source_new (gint signum);
// ::GSource* /*full*/ g_unix_signal_source_new (gint signum);
GI_INLINE_DECL GLib::Source unix_signal_source_new (gint signum) noexcept;

// int g_unlink (const gchar* filename /*none*/);
// gint g_unlink (const char* filename /*none*/);
GI_INLINE_DECL gint unlink (const gi::cstring_v filename) noexcept;

// void g_unsetenv (const gchar* variable /*none*/);
// void g_unsetenv (const char* variable /*none*/);
GI_INLINE_DECL void unsetenv (const gi::cstring_v variable) noexcept;

// void g_usleep (gulong microseconds);
// void g_usleep (gulong microseconds);
GI_INLINE_DECL void usleep (gulong microseconds) noexcept;

// gunichar* g_utf16_to_ucs4 (const gunichar2* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf16_to_ucs4 (const guint16* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_utf16_to_utf8 (const gunichar2* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// char* /*full*/ g_utf16_to_utf8 (const guint16* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
GI_INLINE_DECL gi::cstring utf16_to_utf8 (const guint16 * str, glong len, glong * items_read, glong * items_written);
GI_INLINE_DECL gi::cstring utf16_to_utf8 (const guint16 * str, glong len, glong * items_read, glong * items_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, glong, glong> utf16_to_utf8 (const guint16 * str, glong len);
GI_INLINE_DECL std::tuple<gi::cstring, glong, glong> utf16_to_utf8 (const guint16 * str, glong len, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_utf8_casefold (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_casefold (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_casefold (const gi::cstring_v str, gssize len) noexcept;

// gint g_utf8_collate (const gchar* str1 /*none*/, const gchar* str2 /*none*/);
// gint g_utf8_collate (const char* str1 /*none*/, const char* str2 /*none*/);
GI_INLINE_DECL gint utf8_collate (const gi::cstring_v str1, const gi::cstring_v str2) noexcept;

// gchar* /*full*/ g_utf8_collate_key (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_collate_key (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_collate_key (const gi::cstring_v str, gssize len) noexcept;

// gchar* /*full*/ g_utf8_collate_key_for_filename (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_collate_key_for_filename (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_collate_key_for_filename (const gi::cstring_v str, gssize len) noexcept;

// gchar* /*none,nullable*/ g_utf8_find_next_char (const gchar* p /*none*/, const gchar* end /*none,nullable*/);
// char* /*none,nullable*/ g_utf8_find_next_char (const char* p /*none*/, const char* end /*none,nullable*/);
GI_INLINE_DECL gi::cstring_v utf8_find_next_char (const gi::cstring_v p, const gi::cstring_v end) noexcept;
GI_INLINE_DECL gi::cstring_v utf8_find_next_char (const gi::cstring_v p) noexcept;

// gchar* /*none,nullable*/ g_utf8_find_prev_char (const gchar* str /*none*/, const gchar* p /*none*/);
// char* /*none,nullable*/ g_utf8_find_prev_char (const char* str /*none*/, const char* p /*none*/);
GI_INLINE_DECL gi::cstring_v utf8_find_prev_char (const gi::cstring_v str, const gi::cstring_v p) noexcept;

// gunichar g_utf8_get_char (const gchar* p /*none*/);
// gunichar g_utf8_get_char (const char* p /*none*/);
GI_INLINE_DECL gunichar utf8_get_char (const gi::cstring_v p) noexcept;

// gunichar g_utf8_get_char_validated (const gchar* p /*none*/, gssize max_len);
// gunichar g_utf8_get_char_validated (const char* p /*none*/, gssize max_len);
GI_INLINE_DECL gunichar utf8_get_char_validated (const gi::cstring_v p, gssize max_len) noexcept;

// gchar* /*full*/ g_utf8_make_valid (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_make_valid (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_make_valid (const gi::cstring_v str, gssize len) noexcept;

// gchar* /*full,nullable*/ g_utf8_normalize (const gchar* str /*none*/, gssize len, GNormalizeMode mode);
// char* /*full,nullable*/ g_utf8_normalize (const char* str /*none*/, gssize len, ::GNormalizeMode mode);
GI_INLINE_DECL gi::cstring utf8_normalize (const gi::cstring_v str, gssize len, GLib::NormalizeMode mode) noexcept;

// gchar* /*none*/ g_utf8_offset_to_pointer (const gchar* str /*none*/, glong offset);
// char* /*none*/ g_utf8_offset_to_pointer (const char* str /*none*/, glong offset);
GI_INLINE_DECL gi::cstring_v utf8_offset_to_pointer (const gi::cstring_v str, glong offset) noexcept;

// glong g_utf8_pointer_to_offset (const gchar* str /*none*/, const gchar* pos /*none*/);
// glong g_utf8_pointer_to_offset (const char* str /*none*/, const char* pos /*none*/);
GI_INLINE_DECL glong utf8_pointer_to_offset (const gi::cstring_v str, const gi::cstring_v pos) noexcept;

// gchar* /*none*/ g_utf8_prev_char (const gchar* p /*none*/);
// char* /*none*/ g_utf8_prev_char (const char* p /*none*/);
GI_INLINE_DECL gi::cstring_v utf8_prev_char (const gi::cstring_v p) noexcept;

// gchar* /*none,nullable*/ g_utf8_strchr (const gchar* p /*none*/, gssize len, gunichar c);
// char* /*none,nullable*/ g_utf8_strchr (const char* p /*none*/, gssize len, gunichar c);
GI_INLINE_DECL gi::cstring_v utf8_strchr (const gi::cstring_v p, gssize len, gunichar c) noexcept;

// gchar* /*full*/ g_utf8_strdown (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strdown (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_strdown (const gi::cstring_v str, gssize len) noexcept;

// glong g_utf8_strlen (const gchar* p /*none*/, gssize max);
// glong g_utf8_strlen (const char* p /*none*/, gssize max);
GI_INLINE_DECL glong utf8_strlen (const gi::cstring_v p, gssize max) noexcept;

// gchar* /*none*/ g_utf8_strncpy (gchar* dest /*none*/, const gchar* src /*none*/, gsize n);
// char* /*none*/ g_utf8_strncpy (char* dest /*none*/, const char* src /*none*/, gsize n);
GI_INLINE_DECL gi::cstring_v utf8_strncpy (gi::cstring_v dest, const gi::cstring_v src, gsize n) noexcept;

// gchar* /*none,nullable*/ g_utf8_strrchr (const gchar* p /*none*/, gssize len, gunichar c);
// char* /*none,nullable*/ g_utf8_strrchr (const char* p /*none*/, gssize len, gunichar c);
GI_INLINE_DECL gi::cstring_v utf8_strrchr (const gi::cstring_v p, gssize len, gunichar c) noexcept;

// gchar* /*full*/ g_utf8_strreverse (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strreverse (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_strreverse (const gi::cstring_v str, gssize len) noexcept;

// gchar* /*full*/ g_utf8_strup (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strup (const char* str /*none*/, gssize len);
GI_INLINE_DECL gi::cstring utf8_strup (const gi::cstring_v str, gssize len) noexcept;

// gchar* /*full*/ g_utf8_substring (const gchar* str /*none*/, glong start_pos, glong end_pos);
// char* /*full*/ g_utf8_substring (const char* str /*none*/, glong start_pos, glong end_pos);
GI_INLINE_DECL gi::cstring utf8_substring (const gi::cstring_v str, glong start_pos, glong end_pos) noexcept;

// gunichar* g_utf8_to_ucs4 (const gchar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf8_to_ucs4 (const char* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gunichar* g_utf8_to_ucs4_fast (const gchar* str /*none*/, glong len, glong* items_written);
// gunichar g_utf8_to_ucs4_fast (const char* str /*none*/, glong len, glong* items_written);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gunichar2* g_utf8_to_utf16 (const gchar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_utf8_to_utf16 (const char* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_utf8_truncate_middle (const gchar* string /*none*/, gsize truncate_length);
// char* /*full*/ g_utf8_truncate_middle (const char* string /*none*/, gsize truncate_length);
GI_INLINE_DECL gi::cstring utf8_truncate_middle (const gi::cstring_v string, gsize truncate_length) noexcept;

// gboolean g_utf8_validate (const gchar* str /*none*/, gssize max_len, const gchar** end /*none,out,opt*/);
// gboolean g_utf8_validate (const guint8* str /*none*/, gssize max_len, const char** end /*none,out,opt*/);
GI_INLINE_DECL bool utf8_validate (const guint8 * str, gssize max_len, gi::cstring_v * end) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v> utf8_validate (const guint8 * str, gssize max_len) noexcept;

// gboolean g_utf8_validate_len (const gchar* str /*none*/, gsize max_len, const gchar** end /*none,out,opt*/);
// gboolean g_utf8_validate_len (const guint8* str /*none*/, gsize max_len, const char** end /*none,out,opt*/);
GI_INLINE_DECL bool utf8_validate_len (const guint8 * str, gsize max_len, gi::cstring_v * end) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v> utf8_validate_len (const guint8 * str, gsize max_len) noexcept;

// int g_utime (const gchar* filename /*none*/, utimbuf* utb);
// gint g_utime (const char* filename /*none*/, void* utb);
GI_INLINE_DECL gint utime (const gi::cstring_v filename, void* utb) noexcept;

// gboolean g_uuid_string_is_valid (const gchar* str /*none*/);
// gboolean g_uuid_string_is_valid (const char* str /*none*/);
GI_INLINE_DECL bool uuid_string_is_valid (const gi::cstring_v str) noexcept;

// gchar* /*full*/ g_uuid_string_random ();
// char* /*full*/ g_uuid_string_random ();
GI_INLINE_DECL gi::cstring uuid_string_random () noexcept;

// GType g_variant_get_gtype ();
// GType g_variant_get_gtype ();
// IGNORE; marked ignore

// gint g_vasprintf (gchar** string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// gint g_vasprintf (char* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported, inconsistent string in pointer depth (2 vs 1)

// gint g_vfprintf (FILE* file, const gchar* format /*none*/, va_list args /*none*/);
// gint g_vfprintf (void* file, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gint g_vprintf (const gchar* format /*none*/, va_list args /*none*/);
// gint g_vprintf (const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gint g_vsnprintf (gchar* string /*none*/, gulong n, const gchar* format /*none*/, va_list args /*none*/);
// gint g_vsnprintf (char* string /*none*/, gulong n, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gint g_vsprintf (gchar* string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// gint g_vsprintf (char* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_warn_message (const char* domain /*none,nullable*/, const char* file /*none*/, int line, const char* func /*none*/, const char* warnexpr /*none,nullable*/);
// void g_warn_message (const char* domain /*none,nullable*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* warnexpr /*none,nullable*/);
GI_INLINE_DECL void warn_message (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v warnexpr) noexcept;
GI_INLINE_DECL void warn_message (const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept;

// gboolean g_win32_check_windows_version (const gint major, const gint minor, const gint spver, const GWin32OSType os_type /*none*/);
// gboolean g_win32_check_windows_version (const gint major, const gint minor, const gint spver, const  os_type /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_win32_error_message (gint error);
// char* /*full*/ g_win32_error_message (gint error);
// IGNORE; marked ignore

// gint g_win32_ftruncate (gint f, guint size);
// gint g_win32_ftruncate (gint f, guint size);
// IGNORE; marked ignore

// FAILURE on g_win32_get_command_line; No such node (<xmlattr>.transfer-ownership)
// gchar* /*full*/ g_win32_get_package_installation_directory (const gchar* package /*none*/, const gchar* dll_name /*none*/);
// char* /*full*/ g_win32_get_package_installation_directory (const char* package /*none*/, const char* dll_name /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_win32_get_package_installation_directory_of_module (gpointer hmodule);
// char* /*full*/ g_win32_get_package_installation_directory_of_module (void* hmodule);
// IGNORE; marked ignore

// gchar* /*full*/ g_win32_get_package_installation_subdirectory (const gchar* package /*none*/, const gchar* dll_name /*none*/, const gchar* subdir /*none*/);
// char* /*full*/ g_win32_get_package_installation_subdirectory (const char* package /*none*/, const char* dll_name /*none*/, const char* subdir /*none*/);
// IGNORE; marked ignore

// guint g_win32_get_windows_version ();
// guint g_win32_get_windows_version ();
// IGNORE; marked ignore

// gchar* /*full*/ g_win32_getlocale ();
// char* /*full*/ g_win32_getlocale ();
// IGNORE; marked ignore

// gchar* /*full*/ g_win32_locale_filename_from_utf8 (const gchar* utf8filename /*none*/);
// char* /*full*/ g_win32_locale_filename_from_utf8 (const char* utf8filename /*none*/);
// IGNORE; marked ignore

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
