// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTFEATURES_HPP_
#define _GI_PANGO_ATTRFONTFEATURES_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrFontFeatures_Ref;
class Attribute;
class Attribute_Ref;

class AttrFontFeatures;

namespace base {


#define GI_PANGO_ATTRFONTFEATURES_BASE base::AttrFontFeaturesBase
class AttrFontFeaturesBase : public gi::detail::CBoxedWrapperBase<AttrFontFeaturesBase, ::PangoAttrFontFeatures>
{
typedef gi::detail::CBoxedWrapperBase<AttrFontFeaturesBase, ::PangoAttrFontFeatures> super_type;
public:

AttrFontFeaturesBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj /*none*/);
// char* /*none*/ AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj /*none*/);
GI_INLINE_DECL gi::cstring_v features_ () const noexcept;

// PangoAttribute* /*full*/ pango_attr_font_features_new (const char* features /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_font_features_new (const char* features /*none*/);
static GI_INLINE_DECL Pango::Attribute new_ (const gi::cstring_v features) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra_def.hpp>)
#include <pango/attrfontfeatures_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra.hpp>)
#include <pango/attrfontfeatures_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrFontFeatures_Ref;

class AttrFontFeatures : public gi::detail::CBoxedWrapper<AttrFontFeatures, ::PangoAttrFontFeatures, GI_PANGO_ATTRFONTFEATURES_BASE, AttrFontFeatures_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrFontFeatures, ::PangoAttrFontFeatures, GI_PANGO_ATTRFONTFEATURES_BASE, AttrFontFeatures_Ref> super_type; using super_type::super_type; };


class AttrFontFeatures_Ref : public gi::detail::CBoxedRefWrapper<AttrFontFeatures, ::PangoAttrFontFeatures, GI_PANGO_ATTRFONTFEATURES_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrFontFeatures, ::PangoAttrFontFeatures, GI_PANGO_ATTRFONTFEATURES_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrFontFeatures>
{ typedef Pango::AttrFontFeatures type; }; 

} // namespace repository

} // namespace gi

#endif
