// AUTO-GENERATED

#ifndef _GI_GLIB_URI_HPP_
#define _GI_GLIB_URI_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Bytes_Ref;
class Uri_Ref;

class Uri;

namespace base {


#define GI_GLIB_URI_BASE base::UriBase
class UriBase : public gi::detail::GBoxedWrapperBase<UriBase, ::GUri>
{
typedef gi::detail::GBoxedWrapperBase<UriBase, ::GUri> super_type;
public:

UriBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_uri_get_type(); } 

// const gchar* /*none,nullable*/ g_uri_get_auth_params (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_auth_params (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_auth_params () noexcept;

// GUriFlags g_uri_get_flags (GUri* uri /*none*/);
// ::GUriFlags g_uri_get_flags (::GUri* uri /*none*/);
GI_INLINE_DECL GLib::UriFlags get_flags () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_fragment (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_fragment (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_fragment () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_host (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_host (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_host () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_password (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_password (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_password () noexcept;

// const gchar* /*none*/ g_uri_get_path (GUri* uri /*none*/);
// const char* /*none*/ g_uri_get_path (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_path () noexcept;

// gint g_uri_get_port (GUri* uri /*none*/);
// gint g_uri_get_port (::GUri* uri /*none*/);
GI_INLINE_DECL gint get_port () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_query (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_query (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_query () noexcept;

// const gchar* /*none*/ g_uri_get_scheme (GUri* uri /*none*/);
// const char* /*none*/ g_uri_get_scheme (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_scheme () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_user (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_user (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_user () noexcept;

// const gchar* /*none,nullable*/ g_uri_get_userinfo (GUri* uri /*none*/);
// const char* /*none,nullable*/ g_uri_get_userinfo (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring_v get_userinfo () noexcept;

// GUri* /*full*/ g_uri_parse_relative (GUri* base_uri /*none,nullable*/, const gchar* uri_ref /*none*/, GUriFlags flags, GError ** error);
// ::GUri* /*full*/ g_uri_parse_relative (::GUri* base_uri /*none,nullable*/, const char* uri_ref /*none*/, ::GUriFlags flags, GError ** error);
GI_INLINE_DECL GLib::Uri parse_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags);
GI_INLINE_DECL GLib::Uri parse_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GUri* /*full*/ g_uri_ref (GUri* uri /*none*/);
// ::GUri* /*full*/ g_uri_ref (::GUri* uri /*none*/);
// IGNORE; marked ignore

// char* /*full*/ g_uri_to_string (GUri* uri /*none*/);
// char* /*full*/ g_uri_to_string (::GUri* uri /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// char* /*full*/ g_uri_to_string_partial (GUri* uri /*none*/, GUriHideFlags flags);
// char* /*full*/ g_uri_to_string_partial (::GUri* uri /*none*/, ::GUriHideFlags flags);
GI_INLINE_DECL gi::cstring to_string_partial (GLib::UriHideFlags flags) noexcept;

// void g_uri_unref (GUri* uri /*none*/);
// void g_uri_unref (::GUri* uri /*none*/);
// IGNORE; marked ignore

// GUri* /*full*/ g_uri_build (GUriFlags flags, const gchar* scheme /*none*/, const gchar* userinfo /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// ::GUri* /*full*/ g_uri_build (::GUriFlags flags, const char* scheme /*none*/, const char* userinfo /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
static GI_INLINE_DECL GLib::Uri build (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v userinfo, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept;
static GI_INLINE_DECL GLib::Uri build (GLib::UriFlags flags, const gi::cstring_v scheme, gint port, const gi::cstring_v path) noexcept;

// GUri* /*full*/ g_uri_build_with_user (GUriFlags flags, const gchar* scheme /*none*/, const gchar* user /*none,nullable*/, const gchar* password /*none,nullable*/, const gchar* auth_params /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// ::GUri* /*full*/ g_uri_build_with_user (::GUriFlags flags, const char* scheme /*none*/, const char* user /*none,nullable*/, const char* password /*none,nullable*/, const char* auth_params /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
static GI_INLINE_DECL GLib::Uri build_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v user, const gi::cstring_v password, const gi::cstring_v auth_params, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept;
static GI_INLINE_DECL GLib::Uri build_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, gint port, const gi::cstring_v path) noexcept;

// GQuark g_uri_error_quark ();
// ::GQuark g_uri_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// char* /*full*/ g_uri_escape_bytes (const guint8* unescaped /*none*/, gsize length, const char* reserved_chars_allowed /*none,nullable*/);
// char* /*full*/ g_uri_escape_bytes (const guint8* unescaped /*none*/, gsize length, const char* reserved_chars_allowed /*none,nullable*/);
static GI_INLINE_DECL gi::cstring escape_bytes (const guint8 * unescaped, gsize length, const gi::cstring_v reserved_chars_allowed) noexcept;
static GI_INLINE_DECL gi::cstring escape_bytes (const guint8 * unescaped, gsize length) noexcept;

// char* /*full*/ g_uri_escape_string (const char* unescaped /*none*/, const char* reserved_chars_allowed /*none,nullable*/, gboolean allow_utf8);
// char* /*full*/ g_uri_escape_string (const char* unescaped /*none*/, const char* reserved_chars_allowed /*none,nullable*/, gboolean allow_utf8);
static GI_INLINE_DECL gi::cstring escape_string (const gi::cstring_v unescaped, const gi::cstring_v reserved_chars_allowed, gboolean allow_utf8) noexcept;
static GI_INLINE_DECL gi::cstring escape_string (const gi::cstring_v unescaped, gboolean allow_utf8) noexcept;

// gboolean g_uri_is_valid (const gchar* uri_string /*none*/, GUriFlags flags, GError ** error);
// gboolean g_uri_is_valid (const char* uri_string /*none*/, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL bool is_valid (const gi::cstring_v uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL bool is_valid (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_uri_join (GUriFlags flags, const gchar* scheme /*none,nullable*/, const gchar* userinfo /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// char* /*full*/ g_uri_join (::GUriFlags flags, const char* scheme /*none,nullable*/, const char* userinfo /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
static GI_INLINE_DECL gi::cstring join (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v userinfo, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept;
static GI_INLINE_DECL gi::cstring join (GLib::UriFlags flags, gint port, const gi::cstring_v path) noexcept;

// gchar* /*full*/ g_uri_join_with_user (GUriFlags flags, const gchar* scheme /*none,nullable*/, const gchar* user /*none,nullable*/, const gchar* password /*none,nullable*/, const gchar* auth_params /*none,nullable*/, const gchar* host /*none,nullable*/, gint port, const gchar* path /*none*/, const gchar* query /*none,nullable*/, const gchar* fragment /*none,nullable*/);
// char* /*full*/ g_uri_join_with_user (::GUriFlags flags, const char* scheme /*none,nullable*/, const char* user /*none,nullable*/, const char* password /*none,nullable*/, const char* auth_params /*none,nullable*/, const char* host /*none,nullable*/, gint port, const char* path /*none*/, const char* query /*none,nullable*/, const char* fragment /*none,nullable*/);
static GI_INLINE_DECL gi::cstring join_with_user (GLib::UriFlags flags, const gi::cstring_v scheme, const gi::cstring_v user, const gi::cstring_v password, const gi::cstring_v auth_params, const gi::cstring_v host, gint port, const gi::cstring_v path, const gi::cstring_v query, const gi::cstring_v fragment) noexcept;
static GI_INLINE_DECL gi::cstring join_with_user (GLib::UriFlags flags, gint port, const gi::cstring_v path) noexcept;

// gchar** /*full*/ g_uri_list_extract_uris (const gchar* uri_list /*none*/);
// char** /*full*/ g_uri_list_extract_uris (const char* uri_list /*none*/);
static GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_extract_uris (const gi::cstring_v uri_list) noexcept;

// GUri* /*full*/ g_uri_parse (const gchar* uri_string /*none*/, GUriFlags flags, GError ** error);
// ::GUri* /*full*/ g_uri_parse (const char* uri_string /*none*/, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL GLib::Uri parse (const gi::cstring_v uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL GLib::Uri parse (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GHashTable* /*full*/ g_uri_parse_params (const gchar* params /*none*/, gssize length, const gchar* separators /*none*/, GUriParamsFlags flags, GError ** error);
// ::GHashTable* /*full*/ g_uri_parse_params (const char* params /*none*/, gssize length, const char* separators /*none*/, ::GUriParamsFlags flags, GError ** error);
static GI_INLINE_DECL gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t> parse_params (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags);
static GI_INLINE_DECL gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_full_t> parse_params (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags, GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_uri_parse_scheme (const char* uri /*none*/);
// char* /*full,nullable*/ g_uri_parse_scheme (const char* uri /*none*/);
static GI_INLINE_DECL gi::cstring parse_scheme (const gi::cstring_v uri) noexcept;

// const char* /*none,nullable*/ g_uri_peek_scheme (const char* uri /*none*/);
// const char* /*none,nullable*/ g_uri_peek_scheme (const char* uri /*none*/);
static GI_INLINE_DECL gi::cstring_v peek_scheme (const gi::cstring_v uri) noexcept;

// gchar* /*full*/ g_uri_resolve_relative (const gchar* base_uri_string /*none,nullable*/, const gchar* uri_ref /*none*/, GUriFlags flags, GError ** error);
// char* /*full*/ g_uri_resolve_relative (const char* base_uri_string /*none,nullable*/, const char* uri_ref /*none*/, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL gi::cstring resolve_relative (const gi::cstring_v base_uri_string, const gi::cstring_v uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL gi::cstring resolve_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL gi::cstring resolve_relative (const gi::cstring_v base_uri_string, const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;
static GI_INLINE_DECL gi::cstring resolve_relative (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split (const gchar* uri_ref /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** userinfo /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, gchar** path /*full,out,opt*/, gchar** query /*full,out,opt,nullable*/, gchar** fragment /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_split (const char* uri_ref /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** userinfo /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, char** path /*full,out,opt*/, char** query /*full,out,opt,nullable*/, char** fragment /*full,out,opt,nullable*/, GError ** error);
static GI_INLINE_DECL bool split (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * userinfo, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment);
static GI_INLINE_DECL bool split (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * userinfo, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> split (const gi::cstring_v uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> split (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split_network (const gchar* uri_string /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, GError ** error);
// gboolean g_uri_split_network (const char* uri_string /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, GError ** error);
static GI_INLINE_DECL bool split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * host, gint * port);
static GI_INLINE_DECL bool split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * host, gint * port, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gint> split_network (const gi::cstring_v uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gint> split_network (const gi::cstring_v uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split_with_user (const gchar* uri_ref /*none*/, GUriFlags flags, gchar** scheme /*full,out,opt,nullable*/, gchar** user /*full,out,opt,nullable*/, gchar** password /*full,out,opt,nullable*/, gchar** auth_params /*full,out,opt,nullable*/, gchar** host /*full,out,opt,nullable*/, gint* port, gchar** path /*full,out,opt*/, gchar** query /*full,out,opt,nullable*/, gchar** fragment /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_split_with_user (const char* uri_ref /*none*/, ::GUriFlags flags, char** scheme /*full,out,opt,nullable*/, char** user /*full,out,opt,nullable*/, char** password /*full,out,opt,nullable*/, char** auth_params /*full,out,opt,nullable*/, char** host /*full,out,opt,nullable*/, gint* port, char** path /*full,out,opt*/, char** query /*full,out,opt,nullable*/, char** fragment /*full,out,opt,nullable*/, GError ** error);
static GI_INLINE_DECL bool split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * user, gi::cstring * password, gi::cstring * auth_params, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment);
static GI_INLINE_DECL bool split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, gi::cstring * scheme, gi::cstring * user, gi::cstring * password, gi::cstring * auth_params, gi::cstring * host, gint * port, gi::cstring * path, gi::cstring * query, gi::cstring * fragment, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gi::cstring, gint, gi::cstring, gi::cstring, gi::cstring> split_with_user (const gi::cstring_v uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GBytes* /*full*/ g_uri_unescape_bytes (const char* escaped_string /*none*/, gssize length, const char* illegal_characters /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_uri_unescape_bytes (const char* escaped_string /*none*/, gssize length, const char* illegal_characters /*none,nullable*/, GError ** error);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const gi::cstring_v escaped_string, gssize length, const gi::cstring_v illegal_characters);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const gi::cstring_v escaped_string, gssize length);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const gi::cstring_v escaped_string, gssize length, const gi::cstring_v illegal_characters, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const gi::cstring_v escaped_string, gssize length, GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_uri_unescape_segment (const char* escaped_string /*none,nullable*/, const char* escaped_string_end /*none,nullable*/, const char* illegal_characters /*none,nullable*/);
// char* /*full,nullable*/ g_uri_unescape_segment (const char* escaped_string /*none,nullable*/, const char* escaped_string_end /*none,nullable*/, const char* illegal_characters /*none,nullable*/);
static GI_INLINE_DECL gi::cstring unescape_segment (const gi::cstring_v escaped_string, const gi::cstring_v escaped_string_end, const gi::cstring_v illegal_characters) noexcept;
static GI_INLINE_DECL gi::cstring unescape_segment () noexcept;

// char* /*full,nullable*/ g_uri_unescape_string (const char* escaped_string /*none*/, const char* illegal_characters /*none,nullable*/);
// char* /*full,nullable*/ g_uri_unescape_string (const char* escaped_string /*none*/, const char* illegal_characters /*none,nullable*/);
static GI_INLINE_DECL gi::cstring unescape_string (const gi::cstring_v escaped_string, const gi::cstring_v illegal_characters) noexcept;
static GI_INLINE_DECL gi::cstring unescape_string (const gi::cstring_v escaped_string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uri_extra_def.hpp>)
#include <glib/uri_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uri_extra.hpp>)
#include <glib/uri_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Uri_Ref;

class Uri : public gi::detail::GBoxedWrapper<Uri, ::GUri, GI_GLIB_URI_BASE, Uri_Ref>
{ typedef gi::detail::GBoxedWrapper<Uri, ::GUri, GI_GLIB_URI_BASE, Uri_Ref> super_type; using super_type::super_type; };


class Uri_Ref : public gi::detail::GBoxedRefWrapper<Uri, ::GUri, GI_GLIB_URI_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Uri, ::GUri, GI_GLIB_URI_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GUri>
{ typedef GLib::Uri type; }; 

} // namespace repository

} // namespace gi

#endif
