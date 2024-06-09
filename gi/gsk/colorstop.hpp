// AUTO-GENERATED

#ifndef _GI_GSK_COLORSTOP_HPP_
#define _GI_GSK_COLORSTOP_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class ColorStop_Ref;

class ColorStop;

namespace base {


#define GI_GSK_COLORSTOP_BASE base::ColorStopBase
class ColorStopBase : public gi::detail::CBoxedWrapperBase<ColorStopBase, ::GskColorStop>
{
typedef gi::detail::CBoxedWrapperBase<ColorStopBase, ::GskColorStop> super_type;
public:

ColorStopBase (std::nullptr_t = nullptr) : super_type() {}

// gfloat ColorStop::offset (const ::GskColorStop* obj /*none*/);
// gfloat ColorStop::offset (const ::GskColorStop* obj /*none*/);
GI_INLINE_DECL gfloat offset_ () const noexcept;

//  ColorStop::offset (::GskColorStop* obj /*none*/, gfloat _value);
// void ColorStop::offset (::GskColorStop* obj /*none*/, gfloat _value);
GI_INLINE_DECL void offset_ (gfloat _value) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/colorstop_extra_def.hpp>)
#include <gsk/colorstop_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/colorstop_extra.hpp>)
#include <gsk/colorstop_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class ColorStop_Ref;

class ColorStop : public gi::detail::CBoxedWrapper<ColorStop, ::GskColorStop, GI_GSK_COLORSTOP_BASE, ColorStop_Ref>
{ typedef gi::detail::CBoxedWrapper<ColorStop, ::GskColorStop, GI_GSK_COLORSTOP_BASE, ColorStop_Ref> super_type; using super_type::super_type; };


class ColorStop_Ref : public gi::detail::CBoxedRefWrapper<ColorStop, ::GskColorStop, GI_GSK_COLORSTOP_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ColorStop, ::GskColorStop, GI_GSK_COLORSTOP_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskColorStop>
{ typedef Gsk::ColorStop type; }; 

} // namespace repository

} // namespace gi

#endif
