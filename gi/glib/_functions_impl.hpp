// AUTO-GENERATED

#ifndef _GI_GLIB__FUNCTIONS_IMPL_HPP_
#define _GI_GLIB__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace UnicodeScriptNS_ {

// GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
// ::GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
GLib::UnicodeScript from_iso15924 (guint32 iso15924) noexcept
{
  typedef ::GUnicodeScript (*call_wrap_t) (guint32 iso15924);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unicode_script_from_iso15924;
  auto iso15924_to_c = iso15924;
  auto _temp_ret = call_wrap_v ((guint32) (iso15924_to_c));
  return gi::wrap (_temp_ret);
}

// guint32 g_unicode_script_to_iso15924 (GUnicodeScript script);
// guint32 g_unicode_script_to_iso15924 (::GUnicodeScript script);
guint32 to_iso15924 (GLib::UnicodeScript script) noexcept
{
  typedef guint32 (*call_wrap_t) (::GUnicodeScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unicode_script_to_iso15924;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::GUnicodeScript) (script_to_c));
  return _temp_ret;
}

} // namespace UnicodeScriptNS_

// int g_access (const gchar* filename /*none*/, int mode);
// gint g_access (const char* filename /*none*/, gint mode);
gint access (const gi::cstring_v filename, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_access;
  auto mode_to_c = mode;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// gpointer g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
gpointer aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes, gsize alignment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_aligned_alloc;
  auto alignment_to_c = alignment;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c), (gsize) (alignment_to_c));
  return _temp_ret;
}

// gpointer g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
gpointer aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes, gsize alignment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_aligned_alloc0;
  auto alignment_to_c = alignment;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c), (gsize) (alignment_to_c));
  return _temp_ret;
}

