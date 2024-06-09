// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLANGUAGE_HPP_
#define _GI_PANGO_ATTRLANGUAGE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrLanguage_Ref;
class Attribute;
class Attribute_Ref;
class Language;
class Language_Ref;

class AttrLanguage;

namespace base {


#define GI_PANGO_ATTRLANGUAGE_BASE base::AttrLanguageBase
class AttrLanguageBase : public gi::detail::CBoxedWrapperBase<AttrLanguageBase, ::PangoAttrLanguage>
{
typedef gi::detail::CBoxedWrapperBase<AttrLanguageBase, ::PangoAttrLanguage> super_type;
public:

AttrLanguageBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoLanguage* /*none*/ AttrLanguage::value (const ::PangoAttrLanguage* obj /*none*/);
// ::PangoLanguage* /*none*/ AttrLanguage::value (const ::PangoAttrLanguage* obj /*none*/);
GI_INLINE_DECL Pango::Language_Ref value_ () const noexcept;

// PangoAttribute* /*full*/ pango_attr_language_new (PangoLanguage* language /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_language_new (::PangoLanguage* language /*none*/);
static GI_INLINE_DECL Pango::Attribute new_ (Pango::Language_Ref language) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra_def.hpp>)
#include <pango/attrlanguage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra.hpp>)
#include <pango/attrlanguage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrLanguage_Ref;

class AttrLanguage : public gi::detail::CBoxedWrapper<AttrLanguage, ::PangoAttrLanguage, GI_PANGO_ATTRLANGUAGE_BASE, AttrLanguage_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrLanguage, ::PangoAttrLanguage, GI_PANGO_ATTRLANGUAGE_BASE, AttrLanguage_Ref> super_type; using super_type::super_type; };


class AttrLanguage_Ref : public gi::detail::CBoxedRefWrapper<AttrLanguage, ::PangoAttrLanguage, GI_PANGO_ATTRLANGUAGE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrLanguage, ::PangoAttrLanguage, GI_PANGO_ATTRLANGUAGE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrLanguage>
{ typedef Pango::AttrLanguage type; }; 

} // namespace repository

} // namespace gi

#endif
