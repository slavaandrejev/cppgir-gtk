// AUTO-GENERATED

#ifndef _GI_GSK_ROUNDEDRECT_IMPL_HPP_
#define _GI_GSK_ROUNDEDRECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// gboolean gsk_rounded_rect_contains_point (const GskRoundedRect* self /*none*/, const graphene_point_t* point /*none*/);
// gboolean gsk_rounded_rect_contains_point (const ::GskRoundedRect* self /*none*/, const ::graphene_point_t* point /*none*/);
bool base::RoundedRectBase::contains_point (const Graphene::Point_Ref point) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskRoundedRect* self, const ::graphene_point_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_contains_point;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskRoundedRect*) (gobj_()), (const ::graphene_point_t*) (point_to_c));
  return _temp_ret;
}

// gboolean gsk_rounded_rect_contains_rect (const GskRoundedRect* self /*none*/, const graphene_rect_t* rect /*none*/);
// gboolean gsk_rounded_rect_contains_rect (const ::GskRoundedRect* self /*none*/, const ::graphene_rect_t* rect /*none*/);
bool base::RoundedRectBase::contains_rect (const Graphene::Rect_Ref rect) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskRoundedRect* self, const ::graphene_rect_t* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_contains_rect;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskRoundedRect*) (gobj_()), (const ::graphene_rect_t*) (rect_to_c));
  return _temp_ret;
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_init (GskRoundedRect* self /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_size_t* top_left /*none*/, const graphene_size_t* top_right /*none*/, const graphene_size_t* bottom_right /*none*/, const graphene_size_t* bottom_left /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init (::GskRoundedRect* self /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_size_t* top_left /*none*/, const ::graphene_size_t* top_right /*none*/, const ::graphene_size_t* bottom_right /*none*/, const ::graphene_size_t* bottom_left /*none*/);
Gsk::RoundedRect_Ref base::RoundedRectBase::init (const Graphene::Rect_Ref bounds, const Graphene::Size_Ref top_left, const Graphene::Size_Ref top_right, const Graphene::Size_Ref bottom_right, const Graphene::Size_Ref bottom_left) noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self, const ::graphene_rect_t* bounds, const ::graphene_size_t* top_left, const ::graphene_size_t* top_right, const ::graphene_size_t* bottom_right, const ::graphene_size_t* bottom_left);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_init;
  auto bottom_left_to_c = gi::unwrap (bottom_left, gi::transfer_none);
  auto bottom_right_to_c = gi::unwrap (bottom_right, gi::transfer_none);
  auto top_right_to_c = gi::unwrap (top_right, gi::transfer_none);
  auto top_left_to_c = gi::unwrap (top_left, gi::transfer_none);
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c), (const ::graphene_size_t*) (top_left_to_c), (const ::graphene_size_t*) (top_right_to_c), (const ::graphene_size_t*) (bottom_right_to_c), (const ::graphene_size_t*) (bottom_left_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_init_copy (GskRoundedRect* self /*none*/, const GskRoundedRect* src /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init_copy (::GskRoundedRect* self /*none*/, const ::GskRoundedRect* src /*none*/);
Gsk::RoundedRect_Ref base::RoundedRectBase::init_copy (const Gsk::RoundedRect_Ref src) noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self, const ::GskRoundedRect* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_init_copy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()), (const ::GskRoundedRect*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_init_from_rect (GskRoundedRect* self /*none*/, const graphene_rect_t* bounds /*none*/, float radius);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init_from_rect (::GskRoundedRect* self /*none*/, const ::graphene_rect_t* bounds /*none*/, gfloat radius);
Gsk::RoundedRect_Ref base::RoundedRectBase::init_from_rect (const Graphene::Rect_Ref bounds, gfloat radius) noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self, const ::graphene_rect_t* bounds, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_init_from_rect;
  auto radius_to_c = radius;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c), (gfloat) (radius_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gsk_rounded_rect_intersects_rect (const GskRoundedRect* self /*none*/, const graphene_rect_t* rect /*none*/);
// gboolean gsk_rounded_rect_intersects_rect (const ::GskRoundedRect* self /*none*/, const ::graphene_rect_t* rect /*none*/);
bool base::RoundedRectBase::intersects_rect (const Graphene::Rect_Ref rect) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskRoundedRect* self, const ::graphene_rect_t* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_intersects_rect;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskRoundedRect*) (gobj_()), (const ::graphene_rect_t*) (rect_to_c));
  return _temp_ret;
}

// gboolean gsk_rounded_rect_is_rectilinear (const GskRoundedRect* self /*none*/);
// gboolean gsk_rounded_rect_is_rectilinear (const ::GskRoundedRect* self /*none*/);
bool base::RoundedRectBase::is_rectilinear () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskRoundedRect* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_is_rectilinear;
  auto _temp_ret = call_wrap_v ((const ::GskRoundedRect*) (gobj_()));
  return _temp_ret;
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_normalize (GskRoundedRect* self /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_normalize (::GskRoundedRect* self /*none*/);
Gsk::RoundedRect_Ref base::RoundedRectBase::normalize () noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_normalize;
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_offset (GskRoundedRect* self /*none*/, float dx, float dy);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_offset (::GskRoundedRect* self /*none*/, gfloat dx, gfloat dy);
Gsk::RoundedRect_Ref base::RoundedRectBase::offset (gfloat dx, gfloat dy) noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self, gfloat dx, gfloat dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_offset;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()), (gfloat) (dx_to_c), (gfloat) (dy_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GskRoundedRect* /*none*/ gsk_rounded_rect_shrink (GskRoundedRect* self /*none*/, float top, float right, float bottom, float left);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_shrink (::GskRoundedRect* self /*none*/, gfloat top, gfloat right, gfloat bottom, gfloat left);
Gsk::RoundedRect_Ref base::RoundedRectBase::shrink (gfloat top, gfloat right, gfloat bottom, gfloat left) noexcept
{
  typedef ::GskRoundedRect* (*call_wrap_t) (::GskRoundedRect* self, gfloat top, gfloat right, gfloat bottom, gfloat left);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_rounded_rect_shrink;
  auto left_to_c = left;
  auto bottom_to_c = bottom;
  auto right_to_c = right;
  auto top_to_c = top;
  auto _temp_ret = call_wrap_v ((::GskRoundedRect*) (gobj_()), (gfloat) (top_to_c), (gfloat) (right_to_c), (gfloat) (bottom_to_c), (gfloat) (left_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/roundedrect_extra_def_impl.hpp>)
#include <gsk/roundedrect_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/roundedrect_extra_impl.hpp>)
#include <gsk/roundedrect_extra_impl.hpp>
#endif
#endif

#endif
