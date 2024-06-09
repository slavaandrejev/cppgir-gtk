// AUTO-GENERATED

#ifndef _GI_GRAPHENE_POINT3D_HPP_
#define _GI_GRAPHENE_POINT3D_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Point3D_Ref;
class Rect;
class Rect_Ref;
class Vec3;
class Vec3_Ref;

class Point3D;

namespace base {


#define GI_GRAPHENE_POINT3D_BASE base::Point3DBase
class Point3DBase : public gi::detail::GBoxedWrapperBase<Point3DBase, ::graphene_point3d_t>
{
typedef gi::detail::GBoxedWrapperBase<Point3DBase, ::graphene_point3d_t> super_type;
public:

Point3DBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_point3d_get_type(); } 

// gfloat Point3D::x (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::x (const ::graphene_point3d_t* obj /*none*/);
GI_INLINE_DECL gfloat x_ () const noexcept;

//  Point3D::x (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::x (::graphene_point3d_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void x_ (gfloat _value) noexcept;

// gfloat Point3D::y (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::y (const ::graphene_point3d_t* obj /*none*/);
GI_INLINE_DECL gfloat y_ () const noexcept;

//  Point3D::y (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::y (::graphene_point3d_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void y_ (gfloat _value) noexcept;

// gfloat Point3D::z (const ::graphene_point3d_t* obj /*none*/);
// gfloat Point3D::z (const ::graphene_point3d_t* obj /*none*/);
GI_INLINE_DECL gfloat z_ () const noexcept;

//  Point3D::z (::graphene_point3d_t* obj /*none*/, gfloat _value);
// void Point3D::z (::graphene_point3d_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void z_ (gfloat _value) noexcept;

// graphene_point3d_t* /*full*/ graphene_point3d_alloc ();
// ::graphene_point3d_t* /*full*/ graphene_point3d_alloc ();
static GI_INLINE_DECL Graphene::Point3D alloc () noexcept;

// void graphene_point3d_cross (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_cross (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void cross (const Graphene::Point3D_Ref b, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D cross (const Graphene::Point3D_Ref b) const noexcept;

// float graphene_point3d_distance (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, graphene_vec3_t* delta /*none,out,opt,ca*/);
// gfloat graphene_point3d_distance (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, ::graphene_vec3_t* delta /*none,out,opt,ca*/);
GI_INLINE_DECL gfloat distance (const Graphene::Point3D_Ref b, Graphene::Vec3 * delta) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, Graphene::Vec3> distance (const Graphene::Point3D_Ref b) const noexcept;

// float graphene_point3d_dot (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/);
// gfloat graphene_point3d_dot (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/);
GI_INLINE_DECL gfloat dot (const Graphene::Point3D_Ref b) const noexcept;

// _Bool graphene_point3d_equal (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/);
// gboolean graphene_point3d_equal (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Point3D_Ref b) const noexcept;

// void graphene_point3d_free (graphene_point3d_t* p /*none*/);
// void graphene_point3d_free (::graphene_point3d_t* p /*none*/);
// IGNORE; marked ignore

// graphene_point3d_t* /*none*/ graphene_point3d_init (graphene_point3d_t* p /*none*/, float x, float y, float z);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init (::graphene_point3d_t* p /*none*/, gfloat x, gfloat y, gfloat z);
GI_INLINE_DECL Graphene::Point3D_Ref init (gfloat x, gfloat y, gfloat z) noexcept;

// graphene_point3d_t* /*none*/ graphene_point3d_init_from_point (graphene_point3d_t* p /*none*/, const graphene_point3d_t* src /*none*/);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init_from_point (::graphene_point3d_t* p /*none*/, const ::graphene_point3d_t* src /*none*/);
GI_INLINE_DECL Graphene::Point3D_Ref init_from_point (const Graphene::Point3D_Ref src) noexcept;

// graphene_point3d_t* /*none*/ graphene_point3d_init_from_vec3 (graphene_point3d_t* p /*none*/, const graphene_vec3_t* v /*none*/);
// ::graphene_point3d_t* /*none*/ graphene_point3d_init_from_vec3 (::graphene_point3d_t* p /*none*/, const ::graphene_vec3_t* v /*none*/);
GI_INLINE_DECL Graphene::Point3D_Ref init_from_vec3 (const Graphene::Vec3_Ref v) noexcept;

// void graphene_point3d_interpolate (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, double factor, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_interpolate (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, gdouble factor, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Point3D_Ref b, gdouble factor, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D interpolate (const Graphene::Point3D_Ref b, gdouble factor) const noexcept;

// float graphene_point3d_length (const graphene_point3d_t* p /*none*/);
// gfloat graphene_point3d_length (const ::graphene_point3d_t* p /*none*/);
GI_INLINE_DECL gfloat length () const noexcept;

// _Bool graphene_point3d_near (const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, float epsilon);
// gboolean graphene_point3d_near (const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Point3D_Ref b, gfloat epsilon) const noexcept;

// void graphene_point3d_normalize (const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_normalize (const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D normalize () const noexcept;

// void graphene_point3d_normalize_viewport (const graphene_point3d_t* p /*none*/, const graphene_rect_t* viewport /*none*/, float z_near, float z_far, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_normalize_viewport (const ::graphene_point3d_t* p /*none*/, const ::graphene_rect_t* viewport /*none*/, gfloat z_near, gfloat z_far, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize_viewport (const Graphene::Rect_Ref viewport, gfloat z_near, gfloat z_far, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D normalize_viewport (const Graphene::Rect_Ref viewport, gfloat z_near, gfloat z_far) const noexcept;

// void graphene_point3d_scale (const graphene_point3d_t* p /*none*/, float factor, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_point3d_scale (const ::graphene_point3d_t* p /*none*/, gfloat factor, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D scale (gfloat factor) const noexcept;

// void graphene_point3d_to_vec3 (const graphene_point3d_t* p /*none*/, graphene_vec3_t* v /*none,out,ca*/);
// void graphene_point3d_to_vec3 (const ::graphene_point3d_t* p /*none*/, ::graphene_vec3_t* v /*none,out,ca*/);
GI_INLINE_DECL void to_vec3 (Graphene::Vec3 & v) const noexcept;
GI_INLINE_DECL Graphene::Vec3 to_vec3 () const noexcept;

// const graphene_point3d_t* /*none*/ graphene_point3d_zero ();
// const ::graphene_point3d_t* /*none*/ graphene_point3d_zero ();
static GI_INLINE_DECL Graphene::Point3D_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/point3d_extra_def.hpp>)
#include <graphene/point3d_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/point3d_extra.hpp>)
#include <graphene/point3d_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Point3D_Ref;

class Point3D : public gi::detail::GBoxedWrapper<Point3D, ::graphene_point3d_t, GI_GRAPHENE_POINT3D_BASE, Point3D_Ref>
{ typedef gi::detail::GBoxedWrapper<Point3D, ::graphene_point3d_t, GI_GRAPHENE_POINT3D_BASE, Point3D_Ref> super_type; using super_type::super_type; };


class Point3D_Ref : public gi::detail::GBoxedRefWrapper<Point3D, ::graphene_point3d_t, GI_GRAPHENE_POINT3D_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Point3D, ::graphene_point3d_t, GI_GRAPHENE_POINT3D_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_point3d_t>
{ typedef Graphene::Point3D type; }; 

} // namespace repository

} // namespace gi

#endif
