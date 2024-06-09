// AUTO-GENERATED

#ifndef _GI_GRAPHENE_FRUSTUM_IMPL_HPP_
#define _GI_GRAPHENE_FRUSTUM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_frustum_t* /*full*/ graphene_frustum_alloc ();
// ::graphene_frustum_t* /*full*/ graphene_frustum_alloc ();
Graphene::Frustum base::FrustumBase::alloc () noexcept
{
  typedef ::graphene_frustum_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_frustum_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_frustum_contains_point (const graphene_frustum_t* f /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_frustum_contains_point (const ::graphene_frustum_t* f /*none*/, const ::graphene_point3d_t* point /*none*/);
bool base::FrustumBase::contains_point (const Graphene::Point3D_Ref point) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_frustum_t* f, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_contains_point;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_frustum_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return _temp_ret;
}

// _Bool graphene_frustum_equal (const graphene_frustum_t* a /*none*/, const graphene_frustum_t* b /*none*/);
// gboolean graphene_frustum_equal (const ::graphene_frustum_t* a /*none*/, const ::graphene_frustum_t* b /*none*/);
bool base::FrustumBase::equal (const Graphene::Frustum_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_frustum_t* a, const ::graphene_frustum_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_frustum_t*) (gobj_()), (const ::graphene_frustum_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_frustum_free (graphene_frustum_t* f /*none*/);
// void graphene_frustum_free (::graphene_frustum_t* f /*none*/);
// IGNORE; marked ignore

// void graphene_frustum_get_planes (const graphene_frustum_t* f /*none*/, graphene_plane_t* planes /*none,out,ca*/);
// void graphene_frustum_get_planes (const ::graphene_frustum_t* f /*none*/, ::graphene_plane_t** planes /*none,out,ca*/);
// SKIP; planes out boxed array not supported (depth 1)

// graphene_frustum_t* /*none*/ graphene_frustum_init (graphene_frustum_t* f /*none*/, const graphene_plane_t* p0 /*none*/, const graphene_plane_t* p1 /*none*/, const graphene_plane_t* p2 /*none*/, const graphene_plane_t* p3 /*none*/, const graphene_plane_t* p4 /*none*/, const graphene_plane_t* p5 /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init (::graphene_frustum_t* f /*none*/, const ::graphene_plane_t* p0 /*none*/, const ::graphene_plane_t* p1 /*none*/, const ::graphene_plane_t* p2 /*none*/, const ::graphene_plane_t* p3 /*none*/, const ::graphene_plane_t* p4 /*none*/, const ::graphene_plane_t* p5 /*none*/);
Graphene::Frustum_Ref base::FrustumBase::init (const Graphene::Plane_Ref p0, const Graphene::Plane_Ref p1, const Graphene::Plane_Ref p2, const Graphene::Plane_Ref p3, const Graphene::Plane_Ref p4, const Graphene::Plane_Ref p5) noexcept
{
  typedef ::graphene_frustum_t* (*call_wrap_t) (::graphene_frustum_t* f, const ::graphene_plane_t* p0, const ::graphene_plane_t* p1, const ::graphene_plane_t* p2, const ::graphene_plane_t* p3, const ::graphene_plane_t* p4, const ::graphene_plane_t* p5);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_init;
  auto p5_to_c = gi::unwrap (p5, gi::transfer_none);
  auto p4_to_c = gi::unwrap (p4, gi::transfer_none);
  auto p3_to_c = gi::unwrap (p3, gi::transfer_none);
  auto p2_to_c = gi::unwrap (p2, gi::transfer_none);
  auto p1_to_c = gi::unwrap (p1, gi::transfer_none);
  auto p0_to_c = gi::unwrap (p0, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_frustum_t*) (gobj_()), (const ::graphene_plane_t*) (p0_to_c), (const ::graphene_plane_t*) (p1_to_c), (const ::graphene_plane_t*) (p2_to_c), (const ::graphene_plane_t*) (p3_to_c), (const ::graphene_plane_t*) (p4_to_c), (const ::graphene_plane_t*) (p5_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_frustum_t* /*none*/ graphene_frustum_init_from_frustum (graphene_frustum_t* f /*none*/, const graphene_frustum_t* src /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init_from_frustum (::graphene_frustum_t* f /*none*/, const ::graphene_frustum_t* src /*none*/);
Graphene::Frustum_Ref base::FrustumBase::init_from_frustum (const Graphene::Frustum_Ref src) noexcept
{
  typedef ::graphene_frustum_t* (*call_wrap_t) (::graphene_frustum_t* f, const ::graphene_frustum_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_init_from_frustum;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_frustum_t*) (gobj_()), (const ::graphene_frustum_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_frustum_t* /*none*/ graphene_frustum_init_from_matrix (graphene_frustum_t* f /*none*/, const graphene_matrix_t* matrix /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init_from_matrix (::graphene_frustum_t* f /*none*/, const ::graphene_matrix_t* matrix /*none*/);
Graphene::Frustum_Ref base::FrustumBase::init_from_matrix (const Graphene::Matrix_Ref matrix) noexcept
{
  typedef ::graphene_frustum_t* (*call_wrap_t) (::graphene_frustum_t* f, const ::graphene_matrix_t* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_init_from_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_frustum_t*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// _Bool graphene_frustum_intersects_box (const graphene_frustum_t* f /*none*/, const graphene_box_t* box /*none*/);
// gboolean graphene_frustum_intersects_box (const ::graphene_frustum_t* f /*none*/, const ::graphene_box_t* box /*none*/);
bool base::FrustumBase::intersects_box (const Graphene::Box_Ref box) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_frustum_t* f, const ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_intersects_box;
  auto box_to_c = gi::unwrap (box, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_frustum_t*) (gobj_()), (const ::graphene_box_t*) (box_to_c));
  return _temp_ret;
}

// _Bool graphene_frustum_intersects_sphere (const graphene_frustum_t* f /*none*/, const graphene_sphere_t* sphere /*none*/);
// gboolean graphene_frustum_intersects_sphere (const ::graphene_frustum_t* f /*none*/, const ::graphene_sphere_t* sphere /*none*/);
bool base::FrustumBase::intersects_sphere (const Graphene::Sphere_Ref sphere) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_frustum_t* f, const ::graphene_sphere_t* sphere);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_frustum_intersects_sphere;
  auto sphere_to_c = gi::unwrap (sphere, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_frustum_t*) (gobj_()), (const ::graphene_sphere_t*) (sphere_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/frustum_extra_def_impl.hpp>)
#include <graphene/frustum_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/frustum_extra_impl.hpp>)
#include <graphene/frustum_extra_impl.hpp>
#endif
#endif

#endif
