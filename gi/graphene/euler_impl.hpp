// AUTO-GENERATED

#ifndef _GI_GRAPHENE_EULER_IMPL_HPP_
#define _GI_GRAPHENE_EULER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_euler_t* /*full*/ graphene_euler_alloc ();
// ::graphene_euler_t* /*full*/ graphene_euler_alloc ();
Graphene::Euler base::EulerBase::alloc () noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_euler_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_euler_equal (const graphene_euler_t* a /*none*/, const graphene_euler_t* b /*none*/);
// gboolean graphene_euler_equal (const ::graphene_euler_t* a /*none*/, const ::graphene_euler_t* b /*none*/);
bool base::EulerBase::equal (const Graphene::Euler_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_euler_t* a, const ::graphene_euler_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (const ::graphene_euler_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_euler_free (graphene_euler_t* e /*none*/);
// void graphene_euler_free (::graphene_euler_t* e /*none*/);
// IGNORE; marked ignore

// float graphene_euler_get_alpha (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_alpha (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_alpha () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_alpha;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_euler_get_beta (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_beta (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_beta () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_beta;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_euler_get_gamma (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_gamma (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_gamma () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_gamma;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// graphene_euler_order_t graphene_euler_get_order (const graphene_euler_t* e /*none*/);
// ::graphene_euler_order_t graphene_euler_get_order (const ::graphene_euler_t* e /*none*/);
Graphene::EulerOrder base::EulerBase::get_order () const noexcept
{
  typedef ::graphene_euler_order_t (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_order;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// float graphene_euler_get_x (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_x (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_x () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_x;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_euler_get_y (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_y (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_y () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_y;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_euler_get_z (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_z (const ::graphene_euler_t* e /*none*/);
gfloat base::EulerBase::get_z () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_get_z;
  auto _temp_ret = call_wrap_v ((const ::graphene_euler_t*) (gobj_()));
  return _temp_ret;
}

// graphene_euler_t* /*none*/ graphene_euler_init (graphene_euler_t* e /*none*/, float x, float y, float z);
// ::graphene_euler_t* /*none*/ graphene_euler_init (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z);
Graphene::Euler_Ref base::EulerBase::init (gfloat x, gfloat y, gfloat z) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, gfloat x, gfloat y, gfloat z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_from_euler (graphene_euler_t* e /*none*/, const graphene_euler_t* src /*none,nullable*/);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_euler (::graphene_euler_t* e /*none*/, const ::graphene_euler_t* src /*none,nullable*/);
Graphene::Euler_Ref base::EulerBase::init_from_euler (const Graphene::Euler_Ref src) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_euler_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_euler;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_euler_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Euler_Ref base::EulerBase::init_from_euler () noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_euler_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_euler;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_euler_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_from_matrix (graphene_euler_t* e /*none*/, const graphene_matrix_t* m /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_matrix (::graphene_euler_t* e /*none*/, const ::graphene_matrix_t* m /*none,nullable*/, ::graphene_euler_order_t order);
Graphene::Euler_Ref base::EulerBase::init_from_matrix (const Graphene::Matrix_Ref m, Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_matrix_t* m, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_matrix;
  auto order_to_c = gi::unwrap (order);
  auto m_to_c = gi::unwrap (m, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_matrix_t*) (m_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Euler_Ref base::EulerBase::init_from_matrix (Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_matrix_t* m, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_matrix;
  auto order_to_c = gi::unwrap (order);
  auto m_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_matrix_t*) (m_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_from_quaternion (graphene_euler_t* e /*none*/, const graphene_quaternion_t* q /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_quaternion (::graphene_euler_t* e /*none*/, const ::graphene_quaternion_t* q /*none,nullable*/, ::graphene_euler_order_t order);
Graphene::Euler_Ref base::EulerBase::init_from_quaternion (const Graphene::Quaternion_Ref q, Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_quaternion_t* q, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_quaternion;
  auto order_to_c = gi::unwrap (order);
  auto q_to_c = gi::unwrap (q, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_quaternion_t*) (q_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Euler_Ref base::EulerBase::init_from_quaternion (Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_quaternion_t* q, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_quaternion;
  auto order_to_c = gi::unwrap (order);
  auto q_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_quaternion_t*) (q_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_from_radians (graphene_euler_t* e /*none*/, float x, float y, float z, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_radians (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
Graphene::Euler_Ref base::EulerBase::init_from_radians (gfloat x, gfloat y, gfloat z, Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_radians;
  auto order_to_c = gi::unwrap (order);
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_from_vec3 (graphene_euler_t* e /*none*/, const graphene_vec3_t* v /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_vec3 (::graphene_euler_t* e /*none*/, const ::graphene_vec3_t* v /*none,nullable*/, ::graphene_euler_order_t order);
Graphene::Euler_Ref base::EulerBase::init_from_vec3 (const Graphene::Vec3_Ref v, Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_vec3_t* v, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_vec3;
  auto order_to_c = gi::unwrap (order);
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_vec3_t*) (v_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Graphene::Euler_Ref base::EulerBase::init_from_vec3 (Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, const ::graphene_vec3_t* v, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_from_vec3;
  auto order_to_c = gi::unwrap (order);
  auto v_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (const ::graphene_vec3_t*) (v_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_euler_t* /*none*/ graphene_euler_init_with_order (graphene_euler_t* e /*none*/, float x, float y, float z, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_with_order (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
Graphene::Euler_Ref base::EulerBase::init_with_order (gfloat x, gfloat y, gfloat z, Graphene::EulerOrder order) noexcept
{
  typedef ::graphene_euler_t* (*call_wrap_t) (::graphene_euler_t* e, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_init_with_order;
  auto order_to_c = gi::unwrap (order);
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_euler_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c), (::graphene_euler_order_t) (order_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_euler_reorder (const graphene_euler_t* e /*none*/, graphene_euler_order_t order, graphene_euler_t* res /*none,out,ca*/);
// void graphene_euler_reorder (const ::graphene_euler_t* e /*none*/, ::graphene_euler_order_t order, ::graphene_euler_t* res /*none,out,ca*/);
void base::EulerBase::reorder (Graphene::EulerOrder order, Graphene::Euler & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_euler_order_t order, ::graphene_euler_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_reorder;
  detail::allocate(res);
  static_assert(sizeof(::graphene_euler_t) == sizeof(*(res).gobj_()), "");
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_euler_order_t) (order_to_c), (::graphene_euler_t*) ((::graphene_euler_t*) (res).gobj_()));
}
Graphene::Euler base::EulerBase::reorder (Graphene::EulerOrder order) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_euler_order_t order, ::graphene_euler_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_reorder;
  Graphene::Euler res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_euler_t) == sizeof(*(*res).gobj_()), "");
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_euler_order_t) (order_to_c), (::graphene_euler_t*) (res ? (::graphene_euler_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_euler_to_matrix (const graphene_euler_t* e /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_euler_to_matrix (const ::graphene_euler_t* e /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
void base::EulerBase::to_matrix (Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_matrix;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::EulerBase::to_matrix () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_matrix;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_euler_to_quaternion (const graphene_euler_t* e /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_euler_to_quaternion (const ::graphene_euler_t* e /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
void base::EulerBase::to_quaternion (Graphene::Quaternion & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_quaternion;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (res).gobj_()));
}
Graphene::Quaternion base::EulerBase::to_quaternion () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_quaternion_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_quaternion;
  Graphene::Quaternion res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_quaternion_t*) (res ? (::graphene_quaternion_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_euler_to_vec3 (const graphene_euler_t* e /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_euler_to_vec3 (const ::graphene_euler_t* e /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::EulerBase::to_vec3 (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_vec3;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::EulerBase::to_vec3 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_euler_t* e, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_euler_to_vec3;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_euler_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/euler_extra_def_impl.hpp>)
#include <graphene/euler_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/euler_extra_impl.hpp>)
#include <graphene/euler_extra_impl.hpp>
#endif
#endif

#endif
