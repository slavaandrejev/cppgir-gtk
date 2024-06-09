// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFLOAT_HPP_
#define _GI_PANGO_ATTRFLOAT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrFloat_Ref;

class AttrFloat;

namespace base {


#define GI_PANGO_ATTRFLOAT_BASE base::AttrFloatBase
class AttrFloatBase : public gi::detail::CBoxedWrapperBase<AttrFloatBase, ::PangoAttrFloat>
{
typedef gi::detail::CBoxedWrapperBase<AttrFloatBase, ::PangoAttrFloat> super_type;
public:

AttrFloatBase (std::nullptr_t = nullptr) : super_type() {}

// gdouble AttrFloat::value (const ::PangoAttrFloat* obj /*none*/);
// gdouble AttrFloat::value (const ::PangoAttrFloat* obj /*none*/);
GI_INLINE_DECL gdouble value_ () const noexcept;

//  AttrFloat::value (::PangoAttrFloat* obj /*none*/, gdouble _value);
// void AttrFloat::value (::PangoAttrFloat* obj /*none*/, gdouble _value);
GI_INLINE_DECL void value_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfloat_extra_def.hpp>)
#include <pango/attrfloat_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfloat_extra.hpp>)
#include <pango/attrfloat_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrFloat_Ref;

class AttrFloat : public gi::detail::CBoxedWrapper<AttrFloat, ::PangoAttrFloat, GI_PANGO_ATTRFLOAT_BASE, AttrFloat_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrFloat, ::PangoAttrFloat, GI_PANGO_ATTRFLOAT_BASE, AttrFloat_Ref> super_type; using super_type::super_type; };


class AttrFloat_Ref : public gi::detail::CBoxedRefWrapper<AttrFloat, ::PangoAttrFloat, GI_PANGO_ATTRFLOAT_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrFloat, ::PangoAttrFloat, GI_PANGO_ATTRFLOAT_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrFloat>
{ typedef Pango::AttrFloat type; }; 

} // namespace repository

} // namespace gi

#endif
