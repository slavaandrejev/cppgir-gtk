// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTDESC_HPP_
#define _GI_PANGO_ATTRFONTDESC_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrFontDesc_Ref;
class Attribute;
class Attribute_Ref;
class FontDescription;
class FontDescription_Ref;

class AttrFontDesc;

namespace base {


#define GI_PANGO_ATTRFONTDESC_BASE base::AttrFontDescBase
class AttrFontDescBase : public gi::detail::CBoxedWrapperBase<AttrFontDescBase, ::PangoAttrFontDesc>
{
typedef gi::detail::CBoxedWrapperBase<AttrFontDescBase, ::PangoAttrFontDesc> super_type;
public:

AttrFontDescBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoFontDescription* /*none*/ AttrFontDesc::desc (const ::PangoAttrFontDesc* obj /*none*/);
// ::PangoFontDescription* /*none*/ AttrFontDesc::desc (const ::PangoAttrFontDesc* obj /*none*/);
GI_INLINE_DECL Pango::FontDescription_Ref desc_ () const noexcept;

// PangoAttribute* /*full*/ pango_attr_font_desc_new (const PangoFontDescription* desc /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_font_desc_new (const ::PangoFontDescription* desc /*none*/);
static GI_INLINE_DECL Pango::Attribute new_ (const Pango::FontDescription_Ref desc) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra_def.hpp>)
#include <pango/attrfontdesc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra.hpp>)
#include <pango/attrfontdesc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrFontDesc_Ref;

class AttrFontDesc : public gi::detail::CBoxedWrapper<AttrFontDesc, ::PangoAttrFontDesc, GI_PANGO_ATTRFONTDESC_BASE, AttrFontDesc_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrFontDesc, ::PangoAttrFontDesc, GI_PANGO_ATTRFONTDESC_BASE, AttrFontDesc_Ref> super_type; using super_type::super_type; };


class AttrFontDesc_Ref : public gi::detail::CBoxedRefWrapper<AttrFontDesc, ::PangoAttrFontDesc, GI_PANGO_ATTRFONTDESC_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrFontDesc, ::PangoAttrFontDesc, GI_PANGO_ATTRFONTDESC_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrFontDesc>
{ typedef Pango::AttrFontDesc type; }; 

} // namespace repository

} // namespace gi

#endif
