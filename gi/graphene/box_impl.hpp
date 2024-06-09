// AUTO-GENERATED

#ifndef _GI_GRAPHENE_BOX_IMPL_HPP_
#define _GI_GRAPHENE_BOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_box_t* /*full*/ graphene_box_alloc ();
// ::graphene_box_t* /*full*/ graphene_box_alloc ();
Graphene::Box base::BoxBase::alloc () noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_box_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_box_contains_box (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_box_contains_box (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/);
bool base::BoxBase::contains_box (const Graphene::Box_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_contains_box;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_box_contains_point (const graphene_box_t* box /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_box_contains_point (const ::graphene_box_t* box /*none*/, const ::graphene_point3d_t* point /*none*/);
bool base::BoxBase::contains_point (const Graphene::Point3D_Ref point) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_box_t* box, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_contains_point;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return _temp_ret;
}

// _Bool graphene_box_equal (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_box_equal (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/);
bool base::BoxBase::equal (const Graphene::Box_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_box_expand (const graphene_box_t* box /*none*/, const graphene_point3d_t* point /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand (const ::graphene_box_t* box /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_box_t* res /*none,out,ca*/);
void base::BoxBase::expand (const Graphene::Point3D_Ref point, Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, const ::graphene_point3d_t* point, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::BoxBase::expand (const Graphene::Point3D_Ref point) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, const ::graphene_point3d_t* point, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_box_expand_scalar (const graphene_box_t* box /*none*/, float scalar, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand_scalar (const ::graphene_box_t* box /*none*/, gfloat scalar, ::graphene_box_t* res /*none,out,ca*/);
void base::BoxBase::expand_scalar (gfloat scalar, Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, gfloat scalar, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand_scalar;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  auto scalar_to_c = scalar;
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (gfloat) (scalar_to_c), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::BoxBase::expand_scalar (gfloat scalar) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, gfloat scalar, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand_scalar;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto scalar_to_c = scalar;
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (gfloat) (scalar_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_box_expand_vec3 (const graphene_box_t* box /*none*/, const graphene_vec3_t* vec /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand_vec3 (const ::graphene_box_t* box /*none*/, const ::graphene_vec3_t* vec /*none*/, ::graphene_box_t* res /*none,out,ca*/);
void base::BoxBase::expand_vec3 (const Graphene::Vec3_Ref vec, Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, const ::graphene_vec3_t* vec, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand_vec3;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  auto vec_to_c = gi::unwrap (vec, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_vec3_t*) (vec_to_c), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::BoxBase::expand_vec3 (const Graphene::Vec3_Ref vec) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, const ::graphene_vec3_t* vec, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_expand_vec3;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto vec_to_c = gi::unwrap (vec, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_vec3_t*) (vec_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_box_free (graphene_box_t* box /*none*/);
// void graphene_box_free (::graphene_box_t* box /*none*/);
// IGNORE; marked ignore

// void graphene_box_get_bounding_sphere (const graphene_box_t* box /*none*/, graphene_sphere_t* sphere /*none,out,ca*/);
// void graphene_box_get_bounding_sphere (const ::graphene_box_t* box /*none*/, ::graphene_sphere_t* sphere /*none,out,ca*/);
void base::BoxBase::get_bounding_sphere (Graphene::Sphere & sphere) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_sphere_t* sphere);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_bounding_sphere;
  detail::allocate(sphere);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(sphere).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_sphere_t*) ((::graphene_sphere_t*) (sphere).gobj_()));
}
Graphene::Sphere base::BoxBase::get_bounding_sphere () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_sphere_t* sphere);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_bounding_sphere;
  Graphene::Sphere sphere_c;
  auto sphere = &sphere_c;
  detail::allocate(*sphere);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(*sphere).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_sphere_t*) (sphere ? (::graphene_sphere_t*) (*sphere).gobj_() : nullptr));
  return sphere_c;
}

// void graphene_box_get_center (const graphene_box_t* box /*none*/, graphene_point3d_t* center /*none,out,ca*/);
// void graphene_box_get_center (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* center /*none,out,ca*/);
void base::BoxBase::get_center (Graphene::Point3D & center) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_center;
  detail::allocate(center);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(center).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (center).gobj_()));
}
Graphene::Point3D base::BoxBase::get_center () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_center;
  Graphene::Point3D center_c;
  auto center = &center_c;
  detail::allocate(*center);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*center).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) (center ? (::graphene_point3d_t*) (*center).gobj_() : nullptr));
  return center_c;
}

