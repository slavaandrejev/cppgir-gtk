// AUTO-GENERATED

#ifndef _GI_GRAPHENE_RAY_IMPL_HPP_
#define _GI_GRAPHENE_RAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_ray_t* /*full*/ graphene_ray_alloc ();
// ::graphene_ray_t* /*full*/ graphene_ray_alloc ();
Graphene::Ray base::RayBase::alloc () noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_ray_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_ray_equal (const graphene_ray_t* a /*none*/, const graphene_ray_t* b /*none*/);
// gboolean graphene_ray_equal (const ::graphene_ray_t* a /*none*/, const ::graphene_ray_t* b /*none*/);
bool base::RayBase::equal (const Graphene::Ray_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_ray_t* a, const ::graphene_ray_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_ray_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_ray_free (graphene_ray_t* r /*none*/);
// void graphene_ray_free (::graphene_ray_t* r /*none*/);
// IGNORE; marked ignore

// void graphene_ray_get_closest_point_to_point (const graphene_ray_t* r /*none*/, const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_ray_get_closest_point_to_point (const ::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::RayBase::get_closest_point_to_point (const Graphene::Point3D_Ref p, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_closest_point_to_point;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::RayBase::get_closest_point_to_point (const Graphene::Point3D_Ref p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_closest_point_to_point;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_ray_get_direction (const graphene_ray_t* r /*none*/, graphene_vec3_t* direction /*none,out,ca*/);
// void graphene_ray_get_direction (const ::graphene_ray_t* r /*none*/, ::graphene_vec3_t* direction /*none,out,ca*/);
void base::RayBase::get_direction (Graphene::Vec3 & direction) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_direction;
  detail::allocate(direction);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(direction).gobj_()), "");
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (direction).gobj_()));
}
Graphene::Vec3 base::RayBase::get_direction () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_direction;
  Graphene::Vec3 direction_c;
  auto direction = &direction_c;
  detail::allocate(*direction);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*direction).gobj_()), "");
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (::graphene_vec3_t*) (direction ? (::graphene_vec3_t*) (*direction).gobj_() : nullptr));
  return direction_c;
}

// float graphene_ray_get_distance_to_plane (const graphene_ray_t* r /*none*/, const graphene_plane_t* p /*none*/);
// gfloat graphene_ray_get_distance_to_plane (const ::graphene_ray_t* r /*none*/, const ::graphene_plane_t* p /*none*/);
gfloat base::RayBase::get_distance_to_plane (const Graphene::Plane_Ref p) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_plane_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_distance_to_plane;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_plane_t*) (p_to_c));
  return _temp_ret;
}

// float graphene_ray_get_distance_to_point (const graphene_ray_t* r /*none*/, const graphene_point3d_t* p /*none*/);
// gfloat graphene_ray_get_distance_to_point (const ::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* p /*none*/);
gfloat base::RayBase::get_distance_to_point (const Graphene::Point3D_Ref p) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_point3d_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_distance_to_point;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c));
  return _temp_ret;
}

// void graphene_ray_get_origin (const graphene_ray_t* r /*none*/, graphene_point3d_t* origin /*none,out,ca*/);
// void graphene_ray_get_origin (const ::graphene_ray_t* r /*none*/, ::graphene_point3d_t* origin /*none,out,ca*/);
void base::RayBase::get_origin (Graphene::Point3D & origin) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, ::graphene_point3d_t* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_origin;
  detail::allocate(origin);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(origin).gobj_()), "");
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (origin).gobj_()));
}
Graphene::Point3D base::RayBase::get_origin () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, ::graphene_point3d_t* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_origin;
  Graphene::Point3D origin_c;
  auto origin = &origin_c;
  detail::allocate(*origin);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*origin).gobj_()), "");
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (::graphene_point3d_t*) (origin ? (::graphene_point3d_t*) (*origin).gobj_() : nullptr));
  return origin_c;
}

