// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC4_IMPL_HPP_
#define _GI_GRAPHENE_VEC4_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_vec4_t* /*full*/ graphene_vec4_alloc ();
// ::graphene_vec4_t* /*full*/ graphene_vec4_alloc ();
Graphene::Vec4 base::Vec4Base::alloc () noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_vec4_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_vec4_add (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_add (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::add (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_add;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::add (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_add;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_divide (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_divide (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::divide (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_divide;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::divide (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_divide;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec4_dot (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/);
// gfloat graphene_vec4_dot (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/);
gfloat base::Vec4Base::dot (const Graphene::Vec4_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_dot;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_vec4_equal (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/);
// gboolean graphene_vec4_equal (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/);
bool base::Vec4Base::equal (const Graphene::Vec4_Ref v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec4_t* v1, const ::graphene_vec4_t* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (v2_to_c));
  return _temp_ret;
}

// void graphene_vec4_free (graphene_vec4_t* v /*none*/);
// void graphene_vec4_free (::graphene_vec4_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec4_get_w (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_w (const ::graphene_vec4_t* v /*none*/);
gfloat base::Vec4Base::get_w () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_w;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_vec4_get_x (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_x (const ::graphene_vec4_t* v /*none*/);
gfloat base::Vec4Base::get_x () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_x;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_vec4_get_xy (const graphene_vec4_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec4_get_xy (const ::graphene_vec4_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec4Base::get_xy (Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_xy;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec4Base::get_xy () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_xy;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_get_xyz (const graphene_vec4_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec4_get_xyz (const ::graphene_vec4_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec4Base::get_xyz (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_xyz;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec4Base::get_xyz () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_xyz;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec4_get_y (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_y (const ::graphene_vec4_t* v /*none*/);
gfloat base::Vec4Base::get_y () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_y;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_vec4_get_z (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_z (const ::graphene_vec4_t* v /*none*/);
gfloat base::Vec4Base::get_z () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_get_z;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()));
  return _temp_ret;
}

// graphene_vec4_t* /*none*/ graphene_vec4_init (graphene_vec4_t* v /*none*/, float x, float y, float z, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init (::graphene_vec4_t* v /*none*/, gfloat x, gfloat y, gfloat z, gfloat w);
Graphene::Vec4_Ref base::Vec4Base::init (gfloat x, gfloat y, gfloat z, gfloat w) noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) (::graphene_vec4_t* v, gfloat x, gfloat y, gfloat z, gfloat w);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_init;
  auto w_to_c = w;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_vec4_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c), (gfloat) (w_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_float (graphene_vec4_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_float (::graphene_vec4_t* v /*none*/, const gfloat* src /*none*/);
Graphene::Vec4_Ref base::Vec4Base::init_from_float (gi::CollectionParameter<gi::FSpan<4>, gfloat, gi::transfer_none_t> src) noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) (::graphene_vec4_t* v, const gfloat* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_init_from_float;
  auto src_w = unwrap (std::move(src), gi::transfer_none);
  auto src_to_c = src_w;
  auto _temp_ret = call_wrap_v ((::graphene_vec4_t*) (gobj_()), (const gfloat*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec2 (graphene_vec4_t* v /*none*/, const graphene_vec2_t* src /*none*/, float z, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec2 (::graphene_vec4_t* v /*none*/, const ::graphene_vec2_t* src /*none*/, gfloat z, gfloat w);
Graphene::Vec4_Ref base::Vec4Base::init_from_vec2 (const Graphene::Vec2_Ref src, gfloat z, gfloat w) noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) (::graphene_vec4_t* v, const ::graphene_vec2_t* src, gfloat z, gfloat w);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_init_from_vec2;
  auto w_to_c = w;
  auto z_to_c = z;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_vec4_t*) (gobj_()), (const ::graphene_vec2_t*) (src_to_c), (gfloat) (z_to_c), (gfloat) (w_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec3 (graphene_vec4_t* v /*none*/, const graphene_vec3_t* src /*none*/, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec3 (::graphene_vec4_t* v /*none*/, const ::graphene_vec3_t* src /*none*/, gfloat w);
Graphene::Vec4_Ref base::Vec4Base::init_from_vec3 (const Graphene::Vec3_Ref src, gfloat w) noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) (::graphene_vec4_t* v, const ::graphene_vec3_t* src, gfloat w);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_init_from_vec3;
  auto w_to_c = w;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_vec4_t*) (gobj_()), (const ::graphene_vec3_t*) (src_to_c), (gfloat) (w_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec4 (graphene_vec4_t* v /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec4 (::graphene_vec4_t* v /*none*/, const ::graphene_vec4_t* src /*none*/);
Graphene::Vec4_Ref base::Vec4Base::init_from_vec4 (const Graphene::Vec4_Ref src) noexcept
{
  typedef ::graphene_vec4_t* (*call_wrap_t) (::graphene_vec4_t* v, const ::graphene_vec4_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_init_from_vec4;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_vec4_interpolate (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, double factor, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_interpolate (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, gdouble factor, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::interpolate (const Graphene::Vec4_Ref v2, gdouble factor, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v1, const ::graphene_vec4_t* v2, gdouble factor, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::interpolate (const Graphene::Vec4_Ref v2, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v1, const ::graphene_vec4_t* v2, gdouble factor, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_interpolate;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec4_length (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_length (const ::graphene_vec4_t* v /*none*/);
gfloat base::Vec4Base::length () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec4_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_length;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_vec4_max (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_max (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::max (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_max;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::max (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_max;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_min (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_min (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::min (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_min;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::min (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_min;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_multiply (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_multiply (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::multiply (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_multiply;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::multiply (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_multiply;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_vec4_near (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec4_near (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, gfloat epsilon);
bool base::Vec4Base::near (const Graphene::Vec4_Ref v2, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec4_t* v1, const ::graphene_vec4_t* v2, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_near;
  auto epsilon_to_c = epsilon;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (v2_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_vec4_negate (const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_negate (const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::negate (Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_negate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::negate () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_negate;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_normalize (const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_normalize (const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::normalize (Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_normalize;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_scale (const graphene_vec4_t* v /*none*/, float factor, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_scale (const ::graphene_vec4_t* v /*none*/, gfloat factor, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::scale (gfloat factor, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, gfloat factor, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, gfloat factor, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_scale;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_subtract (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_subtract (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec4Base::subtract (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_subtract;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec4Base::subtract (const Graphene::Vec4_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* a, const ::graphene_vec4_t* b, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_subtract;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (const ::graphene_vec4_t*) (b_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec4_to_float (const graphene_vec4_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec4_to_float (const ::graphene_vec4_t* v /*none*/, gfloat* dest /*none,out,ca*/);
void base::Vec4Base::to_float (gfloat dest[4]) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec4_t* v, gfloat* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_to_float;
  call_wrap_v ((const ::graphene_vec4_t*) (gobj_()), (gfloat*) (dest));
}

// const graphene_vec4_t* /*none*/ graphene_vec4_one ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_one ();
Graphene::Vec4_Ref base::Vec4Base::one () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec4_t* /*none*/ graphene_vec4_w_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_w_axis ();
Graphene::Vec4_Ref base::Vec4Base::w_axis () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_w_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec4_t* /*none*/ graphene_vec4_x_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_x_axis ();
Graphene::Vec4_Ref base::Vec4Base::x_axis () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_x_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec4_t* /*none*/ graphene_vec4_y_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_y_axis ();
Graphene::Vec4_Ref base::Vec4Base::y_axis () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_y_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec4_t* /*none*/ graphene_vec4_z_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_z_axis ();
Graphene::Vec4_Ref base::Vec4Base::z_axis () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_z_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec4_t* /*none*/ graphene_vec4_zero ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_zero ();
Graphene::Vec4_Ref base::Vec4Base::zero () noexcept
{
  typedef const ::graphene_vec4_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec4_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec4_extra_def_impl.hpp>)
#include <graphene/vec4_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec4_extra_impl.hpp>)
#include <graphene/vec4_extra_impl.hpp>
#endif
#endif

#endif
