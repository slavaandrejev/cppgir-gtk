// AUTO-GENERATED

#ifndef _GI_GRAPHENE_SPHERE_IMPL_HPP_
#define _GI_GRAPHENE_SPHERE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_sphere_t* /*full*/ graphene_sphere_alloc ();
// ::graphene_sphere_t* /*full*/ graphene_sphere_alloc ();
Graphene::Sphere base::SphereBase::alloc () noexcept
{
  typedef ::graphene_sphere_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_sphere_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_sphere_contains_point (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_sphere_contains_point (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/);
bool base::SphereBase::contains_point (const Graphene::Point3D_Ref point) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_sphere_t* s, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_contains_point;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return _temp_ret;
}

// float graphene_sphere_distance (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/);
// gfloat graphene_sphere_distance (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/);
gfloat base::SphereBase::distance (const Graphene::Point3D_Ref point) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_sphere_t* s, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_distance;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return _temp_ret;
}

// _Bool graphene_sphere_equal (const graphene_sphere_t* a /*none*/, const graphene_sphere_t* b /*none*/);
// gboolean graphene_sphere_equal (const ::graphene_sphere_t* a /*none*/, const ::graphene_sphere_t* b /*none*/);
bool base::SphereBase::equal (const Graphene::Sphere_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_sphere_t* a, const ::graphene_sphere_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (const ::graphene_sphere_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_sphere_free (graphene_sphere_t* s /*none*/);
// void graphene_sphere_free (::graphene_sphere_t* s /*none*/);
// IGNORE; marked ignore

// void graphene_sphere_get_bounding_box (const graphene_sphere_t* s /*none*/, graphene_box_t* box /*none,out,ca*/);
// void graphene_sphere_get_bounding_box (const ::graphene_sphere_t* s /*none*/, ::graphene_box_t* box /*none,out,ca*/);
void base::SphereBase::get_bounding_box (Graphene::Box & box) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_get_bounding_box;
  detail::allocate(box);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(box).gobj_()), "");
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (::graphene_box_t*) ((::graphene_box_t*) (box).gobj_()));
}
Graphene::Box base::SphereBase::get_bounding_box () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_get_bounding_box;
  Graphene::Box box_c;
  auto box = &box_c;
  detail::allocate(*box);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*box).gobj_()), "");
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (::graphene_box_t*) (box ? (::graphene_box_t*) (*box).gobj_() : nullptr));
  return box_c;
}

// void graphene_sphere_get_center (const graphene_sphere_t* s /*none*/, graphene_point3d_t* center /*none,out,ca*/);
// void graphene_sphere_get_center (const ::graphene_sphere_t* s /*none*/, ::graphene_point3d_t* center /*none,out,ca*/);
void base::SphereBase::get_center (Graphene::Point3D & center) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, ::graphene_point3d_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_get_center;
  detail::allocate(center);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(center).gobj_()), "");
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (center).gobj_()));
}
Graphene::Point3D base::SphereBase::get_center () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, ::graphene_point3d_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_get_center;
  Graphene::Point3D center_c;
  auto center = &center_c;
  detail::allocate(*center);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*center).gobj_()), "");
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (::graphene_point3d_t*) (center ? (::graphene_point3d_t*) (*center).gobj_() : nullptr));
  return center_c;
}

// float graphene_sphere_get_radius (const graphene_sphere_t* s /*none*/);
// gfloat graphene_sphere_get_radius (const ::graphene_sphere_t* s /*none*/);
gfloat base::SphereBase::get_radius () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_sphere_t* s);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_get_radius;
  auto _temp_ret = call_wrap_v ((const ::graphene_sphere_t*) (gobj_()));
  return _temp_ret;
}

// graphene_sphere_t* /*none*/ graphene_sphere_init (graphene_sphere_t* s /*none*/, const graphene_point3d_t* center /*none,nullable*/, float radius);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init (::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* center /*none,nullable*/, gfloat radius);
Graphene::Sphere_Ref base::SphereBase::init (const Graphene::Point3D_Ref center, gfloat radius) noexcept
{
  typedef ::graphene_sphere_t* (*call_wrap_t) (::graphene_sphere_t* s, const ::graphene_point3d_t* center, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_init;
  auto radius_to_c = radius;
  auto center_to_c = gi::unwrap (center, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (center_to_c), (gfloat) (radius_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Sphere_Ref base::SphereBase::init (gfloat radius) noexcept
{
  typedef ::graphene_sphere_t* (*call_wrap_t) (::graphene_sphere_t* s, const ::graphene_point3d_t* center, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_init;
  auto radius_to_c = radius;
  auto center_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (center_to_c), (gfloat) (radius_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_sphere_t* /*none*/ graphene_sphere_init_from_points (graphene_sphere_t* s /*none*/, unsigned int n_points, const graphene_point3d_t* points /*none*/, const graphene_point3d_t* center /*none,nullable*/);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init_from_points (::graphene_sphere_t* s /*none*/, guint n_points, const ::graphene_point3d_t** points /*none*/, const ::graphene_point3d_t* center /*none,nullable*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_sphere_t* /*none*/ graphene_sphere_init_from_vectors (graphene_sphere_t* s /*none*/, unsigned int n_vectors, const graphene_vec3_t* vectors /*none*/, const graphene_point3d_t* center /*none,nullable*/);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init_from_vectors (::graphene_sphere_t* s /*none*/, guint n_vectors, const ::graphene_vec3_t** vectors /*none*/, const ::graphene_point3d_t* center /*none,nullable*/);
// SKIP; vectors in boxed array not supported (depth 1)

// _Bool graphene_sphere_is_empty (const graphene_sphere_t* s /*none*/);
// gboolean graphene_sphere_is_empty (const ::graphene_sphere_t* s /*none*/);
bool base::SphereBase::is_empty () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_sphere_t* s);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_is_empty;
  auto _temp_ret = call_wrap_v ((const ::graphene_sphere_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_sphere_translate (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/, graphene_sphere_t* res /*none,out,ca*/);
// void graphene_sphere_translate (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_sphere_t* res /*none,out,ca*/);
void base::SphereBase::translate (const Graphene::Point3D_Ref point, Graphene::Sphere & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, const ::graphene_point3d_t* point, ::graphene_sphere_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_translate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c), (::graphene_sphere_t*) ((::graphene_sphere_t*) (res).gobj_()));
}
Graphene::Sphere base::SphereBase::translate (const Graphene::Point3D_Ref point) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_sphere_t* s, const ::graphene_point3d_t* point, ::graphene_sphere_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_sphere_translate;
  Graphene::Sphere res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(*res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((const ::graphene_sphere_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c), (::graphene_sphere_t*) (res ? (::graphene_sphere_t*) (*res).gobj_() : nullptr));
  return res_c;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/sphere_extra_def_impl.hpp>)
#include <graphene/sphere_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/sphere_extra_impl.hpp>)
#include <graphene/sphere_extra_impl.hpp>
#endif
#endif

#endif
