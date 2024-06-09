// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC2_HPP_
#define _GI_GRAPHENE_VEC2_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Vec2_Ref;

class Vec2;

namespace base {


#define GI_GRAPHENE_VEC2_BASE base::Vec2Base
class Vec2Base : public gi::detail::GBoxedWrapperBase<Vec2Base, ::graphene_vec2_t>
{
typedef gi::detail::GBoxedWrapperBase<Vec2Base, ::graphene_vec2_t> super_type;
public:

Vec2Base (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_vec2_get_type(); } 

// graphene_vec2_t* /*full*/ graphene_vec2_alloc ();
// ::graphene_vec2_t* /*full*/ graphene_vec2_alloc ();
static GI_INLINE_DECL Graphene::Vec2 alloc () noexcept;

// void graphene_vec2_add (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_add (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void add (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 add (const Graphene::Vec2_Ref b) const noexcept;

// void graphene_vec2_divide (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_divide (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void divide (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 divide (const Graphene::Vec2_Ref b) const noexcept;

// float graphene_vec2_dot (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/);
// gfloat graphene_vec2_dot (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/);
GI_INLINE_DECL gfloat dot (const Graphene::Vec2_Ref b) const noexcept;

// _Bool graphene_vec2_equal (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/);
// gboolean graphene_vec2_equal (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Vec2_Ref v2) const noexcept;

// void graphene_vec2_free (graphene_vec2_t* v /*none*/);
// void graphene_vec2_free (::graphene_vec2_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec2_get_x (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_get_x (const ::graphene_vec2_t* v /*none*/);
GI_INLINE_DECL gfloat get_x () const noexcept;

// float graphene_vec2_get_y (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_get_y (const ::graphene_vec2_t* v /*none*/);
GI_INLINE_DECL gfloat get_y () const noexcept;

// graphene_vec2_t* /*none*/ graphene_vec2_init (graphene_vec2_t* v /*none*/, float x, float y);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init (::graphene_vec2_t* v /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL Graphene::Vec2_Ref init (gfloat x, gfloat y) noexcept;

// graphene_vec2_t* /*none*/ graphene_vec2_init_from_float (graphene_vec2_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init_from_float (::graphene_vec2_t* v /*none*/, const gfloat* src /*none*/);
GI_INLINE_DECL Graphene::Vec2_Ref init_from_float (gi::CollectionParameter<gi::FSpan<2>, gfloat, gi::transfer_none_t> src) noexcept;

// graphene_vec2_t* /*none*/ graphene_vec2_init_from_vec2 (graphene_vec2_t* v /*none*/, const graphene_vec2_t* src /*none*/);
// ::graphene_vec2_t* /*none*/ graphene_vec2_init_from_vec2 (::graphene_vec2_t* v /*none*/, const ::graphene_vec2_t* src /*none*/);
GI_INLINE_DECL Graphene::Vec2_Ref init_from_vec2 (const Graphene::Vec2_Ref src) noexcept;

// void graphene_vec2_interpolate (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/, double factor, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_interpolate (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/, gdouble factor, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Vec2_Ref v2, gdouble factor, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 interpolate (const Graphene::Vec2_Ref v2, gdouble factor) const noexcept;

// float graphene_vec2_length (const graphene_vec2_t* v /*none*/);
// gfloat graphene_vec2_length (const ::graphene_vec2_t* v /*none*/);
GI_INLINE_DECL gfloat length () const noexcept;

// void graphene_vec2_max (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_max (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void max (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 max (const Graphene::Vec2_Ref b) const noexcept;

// void graphene_vec2_min (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_min (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void min (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 min (const Graphene::Vec2_Ref b) const noexcept;

// void graphene_vec2_multiply (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_multiply (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void multiply (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 multiply (const Graphene::Vec2_Ref b) const noexcept;

// _Bool graphene_vec2_near (const graphene_vec2_t* v1 /*none*/, const graphene_vec2_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec2_near (const ::graphene_vec2_t* v1 /*none*/, const ::graphene_vec2_t* v2 /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Vec2_Ref v2, gfloat epsilon) const noexcept;

// void graphene_vec2_negate (const graphene_vec2_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_negate (const ::graphene_vec2_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void negate (Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 negate () const noexcept;

// void graphene_vec2_normalize (const graphene_vec2_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_normalize (const ::graphene_vec2_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 normalize () const noexcept;

// void graphene_vec2_scale (const graphene_vec2_t* v /*none*/, float factor, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_scale (const ::graphene_vec2_t* v /*none*/, gfloat factor, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 scale (gfloat factor) const noexcept;

// void graphene_vec2_subtract (const graphene_vec2_t* a /*none*/, const graphene_vec2_t* b /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec2_subtract (const ::graphene_vec2_t* a /*none*/, const ::graphene_vec2_t* b /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void subtract (const Graphene::Vec2_Ref b, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 subtract (const Graphene::Vec2_Ref b) const noexcept;

// void graphene_vec2_to_float (const graphene_vec2_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec2_to_float (const ::graphene_vec2_t* v /*none*/, gfloat* dest /*none,out,ca*/);
GI_INLINE_DECL void to_float (gfloat dest[2]) const noexcept;

// const graphene_vec2_t* /*none*/ graphene_vec2_one ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_one ();
static GI_INLINE_DECL Graphene::Vec2_Ref one () noexcept;

// const graphene_vec2_t* /*none*/ graphene_vec2_x_axis ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_x_axis ();
static GI_INLINE_DECL Graphene::Vec2_Ref x_axis () noexcept;

// const graphene_vec2_t* /*none*/ graphene_vec2_y_axis ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_y_axis ();
static GI_INLINE_DECL Graphene::Vec2_Ref y_axis () noexcept;

// const graphene_vec2_t* /*none*/ graphene_vec2_zero ();
// const ::graphene_vec2_t* /*none*/ graphene_vec2_zero ();
static GI_INLINE_DECL Graphene::Vec2_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec2_extra_def.hpp>)
#include <graphene/vec2_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec2_extra.hpp>)
#include <graphene/vec2_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Vec2_Ref;

class Vec2 : public gi::detail::GBoxedWrapper<Vec2, ::graphene_vec2_t, GI_GRAPHENE_VEC2_BASE, Vec2_Ref>
{ typedef gi::detail::GBoxedWrapper<Vec2, ::graphene_vec2_t, GI_GRAPHENE_VEC2_BASE, Vec2_Ref> super_type; using super_type::super_type; };


class Vec2_Ref : public gi::detail::GBoxedRefWrapper<Vec2, ::graphene_vec2_t, GI_GRAPHENE_VEC2_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Vec2, ::graphene_vec2_t, GI_GRAPHENE_VEC2_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_vec2_t>
{ typedef Graphene::Vec2 type; }; 

} // namespace repository

} // namespace gi

#endif