// float graphene_box_get_depth (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_depth (const ::graphene_box_t* box /*none*/);
gfloat base::BoxBase::get_depth () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_depth;
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_box_get_height (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_height (const ::graphene_box_t* box /*none*/);
gfloat base::BoxBase::get_height () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_height;
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_box_get_max (const graphene_box_t* box /*none*/, graphene_point3d_t* max /*none,out,ca*/);
// void graphene_box_get_max (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* max /*none,out,ca*/);
void base::BoxBase::get_max (Graphene::Point3D & max) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_max;
  detail::allocate(max);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(max).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (max).gobj_()));
}
Graphene::Point3D base::BoxBase::get_max () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_max;
  Graphene::Point3D max_c;
  auto max = &max_c;
  detail::allocate(*max);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*max).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) (max ? (::graphene_point3d_t*) (*max).gobj_() : nullptr));
  return max_c;
}

// void graphene_box_get_min (const graphene_box_t* box /*none*/, graphene_point3d_t* min /*none,out,ca*/);
// void graphene_box_get_min (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* min /*none,out,ca*/);
void base::BoxBase::get_min (Graphene::Point3D & min) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* min);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_min;
  detail::allocate(min);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(min).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (min).gobj_()));
}
Graphene::Point3D base::BoxBase::get_min () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_point3d_t* min);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_min;
  Graphene::Point3D min_c;
  auto min = &min_c;
  detail::allocate(*min);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*min).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_point3d_t*) (min ? (::graphene_point3d_t*) (*min).gobj_() : nullptr));
  return min_c;
}

// void graphene_box_get_size (const graphene_box_t* box /*none*/, graphene_vec3_t* size /*none,out,ca*/);
// void graphene_box_get_size (const ::graphene_box_t* box /*none*/, ::graphene_vec3_t* size /*none,out,ca*/);
void base::BoxBase::get_size (Graphene::Vec3 & size) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_vec3_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_size;
  detail::allocate(size);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(size).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (size).gobj_()));
}
Graphene::Vec3 base::BoxBase::get_size () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* box, ::graphene_vec3_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_size;
  Graphene::Vec3 size_c;
  auto size = &size_c;
  detail::allocate(*size);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*size).gobj_()), "");
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (::graphene_vec3_t*) (size ? (::graphene_vec3_t*) (*size).gobj_() : nullptr));
  return size_c;
}

// void graphene_box_get_vertices (const graphene_box_t* box /*none*/, graphene_vec3_t* vertices /*none,out,ca*/);
// void graphene_box_get_vertices (const ::graphene_box_t* box /*none*/, ::graphene_vec3_t** vertices /*none,out,ca*/);
// SKIP; vertices out boxed array not supported (depth 1)

// float graphene_box_get_width (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_width (const ::graphene_box_t* box /*none*/);
gfloat base::BoxBase::get_width () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_box_t* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_get_width;
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()));
  return _temp_ret;
}

