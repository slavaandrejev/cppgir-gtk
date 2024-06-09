// AUTO-GENERATED

#ifndef _GI_GRAPHENE_SIMD4X4F_HPP_
#define _GI_GRAPHENE_SIMD4X4F_HPP_


namespace gi {

namespace repository {

namespace Graphene {


class Simd4X4F;

namespace base {


#define GI_GRAPHENE_SIMD4X4F_BASE base::Simd4X4FBase
class Simd4X4FBase : public gi::detail::CBoxedWrapperBase<Simd4X4FBase, ::graphene_simd4x4f_t>
{
typedef gi::detail::CBoxedWrapperBase<Simd4X4FBase, ::graphene_simd4x4f_t> super_type;
public:

Simd4X4FBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/simd4x4f_extra_def.hpp>)
#include <graphene/simd4x4f_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/simd4x4f_extra.hpp>)
#include <graphene/simd4x4f_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Simd4X4F_Ref;

class Simd4X4F : public gi::detail::CBoxedWrapper<Simd4X4F, ::graphene_simd4x4f_t, GI_GRAPHENE_SIMD4X4F_BASE, Simd4X4F_Ref>
{ typedef gi::detail::CBoxedWrapper<Simd4X4F, ::graphene_simd4x4f_t, GI_GRAPHENE_SIMD4X4F_BASE, Simd4X4F_Ref> super_type; using super_type::super_type; };


class Simd4X4F_Ref : public gi::detail::CBoxedRefWrapper<Simd4X4F, ::graphene_simd4x4f_t, GI_GRAPHENE_SIMD4X4F_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Simd4X4F, ::graphene_simd4x4f_t, GI_GRAPHENE_SIMD4X4F_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_simd4x4f_t>
{ typedef Graphene::Simd4X4F type; }; 

} // namespace repository

} // namespace gi

#endif
