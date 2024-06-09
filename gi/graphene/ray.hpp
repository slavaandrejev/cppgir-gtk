// AUTO-GENERATED

#ifndef _GI_GRAPHENE_RAY_HPP_
#define _GI_GRAPHENE_RAY_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box;
class Box_Ref;
class Plane;
class Plane_Ref;
class Point3D;
class Point3D_Ref;
class Ray_Ref;
class Sphere;
class Sphere_Ref;
class Triangle;
class Triangle_Ref;
class Vec3;
class Vec3_Ref;

class Ray;

namespace base {


#define GI_GRAPHENE_RAY_BASE base::RayBase
class RayBase : public gi::detail::GBoxedWrapperBase<RayBase, ::graphene_ray_t>
{
typedef gi::detail::GBoxedWrapperBase<RayBase, ::graphene_ray_t> super_type;
public:

RayBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_ray_get_type(); } 

// graphene_ray_t* /*full*/ graphene_ray_alloc ();
// ::graphene_ray_t* /*full*/ graphene_ray_alloc ();
static GI_INLINE_DECL Graphene::Ray alloc () noexcept;

// _Bool graphene_ray_equal (const graphene_ray_t* a /*none*/, const graphene_ray_t* b /*none*/);
// gboolean graphene_ray_equal (const ::graphene_ray_t* a /*none*/, const ::graphene_ray_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Ray_Ref b) const noexcept;

// void graphene_ray_free (graphene_ray_t* r /*none*/);
// void graphene_ray_free (::graphene_ray_t* r /*none*/);
// IGNORE; marked ignore

// void graphene_ray_get_closest_point_to_point (const graphene_ray_t* r /*none*/, const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_ray_get_closest_point_to_point (const ::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_closest_point_to_point (const Graphene::Point3D_Ref p, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_closest_point_to_point (const Graphene::Point3D_Ref p) const noexcept;

// void graphene_ray_get_direction (const graphene_ray_t* r /*none*/, graphene_vec3_t* direction /*none,out,ca*/);
// void graphene_ray_get_direction (const ::graphene_ray_t* r /*none*/, ::graphene_vec3_t* direction /*none,out,ca*/);
GI_INLINE_DECL void get_direction (Graphene::Vec3 & direction) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_direction () const noexcept;

// float graphene_ray_get_distance_to_plane (const graphene_ray_t* r /*none*/, const graphene_plane_t* p /*none*/);
// gfloat graphene_ray_get_distance_to_plane (const ::graphene_ray_t* r /*none*/, const ::graphene_plane_t* p /*none*/);
GI_INLINE_DECL gfloat get_distance_to_plane (const Graphene::Plane_Ref p) const noexcept;

// float graphene_ray_get_distance_to_point (const graphene_ray_t* r /*none*/, const graphene_point3d_t* p /*none*/);
// gfloat graphene_ray_get_distance_to_point (const ::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* p /*none*/);
GI_INLINE_DECL gfloat get_distance_to_point (const Graphene::Point3D_Ref p) const noexcept;

// void graphene_ray_get_origin (const graphene_ray_t* r /*none*/, graphene_point3d_t* origin /*none,out,ca*/);
// void graphene_ray_get_origin (const ::graphene_ray_t* r /*none*/, ::graphene_point3d_t* origin /*none,out,ca*/);
GI_INLINE_DECL void get_origin (Graphene::Point3D & origin) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_origin () const noexcept;

// void graphene_ray_get_position_at (const graphene_ray_t* r /*none*/, float t, graphene_point3d_t* position /*none,out,ca*/);
// void graphene_ray_get_position_at (const ::graphene_ray_t* r /*none*/, gfloat t, ::graphene_point3d_t* position /*none,out,ca*/);
GI_INLINE_DECL void get_position_at (gfloat t, Graphene::Point3D & position) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_position_at (gfloat t) const noexcept;

// graphene_ray_t* /*none*/ graphene_ray_init (graphene_ray_t* r /*none*/, const graphene_point3d_t* origin /*none,nullable*/, const graphene_vec3_t* direction /*none,nullable*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init (::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* origin /*none,nullable*/, const ::graphene_vec3_t* direction /*none,nullable*/);
GI_INLINE_DECL Graphene::Ray_Ref init (const Graphene::Point3D_Ref origin, const Graphene::Vec3_Ref direction) noexcept;
GI_INLINE_DECL Graphene::Ray_Ref init () noexcept;

// graphene_ray_t* /*none*/ graphene_ray_init_from_ray (graphene_ray_t* r /*none*/, const graphene_ray_t* src /*none*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init_from_ray (::graphene_ray_t* r /*none*/, const ::graphene_ray_t* src /*none*/);
GI_INLINE_DECL Graphene::Ray_Ref init_from_ray (const Graphene::Ray_Ref src) noexcept;

// graphene_ray_t* /*none*/ graphene_ray_init_from_vec3 (graphene_ray_t* r /*none*/, const graphene_vec3_t* origin /*none,nullable*/, const graphene_vec3_t* direction /*none,nullable*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init_from_vec3 (::graphene_ray_t* r /*none*/, const ::graphene_vec3_t* origin /*none,nullable*/, const ::graphene_vec3_t* direction /*none,nullable*/);
GI_INLINE_DECL Graphene::Ray_Ref init_from_vec3 (const Graphene::Vec3_Ref origin, const Graphene::Vec3_Ref direction) noexcept;
GI_INLINE_DECL Graphene::Ray_Ref init_from_vec3 () noexcept;

// graphene_ray_intersection_kind_t graphene_ray_intersect_box (const graphene_ray_t* r /*none*/, const graphene_box_t* b /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_box (const ::graphene_ray_t* r /*none*/, const ::graphene_box_t* b /*none*/, gfloat* t_out);
GI_INLINE_DECL Graphene::RayIntersectionKind intersect_box (const Graphene::Box_Ref b, gfloat & t_out) const noexcept;
GI_INLINE_DECL std::tuple<Graphene::RayIntersectionKind, gfloat> intersect_box (const Graphene::Box_Ref b) const noexcept;

// graphene_ray_intersection_kind_t graphene_ray_intersect_sphere (const graphene_ray_t* r /*none*/, const graphene_sphere_t* s /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_sphere (const ::graphene_ray_t* r /*none*/, const ::graphene_sphere_t* s /*none*/, gfloat* t_out);
GI_INLINE_DECL Graphene::RayIntersectionKind intersect_sphere (const Graphene::Sphere_Ref s, gfloat & t_out) const noexcept;
GI_INLINE_DECL std::tuple<Graphene::RayIntersectionKind, gfloat> intersect_sphere (const Graphene::Sphere_Ref s) const noexcept;

// graphene_ray_intersection_kind_t graphene_ray_intersect_triangle (const graphene_ray_t* r /*none*/, const graphene_triangle_t* t /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_triangle (const ::graphene_ray_t* r /*none*/, const ::graphene_triangle_t* t /*none*/, gfloat* t_out);
GI_INLINE_DECL Graphene::RayIntersectionKind intersect_triangle (const Graphene::Triangle_Ref t, gfloat & t_out) const noexcept;
GI_INLINE_DECL std::tuple<Graphene::RayIntersectionKind, gfloat> intersect_triangle (const Graphene::Triangle_Ref t) const noexcept;

// _Bool graphene_ray_intersects_box (const graphene_ray_t* r /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_ray_intersects_box (const ::graphene_ray_t* r /*none*/, const ::graphene_box_t* b /*none*/);
GI_INLINE_DECL bool intersects_box (const Graphene::Box_Ref b) const noexcept;

// _Bool graphene_ray_intersects_sphere (const graphene_ray_t* r /*none*/, const graphene_sphere_t* s /*none*/);
// gboolean graphene_ray_intersects_sphere (const ::graphene_ray_t* r /*none*/, const ::graphene_sphere_t* s /*none*/);
GI_INLINE_DECL bool intersects_sphere (const Graphene::Sphere_Ref s) const noexcept;

// _Bool graphene_ray_intersects_triangle (const graphene_ray_t* r /*none*/, const graphene_triangle_t* t /*none*/);
// gboolean graphene_ray_intersects_triangle (const ::graphene_ray_t* r /*none*/, const ::graphene_triangle_t* t /*none*/);
GI_INLINE_DECL bool intersects_triangle (const Graphene::Triangle_Ref t) const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/ray_extra_def.hpp>)
#include <graphene/ray_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/ray_extra.hpp>)
#include <graphene/ray_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Ray_Ref;

class Ray : public gi::detail::GBoxedWrapper<Ray, ::graphene_ray_t, GI_GRAPHENE_RAY_BASE, Ray_Ref>
{ typedef gi::detail::GBoxedWrapper<Ray, ::graphene_ray_t, GI_GRAPHENE_RAY_BASE, Ray_Ref> super_type; using super_type::super_type; };


class Ray_Ref : public gi::detail::GBoxedRefWrapper<Ray, ::graphene_ray_t, GI_GRAPHENE_RAY_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Ray, ::graphene_ray_t, GI_GRAPHENE_RAY_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_ray_t>
{ typedef Graphene::Ray type; }; 

} // namespace repository

} // namespace gi

#endif
