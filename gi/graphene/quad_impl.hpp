// AUTO-GENERATED

#ifndef _GI_GRAPHENE_QUAD_IMPL_HPP_
#define _GI_GRAPHENE_QUAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_quad_t* /*full*/ graphene_quad_alloc ();
// ::graphene_quad_t* /*full*/ graphene_quad_alloc ();
Graphene::Quad base::QuadBase::alloc () noexcept
{
  typedef ::graphene_quad_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_quad_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void graphene_quad_bounds (const graphene_quad_t* q /*none*/, graphene_rect_t* r /*none,out,ca*/);
// void graphene_quad_bounds (const ::graphene_quad_t* q /*none*/, ::graphene_rect_t* r /*none,out,ca*/);
void base::QuadBase::bounds (Graphene::Rect & r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quad_t* q, ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_bounds;
  detail::allocate(r);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(r).gobj_()), "");
  call_wrap_v ((const ::graphene_quad_t*) (gobj_()), (::graphene_rect_t*) ((::graphene_rect_t*) (r).gobj_()));
}
Graphene::Rect base::QuadBase::bounds () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_quad_t* q, ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_bounds;
  Graphene::Rect r_c;
  auto r = &r_c;
  detail::allocate(*r);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*r).gobj_()), "");
  call_wrap_v ((const ::graphene_quad_t*) (gobj_()), (::graphene_rect_t*) (r ? (::graphene_rect_t*) (*r).gobj_() : nullptr));
  return r_c;
}

// _Bool graphene_quad_contains (const graphene_quad_t* q /*none*/, const graphene_point_t* p /*none*/);
// gboolean graphene_quad_contains (const ::graphene_quad_t* q /*none*/, const ::graphene_point_t* p /*none*/);
bool base::QuadBase::contains (const Graphene::Point_Ref p) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_quad_t* q, const ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_contains;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_quad_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c));
  return _temp_ret;
}

// void graphene_quad_free (graphene_quad_t* q /*none*/);
// void graphene_quad_free (::graphene_quad_t* q /*none*/);
// IGNORE; marked ignore

// const graphene_point_t* /*none*/ graphene_quad_get_point (const graphene_quad_t* q /*none*/, unsigned int index_);
// const ::graphene_point_t* /*none*/ graphene_quad_get_point (const ::graphene_quad_t* q /*none*/, guint index_);
Graphene::Point_Ref base::QuadBase::get_point (guint index_) const noexcept
{
  typedef const ::graphene_point_t* (*call_wrap_t) (const ::graphene_quad_t* q, guint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_get_point;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((const ::graphene_quad_t*) (gobj_()), (guint) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quad_t* /*none*/ graphene_quad_init (graphene_quad_t* q /*none*/, const graphene_point_t* p1 /*none*/, const graphene_point_t* p2 /*none*/, const graphene_point_t* p3 /*none*/, const graphene_point_t* p4 /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init (::graphene_quad_t* q /*none*/, const ::graphene_point_t* p1 /*none*/, const ::graphene_point_t* p2 /*none*/, const ::graphene_point_t* p3 /*none*/, const ::graphene_point_t* p4 /*none*/);
Graphene::Quad_Ref base::QuadBase::init (const Graphene::Point_Ref p1, const Graphene::Point_Ref p2, const Graphene::Point_Ref p3, const Graphene::Point_Ref p4) noexcept
{
  typedef ::graphene_quad_t* (*call_wrap_t) (::graphene_quad_t* q, const ::graphene_point_t* p1, const ::graphene_point_t* p2, const ::graphene_point_t* p3, const ::graphene_point_t* p4);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_init;
  auto p4_to_c = gi::unwrap (p4, gi::transfer_none);
  auto p3_to_c = gi::unwrap (p3, gi::transfer_none);
  auto p2_to_c = gi::unwrap (p2, gi::transfer_none);
  auto p1_to_c = gi::unwrap (p1, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quad_t*) (gobj_()), (const ::graphene_point_t*) (p1_to_c), (const ::graphene_point_t*) (p2_to_c), (const ::graphene_point_t*) (p3_to_c), (const ::graphene_point_t*) (p4_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_quad_t* /*none*/ graphene_quad_init_from_points (graphene_quad_t* q /*none*/, const graphene_point_t* points /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init_from_points (::graphene_quad_t* q /*none*/, const ::graphene_point_t** points /*none*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_quad_t* /*none*/ graphene_quad_init_from_rect (graphene_quad_t* q /*none*/, const graphene_rect_t* r /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init_from_rect (::graphene_quad_t* q /*none*/, const ::graphene_rect_t* r /*none*/);
Graphene::Quad_Ref base::QuadBase::init_from_rect (const Graphene::Rect_Ref r) noexcept
{
  typedef ::graphene_quad_t* (*call_wrap_t) (::graphene_quad_t* q, const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_quad_init_from_rect;
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_quad_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/quad_extra_def_impl.hpp>)
#include <graphene/quad_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/quad_extra_impl.hpp>)
#include <graphene/quad_extra_impl.hpp>
#endif
#endif

#endif
