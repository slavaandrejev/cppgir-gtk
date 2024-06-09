// AUTO-GENERATED

#ifndef _GI_GSK_SHADOW_IMPL_HPP_
#define _GI_GSK_SHADOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

static gfloat _field_dx_get (const ::GskShadow* obj) { return (gfloat) obj->dx; }
// gfloat Shadow::dx (const ::GskShadow* obj /*none*/);
// gfloat Shadow::dx (const ::GskShadow* obj /*none*/);
gfloat base::ShadowBase::dx_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskShadow* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_get;
  auto _temp_ret = call_wrap_v ((const ::GskShadow*) (gobj_()));
  return _temp_ret;
}

static void _field_dx_set (::GskShadow* obj, gfloat _value) { obj->dx = (decltype(obj->dx)) _value; }
//  Shadow::dx (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::dx (::GskShadow* obj /*none*/, gfloat _value);
void base::ShadowBase::dx_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GskShadow* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GskShadow*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_dy_get (const ::GskShadow* obj) { return (gfloat) obj->dy; }
// gfloat Shadow::dy (const ::GskShadow* obj /*none*/);
// gfloat Shadow::dy (const ::GskShadow* obj /*none*/);
gfloat base::ShadowBase::dy_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskShadow* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_get;
  auto _temp_ret = call_wrap_v ((const ::GskShadow*) (gobj_()));
  return _temp_ret;
}

static void _field_dy_set (::GskShadow* obj, gfloat _value) { obj->dy = (decltype(obj->dy)) _value; }
//  Shadow::dy (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::dy (::GskShadow* obj /*none*/, gfloat _value);
void base::ShadowBase::dy_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GskShadow* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GskShadow*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_radius_get (const ::GskShadow* obj) { return (gfloat) obj->radius; }
// gfloat Shadow::radius (const ::GskShadow* obj /*none*/);
// gfloat Shadow::radius (const ::GskShadow* obj /*none*/);
gfloat base::ShadowBase::radius_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskShadow* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_radius_get;
  auto _temp_ret = call_wrap_v ((const ::GskShadow*) (gobj_()));
  return _temp_ret;
}

static void _field_radius_set (::GskShadow* obj, gfloat _value) { obj->radius = (decltype(obj->radius)) _value; }
//  Shadow::radius (::GskShadow* obj /*none*/, gfloat _value);
// void Shadow::radius (::GskShadow* obj /*none*/, gfloat _value);
void base::ShadowBase::radius_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GskShadow* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_radius_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GskShadow*) (gobj_()), (gfloat) (_value_to_c));
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/shadow_extra_def_impl.hpp>)
#include <gsk/shadow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/shadow_extra_impl.hpp>)
#include <gsk/shadow_extra_impl.hpp>
#endif
#endif

#endif
