// AUTO-GENERATED

#ifndef _GI_GRAPHENE_RECT_IMPL_HPP_
#define _GI_GRAPHENE_RECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// _Bool graphene_rect_contains_point (const graphene_rect_t* r /*none*/, const graphene_point_t* p /*none*/);
// gboolean graphene_rect_contains_point (const ::graphene_rect_t* r /*none*/, const ::graphene_point_t* p /*none*/);
bool base::RectBase::contains_point (const Graphene::Point_Ref p) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_rect_t* r, const ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_contains_point;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c));
  return _temp_ret;
}

// _Bool graphene_rect_contains_rect (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/);
// gboolean graphene_rect_contains_rect (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/);
bool base::RectBase::contains_rect (const Graphene::Rect_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_contains_rect;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_rect_equal (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/);
// gboolean graphene_rect_equal (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/);
bool base::RectBase::equal (const Graphene::Rect_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_rect_expand (const graphene_rect_t* r /*none*/, const graphene_point_t* p /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_expand (const ::graphene_rect_t* r /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::expand (const Graphene::Point_Ref p, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, const ::graphene_point_t* p, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_expand;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::expand (const Graphene::Point_Ref p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, const ::graphene_point_t* p, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_expand;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_rect_free (graphene_rect_t* r /*none*/);
// void graphene_rect_free (::graphene_rect_t* r /*none*/);
// IGNORE; marked ignore

// float graphene_rect_get_area (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_area (const ::graphene_rect_t* r /*none*/);
gfloat base::RectBase::get_area () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_area;
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_rect_get_bottom_left (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_bottom_left (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
void base::RectBase::get_bottom_left (Graphene::Point & p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_bottom_left;
  detail::allocate(p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) ((::graphene_point_t*) (p).gobj_()));
}
Graphene::Point base::RectBase::get_bottom_left () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_bottom_left;
  Graphene::Point p_c;
  auto p = &p_c;
  detail::allocate(*p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) (p ? (::graphene_point_t*) (*p).gobj_() : nullptr));
  return p_c;
}

// void graphene_rect_get_bottom_right (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_bottom_right (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
void base::RectBase::get_bottom_right (Graphene::Point & p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_bottom_right;
  detail::allocate(p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) ((::graphene_point_t*) (p).gobj_()));
}
Graphene::Point base::RectBase::get_bottom_right () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_bottom_right;
  Graphene::Point p_c;
  auto p = &p_c;
  detail::allocate(*p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) (p ? (::graphene_point_t*) (*p).gobj_() : nullptr));
  return p_c;
}

// void graphene_rect_get_center (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_center (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
void base::RectBase::get_center (Graphene::Point & p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_center;
  detail::allocate(p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) ((::graphene_point_t*) (p).gobj_()));
}
Graphene::Point base::RectBase::get_center () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_center;
  Graphene::Point p_c;
  auto p = &p_c;
  detail::allocate(*p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) (p ? (::graphene_point_t*) (*p).gobj_() : nullptr));
  return p_c;
}

// float graphene_rect_get_height (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_height (const ::graphene_rect_t* r /*none*/);
gfloat base::RectBase::get_height () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_height;
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_rect_get_top_left (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_top_left (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
void base::RectBase::get_top_left (Graphene::Point & p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_top_left;
  detail::allocate(p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) ((::graphene_point_t*) (p).gobj_()));
}
Graphene::Point base::RectBase::get_top_left () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_top_left;
  Graphene::Point p_c;
  auto p = &p_c;
  detail::allocate(*p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) (p ? (::graphene_point_t*) (*p).gobj_() : nullptr));
  return p_c;
}

// void graphene_rect_get_top_right (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_top_right (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
void base::RectBase::get_top_right (Graphene::Point & p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_top_right;
  detail::allocate(p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) ((::graphene_point_t*) (p).gobj_()));
}
Graphene::Point base::RectBase::get_top_right () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_point_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_top_right;
  Graphene::Point p_c;
  auto p = &p_c;
  detail::allocate(*p);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*p).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_point_t*) (p ? (::graphene_point_t*) (*p).gobj_() : nullptr));
  return p_c;
}

// void graphene_rect_get_vertices (const graphene_rect_t* r /*none*/, graphene_vec2_t* vertices /*none,out,ca*/);
// void graphene_rect_get_vertices (const ::graphene_rect_t* r /*none*/, ::graphene_vec2_t** vertices /*none,out,ca*/);
// SKIP; vertices out boxed array not supported (depth 1)

// float graphene_rect_get_width (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_width (const ::graphene_rect_t* r /*none*/);
gfloat base::RectBase::get_width () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_width;
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_rect_get_x (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_x (const ::graphene_rect_t* r /*none*/);
gfloat base::RectBase::get_x () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_x;
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_rect_get_y (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_y (const ::graphene_rect_t* r /*none*/);
gfloat base::RectBase::get_y () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_get_y;
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()));
  return _temp_ret;
}

