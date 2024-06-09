// AUTO-GENERATED

#ifndef _GI_GRAPHENE_SIZE_IMPL_HPP_
#define _GI_GRAPHENE_SIZE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

static gfloat _field_width_get (const ::graphene_size_t* obj) { return (gfloat) obj->width; }
// gfloat Size::width (const ::graphene_size_t* obj /*none*/);
// gfloat Size::width (const ::graphene_size_t* obj /*none*/);
gfloat base::SizeBase::width_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_size_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_size_t*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::graphene_size_t* obj, gfloat _value) { obj->width = (decltype(obj->width)) _value; }
//  Size::width (::graphene_size_t* obj /*none*/, gfloat _value);
// void Size::width (::graphene_size_t* obj /*none*/, gfloat _value);
void base::SizeBase::width_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_size_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_size_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_height_get (const ::graphene_size_t* obj) { return (gfloat) obj->height; }
// gfloat Size::height (const ::graphene_size_t* obj /*none*/);
// gfloat Size::height (const ::graphene_size_t* obj /*none*/);
gfloat base::SizeBase::height_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_size_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::graphene_size_t*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::graphene_size_t* obj, gfloat _value) { obj->height = (decltype(obj->height)) _value; }
//  Size::height (::graphene_size_t* obj /*none*/, gfloat _value);
// void Size::height (::graphene_size_t* obj /*none*/, gfloat _value);
void base::SizeBase::height_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::graphene_size_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::graphene_size_t*) (gobj_()), (gfloat) (_value_to_c));
}

// graphene_size_t* /*full*/ graphene_size_alloc ();
// ::graphene_size_t* /*full*/ graphene_size_alloc ();
Graphene::Size base::SizeBase::alloc () noexcept
{
  typedef ::graphene_size_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_size_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_size_equal (const graphene_size_t* a /*none*/, const graphene_size_t* b /*none*/);
// gboolean graphene_size_equal (const ::graphene_size_t* a /*none*/, const ::graphene_size_t* b /*none*/);
bool base::SizeBase::equal (const Graphene::Size_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_size_t* a, const ::graphene_size_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_size_t*) (gobj_()), (const ::graphene_size_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_size_free (graphene_size_t* s /*none*/);
// void graphene_size_free (::graphene_size_t* s /*none*/);
// IGNORE; marked ignore

// graphene_size_t* /*none*/ graphene_size_init (graphene_size_t* s /*none*/, float width, float height);
// ::graphene_size_t* /*none*/ graphene_size_init (::graphene_size_t* s /*none*/, gfloat width, gfloat height);
Graphene::Size_Ref base::SizeBase::init (gfloat width, gfloat height) noexcept
{
  typedef ::graphene_size_t* (*call_wrap_t) (::graphene_size_t* s, gfloat width, gfloat height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_init;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::graphene_size_t*) (gobj_()), (gfloat) (width_to_c), (gfloat) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_size_t* /*none*/ graphene_size_init_from_size (graphene_size_t* s /*none*/, const graphene_size_t* src /*none*/);
// ::graphene_size_t* /*none*/ graphene_size_init_from_size (::graphene_size_t* s /*none*/, const ::graphene_size_t* src /*none*/);
Graphene::Size_Ref base::SizeBase::init_from_size (const Graphene::Size_Ref src) noexcept
{
  typedef ::graphene_size_t* (*call_wrap_t) (::graphene_size_t* s, const ::graphene_size_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_init_from_size;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_size_t*) (gobj_()), (const ::graphene_size_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_size_interpolate (const graphene_size_t* a /*none*/, const graphene_size_t* b /*none*/, double factor, graphene_size_t* res /*none,out,ca*/);
// void graphene_size_interpolate (const ::graphene_size_t* a /*none*/, const ::graphene_size_t* b /*none*/, gdouble factor, ::graphene_size_t* res /*none,out,ca*/);
void base::SizeBase::interpolate (const Graphene::Size_Ref b, gdouble factor, Graphene::Size & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_size_t* a, const ::graphene_size_t* b, gdouble factor, ::graphene_size_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_size_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_size_t*) (gobj_()), (const ::graphene_size_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_size_t*) ((::graphene_size_t*) (res).gobj_()));
}
Graphene::Size base::SizeBase::interpolate (const Graphene::Size_Ref b, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_size_t* a, const ::graphene_size_t* b, gdouble factor, ::graphene_size_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_interpolate;
  Graphene::Size res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_size_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_size_t*) (gobj_()), (const ::graphene_size_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_size_t*) (res ? (::graphene_size_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_size_scale (const graphene_size_t* s /*none*/, float factor, graphene_size_t* res /*none,out,ca*/);
// void graphene_size_scale (const ::graphene_size_t* s /*none*/, gfloat factor, ::graphene_size_t* res /*none,out,ca*/);
void base::SizeBase::scale (gfloat factor, Graphene::Size & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_size_t* s, gfloat factor, ::graphene_size_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_size_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_size_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_size_t*) ((::graphene_size_t*) (res).gobj_()));
}
Graphene::Size base::SizeBase::scale (gfloat factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_size_t* s, gfloat factor, ::graphene_size_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_scale;
  Graphene::Size res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_size_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  call_wrap_v ((const ::graphene_size_t*) (gobj_()), (gfloat) (factor_to_c), (::graphene_size_t*) (res ? (::graphene_size_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// const graphene_size_t* /*none*/ graphene_size_zero ();
// const ::graphene_size_t* /*none*/ graphene_size_zero ();
Graphene::Size_Ref base::SizeBase::zero () noexcept
{
  typedef const ::graphene_size_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_size_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/size_extra_def_impl.hpp>)
#include <graphene/size_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/size_extra_impl.hpp>)
#include <graphene/size_extra_impl.hpp>
#endif
#endif

#endif
