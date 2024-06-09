// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC3_IMPL_HPP_
#define _GI_GRAPHENE_VEC3_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_vec3_t* /*full*/ graphene_vec3_alloc ();
// ::graphene_vec3_t* /*full*/ graphene_vec3_alloc ();
Graphene::Vec3 base::Vec3Base::alloc () noexcept
{
  typedef ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_vec3_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_vec3_add (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_add (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::add (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_add;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::add (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_add;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_cross (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_cross (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::cross (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_cross;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::cross (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_cross;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_divide (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_divide (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::divide (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_divide;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::divide (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_divide;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec3_dot (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/);
// gfloat graphene_vec3_dot (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/);
gfloat base::Vec3Base::dot (const Graphene::Vec3_Ref b) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_dot;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_vec3_equal (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/);
// gboolean graphene_vec3_equal (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/);
bool base::Vec3Base::equal (const Graphene::Vec3_Ref v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec3_t* v1, const ::graphene_vec3_t* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (v2_to_c));
  return _temp_ret;
}

// void graphene_vec3_free (graphene_vec3_t* v /*none*/);
// void graphene_vec3_free (::graphene_vec3_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec3_get_x (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_x (const ::graphene_vec3_t* v /*none*/);
gfloat base::Vec3Base::get_x () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_x;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_vec3_get_xy (const graphene_vec3_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec3_get_xy (const ::graphene_vec3_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
void base::Vec3Base::get_xy (Graphene::Vec2 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xy;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec2_t*) ((::graphene_vec2_t*) (res).gobj_()));
}
Graphene::Vec2 base::Vec3Base::get_xy () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec2_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xy;
  Graphene::Vec2 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec2_t*) (res ? (::graphene_vec2_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_get_xy0 (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_get_xy0 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::get_xy0 (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xy0;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::get_xy0 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xy0;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_get_xyz0 (const graphene_vec3_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyz0 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec3Base::get_xyz0 (Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyz0;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec3Base::get_xyz0 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyz0;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_get_xyz1 (const graphene_vec3_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyz1 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec3Base::get_xyz1 (Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyz1;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec3Base::get_xyz1 () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyz1;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_get_xyzw (const graphene_vec3_t* v /*none*/, float w, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyzw (const ::graphene_vec3_t* v /*none*/, gfloat w, ::graphene_vec4_t* res /*none,out,ca*/);
void base::Vec3Base::get_xyzw (gfloat w, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, gfloat w, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyzw;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto w_to_c = w;
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (gfloat) (w_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::Vec3Base::get_xyzw (gfloat w) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, gfloat w, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_xyzw;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto w_to_c = w;
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (gfloat) (w_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec3_get_y (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_y (const ::graphene_vec3_t* v /*none*/);
gfloat base::Vec3Base::get_y () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_y;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_vec3_get_z (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_z (const ::graphene_vec3_t* v /*none*/);
gfloat base::Vec3Base::get_z () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_get_z;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()));
  return _temp_ret;
}

// graphene_vec3_t* /*none*/ graphene_vec3_init (graphene_vec3_t* v /*none*/, float x, float y, float z);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init (::graphene_vec3_t* v /*none*/, gfloat x, gfloat y, gfloat z);
Graphene::Vec3_Ref base::Vec3Base::init (gfloat x, gfloat y, gfloat z) noexcept
{
  typedef ::graphene_vec3_t* (*call_wrap_t) (::graphene_vec3_t* v, gfloat x, gfloat y, gfloat z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_init;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_vec3_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec3_t* /*none*/ graphene_vec3_init_from_float (graphene_vec3_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init_from_float (::graphene_vec3_t* v /*none*/, const gfloat* src /*none*/);
Graphene::Vec3_Ref base::Vec3Base::init_from_float (gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> src) noexcept
{
  typedef ::graphene_vec3_t* (*call_wrap_t) (::graphene_vec3_t* v, const gfloat* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_init_from_float;
  auto src_w = unwrap (std::move(src), gi::transfer_none);
  auto src_to_c = src_w;
  auto _temp_ret = call_wrap_v ((::graphene_vec3_t*) (gobj_()), (const gfloat*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_vec3_t* /*none*/ graphene_vec3_init_from_vec3 (graphene_vec3_t* v /*none*/, const graphene_vec3_t* src /*none*/);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init_from_vec3 (::graphene_vec3_t* v /*none*/, const ::graphene_vec3_t* src /*none*/);
Graphene::Vec3_Ref base::Vec3Base::init_from_vec3 (const Graphene::Vec3_Ref src) noexcept
{
  typedef ::graphene_vec3_t* (*call_wrap_t) (::graphene_vec3_t* v, const ::graphene_vec3_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_init_from_vec3;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_vec3_interpolate (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/, double factor, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_interpolate (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/, gdouble factor, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::interpolate (const Graphene::Vec3_Ref v2, gdouble factor, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v1, const ::graphene_vec3_t* v2, gdouble factor, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::interpolate (const Graphene::Vec3_Ref v2, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v1, const ::graphene_vec3_t* v2, gdouble factor, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_interpolate;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (v2_to_c), (gdouble) (factor_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_vec3_length (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_length (const ::graphene_vec3_t* v /*none*/);
gfloat base::Vec3Base::length () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_vec3_t* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_length;
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_vec3_max (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_max (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::max (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_max;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::max (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_max;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_min (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_min (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::min (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_min;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::min (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_min;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_multiply (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_multiply (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::multiply (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_multiply;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::multiply (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_multiply;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_vec3_near (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec3_near (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/, gfloat epsilon);
bool base::Vec3Base::near (const Graphene::Vec3_Ref v2, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_vec3_t* v1, const ::graphene_vec3_t* v2, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_near;
  auto epsilon_to_c = epsilon;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (v2_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_vec3_negate (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_negate (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::negate (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_negate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::negate () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_negate;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_normalize (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_normalize (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::normalize (Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_normalize;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_scale (const graphene_vec3_t* v /*none*/, float factor, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_scale (const ::graphene_vec3_t* v /*none*/, gfloat factor, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::scale (gfloat factor, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, gfloat factor, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, gfloat factor, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_scale;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_subtract (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_subtract (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::Vec3Base::subtract (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_subtract;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::Vec3Base::subtract (const Graphene::Vec3_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* a, const ::graphene_vec3_t* b, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_subtract;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (const ::graphene_vec3_t*) (b_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_vec3_to_float (const graphene_vec3_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec3_to_float (const ::graphene_vec3_t* v /*none*/, gfloat* dest /*none,out,ca*/);
void base::Vec3Base::to_float (gfloat dest[3]) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_vec3_t* v, gfloat* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_to_float;
  call_wrap_v ((const ::graphene_vec3_t*) (gobj_()), (gfloat*) (dest));
}

// const graphene_vec3_t* /*none*/ graphene_vec3_one ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_one ();
Graphene::Vec3_Ref base::Vec3Base::one () noexcept
{
  typedef const ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_one;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec3_t* /*none*/ graphene_vec3_x_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_x_axis ();
Graphene::Vec3_Ref base::Vec3Base::x_axis () noexcept
{
  typedef const ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_x_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec3_t* /*none*/ graphene_vec3_y_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_y_axis ();
Graphene::Vec3_Ref base::Vec3Base::y_axis () noexcept
{
  typedef const ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_y_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec3_t* /*none*/ graphene_vec3_z_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_z_axis ();
Graphene::Vec3_Ref base::Vec3Base::z_axis () noexcept
{
  typedef const ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_z_axis;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const graphene_vec3_t* /*none*/ graphene_vec3_zero ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_zero ();
Graphene::Vec3_Ref base::Vec3Base::zero () noexcept
{
  typedef const ::graphene_vec3_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_vec3_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec3_extra_def_impl.hpp>)
#include <graphene/vec3_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec3_extra_impl.hpp>)
#include <graphene/vec3_extra_impl.hpp>
#endif
#endif

#endif
