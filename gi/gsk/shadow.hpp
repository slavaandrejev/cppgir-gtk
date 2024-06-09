// AUTO-GENERATED

#ifndef _GI_GSK_SHADOW_HPP_
#define _GI_GSK_SHADOW_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Shadow_Ref;

class Shadow;

namespace base {


#define GI_GSK_SHADOW_BASE base::ShadowBase
class ShadowBase : public gi::detail::CBoxedWrapperBase<ShadowBase, ::GskShadow>
{
typedef gi::detail::CBoxedWrapperBase<ShadowBase, ::GskShadow> super_type;
public:

ShadowBase (std::nullptr_t = nullptr) : super_type() {}

// gfloat Shadow::dx (const ::GskShadow* obj /*none*/);
// gfloat Shadow::dx (const ::GskShadow* obj /*none*/);
GI_INLINE_DECL gfloat dx_ () const noexcept;

//  Shadow::dx (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::dx (::GskShadow* obj /*none*/, gfloat _value);
GI_INLINE_DECL void dx_ (gfloat _value) noexcept;

// gfloat Shadow::dy (const ::GskShadow* obj /*none*/);
// gfloat Shadow::dy (const ::GskShadow* obj /*none*/);
GI_INLINE_DECL gfloat dy_ () const noexcept;

//  Shadow::dy (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::dy (::GskShadow* obj /*none*/, gfloat _value);
GI_INLINE_DECL void dy_ (gfloat _value) noexcept;

// gfloat Shadow::radius (const ::GskShadow* obj /*none*/);
// gfloat Shadow::radius (const ::GskShadow* obj /*none*/);
GI_INLINE_DECL gfloat radius_ () const noexcept;

//  Shadow::radius (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::radius (::GskShadow* obj /*none*/, gfloat _value);
GI_INLINE_DECL void radius_ (gfloat _value) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/shadow_extra_def.hpp>)
#include <gsk/shadow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/shadow_extra.hpp>)
#include <gsk/shadow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class Shadow_Ref;

class Shadow : public gi::detail::CBoxedWrapper<Shadow, ::GskShadow, GI_GSK_SHADOW_BASE, Shadow_Ref>
{ typedef gi::detail::CBoxedWrapper<Shadow, ::GskShadow, GI_GSK_SHADOW_BASE, Shadow_Ref> super_type; using super_type::super_type; };


class Shadow_Ref : public gi::detail::CBoxedRefWrapper<Shadow, ::GskShadow, GI_GSK_SHADOW_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Shadow, ::GskShadow, GI_GSK_SHADOW_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskShadow>
{ typedef Gsk::Shadow type; }; 

} // namespace repository

} // namespace gi

#endif
