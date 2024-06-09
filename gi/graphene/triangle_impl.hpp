// AUTO-GENERATED

#ifndef _GI_GRAPHENE_TRIANGLE_IMPL_HPP_
#define _GI_GRAPHENE_TRIANGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_triangle_t* /*full*/ graphene_triangle_alloc ();
// ::graphene_triangle_t* /*full*/ graphene_triangle_alloc ();
Graphene::Triangle base::TriangleBase::alloc () noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_triangle_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_triangle_contains_point (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none*/);
// gboolean graphene_triangle_contains_point (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none*/);
bool base::TriangleBase::contains_point (const Graphene::Point3D_Ref p) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_contains_point;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c));
  return _temp_ret;
}

// _Bool graphene_triangle_equal (const graphene_triangle_t* a /*none*/, const graphene_triangle_t* b /*none*/);
// gboolean graphene_triangle_equal (const ::graphene_triangle_t* a /*none*/, const ::graphene_triangle_t* b /*none*/);
bool base::TriangleBase::equal (const Graphene::Triangle_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* a, const ::graphene_triangle_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_triangle_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_triangle_free (graphene_triangle_t* t /*none*/);
// void graphene_triangle_free (::graphene_triangle_t* t /*none*/);
// IGNORE; marked ignore

// float graphene_triangle_get_area (const graphene_triangle_t* t /*none*/);
// gfloat graphene_triangle_get_area (const ::graphene_triangle_t* t /*none*/);
gfloat base::TriangleBase::get_area () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_triangle_t* t);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_area;
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_triangle_get_barycoords (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none,nullable*/, graphene_vec2_t* res /*none,out,ca*/);
// gboolean graphene_triangle_get_barycoords (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none,nullable*/, ::graphene_vec2_t* res /*none,out,ca*/);
bool base::TriangleBase::get_barycoords (const Graphene::Point3D_Ref p, Graphene::Vec2 & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_barycoords;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
  return _temp_ret;
}
bool base::TriangleBase::get_barycoords (Graphene::Vec2 & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_barycoords;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Vec2> base::TriangleBase::get_barycoords (const Graphene::Point3D_Ref p) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_barycoords;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Graphene::Vec2> base::TriangleBase::get_barycoords () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_barycoords;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void graphene_triangle_get_bounding_box (const graphene_triangle_t* t /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_triangle_get_bounding_box (const ::graphene_triangle_t* t /*none*/, ::graphene_box_t* res /*none,out,ca*/);
void base::TriangleBase::get_bounding_box (Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_bounding_box;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::TriangleBase::get_bounding_box () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_bounding_box;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_triangle_get_midpoint (const graphene_triangle_t* t /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_triangle_get_midpoint (const ::graphene_triangle_t* t /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::TriangleBase::get_midpoint (Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_midpoint;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::TriangleBase::get_midpoint () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_midpoint;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_triangle_get_normal (const graphene_triangle_t* t /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_triangle_get_normal (const ::graphene_triangle_t* t /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::TriangleBase::get_normal (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_normal;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::TriangleBase::get_normal () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_normal;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_triangle_get_plane (const graphene_triangle_t* t /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_triangle_get_plane (const ::graphene_triangle_t* t /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
void base::TriangleBase::get_plane (Graphene::Plane & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_plane;
  detail::allocate(res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_plane_t*) ((::graphene_plane_t*) (res).gobj_()));
}
Graphene::Plane base::TriangleBase::get_plane () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_plane_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_plane;
  Graphene::Plane res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_plane_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_plane_t*) (res ? (::graphene_plane_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_triangle_get_points (const graphene_triangle_t* t /*none*/, graphene_point3d_t* a /*none,out,opt,ca*/, graphene_point3d_t* b /*none,out,opt,ca*/, graphene_point3d_t* c /*none,out,opt,ca*/);
// void graphene_triangle_get_points (const ::graphene_triangle_t* t /*none*/, ::graphene_point3d_t* a /*none,out,opt,ca*/, ::graphene_point3d_t* b /*none,out,opt,ca*/, ::graphene_point3d_t* c /*none,out,opt,ca*/);
void base::TriangleBase::get_points (Graphene::Point3D * a, Graphene::Point3D * b, Graphene::Point3D * c) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_point3d_t* a, ::graphene_point3d_t* b, ::graphene_point3d_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_points;
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*c).gobj_()), "");
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*b).gobj_()), "");
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*a).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_point3d_t*) (a ? (::graphene_point3d_t*) (*a).gobj_() : nullptr), (::graphene_point3d_t*) (b ? (::graphene_point3d_t*) (*b).gobj_() : nullptr), (::graphene_point3d_t*) (c ? (::graphene_point3d_t*) (*c).gobj_() : nullptr));
}
std::tuple<Graphene::Point3D, Graphene::Point3D, Graphene::Point3D> base::TriangleBase::get_points () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_point3d_t* a, ::graphene_point3d_t* b, ::graphene_point3d_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_points;
  Graphene::Point3D c_c;
  auto c = &c_c;
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*c).gobj_()), "");
  Graphene::Point3D b_c;
  auto b = &b_c;
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*b).gobj_()), "");
  Graphene::Point3D a_c;
  auto a = &a_c;
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*a).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_point3d_t*) (a ? (::graphene_point3d_t*) (*a).gobj_() : nullptr), (::graphene_point3d_t*) (b ? (::graphene_point3d_t*) (*b).gobj_() : nullptr), (::graphene_point3d_t*) (c ? (::graphene_point3d_t*) (*c).gobj_() : nullptr));
  auto &&tmp_return_1 = a_c;
  auto &&tmp_return_2 = b_c;
  auto &&tmp_return_3 = c_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// _Bool graphene_triangle_get_uv (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none,nullable*/, const graphene_vec2_t* uv_a /*none*/, const graphene_vec2_t* uv_b /*none*/, const graphene_vec2_t* uv_c /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// gboolean graphene_triangle_get_uv (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none,nullable*/, const ::graphene_vec2_t* uv_a /*none*/, const ::graphene_vec2_t* uv_b /*none*/, const ::graphene_vec2_t* uv_c /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