// graphene_rect_t* /*none*/ graphene_rect_init (graphene_rect_t* r /*none*/, float x, float y, float width, float height);
// ::graphene_rect_t* /*none*/ graphene_rect_init (::graphene_rect_t* r /*none*/, gfloat x, gfloat y, gfloat width, gfloat height);
Graphene::Rect_Ref base::RectBase::init (gfloat x, gfloat y, gfloat width, gfloat height) noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) (::graphene_rect_t* r, gfloat x, gfloat y, gfloat width, gfloat height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_init;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_rect_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (width_to_c), (gfloat) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_rect_t* /*none*/ graphene_rect_init_from_rect (graphene_rect_t* r /*none*/, const graphene_rect_t* src /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_init_from_rect (::graphene_rect_t* r /*none*/, const ::graphene_rect_t* src /*none*/);
Graphene::Rect_Ref base::RectBase::init_from_rect (const Graphene::Rect_Ref src) noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) (::graphene_rect_t* r, const ::graphene_rect_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_init_from_rect;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_rect_t* /*none*/ graphene_rect_inset (graphene_rect_t* r /*none*/, float d_x, float d_y);
// ::graphene_rect_t* /*none*/ graphene_rect_inset (::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y);
Graphene::Rect_Ref base::RectBase::inset (gfloat d_x, gfloat d_y) noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) (::graphene_rect_t* r, gfloat d_x, gfloat d_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_inset;
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  auto _temp_ret = call_wrap_v ((::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_rect_inset_r (const graphene_rect_t* r /*none*/, float d_x, float d_y, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_inset_r (const ::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::inset_r (gfloat d_x, gfloat d_y, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat d_x, gfloat d_y, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_inset_r;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::inset_r (gfloat d_x, gfloat d_y) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat d_x, gfloat d_y, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_inset_r;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_rect_interpolate (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, double factor, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_interpolate (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, gdouble factor, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::interpolate (const Graphene::Rect_Ref b, gdouble factor, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, gdouble factor, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::interpolate (const Graphene::Rect_Ref b, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, gdouble factor, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_interpolate;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_rect_intersection (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, graphene_rect_t* res /*none,out,opt,ca*/);
// gboolean graphene_rect_intersection (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, ::graphene_rect_t* res /*none,out,opt,ca*/);
bool base::RectBase::intersection (const Graphene::Rect_Ref b, Graphene::Rect * res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_intersection;
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return _temp_ret;
}
std::tuple<bool, Graphene::Rect> base::RectBase::intersection (const Graphene::Rect_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_intersection;
  Graphene::Rect res_c;
  auto res = &res_c;
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// graphene_rect_t* /*none*/ graphene_rect_normalize (graphene_rect_t* r /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_normalize (::graphene_rect_t* r /*none*/);
Graphene::Rect_Ref base::RectBase::normalize () noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) (::graphene_rect_t* r);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_normalize;
  auto _temp_ret = call_wrap_v ((::graphene_rect_t*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_rect_normalize_r (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_normalize_r (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::normalize_r (Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_normalize_r;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::normalize_r () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_normalize_r;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// graphene_rect_t* /*none*/ graphene_rect_offset (graphene_rect_t* r /*none*/, float d_x, float d_y);
// ::graphene_rect_t* /*none*/ graphene_rect_offset (::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y);
Graphene::Rect_Ref base::RectBase::offset (gfloat d_x, gfloat d_y) noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) (::graphene_rect_t* r, gfloat d_x, gfloat d_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_offset;
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  auto _temp_ret = call_wrap_v ((::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_rect_offset_r (const graphene_rect_t* r /*none*/, float d_x, float d_y, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_offset_r (const ::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::offset_r (gfloat d_x, gfloat d_y, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat d_x, gfloat d_y, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_offset_r;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::offset_r (gfloat d_x, gfloat d_y) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat d_x, gfloat d_y, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_offset_r;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto d_y_to_c = d_y;
  auto d_x_to_c = d_x;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (d_x_to_c), (gfloat) (d_y_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_rect_round (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_round (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
// IGNORE; deprecated

// void graphene_rect_round_extents (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_round_extents (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::round_extents (Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_round_extents;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::round_extents () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_round_extents;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// graphene_rect_t* /*none*/ graphene_rect_round_to_pixel (graphene_rect_t* r /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_round_to_pixel (::graphene_rect_t* r /*none*/);
// IGNORE; deprecated

// void graphene_rect_scale (const graphene_rect_t* r /*none*/, float s_h, float s_v, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_scale (const ::graphene_rect_t* r /*none*/, gfloat s_h, gfloat s_v, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::scale (gfloat s_h, gfloat s_v, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat s_h, gfloat s_v, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_scale;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto s_v_to_c = s_v;
  auto s_h_to_c = s_h;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (s_h_to_c), (gfloat) (s_v_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::scale (gfloat s_h, gfloat s_v) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* r, gfloat s_h, gfloat s_v, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_scale;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto s_v_to_c = s_v;
  auto s_h_to_c = s_h;
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (gfloat) (s_h_to_c), (gfloat) (s_v_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_rect_union (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_union (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::RectBase::union_ (const Graphene::Rect_Ref b, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_union;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::RectBase::union_ (const Graphene::Rect_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_rect_t* a, const ::graphene_rect_t* b, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_union;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_rect_t*) (gobj_()), (const ::graphene_rect_t*) (b_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// graphene_rect_t* /*full*/ graphene_rect_alloc ();
// ::graphene_rect_t* /*full*/ graphene_rect_alloc ();
Graphene::Rect base::RectBase::alloc () noexcept
{
  typedef ::graphene_rect_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const graphene_rect_t* /*none*/ graphene_rect_zero ();
// const ::graphene_rect_t* /*none*/ graphene_rect_zero ();
Graphene::Rect_Ref base::RectBase::zero () noexcept
{
  typedef const ::graphene_rect_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_rect_zero;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/rect_extra_def_impl.hpp>)
#include <graphene/rect_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/rect_extra_impl.hpp>)
#include <graphene/rect_extra_impl.hpp>
#endif
#endif

#endif
