// AUTO-GENERATED

#ifndef _GI_GRAPHENE_PLANE_IMPL_HPP_
#define _GI_GRAPHENE_PLANE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_plane_t* /*full*/ graphene_plane_alloc ();
// ::graphene_plane_t* /*full*/ graphene_plane_alloc ();
Graphene::Plane base::PlaneBase::alloc () noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_plane_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// float graphene_plane_distance (const graphene_plane_t* p /*none*/, const graphene_point3d_t* point /*none*/);
// gfloat graphene_plane_distance (const ::graphene_plane_t* p /*none*/, const ::graphene_point3d_t* point /*none*/);
gfloat base::PlaneBase::distance (const Graphene::Point3D_Ref point) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_plane_t* p, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_distance;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return _temp_ret;
}

// _Bool graphene_plane_equal (const graphene_plane_t* a /*none*/, const graphene_plane_t* b /*none*/);
// gboolean graphene_plane_equal (const ::graphene_plane_t* a /*none*/, const ::graphene_plane_t* b /*none*/);
bool base::PlaneBase::equal (const Graphene::Plane_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_plane_t* a, const ::graphene_plane_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_plane_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_plane_free (graphene_plane_t* p /*none*/);
// void graphene_plane_free (::graphene_plane_t* p /*none*/);
// IGNORE; marked ignore

// float graphene_plane_get_constant (const graphene_plane_t* p /*none*/);
// gfloat graphene_plane_get_constant (const ::graphene_plane_t* p /*none*/);
gfloat base::PlaneBase::get_constant () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_plane_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_get_constant;
  auto _temp_ret = call_wrap_v ((const ::graphene_plane_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_plane_get_normal (const graphene_plane_t* p /*none*/, graphene_vec3_t* normal /*none,out,ca*/);
// void graphene_plane_get_normal (const ::graphene_plane_t* p /*none*/, ::graphene_vec3_t* normal /*none,out,ca*/);
void base::PlaneBase::get_normal (Graphene::Vec3 & normal) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_vec3_t* normal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_get_normal;
  detail::allocate(normal);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(normal).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (normal).gobj_()));
}
Graphene::Vec3 base::PlaneBase::get_normal () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_vec3_t* normal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_get_normal;
  Graphene::Vec3 normal_c;
  auto normal = &normal_c;
  detail::allocate(*normal);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*normal).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_vec3_t*) (normal ? (::graphene_vec3_t*) (*normal).gobj_() : nullptr));
  return normal_c;
}

