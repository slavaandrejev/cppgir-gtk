// AUTO-GENERATED

#ifndef _GI_PANGO_LANGUAGE_HPP_
#define _GI_PANGO_LANGUAGE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Language_Ref;

class Language;

namespace base {


#define GI_PANGO_LANGUAGE_BASE base::LanguageBase
class LanguageBase : public gi::detail::GBoxedWrapperBase<LanguageBase, ::PangoLanguage>
{
typedef gi::detail::GBoxedWrapperBase<LanguageBase, ::PangoLanguage> super_type;
public:

LanguageBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_language_get_type(); } 

// const char* /*none*/ pango_language_get_sample_string (PangoLanguage* language /*none,nullable*/);
// const char* /*none*/ pango_language_get_sample_string (::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL gi::cstring_v get_sample_string () noexcept;

// const PangoScript* /*none,nullable*/ pango_language_get_scripts (PangoLanguage* language /*none,nullable*/, int* num_scripts);
// const ::PangoScript* /*none,nullable*/ pango_language_get_scripts (::PangoLanguage* language /*none,nullable*/, gint* num_scripts);
GI_INLINE_DECL gi::Collection<gi::DSpan, ::PangoScript, gi::transfer_none_t> get_scripts () noexcept;

// gboolean pango_language_includes_script (PangoLanguage* language /*none,nullable*/, PangoScript script);
// gboolean pango_language_includes_script (::PangoLanguage* language /*none,nullable*/, ::PangoScript script);
GI_INLINE_DECL bool includes_script (Pango::Script script) noexcept;

// gboolean pango_language_matches (PangoLanguage* language /*none,nullable*/, const char* range_list /*none*/);
// gboolean pango_language_matches (::PangoLanguage* language /*none,nullable*/, const char* range_list /*none*/);
GI_INLINE_DECL bool matches (const gi::cstring_v range_list) noexcept;

// const char* /*none*/ pango_language_to_string (PangoLanguage* language /*none*/);
// const char* /*none*/ pango_language_to_string (::PangoLanguage* language /*none*/);
GI_INLINE_DECL gi::cstring_v to_string () noexcept;

// PangoLanguage* /*none,nullable*/ pango_language_from_string (const char* language /*none,nullable*/);
// ::PangoLanguage* /*none,nullable*/ pango_language_from_string (const char* language /*none,nullable*/);
static GI_INLINE_DECL Pango::Language_Ref from_string (const gi::cstring_v language) noexcept;
static GI_INLINE_DECL Pango::Language_Ref from_string () noexcept;

// PangoLanguage* /*none*/ pango_language_get_default ();
// ::PangoLanguage* /*none*/ pango_language_get_default ();
static GI_INLINE_DECL Pango::Language_Ref get_default () noexcept;

// PangoLanguage** /*none,nullable*/ pango_language_get_preferred ();
// ::PangoLanguage** /*none,nullable*/ pango_language_get_preferred ();
static GI_INLINE_DECL gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t> get_preferred () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/language_extra_def.hpp>)
#include <pango/language_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/language_extra.hpp>)
#include <pango/language_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Language_Ref;

class Language : public gi::detail::GBoxedWrapper<Language, ::PangoLanguage, GI_PANGO_LANGUAGE_BASE, Language_Ref>
{ typedef gi::detail::GBoxedWrapper<Language, ::PangoLanguage, GI_PANGO_LANGUAGE_BASE, Language_Ref> super_type; using super_type::super_type; };


class Language_Ref : public gi::detail::GBoxedRefWrapper<Language, ::PangoLanguage, GI_PANGO_LANGUAGE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Language, ::PangoLanguage, GI_PANGO_LANGUAGE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLanguage>
{ typedef Pango::Language type; }; 

} // namespace repository

} // namespace gi

#endif
