// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC4_HPP_
#define _GI_GRAPHENE_VEC4_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Vec2;
class Vec2_Ref;
class Vec3;
class Vec3_Ref;
class Vec4_Ref;

class Vec4;

namespace base {


#define GI_GRAPHENE_VEC4_BASE base::Vec4Base
class Vec4Base : public gi::detail::GBoxedWrapperBase<Vec4Base, ::graphene_vec4_t>
{
typedef gi::detail::GBoxedWrapperBase<Vec4Base, ::graphene_vec4_t> super_type;
public:

Vec4Base (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_vec4_get_type(); } 

// graphene_vec4_t* /*full*/ graphene_vec4_alloc ();
// ::graphene_vec4_t* /*full*/ graphene_vec4_alloc ();
static GI_INLINE_DECL Graphene::Vec4 alloc () noexcept;

// void graphene_vec4_add (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_add (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void add (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 add (const Graphene::Vec4_Ref b) const noexcept;

// void graphene_vec4_divide (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_divide (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void divide (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 divide (const Graphene::Vec4_Ref b) const noexcept;

// float graphene_vec4_dot (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/);
// gfloat graphene_vec4_dot (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/);
GI_INLINE_DECL gfloat dot (const Graphene::Vec4_Ref b) const noexcept;

// _Bool graphene_vec4_equal (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/);
// gboolean graphene_vec4_equal (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Vec4_Ref v2) const noexcept;

// void graphene_vec4_free (graphene_vec4_t* v /*none*/);
// void graphene_vec4_free (::graphene_vec4_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec4_get_w (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_w (const ::graphene_vec4_t* v /*none*/);
GI_INLINE_DECL gfloat get_w () const noexcept;

// float graphene_vec4_get_x (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_x (const ::graphene_vec4_t* v /*none*/);
GI_INLINE_DECL gfloat get_x () const noexcept;

// void graphene_vec4_get_xy (const graphene_vec4_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec4_get_xy (const ::graphene_vec4_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xy (Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 get_xy () const noexcept;

// void graphene_vec4_get_xyz (const graphene_vec4_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec4_get_xyz (const ::graphene_vec4_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xyz (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_xyz () const noexcept;

// float graphene_vec4_get_y (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_y (const ::graphene_vec4_t* v /*none*/);
GI_INLINE_DECL gfloat get_y () const noexcept;

// float graphene_vec4_get_z (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_get_z (const ::graphene_vec4_t* v /*none*/);
GI_INLINE_DECL gfloat get_z () const noexcept;

// graphene_vec4_t* /*none*/ graphene_vec4_init (graphene_vec4_t* v /*none*/, float x, float y, float z, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init (::graphene_vec4_t* v /*none*/, gfloat x, gfloat y, gfloat z, gfloat w);
GI_INLINE_DECL Graphene::Vec4_Ref init (gfloat x, gfloat y, gfloat z, gfloat w) noexcept;

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_float (graphene_vec4_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_float (::graphene_vec4_t* v /*none*/, const gfloat* src /*none*/);
GI_INLINE_DECL Graphene::Vec4_Ref init_from_float (gi::CollectionParameter<gi::FSpan<4>, gfloat, gi::transfer_none_t> src) noexcept;

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec2 (graphene_vec4_t* v /*none*/, const graphene_vec2_t* src /*none*/, float z, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec2 (::graphene_vec4_t* v /*none*/, const ::graphene_vec2_t* src /*none*/, gfloat z, gfloat w);
GI_INLINE_DECL Graphene::Vec4_Ref init_from_vec2 (const Graphene::Vec2_Ref src, gfloat z, gfloat w) noexcept;

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec3 (graphene_vec4_t* v /*none*/, const graphene_vec3_t* src /*none*/, float w);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec3 (::graphene_vec4_t* v /*none*/, const ::graphene_vec3_t* src /*none*/, gfloat w);
GI_INLINE_DECL Graphene::Vec4_Ref init_from_vec3 (const Graphene::Vec3_Ref src, gfloat w) noexcept;

// graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec4 (graphene_vec4_t* v /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_vec4_t* /*none*/ graphene_vec4_init_from_vec4 (::graphene_vec4_t* v /*none*/, const ::graphene_vec4_t* src /*none*/);
GI_INLINE_DECL Graphene::Vec4_Ref init_from_vec4 (const Graphene::Vec4_Ref src) noexcept;

// void graphene_vec4_interpolate (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, double factor, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_interpolate (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, gdouble factor, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Vec4_Ref v2, gdouble factor, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 interpolate (const Graphene::Vec4_Ref v2, gdouble factor) const noexcept;

// float graphene_vec4_length (const graphene_vec4_t* v /*none*/);
// gfloat graphene_vec4_length (const ::graphene_vec4_t* v /*none*/);
GI_INLINE_DECL gfloat length () const noexcept;

// void graphene_vec4_max (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_max (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void max (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 max (const Graphene::Vec4_Ref b) const noexcept;

// void graphene_vec4_min (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_min (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void min (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 min (const Graphene::Vec4_Ref b) const noexcept;

// void graphene_vec4_multiply (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_multiply (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void multiply (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 multiply (const Graphene::Vec4_Ref b) const noexcept;

// _Bool graphene_vec4_near (const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec4_near (const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Vec4_Ref v2, gfloat epsilon) const noexcept;

// void graphene_vec4_negate (const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_negate (const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void negate (Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 negate () const noexcept;

// void graphene_vec4_normalize (const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_normalize (const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 normalize () const noexcept;

// void graphene_vec4_scale (const graphene_vec4_t* v /*none*/, float factor, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_scale (const ::graphene_vec4_t* v /*none*/, gfloat factor, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 scale (gfloat factor) const noexcept;

// void graphene_vec4_subtract (const graphene_vec4_t* a /*none*/, const graphene_vec4_t* b /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec4_subtract (const ::graphene_vec4_t* a /*none*/, const ::graphene_vec4_t* b /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void subtract (const Graphene::Vec4_Ref b, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 subtract (const Graphene::Vec4_Ref b) const noexcept;

// void graphene_vec4_to_float (const graphene_vec4_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec4_to_float (const ::graphene_vec4_t* v /*none*/, gfloat* dest /*none,out,ca*/);
GI_INLINE_DECL void to_float (gfloat dest[4]) const noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_one ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_one ();
static GI_INLINE_DECL Graphene::Vec4_Ref one () noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_w_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_w_axis ();
static GI_INLINE_DECL Graphene::Vec4_Ref w_axis () noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_x_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_x_axis ();
static GI_INLINE_DECL Graphene::Vec4_Ref x_axis () noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_y_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_y_axis ();
static GI_INLINE_DECL Graphene::Vec4_Ref y_axis () noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_z_axis ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_z_axis ();
static GI_INLINE_DECL Graphene::Vec4_Ref z_axis () noexcept;

// const graphene_vec4_t* /*none*/ graphene_vec4_zero ();
// const ::graphene_vec4_t* /*none*/ graphene_vec4_zero ();
static GI_INLINE_DECL Graphene::Vec4_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec4_extra_def.hpp>)
#include <graphene/vec4_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec4_extra.hpp>)
#include <graphene/vec4_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Vec4_Ref;

class Vec4 : public gi::detail::GBoxedWrapper<Vec4, ::graphene_vec4_t, GI_GRAPHENE_VEC4_BASE, Vec4_Ref>
{ typedef gi::detail::GBoxedWrapper<Vec4, ::graphene_vec4_t, GI_GRAPHENE_VEC4_BASE, Vec4_Ref> super_type; using super_type::super_type; };


class Vec4_Ref : public gi::detail::GBoxedRefWrapper<Vec4, ::graphene_vec4_t, GI_GRAPHENE_VEC4_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Vec4, ::graphene_vec4_t, GI_GRAPHENE_VEC4_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_vec4_t>
{ typedef Graphene::Vec4 type; }; 

} // namespace repository

} // namespace gi

#endif
