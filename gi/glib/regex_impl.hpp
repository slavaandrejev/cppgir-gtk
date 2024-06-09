// AUTO-GENERATED

#ifndef _GI_GLIB_REGEX_IMPL_HPP_
#define _GI_GLIB_REGEX_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GRegex* /*full,nullable*/ g_regex_new (const gchar* pattern /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError ** error);
// ::GRegex* /*full,nullable*/ g_regex_new (const char* pattern /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
GLib::Regex base::RegexBase::new_ (const gi::cstring_v pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options)
{
  typedef ::GRegex* (*call_wrap_t) (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_new;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Regex base::RegexBase::new_ (const gi::cstring_v pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options, GLib::Error * _error) noexcept
{
  typedef ::GRegex* (*call_wrap_t) (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_new;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_regex_get_capture_count (const GRegex* regex /*none*/);
// gint g_regex_get_capture_count (const ::GRegex* regex /*none*/);
gint base::RegexBase::get_capture_count () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_capture_count;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// GRegexCompileFlags g_regex_get_compile_flags (const GRegex* regex /*none*/);
// ::GRegexCompileFlags g_regex_get_compile_flags (const ::GRegex* regex /*none*/);
GLib::RegexCompileFlags base::RegexBase::get_compile_flags () const noexcept
{
  typedef ::GRegexCompileFlags (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_compile_flags;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_regex_get_has_cr_or_lf (const GRegex* regex /*none*/);
// gboolean g_regex_get_has_cr_or_lf (const ::GRegex* regex /*none*/);
bool base::RegexBase::get_has_cr_or_lf () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_has_cr_or_lf;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// GRegexMatchFlags g_regex_get_match_flags (const GRegex* regex /*none*/);
// ::GRegexMatchFlags g_regex_get_match_flags (const ::GRegex* regex /*none*/);
GLib::RegexMatchFlags base::RegexBase::get_match_flags () const noexcept
{
  typedef ::GRegexMatchFlags (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_match_flags;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint g_regex_get_max_backref (const GRegex* regex /*none*/);
// gint g_regex_get_max_backref (const ::GRegex* regex /*none*/);
gint base::RegexBase::get_max_backref () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_max_backref;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// gint g_regex_get_max_lookbehind (const GRegex* regex /*none*/);
// gint g_regex_get_max_lookbehind (const ::GRegex* regex /*none*/);
gint base::RegexBase::get_max_lookbehind () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_max_lookbehind;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_regex_get_pattern (const GRegex* regex /*none*/);
// const char* /*none*/ g_regex_get_pattern (const ::GRegex* regex /*none*/);
gi::cstring_v base::RegexBase::get_pattern () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_pattern;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_regex_get_string_number (const GRegex* regex /*none*/, const gchar* name /*none*/);
// gint g_regex_get_string_number (const ::GRegex* regex /*none*/, const char* name /*none*/);
gint base::RegexBase::get_string_number (const gi::cstring_v name) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_get_string_number;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean g_regex_match (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/);
// gboolean g_regex_match (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/);
bool base::RegexBase::match (const gi::cstring_v string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr));
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_regex_match_all (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/);
// gboolean g_regex_match_all (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/);
bool base::RegexBase::match_all (const gi::cstring_v string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr));
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_regex_match_all_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/, GError ** error);
// gboolean g_regex_match_all_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/, GError ** error);
bool base::RegexBase::match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), &error);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), _error ? &_error_o : nullptr);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_regex_match_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info /*full,out,opt*/, GError ** error);
// gboolean g_regex_match_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info /*full,out,opt*/, GError ** error);
bool base::RegexBase::match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), &error);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), _error ? &_error_o : nullptr);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (match_info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GRegex* /*full*/ g_regex_ref (GRegex* regex /*none*/);
// ::GRegex* /*full*/ g_regex_ref (::GRegex* regex /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_regex_replace (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const gchar* replacement /*none*/, GRegexMatchFlags match_options, GError ** error);
// char* /*full*/ g_regex_replace (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const char* replacement /*none*/, ::GRegexMatchFlags match_options, GError ** error);
gi::cstring base::RegexBase::replace (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options) const
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::RegexBase::replace (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_regex_replace_eval (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval /*none*/, gpointer user_data, GError ** error);
// char* /*full*/ g_regex_replace_eval (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval /*none*/, void* user_data, GError ** error);
gi::cstring base::RegexBase::replace_eval (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::RegexEvalCallback eval) const
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval, void* user_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace_eval;
  auto eval_wrap_ = eval ? unwrap (std::move (eval), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(eval_wrap_)>::type> eval_wrap__sp (eval_wrap_);
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (GLib::RegexEvalCallback::cfunction_type) (eval_wrap_ ? &eval_wrap_->wrapper : nullptr), (void*) (eval_wrap_), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::RegexBase::replace_eval (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::RegexEvalCallback eval, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval, void* user_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace_eval;
  auto eval_wrap_ = eval ? unwrap (std::move (eval), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(eval_wrap_)>::type> eval_wrap__sp (eval_wrap_);
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (GLib::RegexEvalCallback::cfunction_type) (eval_wrap_ ? &eval_wrap_->wrapper : nullptr), (void*) (eval_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_regex_replace_literal (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const gchar* replacement /*none*/, GRegexMatchFlags match_options, GError ** error);
// char* /*full*/ g_regex_replace_literal (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, const char* replacement /*none*/, ::GRegexMatchFlags match_options, GError ** error);
gi::cstring base::RegexBase::replace_literal (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options) const
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace_literal;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::RegexBase::replace_literal (const gchar * string, gssize string_len, gint start_position, const gi::cstring_v replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_replace_literal;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_regex_split (const GRegex* regex /*none*/, const gchar* string /*none*/, GRegexMatchFlags match_options);
// char** /*full*/ g_regex_split (const ::GRegex* regex /*none*/, const char* string /*none*/, ::GRegexMatchFlags match_options);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RegexBase::split (const gi::cstring_v string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_split;
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_regex_split_full (const GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError ** error);
// char** /*full*/ g_regex_split_full (const ::GRegex* regex /*none*/, const gchar* string /*none*/, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RegexBase::split_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens) const
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_split_full;
  auto max_tokens_to_c = max_tokens;
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (gint) (max_tokens_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RegexBase::split_full (const gchar * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens, GLib::Error * _error) const noexcept
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const gchar* string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_split_full;
  auto max_tokens_to_c = max_tokens;
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_to_c = string;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const gchar*) (string_to_c), (gssize) (string_len), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (gint) (max_tokens_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_regex_unref (GRegex* regex /*none*/);
// void g_regex_unref (::GRegex* regex /*none*/);
// IGNORE; marked ignore

// gboolean g_regex_check_replacement (const gchar* replacement /*none*/, gboolean* has_references, GError ** error);
// gboolean g_regex_check_replacement (const char* replacement /*none*/, gboolean* has_references, GError ** error);
bool base::RegexBase::check_replacement (const gi::cstring_v replacement, bool * has_references)
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (has_references ? &has_references_o : nullptr), &error);
  if (has_references) *has_references = has_references_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::check_replacement (const gi::cstring_v replacement, bool * has_references, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (has_references ? &has_references_o : nullptr), _error ? &_error_o : nullptr);
  if (has_references) *has_references = has_references_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, bool> base::RegexBase::check_replacement (const gi::cstring_v replacement)
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (&has_references_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = has_references_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::RegexBase::check_replacement (const gi::cstring_v replacement, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (&has_references_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = has_references_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GQuark g_regex_error_quark ();
// ::GQuark g_regex_error_quark ();
GLib::Quark base::RegexBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* /*full*/ g_regex_escape_nul (const gchar* string /*none*/, gint length);
// char* /*full*/ g_regex_escape_nul (const char* string /*none*/, gint length);
gi::cstring base::RegexBase::escape_nul (const gi::cstring_v string, gint length) noexcept
{
  typedef char* (*call_wrap_t) (const char* string, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_escape_nul;
  auto length_to_c = length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_regex_escape_string (const gchar* string /*none*/, gint length);
// char* /*full*/ g_regex_escape_string (const char* string /*none*/, gint length);
gi::cstring base::RegexBase::escape_string (const gi::cstring_v string, gint length) noexcept
{
  typedef char* (*call_wrap_t) (const char* string, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_escape_string;
  auto length_to_c = length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_regex_match_simple (const gchar* pattern /*none*/, const gchar* string /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// gboolean g_regex_match_simple (const char* pattern /*none*/, const char* string /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
bool base::RegexBase::match_simple (const gi::cstring_v pattern, const gi::cstring_v string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_match_simple;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return _temp_ret;
}

// gchar** /*full*/ g_regex_split_simple (const gchar* pattern /*none*/, const gchar* string /*none*/, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// char** /*full*/ g_regex_split_simple (const char* pattern /*none*/, const char* string /*none*/, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RegexBase::split_simple (const gi::cstring_v pattern, const gi::cstring_v string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept
{
  typedef char** (*call_wrap_t) (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_regex_split_simple;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/regex_extra_def_impl.hpp>)
#include <glib/regex_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/regex_extra_impl.hpp>)
#include <glib/regex_extra_impl.hpp>
#endif
#endif

#endif
