// AUTO-GENERATED

#ifndef _GI_GRAPHENE_VEC3_HPP_
#define _GI_GRAPHENE_VEC3_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Vec2;
class Vec2_Ref;
class Vec3_Ref;
class Vec4;
class Vec4_Ref;

class Vec3;

namespace base {


#define GI_GRAPHENE_VEC3_BASE base::Vec3Base
class Vec3Base : public gi::detail::GBoxedWrapperBase<Vec3Base, ::graphene_vec3_t>
{
typedef gi::detail::GBoxedWrapperBase<Vec3Base, ::graphene_vec3_t> super_type;
public:

Vec3Base (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_vec3_get_type(); } 

// graphene_vec3_t* /*full*/ graphene_vec3_alloc ();
// ::graphene_vec3_t* /*full*/ graphene_vec3_alloc ();
static GI_INLINE_DECL Graphene::Vec3 alloc () noexcept;

// void graphene_vec3_add (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_add (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void add (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 add (const Graphene::Vec3_Ref b) const noexcept;

// void graphene_vec3_cross (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_cross (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void cross (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 cross (const Graphene::Vec3_Ref b) const noexcept;

// void graphene_vec3_divide (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_divide (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void divide (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 divide (const Graphene::Vec3_Ref b) const noexcept;

// float graphene_vec3_dot (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/);
// gfloat graphene_vec3_dot (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/);
GI_INLINE_DECL gfloat dot (const Graphene::Vec3_Ref b) const noexcept;

// _Bool graphene_vec3_equal (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/);
// gboolean graphene_vec3_equal (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Vec3_Ref v2) const noexcept;

// void graphene_vec3_free (graphene_vec3_t* v /*none*/);
// void graphene_vec3_free (::graphene_vec3_t* v /*none*/);
// IGNORE; marked ignore

// float graphene_vec3_get_x (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_x (const ::graphene_vec3_t* v /*none*/);
GI_INLINE_DECL gfloat get_x () const noexcept;

// void graphene_vec3_get_xy (const graphene_vec3_t* v /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// void graphene_vec3_get_xy (const ::graphene_vec3_t* v /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xy (Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec2 get_xy () const noexcept;

// void graphene_vec3_get_xy0 (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_get_xy0 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xy0 (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_xy0 () const noexcept;

// void graphene_vec3_get_xyz0 (const graphene_vec3_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyz0 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xyz0 (Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 get_xyz0 () const noexcept;

// void graphene_vec3_get_xyz1 (const graphene_vec3_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyz1 (const ::graphene_vec3_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xyz1 (Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 get_xyz1 () const noexcept;

// void graphene_vec3_get_xyzw (const graphene_vec3_t* v /*none*/, float w, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_vec3_get_xyzw (const ::graphene_vec3_t* v /*none*/, gfloat w, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_xyzw (gfloat w, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 get_xyzw (gfloat w) const noexcept;

// float graphene_vec3_get_y (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_y (const ::graphene_vec3_t* v /*none*/);
GI_INLINE_DECL gfloat get_y () const noexcept;

// float graphene_vec3_get_z (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_get_z (const ::graphene_vec3_t* v /*none*/);
GI_INLINE_DECL gfloat get_z () const noexcept;

// graphene_vec3_t* /*none*/ graphene_vec3_init (graphene_vec3_t* v /*none*/, float x, float y, float z);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init (::graphene_vec3_t* v /*none*/, gfloat x, gfloat y, gfloat z);
GI_INLINE_DECL Graphene::Vec3_Ref init (gfloat x, gfloat y, gfloat z) noexcept;

// graphene_vec3_t* /*none*/ graphene_vec3_init_from_float (graphene_vec3_t* v /*none*/, const float* src /*none*/);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init_from_float (::graphene_vec3_t* v /*none*/, const gfloat* src /*none*/);
GI_INLINE_DECL Graphene::Vec3_Ref init_from_float (gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> src) noexcept;

// graphene_vec3_t* /*none*/ graphene_vec3_init_from_vec3 (graphene_vec3_t* v /*none*/, const graphene_vec3_t* src /*none*/);
// ::graphene_vec3_t* /*none*/ graphene_vec3_init_from_vec3 (::graphene_vec3_t* v /*none*/, const ::graphene_vec3_t* src /*none*/);
GI_INLINE_DECL Graphene::Vec3_Ref init_from_vec3 (const Graphene::Vec3_Ref src) noexcept;

// void graphene_vec3_interpolate (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/, double factor, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_interpolate (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/, gdouble factor, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Vec3_Ref v2, gdouble factor, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 interpolate (const Graphene::Vec3_Ref v2, gdouble factor) const noexcept;

// float graphene_vec3_length (const graphene_vec3_t* v /*none*/);
// gfloat graphene_vec3_length (const ::graphene_vec3_t* v /*none*/);
GI_INLINE_DECL gfloat length () const noexcept;

// void graphene_vec3_max (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_max (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void max (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 max (const Graphene::Vec3_Ref b) const noexcept;

// void graphene_vec3_min (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_min (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void min (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 min (const Graphene::Vec3_Ref b) const noexcept;

// void graphene_vec3_multiply (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_multiply (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void multiply (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 multiply (const Graphene::Vec3_Ref b) const noexcept;

// _Bool graphene_vec3_near (const graphene_vec3_t* v1 /*none*/, const graphene_vec3_t* v2 /*none*/, float epsilon);
// gboolean graphene_vec3_near (const ::graphene_vec3_t* v1 /*none*/, const ::graphene_vec3_t* v2 /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Vec3_Ref v2, gfloat epsilon) const noexcept;

// void graphene_vec3_negate (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_negate (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void negate (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 negate () const noexcept;

// void graphene_vec3_normalize (const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_normalize (const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 normalize () const noexcept;

// void graphene_vec3_scale (const graphene_vec3_t* v /*none*/, float factor, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_scale (const ::graphene_vec3_t* v /*none*/, gfloat factor, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 scale (gfloat factor) const noexcept;

// void graphene_vec3_subtract (const graphene_vec3_t* a /*none*/, const graphene_vec3_t* b /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_vec3_subtract (const ::graphene_vec3_t* a /*none*/, const ::graphene_vec3_t* b /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void subtract (const Graphene::Vec3_Ref b, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 subtract (const Graphene::Vec3_Ref b) const noexcept;

// void graphene_vec3_to_float (const graphene_vec3_t* v /*none*/, float* dest /*none,out,ca*/);
// void graphene_vec3_to_float (const ::graphene_vec3_t* v /*none*/, gfloat* dest /*none,out,ca*/);
GI_INLINE_DECL void to_float (gfloat dest[3]) const noexcept;

// const graphene_vec3_t* /*none*/ graphene_vec3_one ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_one ();
static GI_INLINE_DECL Graphene::Vec3_Ref one () noexcept;

// const graphene_vec3_t* /*none*/ graphene_vec3_x_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_x_axis ();
static GI_INLINE_DECL Graphene::Vec3_Ref x_axis () noexcept;

// const graphene_vec3_t* /*none*/ graphene_vec3_y_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_y_axis ();
static GI_INLINE_DECL Graphene::Vec3_Ref y_axis () noexcept;

// const graphene_vec3_t* /*none*/ graphene_vec3_z_axis ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_z_axis ();
static GI_INLINE_DECL Graphene::Vec3_Ref z_axis () noexcept;

// const graphene_vec3_t* /*none*/ graphene_vec3_zero ();
// const ::graphene_vec3_t* /*none*/ graphene_vec3_zero ();
static GI_INLINE_DECL Graphene::Vec3_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/vec3_extra_def.hpp>)
#include <graphene/vec3_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/vec3_extra.hpp>)
#include <graphene/vec3_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Vec3_Ref;

class Vec3 : public gi::detail::GBoxedWrapper<Vec3, ::graphene_vec3_t, GI_GRAPHENE_VEC3_BASE, Vec3_Ref>
{ typedef gi::detail::GBoxedWrapper<Vec3, ::graphene_vec3_t, GI_GRAPHENE_VEC3_BASE, Vec3_Ref> super_type; using super_type::super_type; };


class Vec3_Ref : public gi::detail::GBoxedRefWrapper<Vec3, ::graphene_vec3_t, GI_GRAPHENE_VEC3_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Vec3, ::graphene_vec3_t, GI_GRAPHENE_VEC3_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_vec3_t>
{ typedef Graphene::Vec3 type; }; 

} // namespace repository

} // namespace gi

#endif
