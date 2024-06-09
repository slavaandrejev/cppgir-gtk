// AUTO-GENERATED

#ifndef _GI_GRAPHENE_POINT3D_IMPL_HPP_
#define _GI_GRAPHENE_POINT3D_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

static gfloat _field_x_get (const ::graphene_point3d_t* obj) { return (gfloat) obj->x; }
// gfloat Point3D::x (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::x (const ::graphene_point3d_t* obj /*none*/);
gfloat base::Point3DBase::x_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::graphene_point3d_t* obj, gfloat _value) { obj->x = (decltype(obj->x)) _value; }
//  Point3D::x (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::x (::graphene_point3d_t* obj /*none*/, gfloat _value);
void base::Point3DBase::x_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_point3d_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_point3d_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_y_get (const ::graphene_point3d_t* obj) { return (gfloat) obj->y; }
// gfloat Point3D::y (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::y (const ::graphene_point3d_t* obj /*none*/);
gfloat base::Point3DBase::y_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::graphene_point3d_t* obj, gfloat _value) { obj->y = (decltype(obj->y)) _value; }
//  Point3D::y (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::y (::graphene_point3d_t* obj /*none*/, gfloat _value);
void base::Point3DBase::y_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_point3d_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_point3d_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_z_get (const ::graphene_point3d_t* obj) { return (gfloat) obj->z; }
// gfloat Point3D::z (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::z (const ::graphene_point3d_t* obj /*none*/);
gfloat base::Point3DBase::z_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_z_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()));
  return _temp_ret;
}

static void _field_z_set (::graphene_point3d_t* obj, gfloat _value) { obj->z = (decltype(obj->z)) _value; }
//  Point3D::z (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::z (::graphene_point3d_t* obj /*none*/, gfloat _value);
void base::Point3DBase::z_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_point3d_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_z_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_point3d_t*) (gobj_()), (gfloat) (_value_to_c));
}