// void graphene_ray_get_position_at (const graphene_ray_t* r /*none*/, float t, graphene_point3d_t* position /*none,out,ca*/);
// void graphene_ray_get_position_at (const ::graphene_ray_t* r /*none*/, gfloat t, ::graphene_point3d_t* position /*none,out,ca*/);
void base::RayBase::get_position_at (gfloat t, Graphene::Point3D & position) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, gfloat t, ::graphene_point3d_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_position_at;
  detail::allocate(position);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(position).gobj_()), "");
  auto t_to_c = t;
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (gfloat) (t_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (position).gobj_()));
}
Graphene::Point3D base::RayBase::get_position_at (gfloat t) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_ray_t* r, gfloat t, ::graphene_point3d_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_get_position_at;
  Graphene::Point3D position_c;
  auto position = &position_c;
  detail::allocate(*position);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*position).gobj_()), "");
  auto t_to_c = t;
  call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (gfloat) (t_to_c), (::graphene_point3d_t*) (position ? (::graphene_point3d_t*) (*position).gobj_() : nullptr));
  return position_c;
}

// graphene_ray_t* /*none*/ graphene_ray_init (graphene_ray_t* r /*none*/, const graphene_point3d_t* origin /*none,nullable*/, const graphene_vec3_t* direction /*none,nullable*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init (::graphene_ray_t* r /*none*/, const ::graphene_point3d_t* origin /*none,nullable*/, const ::graphene_vec3_t* direction /*none,nullable*/);
Graphene::Ray_Ref base::RayBase::init (const Graphene::Point3D_Ref origin, const Graphene::Vec3_Ref direction) noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) (::graphene_ray_t* r, const ::graphene_point3d_t* origin, const ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_init;
  auto direction_to_c = gi::unwrap (direction, gi::transfer_none);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_ray_t*) (gobj_()), (const ::graphene_point3d_t*) (origin_to_c), (const ::graphene_vec3_t*) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Ray_Ref base::RayBase::init () noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) (::graphene_ray_t* r, const ::graphene_point3d_t* origin, const ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_init;
  auto direction_to_c = nullptr;
  auto origin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_ray_t*) (gobj_()), (const ::graphene_point3d_t*) (origin_to_c), (const ::graphene_vec3_t*) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_ray_t* /*none*/ graphene_ray_init_from_ray (graphene_ray_t* r /*none*/, const graphene_ray_t* src /*none*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init_from_ray (::graphene_ray_t* r /*none*/, const ::graphene_ray_t* src /*none*/);
Graphene::Ray_Ref base::RayBase::init_from_ray (const Graphene::Ray_Ref src) noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) (::graphene_ray_t* r, const ::graphene_ray_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_init_from_ray;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_ray_t*) (gobj_()), (const ::graphene_ray_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_ray_t* /*none*/ graphene_ray_init_from_vec3 (graphene_ray_t* r /*none*/, const graphene_vec3_t* origin /*none,nullable*/, const graphene_vec3_t* direction /*none,nullable*/);
// ::graphene_ray_t* /*none*/ graphene_ray_init_from_vec3 (::graphene_ray_t* r /*none*/, const ::graphene_vec3_t* origin /*none,nullable*/, const ::graphene_vec3_t* direction /*none,nullable*/);
Graphene::Ray_Ref base::RayBase::init_from_vec3 (const Graphene::Vec3_Ref origin, const Graphene::Vec3_Ref direction) noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) (::graphene_ray_t* r, const ::graphene_vec3_t* origin, const ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_init_from_vec3;
  auto direction_to_c = gi::unwrap (direction, gi::transfer_none);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_ray_t*) (gobj_()), (const ::graphene_vec3_t*) (origin_to_c), (const ::graphene_vec3_t*) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Ray_Ref base::RayBase::init_from_vec3 () noexcept
{
  typedef ::graphene_ray_t* (*call_wrap_t) (::graphene_ray_t* r, const ::graphene_vec3_t* origin, const ::graphene_vec3_t* direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_init_from_vec3;
  auto direction_to_c = nullptr;
  auto origin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_ray_t*) (gobj_()), (const ::graphene_vec3_t*) (origin_to_c), (const ::graphene_vec3_t*) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_ray_intersection_kind_t graphene_ray_intersect_box (const graphene_ray_t* r /*none*/, const graphene_box_t* b /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_box (const ::graphene_ray_t* r /*none*/, const ::graphene_box_t* b /*none*/, gfloat* t_out);
Graphene::RayIntersectionKind base::RayBase::intersect_box (const Graphene::Box_Ref b, gfloat & t_out) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_box_t* b, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_box;
  gfloat t_out_o {};
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (gfloat*) (&t_out_o));
  t_out = t_out_o;
  return gi::wrap (_temp_ret);
}
std::tuple<Graphene::RayIntersectionKind, gfloat> base::RayBase::intersect_box (const Graphene::Box_Ref b) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_box_t* b, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_box;
  gfloat t_out_o {};
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (gfloat*) (&t_out_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret);
  auto &&tmp_return_2 = t_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// graphene_ray_intersection_kind_t graphene_ray_intersect_sphere (const graphene_ray_t* r /*none*/, const graphene_sphere_t* s /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_sphere (const ::graphene_ray_t* r /*none*/, const ::graphene_sphere_t* s /*none*/, gfloat* t_out);
