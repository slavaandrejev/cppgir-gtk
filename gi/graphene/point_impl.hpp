// AUTO-GENERATED

#ifndef _GI_GRAPHENE_POINT_IMPL_HPP_
#define _GI_GRAPHENE_POINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

static gfloat _field_x_get (const ::graphene_point_t* obj) { return (gfloat) obj->x; }
// gfloat Point::x (const ::graphene_point_t* obj /*none*/);
// gfloat Point::x (const ::graphene_point_t* obj /*none*/);
gfloat base::PointBase::x_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::graphene_point_t* obj, gfloat _value) { obj->x = (decltype(obj->x)) _value; }
//  Point::x (::graphene_point_t* obj /*none*/, gfloat _value);
// void Point::x (::graphene_point_t* obj /*none*/, gfloat _value);
void base::PointBase::x_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_point_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_point_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_y_get (const ::graphene_point_t* obj) { return (gfloat) obj->y; }
// gfloat Point::y (const ::graphene_point_t* obj /*none*/);
// gfloat Point::y (const ::graphene_point_t* obj /*none*/);
gfloat base::PointBase::y_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::graphene_point_t* obj, gfloat _value) { obj->y = (decltype(obj->y)) _value; }
//  Point::y (::graphene_point_t* obj /*none*/, gfloat _value);
// void Point::y (::graphene_point_t* obj /*none*/, gfloat _value);
void base::PointBase::y_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_point_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_point_t*) (gobj_()), (gfloat) (_value_to_c));
}

// graphene_point_t* /*full*/ graphene_point_alloc ();
// ::graphene_point_t* /*full*/ graphene_point_alloc ();
Graphene::Point base::PointBase::alloc () noexcept
{
  typedef ::graphene_point_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_point_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// float graphene_point_distance (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, float* d_x, float* d_y);
// gfloat graphene_point_distance (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gfloat* d_x, gfloat* d_y);
gfloat base::PointBase::distance (const Graphene::Point_Ref b, gfloat * d_x, gfloat * d_y) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b, gfloat* d_x, gfloat* d_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_distance;
  gfloat d_y_o {};
  gfloat d_x_o {};
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c), (gfloat*) (d_x ? &d_x_o : nullptr), (gfloat*) (d_y ? &d_y_o : nullptr));
  if (d_y) *d_y = d_y_o;
  if (d_x) *d_x = d_x_o;
  return _temp_ret;
}
std::tuple<gfloat, gfloat, gfloat> base::PointBase::distance (const Graphene::Point_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b, gfloat* d_x, gfloat* d_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_distance;
  gfloat d_y_o {};
  gfloat d_x_o {};
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c), (gfloat*) (&d_x_o), (gfloat*) (&d_y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = d_x_o;
  auto &&tmp_return_3 = d_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// _Bool graphene_point_equal (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/);
// gboolean graphene_point_equal (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/);
bool base::PointBase::equal (const Graphene::Point_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_point_free (graphene_point_t* p /*none*/);
// void graphene_point_free (::graphene_point_t* p /*none*/);
// IGNORE; marked ignore

// graphene_point_t* /*none*/ graphene_point_init (graphene_point_t* p /*none*/, float x, float y);
// ::graphene_point_t* /*none*/ graphene_point_init (::graphene_point_t* p /*none*/, gfloat x, gfloat y);
Graphene::Point_Ref base::PointBase::init (gfloat x, gfloat y) noexcept
{
  typedef ::graphene_point_t* (*call_wrap_t) (::graphene_point_t* p, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_init;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_point_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_point_t* /*none*/ graphene_point_init_from_point (graphene_point_t* p /*none*/, const graphene_point_t* src /*none*/);
// ::graphene_point_t* /*none*/ graphene_point_init_from_point (::graphene_point_t* p /*none*/, const ::graphene_point_t* src /*none*/);
Graphene::Point_Ref base::PointBase::init_from_point (const Graphene::Point_Ref src) noexcept
{
  typedef ::graphene_point_t* (*call_wrap_t) (::graphene_point_t* p, const ::graphene_point_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_init_from_point;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_point_t* /*none*/ graphene_point_init_from_vec2 (graphene_point_t* p /*none*/, const graphene_vec2_t* src /*none*/);
// ::graphene_point_t* /*none*/ graphene_point_init_from_vec2 (::graphene_point_t* p /*none*/, const ::graphene_vec2_t* src /*none*/);
Graphene::Point_Ref base::PointBase::init_from_vec2 (const Graphene::Vec2_Ref src) noexcept
{
  typedef ::graphene_point_t* (*call_wrap_t) (::graphene_point_t* p, const ::graphene_vec2_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_init_from_vec2;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_point_t*) (gobj_()), (const ::graphene_vec2_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_point_interpolate (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, double factor, graphene_point_t* res /*none,out,ca*/);
// void graphene_point_interpolate (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gdouble factor, ::graphene_point_t* res /*none,out,ca*/);
void base::PointBase::interpolate (const Graphene::Point_Ref b, gdouble factor, Graphene::Point & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b, gdouble factor, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_point_t*) ((::graphene_point_t*) (res).gobj_()));
}
Graphene::Point base::PointBase::interpolate (const Graphene::Point_Ref b, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b, gdouble factor, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_interpolate;
  Graphene::Point res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_point_t*) (res ? (::graphene_point_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_point_near (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, float epsilon);
// gboolean graphene_point_near (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gfloat epsilon);
bool base::PointBase::near (const Graphene::Point_Ref b, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_point_t* a, const ::graphene_point_t* b, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_near;
  auto epsilon_to_c = epsilon;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_point_t*) (gobj_()), (const ::graphene_point_t*) (b_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_point_to_vec2 (const graphene_point_t* p /*none*/, graphene_vec2_t* v /*none,out,ca*/);
// void graphene_point_to_vec2 (const ::graphene_point_t* p /*none*/, ::graphene_vec2_t* v /*none,out,ca*/);
void base::PointBase::to_vec2 (Graphene::Vec2 & v) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point_t* p, ::graphene_vec2_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_to_vec2;
  detail::allocate(v);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(v).gobj_()), "");
  call_wrap_v ((const ::graphene_point_t*) (gobj_()), (::graphene_vec2_t*) ((::graphene_vec2_t*) (v).gobj_()));
}
Graphene::Vec2 base::PointBase::to_vec2 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_point_t* p, ::graphene_vec2_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_to_vec2;
  Graphene::Vec2 v_c;
  auto v = &v_c;
  detail::allocate(*v);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*v).gobj_()), "");
  call_wrap_v ((const ::graphene_point_t*) (gobj_()), (::graphene_vec2_t*) (v ? (::graphene_vec2_t*) (*v).gobj_() : nullptr));
  return v_c;
}

// const graphene_point_t* /*none*/ graphene_point_zero ();
// const ::graphene_point_t* /*none*/ graphene_point_zero ();
Graphene::Point_Ref base::PointBase::zero () noexcept
{
  typedef const ::graphene_point_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_point_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/point_extra_def_impl.hpp>)
#include <graphene/point_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/point_extra_impl.hpp>)
#include <graphene/point_extra_impl.hpp>
#endif
#endif

#endif
