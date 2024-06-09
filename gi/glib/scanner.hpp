// AUTO-GENERATED

#ifndef _GI_GLIB_SCANNER_HPP_
#define _GI_GLIB_SCANNER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ScannerConfig;
class ScannerConfig_Ref;
class Scanner_Ref;

class Scanner;

namespace base {


#define GI_GLIB_SCANNER_BASE base::ScannerBase
class ScannerBase : public gi::detail::CBoxedWrapperBase<ScannerBase, ::GScanner>
{
typedef gi::detail::CBoxedWrapperBase<ScannerBase, ::GScanner> super_type;
public:

ScannerBase (std::nullptr_t = nullptr) : super_type() {}

// guint Scanner::max_parse_errors (const ::GScanner* obj /*none*/);
// guint Scanner::max_parse_errors (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint max_parse_errors_ () const noexcept;

//  Scanner::max_parse_errors (::GScanner* obj /*none*/, guint _value);
// void Scanner::max_parse_errors (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void max_parse_errors_ (guint _value) noexcept;

// guint Scanner::parse_errors (const ::GScanner* obj /*none*/);
// guint Scanner::parse_errors (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint parse_errors_ () const noexcept;

//  Scanner::parse_errors (::GScanner* obj /*none*/, guint _value);
// void Scanner::parse_errors (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void parse_errors_ (guint _value) noexcept;

// const char* /*none*/ Scanner::input_name (const ::GScanner* obj /*none*/);
// const char* /*none*/ Scanner::input_name (const ::GScanner* obj /*none*/);
GI_INLINE_DECL gi::cstring_v input_name_ () const noexcept;

// ::GScannerConfig* /*none*/ Scanner::config (const ::GScanner* obj /*none*/);
// ::GScannerConfig* /*none*/ Scanner::config (const ::GScanner* obj /*none*/);
GI_INLINE_DECL GLib::ScannerConfig_Ref config_ () const noexcept;

// ::GTokenType Scanner::token (const ::GScanner* obj /*none*/);
// ::GTokenType Scanner::token (const ::GScanner* obj /*none*/);
GI_INLINE_DECL GLib::TokenType token_ () const noexcept;

//  Scanner::token (::GScanner* obj /*none*/, ::GTokenType _value);
// void Scanner::token (::GScanner* obj /*none*/, ::GTokenType _value);
GI_INLINE_DECL void token_ (GLib::TokenType _value) noexcept;

// guint Scanner::line (const ::GScanner* obj /*none*/);
// guint Scanner::line (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint line_ () const noexcept;

//  Scanner::line (::GScanner* obj /*none*/, guint _value);
// void Scanner::line (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void line_ (guint _value) noexcept;

// guint Scanner::position (const ::GScanner* obj /*none*/);
// guint Scanner::position (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint position_ () const noexcept;

//  Scanner::position (::GScanner* obj /*none*/, guint _value);
// void Scanner::position (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void position_ (guint _value) noexcept;

// ::GTokenType Scanner::next_token (const ::GScanner* obj /*none*/);
// ::GTokenType Scanner::next_token (const ::GScanner* obj /*none*/);
GI_INLINE_DECL GLib::TokenType next_token_ () const noexcept;

//  Scanner::next_token (::GScanner* obj /*none*/, ::GTokenType _value);
// void Scanner::next_token (::GScanner* obj /*none*/, ::GTokenType _value);
GI_INLINE_DECL void next_token_ (GLib::TokenType _value) noexcept;

// guint Scanner::next_line (const ::GScanner* obj /*none*/);
// guint Scanner::next_line (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint next_line_ () const noexcept;

//  Scanner::next_line (::GScanner* obj /*none*/, guint _value);
// void Scanner::next_line (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void next_line_ (guint _value) noexcept;

// guint Scanner::next_position (const ::GScanner* obj /*none*/);
// guint Scanner::next_position (const ::GScanner* obj /*none*/);
GI_INLINE_DECL guint next_position_ () const noexcept;

//  Scanner::next_position (::GScanner* obj /*none*/, guint _value);
// void Scanner::next_position (::GScanner* obj /*none*/, guint _value);
GI_INLINE_DECL void next_position_ (guint _value) noexcept;

// guint g_scanner_cur_line (GScanner* scanner /*none*/);
// guint g_scanner_cur_line (::GScanner* scanner /*none*/);
GI_INLINE_DECL guint cur_line () noexcept;

// guint g_scanner_cur_position (GScanner* scanner /*none*/);
// guint g_scanner_cur_position (::GScanner* scanner /*none*/);
GI_INLINE_DECL guint cur_position () noexcept;

// GTokenType g_scanner_cur_token (GScanner* scanner /*none*/);
// ::GTokenType g_scanner_cur_token (::GScanner* scanner /*none*/);
GI_INLINE_DECL GLib::TokenType cur_token () noexcept;

// FAILURE on g_scanner_cur_value; No such node (<xmlattr>.transfer-ownership)
// void g_scanner_destroy (GScanner* scanner /*none*/);
// void g_scanner_destroy (::GScanner* scanner /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// gboolean g_scanner_eof (GScanner* scanner /*none*/);
// gboolean g_scanner_eof (::GScanner* scanner /*none*/);
GI_INLINE_DECL bool eof () noexcept;

// void g_scanner_error (GScanner* scanner /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_scanner_error (::GScanner* scanner /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GTokenType g_scanner_get_next_token (GScanner* scanner /*none*/);
// ::GTokenType g_scanner_get_next_token (::GScanner* scanner /*none*/);
GI_INLINE_DECL GLib::TokenType get_next_token () noexcept;

// void g_scanner_input_file (GScanner* scanner /*none*/, gint input_fd);
// void g_scanner_input_file (::GScanner* scanner /*none*/, gint input_fd);
GI_INLINE_DECL void input_file (gint input_fd) noexcept;

// void g_scanner_input_text (GScanner* scanner /*none*/, const gchar* text /*none*/, guint text_len);
// void g_scanner_input_text (::GScanner* scanner /*none*/, const char* text /*none*/, guint text_len);
GI_INLINE_DECL void input_text (const gi::cstring_v text, guint text_len) noexcept;

// gpointer g_scanner_lookup_symbol (GScanner* scanner /*none*/, const gchar* symbol /*none*/);
// void* g_scanner_lookup_symbol (::GScanner* scanner /*none*/, const char* symbol /*none*/);
GI_INLINE_DECL gpointer lookup_symbol (const gi::cstring_v symbol) noexcept;

// GTokenType g_scanner_peek_next_token (GScanner* scanner /*none*/);
// ::GTokenType g_scanner_peek_next_token (::GScanner* scanner /*none*/);
GI_INLINE_DECL GLib::TokenType peek_next_token () noexcept;

// void g_scanner_scope_add_symbol (GScanner* scanner /*none*/, guint scope_id, const gchar* symbol /*none*/, gpointer value);
// void g_scanner_scope_add_symbol (::GScanner* scanner /*none*/, guint scope_id, const char* symbol /*none*/, void* value);
GI_INLINE_DECL void scope_add_symbol (guint scope_id, const gi::cstring_v symbol, void* value) noexcept;

// void g_scanner_scope_foreach_symbol (GScanner* scanner /*none*/, guint scope_id, GHFunc func /*none*/, gpointer user_data);
// void g_scanner_scope_foreach_symbol (::GScanner* scanner /*none*/, guint scope_id, GLib::HFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL void scope_foreach_symbol (guint scope_id, GLib::HFunc func) noexcept;

// gpointer g_scanner_scope_lookup_symbol (GScanner* scanner /*none*/, guint scope_id, const gchar* symbol /*none*/);
// void* g_scanner_scope_lookup_symbol (::GScanner* scanner /*none*/, guint scope_id, const char* symbol /*none*/);
GI_INLINE_DECL gpointer scope_lookup_symbol (guint scope_id, const gi::cstring_v symbol) noexcept;

// void g_scanner_scope_remove_symbol (GScanner* scanner /*none*/, guint scope_id, const gchar* symbol /*none*/);
// void g_scanner_scope_remove_symbol (::GScanner* scanner /*none*/, guint scope_id, const char* symbol /*none*/);
GI_INLINE_DECL void scope_remove_symbol (guint scope_id, const gi::cstring_v symbol) noexcept;

// guint g_scanner_set_scope (GScanner* scanner /*none*/, guint scope_id);
// guint g_scanner_set_scope (::GScanner* scanner /*none*/, guint scope_id);
GI_INLINE_DECL guint set_scope (guint scope_id) noexcept;

// void g_scanner_sync_file_offset (GScanner* scanner /*none*/);
// void g_scanner_sync_file_offset (::GScanner* scanner /*none*/);
GI_INLINE_DECL void sync_file_offset () noexcept;

// void g_scanner_unexp_token (GScanner* scanner /*none*/, GTokenType expected_token, const gchar* identifier_spec /*none*/, const gchar* symbol_spec /*none*/, const gchar* symbol_name /*none*/, const gchar* message /*none*/, gint is_error);
// void g_scanner_unexp_token (::GScanner* scanner /*none*/, ::GTokenType expected_token, const char* identifier_spec /*none*/, const char* symbol_spec /*none*/, const char* symbol_name /*none*/, const char* message /*none*/, gint is_error);
GI_INLINE_DECL void unexp_token (GLib::TokenType expected_token, const gi::cstring_v identifier_spec, const gi::cstring_v symbol_spec, const gi::cstring_v symbol_name, const gi::cstring_v message, gint is_error) noexcept;

// void g_scanner_warn (GScanner* scanner /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_scanner_warn (::GScanner* scanner /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_scanner_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/scanner_extra_def.hpp>)
#include <glib/scanner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/scanner_extra.hpp>)
#include <glib/scanner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Scanner_Ref;

class Scanner : public gi::detail::CBoxedWrapper<Scanner, ::GScanner, GI_GLIB_SCANNER_BASE, Scanner_Ref>
{ typedef gi::detail::CBoxedWrapper<Scanner, ::GScanner, GI_GLIB_SCANNER_BASE, Scanner_Ref> super_type; using super_type::super_type; };


class Scanner_Ref : public gi::detail::CBoxedRefWrapper<Scanner, ::GScanner, GI_GLIB_SCANNER_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Scanner, ::GScanner, GI_GLIB_SCANNER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GScanner>
{ typedef GLib::Scanner type; }; 

} // namespace repository

} // namespace gi

#endif