Graphene::RayIntersectionKind base::RayBase::intersect_sphere (const Graphene::Sphere_Ref s, gfloat & t_out) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_sphere_t* s, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_sphere;
  gfloat t_out_o {};
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_sphere_t*) (s_to_c), (gfloat*) (&t_out_o));
  t_out = t_out_o;
  return gi::wrap (_temp_ret);
}
std::tuple<Graphene::RayIntersectionKind, gfloat> base::RayBase::intersect_sphere (const Graphene::Sphere_Ref s) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_sphere_t* s, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_sphere;
  gfloat t_out_o {};
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_sphere_t*) (s_to_c), (gfloat*) (&t_out_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret);
  auto &&tmp_return_2 = t_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// graphene_ray_intersection_kind_t graphene_ray_intersect_triangle (const graphene_ray_t* r /*none*/, const graphene_triangle_t* t /*none*/, float* t_out);
// ::graphene_ray_intersection_kind_t graphene_ray_intersect_triangle (const ::graphene_ray_t* r /*none*/, const ::graphene_triangle_t* t /*none*/, gfloat* t_out);
Graphene::RayIntersectionKind base::RayBase::intersect_triangle (const Graphene::Triangle_Ref t, gfloat & t_out) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_triangle_t* t, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_triangle;
  gfloat t_out_o {};
  auto t_to_c = gi::unwrap (t, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_triangle_t*) (t_to_c), (gfloat*) (&t_out_o));
  t_out = t_out_o;
  return gi::wrap (_temp_ret);
}
std::tuple<Graphene::RayIntersectionKind, gfloat> base::RayBase::intersect_triangle (const Graphene::Triangle_Ref t) const noexcept
{
  typedef ::graphene_ray_intersection_kind_t (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_triangle_t* t, gfloat* t_out);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersect_triangle;
  gfloat t_out_o {};
  auto t_to_c = gi::unwrap (t, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_triangle_t*) (t_to_c), (gfloat*) (&t_out_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret);
  auto &&tmp_return_2 = t_out_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// _Bool graphene_ray_intersects_box (const graphene_ray_t* r /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_ray_intersects_box (const ::graphene_ray_t* r /*none*/, const ::graphene_box_t* b /*none*/);
bool base::RayBase::intersects_box (const Graphene::Box_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_box_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersects_box;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_ray_intersects_sphere (const graphene_ray_t* r /*none*/, const graphene_sphere_t* s /*none*/);
// gboolean graphene_ray_intersects_sphere (const ::graphene_ray_t* r /*none*/, const ::graphene_sphere_t* s /*none*/);
bool base::RayBase::intersects_sphere (const Graphene::Sphere_Ref s) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_sphere_t* s);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersects_sphere;
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_sphere_t*) (s_to_c));
  return _temp_ret;
}

// _Bool graphene_ray_intersects_triangle (const graphene_ray_t* r /*none*/, const graphene_triangle_t* t /*none*/);
// gboolean graphene_ray_intersects_triangle (const ::graphene_ray_t* r /*none*/, const ::graphene_triangle_t* t /*none*/);
bool base::RayBase::intersects_triangle (const Graphene::Triangle_Ref t) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_ray_t* r, const ::graphene_triangle_t* t);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_ray_intersects_triangle;
  auto t_to_c = gi::unwrap (t, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_ray_t*) (gobj_()), (const ::graphene_triangle_t*) (t_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/ray_extra_def_impl.hpp>)
#include <graphene/ray_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/ray_extra_impl.hpp>)
#include <graphene/ray_extra_impl.hpp>
#endif
#endif

#endif