bool base::TriangleBase::get_uv (const Graphene::Point3D_Ref p, const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c, Graphene::Vec2 & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, const ::graphene_vec2_t* uv_a, const ::graphene_vec2_t* uv_b, const ::graphene_vec2_t* uv_c, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_uv;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto uv_c_to_c = gi::unwrap (uv_c, gi::transfer_none);
  auto uv_b_to_c = gi::unwrap (uv_b, gi::transfer_none);
  auto uv_a_to_c = gi::unwrap (uv_a, gi::transfer_none);
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (const ::graphene_vec2_t*) (uv_a_to_c), (const ::graphene_vec2_t*) (uv_b_to_c), (const ::graphene_vec2_t*) (uv_c_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
  return _temp_ret;
}
bool base::TriangleBase::get_uv (const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c, Graphene::Vec2 & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, const ::graphene_vec2_t* uv_a, const ::graphene_vec2_t* uv_b, const ::graphene_vec2_t* uv_c, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_uv;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto uv_c_to_c = gi::unwrap (uv_c, gi::transfer_none);
  auto uv_b_to_c = gi::unwrap (uv_b, gi::transfer_none);
  auto uv_a_to_c = gi::unwrap (uv_a, gi::transfer_none);
  auto p_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (const ::graphene_vec2_t*) (uv_a_to_c), (const ::graphene_vec2_t*) (uv_b_to_c), (const ::graphene_vec2_t*) (uv_c_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Vec2> base::TriangleBase::get_uv (const Graphene::Point3D_Ref p, const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, const ::graphene_vec2_t* uv_a, const ::graphene_vec2_t* uv_b, const ::graphene_vec2_t* uv_c, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_uv;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto uv_c_to_c = gi::unwrap (uv_c, gi::transfer_none);
  auto uv_b_to_c = gi::unwrap (uv_b, gi::transfer_none);
  auto uv_a_to_c = gi::unwrap (uv_a, gi::transfer_none);
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (const ::graphene_vec2_t*) (uv_a_to_c), (const ::graphene_vec2_t*) (uv_b_to_c), (const ::graphene_vec2_t*) (uv_c_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Graphene::Vec2> base::TriangleBase::get_uv (const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_triangle_t* t, const ::graphene_point3d_t* p, const ::graphene_vec2_t* uv_a, const ::graphene_vec2_t* uv_b, const ::graphene_vec2_t* uv_c, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_uv;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto uv_c_to_c = gi::unwrap (uv_c, gi::transfer_none);
  auto uv_b_to_c = gi::unwrap (uv_b, gi::transfer_none);
  auto uv_a_to_c = gi::unwrap (uv_a, gi::transfer_none);
  auto p_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (const ::graphene_vec2_t*) (uv_a_to_c), (const ::graphene_vec2_t*) (uv_b_to_c), (const ::graphene_vec2_t*) (uv_c_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void graphene_triangle_get_vertices (const graphene_triangle_t* t /*none*/, graphene_vec3_t* a /*none,out,opt,ca*/, graphene_vec3_t* b /*none,out,opt,ca*/, graphene_vec3_t* c /*none,out,opt,ca*/);
// void graphene_triangle_get_vertices (const ::graphene_triangle_t* t /*none*/, ::graphene_vec3_t* a /*none,out,opt,ca*/, ::graphene_vec3_t* b /*none,out,opt,ca*/, ::graphene_vec3_t* c /*none,out,opt,ca*/);
void base::TriangleBase::get_vertices (Graphene::Vec3 * a, Graphene::Vec3 * b, Graphene::Vec3 * c) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_vec3_t* a, ::graphene_vec3_t* b, ::graphene_vec3_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_vertices;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*c).gobj_()), "");
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*b).gobj_()), "");
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*a).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_vec3_t*) (a ? (::graphene_vec3_t*) (*a).gobj_() : nullptr), (::graphene_vec3_t*) (b ? (::graphene_vec3_t*) (*b).gobj_() : nullptr), (::graphene_vec3_t*) (c ? (::graphene_vec3_t*) (*c).gobj_() : nullptr));
}
std::tuple<Graphene::Vec3, Graphene::Vec3, Graphene::Vec3> base::TriangleBase::get_vertices () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_triangle_t* t, ::graphene_vec3_t* a, ::graphene_vec3_t* b, ::graphene_vec3_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_get_vertices;
  Graphene::Vec3 c_c;
  auto c = &c_c;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*c).gobj_()), "");
  Graphene::Vec3 b_c;
  auto b = &b_c;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*b).gobj_()), "");
  Graphene::Vec3 a_c;
  auto a = &a_c;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*a).gobj_()), "");
  call_wrap_v ((const ::graphene_triangle_t*) (gobj_()), (::graphene_vec3_t*) (a ? (::graphene_vec3_t*) (*a).gobj_() : nullptr), (::graphene_vec3_t*) (b ? (::graphene_vec3_t*) (*b).gobj_() : nullptr), (::graphene_vec3_t*) (c ? (::graphene_vec3_t*) (*c).gobj_() : nullptr));
  auto &&tmp_return_1 = a_c;
  auto &&tmp_return_2 = b_c;
  auto &&tmp_return_3 = c_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_float (graphene_triangle_t* t /*none*/, const float* a /*none*/, const float* b /*none*/, const float* c /*none*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_float (::graphene_triangle_t* t /*none*/, const gfloat* a /*none*/, const gfloat* b /*none*/, const gfloat* c /*none*/);
