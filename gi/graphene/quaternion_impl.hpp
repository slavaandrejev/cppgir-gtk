// AUTO-GENERATED

#ifndef _GI_GRAPHENE_QUATERNION_IMPL_HPP_
#define _GI_GRAPHENE_QUATERNION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_quaternion_t* /*full*/ graphene_quaternion_alloc ();
// ::graphene_quaternion_t* /*full*/ graphene_quaternion_alloc ();
Graphene::Quaternion base::QuaternionBase::alloc () noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_quaternion_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_quaternion_add (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_add (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::add (const Graphene::Quaternion_Ref b, Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_add;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::add (const Graphene::Quaternion_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_add;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_quaternion_dot (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/);
// gfloat graphene_quaternion_dot (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/);
gfloat base::QuaternionBase::dot (const Graphene::Quaternion_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_dot;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_quaternion_equal (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/);
// gboolean graphene_quaternion_equal (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/);
bool base::QuaternionBase::equal (const Graphene::Quaternion_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_quaternion_free (graphene_quaternion_t* q /*none*/);
// void graphene_quaternion_free (::graphene_quaternion_t* q /*none*/);
// IGNORE; marked ignore

// graphene_quaternion_t* /*none*/ graphene_quaternion_init (graphene_quaternion_t* q /*none*/, float x, float y, float z, float w);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init (::graphene_quaternion_t* q /*none*/, gfloat x, gfloat y, gfloat z, gfloat w);
Graphene::Quaternion_Ref base::QuaternionBase::init (gfloat x, gfloat y, gfloat z, gfloat w) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, gfloat x, gfloat y, gfloat z, gfloat w);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init;
  auto w_to_c = w;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c), (gfloat) (w_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angle_vec3 (graphene_quaternion_t* q /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angle_vec3 (::graphene_quaternion_t* q /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_angle_vec3 (gfloat angle, const Graphene::Vec3_Ref axis) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, gfloat angle, const ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_angle_vec3;
  auto axis_to_c = gi::unwrap (axis, gi::transfer_none);
  auto angle_to_c = angle;
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (gfloat) (angle_to_c), (const ::graphene_vec3_t*) (axis_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angles (graphene_quaternion_t* q /*none*/, float deg_x, float deg_y, float deg_z);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angles (::graphene_quaternion_t* q /*none*/, gfloat deg_x, gfloat deg_y, gfloat deg_z);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_angles (gfloat deg_x, gfloat deg_y, gfloat deg_z) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, gfloat deg_x, gfloat deg_y, gfloat deg_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_angles;
  auto deg_z_to_c = deg_z;
  auto deg_y_to_c = deg_y;
  auto deg_x_to_c = deg_x;
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (gfloat) (deg_x_to_c), (gfloat) (deg_y_to_c), (gfloat) (deg_z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_euler (graphene_quaternion_t* q /*none*/, const graphene_euler_t* e /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_euler (::graphene_quaternion_t* q /*none*/, const ::graphene_euler_t* e /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_euler (const Graphene::Euler_Ref e) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_euler;
  auto e_to_c = gi::unwrap (e, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (const ::graphene_euler_t*) (e_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_matrix (graphene_quaternion_t* q /*none*/, const graphene_matrix_t* m /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_matrix (::graphene_quaternion_t* q /*none*/, const ::graphene_matrix_t* m /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_matrix (const Graphene::Matrix_Ref m) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_matrix;
  auto m_to_c = gi::unwrap (m, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (const ::graphene_matrix_t*) (m_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_quaternion (graphene_quaternion_t* q /*none*/, const graphene_quaternion_t* src /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_quaternion (::graphene_quaternion_t* q /*none*/, const ::graphene_quaternion_t* src /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_quaternion (const Graphene::Quaternion_Ref src) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, const ::graphene_quaternion_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_quaternion;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_radians (graphene_quaternion_t* q /*none*/, float rad_x, float rad_y, float rad_z);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_radians (::graphene_quaternion_t* q /*none*/, gfloat rad_x, gfloat rad_y, gfloat rad_z);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_radians (gfloat rad_x, gfloat rad_y, gfloat rad_z) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, gfloat rad_x, gfloat rad_y, gfloat rad_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_radians;
  auto rad_z_to_c = rad_z;
  auto rad_y_to_c = rad_y;
  auto rad_x_to_c = rad_x;
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (gfloat) (rad_x_to_c), (gfloat) (rad_y_to_c), (gfloat) (rad_z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_vec4 (graphene_quaternion_t* q /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_vec4 (::graphene_quaternion_t* q /*none*/, const ::graphene_vec4_t* src /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_from_vec4 (const Graphene::Vec4_Ref src) noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q, const ::graphene_vec4_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_from_vec4;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()), (const ::graphene_vec4_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_identity (graphene_quaternion_t* q /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_identity (::graphene_quaternion_t* q /*none*/);
Graphene::Quaternion_Ref base::QuaternionBase::init_identity () noexcept
{
  typedef ::graphene_quaternion_t* (*call_wrap_t) (::graphene_quaternion_t* q);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_init_identity;
  auto _temp_ret = call_wrap_v ((::graphene_quaternion_t*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_quaternion_invert (const graphene_quaternion_t* q /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_invert (const ::graphene_quaternion_t* q /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::invert (Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_invert;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::invert () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_invert;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_quaternion_multiply (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_multiply (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::multiply (const Graphene::Quaternion_Ref b, Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_multiply;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::multiply (const Graphene::Quaternion_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_multiply;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_quaternion_normalize (const graphene_quaternion_t* q /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_normalize (const ::graphene_quaternion_t* q /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::normalize (Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_normalize;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_quaternion_scale (const graphene_quaternion_t* q /*none*/, float factor, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_scale (const ::graphene_quaternion_t* q /*none*/, gfloat factor, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::scale (gfloat factor, Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat factor, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat factor, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_scale;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_quaternion_slerp (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, float factor, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_slerp (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, gfloat factor, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::QuaternionBase::slerp (const Graphene::Quaternion_Ref b, gfloat factor, Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, gfloat factor, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_slerp;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (gfloat) (factor_to_c), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::QuaternionBase::slerp (const Graphene::Quaternion_Ref b, gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* a, const ::graphene_quaternion_t* b, gfloat factor, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_slerp;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (const ::graphene_quaternion_t*) (b_to_c), (gfloat) (factor_to_c), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_quaternion_to_angle_vec3 (const graphene_quaternion_t* q /*none*/, float* angle, graphene_vec3_t* axis /*none,out,ca*/);
// void graphene_quaternion_to_angle_vec3 (const ::graphene_quaternion_t* q /*none*/, gfloat* angle, ::graphene_vec3_t* axis /*none,out,ca*/);
void base::QuaternionBase::to_angle_vec3 (gfloat & angle, Graphene::Vec3 & axis) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* angle, ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_angle_vec3;
  detail::allocate(axis);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(axis).gobj_()), "");
  gfloat angle_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (&angle_o), (::graphene_vec3_t*) ((::graphene_vec3_t*) (axis).gobj_()));
  angle = angle_o;
}
std::tuple<gfloat, Graphene::Vec3> base::QuaternionBase::to_angle_vec3 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* angle, ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_angle_vec3;
  Graphene::Vec3 axis_c;
  auto axis = &axis_c;
  detail::allocate(*axis);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*axis).gobj_()), "");
  gfloat angle_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (&angle_o), (::graphene_vec3_t*) (axis ? (::graphene_vec3_t*) (*axis).gobj_() : nullptr));
  auto &&tmp_return_1 = angle_o;
  auto &&tmp_return_2 = axis_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void graphene_quaternion_to_angles (const graphene_quaternion_t* q /*none*/, float* deg_x, float* deg_y, float* deg_z);
// void graphene_quaternion_to_angles (const ::graphene_quaternion_t* q /*none*/, gfloat* deg_x, gfloat* deg_y, gfloat* deg_z);
void base::QuaternionBase::to_angles (gfloat * deg_x, gfloat * deg_y, gfloat * deg_z) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* deg_x, gfloat* deg_y, gfloat* deg_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_angles;
  gfloat deg_z_o {};
  gfloat deg_y_o {};
  gfloat deg_x_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (deg_x ? &deg_x_o : nullptr), (gfloat*) (deg_y ? &deg_y_o : nullptr), (gfloat*) (deg_z ? &deg_z_o : nullptr));
  if (deg_z) *deg_z = deg_z_o;
  if (deg_y) *deg_y = deg_y_o;
  if (deg_x) *deg_x = deg_x_o;
}
std::tuple<gfloat, gfloat, gfloat> base::QuaternionBase::to_angles () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* deg_x, gfloat* deg_y, gfloat* deg_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_angles;
  gfloat deg_z_o {};
  gfloat deg_y_o {};
  gfloat deg_x_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (&deg_x_o), (gfloat*) (&deg_y_o), (gfloat*) (&deg_z_o));
  auto &&tmp_return_1 = deg_x_o;
  auto &&tmp_return_2 = deg_y_o;
  auto &&tmp_return_3 = deg_z_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void graphene_quaternion_to_matrix (const graphene_quaternion_t* q /*none*/, graphene_matrix_t* m /*none,out,ca*/);
// void graphene_quaternion_to_matrix (const ::graphene_quaternion_t* q /*none*/, ::graphene_matrix_t* m /*none,out,ca*/);
void base::QuaternionBase::to_matrix (Graphene::Matrix & m) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_matrix;
  detail::allocate(m);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(m).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (m).gobj_()));
}
Graphene::Matrix base::QuaternionBase::to_matrix () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_matrix;
  Graphene::Matrix m_c;
  auto m = &m_c;
  detail::allocate(*m);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*m).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_matrix_t*) (m ? (::graphene_matrix_t*) (*m).gobj_() : nullptr));
  return m_c;
}

// void graphene_quaternion_to_radians (const graphene_quaternion_t* q /*none*/, float* rad_x, float* rad_y, float* rad_z);
// void graphene_quaternion_to_radians (const ::graphene_quaternion_t* q /*none*/, gfloat* rad_x, gfloat* rad_y, gfloat* rad_z);
void base::QuaternionBase::to_radians (gfloat * rad_x, gfloat * rad_y, gfloat * rad_z) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* rad_x, gfloat* rad_y, gfloat* rad_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_radians;
  gfloat rad_z_o {};
  gfloat rad_y_o {};
  gfloat rad_x_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (rad_x ? &rad_x_o : nullptr), (gfloat*) (rad_y ? &rad_y_o : nullptr), (gfloat*) (rad_z ? &rad_z_o : nullptr));
  if (rad_z) *rad_z = rad_z_o;
  if (rad_y) *rad_y = rad_y_o;
  if (rad_x) *rad_x = rad_x_o;
}
std::tuple<gfloat, gfloat, gfloat> base::QuaternionBase::to_radians () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, gfloat* rad_x, gfloat* rad_y, gfloat* rad_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_radians;
  gfloat rad_z_o {};
  gfloat rad_y_o {};
  gfloat rad_x_o {};
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (gfloat*) (&rad_x_o), (gfloat*) (&rad_y_o), (gfloat*) (&rad_z_o));
  auto &&tmp_return_1 = rad_x_o;
  auto &&tmp_return_2 = rad_y_o;
  auto &&tmp_return_3 = rad_z_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void graphene_quaternion_to_vec4 (const graphene_quaternion_t* q /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_quaternion_to_vec4 (const ::graphene_quaternion_t* q /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::QuaternionBase::to_vec4 (Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_vec4;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::QuaternionBase::to_vec4 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quaternion_t* q, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quaternion_to_vec4;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_quaternion_t*) (gobj_()), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/quaternion_extra_def_impl.hpp>)
#include <graphene/quaternion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/quaternion_extra_impl.hpp>)
#include <graphene/quaternion_extra_impl.hpp>
#endif
#endif

#endif