// void g_aligned_free_sized (gpointer mem, size_t alignment, size_t size);
// void g_aligned_free_sized (void* mem, gsize alignment, gsize size);
void aligned_free_sized (void* mem, gsize alignment, gsize size) noexcept
{
  typedef void (*call_wrap_t) (void* mem, gsize alignment, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_aligned_free_sized;
  auto size_to_c = size;
  auto alignment_to_c = alignment;
  auto mem_to_c = mem;
  call_wrap_v ((void*) (mem_to_c), (gsize) (alignment_to_c), (gsize) (size_to_c));
}

// gint g_ascii_digit_value (gchar c);
// gint g_ascii_digit_value (gchar c);
gint ascii_digit_value (gchar c) noexcept
{
  typedef gint (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_digit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_ascii_dtostr (gchar* buffer /*none*/, gint buf_len, gdouble d);
// char* /*full*/ g_ascii_dtostr (char* buffer /*none*/, gint buf_len, gdouble d);
gi::cstring ascii_dtostr (gi::cstring_v buffer, gint buf_len, gdouble d) noexcept
{
  typedef char* (*call_wrap_t) (char* buffer, gint buf_len, gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_dtostr;
  auto d_to_c = d;
  auto buf_len_to_c = buf_len;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (buffer_to_c), (gint) (buf_len_to_c), (gdouble) (d_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_ascii_formatd (gchar* buffer /*none*/, gint buf_len, const gchar* format /*none*/, gdouble d);
// char* /*full*/ g_ascii_formatd (char* buffer /*none*/, gint buf_len, const char* format /*none*/, gdouble d);
gi::cstring ascii_formatd (gi::cstring_v buffer, gint buf_len, const gi::cstring_v format, gdouble d) noexcept
{
  typedef char* (*call_wrap_t) (char* buffer, gint buf_len, const char* format, gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_formatd;
  auto d_to_c = d;
  auto format_to_c = gi::unwrap (format, gi::transfer_none);
  auto buf_len_to_c = buf_len;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (buffer_to_c), (gint) (buf_len_to_c), (const char*) (format_to_c), (gdouble) (d_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_ascii_strcasecmp (const gchar* s1 /*none*/, const gchar* s2 /*none*/);
// gint g_ascii_strcasecmp (const char* s1 /*none*/, const char* s2 /*none*/);
gint ascii_strcasecmp (const gi::cstring_v s1, const gi::cstring_v s2) noexcept
{
  typedef gint (*call_wrap_t) (const char* s1, const char* s2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strcasecmp;
  auto s2_to_c = gi::unwrap (s2, gi::transfer_none);
  auto s1_to_c = gi::unwrap (s1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (s1_to_c), (const char*) (s2_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_ascii_strdown (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_ascii_strdown (const char* str /*none*/, gssize len);
gi::cstring ascii_strdown (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strdown;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_ascii_string_to_signed (const gchar* str /*none*/, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
// gboolean g_ascii_string_to_signed (const char* str /*none*/, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
bool ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, gint64 * out_num)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (out_num ? &out_num_o : nullptr), &error);
  if (out_num) *out_num = out_num_o;
  gi::check_error (error);
  return _temp_ret;
}
bool ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, gint64 * out_num, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (out_num ? &out_num_o : nullptr), _error ? &_error_o : nullptr);
  if (out_num) *out_num = out_num_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gint64> ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (&out_num_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_num_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gint64> ascii_string_to_signed (const gi::cstring_v str, guint base, gint64 min, gint64 max, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (&out_num_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_num_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_ascii_string_to_unsigned (const gchar* str /*none*/, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
// gboolean g_ascii_string_to_unsigned (const char* str /*none*/, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
bool ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, guint64 * out_num)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (out_num ? &out_num_o : nullptr), &error);
  if (out_num) *out_num = out_num_o;
  gi::check_error (error);
  return _temp_ret;
}
bool ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, guint64 * out_num, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (out_num ? &out_num_o : nullptr), _error ? &_error_o : nullptr);
  if (out_num) *out_num = out_num_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, guint64> ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (&out_num_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_num_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> ascii_string_to_unsigned (const gi::cstring_v str, guint base, guint64 min, guint64 max, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (&out_num_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_num_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint g_ascii_strncasecmp (const gchar* s1 /*none*/, const gchar* s2 /*none*/, gsize n);
// gint g_ascii_strncasecmp (const char* s1 /*none*/, const char* s2 /*none*/, gsize n);
gint ascii_strncasecmp (const gi::cstring_v s1, const gi::cstring_v s2, gsize n) noexcept
{
  typedef gint (*call_wrap_t) (const char* s1, const char* s2, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strncasecmp;
  auto n_to_c = n;
  auto s2_to_c = gi::unwrap (s2, gi::transfer_none);
  auto s1_to_c = gi::unwrap (s1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (s1_to_c), (const char*) (s2_to_c), (gsize) (n_to_c));
  return _temp_ret;
}

// gdouble g_ascii_strtod (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/);
// gdouble g_ascii_strtod (const char* nptr /*none*/, char** endptr /*none,out,opt*/);
gdouble ascii_strtod (const gi::cstring_v nptr, gi::cstring_v * endptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<gdouble, gi::cstring_v> ascii_strtod (const gi::cstring_v nptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint64 g_ascii_strtoll (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/, guint base);
// gint64 g_ascii_strtoll (const char* nptr /*none*/, char** endptr /*none,out,opt*/, guint base);
gint64 ascii_strtoll (const gi::cstring_v nptr, gi::cstring_v * endptr, guint base) noexcept
{
  typedef gint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtoll;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr), (guint) (base_to_c));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<gint64, gi::cstring_v> ascii_strtoll (const gi::cstring_v nptr, guint base) noexcept
{
  typedef gint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtoll;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o), (guint) (base_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// guint64 g_ascii_strtoull (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/, guint base);
// guint64 g_ascii_strtoull (const char* nptr /*none*/, char** endptr /*none,out,opt*/, guint base);
guint64 ascii_strtoull (const gi::cstring_v nptr, gi::cstring_v * endptr, guint base) noexcept
{
  typedef guint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtoull;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr), (guint) (base_to_c));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<guint64, gi::cstring_v> ascii_strtoull (const gi::cstring_v nptr, guint base) noexcept
{
  typedef guint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strtoull;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o), (guint) (base_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_ascii_strup (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_ascii_strup (const char* str /*none*/, gssize len);
gi::cstring ascii_strup (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_strup;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar g_ascii_tolower (gchar c);
// gchar g_ascii_tolower (gchar c);
gchar ascii_tolower (gchar c) noexcept
{
  typedef gchar (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_tolower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gchar g_ascii_toupper (gchar c);
// gchar g_ascii_toupper (gchar c);
gchar ascii_toupper (gchar c) noexcept
{
  typedef gchar (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_toupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gint g_ascii_xdigit_value (gchar c);
// gint g_ascii_xdigit_value (gchar c);
gint ascii_xdigit_value (gchar c) noexcept
{
  typedef gint (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ascii_xdigit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// void g_assert_warning (const char* log_domain /*none*/, const char* file /*none*/, const int line, const char* pretty_function /*none*/, const char* expression /*none*/);
// void g_assert_warning (const char* log_domain /*none*/, const char* file /*none*/, const gint line, const char* pretty_function /*none*/, const char* expression /*none*/);
// IGNORE; marked ignore

// void g_assertion_message (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* message /*none*/);
// void g_assertion_message (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* message /*none*/);
void assertion_message (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (message_to_c));
}

// void g_assertion_message_cmpint (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, guint64 arg1, const char* cmp /*none*/, guint64 arg2, char numtype);
// void g_assertion_message_cmpint (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, guint64 arg1, const char* cmp /*none*/, guint64 arg2, gchar numtype);
void assertion_message_cmpint (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, guint64 arg1, const gi::cstring_v cmp, guint64 arg2, gchar numtype) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, guint64 arg1, const char* cmp, guint64 arg2, gchar numtype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message_cmpint;
  auto numtype_to_c = numtype;
  auto arg2_to_c = arg2;
  auto cmp_to_c = gi::unwrap (cmp, gi::transfer_none);
  auto arg1_to_c = arg1;
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (guint64) (arg1_to_c), (const char*) (cmp_to_c), (guint64) (arg2_to_c), (gchar) (numtype_to_c));
}

// void g_assertion_message_cmpnum (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, long double arg1 /*none*/, const char* cmp /*none*/, long double arg2 /*none*/, char numtype);
// void g_assertion_message_cmpnum (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/,  arg1 /*none*/, const char* cmp /*none*/,  arg2 /*none*/, gchar numtype);
// IGNORE; not introspectable, arg2 type  not supported, arg1 type  not supported

// void g_assertion_message_cmpstr (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* cmp /*none*/, const char* arg2 /*none*/);
// void g_assertion_message_cmpstr (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* cmp /*none*/, const char* arg2 /*none*/);
void assertion_message_cmpstr (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, const gi::cstring_v arg1, const gi::cstring_v cmp, const gi::cstring_v arg2) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message_cmpstr;
  auto arg2_to_c = gi::unwrap (arg2, gi::transfer_none);
  auto cmp_to_c = gi::unwrap (cmp, gi::transfer_none);
  auto arg1_to_c = gi::unwrap (arg1, gi::transfer_none);
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (const char*) (arg1_to_c), (const char*) (cmp_to_c), (const char*) (arg2_to_c));
}

// void g_assertion_message_cmpstrv (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const char* const* arg1 /*none*/, const char* const* arg2 /*none*/, gsize first_wrong_idx);
// void g_assertion_message_cmpstrv (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const char* arg1 /*none*/, const char* arg2 /*none*/, gsize first_wrong_idx);
// SKIP; inconsistent arg2 in pointer depth (2 vs 1), inconsistent arg1 in pointer depth (2 vs 1)

// void g_assertion_message_error (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, const GError* error /*none*/, GQuark error_domain, int error_code);
// void g_assertion_message_error (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, const ::GError* error /*none*/, ::GQuark error_domain, gint error_code);
void assertion_message_error (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, const GLib::Error_Ref error, ::GQuark error_domain, gint error_code) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, const ::GError* error, ::GQuark error_domain, gint error_code);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message_error;
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (const ::GError*) (error_to_c), (::GQuark) (error_domain_to_c), (gint) (error_code_to_c));
}

// void g_assertion_message_expr (const char* domain /*none,nullable*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none,nullable*/);
// void g_assertion_message_expr (const char* domain /*none,nullable*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none,nullable*/);
void assertion_message_expr (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message_expr;
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c));
}
void assertion_message_expr (const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_assertion_message_expr;
  auto expr_to_c = nullptr;
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = nullptr;
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c));
}

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
gintptr atomic_pointer_add (void* atomic, gssize val) noexcept
{
  typedef gintptr (*call_wrap_t) (void* atomic, gssize val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_add;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gssize) (val_to_c));
  return _temp_ret;
}

// guintptr g_atomic_pointer_and (void* atomic, gsize val);
// guintptr g_atomic_pointer_and (void* atomic, gsize val);
guintptr atomic_pointer_and (void* atomic, gsize val) noexcept
{
  typedef guintptr (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_and;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, gpointer oldval, gpointer newval);
// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval);
bool atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval) noexcept
{
  typedef gboolean (*call_wrap_t) (void* atomic, void* oldval, void* newval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_compare_and_exchange;
  auto newval_to_c = newval;
  auto oldval_to_c = oldval;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (void*) (oldval_to_c), (void*) (newval_to_c));
  return _temp_ret;
}

// gboolean g_atomic_pointer_compare_and_exchange_full (void* atomic, gpointer oldval, gpointer newval, void* preval);
// gboolean g_atomic_pointer_compare_and_exchange_full (void* atomic, void* oldval, void* newval, void** preval);
// SKIP; inconsistent preval out pointer depth (1 vs 2)

// gpointer g_atomic_pointer_exchange (void* atomic, gpointer newval);
// void* g_atomic_pointer_exchange (void* atomic, void* newval);
gpointer atomic_pointer_exchange (void* atomic, void* newval) noexcept
{
  typedef void* (*call_wrap_t) (void* atomic, void* newval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_exchange;
  auto newval_to_c = newval;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (void*) (newval_to_c));
  return _temp_ret;
}

// gpointer g_atomic_pointer_get (void* atomic);
// void* g_atomic_pointer_get (void* atomic);
gpointer atomic_pointer_get (void* atomic) noexcept
{
  typedef void* (*call_wrap_t) (void* atomic);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_get;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c));
  return _temp_ret;
}

// guintptr g_atomic_pointer_or (void* atomic, gsize val);
// guintptr g_atomic_pointer_or (void* atomic, gsize val);
guintptr atomic_pointer_or (void* atomic, gsize val) noexcept
{
  typedef guintptr (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_or;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// void g_atomic_pointer_set (void* atomic, gpointer newval);
// void g_atomic_pointer_set (void* atomic, void* newval);
void atomic_pointer_set (void* atomic, void* newval) noexcept
{
  typedef void (*call_wrap_t) (void* atomic, void* newval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_set;
  auto newval_to_c = newval;
  auto atomic_to_c = atomic;
  call_wrap_v ((void*) (atomic_to_c), (void*) (newval_to_c));
}

// guintptr g_atomic_pointer_xor (void* atomic, gsize val);
// guintptr g_atomic_pointer_xor (void* atomic, gsize val);
guintptr atomic_pointer_xor (void* atomic, gsize val) noexcept
{
  typedef guintptr (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_pointer_xor;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_acquire (gpointer mem_block);
// void* g_atomic_rc_box_acquire (void* mem_block);
gpointer atomic_rc_box_acquire (void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_acquire;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_alloc (gsize block_size);
// void* g_atomic_rc_box_alloc (gsize block_size);
gpointer atomic_rc_box_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_alloc0 (gsize block_size);
// void* g_atomic_rc_box_alloc0 (gsize block_size);
gpointer atomic_rc_box_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_atomic_rc_box_dup (gsize block_size, const void* mem_block);
gpointer atomic_rc_box_dup (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_dup;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// gsize g_atomic_rc_box_get_size (gpointer mem_block);
// gsize g_atomic_rc_box_get_size (void* mem_block);
gsize atomic_rc_box_get_size (void* mem_block) noexcept
{
  typedef gsize (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_get_size;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_atomic_rc_box_release (gpointer mem_block);
// void g_atomic_rc_box_release (void* mem_block);
void atomic_rc_box_release (void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_atomic_rc_box_release;
  auto mem_block_to_c = mem_block;
  call_wrap_v ((void*) (mem_block_to_c));
}

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
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base64_decode (const gi::cstring_v text) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* text, gsize* out_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_base64_decode;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  gsize out_len;
  auto _ret_o = call_wrap_v ((const char*) (text_to_c), (gsize*) (&out_len));
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, out_len, gi::transfer_full);
  return _temp_ret;
}

// guchar* g_base64_decode_inplace (gchar* text /*full,inout*/, gsize* out_len);
// guint8 g_base64_decode_inplace (guint8** text /*full,inout*/, gsize* out_len);
// SKIP; inconsistent text inout pointer depth (1 vs 2), inconsistent  return pointer depth (1 vs 0)

// gsize g_base64_decode_step (const gchar* in /*none*/, gsize len,  out /*none,out,ca*/, gint* state, guint* save);
// gsize g_base64_decode_step (const guint8* in /*none*/, gsize len, * out /*none,out,ca*/, gint* state, guint* save);
// IGNORE; not introspectable, inconsistent array info

// gchar* /*full*/ g_base64_encode (const guchar* data /*none,nullable*/, gsize len);
// char* /*full*/ g_base64_encode (const guint8* data /*none,nullable*/, gsize len);
gi::cstring base64_encode (const guint8 * data, gsize len) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* data, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_base64_encode;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (len));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

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
gint bit_nth_lsf (gulong mask, gint nth_bit) noexcept
{
  typedef gint (*call_wrap_t) (gulong mask, gint nth_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bit_nth_lsf;
  auto nth_bit_to_c = nth_bit;
  auto mask_to_c = mask;
  auto _temp_ret = call_wrap_v ((gulong) (mask_to_c), (gint) (nth_bit_to_c));
  return _temp_ret;
}

// gint g_bit_nth_msf (gulong mask, gint nth_bit);
// gint g_bit_nth_msf (gulong mask, gint nth_bit);
gint bit_nth_msf (gulong mask, gint nth_bit) noexcept
{
  typedef gint (*call_wrap_t) (gulong mask, gint nth_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bit_nth_msf;
  auto nth_bit_to_c = nth_bit;
  auto mask_to_c = mask;
  auto _temp_ret = call_wrap_v ((gulong) (mask_to_c), (gint) (nth_bit_to_c));
  return _temp_ret;
}

// guint g_bit_storage (gulong number);
// guint g_bit_storage (gulong number);
guint bit_storage (gulong number) noexcept
{
  typedef guint (*call_wrap_t) (gulong number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bit_storage;
  auto number_to_c = number;
  auto _temp_ret = call_wrap_v ((gulong) (number_to_c));
  return _temp_ret;
}

// gboolean g_bit_trylock (volatile gint* address, gint lock_bit);
// gboolean g_bit_trylock (gint address, gint lock_bit);
// SKIP; inconsistent address in pointer depth (1 vs 0)

// void g_bit_unlock (volatile gint* address, gint lock_bit);
// void g_bit_unlock (gint address, gint lock_bit);
// SKIP; inconsistent address in pointer depth (1 vs 0)

// void g_blow_chunks ();
// void g_blow_chunks ();
void blow_chunks () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_blow_chunks;
  call_wrap_v ();
}

// gchar* /*full*/ g_build_filename (const gchar* first_element /*none*/,  ..._ /*none*/);
// char* /*full*/ g_build_filename (const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_build_filename_valist (const gchar* first_element /*none*/, va_list* args /*none*/);
// char* /*full*/ g_build_filename_valist (const char* first_element /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gchar* /*full*/ g_build_filenamev (gchar** args /*none*/);
// char* /*full*/ g_build_filenamev (char** args /*none*/);
gi::cstring build_filenamev (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept
{
  typedef char* (*call_wrap_t) (char** args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_build_filenamev;
  auto args_w = unwrap (std::move(args), gi::transfer_none);
  auto args_to_c = args_w;
  auto _temp_ret = call_wrap_v ((char**) (args_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_build_path (const gchar* separator /*none*/, const gchar* first_element /*none*/,  ..._ /*none*/);
// char* /*full*/ g_build_path (const char* separator /*none*/, const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_build_pathv (const gchar* separator /*none*/, gchar** args /*none*/);
// char* /*full*/ g_build_pathv (const char* separator /*none*/, char** args /*none*/);
gi::cstring build_pathv (const gi::cstring_v separator, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept
{
  typedef char* (*call_wrap_t) (const char* separator, char** args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_build_pathv;
  auto args_w = unwrap (std::move(args), gi::transfer_none);
  auto args_to_c = args_w;
  auto separator_to_c = gi::unwrap (separator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (separator_to_c), (char**) (args_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_canonicalize_filename (const gchar* filename /*none*/, const gchar* relative_to /*none,nullable*/);
// char* /*full*/ g_canonicalize_filename (const char* filename /*none*/, const char* relative_to /*none,nullable*/);
gi::cstring canonicalize_filename (const gi::cstring_v filename, const gi::cstring_v relative_to) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_canonicalize_filename;
  auto relative_to_to_c = gi::unwrap (relative_to, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring canonicalize_filename (const gi::cstring_v filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_canonicalize_filename;
  auto relative_to_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int g_chdir (const gchar* path /*none*/);
// gint g_chdir (const char* path /*none*/);
gint chdir (const gi::cstring_v path) noexcept
{
  typedef gint (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_chdir;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ glib_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* /*none,nullable*/ glib_check_version (guint required_major, guint required_minor, guint required_micro);
gi::cstring_v check_version (guint required_major, guint required_minor, guint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (guint required_major, guint required_minor, guint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) ::glib_check_version;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((guint) (required_major_to_c), (guint) (required_minor_to_c), (guint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint g_child_watch_add (GPid pid, GChildWatchFunc function /*none*/, gpointer data);
// guint g_child_watch_add (::GPid pid, GLib::ChildWatchFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by child_watch_add_full

// guint g_child_watch_add_full (gint priority, GPid pid, GChildWatchFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_child_watch_add_full (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
guint child_watch_add (gint priority, ::GPid pid, GLib::ChildWatchFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_child_watch_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto pid_to_c = pid;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (::GPid) (pid_to_c), (GLib::ChildWatchFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* /*full*/ g_child_watch_source_new (GPid pid);
// ::GSource* /*full*/ g_child_watch_source_new (::GPid pid);
GLib::Source child_watch_source_new (::GPid pid) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPid pid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_child_watch_source_new;
  auto pid_to_c = pid;
  auto _temp_ret = call_wrap_v ((::GPid) (pid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int g_chmod (const gchar* filename /*none*/, int mode);
// gint g_chmod (const char* filename /*none*/, gint mode);
gint chmod (const gi::cstring_v filename, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_chmod;
  auto mode_to_c = mode;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// void g_clear_error (GError ** error);
// void g_clear_error (GError ** error);
void clear_error ()
{
  typedef void (*call_wrap_t) (GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_clear_error;
  GError *error = NULL;
  call_wrap_v (&error);
  gi::check_error (error);
}
void clear_error (GLib::Error * _error) noexcept
{
  typedef void (*call_wrap_t) (GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_clear_error;
  GError* _error_o {};
  call_wrap_v (_error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
}

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
bool close (gint fd)
{
  typedef gboolean (*call_wrap_t) (gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_close;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool close (gint fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_close;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full,nullable*/ g_compute_checksum_for_bytes (GChecksumType checksum_type, GBytes* data /*none*/);
// char* /*full,nullable*/ g_compute_checksum_for_bytes (::GChecksumType checksum_type, ::GBytes* data /*none*/);
gi::cstring compute_checksum_for_bytes (GLib::ChecksumType checksum_type, GLib::Bytes_Ref data) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, ::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_checksum_for_bytes;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (::GBytes*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_compute_checksum_for_data (GChecksumType checksum_type, const guchar* data /*none*/, gsize length);
// char* /*full,nullable*/ g_compute_checksum_for_data (::GChecksumType checksum_type, const guint8* data /*none*/, gsize length);
gi::cstring compute_checksum_for_data (GLib::ChecksumType checksum_type, const guint8 * data, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_checksum_for_data;
  auto data_to_c = data;
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (const guint8*) (data_to_c), (gsize) (length));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_compute_checksum_for_string (GChecksumType checksum_type, const gchar* str /*none*/, gssize length);
// char* /*full,nullable*/ g_compute_checksum_for_string (::GChecksumType checksum_type, const char* str /*none*/, gssize length);
gi::cstring compute_checksum_for_string (GLib::ChecksumType checksum_type, const gi::cstring_v str, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, const char* str, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_checksum_for_string;
  auto length_to_c = length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (const char*) (str_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_compute_hmac_for_bytes (GChecksumType digest_type, GBytes* key /*none*/, GBytes* data /*none*/);
// char* /*full*/ g_compute_hmac_for_bytes (::GChecksumType digest_type, ::GBytes* key /*none*/, ::GBytes* data /*none*/);
gi::cstring compute_hmac_for_bytes (GLib::ChecksumType digest_type, GLib::Bytes_Ref key, GLib::Bytes_Ref data) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, ::GBytes* key, ::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_hmac_for_bytes;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (::GBytes*) (key_to_c), (::GBytes*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_compute_hmac_for_data (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len, const guchar* data /*none*/, gsize length);
// char* /*full*/ g_compute_hmac_for_data (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len, const guint8* data /*none*/, gsize length);
gi::cstring compute_hmac_for_data (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len, const guint8 * data, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, const guint8* key, gsize key_len, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_hmac_for_data;
  auto data_to_c = data;
  auto key_to_c = key;
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (const guint8*) (key_to_c), (gsize) (key_len), (const guint8*) (data_to_c), (gsize) (length));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_compute_hmac_for_string (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len, const gchar* str /*none*/, gssize length);
// char* /*full*/ g_compute_hmac_for_string (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len, const char* str /*none*/, gssize length);
gi::cstring compute_hmac_for_string (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len, const gi::cstring_v str, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, const guint8* key, gsize key_len, const char* str, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_compute_hmac_for_string;
  auto length_to_c = length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto key_to_c = key;
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (const guint8*) (key_to_c), (gsize) (key_len), (const char*) (str_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_convert (const gchar* str /*none*/, gssize len, const gchar* to_codeset /*none*/, const gchar* from_codeset /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert (const guint8* str /*none*/, gssize len, const char* to_codeset /*none*/, const char* from_codeset /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GQuark g_convert_error_quark ();
// ::GQuark g_convert_error_quark ();
GLib::Quark convert_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* /*full*/ g_convert_with_fallback (const gchar* str /*none*/, gssize len, const gchar* to_codeset /*none*/, const gchar* from_codeset /*none*/, const gchar* fallback /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert_with_fallback (const guint8* str /*none*/, gssize len, const char* to_codeset /*none*/, const char* from_codeset /*none*/, const char* fallback /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> convert_with_fallback (const guint8 * str, gssize len, const gi::cstring_v to_codeset, const gi::cstring_v from_codeset, const gi::cstring_v fallback, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none);
  auto str_to_c = str;
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (len), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_convert_with_iconv (const gchar* str /*none*/, gssize len, GIConv converter /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_convert_with_iconv (const guint8* str /*none*/, gssize len,  converter /*none*/, gsize* bytes_read, gsize* bytes_written, GError ** error);
// IGNORE; not introspectable, converter type  not supported

// int g_creat (const gchar* filename /*none*/, int mode);
// gint g_creat (const char* filename /*none*/, gint mode);
gint creat (const gi::cstring_v filename, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_creat;
  auto mode_to_c = mode;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

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
void dataset_destroy (const void* dataset_location) noexcept
{
  typedef void (*call_wrap_t) (const void* dataset_location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dataset_destroy;
  auto dataset_location_to_c = dataset_location;
  call_wrap_v ((const void*) (dataset_location_to_c));
}

// void g_dataset_foreach (gconstpointer dataset_location, GDataForeachFunc func /*none*/, gpointer user_data);
// void g_dataset_foreach (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func /*none*/, void* user_data);
void dataset_foreach (const void* dataset_location, GLib::DataForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dataset_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto dataset_location_to_c = dataset_location;
  call_wrap_v ((const void*) (dataset_location_to_c), (GLib::DataForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// gpointer g_dataset_id_get_data (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_get_data (const void* dataset_location, ::GQuark key_id);
gpointer dataset_id_get_data (const void* dataset_location, ::GQuark key_id) noexcept
{
  typedef void* (*call_wrap_t) (const void* dataset_location, ::GQuark key_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dataset_id_get_data;
  auto key_id_to_c = key_id;
  auto dataset_location_to_c = dataset_location;
  auto _temp_ret = call_wrap_v ((const void*) (dataset_location_to_c), (::GQuark) (key_id_to_c));
  return _temp_ret;
}

// gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id);
gpointer dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id) noexcept
{
  typedef void* (*call_wrap_t) (const void* dataset_location, ::GQuark key_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dataset_id_remove_no_notify;
  auto key_id_to_c = key_id;
  auto dataset_location_to_c = dataset_location;
  auto _temp_ret = call_wrap_v ((const void*) (dataset_location_to_c), (::GQuark) (key_id_to_c));
  return _temp_ret;
}

// void g_dataset_id_set_data_full (gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func /*none*/);
// void g_dataset_id_set_data_full (const void* dataset_location, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func /*none*/);
// IGNORE; not introspectable, callback misses closure info

// const gchar* /*none*/ g_dcgettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/, gint category);
// const char* /*none*/ g_dcgettext (const char* domain /*none,nullable*/, const char* msgid /*none*/, gint category);
gi::cstring_v dcgettext (const gi::cstring_v domain, const gi::cstring_v msgid, gint category) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, gint category);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dcgettext;
  auto category_to_c = category;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (gint) (category_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v dcgettext (const gi::cstring_v msgid, gint category) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, gint category);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dcgettext;
  auto category_to_c = category;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (gint) (category_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dgettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/);
// const char* /*none*/ g_dgettext (const char* domain /*none,nullable*/, const char* msgid /*none*/);
gi::cstring_v dgettext (const gi::cstring_v domain, const gi::cstring_v msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dgettext;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v dgettext (const gi::cstring_v msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dgettext;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_direct_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_direct_equal (const void* v1, const void* v2);
bool direct_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_direct_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_direct_hash (gconstpointer v);
// guint g_direct_hash (const void* v);
guint direct_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_direct_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* /*none*/ g_dngettext (const gchar* domain /*none,nullable*/, const gchar* msgid /*none*/, const gchar* msgid_plural /*none*/, gulong n);
// const char* /*none*/ g_dngettext (const char* domain /*none,nullable*/, const char* msgid /*none*/, const char* msgid_plural /*none*/, gulong n);
gi::cstring_v dngettext (const gi::cstring_v domain, const gi::cstring_v msgid, const gi::cstring_v msgid_plural, gulong n) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dngettext;
  auto n_to_c = n;
  auto msgid_plural_to_c = gi::unwrap (msgid_plural, gi::transfer_none);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (const char*) (msgid_plural_to_c), (gulong) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v dngettext (const gi::cstring_v msgid, const gi::cstring_v msgid_plural, gulong n) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dngettext;
  auto n_to_c = n;
  auto msgid_plural_to_c = gi::unwrap (msgid_plural, gi::transfer_none);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (const char*) (msgid_plural_to_c), (gulong) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_double_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_double_equal (const void* v1, const void* v2);
bool double_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_double_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_double_hash (gconstpointer v);
// guint g_double_hash (const void* v);
guint double_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_double_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* /*none*/ g_dpgettext (const gchar* domain /*none,nullable*/, const gchar* msgctxtid /*none*/, gsize msgidoffset);
// const char* /*none*/ g_dpgettext (const char* domain /*none,nullable*/, const char* msgctxtid /*none*/, gsize msgidoffset);
gi::cstring_v dpgettext (const gi::cstring_v domain, const gi::cstring_v msgctxtid, gsize msgidoffset) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgctxtid, gsize msgidoffset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dpgettext;
  auto msgidoffset_to_c = msgidoffset;
  auto msgctxtid_to_c = gi::unwrap (msgctxtid, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgctxtid_to_c), (gsize) (msgidoffset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v dpgettext (const gi::cstring_v msgctxtid, gsize msgidoffset) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgctxtid, gsize msgidoffset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dpgettext;
  auto msgidoffset_to_c = msgidoffset;
  auto msgctxtid_to_c = gi::unwrap (msgctxtid, gi::transfer_none);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgctxtid_to_c), (gsize) (msgidoffset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dpgettext2 (const gchar* domain /*none,nullable*/, const gchar* context /*none*/, const gchar* msgid /*none*/);
// const char* /*none*/ g_dpgettext2 (const char* domain /*none,nullable*/, const char* context /*none*/, const char* msgid /*none*/);
gi::cstring_v dpgettext2 (const gi::cstring_v domain, const gi::cstring_v context, const gi::cstring_v msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* context, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dpgettext2;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (context_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v dpgettext2 (const gi::cstring_v context, const gi::cstring_v msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* context, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dpgettext2;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (context_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_environ_getenv (gchar** envp /*none,nullable*/, const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_environ_getenv (char** envp /*none,nullable*/, const char* variable /*none*/);
gi::cstring_v environ_getenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, const gi::cstring_v variable) noexcept
{
  typedef const char* (*call_wrap_t) (char** envp, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_environ_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar** /*full*/ g_environ_setenv (gchar** envp /*full,nullable*/, const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// char** /*full*/ g_environ_setenv (char** envp /*full,nullable*/, const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> environ_setenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_full_t> envp, const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept
{
  typedef char** (*call_wrap_t) (char** envp, const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_environ_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto envp_w = unwrap (std::move(envp), gi::transfer_full);
  auto envp_to_c = envp_w;
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_environ_unsetenv (gchar** envp /*full,nullable*/, const gchar* variable /*none*/);
// char** /*full*/ g_environ_unsetenv (char** envp /*full,nullable*/, const char* variable /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> environ_unsetenv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_full_t> envp, const gi::cstring_v variable) noexcept
{
  typedef char** (*call_wrap_t) (char** envp, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_environ_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto envp_w = unwrap (std::move(envp), gi::transfer_full);
  auto envp_to_c = envp_w;
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GFileError g_file_error_from_errno (gint err_no);
// ::GFileError g_file_error_from_errno (gint err_no);
GLib::FileError file_error_from_errno (gint err_no) noexcept
{
  typedef ::GFileError (*call_wrap_t) (gint err_no);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_error_from_errno;
  auto err_no_to_c = err_no;
  auto _temp_ret = call_wrap_v ((gint) (err_no_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark g_file_error_quark ();
// ::GQuark g_file_error_quark ();
GLib::Quark file_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_file_get_contents (const gchar* filename /*none*/, gchar** contents /*full,out*/, gsize* length, GError ** error);
// gboolean g_file_get_contents (const char* filename /*none*/, guint8** contents /*full,out*/, gsize* length, GError ** error);
bool file_get_contents (const gi::cstring_v filename, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents)
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), &error);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool file_get_contents (const gi::cstring_v filename, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), _error ? &_error_o : nullptr);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> file_get_contents (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> file_get_contents (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint g_file_open_tmp (const gchar* tmpl /*none,nullable*/, gchar** name_used /*full,out*/, GError ** error);
// gint g_file_open_tmp (const char* tmpl /*none,nullable*/, char** name_used /*full,out*/, GError ** error);
gint file_open_tmp (const gi::cstring_v tmpl, gi::cstring & name_used)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  name_used = gi::wrap (name_used_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gint file_open_tmp (gi::cstring & name_used)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  name_used = gi::wrap (name_used_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gint file_open_tmp (const gi::cstring_v tmpl, gi::cstring & name_used, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  name_used = gi::wrap (name_used_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gint file_open_tmp (gi::cstring & name_used, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  name_used = gi::wrap (name_used_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<gint, gi::cstring> file_open_tmp (const gi::cstring_v tmpl)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (name_used_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gint, gi::cstring> file_open_tmp ()
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (name_used_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gint, gi::cstring> file_open_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (name_used_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gint, gi::cstring> file_open_tmp (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (name_used_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_file_read_link (const gchar* filename /*none*/, GError ** error);
// char* /*full*/ g_file_read_link (const char* filename /*none*/, GError ** error);
gi::cstring file_read_link (const gi::cstring_v filename)
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_link;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring file_read_link (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_link;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_set_contents (const gchar* filename /*none*/, const gchar* contents /*none*/, gssize length, GError ** error);
// gboolean g_file_set_contents (const char* filename /*none*/, const guint8* contents /*none*/, gssize length, GError ** error);
bool file_set_contents (const gi::cstring_v filename, const guint8 * contents, gssize length)
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_contents;
  auto contents_to_c = contents;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (length), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool file_set_contents (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_contents;
  auto contents_to_c = contents;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (length), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_contents_full (const gchar* filename /*none*/, const gchar* contents /*none*/, gssize length, GFileSetContentsFlags flags, int mode, GError ** error);
// gboolean g_file_set_contents_full (const char* filename /*none*/, const guint8* contents /*none*/, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
bool file_set_contents_full (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode)
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_contents_full;
  auto mode_to_c = mode;
  auto flags_to_c = gi::unwrap (flags);
  auto contents_to_c = contents;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (length), (::GFileSetContentsFlags) (flags_to_c), (gint) (mode_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool file_set_contents_full (const gi::cstring_v filename, const guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_contents_full;
  auto mode_to_c = mode;
  auto flags_to_c = gi::unwrap (flags);
  auto contents_to_c = contents;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (length), (::GFileSetContentsFlags) (flags_to_c), (gint) (mode_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_test (const gchar* filename /*none*/, GFileTest test);
// gboolean g_file_test (const char* filename /*none*/, ::GFileTest test);
bool file_test (const gi::cstring_v filename, GLib::FileTest test) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, ::GFileTest test);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_test;
  auto test_to_c = gi::unwrap (test);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (::GFileTest) (test_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_filename_display_basename (const gchar* filename /*none*/);
// char* /*full*/ g_filename_display_basename (const char* filename /*none*/);
gi::cstring filename_display_basename (const gi::cstring_v filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_display_basename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_filename_display_name (const gchar* filename /*none*/);
// char* /*full*/ g_filename_display_name (const char* filename /*none*/);
gi::cstring filename_display_name (const gi::cstring_v filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_display_name;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_filename_from_uri (const gchar* uri /*none*/, gchar** hostname /*full,out,opt,nullable*/, GError ** error);
// char* /*full*/ g_filename_from_uri (const char* uri /*none*/, char** hostname /*full,out,opt,nullable*/, GError ** error);
gi::cstring filename_from_uri (const gi::cstring_v uri, gi::cstring * hostname)
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (hostname ? &hostname_o : nullptr), &error);
  if (hostname) *hostname = gi::wrap (hostname_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_from_uri (const gi::cstring_v uri, gi::cstring * hostname, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (hostname ? &hostname_o : nullptr), _error ? &_error_o : nullptr);
  if (hostname) *hostname = gi::wrap (hostname_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gi::cstring> filename_from_uri (const gi::cstring_v uri)
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (&hostname_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (hostname_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gi::cstring> filename_from_uri (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (&hostname_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (hostname_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_filename_from_utf8 (const gchar* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_filename_from_utf8 (const char* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::cstring filename_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize, gsize> filename_from_utf8 (const gi::cstring_v utf8string, gssize len)
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<gi::cstring, gsize, gsize> filename_from_utf8 (const gi::cstring_v utf8string, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gchar* /*full*/ g_filename_to_uri (const gchar* filename /*none*/, const gchar* hostname /*none,nullable*/, GError ** error);
// char* /*full*/ g_filename_to_uri (const char* filename /*none*/, const char* hostname /*none,nullable*/, GError ** error);
gi::cstring filename_to_uri (const gi::cstring_v filename, const gi::cstring_v hostname)
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_uri;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_to_uri (const gi::cstring_v filename)
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_uri;
  auto hostname_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_to_uri (const gi::cstring_v filename, const gi::cstring_v hostname, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_uri;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_to_uri (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_uri;
  auto hostname_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_filename_to_utf8 (const gchar* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_filename_to_utf8 (const char* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::cstring filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize, gsize> filename_to_utf8 (const gi::cstring_v opsysstring, gssize len)
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<gi::cstring, gsize, gsize> filename_to_utf8 (const gi::cstring_v opsysstring, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gchar* /*full,nullable*/ g_find_program_in_path (const gchar* program /*none*/);
// char* /*full,nullable*/ g_find_program_in_path (const char* program /*none*/);
gi::cstring find_program_in_path (const gi::cstring_v program) noexcept
{
  typedef char* (*call_wrap_t) (const char* program);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_find_program_in_path;
  auto program_to_c = gi::unwrap (program, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (program_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// FILE* g_fopen (const gchar* filename /*none*/, const gchar* mode /*none*/);
// void* g_fopen (const char* filename /*none*/, const char* mode /*none*/);
gpointer fopen (const gi::cstring_v filename, const gi::cstring_v mode) noexcept
{
  typedef void* (*call_wrap_t) (const char* filename, const char* mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_fopen;
  auto mode_to_c = gi::unwrap (mode, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (mode_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_format_size (guint64 size);
// char* /*full*/ g_format_size (guint64 size);
gi::cstring format_size (guint64 size) noexcept
{
  typedef char* (*call_wrap_t) (guint64 size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_format_size;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((guint64) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_format_size_full (guint64 size, GFormatSizeFlags flags);
// char* /*full*/ g_format_size_full (guint64 size, ::GFormatSizeFlags flags);
gi::cstring format_size_full (guint64 size, GLib::FormatSizeFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (guint64 size, ::GFormatSizeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_format_size_full;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((guint64) (size_to_c), (::GFormatSizeFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_fprintf (FILE* file, const gchar* format /*none*/,  ..._ /*none*/);
// gint g_fprintf (void* file, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_free (gpointer mem);
// void g_free (void* mem);
// IGNORE; marked ignore

// void g_free_sized (gpointer mem, size_t size);
// void g_free_sized (void* mem, gsize size);
void free_sized (void* mem, gsize size) noexcept
{
  typedef void (*call_wrap_t) (void* mem, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_free_sized;
  auto size_to_c = size;
  auto mem_to_c = mem;
  call_wrap_v ((void*) (mem_to_c), (gsize) (size_to_c));
}

// FILE* g_freopen (const gchar* filename /*none*/, const gchar* mode /*none*/, FILE* stream);
// void* g_freopen (const char* filename /*none*/, const char* mode /*none*/, void* stream);
gpointer freopen (const gi::cstring_v filename, const gi::cstring_v mode, void* stream) noexcept
{
  typedef void* (*call_wrap_t) (const char* filename, const char* mode, void* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_freopen;
  auto stream_to_c = stream;
  auto mode_to_c = gi::unwrap (mode, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (mode_to_c), (void*) (stream_to_c));
  return _temp_ret;
}

// gint g_fsync (gint fd);
// gint g_fsync (gint fd);
gint fsync (gint fd) noexcept
{
  typedef gint (*call_wrap_t) (gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_fsync;
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_get_application_name ();
// const char* /*none,nullable*/ g_get_application_name ();
gi::cstring_v get_application_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_application_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_get_charset (const char** charset /*none,out,opt*/);
// gboolean g_get_charset (const char** charset /*none,out,opt*/);
bool get_charset (gi::cstring_v * charset) noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (charset ? &charset_o : nullptr));
  if (charset) *charset = gi::wrap (charset_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v> get_charset () noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (&charset_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (charset_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_get_codeset ();
// char* /*full*/ g_get_codeset ();
gi::cstring get_codeset () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_codeset;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_get_console_charset (const char** charset /*none,out,opt*/);
// gboolean g_get_console_charset (const char** charset /*none,out,opt*/);
bool get_console_charset (gi::cstring_v * charset) noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_console_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (charset ? &charset_o : nullptr));
  if (charset) *charset = gi::wrap (charset_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v> get_console_charset () noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_console_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (&charset_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (charset_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_get_current_dir ();
// char* /*full*/ g_get_current_dir ();
gi::cstring get_current_dir () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_current_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_get_environ ();
// char** /*full*/ g_get_environ ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_environ () noexcept
{
  typedef char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_environ;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_get_filename_charsets (const gchar*** filename_charsets /*none,out*/);
// gboolean g_get_filename_charsets (const char*** filename_charsets /*none,out*/);
bool get_filename_charsets (gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> & filename_charsets) noexcept
{
  typedef gboolean (*call_wrap_t) (const char*** filename_charsets);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_filename_charsets;
  const char** filename_charsets_o {};
  auto _temp_ret = call_wrap_v ((const char***) (&filename_charsets_o));
  filename_charsets = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(filename_charsets_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>> get_filename_charsets () noexcept
{
  typedef gboolean (*call_wrap_t) (const char*** filename_charsets);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_filename_charsets;
  const char** filename_charsets_o {};
  auto _temp_ret = call_wrap_v ((const char***) (&filename_charsets_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(filename_charsets_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const gchar* /*none*/ g_get_home_dir ();
// const char* /*none*/ g_get_home_dir ();
gi::cstring_v get_home_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_home_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_host_name ();
// const char* /*none*/ g_get_host_name ();
gi::cstring_v get_host_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_host_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none*/ g_get_language_names ();
// const char** /*none*/ g_get_language_names ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_language_names () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_language_names;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none*/ g_get_language_names_with_category (const gchar* category_name /*none*/);
// const char** /*none*/ g_get_language_names_with_category (const char* category_name /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_language_names_with_category (const gi::cstring_v category_name) noexcept
{
  typedef const char** (*call_wrap_t) (const char* category_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_language_names_with_category;
  auto category_name_to_c = gi::unwrap (category_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (category_name_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gchar** /*full*/ g_get_locale_variants (const gchar* locale /*none*/);
// char** /*full*/ g_get_locale_variants (const char* locale /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_variants (const gi::cstring_v locale) noexcept
{
  typedef char** (*call_wrap_t) (const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_locale_variants;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (locale_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gint64 g_get_monotonic_time ();
// gint64 g_get_monotonic_time ();
gint64 get_monotonic_time () noexcept
{
  typedef gint64 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_monotonic_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_get_num_processors ();
// guint g_get_num_processors ();
guint get_num_processors () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_num_processors;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* /*full,nullable*/ g_get_os_info (const gchar* key_name /*none*/);
// char* /*full,nullable*/ g_get_os_info (const char* key_name /*none*/);
gi::cstring get_os_info (const gi::cstring_v key_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* key_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_os_info;
  auto key_name_to_c = gi::unwrap (key_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (key_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_get_prgname ();
// const char* /*none,nullable*/ g_get_prgname ();
gi::cstring_v get_prgname () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_prgname;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_real_name ();
// const char* /*none*/ g_get_real_name ();
gi::cstring_v get_real_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_real_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint64 g_get_real_time ();
// gint64 g_get_real_time ();
gint64 get_real_time () noexcept
{
  typedef gint64 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_real_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* const* /*none*/ g_get_system_config_dirs ();
// const char** /*none*/ g_get_system_config_dirs ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_system_config_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_system_config_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none*/ g_get_system_data_dirs ();
// const char** /*none*/ g_get_system_data_dirs ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_system_data_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_system_data_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_tmp_dir ();
// const char* /*none*/ g_get_tmp_dir ();
gi::cstring_v get_tmp_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_tmp_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_cache_dir ();
// const char* /*none*/ g_get_user_cache_dir ();
gi::cstring_v get_user_cache_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_cache_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_config_dir ();
// const char* /*none*/ g_get_user_config_dir ();
gi::cstring_v get_user_config_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_config_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_data_dir ();
// const char* /*none*/ g_get_user_data_dir ();
gi::cstring_v get_user_data_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_data_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_name ();
// const char* /*none*/ g_get_user_name ();
gi::cstring_v get_user_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_runtime_dir ();
// const char* /*none*/ g_get_user_runtime_dir ();
gi::cstring_v get_user_runtime_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_runtime_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_get_user_special_dir (GUserDirectory directory);
// const char* /*none,nullable*/ g_get_user_special_dir (::GUserDirectory directory);
gi::cstring_v get_user_special_dir (GLib::UserDirectory directory) noexcept
{
  typedef const char* (*call_wrap_t) (::GUserDirectory directory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_special_dir;
  auto directory_to_c = gi::unwrap (directory);
  auto _temp_ret = call_wrap_v ((::GUserDirectory) (directory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_get_user_state_dir ();
// const char* /*none*/ g_get_user_state_dir ();
gi::cstring_v get_user_state_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_get_user_state_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_getenv (const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_getenv (const char* variable /*none*/);
gi::cstring_v getenv (const gi::cstring_v variable) noexcept
{
  typedef const char* (*call_wrap_t) (const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_hostname_is_ascii_encoded (const gchar* hostname /*none*/);
// gboolean g_hostname_is_ascii_encoded (const char* hostname /*none*/);
bool hostname_is_ascii_encoded (const gi::cstring_v hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hostname_is_ascii_encoded;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gboolean g_hostname_is_ip_address (const gchar* hostname /*none*/);
// gboolean g_hostname_is_ip_address (const char* hostname /*none*/);
bool hostname_is_ip_address (const gi::cstring_v hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hostname_is_ip_address;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gboolean g_hostname_is_non_ascii (const gchar* hostname /*none*/);
// gboolean g_hostname_is_non_ascii (const char* hostname /*none*/);
bool hostname_is_non_ascii (const gi::cstring_v hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hostname_is_non_ascii;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gchar* /*full,nullable*/ g_hostname_to_ascii (const gchar* hostname /*none*/);
// char* /*full,nullable*/ g_hostname_to_ascii (const char* hostname /*none*/);
gi::cstring hostname_to_ascii (const gi::cstring_v hostname) noexcept
{
  typedef char* (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hostname_to_ascii;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_hostname_to_unicode (const gchar* hostname /*none*/);
// char* /*full,nullable*/ g_hostname_to_unicode (const char* hostname /*none*/);
gi::cstring hostname_to_unicode (const gi::cstring_v hostname) noexcept
{
  typedef char* (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hostname_to_unicode;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gsize g_iconv (GIConv converter /*none*/, gchar** inbuf /*none*/, gsize* inbytes_left, gchar** outbuf /*none*/, gsize* outbytes_left);
// gsize g_iconv ( converter /*none*/, char* inbuf /*none*/, gsize* inbytes_left, char* outbuf /*none*/, gsize* outbytes_left);
// IGNORE; not introspectable, inconsistent outbuf in pointer depth (2 vs 1), inconsistent inbuf in pointer depth (2 vs 1), converter type  not supported

// guint g_idle_add (GSourceFunc function /*none*/, gpointer data);
// guint g_idle_add (GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by idle_add_full

// guint g_idle_add_full (gint priority, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_idle_add_full (gint priority, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
guint idle_add (gint priority, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_idle_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint g_idle_add_once (GSourceOnceFunc function /*none*/, gpointer data);
// guint g_idle_add_once (GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// gboolean g_idle_remove_by_data (gpointer data);
// gboolean g_idle_remove_by_data (void* data);
bool idle_remove_by_data (void* data) noexcept
{
  typedef gboolean (*call_wrap_t) (void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_idle_remove_by_data;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((void*) (data_to_c));
  return _temp_ret;
}

// GSource* /*full*/ g_idle_source_new ();
// ::GSource* /*full*/ g_idle_source_new ();
GLib::Source idle_source_new () noexcept
{
  typedef ::GSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_idle_source_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_int64_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int64_equal (const void* v1, const void* v2);
bool int64_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_int64_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_int64_hash (gconstpointer v);
// guint g_int64_hash (const void* v);
guint int64_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_int64_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// gboolean g_int_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int_equal (const void* v1, const void* v2);
bool int_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_int_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_int_hash (gconstpointer v);
// guint g_int_hash (const void* v);
guint int_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_int_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* /*none*/ g_intern_static_string (const gchar* string /*none,nullable*/);
// const char* /*none*/ g_intern_static_string (const char* string /*none,nullable*/);
gi::cstring_v intern_static_string (const gi::cstring_v string) noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_intern_static_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v intern_static_string () noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_intern_static_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_intern_string (const gchar* string /*none,nullable*/);
// const char* /*none*/ g_intern_string (const char* string /*none,nullable*/);
gi::cstring_v intern_string (const gi::cstring_v string) noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_intern_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v intern_string () noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_intern_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint g_io_add_watch (GIOChannel* channel /*none*/, GIOCondition condition, GIOFunc func /*none*/, gpointer user_data);
// guint g_io_add_watch (::GIOChannel* channel /*none*/, ::GIOCondition condition, GLib::IOFunc::cfunction_type func /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by io_add_watch_full

// guint g_io_add_watch_full (GIOChannel* channel /*none*/, gint priority, GIOCondition condition, GIOFunc func /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_io_add_watch_full (::GIOChannel* channel /*none*/, gint priority, ::GIOCondition condition, GLib::IOFunc::cfunction_type func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
guint io_add_watch (GLib::IOChannel_Ref channel, gint priority, GLib::IOCondition condition, GLib::IOFunc func) noexcept
{
  typedef guint (*call_wrap_t) (::GIOChannel* channel, gint priority, ::GIOCondition condition, GLib::IOFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_add_watch_full;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto condition_to_c = gi::unwrap (condition);
  auto priority_to_c = priority;
  auto channel_to_c = gi::unwrap (channel, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (channel_to_c), (gint) (priority_to_c), (::GIOCondition) (condition_to_c), (GLib::IOFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* /*full*/ g_io_create_watch (GIOChannel* channel /*none*/, GIOCondition condition);
// ::GSource* /*full*/ g_io_create_watch (::GIOChannel* channel /*none*/, ::GIOCondition condition);
GLib::Source io_create_watch (GLib::IOChannel_Ref channel, GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GIOChannel* channel, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_io_create_watch;
  auto condition_to_c = gi::unwrap (condition);
  auto channel_to_c = gi::unwrap (channel, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (channel_to_c), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_listenv ();
// char** /*full*/ g_listenv ();
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> listenv () noexcept
{
  typedef char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_listenv;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_locale_from_utf8 (const gchar* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* /*full*/ g_locale_from_utf8 (const char* utf8string /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> locale_from_utf8 (const gi::cstring_v utf8string, gssize len)
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  gsize bytes_written;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gsize> locale_from_utf8 (const gi::cstring_v utf8string, gssize len, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none);
  gsize bytes_written;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, bytes_written, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bytes_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_locale_to_utf8 (const gchar* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* /*full*/ g_locale_to_utf8 (const guint8* opsysstring /*none*/, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
gi::cstring locale_to_utf8 (const guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_to_c = opsysstring;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (len), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring locale_to_utf8 (const guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_to_c = opsysstring;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (len), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize, gsize> locale_to_utf8 (const guint8 * opsysstring, gssize len)
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_to_c = opsysstring;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (len), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<gi::cstring, gsize, gsize> locale_to_utf8 (const guint8 * opsysstring, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_to_c = opsysstring;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (len), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_log (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* format /*none*/,  ..._ /*none*/);
// void g_log (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_log_default_handler (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* message /*none,nullable*/, gpointer unused_data);
// void g_log_default_handler (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* message /*none,nullable*/, void* unused_data);
void log_default_handler (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, void* unused_data) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_default_handler;
  auto unused_data_to_c = unused_data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (unused_data_to_c));
}
void log_default_handler (GLib::LogLevelFlags log_level, void* unused_data) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_default_handler;
  auto unused_data_to_c = unused_data;
  auto message_to_c = nullptr;
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (unused_data_to_c));
}

// gboolean g_log_get_debug_enabled ();
// gboolean g_log_get_debug_enabled ();
bool log_get_debug_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_get_debug_enabled;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_log_remove_handler (const gchar* log_domain /*none*/, guint handler_id);
// void g_log_remove_handler (const char* log_domain /*none*/, guint handler_id);
void log_remove_handler (const gi::cstring_v log_domain, guint handler_id) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, guint handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_remove_handler;
  auto handler_id_to_c = handler_id;
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  call_wrap_v ((const char*) (log_domain_to_c), (guint) (handler_id_to_c));
}

// GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_always_fatal (::GLogLevelFlags fatal_mask);
GLib::LogLevelFlags log_set_always_fatal (GLib::LogLevelFlags fatal_mask) noexcept
{
  typedef ::GLogLevelFlags (*call_wrap_t) (::GLogLevelFlags fatal_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_set_always_fatal;
  auto fatal_mask_to_c = gi::unwrap (fatal_mask);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (fatal_mask_to_c));
  return gi::wrap (_temp_ret);
}

// void g_log_set_debug_enabled (gboolean enabled);
// void g_log_set_debug_enabled (gboolean enabled);
void log_set_debug_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_set_debug_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((gboolean) (enabled_to_c));
}

// FAILURE on g_log_set_default_handler; No such node (<xmlattr>.transfer-ownership)
// GLogLevelFlags g_log_set_fatal_mask (const gchar* log_domain /*none*/, GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_fatal_mask (const char* log_domain /*none*/, ::GLogLevelFlags fatal_mask);
GLib::LogLevelFlags log_set_fatal_mask (const gi::cstring_v log_domain, GLib::LogLevelFlags fatal_mask) noexcept
{
  typedef ::GLogLevelFlags (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags fatal_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_set_fatal_mask;
  auto fatal_mask_to_c = gi::unwrap (fatal_mask);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (fatal_mask_to_c));
  return gi::wrap (_temp_ret);
}

// guint g_log_set_handler (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_levels, GLogFunc log_func /*none*/, gpointer user_data);
// guint g_log_set_handler (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by log_set_handler_full

// guint g_log_set_handler_full (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_levels, GLogFunc log_func /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// guint g_log_set_handler_full (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
guint log_set_handler (const gi::cstring_v log_domain, GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept
{
  typedef guint (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_set_handler_full;
  auto log_func_wrap_ = log_func ? unwrap (std::move (log_func), gi::scope_notified) : nullptr;
  auto log_levels_to_c = gi::unwrap (log_levels);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_levels_to_c), (GLib::LogFunc::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->wrapper : nullptr), (void*) (log_func_wrap_), (GLib::DestroyNotify::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->destroy : nullptr));
  return _temp_ret;
}
guint log_set_handler (GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept
{
  typedef guint (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_set_handler_full;
  auto log_func_wrap_ = log_func ? unwrap (std::move (log_func), gi::scope_notified) : nullptr;
  auto log_levels_to_c = gi::unwrap (log_levels);
  auto log_domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_levels_to_c), (GLib::LogFunc::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->wrapper : nullptr), (void*) (log_func_wrap_), (GLib::DestroyNotify::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->destroy : nullptr));
  return _temp_ret;
}

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
void log_variant (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, ::GVariant* fields);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_variant;
  auto fields_to_c = gi::unwrap (fields, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (::GVariant*) (fields_to_c));
}
void log_variant (GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, ::GVariant* fields);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_variant;
  auto fields_to_c = gi::unwrap (fields, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (::GVariant*) (fields_to_c));
}

// GLogWriterOutput g_log_writer_default (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_default (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// void g_log_writer_default_set_debug_domains (const gchar* const* domains /*none,nullable*/);
// void g_log_writer_default_set_debug_domains (const char* domains /*none,nullable*/);
// SKIP; inconsistent domains in pointer depth (2 vs 1)

// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
void log_writer_default_set_use_stderr (gboolean use_stderr) noexcept
{
  typedef void (*call_wrap_t) (gboolean use_stderr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_writer_default_set_use_stderr;
  auto use_stderr_to_c = use_stderr;
  call_wrap_v ((gboolean) (use_stderr_to_c));
}

// gboolean g_log_writer_default_would_drop (GLogLevelFlags log_level, const char* log_domain /*none,nullable*/);
// gboolean g_log_writer_default_would_drop (::GLogLevelFlags log_level, const char* log_domain /*none,nullable*/);
bool log_writer_default_would_drop (GLib::LogLevelFlags log_level, const gi::cstring_v log_domain) noexcept
{
  typedef gboolean (*call_wrap_t) (::GLogLevelFlags log_level, const char* log_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_writer_default_would_drop;
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (log_level_to_c), (const char*) (log_domain_to_c));
  return _temp_ret;
}
bool log_writer_default_would_drop (GLib::LogLevelFlags log_level) noexcept
{
  typedef gboolean (*call_wrap_t) (::GLogLevelFlags log_level, const char* log_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_writer_default_would_drop;
  auto log_domain_to_c = nullptr;
  auto log_level_to_c = gi::unwrap (log_level);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (log_level_to_c), (const char*) (log_domain_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_log_writer_format_fields (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gboolean use_color);
// char* /*full*/ g_log_writer_format_fields (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, gboolean use_color);
// SKIP; fields in boxed array not supported (depth 1)

// gboolean g_log_writer_is_journald (gint output_fd);
// gboolean g_log_writer_is_journald (gint output_fd);
bool log_writer_is_journald (gint output_fd) noexcept
{
  typedef gboolean (*call_wrap_t) (gint output_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_writer_is_journald;
  auto output_fd_to_c = output_fd;
  auto _temp_ret = call_wrap_v ((gint) (output_fd_to_c));
  return _temp_ret;
}

// GLogWriterOutput g_log_writer_journald (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_journald (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// GLogWriterOutput g_log_writer_standard_streams (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_standard_streams (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// gboolean g_log_writer_supports_color (gint output_fd);
// gboolean g_log_writer_supports_color (gint output_fd);
bool log_writer_supports_color (gint output_fd) noexcept
{
  typedef gboolean (*call_wrap_t) (gint output_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_log_writer_supports_color;
  auto output_fd_to_c = output_fd;
  auto _temp_ret = call_wrap_v ((gint) (output_fd_to_c));
  return _temp_ret;
}

// void g_logv (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* format /*none*/, va_list args /*none*/);
// void g_logv (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// int g_lstat (const gchar* filename /*none*/, GStatBuf* buf /*none*/);
// gint g_lstat (const char* filename /*none*/,  buf /*none*/);
// SKIP; buf type  not supported

// GSource* /*none,nullable*/ g_main_current_source ();
// ::GSource* /*none,nullable*/ g_main_current_source ();
GLib::Source_Ref main_current_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_current_source;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_main_depth ();
// gint g_main_depth ();
gint main_depth () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_depth;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gpointer g_malloc (gsize n_bytes);
// void* g_malloc (gsize n_bytes);
gpointer malloc (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_malloc;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc0 (gsize n_bytes);
// void* g_malloc0 (gsize n_bytes);
gpointer malloc0 (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_malloc0;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
gpointer malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_malloc0_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc_n (gsize n_blocks, gsize n_block_bytes);
gpointer malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_malloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gboolean g_markup_collect_attributes (const gchar* element_name /*none*/, const gchar** attribute_names /*none*/, const gchar** attribute_values /*none*/, GError** error /*none*/, GMarkupCollectType first_type, const gchar* first_attr /*none*/,  ..._ /*none*/);
// gboolean g_markup_collect_attributes (const char* element_name /*none*/, const char* attribute_names /*none*/, const char* attribute_values /*none*/, ::GError* error /*none*/, ::GMarkupCollectType first_type, const char* first_attr /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GQuark g_markup_error_quark ();
// ::GQuark g_markup_error_quark ();
GLib::Quark markup_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* /*full*/ g_markup_escape_text (const gchar* text /*none*/, gssize length);
// char* /*full*/ g_markup_escape_text (const char* text /*none*/, gssize length);
gi::cstring markup_escape_text (const gi::cstring_v text, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (const char* text, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_escape_text;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_markup_printf_escaped (const char* format /*none*/,  ..._ /*none*/);
// char* /*full*/ g_markup_printf_escaped (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_markup_vprintf_escaped (const char* format /*none*/, va_list args /*none*/);
// char* /*full*/ g_markup_vprintf_escaped (const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// gpointer g_memdup2 (gconstpointer mem, gsize byte_size);
// void* g_memdup2 (const void* mem, gsize byte_size);
gpointer memdup2 (const void* mem, gsize byte_size) noexcept
{
  typedef void* (*call_wrap_t) (const void* mem, gsize byte_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_memdup2;
  auto byte_size_to_c = byte_size;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((const void*) (mem_to_c), (gsize) (byte_size_to_c));
  return _temp_ret;
}

// int g_mkdir (const gchar* filename /*none*/, int mode);
// gint g_mkdir (const char* filename /*none*/, gint mode);
gint mkdir (const gi::cstring_v filename, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkdir;
  auto mode_to_c = mode;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// gint g_mkdir_with_parents (const gchar* pathname /*none*/, gint mode);
// gint g_mkdir_with_parents (const char* pathname /*none*/, gint mode);
gint mkdir_with_parents (const gi::cstring_v pathname, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* pathname, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkdir_with_parents;
  auto mode_to_c = mode;
  auto pathname_to_c = gi::unwrap (pathname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (pathname_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// gchar* /*full,nullable*/ g_mkdtemp (gchar* tmpl /*none*/);
// char* /*full,nullable*/ g_mkdtemp (char* tmpl /*none*/);
gi::cstring mkdtemp (gi::cstring_v tmpl) noexcept
{
  typedef char* (*call_wrap_t) (char* tmpl);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkdtemp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_mkdtemp_full (gchar* tmpl /*none*/, gint mode);
// char* /*full,nullable*/ g_mkdtemp_full (char* tmpl /*none*/, gint mode);
gi::cstring mkdtemp_full (gi::cstring_v tmpl, gint mode) noexcept
{
  typedef char* (*call_wrap_t) (char* tmpl, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkdtemp_full;
  auto mode_to_c = mode;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c), (gint) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_mkstemp (gchar* tmpl /*none*/);
// gint g_mkstemp (char* tmpl /*none*/);
gint mkstemp (gi::cstring_v tmpl) noexcept
{
  typedef gint (*call_wrap_t) (char* tmpl);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkstemp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c));
  return _temp_ret;
}

// gint g_mkstemp_full (gchar* tmpl /*none*/, gint flags, gint mode);
// gint g_mkstemp_full (char* tmpl /*none*/, gint flags, gint mode);
gint mkstemp_full (gi::cstring_v tmpl, gint flags, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (char* tmpl, gint flags, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mkstemp_full;
  auto mode_to_c = mode;
  auto flags_to_c = flags;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c), (gint) (flags_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// void g_nullify_pointer (gpointer* nullify_location);
// void g_nullify_pointer (void* nullify_location);
// SKIP; inconsistent nullify_location in pointer depth (2 vs 1)

// GQuark g_number_parser_error_quark ();
// ::GQuark g_number_parser_error_quark ();
GLib::Quark number_parser_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_number_parser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_on_error_query (const gchar* prg_name /*none*/);
// void g_on_error_query (const char* prg_name /*none*/);
void on_error_query (const gi::cstring_v prg_name) noexcept
{
  typedef void (*call_wrap_t) (const char* prg_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_on_error_query;
  auto prg_name_to_c = gi::unwrap (prg_name, gi::transfer_none);
  call_wrap_v ((const char*) (prg_name_to_c));
}

// void g_on_error_stack_trace (const gchar* prg_name /*none*/);
// void g_on_error_stack_trace (const char* prg_name /*none*/);
void on_error_stack_trace (const gi::cstring_v prg_name) noexcept
{
  typedef void (*call_wrap_t) (const char* prg_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_on_error_stack_trace;
  auto prg_name_to_c = gi::unwrap (prg_name, gi::transfer_none);
  call_wrap_v ((const char*) (prg_name_to_c));
}

// int g_open (const gchar* filename /*none*/, int flags, int mode);
// gint g_open (const char* filename /*none*/, gint flags, gint mode);
gint open (const gi::cstring_v filename, gint flags, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint flags, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_open;
  auto mode_to_c = mode;
  auto flags_to_c = flags;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (flags_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// GQuark g_option_error_quark ();
// ::GQuark g_option_error_quark ();
GLib::Quark option_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_option_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_parse_debug_string (const gchar* string /*none,nullable*/, const GDebugKey* keys /*none*/, guint nkeys);
// guint g_parse_debug_string (const char* string /*none,nullable*/, const ::GDebugKey** keys /*none*/, guint nkeys);
// SKIP; keys in boxed array not supported (depth 1)

// gchar* /*full*/ g_path_get_basename (const gchar* file_name /*none*/);
// char* /*full*/ g_path_get_basename (const char* file_name /*none*/);
gi::cstring path_get_basename (const gi::cstring_v file_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_get_basename;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_path_get_dirname (const gchar* file_name /*none*/);
// char* /*full*/ g_path_get_dirname (const char* file_name /*none*/);
gi::cstring path_get_dirname (const gi::cstring_v file_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_get_dirname;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_path_is_absolute (const gchar* file_name /*none*/);
// gboolean g_path_is_absolute (const char* file_name /*none*/);
bool path_is_absolute (const gi::cstring_v file_name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_is_absolute;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_path_skip_root (const gchar* file_name /*none*/);
// const char* /*none,nullable*/ g_path_skip_root (const char* file_name /*none*/);
gi::cstring_v path_skip_root (const gi::cstring_v file_name) noexcept
{
  typedef const char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_path_skip_root;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_pattern_match_simple (const gchar* pattern /*none*/, const gchar* string /*none*/);
// gboolean g_pattern_match_simple (const char* pattern /*none*/, const char* string /*none*/);
bool pattern_match_simple (const gi::cstring_v pattern, const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* pattern, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pattern_match_simple;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c));
  return _temp_ret;
}

// void g_pointer_bit_lock (void* address, gint lock_bit);
// void g_pointer_bit_lock (void* address, gint lock_bit);
void pointer_bit_lock (void* address, gint lock_bit) noexcept
{
  typedef void (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pointer_bit_lock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
}

// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
bool pointer_bit_trylock (void* address, gint lock_bit) noexcept
{
  typedef gboolean (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pointer_bit_trylock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  auto _temp_ret = call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
  return _temp_ret;
}

// void g_pointer_bit_unlock (void* address, gint lock_bit);
// void g_pointer_bit_unlock (void* address, gint lock_bit);
void pointer_bit_unlock (void* address, gint lock_bit) noexcept
{
  typedef void (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pointer_bit_unlock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
}

// gint g_poll (GPollFD* fds /*none*/, guint nfds, gint timeout);
// gint g_poll (::GPollFD* fds /*none*/, guint nfds, gint timeout);
gint poll (GLib::PollFD_Ref fds, guint nfds, gint timeout) noexcept
{
  typedef gint (*call_wrap_t) (::GPollFD* fds, guint nfds, gint timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_poll;
  auto timeout_to_c = timeout;
  auto nfds_to_c = nfds;
  auto fds_to_c = gi::unwrap (fds, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPollFD*) (fds_to_c), (guint) (nfds_to_c), (gint) (timeout_to_c));
  return _temp_ret;
}

// void g_prefix_error (GError** err /*full,inout,opt,nullable*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_prefix_error (::GError** err /*full,inout,opt,nullable*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_prefix_error_literal (GError** err /*full,inout,opt,nullable*/, const gchar* prefix /*none*/);
// void g_prefix_error_literal (::GError** err /*full,inout,opt,nullable*/, const char* prefix /*none*/);
void prefix_error_literal (GLib::Error * err, const gi::cstring_v prefix) noexcept
{
  typedef void (*call_wrap_t) (::GError** err, const char* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_prefix_error_literal;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none);
  auto err_to_c = gi::unwrap (std::move(*err), gi::transfer_full);
  ::GError* err_o = err_to_c;
  call_wrap_v ((::GError**) (err ? &err_o : nullptr), (const char*) (prefix_to_c));
  if (err) *err = gi::wrap (err_o, gi::transfer_full);
}

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
void propagate_error (GLib::Error * dest, GLib::Error src) noexcept
{
  typedef void (*call_wrap_t) (::GError** dest, ::GError* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_propagate_error;
  auto src_to_c = gi::unwrap (std::move(src), gi::transfer_full);
  ::GError* dest_o {};
  call_wrap_v ((::GError**) (dest ? &dest_o : nullptr), (::GError*) (src_to_c));
  if (dest) *dest = gi::wrap (dest_o, gi::transfer_full);
}
GLib::Error propagate_error (GLib::Error src) noexcept
{
  typedef void (*call_wrap_t) (::GError** dest, ::GError* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_propagate_error;
  auto src_to_c = gi::unwrap (std::move(src), gi::transfer_full);
  ::GError* dest_o {};
  call_wrap_v ((::GError**) (&dest_o), (::GError*) (src_to_c));
  return gi::wrap (dest_o, gi::transfer_full);
}

// void g_propagate_prefixed_error (GError** dest /*none*/, GError* src /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_propagate_prefixed_error (::GError* dest /*none*/, ::GError* src /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_qsort_with_data (gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func /*none*/, gpointer user_data);
// void g_qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc::cfunction_type compare_func /*none*/, void* user_data);
void qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc compare_func) noexcept
{
  typedef void (*call_wrap_t) (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_qsort_with_data;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  auto size_to_c = size;
  auto total_elems_to_c = total_elems;
  auto pbase_to_c = pbase;
  call_wrap_v ((const void*) (pbase_to_c), (gint) (total_elems_to_c), (gsize) (size_to_c), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
}

// GQuark g_quark_from_static_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_from_static_string (const char* string /*none,nullable*/);
GLib::Quark quark_from_static_string (const gi::cstring_v string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_from_static_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_from_static_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_from_static_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// GQuark g_quark_from_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_from_string (const char* string /*none,nullable*/);
GLib::Quark quark_from_string (const gi::cstring_v string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_from_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_from_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// const gchar* /*none*/ g_quark_to_string (GQuark quark);
// const char* /*none*/ g_quark_to_string (::GQuark quark);
gi::cstring_v quark_to_string (::GQuark quark) noexcept
{
  typedef const char* (*call_wrap_t) (::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_to_string;
  auto quark_to_c = quark;
  auto _temp_ret = call_wrap_v ((::GQuark) (quark_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GQuark g_quark_try_string (const gchar* string /*none,nullable*/);
// ::GQuark g_quark_try_string (const char* string /*none,nullable*/);
GLib::Quark quark_try_string (const gi::cstring_v string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_try_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_try_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_quark_try_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gdouble g_random_double ();
// gdouble g_random_double ();
gdouble random_double () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_random_double;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gdouble g_random_double_range (gdouble begin, gdouble end);
// gdouble g_random_double_range (gdouble begin, gdouble end);
gdouble random_double_range (gdouble begin, gdouble end) noexcept
{
  typedef gdouble (*call_wrap_t) (gdouble begin, gdouble end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_random_double_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gdouble) (begin_to_c), (gdouble) (end_to_c));
  return _temp_ret;
}

// guint32 g_random_int ();
// guint32 g_random_int ();
guint32 random_int () noexcept
{
  typedef guint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_random_int;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint32 g_random_int_range (gint32 begin, gint32 end);
// gint32 g_random_int_range (gint32 begin, gint32 end);
gint32 random_int_range (gint32 begin, gint32 end) noexcept
{
  typedef gint32 (*call_wrap_t) (gint32 begin, gint32 end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_random_int_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gint32) (begin_to_c), (gint32) (end_to_c));
  return _temp_ret;
}

// void g_random_set_seed (guint32 seed);
// void g_random_set_seed (guint32 seed);
void random_set_seed (guint32 seed) noexcept
{
  typedef void (*call_wrap_t) (guint32 seed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_random_set_seed;
  auto seed_to_c = seed;
  call_wrap_v ((guint32) (seed_to_c));
}

// gpointer g_rc_box_acquire (gpointer mem_block);
// void* g_rc_box_acquire (void* mem_block);
gpointer rc_box_acquire (void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_acquire;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_alloc (gsize block_size);
// void* g_rc_box_alloc (gsize block_size);
gpointer rc_box_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_alloc0 (gsize block_size);
// void* g_rc_box_alloc0 (gsize block_size);
gpointer rc_box_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_rc_box_dup (gsize block_size, const void* mem_block);
gpointer rc_box_dup (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_dup;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// gsize g_rc_box_get_size (gpointer mem_block);
// gsize g_rc_box_get_size (void* mem_block);
gsize rc_box_get_size (void* mem_block) noexcept
{
  typedef gsize (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_get_size;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_rc_box_release (gpointer mem_block);
// void g_rc_box_release (void* mem_block);
void rc_box_release (void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rc_box_release;
  auto mem_block_to_c = mem_block;
  call_wrap_v ((void*) (mem_block_to_c));
}

// void g_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func /*none*/);
// void g_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func /*none*/);
// SKIP; callback misses closure info

// gpointer g_realloc (gpointer mem, gsize n_bytes);
// void* g_realloc (void* mem, gsize n_bytes);
gpointer realloc (void* mem, gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_realloc;
  auto n_bytes_to_c = n_bytes;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
gpointer realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_realloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

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
gi::cstring ref_string_acquire (gi::cstring_v str) noexcept
{
  typedef char* (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_acquire;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gsize g_ref_string_length (char* str /*none*/);
// gsize g_ref_string_length (char* str /*none*/);
gsize ref_string_length (gi::cstring_v str) noexcept
{
  typedef gsize (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (str_to_c));
  return _temp_ret;
}

// char* /*full*/ g_ref_string_new (const char* str /*none*/);
// char* /*full*/ g_ref_string_new (const char* str /*none*/);
gi::cstring ref_string_new (const gi::cstring_v str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_new;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_ref_string_new_intern (const char* str /*none*/);
// char* /*full*/ g_ref_string_new_intern (const char* str /*none*/);
gi::cstring ref_string_new_intern (const gi::cstring_v str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_new_intern;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_ref_string_new_len (const char* str /*none*/, gssize len);
// char* /*full*/ g_ref_string_new_len (const char* str /*none*/, gssize len);
gi::cstring ref_string_new_len (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_new_len;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_ref_string_release (char* str /*none*/);
// void g_ref_string_release (char* str /*none*/);
void ref_string_release (gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ref_string_release;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((char*) (str_to_c));
}

// void g_reload_user_special_dirs_cache ();
// void g_reload_user_special_dirs_cache ();
void reload_user_special_dirs_cache () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_reload_user_special_dirs_cache;
  call_wrap_v ();
}

// int g_remove (const gchar* filename /*none*/);
// gint g_remove (const char* filename /*none*/);
gint remove (const gi::cstring_v filename) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_remove;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return _temp_ret;
}

// int g_rename (const gchar* oldfilename /*none*/, const gchar* newfilename /*none*/);
// gint g_rename (const char* oldfilename /*none*/, const char* newfilename /*none*/);
gint rename (const gi::cstring_v oldfilename, const gi::cstring_v newfilename) noexcept
{
  typedef gint (*call_wrap_t) (const char* oldfilename, const char* newfilename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rename;
  auto newfilename_to_c = gi::unwrap (newfilename, gi::transfer_none);
  auto oldfilename_to_c = gi::unwrap (oldfilename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (oldfilename_to_c), (const char*) (newfilename_to_c));
  return _temp_ret;
}

// void g_return_if_fail_warning (const char* log_domain /*none,nullable*/, const char* pretty_function /*none*/, const char* expression /*none,nullable*/);
// void g_return_if_fail_warning (const char* log_domain /*none,nullable*/, const char* pretty_function /*none*/, const char* expression /*none,nullable*/);
void return_if_fail_warning (const gi::cstring_v log_domain, const gi::cstring_v pretty_function, const gi::cstring_v expression) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, const char* pretty_function, const char* expression);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_return_if_fail_warning;
  auto expression_to_c = gi::unwrap (expression, gi::transfer_none);
  auto pretty_function_to_c = gi::unwrap (pretty_function, gi::transfer_none);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  call_wrap_v ((const char*) (log_domain_to_c), (const char*) (pretty_function_to_c), (const char*) (expression_to_c));
}
void return_if_fail_warning (const gi::cstring_v pretty_function) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, const char* pretty_function, const char* expression);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_return_if_fail_warning;
  auto expression_to_c = nullptr;
  auto pretty_function_to_c = gi::unwrap (pretty_function, gi::transfer_none);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (const char*) (pretty_function_to_c), (const char*) (expression_to_c));
}

// int g_rmdir (const gchar* filename /*none*/);
// gint g_rmdir (const char* filename /*none*/);
gint rmdir (const gi::cstring_v filename) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rmdir;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return _temp_ret;
}

// void g_set_application_name (const gchar* application_name /*none*/);
// void g_set_application_name (const char* application_name /*none*/);
void set_application_name (const gi::cstring_v application_name) noexcept
{
  typedef void (*call_wrap_t) (const char* application_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_set_application_name;
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none);
  call_wrap_v ((const char*) (application_name_to_c));
}

// void g_set_error (GError** err /*full,out,opt*/, GQuark domain, gint code, const gchar* format /*none*/,  ..._ /*none*/);
// void g_set_error (::GError** err /*full,out,opt*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_set_error_literal (GError** err /*full,out,opt*/, GQuark domain, gint code, const gchar* message /*none*/);
// void g_set_error_literal (::GError** err /*full,out,opt*/, ::GQuark domain, gint code, const char* message /*none*/);
void set_error_literal (GLib::Error * err, ::GQuark domain, gint code, const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GError** err, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_set_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto code_to_c = code;
  auto domain_to_c = domain;
  ::GError* err_o {};
  call_wrap_v ((::GError**) (err ? &err_o : nullptr), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
  if (err) *err = gi::wrap (err_o, gi::transfer_full);
}
GLib::Error set_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GError** err, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_set_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto code_to_c = code;
  auto domain_to_c = domain;
  ::GError* err_o {};
  call_wrap_v ((::GError**) (&err_o), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
  return gi::wrap (err_o, gi::transfer_full);
}

// void g_set_prgname (const gchar* prgname /*none*/);
// void g_set_prgname (const char* prgname /*none*/);
void set_prgname (const gi::cstring_v prgname) noexcept
{
  typedef void (*call_wrap_t) (const char* prgname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_set_prgname;
  auto prgname_to_c = gi::unwrap (prgname, gi::transfer_none);
  call_wrap_v ((const char*) (prgname_to_c));
}

// FAILURE on g_set_print_handler; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_set_printerr_handler; No such node (<xmlattr>.transfer-ownership)
// void g_set_user_dirs (const gchar* first_dir_type /*none*/,  ..._ /*none*/);
// void g_set_user_dirs (const char* first_dir_type /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_setenv (const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// gboolean g_setenv (const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
bool setenv (const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
  return _temp_ret;
}

// GQuark g_shell_error_quark ();
// ::GQuark g_shell_error_quark ();
GLib::Quark shell_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_shell_parse_argv (const gchar* command_line /*none*/, gint* argcp, gchar*** argvp /*full,out,opt*/, GError ** error);
// gboolean g_shell_parse_argv (const char* command_line /*none*/, gint* argcp, char*** argvp /*full,out,opt*/, GError ** error);
bool shell_parse_argv (const gi::cstring_v command_line, gint * argcp, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * argvp)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (argcp ? &argcp_o : nullptr), (char***) (argvp ? &argvp_o : nullptr), &error);
  if (argvp) *argvp = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(argvp_o, gi::transfer_full);
  if (argcp) *argcp = argcp_o;
  gi::check_error (error);
  return _temp_ret;
}
bool shell_parse_argv (const gi::cstring_v command_line, gint * argcp, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * argvp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (argcp ? &argcp_o : nullptr), (char***) (argvp ? &argvp_o : nullptr), _error ? &_error_o : nullptr);
  if (argvp) *argvp = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(argvp_o, gi::transfer_full);
  if (argcp) *argcp = argcp_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gint, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> shell_parse_argv (const gi::cstring_v command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (&argcp_o), (char***) (&argvp_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = argcp_o;
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(argvp_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gint, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> shell_parse_argv (const gi::cstring_v command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (&argcp_o), (char***) (&argvp_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = argcp_o;
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(argvp_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gchar* /*full*/ g_shell_quote (const gchar* unquoted_string /*none*/);
// char* /*full*/ g_shell_quote (const char* unquoted_string /*none*/);
gi::cstring shell_quote (const gi::cstring_v unquoted_string) noexcept
{
  typedef char* (*call_wrap_t) (const char* unquoted_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_quote;
  auto unquoted_string_to_c = gi::unwrap (unquoted_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (unquoted_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_shell_unquote (const gchar* quoted_string /*none*/, GError ** error);
// char* /*full*/ g_shell_unquote (const char* quoted_string /*none*/, GError ** error);
gi::cstring shell_unquote (const gi::cstring_v quoted_string)
{
  typedef char* (*call_wrap_t) (const char* quoted_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_unquote;
  auto quoted_string_to_c = gi::unwrap (quoted_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (quoted_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring shell_unquote (const gi::cstring_v quoted_string, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* quoted_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_shell_unquote;
  auto quoted_string_to_c = gi::unwrap (quoted_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (quoted_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer g_slice_alloc (gsize block_size);
// void* g_slice_alloc (gsize block_size);
gpointer slice_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_slice_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_slice_alloc0 (gsize block_size);
// void* g_slice_alloc0 (gsize block_size);
gpointer slice_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_slice_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_slice_copy (gsize block_size, gconstpointer mem_block);
// void* g_slice_copy (gsize block_size, const void* mem_block);
gpointer slice_copy (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_slice_copy;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_slice_free1 (gsize block_size, gpointer mem_block);
// void g_slice_free1 (gsize block_size, void* mem_block);
void slice_free1 (gsize block_size, void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (gsize block_size, void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_slice_free1;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  call_wrap_v ((gsize) (block_size_to_c), (void*) (mem_block_to_c));
}

// void g_slice_free_chain_with_offset (gsize block_size, gpointer mem_chain, gsize next_offset);
// void g_slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset);
void slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset) noexcept
{
  typedef void (*call_wrap_t) (gsize block_size, void* mem_chain, gsize next_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_slice_free_chain_with_offset;
  auto next_offset_to_c = next_offset;
  auto mem_chain_to_c = mem_chain;
  auto block_size_to_c = block_size;
  call_wrap_v ((gsize) (block_size_to_c), (void*) (mem_chain_to_c), (gsize) (next_offset_to_c));
}

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
guint spaced_primes_closest (guint num) noexcept
{
  typedef guint (*call_wrap_t) (guint num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spaced_primes_closest;
  auto num_to_c = num;
  auto _temp_ret = call_wrap_v ((guint) (num_to_c));
  return _temp_ret;
}

// gboolean g_spawn_async (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, GError ** error);
// gboolean g_spawn_async (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, GError ** error);
bool spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid> spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_spawn_async_with_fds (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_spawn_async_with_fds (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
bool spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_spawn_async_with_pipes (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
// gboolean g_spawn_async_with_pipes (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
bool spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), &error);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), &error);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), _error ? &_error_o : nullptr);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), _error ? &_error_o : nullptr);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  auto &&tmp_return_3 = standard_input_o;
  auto &&tmp_return_4 = standard_output_o;
  auto &&tmp_return_5 = standard_error_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  auto &&tmp_return_3 = standard_input_o;
  auto &&tmp_return_4 = standard_output_o;
  auto &&tmp_return_5 = standard_error_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  auto &&tmp_return_3 = standard_input_o;
  auto &&tmp_return_4 = standard_output_o;
  auto &&tmp_return_5 = standard_error_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_o;
  auto &&tmp_return_3 = standard_input_o;
  auto &&tmp_return_4 = standard_output_o;
  auto &&tmp_return_5 = standard_error_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// gboolean g_spawn_async_with_pipes_and_fds (const gchar* working_directory /*none,nullable*/, const gchar* const* argv /*none*/, const gchar* const* envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds /*none,nullable*/, const gint* target_fds /*none,nullable*/, gsize n_fds, GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
// gboolean g_spawn_async_with_pipes_and_fds (const char* working_directory /*none,nullable*/, const char** argv /*none*/, const char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds /*none,nullable*/, const gint* target_fds /*none,nullable*/, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
bool spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), &error);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), &error);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_out_o;
  auto &&tmp_return_3 = stdin_pipe_out_o;
  auto &&tmp_return_4 = stdout_pipe_out_o;
  auto &&tmp_return_5 = stderr_pipe_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_out_o;
  auto &&tmp_return_3 = stdin_pipe_out_o;
  auto &&tmp_return_4 = stdout_pipe_out_o;
  auto &&tmp_return_5 = stderr_pipe_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_out_o;
  auto &&tmp_return_3 = stdin_pipe_out_o;
  auto &&tmp_return_4 = stdout_pipe_out_o;
  auto &&tmp_return_5 = stderr_pipe_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_to_c = target_fds;
  auto source_fds_to_c = source_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (n_fds), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = child_pid_out_o;
  auto &&tmp_return_3 = stdin_pipe_out_o;
  auto &&tmp_return_4 = stdout_pipe_out_o;
  auto &&tmp_return_5 = stderr_pipe_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
bool spawn_check_wait_status (gint wait_status)
{
  typedef gboolean (*call_wrap_t) (gint wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_check_wait_status;
  auto wait_status_to_c = wait_status;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (wait_status_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_check_wait_status (gint wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_check_wait_status;
  auto wait_status_to_c = wait_status;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (wait_status_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_spawn_close_pid (GPid pid);
// void g_spawn_close_pid (::GPid pid);
void spawn_close_pid (::GPid pid) noexcept
{
  typedef void (*call_wrap_t) (::GPid pid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_close_pid;
  auto pid_to_c = pid;
  call_wrap_v ((::GPid) (pid_to_c));
}

// gboolean g_spawn_command_line_async (const gchar* command_line /*none*/, GError ** error);
// gboolean g_spawn_command_line_async (const char* command_line /*none*/, GError ** error);
bool spawn_command_line_async (const gi::cstring_v command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_async;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_command_line_async (const gi::cstring_v command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_async;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_spawn_command_line_sync (const gchar* command_line /*none*/, gchar** standard_output /*full,out,opt*/, gchar** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
// gboolean g_spawn_command_line_sync (const char* command_line /*none*/, guint8** standard_output /*full,out,opt*/, guint8** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
bool spawn_command_line_sync (const gi::cstring_v command_line, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_command_line_sync (const gi::cstring_v command_line, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_command_line_sync (const gi::cstring_v command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_command_line_sync (const gi::cstring_v command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// GQuark g_spawn_error_quark ();
// ::GQuark g_spawn_error_quark ();
GLib::Quark spawn_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GQuark g_spawn_exit_error_quark ();
// ::GQuark g_spawn_exit_error_quark ();
GLib::Quark spawn_exit_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_exit_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_spawn_sync (const gchar* working_directory /*none,nullable*/, gchar** argv /*none*/, gchar** envp /*none,nullable*/, GSpawnFlags flags, GSpawnChildSetupFunc child_setup /*none,nullable*/, gpointer user_data, gchar** standard_output /*full,out,opt*/, gchar** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
// gboolean g_spawn_sync (const char* working_directory /*none,nullable*/, char** argv /*none*/, char** envp /*none,nullable*/, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none,nullable*/, void* user_data, guint8** standard_output /*full,out,opt*/, guint8** standard_error /*full,out,opt*/, gint* wait_status, GError ** error);
bool spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_output, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (const gi::cstring_v working_directory, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>, gint> spawn_sync (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_setup_wrap_)>::type> child_setup_wrap__sp (child_setup_wrap_);
  auto flags_to_c = gi::unwrap (flags);
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_output_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_full_t>>(standard_error_o, gi::transfer_full);
  auto &&tmp_return_4 = wait_status_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gint g_sprintf (gchar* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// gint g_sprintf (char* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// int g_stat (const gchar* filename /*none*/, GStatBuf* buf /*none*/);
// gint g_stat (const char* filename /*none*/,  buf /*none*/);
// SKIP; buf type  not supported

// gchar* /*full*/ g_stpcpy (gchar* dest /*none*/, const char* src /*none*/);
// char* /*full*/ g_stpcpy (char* dest /*none*/, const char* src /*none*/);
gi::cstring stpcpy (gi::cstring_v dest, const gi::cstring_v src) noexcept
{
  typedef char* (*call_wrap_t) (char* dest, const char* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_stpcpy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_str_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_str_equal (const void* v1, const void* v2);
bool str_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// gboolean g_str_has_prefix (const gchar* str /*none*/, const gchar* prefix /*none*/);
// gboolean g_str_has_prefix (const char* str /*none*/, const char* prefix /*none*/);
bool str_has_prefix (const gi::cstring_v str, const gi::cstring_v prefix) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, const char* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_has_prefix;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none);
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (prefix_to_c));
  return _temp_ret;
}

// gboolean g_str_has_suffix (const gchar* str /*none*/, const gchar* suffix /*none*/);
// gboolean g_str_has_suffix (const char* str /*none*/, const char* suffix /*none*/);
bool str_has_suffix (const gi::cstring_v str, const gi::cstring_v suffix) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, const char* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_has_suffix;
  auto suffix_to_c = gi::unwrap (suffix, gi::transfer_none);
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (suffix_to_c));
  return _temp_ret;
}

// guint g_str_hash (gconstpointer v);
// guint g_str_hash (const void* v);
guint str_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// gboolean g_str_is_ascii (const gchar* str /*none*/);
// gboolean g_str_is_ascii (const char* str /*none*/);
bool str_is_ascii (const gi::cstring_v str) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_is_ascii;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return _temp_ret;
}

// gboolean g_str_match_string (const gchar* search_term /*none*/, const gchar* potential_hit /*none*/, gboolean accept_alternates);
// gboolean g_str_match_string (const char* search_term /*none*/, const char* potential_hit /*none*/, gboolean accept_alternates);
bool str_match_string (const gi::cstring_v search_term, const gi::cstring_v potential_hit, gboolean accept_alternates) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* search_term, const char* potential_hit, gboolean accept_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_match_string;
  auto accept_alternates_to_c = accept_alternates;
  auto potential_hit_to_c = gi::unwrap (potential_hit, gi::transfer_none);
  auto search_term_to_c = gi::unwrap (search_term, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (search_term_to_c), (const char*) (potential_hit_to_c), (gboolean) (accept_alternates_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_str_to_ascii (const gchar* str /*none*/, const gchar* from_locale /*none,nullable*/);
// char* /*full*/ g_str_to_ascii (const char* str /*none*/, const char* from_locale /*none,nullable*/);
gi::cstring str_to_ascii (const gi::cstring_v str, const gi::cstring_v from_locale) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* from_locale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_to_ascii;
  auto from_locale_to_c = gi::unwrap (from_locale, gi::transfer_none);
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (from_locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring str_to_ascii (const gi::cstring_v str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* from_locale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_to_ascii;
  auto from_locale_to_c = nullptr;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (from_locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_str_tokenize_and_fold (const gchar* string /*none*/, const gchar* translit_locale /*none,nullable*/, gchar*** ascii_alternates /*full,out*/);
// char** /*full*/ g_str_tokenize_and_fold (const char* string /*none*/, const char* translit_locale /*none,nullable*/, char*** ascii_alternates /*full,out*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> str_tokenize_and_fold (const gi::cstring_v string, const gi::cstring_v translit_locale, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & ascii_alternates) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = gi::unwrap (translit_locale, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  ascii_alternates = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(ascii_alternates_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> str_tokenize_and_fold (const gi::cstring_v string, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & ascii_alternates) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  ascii_alternates = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(ascii_alternates_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> str_tokenize_and_fold (const gi::cstring_v string, const gi::cstring_v translit_locale) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = gi::unwrap (translit_locale, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(ascii_alternates_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> str_tokenize_and_fold (const gi::cstring_v string) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(ascii_alternates_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full*/ g_strcanon (gchar* string /*none*/, const gchar* valid_chars /*none*/, gchar substitutor);
// char* /*full*/ g_strcanon (char* string /*none*/, const char* valid_chars /*none*/, gchar substitutor);
gi::cstring strcanon (gi::cstring_v string, const gi::cstring_v valid_chars, gchar substitutor) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* valid_chars, gchar substitutor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strcanon;
  auto substitutor_to_c = substitutor;
  auto valid_chars_to_c = gi::unwrap (valid_chars, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (valid_chars_to_c), (gchar) (substitutor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strchomp (gchar* string /*none*/);
// char* /*full*/ g_strchomp (char* string /*none*/);
gi::cstring strchomp (gi::cstring_v string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strchomp;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strchug (gchar* string /*none*/);
// char* /*full*/ g_strchug (char* string /*none*/);
gi::cstring strchug (gi::cstring_v string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strchug;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int g_strcmp0 (const char* str1 /*none,nullable*/, const char* str2 /*none,nullable*/);
// gint g_strcmp0 (const char* str1 /*none,nullable*/, const char* str2 /*none,nullable*/);
gint strcmp0 (const gi::cstring_v str1, const gi::cstring_v str2) noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strcmp0;
  auto str2_to_c = gi::unwrap (str2, gi::transfer_none);
  auto str1_to_c = gi::unwrap (str1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}
gint strcmp0 () noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strcmp0;
  auto str2_to_c = nullptr;
  auto str1_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_strcompress (const gchar* source /*none*/);
// char* /*full*/ g_strcompress (const char* source /*none*/);
gi::cstring strcompress (const gi::cstring_v source) noexcept
{
  typedef char* (*call_wrap_t) (const char* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strcompress;
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strconcat (const gchar* string1 /*none*/,  ..._ /*none*/);
// char* /*full*/ g_strconcat (const char* string1 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_strdelimit (gchar* string /*none*/, const gchar* delimiters /*none,nullable*/, gchar new_delimiter);
// char* /*full*/ g_strdelimit (char* string /*none*/, const char* delimiters /*none,nullable*/, gchar new_delimiter);
gi::cstring strdelimit (gi::cstring_v string, const gi::cstring_v delimiters, gchar new_delimiter) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* delimiters, gchar new_delimiter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strdelimit;
  auto new_delimiter_to_c = new_delimiter;
  auto delimiters_to_c = gi::unwrap (delimiters, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (delimiters_to_c), (gchar) (new_delimiter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring strdelimit (gi::cstring_v string, gchar new_delimiter) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* delimiters, gchar new_delimiter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strdelimit;
  auto new_delimiter_to_c = new_delimiter;
  auto delimiters_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (delimiters_to_c), (gchar) (new_delimiter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strdup (const gchar* str /*none,nullable*/);
// char* /*full*/ g_strdup (const char* str /*none,nullable*/);
gi::cstring strdup (const gi::cstring_v str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strdup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring strdup () noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strdup;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

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
gi::cstring_v strerror (gint errnum) noexcept
{
  typedef const char* (*call_wrap_t) (gint errnum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strerror;
  auto errnum_to_c = errnum;
  auto _temp_ret = call_wrap_v ((gint) (errnum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full*/ g_strescape (const gchar* source /*none*/, const gchar* exceptions /*none,nullable*/);
// char* /*full*/ g_strescape (const char* source /*none*/, const char* exceptions /*none,nullable*/);
gi::cstring strescape (const gi::cstring_v source, const gi::cstring_v exceptions) noexcept
{
  typedef char* (*call_wrap_t) (const char* source, const char* exceptions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strescape;
  auto exceptions_to_c = gi::unwrap (exceptions, gi::transfer_none);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (const char*) (exceptions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring strescape (const gi::cstring_v source) noexcept
{
  typedef char* (*call_wrap_t) (const char* source, const char* exceptions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strescape;
  auto exceptions_to_c = nullptr;
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (const char*) (exceptions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_strfreev (gchar** str_array /*full,nullable*/);
// void g_strfreev (char* str_array /*full,nullable*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// const gchar* /*none*/ g_strip_context (const gchar* msgid /*none*/, const gchar* msgval /*none*/);
// const char* /*none*/ g_strip_context (const char* msgid /*none*/, const char* msgval /*none*/);
gi::cstring_v strip_context (const gi::cstring_v msgid, const gi::cstring_v msgval) noexcept
{
  typedef const char* (*call_wrap_t) (const char* msgid, const char* msgval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strip_context;
  auto msgval_to_c = gi::unwrap (msgval, gi::transfer_none);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (msgid_to_c), (const char*) (msgval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full*/ g_strjoin (const gchar* separator /*none,nullable*/,  ..._ /*none*/);
// char* /*full*/ g_strjoin (const char* separator /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gchar* /*full*/ g_strjoinv (const gchar* separator /*none,nullable*/, gchar** str_array /*none*/);
// char* /*full*/ g_strjoinv (const char* separator /*none,nullable*/, char* str_array /*none*/);
// SKIP; inconsistent str_array in pointer depth (2 vs 1)

// gsize g_strlcat (gchar* dest /*none*/, const gchar* src /*none*/, gsize dest_size);
// gsize g_strlcat (char* dest /*none*/, const char* src /*none*/, gsize dest_size);
gsize strlcat (gi::cstring_v dest, const gi::cstring_v src, gsize dest_size) noexcept
{
  typedef gsize (*call_wrap_t) (char* dest, const char* src, gsize dest_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strlcat;
  auto dest_size_to_c = dest_size;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (dest_size_to_c));
  return _temp_ret;
}

// gsize g_strlcpy (gchar* dest /*none*/, const gchar* src /*none*/, gsize dest_size);
// gsize g_strlcpy (char* dest /*none*/, const char* src /*none*/, gsize dest_size);
gsize strlcpy (gi::cstring_v dest, const gi::cstring_v src, gsize dest_size) noexcept
{
  typedef gsize (*call_wrap_t) (char* dest, const char* src, gsize dest_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strlcpy;
  auto dest_size_to_c = dest_size;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (dest_size_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_strndup (const gchar* str /*none*/, gsize n);
// char* /*full*/ g_strndup (const char* str /*none*/, gsize n);
gi::cstring strndup (const gi::cstring_v str, gsize n) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strndup;
  auto n_to_c = n;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gsize) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strnfill (gsize length, gchar fill_char);
// char* /*full*/ g_strnfill (gsize length, gchar fill_char);
gi::cstring strnfill (gsize length, gchar fill_char) noexcept
{
  typedef char* (*call_wrap_t) (gsize length, gchar fill_char);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strnfill;
  auto fill_char_to_c = fill_char;
  auto length_to_c = length;
  auto _temp_ret = call_wrap_v ((gsize) (length_to_c), (gchar) (fill_char_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strreverse (gchar* string /*none*/);
// char* /*full*/ g_strreverse (char* string /*none*/);
gi::cstring strreverse (gi::cstring_v string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strreverse;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strrstr (const gchar* haystack /*none*/, const gchar* needle /*none*/);
// char* /*full*/ g_strrstr (const char* haystack /*none*/, const char* needle /*none*/);
gi::cstring strrstr (const gi::cstring_v haystack, const gi::cstring_v needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strrstr;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none);
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strrstr_len (const gchar* haystack /*none*/, gssize haystack_len, const gchar* needle /*none*/);
// char* /*full*/ g_strrstr_len (const char* haystack /*none*/, gssize haystack_len, const char* needle /*none*/);
gi::cstring strrstr_len (const gi::cstring_v haystack, gssize haystack_len, const gi::cstring_v needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, gssize haystack_len, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strrstr_len;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none);
  auto haystack_len_to_c = haystack_len;
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (gssize) (haystack_len_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_strsignal (gint signum);
// const char* /*none*/ g_strsignal (gint signum);
gi::cstring_v strsignal (gint signum) noexcept
{
  typedef const char* (*call_wrap_t) (gint signum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strsignal;
  auto signum_to_c = signum;
  auto _temp_ret = call_wrap_v ((gint) (signum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar** /*full*/ g_strsplit (const gchar* string /*none*/, const gchar* delimiter /*none*/, gint max_tokens);
// char** /*full*/ g_strsplit (const char* string /*none*/, const char* delimiter /*none*/, gint max_tokens);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> strsplit (const gi::cstring_v string, const gi::cstring_v delimiter, gint max_tokens) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* delimiter, gint max_tokens);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strsplit;
  auto max_tokens_to_c = max_tokens;
  auto delimiter_to_c = gi::unwrap (delimiter, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (delimiter_to_c), (gint) (max_tokens_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_strsplit_set (const gchar* string /*none*/, const gchar* delimiters /*none*/, gint max_tokens);
// char** /*full*/ g_strsplit_set (const char* string /*none*/, const char* delimiters /*none*/, gint max_tokens);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> strsplit_set (const gi::cstring_v string, const gi::cstring_v delimiters, gint max_tokens) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* delimiters, gint max_tokens);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strsplit_set;
  auto max_tokens_to_c = max_tokens;
  auto delimiters_to_c = gi::unwrap (delimiters, gi::transfer_none);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (delimiters_to_c), (gint) (max_tokens_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strstr_len (const gchar* haystack /*none*/, gssize haystack_len, const gchar* needle /*none*/);
// char* /*full*/ g_strstr_len (const char* haystack /*none*/, gssize haystack_len, const char* needle /*none*/);
gi::cstring strstr_len (const gi::cstring_v haystack, gssize haystack_len, const gi::cstring_v needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, gssize haystack_len, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strstr_len;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none);
  auto haystack_len_to_c = haystack_len;
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (gssize) (haystack_len_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gdouble g_strtod (const gchar* nptr /*none*/, gchar** endptr /*none,out,opt*/);
// gdouble g_strtod (const char* nptr /*none*/, char** endptr /*none,out,opt*/);
gdouble strtod (const gi::cstring_v nptr, gi::cstring_v * endptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<gdouble, gi::cstring_v> strtod (const gi::cstring_v nptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (endptr_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_strv_contains (const gchar* const* strv /*none*/, const gchar* str /*none*/);
// gboolean g_strv_contains (const char* strv /*none*/, const char* str /*none*/);
// IGNORE; marked ignore

// gboolean g_strv_equal (const gchar* const* strv1 /*none*/, const gchar* const* strv2 /*none*/);
// gboolean g_strv_equal (const char* strv1 /*none*/, const char* strv2 /*none*/);
// SKIP; inconsistent strv2 in pointer depth (2 vs 1), inconsistent strv1 in pointer depth (2 vs 1)

// GType g_strv_get_type ();
// GType g_strv_get_type ();
GType strv_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strv_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

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
void test_assert_expected_messages_internal (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_assert_expected_messages_internal;
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c));
}

// void g_test_bug (const char* bug_uri_snippet /*none*/);
// void g_test_bug (const char* bug_uri_snippet /*none*/);
void test_bug (const gi::cstring_v bug_uri_snippet) noexcept
{
  typedef void (*call_wrap_t) (const char* bug_uri_snippet);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_bug;
  auto bug_uri_snippet_to_c = gi::unwrap (bug_uri_snippet, gi::transfer_none);
  call_wrap_v ((const char*) (bug_uri_snippet_to_c));
}

// void g_test_bug_base (const char* uri_pattern /*none*/);
// void g_test_bug_base (const char* uri_pattern /*none*/);
void test_bug_base (const gi::cstring_v uri_pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* uri_pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_bug_base;
  auto uri_pattern_to_c = gi::unwrap (uri_pattern, gi::transfer_none);
  call_wrap_v ((const char*) (uri_pattern_to_c));
}

// gchar* /*full*/ g_test_build_filename (GTestFileType file_type, const gchar* first_path /*none*/,  ..._ /*none*/);
// char* /*full*/ g_test_build_filename (::GTestFileType file_type, const char* first_path /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_test_create_case; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_test_create_suite; No such node (<xmlattr>.transfer-ownership)
// void g_test_disable_crash_reporting ();
// void g_test_disable_crash_reporting ();
void test_disable_crash_reporting () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_disable_crash_reporting;
  call_wrap_v ();
}

// void g_test_expect_message (const gchar* log_domain /*none,nullable*/, GLogLevelFlags log_level, const gchar* pattern /*none*/);
// void g_test_expect_message (const char* log_domain /*none,nullable*/, ::GLogLevelFlags log_level, const char* pattern /*none*/);
void test_expect_message (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_expect_message;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (pattern_to_c));
}
void test_expect_message (GLib::LogLevelFlags log_level, const gi::cstring_v pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_expect_message;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (pattern_to_c));
}

// void g_test_fail ();
// void g_test_fail ();
void test_fail () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_fail;
  call_wrap_v ();
}

// void g_test_fail_printf (const char* format /*none*/,  ..._ /*none*/);
// void g_test_fail_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_failed ();
// gboolean g_test_failed ();
bool test_failed () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_failed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* /*none*/ g_test_get_dir (GTestFileType file_type);
// const char* /*none*/ g_test_get_dir (::GTestFileType file_type);
gi::cstring_v test_get_dir (GLib::TestFileType file_type) noexcept
{
  typedef const char* (*call_wrap_t) (::GTestFileType file_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_get_dir;
  auto file_type_to_c = gi::unwrap (file_type);
  auto _temp_ret = call_wrap_v ((::GTestFileType) (file_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_test_get_filename (GTestFileType file_type, const gchar* first_path /*none*/,  ..._ /*none*/);
// const char* /*none*/ g_test_get_filename (::GTestFileType file_type, const char* first_path /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const char* /*none*/ g_test_get_path ();
// const char* /*none*/ g_test_get_path ();
gi::cstring_v test_get_path () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_get_path;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// FAILURE on g_test_get_root; No such node (<xmlattr>.transfer-ownership)
// void g_test_incomplete (const gchar* msg /*none,nullable*/);
// void g_test_incomplete (const char* msg /*none,nullable*/);
void test_incomplete (const gi::cstring_v msg) noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_incomplete;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none);
  call_wrap_v ((const char*) (msg_to_c));
}
void test_incomplete () noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_incomplete;
  auto msg_to_c = nullptr;
  call_wrap_v ((const char*) (msg_to_c));
}

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
gi::cstring_v test_log_type_name (GLib::TestLogType log_type) noexcept
{
  typedef const char* (*call_wrap_t) (::GTestLogType log_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_log_type_name;
  auto log_type_to_c = gi::unwrap (log_type);
  auto _temp_ret = call_wrap_v ((::GTestLogType) (log_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

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
gdouble test_rand_double () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_rand_double;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// double g_test_rand_double_range (double range_start, double range_end);
// gdouble g_test_rand_double_range (gdouble range_start, gdouble range_end);
gdouble test_rand_double_range (gdouble range_start, gdouble range_end) noexcept
{
  typedef gdouble (*call_wrap_t) (gdouble range_start, gdouble range_end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_rand_double_range;
  auto range_end_to_c = range_end;
  auto range_start_to_c = range_start;
  auto _temp_ret = call_wrap_v ((gdouble) (range_start_to_c), (gdouble) (range_end_to_c));
  return _temp_ret;
}

// gint32 g_test_rand_int ();
// gint32 g_test_rand_int ();
gint32 test_rand_int () noexcept
{
  typedef gint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_rand_int;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
gint32 test_rand_int_range (gint32 begin, gint32 end) noexcept
{
  typedef gint32 (*call_wrap_t) (gint32 begin, gint32 end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_rand_int_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gint32) (begin_to_c), (gint32) (end_to_c));
  return _temp_ret;
}

// int g_test_run ();
// gint g_test_run ();
gint test_run () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_run;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// int g_test_run_suite (GTestSuite* suite /*none*/);
// gint g_test_run_suite ( suite /*none*/);
// SKIP; suite type  not supported

// void g_test_set_nonfatal_assertions ();
// void g_test_set_nonfatal_assertions ();
void test_set_nonfatal_assertions () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_set_nonfatal_assertions;
  call_wrap_v ();
}

// void g_test_skip (const gchar* msg /*none,nullable*/);
// void g_test_skip (const char* msg /*none,nullable*/);
void test_skip (const gi::cstring_v msg) noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_skip;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none);
  call_wrap_v ((const char*) (msg_to_c));
}
void test_skip () noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_skip;
  auto msg_to_c = nullptr;
  call_wrap_v ((const char*) (msg_to_c));
}

// void g_test_skip_printf (const char* format /*none*/,  ..._ /*none*/);
// void g_test_skip_printf (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_subprocess ();
// gboolean g_test_subprocess ();
bool test_subprocess () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_subprocess;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_summary (const char* summary /*none*/);
// void g_test_summary (const char* summary /*none*/);
void test_summary (const gi::cstring_v summary) noexcept
{
  typedef void (*call_wrap_t) (const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_summary;
  auto summary_to_c = gi::unwrap (summary, gi::transfer_none);
  call_wrap_v ((const char*) (summary_to_c));
}

// double g_test_timer_elapsed ();
// gdouble g_test_timer_elapsed ();
gdouble test_timer_elapsed () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_timer_elapsed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// double g_test_timer_last ();
// gdouble g_test_timer_last ();
gdouble test_timer_last () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_timer_last;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_timer_start ();
// void g_test_timer_start ();
void test_timer_start () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_timer_start;
  call_wrap_v ();
}

// void g_test_trap_assertions (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, guint64 assertion_flags, const char* pattern /*none*/);
// void g_test_trap_assertions (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, guint64 assertion_flags, const char* pattern /*none*/);
void test_trap_assertions (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, guint64 assertion_flags, const gi::cstring_v pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, guint64 assertion_flags, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_assertions;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto assertion_flags_to_c = assertion_flags;
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (guint64) (assertion_flags_to_c), (const char*) (pattern_to_c));
}

// gboolean g_test_trap_has_passed ();
// gboolean g_test_trap_has_passed ();
bool test_trap_has_passed () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_has_passed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_test_trap_reached_timeout ();
// gboolean g_test_trap_reached_timeout ();
bool test_trap_reached_timeout () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_reached_timeout;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_trap_subprocess (const char* test_path /*none,nullable*/, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess (const char* test_path /*none,nullable*/, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
void test_trap_subprocess (const gi::cstring_v test_path, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_subprocess;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto test_path_to_c = gi::unwrap (test_path, gi::transfer_none);
  call_wrap_v ((const char*) (test_path_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}
void test_trap_subprocess (guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_subprocess;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto test_path_to_c = nullptr;
  call_wrap_v ((const char*) (test_path_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}

// void g_test_trap_subprocess_with_envp (const char* test_path /*none,nullable*/, const char* const* envp /*none,nullable*/, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess_with_envp (const char* test_path /*none,nullable*/, const char** envp /*none,nullable*/, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
void test_trap_subprocess_with_envp (const gi::cstring_v test_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, const char** envp, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_subprocess_with_envp;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto test_path_to_c = gi::unwrap (test_path, gi::transfer_none);
  call_wrap_v ((const char*) (test_path_to_c), (const char**) (envp_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}
void test_trap_subprocess_with_envp (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> envp, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, const char** envp, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_trap_subprocess_with_envp;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto envp_w = unwrap (std::move(envp), gi::transfer_none);
  auto envp_to_c = envp_w;
  auto test_path_to_c = nullptr;
  call_wrap_v ((const char*) (test_path_to_c), (const char**) (envp_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}

// guint g_timeout_add (guint interval, GSourceFunc function /*none*/, gpointer data);
// guint g_timeout_add (guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_full

// guint g_timeout_add_full (gint priority, guint interval, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_timeout_add_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
guint timeout_add (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_timeout_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint g_timeout_add_once (guint interval, GSourceOnceFunc function /*none*/, gpointer data);
// guint g_timeout_add_once (guint interval, GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// guint g_timeout_add_seconds (guint interval, GSourceFunc function /*none*/, gpointer data);
// guint g_timeout_add_seconds (guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_seconds_full

// guint g_timeout_add_seconds_full (gint priority, guint interval, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// guint g_timeout_add_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
guint timeout_add_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_timeout_add_seconds_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint g_timeout_add_seconds_once (guint interval, GSourceOnceFunc function /*none*/, gpointer data);
// guint g_timeout_add_seconds_once (guint interval, GLib::SourceOnceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// GSource* /*full*/ g_timeout_source_new (guint interval);
// ::GSource* /*full*/ g_timeout_source_new (guint interval);
GLib::Source timeout_source_new (guint interval) noexcept
{
  typedef ::GSource* (*call_wrap_t) (guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_timeout_source_new;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((guint) (interval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSource* /*full*/ g_timeout_source_new_seconds (guint interval);
// ::GSource* /*full*/ g_timeout_source_new_seconds (guint interval);
GLib::Source timeout_source_new_seconds (guint interval) noexcept
{
  typedef ::GSource* (*call_wrap_t) (guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_timeout_source_new_seconds;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((guint) (interval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer g_try_malloc (gsize n_bytes);
// void* g_try_malloc (gsize n_bytes);
gpointer try_malloc (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_malloc;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc0 (gsize n_bytes);
// void* g_try_malloc0 (gsize n_bytes);
gpointer try_malloc0 (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_malloc0;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
gpointer try_malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_malloc0_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
gpointer try_malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_malloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_realloc (gpointer mem, gsize n_bytes);
// void* g_try_realloc (void* mem, gsize n_bytes);
gpointer try_realloc (void* mem, gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_realloc;
  auto n_bytes_to_c = n_bytes;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
gpointer try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_try_realloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gunichar2* g_ucs4_to_utf16 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_ucs4_to_utf16 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_ucs4_to_utf8 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// char* /*full*/ g_ucs4_to_utf8 (const gunichar* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
gi::cstring ucs4_to_utf8 (const gunichar * str, glong len, glong * items_read, glong * items_written)
{
  typedef char* (*call_wrap_t) (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ucs4_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const gunichar*) (str_to_c), (glong) (len), (glong*) (items_read ? &items_read_o : nullptr), (glong*) (items_written ? &items_written_o : nullptr), &error);
  if (items_written) *items_written = items_written_o;
  if (items_read) *items_read = items_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring ucs4_to_utf8 (const gunichar * str, glong len, glong * items_read, glong * items_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ucs4_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const gunichar*) (str_to_c), (glong) (len), (glong*) (items_read ? &items_read_o : nullptr), (glong*) (items_written ? &items_written_o : nullptr), _error ? &_error_o : nullptr);
  if (items_written) *items_written = items_written_o;
  if (items_read) *items_read = items_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, glong, glong> ucs4_to_utf8 (const gunichar * str, glong len)
{
  typedef char* (*call_wrap_t) (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ucs4_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const gunichar*) (str_to_c), (glong) (len), (glong*) (&items_read_o), (glong*) (&items_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = items_read_o;
  auto &&tmp_return_3 = items_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<gi::cstring, glong, glong> ucs4_to_utf8 (const gunichar * str, glong len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ucs4_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const gunichar*) (str_to_c), (glong) (len), (glong*) (&items_read_o), (glong*) (&items_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = items_read_o;
  auto &&tmp_return_3 = items_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GUnicodeBreakType g_unichar_break_type (gunichar c);
// ::GUnicodeBreakType g_unichar_break_type (gunichar c);
GLib::UnicodeBreakType unichar_break_type (gunichar c) noexcept
{
  typedef ::GUnicodeBreakType (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_break_type;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return gi::wrap (_temp_ret);
}

// gint g_unichar_combining_class (gunichar uc);
// gint g_unichar_combining_class (gunichar uc);
gint unichar_combining_class (gunichar uc) noexcept
{
  typedef gint (*call_wrap_t) (gunichar uc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_combining_class;
  auto uc_to_c = uc;
  auto _temp_ret = call_wrap_v ((gunichar) (uc_to_c));
  return _temp_ret;
}

// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
bool unichar_compose (gunichar a, gunichar b, gunichar & ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar a, gunichar b, gunichar* ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_compose;
  gunichar ch_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gunichar) (a_to_c), (gunichar) (b_to_c), (gunichar*) (&ch_o));
  ch = ch_o;
  return _temp_ret;
}
std::tuple<bool, gunichar> unichar_compose (gunichar a, gunichar b) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar a, gunichar b, gunichar* ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_compose;
  gunichar ch_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gunichar) (a_to_c), (gunichar) (b_to_c), (gunichar*) (&ch_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = ch_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
bool unichar_decompose (gunichar ch, gunichar & a, gunichar & b) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* a, gunichar* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_decompose;
  gunichar b_o {};
  gunichar a_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&a_o), (gunichar*) (&b_o));
  b = b_o;
  a = a_o;
  return _temp_ret;
}
std::tuple<bool, gunichar, gunichar> unichar_decompose (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* a, gunichar* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_decompose;
  gunichar b_o {};
  gunichar a_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&a_o), (gunichar*) (&b_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = a_o;
  auto &&tmp_return_3 = b_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gint g_unichar_digit_value (gunichar c);
// gint g_unichar_digit_value (gunichar c);
gint unichar_digit_value (gunichar c) noexcept
{
  typedef gint (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_digit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar* result, gsize result_len);
// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar result, gsize result_len);
// SKIP; inconsistent result out pointer depth (1 vs 0)

// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
bool unichar_get_mirror_char (gunichar ch, gunichar & mirrored_ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* mirrored_ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_get_mirror_char;
  gunichar mirrored_ch_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&mirrored_ch_o));
  mirrored_ch = mirrored_ch_o;
  return _temp_ret;
}
std::tuple<bool, gunichar> unichar_get_mirror_char (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* mirrored_ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_get_mirror_char;
  gunichar mirrored_ch_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&mirrored_ch_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = mirrored_ch_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GUnicodeScript g_unichar_get_script (gunichar ch);
// ::GUnicodeScript g_unichar_get_script (gunichar ch);
GLib::UnicodeScript unichar_get_script (gunichar ch) noexcept
{
  typedef ::GUnicodeScript (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_get_script;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_unichar_isalnum (gunichar c);
// gboolean g_unichar_isalnum (gunichar c);
bool unichar_isalnum (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isalnum;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isalpha (gunichar c);
// gboolean g_unichar_isalpha (gunichar c);
bool unichar_isalpha (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isalpha;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iscntrl (gunichar c);
// gboolean g_unichar_iscntrl (gunichar c);
bool unichar_iscntrl (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_iscntrl;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isdefined (gunichar c);
// gboolean g_unichar_isdefined (gunichar c);
bool unichar_isdefined (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isdefined;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isdigit (gunichar c);
// gboolean g_unichar_isdigit (gunichar c);
bool unichar_isdigit (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isdigit;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isgraph (gunichar c);
// gboolean g_unichar_isgraph (gunichar c);
bool unichar_isgraph (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isgraph;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_islower (gunichar c);
// gboolean g_unichar_islower (gunichar c);
bool unichar_islower (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_islower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_ismark (gunichar c);
// gboolean g_unichar_ismark (gunichar c);
bool unichar_ismark (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_ismark;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isprint (gunichar c);
// gboolean g_unichar_isprint (gunichar c);
bool unichar_isprint (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isprint;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_ispunct (gunichar c);
// gboolean g_unichar_ispunct (gunichar c);
bool unichar_ispunct (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_ispunct;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isspace (gunichar c);
// gboolean g_unichar_isspace (gunichar c);
bool unichar_isspace (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isspace;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_istitle (gunichar c);
// gboolean g_unichar_istitle (gunichar c);
bool unichar_istitle (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_istitle;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isupper (gunichar c);
// gboolean g_unichar_isupper (gunichar c);
bool unichar_isupper (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iswide (gunichar c);
// gboolean g_unichar_iswide (gunichar c);
bool unichar_iswide (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_iswide;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iswide_cjk (gunichar c);
// gboolean g_unichar_iswide_cjk (gunichar c);
bool unichar_iswide_cjk (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_iswide_cjk;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isxdigit (gunichar c);
// gboolean g_unichar_isxdigit (gunichar c);
bool unichar_isxdigit (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_isxdigit;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iszerowidth (gunichar c);
// gboolean g_unichar_iszerowidth (gunichar c);
bool unichar_iszerowidth (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_iszerowidth;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gint g_unichar_to_utf8 (gunichar c, gchar* outbuf /*none,out,opt,ca*/);
// gint g_unichar_to_utf8 (gunichar c, char* outbuf /*none,out,opt,ca*/);
// IGNORE; marked ignore

// gunichar g_unichar_tolower (gunichar c);
// gunichar g_unichar_tolower (gunichar c);
gunichar unichar_tolower (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_tolower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gunichar g_unichar_totitle (gunichar c);
// gunichar g_unichar_totitle (gunichar c);
gunichar unichar_totitle (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_totitle;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gunichar g_unichar_toupper (gunichar c);
// gunichar g_unichar_toupper (gunichar c);
gunichar unichar_toupper (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_toupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// GUnicodeType g_unichar_type (gunichar c);
// ::GUnicodeType g_unichar_type (gunichar c);
GLib::UnicodeType unichar_type (gunichar c) noexcept
{
  typedef ::GUnicodeType (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_type;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_unichar_validate (gunichar ch);
// gboolean g_unichar_validate (gunichar ch);
bool unichar_validate (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_validate;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return _temp_ret;
}

// gint g_unichar_xdigit_value (gunichar c);
// gint g_unichar_xdigit_value (gunichar c);
gint unichar_xdigit_value (gunichar c) noexcept
{
  typedef gint (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unichar_xdigit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// void g_unicode_canonical_ordering (gunichar* string /*none*/, gsize len);
// void g_unicode_canonical_ordering (gunichar* string /*none*/, gsize len);
void unicode_canonical_ordering (const gunichar * string, gsize len) noexcept
{
  typedef void (*call_wrap_t) (gunichar* string, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unicode_canonical_ordering;
  auto string_to_c = string;
  call_wrap_v ((gunichar*) (string_to_c), (gsize) (len));
}

// GQuark g_unix_error_quark ();
// ::GQuark g_unix_error_quark ();
GLib::Quark unix_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_unix_fd_add (gint fd, GIOCondition condition, GUnixFDSourceFunc function /*none*/, gpointer user_data);
// guint g_unix_fd_add (gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function /*none*/, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_unix_fd_add_full (gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_unix_fd_add_full (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
guint unix_fd_add_full (gint priority, gint fd, GLib::IOCondition condition, GLib::UnixFDSourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto condition_to_c = gi::unwrap (condition);
  auto fd_to_c = fd;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (gint) (fd_to_c), (::GIOCondition) (condition_to_c), (GLib::UnixFDSourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* /*full*/ g_unix_fd_source_new (gint fd, GIOCondition condition);
// ::GSource* /*full*/ g_unix_fd_source_new (gint fd, ::GIOCondition condition);
GLib::Source unix_fd_source_new (gint fd, GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (gint fd, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_source_new;
  auto condition_to_c = gi::unwrap (condition);
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// passwd* g_unix_get_passwd_entry (const gchar* user_name /*none*/, GError ** error);
// void* g_unix_get_passwd_entry (const char* user_name /*none*/, GError ** error);
gpointer unix_get_passwd_entry (const gi::cstring_v user_name)
{
  typedef void* (*call_wrap_t) (const char* user_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_get_passwd_entry;
  auto user_name_to_c = gi::unwrap (user_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (user_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gpointer unix_get_passwd_entry (const gi::cstring_v user_name, GLib::Error * _error) noexcept
{
  typedef void* (*call_wrap_t) (const char* user_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_get_passwd_entry;
  auto user_name_to_c = gi::unwrap (user_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (user_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_unix_open_pipe (gint* fds /*none*/, gint flags, GError ** error);
// gboolean g_unix_open_pipe (gint* fds /*none*/, gint flags, GError ** error);
bool unix_open_pipe (gi::CollectionParameter<gi::FSpan<2>, gint, gi::transfer_none_t> fds, gint flags)
{
  typedef gboolean (*call_wrap_t) (gint* fds, gint flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_open_pipe;
  auto flags_to_c = flags;
  auto fds_w = unwrap (std::move(fds), gi::transfer_none);
  auto fds_to_c = fds_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint*) (fds_to_c), (gint) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool unix_open_pipe (gi::CollectionParameter<gi::FSpan<2>, gint, gi::transfer_none_t> fds, gint flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint* fds, gint flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_open_pipe;
  auto flags_to_c = flags;
  auto fds_w = unwrap (std::move(fds), gi::transfer_none);
  auto fds_to_c = fds_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint*) (fds_to_c), (gint) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
bool unix_set_fd_nonblocking (gint fd, gboolean nonblock)
{
  typedef gboolean (*call_wrap_t) (gint fd, gboolean nonblock, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_set_fd_nonblocking;
  auto nonblock_to_c = nonblock;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (nonblock_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool unix_set_fd_nonblocking (gint fd, gboolean nonblock, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint fd, gboolean nonblock, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_set_fd_nonblocking;
  auto nonblock_to_c = nonblock;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (nonblock_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// guint g_unix_signal_add (gint signum, GSourceFunc handler /*none*/, gpointer user_data);
// guint g_unix_signal_add (gint signum, GLib::SourceFunc::cfunction_type handler /*none*/, void* user_data);
// IGNORE; not introspectable; shadowed-by unix_signal_add_full

// guint g_unix_signal_add_full (gint priority, gint signum, GSourceFunc handler /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint g_unix_signal_add_full (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
guint unix_signal_add (gint priority, gint signum, GLib::SourceFunc handler) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_signal_add_full;
  auto handler_wrap_ = handler ? unwrap (std::move (handler), gi::scope_notified) : nullptr;
  auto signum_to_c = signum;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (gint) (signum_to_c), (GLib::SourceFunc::cfunction_type) (handler_wrap_ ? &handler_wrap_->wrapper : nullptr), (void*) (handler_wrap_), (GLib::DestroyNotify::cfunction_type) (handler_wrap_ ? &handler_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* /*full*/ g_unix_signal_source_new (gint signum);
// ::GSource* /*full*/ g_unix_signal_source_new (gint signum);
GLib::Source unix_signal_source_new (gint signum) noexcept
{
  typedef ::GSource* (*call_wrap_t) (gint signum);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_signal_source_new;
  auto signum_to_c = signum;
  auto _temp_ret = call_wrap_v ((gint) (signum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int g_unlink (const gchar* filename /*none*/);
// gint g_unlink (const char* filename /*none*/);
gint unlink (const gi::cstring_v filename) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unlink;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return _temp_ret;
}

// void g_unsetenv (const gchar* variable /*none*/);
// void g_unsetenv (const char* variable /*none*/);
void unsetenv (const gi::cstring_v variable) noexcept
{
  typedef void (*call_wrap_t) (const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  call_wrap_v ((const char*) (variable_to_c));
}

// void g_usleep (gulong microseconds);
// void g_usleep (gulong microseconds);
void usleep (gulong microseconds) noexcept
{
  typedef void (*call_wrap_t) (gulong microseconds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_usleep;
  auto microseconds_to_c = microseconds;
  call_wrap_v ((gulong) (microseconds_to_c));
}

// gunichar* g_utf16_to_ucs4 (const gunichar2* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf16_to_ucs4 (const guint16* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_utf16_to_utf8 (const gunichar2* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
// char* /*full*/ g_utf16_to_utf8 (const guint16* str /*none*/, glong len, glong* items_read, glong* items_written, GError ** error);
gi::cstring utf16_to_utf8 (const guint16 * str, glong len, glong * items_read, glong * items_written)
{
  typedef char* (*call_wrap_t) (const guint16* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf16_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint16*) (str_to_c), (glong) (len), (glong*) (items_read ? &items_read_o : nullptr), (glong*) (items_written ? &items_written_o : nullptr), &error);
  if (items_written) *items_written = items_written_o;
  if (items_read) *items_read = items_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring utf16_to_utf8 (const guint16 * str, glong len, glong * items_read, glong * items_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint16* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf16_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint16*) (str_to_c), (glong) (len), (glong*) (items_read ? &items_read_o : nullptr), (glong*) (items_written ? &items_written_o : nullptr), _error ? &_error_o : nullptr);
  if (items_written) *items_written = items_written_o;
  if (items_read) *items_read = items_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, glong, glong> utf16_to_utf8 (const guint16 * str, glong len)
{
  typedef char* (*call_wrap_t) (const guint16* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf16_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint16*) (str_to_c), (glong) (len), (glong*) (&items_read_o), (glong*) (&items_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = items_read_o;
  auto &&tmp_return_3 = items_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<gi::cstring, glong, glong> utf16_to_utf8 (const guint16 * str, glong len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint16* str, glong len, glong* items_read, glong* items_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf16_to_utf8;
  glong items_written_o {};
  glong items_read_o {};
  auto str_to_c = str;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint16*) (str_to_c), (glong) (len), (glong*) (&items_read_o), (glong*) (&items_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = items_read_o;
  auto &&tmp_return_3 = items_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gchar* /*full*/ g_utf8_casefold (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_casefold (const char* str /*none*/, gssize len);
gi::cstring utf8_casefold (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_casefold;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_utf8_collate (const gchar* str1 /*none*/, const gchar* str2 /*none*/);
// gint g_utf8_collate (const char* str1 /*none*/, const char* str2 /*none*/);
gint utf8_collate (const gi::cstring_v str1, const gi::cstring_v str2) noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_collate;
  auto str2_to_c = gi::unwrap (str2, gi::transfer_none);
  auto str1_to_c = gi::unwrap (str1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_utf8_collate_key (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_collate_key (const char* str /*none*/, gssize len);
gi::cstring utf8_collate_key (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_collate_key;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_utf8_collate_key_for_filename (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_collate_key_for_filename (const char* str /*none*/, gssize len);
gi::cstring utf8_collate_key_for_filename (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_collate_key_for_filename;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*none,nullable*/ g_utf8_find_next_char (const gchar* p /*none*/, const gchar* end /*none,nullable*/);
// char* /*none,nullable*/ g_utf8_find_next_char (const char* p /*none*/, const char* end /*none,nullable*/);
gi::cstring_v utf8_find_next_char (const gi::cstring_v p, const gi::cstring_v end) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, const char* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_find_next_char;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (const char*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
gi::cstring_v utf8_find_next_char (const gi::cstring_v p) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, const char* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_find_next_char;
  auto end_to_c = nullptr;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (const char*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*none,nullable*/ g_utf8_find_prev_char (const gchar* str /*none*/, const gchar* p /*none*/);
// char* /*none,nullable*/ g_utf8_find_prev_char (const char* str /*none*/, const char* p /*none*/);
gi::cstring_v utf8_find_prev_char (const gi::cstring_v str, const gi::cstring_v p) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_find_prev_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (p_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gunichar g_utf8_get_char (const gchar* p /*none*/);
// gunichar g_utf8_get_char (const char* p /*none*/);
gunichar utf8_get_char (const gi::cstring_v p) noexcept
{
  typedef gunichar (*call_wrap_t) (const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_get_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c));
  return _temp_ret;
}

// gunichar g_utf8_get_char_validated (const gchar* p /*none*/, gssize max_len);
// gunichar g_utf8_get_char_validated (const char* p /*none*/, gssize max_len);
gunichar utf8_get_char_validated (const gi::cstring_v p, gssize max_len) noexcept
{
  typedef gunichar (*call_wrap_t) (const char* p, gssize max_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_get_char_validated;
  auto max_len_to_c = max_len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (max_len_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_utf8_make_valid (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_make_valid (const char* str /*none*/, gssize len);
gi::cstring utf8_make_valid (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_make_valid;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_utf8_normalize (const gchar* str /*none*/, gssize len, GNormalizeMode mode);
// char* /*full,nullable*/ g_utf8_normalize (const char* str /*none*/, gssize len, ::GNormalizeMode mode);
gi::cstring utf8_normalize (const gi::cstring_v str, gssize len, GLib::NormalizeMode mode) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len, ::GNormalizeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_normalize;
  auto mode_to_c = gi::unwrap (mode);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c), (::GNormalizeMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*none*/ g_utf8_offset_to_pointer (const gchar* str /*none*/, glong offset);
// char* /*none*/ g_utf8_offset_to_pointer (const char* str /*none*/, glong offset);
gi::cstring_v utf8_offset_to_pointer (const gi::cstring_v str, glong offset) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, glong offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_offset_to_pointer;
  auto offset_to_c = offset;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (glong) (offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// glong g_utf8_pointer_to_offset (const gchar* str /*none*/, const gchar* pos /*none*/);
// glong g_utf8_pointer_to_offset (const char* str /*none*/, const char* pos /*none*/);
glong utf8_pointer_to_offset (const gi::cstring_v str, const gi::cstring_v pos) noexcept
{
  typedef glong (*call_wrap_t) (const char* str, const char* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_pointer_to_offset;
  auto pos_to_c = gi::unwrap (pos, gi::transfer_none);
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (pos_to_c));
  return _temp_ret;
}

// gchar* /*none*/ g_utf8_prev_char (const gchar* p /*none*/);
// char* /*none*/ g_utf8_prev_char (const char* p /*none*/);
gi::cstring_v utf8_prev_char (const gi::cstring_v p) noexcept
{
  typedef char* (*call_wrap_t) (const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_prev_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*none,nullable*/ g_utf8_strchr (const gchar* p /*none*/, gssize len, gunichar c);
// char* /*none,nullable*/ g_utf8_strchr (const char* p /*none*/, gssize len, gunichar c);
gi::cstring_v utf8_strchr (const gi::cstring_v p, gssize len, gunichar c) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, gssize len, gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strchr;
  auto c_to_c = c;
  auto len_to_c = len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (len_to_c), (gunichar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full*/ g_utf8_strdown (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strdown (const char* str /*none*/, gssize len);
gi::cstring utf8_strdown (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strdown;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// glong g_utf8_strlen (const gchar* p /*none*/, gssize max);
// glong g_utf8_strlen (const char* p /*none*/, gssize max);
glong utf8_strlen (const gi::cstring_v p, gssize max) noexcept
{
  typedef glong (*call_wrap_t) (const char* p, gssize max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strlen;
  auto max_to_c = max;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (max_to_c));
  return _temp_ret;
}

// gchar* /*none*/ g_utf8_strncpy (gchar* dest /*none*/, const gchar* src /*none*/, gsize n);
// char* /*none*/ g_utf8_strncpy (char* dest /*none*/, const char* src /*none*/, gsize n);
gi::cstring_v utf8_strncpy (gi::cstring_v dest, const gi::cstring_v src, gsize n) noexcept
{
  typedef char* (*call_wrap_t) (char* dest, const char* src, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strncpy;
  auto n_to_c = n;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*none,nullable*/ g_utf8_strrchr (const gchar* p /*none*/, gssize len, gunichar c);
// char* /*none,nullable*/ g_utf8_strrchr (const char* p /*none*/, gssize len, gunichar c);
gi::cstring_v utf8_strrchr (const gi::cstring_v p, gssize len, gunichar c) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, gssize len, gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strrchr;
  auto c_to_c = c;
  auto len_to_c = len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (len_to_c), (gunichar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full*/ g_utf8_strreverse (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strreverse (const char* str /*none*/, gssize len);
gi::cstring utf8_strreverse (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strreverse;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_utf8_strup (const gchar* str /*none*/, gssize len);
// char* /*full*/ g_utf8_strup (const char* str /*none*/, gssize len);
gi::cstring utf8_strup (const gi::cstring_v str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_strup;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_utf8_substring (const gchar* str /*none*/, glong start_pos, glong end_pos);
// char* /*full*/ g_utf8_substring (const char* str /*none*/, glong start_pos, glong end_pos);
gi::cstring utf8_substring (const gi::cstring_v str, glong start_pos, glong end_pos) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, glong start_pos, glong end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_substring;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (glong) (start_pos_to_c), (glong) (end_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

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
gi::cstring utf8_truncate_middle (const gi::cstring_v string, gsize truncate_length) noexcept
{
  typedef char* (*call_wrap_t) (const char* string, gsize truncate_length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_truncate_middle;
  auto truncate_length_to_c = truncate_length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gsize) (truncate_length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_utf8_validate (const gchar* str /*none*/, gssize max_len, const gchar** end /*none,out,opt*/);
// gboolean g_utf8_validate (const guint8* str /*none*/, gssize max_len, const char** end /*none,out,opt*/);
bool utf8_validate (const guint8 * str, gssize max_len, gi::cstring_v * end) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gssize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_validate;
  const char* end_o {};
  auto str_to_c = str;
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gssize) (max_len), (const char**) (end ? &end_o : nullptr));
  if (end) *end = gi::wrap (end_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v> utf8_validate (const guint8 * str, gssize max_len) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gssize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_validate;
  const char* end_o {};
  auto str_to_c = str;
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gssize) (max_len), (const char**) (&end_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (end_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_utf8_validate_len (const gchar* str /*none*/, gsize max_len, const gchar** end /*none,out,opt*/);
// gboolean g_utf8_validate_len (const guint8* str /*none*/, gsize max_len, const char** end /*none,out,opt*/);
bool utf8_validate_len (const guint8 * str, gsize max_len, gi::cstring_v * end) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gsize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_validate_len;
  const char* end_o {};
  auto str_to_c = str;
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gsize) (max_len), (const char**) (end ? &end_o : nullptr));
  if (end) *end = gi::wrap (end_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v> utf8_validate_len (const guint8 * str, gsize max_len) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gsize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utf8_validate_len;
  const char* end_o {};
  auto str_to_c = str;
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gsize) (max_len), (const char**) (&end_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (end_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int g_utime (const gchar* filename /*none*/, utimbuf* utb);
// gint g_utime (const char* filename /*none*/, void* utb);
gint utime (const gi::cstring_v filename, void* utb) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, void* utb);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_utime;
  auto utb_to_c = utb;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (void*) (utb_to_c));
  return _temp_ret;
}

// gboolean g_uuid_string_is_valid (const gchar* str /*none*/);
// gboolean g_uuid_string_is_valid (const char* str /*none*/);
bool uuid_string_is_valid (const gi::cstring_v str) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uuid_string_is_valid;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_uuid_string_random ();
// char* /*full*/ g_uuid_string_random ();
gi::cstring uuid_string_random () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uuid_string_random;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

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
void warn_message (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v warnexpr) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* warnexpr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_warn_message;
  auto warnexpr_to_c = gi::unwrap (warnexpr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (warnexpr_to_c));
}
void warn_message (const gi::cstring_v file, gint line, const gi::cstring_v func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* warnexpr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_warn_message;
  auto warnexpr_to_c = nullptr;
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = nullptr;
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (warnexpr_to_c));
}

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
