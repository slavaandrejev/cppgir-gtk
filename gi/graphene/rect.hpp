// AUTO-GENERATED

#ifndef _GI_GRAPHENE_RECT_HPP_
#define _GI_GRAPHENE_RECT_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Point;
class Point_Ref;
class Rect_Ref;
class Vec2;
class Vec2_Ref;

class Rect;

namespace base {


#define GI_GRAPHENE_RECT_BASE base::RectBase
class RectBase : public gi::detail::GBoxedWrapperBase<RectBase, ::graphene_rect_t>
{
typedef gi::detail::GBoxedWrapperBase<RectBase, ::graphene_rect_t> super_type;
public:

RectBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_rect_get_type(); } 

// _Bool graphene_rect_contains_point (const graphene_rect_t* r /*none*/, const graphene_point_t* p /*none*/);
// gboolean graphene_rect_contains_point (const ::graphene_rect_t* r /*none*/, const ::graphene_point_t* p /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point_Ref p) const noexcept;

// _Bool graphene_rect_contains_rect (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/);
// gboolean graphene_rect_contains_rect (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/);
GI_INLINE_DECL bool contains_rect (const Graphene::Rect_Ref b) const noexcept;

// _Bool graphene_rect_equal (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/);
// gboolean graphene_rect_equal (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Rect_Ref b) const noexcept;

// void graphene_rect_expand (const graphene_rect_t* r /*none*/, const graphene_point_t* p /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_expand (const ::graphene_rect_t* r /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void expand (const Graphene::Point_Ref p, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect expand (const Graphene::Point_Ref p) const noexcept;

// void graphene_rect_free (graphene_rect_t* r /*none*/);
// void graphene_rect_free (::graphene_rect_t* r /*none*/);
// IGNORE; marked ignore

// float graphene_rect_get_area (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_area (const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL gfloat get_area () const noexcept;

// void graphene_rect_get_bottom_left (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_bottom_left (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
GI_INLINE_DECL void get_bottom_left (Graphene::Point & p) const noexcept;
GI_INLINE_DECL Graphene::Point get_bottom_left () const noexcept;

// void graphene_rect_get_bottom_right (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_bottom_right (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
GI_INLINE_DECL void get_bottom_right (Graphene::Point & p) const noexcept;
GI_INLINE_DECL Graphene::Point get_bottom_right () const noexcept;

// void graphene_rect_get_center (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_center (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
GI_INLINE_DECL void get_center (Graphene::Point & p) const noexcept;
GI_INLINE_DECL Graphene::Point get_center () const noexcept;

// float graphene_rect_get_height (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_height (const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL gfloat get_height () const noexcept;

// void graphene_rect_get_top_left (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_top_left (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
GI_INLINE_DECL void get_top_left (Graphene::Point & p) const noexcept;
GI_INLINE_DECL Graphene::Point get_top_left () const noexcept;

// void graphene_rect_get_top_right (const graphene_rect_t* r /*none*/, graphene_point_t* p /*none,out,ca*/);
// void graphene_rect_get_top_right (const ::graphene_rect_t* r /*none*/, ::graphene_point_t* p /*none,out,ca*/);
GI_INLINE_DECL void get_top_right (Graphene::Point & p) const noexcept;
GI_INLINE_DECL Graphene::Point get_top_right () const noexcept;

// void graphene_rect_get_vertices (const graphene_rect_t* r /*none*/, graphene_vec2_t* vertices /*none,out,ca*/);
// void graphene_rect_get_vertices (const ::graphene_rect_t* r /*none*/, ::graphene_vec2_t** vertices /*none,out,ca*/);
// SKIP; vertices out boxed array not supported (depth 1)

// float graphene_rect_get_width (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_width (const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL gfloat get_width () const noexcept;

// float graphene_rect_get_x (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_x (const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL gfloat get_x () const noexcept;

// float graphene_rect_get_y (const graphene_rect_t* r /*none*/);
// gfloat graphene_rect_get_y (const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL gfloat get_y () const noexcept;

// graphene_rect_t* /*none*/ graphene_rect_init (graphene_rect_t* r /*none*/, float x, float y, float width, float height);
// ::graphene_rect_t* /*none*/ graphene_rect_init (::graphene_rect_t* r /*none*/, gfloat x, gfloat y, gfloat width, gfloat height);
GI_INLINE_DECL Graphene::Rect_Ref init (gfloat x, gfloat y, gfloat width, gfloat height) noexcept;

// graphene_rect_t* /*none*/ graphene_rect_init_from_rect (graphene_rect_t* r /*none*/, const graphene_rect_t* src /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_init_from_rect (::graphene_rect_t* r /*none*/, const ::graphene_rect_t* src /*none*/);
GI_INLINE_DECL Graphene::Rect_Ref init_from_rect (const Graphene::Rect_Ref src) noexcept;

// graphene_rect_t* /*none*/ graphene_rect_inset (graphene_rect_t* r /*none*/, float d_x, float d_y);
// ::graphene_rect_t* /*none*/ graphene_rect_inset (::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y);
GI_INLINE_DECL Graphene::Rect_Ref inset (gfloat d_x, gfloat d_y) noexcept;

// void graphene_rect_inset_r (const graphene_rect_t* r /*none*/, float d_x, float d_y, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_inset_r (const ::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void inset_r (gfloat d_x, gfloat d_y, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect inset_r (gfloat d_x, gfloat d_y) const noexcept;

// void graphene_rect_interpolate (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, double factor, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_interpolate (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, gdouble factor, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Rect_Ref b, gdouble factor, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect interpolate (const Graphene::Rect_Ref b, gdouble factor) const noexcept;

// _Bool graphene_rect_intersection (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, graphene_rect_t* res /*none,out,opt,ca*/);
// gboolean graphene_rect_intersection (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, ::graphene_rect_t* res /*none,out,opt,ca*/);
GI_INLINE_DECL bool intersection (const Graphene::Rect_Ref b, Graphene::Rect * res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Rect> intersection (const Graphene::Rect_Ref b) const noexcept;

// graphene_rect_t* /*none*/ graphene_rect_normalize (graphene_rect_t* r /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_normalize (::graphene_rect_t* r /*none*/);
GI_INLINE_DECL Graphene::Rect_Ref normalize () noexcept;

// void graphene_rect_normalize_r (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_normalize_r (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize_r (Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect normalize_r () const noexcept;

// graphene_rect_t* /*none*/ graphene_rect_offset (graphene_rect_t* r /*none*/, float d_x, float d_y);
// ::graphene_rect_t* /*none*/ graphene_rect_offset (::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y);
GI_INLINE_DECL Graphene::Rect_Ref offset (gfloat d_x, gfloat d_y) noexcept;

// void graphene_rect_offset_r (const graphene_rect_t* r /*none*/, float d_x, float d_y, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_offset_r (const ::graphene_rect_t* r /*none*/, gfloat d_x, gfloat d_y, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void offset_r (gfloat d_x, gfloat d_y, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect offset_r (gfloat d_x, gfloat d_y) const noexcept;

// void graphene_rect_round (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_round (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
// IGNORE; deprecated

// void graphene_rect_round_extents (const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_round_extents (const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void round_extents (Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect round_extents () const noexcept;

// graphene_rect_t* /*none*/ graphene_rect_round_to_pixel (graphene_rect_t* r /*none*/);
// ::graphene_rect_t* /*none*/ graphene_rect_round_to_pixel (::graphene_rect_t* r /*none*/);
// IGNORE; deprecated

// void graphene_rect_scale (const graphene_rect_t* r /*none*/, float s_h, float s_v, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_scale (const ::graphene_rect_t* r /*none*/, gfloat s_h, gfloat s_v, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat s_h, gfloat s_v, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect scale (gfloat s_h, gfloat s_v) const noexcept;

// void graphene_rect_union (const graphene_rect_t* a /*none*/, const graphene_rect_t* b /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_rect_union (const ::graphene_rect_t* a /*none*/, const ::graphene_rect_t* b /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void union_ (const Graphene::Rect_Ref b, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect union_ (const Graphene::Rect_Ref b) const noexcept;

// graphene_rect_t* /*full*/ graphene_rect_alloc ();
// ::graphene_rect_t* /*full*/ graphene_rect_alloc ();
static GI_INLINE_DECL Graphene::Rect alloc () noexcept;

// const graphene_rect_t* /*none*/ graphene_rect_zero ();
// const ::graphene_rect_t* /*none*/ graphene_rect_zero ();
static GI_INLINE_DECL Graphene::Rect_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/rect_extra_def.hpp>)
#include <graphene/rect_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/rect_extra.hpp>)
#include <graphene/rect_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Rect_Ref;

class Rect : public gi::detail::GBoxedWrapper<Rect, ::graphene_rect_t, GI_GRAPHENE_RECT_BASE, Rect_Ref>
{ typedef gi::detail::GBoxedWrapper<Rect, ::graphene_rect_t, GI_GRAPHENE_RECT_BASE, Rect_Ref> super_type; using super_type::super_type; };


class Rect_Ref : public gi::detail::GBoxedRefWrapper<Rect, ::graphene_rect_t, GI_GRAPHENE_RECT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Rect, ::graphene_rect_t, GI_GRAPHENE_RECT_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_rect_t>
{ typedef Graphene::Rect type; }; 

} // namespace repository

} // namespace gi

#endif