// graphene_point3d_t* /*full*/ graphene_point3d_alloc ();
// ::graphene_point3d_t* /*full*/ graphene_point3d_alloc ();
Graphene::Point3D base::Point3DBase::alloc () noexcept
{
  typedef ::graphene_point3d_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_point3d_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_point3d_cross (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_cross (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::Point3DBase::cross (const Graphene::Point3D_Ref b, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_cross;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::Point3DBase::cross (const Graphene::Point3D_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_cross;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_point3d_distance (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, graphene_vec3_t* delta /*none,out,opt,ca*/);
// gfloat graphene_point3d_distance (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, ::graphene_vec3_t* delta /*none,out,opt,ca*/);
gfloat base::Point3DBase::distance (const Graphene::Point3D_Ref b, Graphene::Vec3 * delta) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, ::graphene_vec3_t* delta);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_distance;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*delta).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (::graphene_vec3_t*) (delta ? (::graphene_vec3_t*) (*delta).gobj_() : nullptr));
  return _temp_ret;
}
std::tuple<gfloat, Graphene::Vec3> base::Point3DBase::distance (const Graphene::Point3D_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, ::graphene_vec3_t* delta);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_distance;
  Graphene::Vec3 delta_c;
  auto delta = &delta_c;
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*delta).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (::graphene_vec3_t*) (delta ? (::graphene_vec3_t*) (*delta).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = delta_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// float graphene_point3d_dot (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/);
// gfloat graphene_point3d_dot (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/);
gfloat base::Point3DBase::dot (const Graphene::Point3D_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_dot;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_point3d_equal (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/);
// gboolean graphene_point3d_equal (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/);
bool base::Point3DBase::equal (const Graphene::Point3D_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_point3d_free (graphene_point3d_t* p /*none*/);
// void graphene_point3d_free (::graphene_point3d_t* p /*none*/);
// IGNORE; marked ignore

// graphene_point3d_t* /*none*/ graphene_point3d_init (graphene_point3d_t* p /*none*/, float x, float y, float z);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init (::graphene_point3d_t* p /*none*/, gfloat x, gfloat y, gfloat z);
Graphene::Point3D_Ref base::Point3DBase::init (gfloat x, gfloat y, gfloat z) noexcept
{
  typedef ::graphene_point3d_t* (*call_wrap_t) (::graphene_point3d_t* p, gfloat x, gfloat y, gfloat z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_init;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_point3d_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_point3d_t* /*none*/ graphene_point3d_init_from_point (graphene_point3d_t* p /*none*/, const graphene_point3d_t* src /*none*/);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init_from_point (::graphene_point3d_t* p /*none*/, const ::graphene_point3d_t* src /*none*/);
Graphene::Point3D_Ref base::Point3DBase::init_from_point (const Graphene::Point3D_Ref src) noexcept
{
  typedef ::graphene_point3d_t* (*call_wrap_t) (::graphene_point3d_t* p, const ::graphene_point3d_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_init_from_point;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_point3d_t* /*none*/ graphene_point3d_init_from_vec3 (graphene_point3d_t* p /*none*/, const graphene_vec3_t* v /*none*/);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init_from_vec3 (::graphene_point3d_t* p /*none*/, const ::graphene_vec3_t* v /*none*/);
Graphene::Point3D_Ref base::Point3DBase::init_from_vec3 (const Graphene::Vec3_Ref v) noexcept
{
  typedef ::graphene_point3d_t* (*call_wrap_t) (::graphene_point3d_t* p, const ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_init_from_vec3;
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_point3d_t*) (gobj_()), (const ::graphene_vec3_t*) (v_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_point3d_interpolate (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, double factor, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_interpolate (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, gdouble factor, ::graphene_point3d_t* res /*none,out,ca*/);
void base::Point3DBase::interpolate (const Graphene::Point3D_Ref b, gdouble factor, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, gdouble factor, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::Point3DBase::interpolate (const Graphene::Point3D_Ref b, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, gdouble factor, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_interpolate;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_point3d_length (const graphene_point3d_t* p /*none*/);
// gfloat graphene_point3d_length (const ::graphene_point3d_t* p /*none*/);
gfloat base::Point3DBase::length () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point3d_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_length;
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_point3d_near (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, float epsilon);
// gboolean graphene_point3d_near (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, gfloat epsilon);
bool base::Point3DBase::near (const Graphene::Point3D_Ref b, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_point3d_t* a, const ::graphene_point3d_t* b, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_near;
  auto epsilon_to_c = epsilon;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_point3d_t*) (b_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_point3d_normalize (const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_normalize (const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::Point3DBase::normalize (Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::Point3DBase::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_normalize;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_point3d_normalize_viewport (const graphene_point3d_t* p /*none*/, const graphene_rect_t* viewport /*none*/, float z_near, float z_far, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_normalize_viewport (const ::graphene_point3d_t* p /*none*/, const ::graphene_rect_t* viewport /*none*/, gfloat z_near, gfloat z_far, ::graphene_point3d_t* res /*none,out,ca*/);
void base::Point3DBase::normalize_viewport (const Graphene::Rect_Ref viewport, gfloat z_near, gfloat z_far, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, const ::graphene_rect_t* viewport, gfloat z_near, gfloat z_far, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_normalize_viewport;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto z_far_to_c = z_far;
  auto z_near_to_c = z_near;
  auto viewport_to_c = gi::unwrap (viewport, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_rect_t*) (viewport_to_c), (gfloat) (z_near_to_c), (gfloat) (z_far_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::Point3DBase::normalize_viewport (const Graphene::Rect_Ref viewport, gfloat z_near, gfloat z_far) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, const ::graphene_rect_t* viewport, gfloat z_near, gfloat z_far, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_normalize_viewport;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto z_far_to_c = z_far;
  auto z_near_to_c = z_near;
  auto viewport_to_c = gi::unwrap (viewport, gi::transfer_none);
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (const ::graphene_rect_t*) (viewport_to_c), (gfloat) (z_near_to_c), (gfloat) (z_far_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_point3d_scale (const graphene_point3d_t* p /*none*/, float factor, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_scale (const ::graphene_point3d_t* p /*none*/, gfloat factor, ::graphene_point3d_t* res /*none,out,ca*/);
void base::Point3DBase::scale (gfloat factor, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, gfloat factor, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::Point3DBase::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, gfloat factor, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_scale;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_point3d_to_vec3 (const graphene_point3d_t* p /*none*/, graphene_vec3_t* v /*none,out,ca*/);
// void graphene_point3d_to_vec3 (const ::graphene_point3d_t* p /*none*/, ::graphene_vec3_t* v /*none,out,ca*/);
void base::Point3DBase::to_vec3 (Graphene::Vec3 & v) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_to_vec3;
  detail::allocate(v);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(v).gobj_()), "");
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (v).gobj_()));
}
Graphene::Vec3 base::Point3DBase::to_vec3 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point3d_t* p, ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_to_vec3;
  Graphene::Vec3 v_c;
  auto v = &v_c;
  detail::allocate(*v);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*v).gobj_()), "");
  call_wrap_v ((const ::graphene_point3d_t*) (gobj_()), (::graphene_vec3_t*) (v ? (::graphene_vec3_t*) (*v).gobj_() : nullptr));
  return v_c;
}

// const graphene_point3d_t* /*none*/ graphene_point3d_zero ();
// const ::graphene_point3d_t* /*none*/ graphene_point3d_zero ();
Graphene::Point3D_Ref base::Point3DBase::zero () noexcept
{
  typedef const ::graphene_point3d_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point3d_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/point3d_extra_def_impl.hpp>)
#include <graphene/point3d_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/point3d_extra_impl.hpp>)
#include <graphene/point3d_extra_impl.hpp>
#endif
#endif

#endif