Graphene::Triangle_Ref base::TriangleBase::init_from_float (gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> a, gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> b, gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> c) noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) (::graphene_triangle_t* t, const gfloat* a, const gfloat* b, const gfloat* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_init_from_float;
  auto c_w = unwrap (std::move(c), gi::transfer_none);
  auto c_to_c = c_w;
  auto b_w = unwrap (std::move(b), gi::transfer_none);
  auto b_to_c = b_w;
  auto a_w = unwrap (std::move(a), gi::transfer_none);
  auto a_to_c = a_w;
  auto _temp_ret = call_wrap_v ((::graphene_triangle_t*) (gobj_()), (const gfloat*) (a_to_c), (const gfloat*) (b_to_c), (const gfloat*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_point3d (graphene_triangle_t* t /*none*/, const graphene_point3d_t* a /*none,nullable*/, const graphene_point3d_t* b /*none,nullable*/, const graphene_point3d_t* c /*none,nullable*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_point3d (::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* a /*none,nullable*/, const ::graphene_point3d_t* b /*none,nullable*/, const ::graphene_point3d_t* c /*none,nullable*/);
Graphene::Triangle_Ref base::TriangleBase::init_from_point3d (const Graphene::Point3D_Ref a, const Graphene::Point3D_Ref b, const Graphene::Point3D_Ref c) noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) (::graphene_triangle_t* t, const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, const ::graphene_point3d_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_init_from_point3d;
  auto c_to_c = gi::unwrap (c, gi::transfer_none);
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (a_to_c), (const ::graphene_point3d_t*) (b_to_c), (const ::graphene_point3d_t*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Triangle_Ref base::TriangleBase::init_from_point3d () noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) (::graphene_triangle_t* t, const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, const ::graphene_point3d_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_init_from_point3d;
  auto c_to_c = nullptr;
  auto b_to_c = nullptr;
  auto a_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_triangle_t*) (gobj_()), (const ::graphene_point3d_t*) (a_to_c), (const ::graphene_point3d_t*) (b_to_c), (const ::graphene_point3d_t*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_vec3 (graphene_triangle_t* t /*none*/, const graphene_vec3_t* a /*none,nullable*/, const graphene_vec3_t* b /*none,nullable*/, const graphene_vec3_t* c /*none,nullable*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_vec3 (::graphene_triangle_t* t /*none*/, const ::graphene_vec3_t* a /*none,nullable*/, const ::graphene_vec3_t* b /*none,nullable*/, const ::graphene_vec3_t* c /*none,nullable*/);
Graphene::Triangle_Ref base::TriangleBase::init_from_vec3 (const Graphene::Vec3_Ref a, const Graphene::Vec3_Ref b, const Graphene::Vec3_Ref c) noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) (::graphene_triangle_t* t, const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, const ::graphene_vec3_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_init_from_vec3;
  auto c_to_c = gi::unwrap (c, gi::transfer_none);
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_triangle_t*) (gobj_()), (const ::graphene_vec3_t*) (a_to_c), (const ::graphene_vec3_t*) (b_to_c), (const ::graphene_vec3_t*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Triangle_Ref base::TriangleBase::init_from_vec3 () noexcept
{
  typedef ::graphene_triangle_t* (*call_wrap_t) (::graphene_triangle_t* t, const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, const ::graphene_vec3_t* c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_triangle_init_from_vec3;
  auto c_to_c = nullptr;
  auto b_to_c = nullptr;
  auto a_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_triangle_t*) (gobj_()), (const ::graphene_vec3_t*) (a_to_c), (const ::graphene_vec3_t*) (b_to_c), (const ::graphene_vec3_t*) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/triangle_extra_def_impl.hpp>)
#include <graphene/triangle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/triangle_extra_impl.hpp>)
#include <graphene/triangle_extra_impl.hpp>
#endif
#endif

#endif
