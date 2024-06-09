// AUTO-GENERATED

#ifndef _GI_GRAPHENE_POINT_HPP_
#define _GI_GRAPHENE_POINT_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Point_Ref;
class Vec2;
class Vec2_Ref;

class Point;

namespace base {


#define GI_GRAPHENE_POINT_BASE base::PointBase
class PointBase : public gi::detail::GBoxedWrapperBase<PointBase, ::graphene_point_t>
{
typedef gi::detail::GBoxedWrapperBase<PointBase, ::graphene_point_t> super_type;
public:

PointBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_point_get_type(); } 

// gfloat Point::x (const ::graphene_point_t* obj /*none*/);
// gfloat Point::x (const ::graphene_point_t* obj /*none*/);
GI_INLINE_DECL gfloat x_ () const noexcept;

//  Point::x (::graphene_point_t* obj /*none*/, gfloat _value);
// void Point::x (::graphene_point_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void x_ (gfloat _value) noexcept;

// gfloat Point::y (const ::graphene_point_t* obj /*none*/);
// gfloat Point::y (const ::graphene_point_t* obj /*none*/);
GI_INLINE_DECL gfloat y_ () const noexcept;

//  Point::y (::graphene_point_t* obj /*none*/, gfloat _value);
// void Point::y (::graphene_point_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void y_ (gfloat _value) noexcept;

// graphene_point_t* /*full*/ graphene_point_alloc ();
// ::graphene_point_t* /*full*/ graphene_point_alloc ();
static GI_INLINE_DECL Graphene::Point alloc () noexcept;

// float graphene_point_distance (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, float* d_x, float* d_y);
// gfloat graphene_point_distance (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gfloat* d_x, gfloat* d_y);
GI_INLINE_DECL gfloat distance (const Graphene::Point_Ref b, gfloat * d_x, gfloat * d_y) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat> distance (const Graphene::Point_Ref b) const noexcept;

// _Bool graphene_point_equal (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/);
// gboolean graphene_point_equal (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Point_Ref b) const noexcept;

// void graphene_point_free (graphene_point_t* p /*none*/);
// void graphene_point_free (::graphene_point_t* p /*none*/);
// IGNORE; marked ignore

// graphene_point_t* /*none*/ graphene_point_init (graphene_point_t* p /*none*/, float x, float y);
// ::graphene_point_t* /*none*/ graphene_point_init (::graphene_point_t* p /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL Graphene::Point_Ref init (gfloat x, gfloat y) noexcept;

// graphene_point_t* /*none*/ graphene_point_init_from_point (graphene_point_t* p /*none*/, const graphene_point_t* src /*none*/);
// ::graphene_point_t* /*none*/ graphene_point_init_from_point (::graphene_point_t* p /*none*/, const ::graphene_point_t* src /*none*/);
GI_INLINE_DECL Graphene::Point_Ref init_from_point (const Graphene::Point_Ref src) noexcept;

// graphene_point_t* /*none*/ graphene_point_init_from_vec2 (graphene_point_t* p /*none*/, const graphene_vec2_t* src /*none*/);
// ::graphene_point_t* /*none*/ graphene_point_init_from_vec2 (::graphene_point_t* p /*none*/, const ::graphene_vec2_t* src /*none*/);
GI_INLINE_DECL Graphene::Point_Ref init_from_vec2 (const Graphene::Vec2_Ref src) noexcept;

// void graphene_point_interpolate (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, double factor, graphene_point_t* res /*none,out,ca*/);
// void graphene_point_interpolate (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gdouble factor, ::graphene_point_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Point_Ref b, gdouble factor, Graphene::Point & res) const noexcept;
GI_INLINE_DECL Graphene::Point interpolate (const Graphene::Point_Ref b, gdouble factor) const noexcept;

// _Bool graphene_point_near (const graphene_point_t* a /*none*/, const graphene_point_t* b /*none*/, float epsilon);
// gboolean graphene_point_near (const ::graphene_point_t* a /*none*/, const ::graphene_point_t* b /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Point_Ref b, gfloat epsilon) const noexcept;

// void graphene_point_to_vec2 (const graphene_point_t* p /*none*/, graphene_vec2_t* v /*none,out,ca*/);
// void graphene_point_to_vec2 (const ::graphene_point_t* p /*none*/, ::graphene_vec2_t* v /*none,out,ca*/);
GI_INLINE_DECL void to_vec2 (Graphene::Vec2 & v) const noexcept;
GI_INLINE_DECL Graphene::Vec2 to_vec2 () const noexcept;

// const graphene_point_t* /*none*/ graphene_point_zero ();
// const ::graphene_point_t* /*none*/ graphene_point_zero ();
static GI_INLINE_DECL Graphene::Point_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/point_extra_def.hpp>)
#include <graphene/point_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/point_extra.hpp>)
#include <graphene/point_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Point_Ref;

class Point : public gi::detail::GBoxedWrapper<Point, ::graphene_point_t, GI_GRAPHENE_POINT_BASE, Point_Ref>
{ typedef gi::detail::GBoxedWrapper<Point, ::graphene_point_t, GI_GRAPHENE_POINT_BASE, Point_Ref> super_type; using super_type::super_type; };


class Point_Ref : public gi::detail::GBoxedRefWrapper<Point, ::graphene_point_t, GI_GRAPHENE_POINT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Point, ::graphene_point_t, GI_GRAPHENE_POINT_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_point_t>
{ typedef Graphene::Point type; }; 

} // namespace repository

} // namespace gi

#endif
