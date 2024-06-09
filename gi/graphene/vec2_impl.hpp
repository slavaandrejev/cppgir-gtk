// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC2_IMPL_HPP_
#define _GI_GRAPHENE_VEC2_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_vec2_t* /*full*/ graphene_vec2_alloc ();
// ::graphene_vec2_t* /*full*/ graphene_vec2_alloc ();
Graphene::Vec2 base::Vec2Base::alloc () noexcept
{
  typedef ::graphene_vec2_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_vec2_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_vec2_add (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_add (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::add (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_add;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::add (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_add;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_divide (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_divide (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::divide (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_divide;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::divide (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_divide;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec2_dot (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/);
// gfloat graphene_vec2_dot (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/);
gfloat base::Vec2Base::dot (const Graphene::Vec2_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_dot;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_vec2_equal (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/);
// gboolean graphene_vec2_equal (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/);
bool base::Vec2Base::equal (const Graphene::Vec2_Ref v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec2_t* v1, const ::graphene_vec2_t* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (v2_to_c));
  return _temp_ret;
}

// void graphene_vec2_free (graphene_vec2_t* v /*none*/);
// void graphene_vec2_free (::graphene_vec2_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec2_get_x (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_get_x (const ::graphene_vec2_t* v /*none*/);
gfloat base::Vec2Base::get_x () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec2_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_get_x;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_vec2_get_y (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_get_y (const ::graphene_vec2_t* v /*none*/);
gfloat base::Vec2Base::get_y () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec2_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_get_y;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()));
  return _temp_ret;
}

// graphene_vec2_t* /*none*/ graphene_vec2_init (graphene_vec2_t* v /*none*/, float x, float y);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init (::graphene_vec2_t* v /*none*/, gfloat x, gfloat y);
Graphene::Vec2_Ref base::Vec2Base::init (gfloat x, gfloat y) noexcept
{
  typedef ::graphene_vec2_t* (*call_wrap_t) (::graphene_vec2_t* v, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_init;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_vec2_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec2_t* /*none*/ graphene_vec2_init_from_float (graphene_vec2_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init_from_float (::graphene_vec2_t* v /*none*/, const gfloat* src /*none*/);
Graphene::Vec2_Ref base::Vec2Base::init_from_float (gi::CollectionParameter<gi::FSpan<2>, gfloat, gi::transfer_none_t> src) noexcept
{
  typedef ::graphene_vec2_t* (*call_wrap_t) (::graphene_vec2_t* v, const gfloat* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_init_from_float;
  auto src_w = unwrap (std::move(src), gi::transfer_none);
  auto src_to_c = src_w;
  auto _temp_ret = call_wrap_v ((::graphene_vec2_t*) (gobj_()), (const gfloat*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec2_t* /*none*/ graphene_vec2_init_from_vec2 (graphene_vec2_t* v /*none*/, const graphene_vec2_t* src /*none*/);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init_from_vec2 (::graphene_vec2_t* v /*none*/, const ::graphene_vec2_t* src /*none*/);
Graphene::Vec2_Ref base::Vec2Base::init_from_vec2 (const Graphene::Vec2_Ref src) noexcept
{
  typedef ::graphene_vec2_t* (*call_wrap_t) (::graphene_vec2_t* v, const ::graphene_vec2_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_init_from_vec2;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_vec2_interpolate (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/, double factor, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_interpolate (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/, gdouble factor, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::interpolate (const Graphene::Vec2_Ref v2, gdouble factor, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v1, const ::graphene_vec2_t* v2, gdouble factor, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::interpolate (const Graphene::Vec2_Ref v2, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v1, const ::graphene_vec2_t* v2, gdouble factor, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_interpolate;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec2_length (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_length (const ::graphene_vec2_t* v /*none*/);
gfloat base::Vec2Base::length () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec2_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_length;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_vec2_max (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_max (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::max (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_max;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::max (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_max;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_min (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_min (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::min (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_min;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::min (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_min;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_multiply (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_multiply (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::multiply (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_multiply;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::multiply (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_multiply;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_vec2_near (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec2_near (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/, gfloat epsilon);
bool base::Vec2Base::near (const Graphene::Vec2_Ref v2, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec2_t* v1, const ::graphene_vec2_t* v2, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_near;
  auto epsilon_to_c = epsilon;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (v2_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_vec2_negate (const graphene_vec2_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_negate (const ::graphene_vec2_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::negate (Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_negate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::negate () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_negate;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_normalize (const graphene_vec2_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_normalize (const ::graphene_vec2_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::normalize (Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_normalize;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_scale (const graphene_vec2_t* v /*none*/, float factor, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_scale (const ::graphene_vec2_t* v /*none*/, gfloat factor, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::scale (gfloat factor, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, gfloat factor, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, gfloat factor, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_scale;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_subtract (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_subtract (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec2Base::subtract (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_subtract;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec2Base::subtract (const Graphene::Vec2_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* a, const ::graphene_vec2_t* b, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_subtract;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (const ::graphene_vec2_t*) (b_to_c), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec2_to_float (const graphene_vec2_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec2_to_float (const ::graphene_vec2_t* v /*none*/, gfloat* dest /*none,out,ca*/);
void base::Vec2Base::to_float (gfloat dest[2]) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec2_t* v, gfloat* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_to_float;
  call_wrap_v ((const ::graphene_vec2_t*) (gobj_()), (gfloat*) (dest));
}

// const graphene_vec2_t* /*none*/ graphene_vec2_one ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_one ();
Graphene::Vec2_Ref base::Vec2Base::one () noexcept
{
  typedef const ::graphene_vec2_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec2_t* /*none*/ graphene_vec2_x_axis ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_x_axis ();
Graphene::Vec2_Ref base::Vec2Base::x_axis () noexcept
{
  typedef const ::graphene_vec2_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_x_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec2_t* /*none*/ graphene_vec2_y_axis ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_y_axis ();
Graphene::Vec2_Ref base::Vec2Base::y_axis () noexcept
{
  typedef const ::graphene_vec2_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_y_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec2_t* /*none*/ graphene_vec2_zero ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_zero ();
Graphene::Vec2_Ref base::Vec2Base::zero () noexcept
{
  typedef const ::graphene_vec2_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec2_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec2_extra_def_impl.hpp>)
#include <graphene/vec2_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec2_extra_impl.hpp>)
#include <graphene/vec2_extra_impl.hpp>
#endif
#endif

#endif