// graphene_box_t* /*none*/ graphene_box_init (graphene_box_t* box /*none*/, const graphene_point3d_t* min /*none,nullable*/, const graphene_point3d_t* max /*none,nullable*/);
// ::graphene_box_t* /*none*/ graphene_box_init (::graphene_box_t* box /*none*/, const ::graphene_point3d_t* min /*none,nullable*/, const ::graphene_point3d_t* max /*none,nullable*/);
Graphene::Box_Ref base::BoxBase::init (const Graphene::Point3D_Ref min, const Graphene::Point3D_Ref max) noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) (::graphene_box_t* box, const ::graphene_point3d_t* min, const ::graphene_point3d_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_init;
  auto max_to_c = gi::unwrap (max, gi::transfer_none);
  auto min_to_c = gi::unwrap (min, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_box_t*) (gobj_()), (const ::graphene_point3d_t*) (min_to_c), (const ::graphene_point3d_t*) (max_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Box_Ref base::BoxBase::init () noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) (::graphene_box_t* box, const ::graphene_point3d_t* min, const ::graphene_point3d_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_init;
  auto max_to_c = nullptr;
  auto min_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_box_t*) (gobj_()), (const ::graphene_point3d_t*) (min_to_c), (const ::graphene_point3d_t*) (max_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_box_t* /*none*/ graphene_box_init_from_box (graphene_box_t* box /*none*/, const graphene_box_t* src /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_box (::graphene_box_t* box /*none*/, const ::graphene_box_t* src /*none*/);
Graphene::Box_Ref base::BoxBase::init_from_box (const Graphene::Box_Ref src) noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) (::graphene_box_t* box, const ::graphene_box_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_init_from_box;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_box_t* /*none*/ graphene_box_init_from_points (graphene_box_t* box /*none*/, unsigned int n_points, const graphene_point3d_t* points /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_points (::graphene_box_t* box /*none*/, guint n_points, const ::graphene_point3d_t** points /*none*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_box_t* /*none*/ graphene_box_init_from_vec3 (graphene_box_t* box /*none*/, const graphene_vec3_t* min /*none,nullable*/, const graphene_vec3_t* max /*none,nullable*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_vec3 (::graphene_box_t* box /*none*/, const ::graphene_vec3_t* min /*none,nullable*/, const ::graphene_vec3_t* max /*none,nullable*/);
Graphene::Box_Ref base::BoxBase::init_from_vec3 (const Graphene::Vec3_Ref min, const Graphene::Vec3_Ref max) noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) (::graphene_box_t* box, const ::graphene_vec3_t* min, const ::graphene_vec3_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_init_from_vec3;
  auto max_to_c = gi::unwrap (max, gi::transfer_none);
  auto min_to_c = gi::unwrap (min, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_box_t*) (gobj_()), (const ::graphene_vec3_t*) (min_to_c), (const ::graphene_vec3_t*) (max_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Box_Ref base::BoxBase::init_from_vec3 () noexcept
{
  typedef ::graphene_box_t* (*call_wrap_t) (::graphene_box_t* box, const ::graphene_vec3_t* min, const ::graphene_vec3_t* max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_init_from_vec3;
  auto max_to_c = nullptr;
  auto min_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_box_t*) (gobj_()), (const ::graphene_vec3_t*) (min_to_c), (const ::graphene_vec3_t*) (max_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_box_t* /*none*/ graphene_box_init_from_vectors (graphene_box_t* box /*none*/, unsigned int n_vectors, const graphene_vec3_t* vectors /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_vectors (::graphene_box_t* box /*none*/, guint n_vectors, const ::graphene_vec3_t** vectors /*none*/);
// SKIP; vectors in boxed array not supported (depth 1)

// _Bool graphene_box_intersection (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,opt,ca*/);
// gboolean graphene_box_intersection (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,opt,ca*/);
bool base::BoxBase::intersection (const Graphene::Box_Ref b, Graphene::Box * res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_intersection;
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return _temp_ret;
}
std::tuple<bool, Graphene::Box> base::BoxBase::intersection (const Graphene::Box_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_intersection;
  Graphene::Box res_c;
  auto res = &res_c;
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void graphene_box_union (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_union (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,ca*/);
void base::BoxBase::union_ (const Graphene::Box_Ref b, Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_union;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::BoxBase::union_ (const Graphene::Box_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_box_t* a, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_union;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_box_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// const graphene_box_t* /*none*/ graphene_box_empty ();
// const ::graphene_box_t* /*none*/ graphene_box_empty ();
Graphene::Box_Ref base::BoxBase::empty () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_box_t* /*none*/ graphene_box_infinite ();
// const ::graphene_box_t* /*none*/ graphene_box_infinite ();
Graphene::Box_Ref base::BoxBase::infinite () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_infinite;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_box_t* /*none*/ graphene_box_minus_one ();
// const ::graphene_box_t* /*none*/ graphene_box_minus_one ();
Graphene::Box_Ref base::BoxBase::minus_one () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_minus_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_box_t* /*none*/ graphene_box_one ();
// const ::graphene_box_t* /*none*/ graphene_box_one ();
Graphene::Box_Ref base::BoxBase::one () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_box_t* /*none*/ graphene_box_one_minus_one ();
// const ::graphene_box_t* /*none*/ graphene_box_one_minus_one ();
Graphene::Box_Ref base::BoxBase::one_minus_one () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_one_minus_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_box_t* /*none*/ graphene_box_zero ();
// const ::graphene_box_t* /*none*/ graphene_box_zero ();
Graphene::Box_Ref base::BoxBase::zero () noexcept
{
  typedef const ::graphene_box_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_box_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/box_extra_def_impl.hpp>)
#include <graphene/box_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/box_extra_impl.hpp>)
#include <graphene/box_extra_impl.hpp>
#endif
#endif

#endif
