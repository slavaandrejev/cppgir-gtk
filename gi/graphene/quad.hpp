// AUTO-GENERATED

#ifndef _GI_GRAPHENE_QUAD_HPP_
#define _GI_GRAPHENE_QUAD_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Point;
class Point_Ref;
class Quad_Ref;
class Rect;
class Rect_Ref;

class Quad;

namespace base {


#define GI_GRAPHENE_QUAD_BASE base::QuadBase
class QuadBase : public gi::detail::GBoxedWrapperBase<QuadBase, ::graphene_quad_t>
{
typedef gi::detail::GBoxedWrapperBase<QuadBase, ::graphene_quad_t> super_type;
public:

QuadBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_quad_get_type(); } 

// graphene_quad_t* /*full*/ graphene_quad_alloc ();
// ::graphene_quad_t* /*full*/ graphene_quad_alloc ();
static GI_INLINE_DECL Graphene::Quad alloc () noexcept;

// void graphene_quad_bounds (const graphene_quad_t* q /*none*/, graphene_rect_t* r /*none,out,ca*/);
// void graphene_quad_bounds (const ::graphene_quad_t* q /*none*/, ::graphene_rect_t* r /*none,out,ca*/);
GI_INLINE_DECL void bounds (Graphene::Rect & r) const noexcept;
GI_INLINE_DECL Graphene::Rect bounds () const noexcept;

// _Bool graphene_quad_contains (const graphene_quad_t* q /*none*/, const graphene_point_t* p /*none*/);
// gboolean graphene_quad_contains (const ::graphene_quad_t* q /*none*/, const ::graphene_point_t* p /*none*/);
GI_INLINE_DECL bool contains (const Graphene::Point_Ref p) const noexcept;

// void graphene_quad_free (graphene_quad_t* q /*none*/);
// void graphene_quad_free (::graphene_quad_t* q /*none*/);
// IGNORE; marked ignore

// const graphene_point_t* /*none*/ graphene_quad_get_point (const graphene_quad_t* q /*none*/, unsigned int index_);
// const ::graphene_point_t* /*none*/ graphene_quad_get_point (const ::graphene_quad_t* q /*none*/, guint index_);
GI_INLINE_DECL Graphene::Point_Ref get_point (guint index_) const noexcept;

// graphene_quad_t* /*none*/ graphene_quad_init (graphene_quad_t* q /*none*/, const graphene_point_t* p1 /*none*/, const graphene_point_t* p2 /*none*/, const graphene_point_t* p3 /*none*/, const graphene_point_t* p4 /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init (::graphene_quad_t* q /*none*/, const ::graphene_point_t* p1 /*none*/, const ::graphene_point_t* p2 /*none*/, const ::graphene_point_t* p3 /*none*/, const ::graphene_point_t* p4 /*none*/);
GI_INLINE_DECL Graphene::Quad_Ref init (const Graphene::Point_Ref p1, const Graphene::Point_Ref p2, const Graphene::Point_Ref p3, const Graphene::Point_Ref p4) noexcept;

// graphene_quad_t* /*none*/ graphene_quad_init_from_points (graphene_quad_t* q /*none*/, const graphene_point_t* points /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init_from_points (::graphene_quad_t* q /*none*/, const ::graphene_point_t** points /*none*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_quad_t* /*none*/ graphene_quad_init_from_rect (graphene_quad_t* q /*none*/, const graphene_rect_t* r /*none*/);
// ::graphene_quad_t* /*none*/ graphene_quad_init_from_rect (::graphene_quad_t* q /*none*/, const ::graphene_rect_t* r /*none*/);
GI_INLINE_DECL Graphene::Quad_Ref init_from_rect (const Graphene::Rect_Ref r) noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/quad_extra_def.hpp>)
#include <graphene/quad_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/quad_extra.hpp>)
#include <graphene/quad_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Quad_Ref;

class Quad : public gi::detail::GBoxedWrapper<Quad, ::graphene_quad_t, GI_GRAPHENE_QUAD_BASE, Quad_Ref>
{ typedef gi::detail::GBoxedWrapper<Quad, ::graphene_quad_t, GI_GRAPHENE_QUAD_BASE, Quad_Ref> super_type; using super_type::super_type; };


class Quad_Ref : public gi::detail::GBoxedRefWrapper<Quad, ::graphene_quad_t, GI_GRAPHENE_QUAD_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Quad, ::graphene_quad_t, GI_GRAPHENE_QUAD_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_quad_t>
{ typedef Graphene::Quad type; }; 

} // namespace repository

} // namespace gi

#endif
