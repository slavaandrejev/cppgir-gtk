// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRCOLOR_HPP_
#define _GI_PANGO_ATTRCOLOR_HPP_


namespace gi {

namespace repository {

namespace Pango {


class AttrColor;

namespace base {


#define GI_PANGO_ATTRCOLOR_BASE base::AttrColorBase
class AttrColorBase : public gi::detail::CBoxedWrapperBase<AttrColorBase, ::PangoAttrColor>
{
typedef gi::detail::CBoxedWrapperBase<AttrColorBase, ::PangoAttrColor> super_type;
public:

AttrColorBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrcolor_extra_def.hpp>)
#include <pango/attrcolor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrcolor_extra.hpp>)
#include <pango/attrcolor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrColor_Ref;

class AttrColor : public gi::detail::CBoxedWrapper<AttrColor, ::PangoAttrColor, GI_PANGO_ATTRCOLOR_BASE, AttrColor_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrColor, ::PangoAttrColor, GI_PANGO_ATTRCOLOR_BASE, AttrColor_Ref> super_type; using super_type::super_type; };


class AttrColor_Ref : public gi::detail::CBoxedRefWrapper<AttrColor, ::PangoAttrColor, GI_PANGO_ATTRCOLOR_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrColor, ::PangoAttrColor, GI_PANGO_ATTRCOLOR_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrColor>
{ typedef Pango::AttrColor type; }; 

} // namespace repository

} // namespace gi

#endif
