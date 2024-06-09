// AUTO-GENERATED

#ifndef _GI_GLIB_URI_IMPL_HPP_
#define _GI_GLIB_URI_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// const gchar* /*none,nullable*/ g_uri_get_auth_params (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_auth_params (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_auth_params () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_auth_params;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GUriFlags g_uri_get_flags (GUri* uri /*none*/);
// ::GUriFlags g_uri_get_flags (::GUri* uri /*none*/);
GLib::UriFlags base::UriBase::get_flags () noexcept
{
  typedef ::GUriFlags (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_flags;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* /*none,nullable*/ g_uri_get_fragment (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_fragment (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_fragment () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_fragment;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_uri_get_host (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_host (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_host;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_uri_get_password (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_password (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_password;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_uri_get_path (GUri* uri /*none*/);
// const char* /*none*/ g_uri_get_path (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_path;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_uri_get_port (GUri* uri /*none*/);
// gint g_uri_get_port (::GUri* uri /*none*/);
gint base::UriBase::get_port () noexcept
{
  typedef gint (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_port;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_uri_get_query (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_query (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_query () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_query;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_uri_get_scheme (GUri* uri /*none*/);
// const char* /*none*/ g_uri_get_scheme (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_scheme;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_uri_get_user (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_user (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_user () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_user;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_uri_get_userinfo (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_userinfo (::GUri* uri /*none*/);
gi::cstring_v base::UriBase::get_userinfo () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_get_userinfo;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GUri* /*full*/ g_uri_parse_relative (GUri* base_uri /*none,nullable*/, const gchar* uri_ref /*none*/, GUriFlags flags, GError ** error);
// ::GUri* /*full*/ g_uri_parse_relative (::GUri* base_uri /*none,nullable*/, const char* uri_ref /*none*/, ::GUriFlags flags, GError ** error);
GLib::Uri base::UriBase::parse_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags)
{
  typedef ::GUri* (*call_wrap_t) (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Uri base::UriBase::parse_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GUri* /*full*/ g_uri_ref (GUri* uri /*none*/);
// ::GUri* /*full*/ g_uri_ref (::GUri* uri /*none*/);
// IGNORE; marked ignore

// char* /*full*/ g_uri_to_string (GUri* uri /*none*/);
// char* /*full*/ g_uri_to_string (::GUri* uri /*none*/);
gi::cstring base::UriBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_to_string;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_uri_to_string_partial (GUri* uri /*none*/, GUriHideFlags flags);
// char* /*full*/ g_uri_to_string_partial (::GUri* uri /*none*/, ::GUriHideFlags flags);
gi::cstring base::UriBase::to_string_partial (GLib::UriHideFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (::GUri* uri, ::GUriHideFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_to_string_partial;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (::GUriHideFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_uri_unref (GUri* uri /*none*/);
// void g_uri_unref (::GUri* uri /*none*/);
// IGNORE; marked ignore

// GUri* /*full*/ g_uri_build (GUriFlags flags, const gchar* scheme /*none*/, const gchar* userinfo /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// ::GUri* /*full*/ g_uri_build (::GUriFlags flags, const char* scheme /*none*/, const char* userinfo /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
GLib::Uri base::UriBase::build (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v userinfo, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_build;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none);
  auto query_to_c = gi::unwrap (query, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Uri base::UriBase::build (GLib::UriFlags flags, const gi::cstring_v scheme, gint port, const gi::cstring_v path) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_build;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GUri* /*full*/ g_uri_build_with_user (GUriFlags flags, const gchar* scheme /*none*/, const gchar* user /*none,nullable*/, const gchar* password /*none,nullable*/, const gchar* auth_params /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// ::GUri* /*full*/ g_uri_build_with_user (::GUriFlags flags, const char* scheme /*none*/, const char* user /*none,nullable*/, const char* password /*none,nullable*/, const char* auth_params /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
GLib::Uri base::UriBase::build_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v user, const gi::cstring_v password, const gi::cstring_v auth_params, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_build_with_user;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none);
  auto query_to_c = gi::unwrap (query, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none);
  auto auth_params_to_c = gi::unwrap (auth_params, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto user_to_c = gi::unwrap (user, gi::transfer_none);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Uri base::UriBase::build_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, gint port, const gi::cstring_v path) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_build_with_user;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto auth_params_to_c = nullptr;
  auto password_to_c = nullptr;
  auto user_to_c = nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GQuark g_uri_error_quark ();
// ::GQuark g_uri_error_quark ();
GLib::Quark base::UriBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// char* /*full*/ g_uri_escape_bytes (const guint8* unescaped /*none*/, gsize length, const char* reserved_chars_allowed /*none,nullable*/);
// char* /*full*/ g_uri_escape_bytes (const guint8* unescaped /*none*/, gsize length, const char* reserved_chars_allowed /*none,nullable*/);
gi::cstring base::UriBase::escape_bytes (const guint8 * unescaped, gsize length, const gi::cstring_v reserved_chars_allowed) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_escape_bytes;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none);
  auto unescaped_to_c = unescaped;
  auto _temp_ret = call_wrap_v ((const guint8*) (unescaped_to_c), (gsize) (length), (const char*) (reserved_chars_allowed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::escape_bytes (const guint8 * unescaped, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_escape_bytes;
  auto reserved_chars_allowed_to_c = nullptr;
  auto unescaped_to_c = unescaped;
  auto _temp_ret = call_wrap_v ((const guint8*) (unescaped_to_c), (gsize) (length), (const char*) (reserved_chars_allowed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_uri_escape_string (const char* unescaped /*none*/, const char* reserved_chars_allowed /*none,nullable*/, gboolean allow_utf8);
// char* /*full*/ g_uri_escape_string (const char* unescaped /*none*/, const char* reserved_chars_allowed /*none,nullable*/, gboolean allow_utf8);
gi::cstring base::UriBase::escape_string (const gi::cstring_v unescaped, const gi::cstring_v reserved_chars_allowed, gboolean allow_utf8) noexcept
{
  typedef char* (*call_wrap_t) (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_escape_string;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none);
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::escape_string (const gi::cstring_v unescaped, gboolean allow_utf8) noexcept
{
  typedef char* (*call_wrap_t) (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_escape_string;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = nullptr;
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_uri_is_valid (const gchar* uri_string /*none*/, GUriFlags flags, GError ** error);
// gboolean g_uri_is_valid (const char* uri_string /*none*/, ::GUriFlags flags, GError ** error);
bool base::UriBase::is_valid (const gi::cstring_v uri_string, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_is_valid;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::is_valid (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_is_valid;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full*/ g_uri_join (GUriFlags flags, const gchar* scheme /*none,nullable*/, const gchar* userinfo /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// char* /*full*/ g_uri_join (::GUriFlags flags, const char* scheme /*none,nullable*/, const char* userinfo /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
gi::cstring base::UriBase::join (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v userinfo, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_join;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none);
  auto query_to_c = gi::unwrap (query, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::join (GLib::UriFlags flags, gint port, const gi::cstring_v path) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_join;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_uri_join_with_user (GUriFlags flags, const gchar* scheme /*none,nullable*/, const gchar* user /*none,nullable*/, const gchar* password /*none,nullable*/, const gchar* auth_params /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// char* /*full*/ g_uri_join_with_user (::GUriFlags flags, const char* scheme /*none,nullable*/, const char* user /*none,nullable*/, const char* password /*none,nullable*/, const char* auth_params /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
gi::cstring base::UriBase::join_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v user, const gi::cstring_v password, const gi::cstring_v auth_params, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_join_with_user;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none);
  auto query_to_c = gi::unwrap (query, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none);
  auto auth_params_to_c = gi::unwrap (auth_params, gi::transfer_none);
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  auto user_to_c = gi::unwrap (user, gi::transfer_none);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::join_with_user (GLib::UriFlags flags, gint port, const gi::cstring_v path) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_join_with_user;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto auth_params_to_c = nullptr;
  auto password_to_c = nullptr;
  auto user_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_uri_list_extract_uris (const gchar* uri_list /*none*/);
// char** /*full*/ g_uri_list_extract_uris (const char* uri_list /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::UriBase::list_extract_uris (const gi::cstring_v uri_list) noexcept
{
  typedef char** (*call_wrap_t) (const char* uri_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_list_extract_uris;
  auto uri_list_to_c = gi::unwrap (uri_list, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_list_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GUri* /*full*/ g_uri_parse (const gchar* uri_string /*none*/, GUriFlags flags, GError ** error);
// ::GUri* /*full*/ g_uri_parse (const char* uri_string /*none*/, ::GUriFlags flags, GError ** error);
GLib::Uri base::UriBase::parse (const gi::cstring_v uri_string, GLib::UriFlags flags)
{
  typedef ::GUri* (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Uri base::UriBase::parse (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GUri* (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GHashTable* /*full*/ g_uri_parse_params (const gchar* params /*none*/, gssize length, const gchar* separators /*none*/, GUriParamsFlags flags, GError ** error);
// ::GHashTable* /*full*/ g_uri_parse_params (const char* params /*none*/, gssize length, const char* separators /*none*/, ::GUriParamsFlags flags, GError ** error);
gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t> base::UriBase::parse_params (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags)
{
  typedef ::GHashTable* (*call_wrap_t) (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse_params;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t> base::UriBase::parse_params (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse_params;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_uri_parse_scheme (const char* uri /*none*/);
// char* /*full,nullable*/ g_uri_parse_scheme (const char* uri /*none*/);
gi::cstring base::UriBase::parse_scheme (const gi::cstring_v uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_parse_scheme;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ g_uri_peek_scheme (const char* uri /*none*/);
// const char* /*none,nullable*/ g_uri_peek_scheme (const char* uri /*none*/);
gi::cstring_v base::UriBase::peek_scheme (const gi::cstring_v uri) noexcept
{
  typedef const char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_peek_scheme;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full*/ g_uri_resolve_relative (const gchar* base_uri_string /*none,nullable*/, const gchar* uri_ref /*none*/, GUriFlags flags, GError ** error);
// char* /*full*/ g_uri_resolve_relative (const char* base_uri_string /*none,nullable*/, const char* uri_ref /*none*/, ::GUriFlags flags, GError ** error);
gi::cstring base::UriBase::resolve_relative (const gi::cstring_v base_uri_string, const gi::cstring_v uri_ref, GLib::UriFlags flags)
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  auto base_uri_string_to_c = gi::unwrap (base_uri_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::resolve_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags)
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  auto base_uri_string_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::resolve_relative (const gi::cstring_v base_uri_string, const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  auto base_uri_string_to_c = gi::unwrap (base_uri_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::resolve_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  auto base_uri_string_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_uri_split (const gchar* uri_ref /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** userinfo /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, gchar** path /*full,out,opt*/, gchar** query /*full,out,opt,nullable*/, gchar** fragment /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_split (const char* uri_ref /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** userinfo /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, char** path /*full,out,opt*/, char** query /*full,out,opt,nullable*/, char** fragment /*full,out,opt,nullable*/, GError ** error);
bool base::UriBase::split (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * userinfo, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (userinfo ? &userinfo_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), &error);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full);
  if (query) *query = gi::wrap (query_o, gi::transfer_full);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (userinfo) *userinfo = gi::wrap (userinfo_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * userinfo, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (userinfo ? &userinfo_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), _error ? &_error_o : nullptr);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full);
  if (query) *query = gi::wrap (query_o, gi::transfer_full);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (userinfo) *userinfo = gi::wrap (userinfo_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> base::UriBase::split (const gi::cstring_v uri_ref, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&userinfo_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (userinfo_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_5 = port_o;
  auto &&tmp_return_6 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_7 = gi::wrap (query_o, gi::transfer_full);
  auto &&tmp_return_8 = gi::wrap (fragment_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7),std::move(tmp_return_8));
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> base::UriBase::split (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&userinfo_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (userinfo_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_5 = port_o;
  auto &&tmp_return_6 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_7 = gi::wrap (query_o, gi::transfer_full);
  auto &&tmp_return_8 = gi::wrap (fragment_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7),std::move(tmp_return_8));
}

// gboolean g_uri_split_network (const gchar* uri_string /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, GError ** error);
// gboolean g_uri_split_network (const char* uri_string /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, GError ** error);
bool base::UriBase::split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * host, gint * port)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), &error);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * host, gint * port, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), _error ? &_error_o : nullptr);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring, gint> base::UriBase::split_network (const gi::cstring_v uri_string, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&host_o), (gint*) (&port_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_4 = port_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::cstring, gi::cstring, gint> base::UriBase::split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&host_o), (gint*) (&port_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_4 = port_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gboolean g_uri_split_with_user (const gchar* uri_ref /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** user /*full,out,opt,nullable*/, gchar** password /*full,out,opt,nullable*/, gchar** auth_params /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, gchar** path /*full,out,opt*/, gchar** query /*full,out,opt,nullable*/, gchar** fragment /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_split_with_user (const char* uri_ref /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** user /*full,out,opt,nullable*/, char** password /*full,out,opt,nullable*/, char** auth_params /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, char** path /*full,out,opt*/, char** query /*full,out,opt,nullable*/, char** fragment /*full,out,opt,nullable*/, GError ** error);
bool base::UriBase::split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * user, gi::cstring * password, gi::cstring * auth_params, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (user ? &user_o : nullptr), (char**) (password ? &password_o : nullptr), (char**) (auth_params ? &auth_params_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), &error);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full);
  if (query) *query = gi::wrap (query_o, gi::transfer_full);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (auth_params) *auth_params = gi::wrap (auth_params_o, gi::transfer_full);
  if (password) *password = gi::wrap (password_o, gi::transfer_full);
  if (user) *user = gi::wrap (user_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * user, gi::cstring * password, gi::cstring * auth_params, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (user ? &user_o : nullptr), (char**) (password ? &password_o : nullptr), (char**) (auth_params ? &auth_params_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), _error ? &_error_o : nullptr);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full);
  if (query) *query = gi::wrap (query_o, gi::transfer_full);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full);
  if (auth_params) *auth_params = gi::wrap (auth_params_o, gi::transfer_full);
  if (password) *password = gi::wrap (password_o, gi::transfer_full);
  if (user) *user = gi::wrap (user_o, gi::transfer_full);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> base::UriBase::split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&user_o), (char**) (&password_o), (char**) (&auth_params_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (user_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (password_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (auth_params_o, gi::transfer_full);
  auto &&tmp_return_6 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_7 = port_o;
  auto &&tmp_return_8 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_9 = gi::wrap (query_o, gi::transfer_full);
  auto &&tmp_return_10 = gi::wrap (fragment_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7),std::move(tmp_return_8),std::move(tmp_return_9),std::move(tmp_return_10));
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> base::UriBase::split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&user_o), (char**) (&password_o), (char**) (&auth_params_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (scheme_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (user_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (password_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (auth_params_o, gi::transfer_full);
  auto &&tmp_return_6 = gi::wrap (host_o, gi::transfer_full);
  auto &&tmp_return_7 = port_o;
  auto &&tmp_return_8 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_9 = gi::wrap (query_o, gi::transfer_full);
  auto &&tmp_return_10 = gi::wrap (fragment_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7),std::move(tmp_return_8),std::move(tmp_return_9),std::move(tmp_return_10));
}

// GBytes* /*full*/ g_uri_unescape_bytes (const char* escaped_string /*none*/, gssize length, const char* illegal_characters /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_uri_unescape_bytes (const char* escaped_string /*none*/, gssize length, const char* illegal_characters /*none,nullable*/, GError ** error);
GLib::Bytes base::UriBase::unescape_bytes (const gi::cstring_v escaped_string, gssize length, const gi::cstring_v illegal_characters)
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_bytes;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none);
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::UriBase::unescape_bytes (const gi::cstring_v escaped_string, gssize length)
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_bytes;
  auto illegal_characters_to_c = nullptr;
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::UriBase::unescape_bytes (const gi::cstring_v escaped_string, gssize length, const gi::cstring_v illegal_characters, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_bytes;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none);
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::UriBase::unescape_bytes (const gi::cstring_v escaped_string, gssize length, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_bytes;
  auto illegal_characters_to_c = nullptr;
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_uri_unescape_segment (const char* escaped_string /*none,nullable*/, const char* escaped_string_end /*none,nullable*/, const char* illegal_characters /*none,nullable*/);
// char* /*full,nullable*/ g_uri_unescape_segment (const char* escaped_string /*none,nullable*/, const char* escaped_string_end /*none,nullable*/, const char* illegal_characters /*none,nullable*/);
gi::cstring base::UriBase::unescape_segment (const gi::cstring_v escaped_string, const gi::cstring_v escaped_string_end, const gi::cstring_v illegal_characters) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_segment;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none);
  auto escaped_string_end_to_c = gi::unwrap (escaped_string_end, gi::transfer_none);
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (escaped_string_end_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::unescape_segment () noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_segment;
  auto illegal_characters_to_c = nullptr;
  auto escaped_string_end_to_c = nullptr;
  auto escaped_string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (escaped_string_end_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_uri_unescape_string (const char* escaped_string /*none*/, const char* illegal_characters /*none,nullable*/);
// char* /*full,nullable*/ g_uri_unescape_string (const char* escaped_string /*none*/, const char* illegal_characters /*none,nullable*/);
gi::cstring base::UriBase::unescape_string (const gi::cstring_v escaped_string, const gi::cstring_v illegal_characters) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_string;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none);
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::UriBase::unescape_string (const gi::cstring_v escaped_string) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_unescape_string;
  auto illegal_characters_to_c = nullptr;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uri_extra_def_impl.hpp>)
#include <glib/uri_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uri_extra_impl.hpp>)
#include <glib/uri_extra_impl.hpp>
#endif
#endif

#endif