// graphene_plane_t* /*none*/ graphene_plane_init (graphene_plane_t* p /*none*/, const graphene_vec3_t* normal /*none,nullable*/, float constant);
// ::graphene_plane_t* /*none*/ graphene_plane_init (::graphene_plane_t* p /*none*/, const ::graphene_vec3_t* normal /*none,nullable*/, gfloat constant);
Graphene::Plane_Ref base::PlaneBase::init (const Graphene::Vec3_Ref normal, gfloat constant) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_vec3_t* normal, gfloat constant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init;
  auto constant_to_c = constant;
  auto normal_to_c = gi::unwrap (normal, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_vec3_t*) (normal_to_c), (gfloat) (constant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Plane_Ref base::PlaneBase::init (gfloat constant) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_vec3_t* normal, gfloat constant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init;
  auto constant_to_c = constant;
  auto normal_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_vec3_t*) (normal_to_c), (gfloat) (constant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_plane_t* /*none*/ graphene_plane_init_from_plane (graphene_plane_t* p /*none*/, const graphene_plane_t* src /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_plane (::graphene_plane_t* p /*none*/, const ::graphene_plane_t* src /*none*/);
Graphene::Plane_Ref base::PlaneBase::init_from_plane (const Graphene::Plane_Ref src) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_plane_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init_from_plane;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_plane_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_plane_t* /*none*/ graphene_plane_init_from_point (graphene_plane_t* p /*none*/, const graphene_vec3_t* normal /*none*/, const graphene_point3d_t* point /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_point (::graphene_plane_t* p /*none*/, const ::graphene_vec3_t* normal /*none*/, const ::graphene_point3d_t* point /*none*/);
Graphene::Plane_Ref base::PlaneBase::init_from_point (const Graphene::Vec3_Ref normal, const Graphene::Point3D_Ref point) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_vec3_t* normal, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init_from_point;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto normal_to_c = gi::unwrap (normal, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_vec3_t*) (normal_to_c), (const ::graphene_point3d_t*) (point_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_plane_t* /*none*/ graphene_plane_init_from_points (graphene_plane_t* p /*none*/, const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, const graphene_point3d_t* c /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_points (::graphene_plane_t* p /*none*/, const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, const ::graphene_point3d_t* c /*none*/);
Graphene::Plane_Ref base::PlaneBase::init_from_points (const Graphene::Point3D_Ref a, const Graphene::Point3D_Ref b, const Graphene::Point3D_Ref c) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, const ::graphene_point3d_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init_from_points;
  auto c_to_c = gi::unwrap (c, gi::transfer_none);
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_point3d_t*) (a_to_c), (const ::graphene_point3d_t*) (b_to_c), (const ::graphene_point3d_t*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_plane_t* /*none*/ graphene_plane_init_from_vec4 (graphene_plane_t* p /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_vec4 (::graphene_plane_t* p /*none*/, const ::graphene_vec4_t* src /*none*/);
Graphene::Plane_Ref base::PlaneBase::init_from_vec4 (const Graphene::Vec4_Ref src) noexcept
{
  typedef ::graphene_plane_t* (*call_wrap_t) (::graphene_plane_t* p, const ::graphene_vec4_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_init_from_vec4;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_plane_t*) (gobj_()), (const ::graphene_vec4_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_plane_negate (const graphene_plane_t* p /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_negate (const ::graphene_plane_t* p /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
void base::PlaneBase::negate (Graphene::Plane & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_negate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_plane_t*) ((::graphene_plane_t*) (res).gobj_()));
}
Graphene::Plane base::PlaneBase::negate () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_negate;
  Graphene::Plane res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_plane_t*) (res ? (::graphene_plane_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_plane_normalize (const graphene_plane_t* p /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_normalize (const ::graphene_plane_t* p /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
void base::PlaneBase::normalize (Graphene::Plane & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_plane_t*) ((::graphene_plane_t*) (res).gobj_()));
}
Graphene::Plane base::PlaneBase::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_normalize;
  Graphene::Plane res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (::graphene_plane_t*) (res ? (::graphene_plane_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_plane_transform (const graphene_plane_t* p /*none*/, const graphene_matrix_t* matrix /*none*/, const graphene_matrix_t* normal_matrix /*none,nullable*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_transform (const ::graphene_plane_t* p /*none*/, const ::graphene_matrix_t* matrix /*none*/, const ::graphene_matrix_t* normal_matrix /*none,nullable*/, ::graphene_plane_t* res /*none,out,ca*/);
void base::PlaneBase::transform (const Graphene::Matrix_Ref matrix, const Graphene::Matrix_Ref normal_matrix, Graphene::Plane & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, const ::graphene_matrix_t* matrix, const ::graphene_matrix_t* normal_matrix, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_transform;
  detail::allocate(res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(res).gobj_()), "");
  auto normal_matrix_to_c = gi::unwrap (normal_matrix, gi::transfer_none);
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c), (const ::graphene_matrix_t*) (normal_matrix_to_c), (::graphene_plane_t*) ((::graphene_plane_t*) (res).gobj_()));
}
void base::PlaneBase::transform (const Graphene::Matrix_Ref matrix, Graphene::Plane & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, const ::graphene_matrix_t* matrix, const ::graphene_matrix_t* normal_matrix, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_transform;
  detail::allocate(res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(res).gobj_()), "");
  auto normal_matrix_to_c = nullptr;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c), (const ::graphene_matrix_t*) (normal_matrix_to_c), (::graphene_plane_t*) ((::graphene_plane_t*) (res).gobj_()));
}
Graphene::Plane base::PlaneBase::transform (const Graphene::Matrix_Ref matrix, const Graphene::Matrix_Ref normal_matrix) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, const ::graphene_matrix_t* matrix, const ::graphene_matrix_t* normal_matrix, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_transform;
  Graphene::Plane res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(*res).gobj_()), "");
  auto normal_matrix_to_c = gi::unwrap (normal_matrix, gi::transfer_none);
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c), (const ::graphene_matrix_t*) (normal_matrix_to_c), (::graphene_plane_t*) (res ? (::graphene_plane_t*) (*res).gobj_() : nullptr));
  return res_c;
}
Graphene::Plane base::PlaneBase::transform (const Graphene::Matrix_Ref matrix) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_plane_t* p, const ::graphene_matrix_t* matrix, const ::graphene_matrix_t* normal_matrix, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_plane_transform;
  Graphene::Plane res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(*res).gobj_()), "");
  auto normal_matrix_to_c = nullptr;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((const ::graphene_plane_t*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c), (const ::graphene_matrix_t*) (normal_matrix_to_c), (::graphene_plane_t*) (res ? (::graphene_plane_t*) (*res).gobj_() : nullptr));
  return res_c;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/plane_extra_def_impl.hpp>)
#include <graphene/plane_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/plane_extra_impl.hpp>)
#include <graphene/plane_extra_impl.hpp>
#endif
#endif

#endif
