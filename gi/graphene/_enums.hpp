// AUTO-GENERATED

#ifndef _GI_GRAPHENE__ENUMS_HPP_
#define _GI_GRAPHENE__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Graphene {

enum class EulerOrder : std::underlying_type<graphene_euler_order_t>::type {
  DEFAULT_ = GRAPHENE_EULER_ORDER_DEFAULT,
  XYZ_ = GRAPHENE_EULER_ORDER_XYZ,
  YZX_ = GRAPHENE_EULER_ORDER_YZX,
  ZXY_ = GRAPHENE_EULER_ORDER_ZXY,
  XZY_ = GRAPHENE_EULER_ORDER_XZY,
  YXZ_ = GRAPHENE_EULER_ORDER_YXZ,
  ZYX_ = GRAPHENE_EULER_ORDER_ZYX,
  SXYZ_ = GRAPHENE_EULER_ORDER_SXYZ,
  SXYX_ = GRAPHENE_EULER_ORDER_SXYX,
  SXZY_ = GRAPHENE_EULER_ORDER_SXZY,
  SXZX_ = GRAPHENE_EULER_ORDER_SXZX,
  SYZX_ = GRAPHENE_EULER_ORDER_SYZX,
  SYZY_ = GRAPHENE_EULER_ORDER_SYZY,
  SYXZ_ = GRAPHENE_EULER_ORDER_SYXZ,
  SYXY_ = GRAPHENE_EULER_ORDER_SYXY,
  SZXY_ = GRAPHENE_EULER_ORDER_SZXY,
  SZXZ_ = GRAPHENE_EULER_ORDER_SZXZ,
  SZYX_ = GRAPHENE_EULER_ORDER_SZYX,
  SZYZ_ = GRAPHENE_EULER_ORDER_SZYZ,
  RZYX_ = GRAPHENE_EULER_ORDER_RZYX,
  RXYX_ = GRAPHENE_EULER_ORDER_RXYX,
  RYZX_ = GRAPHENE_EULER_ORDER_RYZX,
  RXZX_ = GRAPHENE_EULER_ORDER_RXZX,
  RXZY_ = GRAPHENE_EULER_ORDER_RXZY,
  RYZY_ = GRAPHENE_EULER_ORDER_RYZY,
  RZXY_ = GRAPHENE_EULER_ORDER_RZXY,
  RYXY_ = GRAPHENE_EULER_ORDER_RYXY,
  RYXZ_ = GRAPHENE_EULER_ORDER_RYXZ,
  RZXZ_ = GRAPHENE_EULER_ORDER_RZXZ,
  RXYZ_ = GRAPHENE_EULER_ORDER_RXYZ,
  RZYZ_ = GRAPHENE_EULER_ORDER_RZYZ,
};

} // namespace Graphene

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Graphene::EulerOrder>
{ typedef graphene_euler_order_t type; }; 
template<> struct declare_cpptype_of<graphene_euler_order_t>
{ typedef Graphene::EulerOrder type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Graphene {

enum class RayIntersectionKind : std::underlying_type<graphene_ray_intersection_kind_t>::type {
  NONE_ = GRAPHENE_RAY_INTERSECTION_KIND_NONE,
  ENTER_ = GRAPHENE_RAY_INTERSECTION_KIND_ENTER,
  LEAVE_ = GRAPHENE_RAY_INTERSECTION_KIND_LEAVE,
};

} // namespace Graphene

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Graphene::RayIntersectionKind>
{ typedef graphene_ray_intersection_kind_t type; }; 
template<> struct declare_cpptype_of<graphene_ray_intersection_kind_t>
{ typedef Graphene::RayIntersectionKind type; }; 


} // namespace repository

} // namespace gi


#endif
