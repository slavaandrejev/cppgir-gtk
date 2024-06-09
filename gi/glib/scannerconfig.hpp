// AUTO-GENERATED

#ifndef _GI_GLIB_SCANNERCONFIG_HPP_
#define _GI_GLIB_SCANNERCONFIG_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ScannerConfig_Ref;

class ScannerConfig;

namespace base {


#define GI_GLIB_SCANNERCONFIG_BASE base::ScannerConfigBase
class ScannerConfigBase : public gi::detail::CBoxedWrapperBase<ScannerConfigBase, ::GScannerConfig>
{
typedef gi::detail::CBoxedWrapperBase<ScannerConfigBase, ::GScannerConfig> super_type;
public:

ScannerConfigBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ ScannerConfig::cset_skip_characters (const ::GScannerConfig* obj /*none*/);
// char* /*none*/ ScannerConfig::cset_skip_characters (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL gi::cstring_v cset_skip_characters_ () const noexcept;

// char* /*none*/ ScannerConfig::cset_identifier_first (const ::GScannerConfig* obj /*none*/);
// char* /*none*/ ScannerConfig::cset_identifier_first (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL gi::cstring_v cset_identifier_first_ () const noexcept;

// char* /*none*/ ScannerConfig::cset_identifier_nth (const ::GScannerConfig* obj /*none*/);
// char* /*none*/ ScannerConfig::cset_identifier_nth (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL gi::cstring_v cset_identifier_nth_ () const noexcept;

// char* /*none*/ ScannerConfig::cpair_comment_single (const ::GScannerConfig* obj /*none*/);
// char* /*none*/ ScannerConfig::cpair_comment_single (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL gi::cstring_v cpair_comment_single_ () const noexcept;

// guint ScannerConfig::case_sensitive (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::case_sensitive (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint case_sensitive_ () const noexcept;

//  ScannerConfig::case_sensitive (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::case_sensitive (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void case_sensitive_ (guint _value) noexcept;

// guint ScannerConfig::skip_comment_multi (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::skip_comment_multi (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint skip_comment_multi_ () const noexcept;

//  ScannerConfig::skip_comment_multi (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::skip_comment_multi (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void skip_comment_multi_ (guint _value) noexcept;

// guint ScannerConfig::skip_comment_single (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::skip_comment_single (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint skip_comment_single_ () const noexcept;

//  ScannerConfig::skip_comment_single (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::skip_comment_single (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void skip_comment_single_ (guint _value) noexcept;

// guint ScannerConfig::scan_comment_multi (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_comment_multi (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_comment_multi_ () const noexcept;

//  ScannerConfig::scan_comment_multi (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_comment_multi (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_comment_multi_ (guint _value) noexcept;

// guint ScannerConfig::scan_identifier (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_identifier (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_identifier_ () const noexcept;

//  ScannerConfig::scan_identifier (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_identifier (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_identifier_ (guint _value) noexcept;

// guint ScannerConfig::scan_identifier_1char (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_identifier_1char (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_identifier_1char_ () const noexcept;

//  ScannerConfig::scan_identifier_1char (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_identifier_1char (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_identifier_1char_ (guint _value) noexcept;

// guint ScannerConfig::scan_identifier_NULL (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_identifier_NULL (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_identifier_NULL_ () const noexcept;

//  ScannerConfig::scan_identifier_NULL (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_identifier_NULL (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_identifier_NULL_ (guint _value) noexcept;

// guint ScannerConfig::scan_symbols (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_symbols (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_symbols_ () const noexcept;

//  ScannerConfig::scan_symbols (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_symbols (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_symbols_ (guint _value) noexcept;

// guint ScannerConfig::scan_binary (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_binary (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_binary_ () const noexcept;

//  ScannerConfig::scan_binary (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_binary (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_binary_ (guint _value) noexcept;

// guint ScannerConfig::scan_octal (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_octal (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_octal_ () const noexcept;

//  ScannerConfig::scan_octal (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_octal (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_octal_ (guint _value) noexcept;

// guint ScannerConfig::scan_float (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_float (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_float_ () const noexcept;

//  ScannerConfig::scan_float (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_float (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_float_ (guint _value) noexcept;

// guint ScannerConfig::scan_hex (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_hex (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_hex_ () const noexcept;

//  ScannerConfig::scan_hex (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_hex (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_hex_ (guint _value) noexcept;

// guint ScannerConfig::scan_hex_dollar (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_hex_dollar (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_hex_dollar_ () const noexcept;

//  ScannerConfig::scan_hex_dollar (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_hex_dollar (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_hex_dollar_ (guint _value) noexcept;

// guint ScannerConfig::scan_string_sq (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_string_sq (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_string_sq_ () const noexcept;

//  ScannerConfig::scan_string_sq (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_string_sq (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_string_sq_ (guint _value) noexcept;

// guint ScannerConfig::scan_string_dq (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scan_string_dq (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scan_string_dq_ () const noexcept;

//  ScannerConfig::scan_string_dq (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scan_string_dq (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scan_string_dq_ (guint _value) noexcept;

// guint ScannerConfig::numbers_2_int (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::numbers_2_int (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint numbers_2_int_ () const noexcept;

//  ScannerConfig::numbers_2_int (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::numbers_2_int (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void numbers_2_int_ (guint _value) noexcept;

// guint ScannerConfig::int_2_float (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::int_2_float (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint int_2_float_ () const noexcept;

//  ScannerConfig::int_2_float (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::int_2_float (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void int_2_float_ (guint _value) noexcept;

// guint ScannerConfig::identifier_2_string (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::identifier_2_string (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint identifier_2_string_ () const noexcept;

//  ScannerConfig::identifier_2_string (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::identifier_2_string (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void identifier_2_string_ (guint _value) noexcept;

// guint ScannerConfig::char_2_token (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::char_2_token (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint char_2_token_ () const noexcept;

//  ScannerConfig::char_2_token (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::char_2_token (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void char_2_token_ (guint _value) noexcept;

// guint ScannerConfig::symbol_2_token (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::symbol_2_token (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint symbol_2_token_ () const noexcept;

//  ScannerConfig::symbol_2_token (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::symbol_2_token (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void symbol_2_token_ (guint _value) noexcept;

// guint ScannerConfig::scope_0_fallback (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::scope_0_fallback (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint scope_0_fallback_ () const noexcept;

//  ScannerConfig::scope_0_fallback (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::scope_0_fallback (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void scope_0_fallback_ (guint _value) noexcept;

// guint ScannerConfig::store_int64 (const ::GScannerConfig* obj /*none*/);
// guint ScannerConfig::store_int64 (const ::GScannerConfig* obj /*none*/);
GI_INLINE_DECL guint store_int64_ () const noexcept;

//  ScannerConfig::store_int64 (::GScannerConfig* obj /*none*/, guint _value);
// void ScannerConfig::store_int64 (::GScannerConfig* obj /*none*/, guint _value);
GI_INLINE_DECL void store_int64_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/scannerconfig_extra_def.hpp>)
#include <glib/scannerconfig_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/scannerconfig_extra.hpp>)
#include <glib/scannerconfig_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class ScannerConfig_Ref;

class ScannerConfig : public gi::detail::CBoxedWrapper<ScannerConfig, ::GScannerConfig, GI_GLIB_SCANNERCONFIG_BASE, ScannerConfig_Ref>
{ typedef gi::detail::CBoxedWrapper<ScannerConfig, ::GScannerConfig, GI_GLIB_SCANNERCONFIG_BASE, ScannerConfig_Ref> super_type; using super_type::super_type; };


class ScannerConfig_Ref : public gi::detail::CBoxedRefWrapper<ScannerConfig, ::GScannerConfig, GI_GLIB_SCANNERCONFIG_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ScannerConfig, ::GScannerConfig, GI_GLIB_SCANNERCONFIG_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GScannerConfig>
{ typedef GLib::ScannerConfig type; }; 

} // namespace repository

} // namespace gi

#endif
