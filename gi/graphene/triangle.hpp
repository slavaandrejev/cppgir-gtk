// AUTO-GENERATED

#ifndef _GI_GRAPHENE_TRIANGLE_HPP_
#define _GI_GRAPHENE_TRIANGLE_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box;
class Box_Ref;
class Plane;
class Plane_Ref;
class Point3D;
class Point3D_Ref;
class Triangle_Ref;
class Vec2;
class Vec2_Ref;
class Vec3;
class Vec3_Ref;

class Triangle;

namespace base {


#define GI_GRAPHENE_TRIANGLE_BASE base::TriangleBase
class TriangleBase : public gi::detail::GBoxedWrapperBase<TriangleBase, ::graphene_triangle_t>
{
typedef gi::detail::GBoxedWrapperBase<TriangleBase, ::graphene_triangle_t> super_type;
public:

TriangleBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_triangle_get_type(); } 

// graphene_triangle_t* /*full*/ graphene_triangle_alloc ();
// ::graphene_triangle_t* /*full*/ graphene_triangle_alloc ();
static GI_INLINE_DECL Graphene::Triangle alloc () noexcept;

// _Bool graphene_triangle_contains_point (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none*/);
// gboolean graphene_triangle_contains_point (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point3D_Ref p) const noexcept;

// _Bool graphene_triangle_equal (const graphene_triangle_t* a /*none*/, const graphene_triangle_t* b /*none*/);
// gboolean graphene_triangle_equal (const ::graphene_triangle_t* a /*none*/, const ::graphene_triangle_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Triangle_Ref b) const noexcept;

// void graphene_triangle_free (graphene_triangle_t* t /*none*/);
// void graphene_triangle_free (::graphene_triangle_t* t /*none*/);
// IGNORE; marked ignore

// float graphene_triangle_get_area (const graphene_triangle_t* t /*none*/);
// gfloat graphene_triangle_get_area (const ::graphene_triangle_t* t /*none*/);
GI_INLINE_DECL gfloat get_area () const noexcept;

// _Bool graphene_triangle_get_barycoords (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none,nullable*/, graphene_vec2_t* res /*none,out,ca*/);
// gboolean graphene_triangle_get_barycoords (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none,nullable*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL bool get_barycoords (const Graphene::Point3D_Ref p, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL bool get_barycoords (Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Vec2> get_barycoords (const Graphene::Point3D_Ref p) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Vec2> get_barycoords () const noexcept;

// void graphene_triangle_get_bounding_box (const graphene_triangle_t* t /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_triangle_get_bounding_box (const ::graphene_triangle_t* t /*none*/, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_bounding_box (Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box get_bounding_box () const noexcept;

// void graphene_triangle_get_midpoint (const graphene_triangle_t* t /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_triangle_get_midpoint (const ::graphene_triangle_t* t /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_midpoint (Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_midpoint () const noexcept;

// void graphene_triangle_get_normal (const graphene_triangle_t* t /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_triangle_get_normal (const ::graphene_triangle_t* t /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_normal (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_normal () const noexcept;

// void graphene_triangle_get_plane (const graphene_triangle_t* t /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_triangle_get_plane (const ::graphene_triangle_t* t /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_plane (Graphene::Plane & res) const noexcept;
GI_INLINE_DECL Graphene::Plane get_plane () const noexcept;

// void graphene_triangle_get_points (const graphene_triangle_t* t /*none*/, graphene_point3d_t* a /*none,out,opt,ca*/, graphene_point3d_t* b /*none,out,opt,ca*/, graphene_point3d_t* c /*none,out,opt,ca*/);
// void graphene_triangle_get_points (const ::graphene_triangle_t* t /*none*/, ::graphene_point3d_t* a /*none,out,opt,ca*/, ::graphene_point3d_t* b /*none,out,opt,ca*/, ::graphene_point3d_t* c /*none,out,opt,ca*/);
GI_INLINE_DECL void get_points (Graphene::Point3D * a, Graphene::Point3D * b, Graphene::Point3D * c) const noexcept;
GI_INLINE_DECL std::tuple<Graphene::Point3D, Graphene::Point3D, Graphene::Point3D> get_points () const noexcept;

// _Bool graphene_triangle_get_uv (const graphene_triangle_t* t /*none*/, const graphene_point3d_t* p /*none,nullable*/, const graphene_vec2_t* uv_a /*none*/, const graphene_vec2_t* uv_b /*none*/, const graphene_vec2_t* uv_c /*none*/, graphene_vec2_t* res /*none,out,ca*/);
// gboolean graphene_triangle_get_uv (const ::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* p /*none,nullable*/, const ::graphene_vec2_t* uv_a /*none*/, const ::graphene_vec2_t* uv_b /*none*/, const ::graphene_vec2_t* uv_c /*none*/, ::graphene_vec2_t* res /*none,out,ca*/);
GI_INLINE_DECL bool get_uv (const Graphene::Point3D_Ref p, const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL bool get_uv (const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c, Graphene::Vec2 & res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Vec2> get_uv (const Graphene::Point3D_Ref p, const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Vec2> get_uv (const Graphene::Vec2_Ref uv_a, const Graphene::Vec2_Ref uv_b, const Graphene::Vec2_Ref uv_c) const noexcept;

// void graphene_triangle_get_vertices (const graphene_triangle_t* t /*none*/, graphene_vec3_t* a /*none,out,opt,ca*/, graphene_vec3_t* b /*none,out,opt,ca*/, graphene_vec3_t* c /*none,out,opt,ca*/);
// void graphene_triangle_get_vertices (const ::graphene_triangle_t* t /*none*/, ::graphene_vec3_t* a /*none,out,opt,ca*/, ::graphene_vec3_t* b /*none,out,opt,ca*/, ::graphene_vec3_t* c /*none,out,opt,ca*/);
GI_INLINE_DECL void get_vertices (Graphene::Vec3 * a, Graphene::Vec3 * b, Graphene::Vec3 * c) const noexcept;
GI_INLINE_DECL std::tuple<Graphene::Vec3, Graphene::Vec3, Graphene::Vec3> get_vertices () const noexcept;

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_float (graphene_triangle_t* t /*none*/, const float* a /*none*/, const float* b /*none*/, const float* c /*none*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_float (::graphene_triangle_t* t /*none*/, const gfloat* a /*none*/, const gfloat* b /*none*/, const gfloat* c /*none*/);
GI_INLINE_DECL Graphene::Triangle_Ref init_from_float (gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> a, gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> b, gi::CollectionParameter<gi::FSpan<3>, gfloat, gi::transfer_none_t> c) noexcept;

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_point3d (graphene_triangle_t* t /*none*/, const graphene_point3d_t* a /*none,nullable*/, const graphene_point3d_t* b /*none,nullable*/, const graphene_point3d_t* c /*none,nullable*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_point3d (::graphene_triangle_t* t /*none*/, const ::graphene_point3d_t* a /*none,nullable*/, const ::graphene_point3d_t* b /*none,nullable*/, const ::graphene_point3d_t* c /*none,nullable*/);
GI_INLINE_DECL Graphene::Triangle_Ref init_from_point3d (const Graphene::Point3D_Ref a, const Graphene::Point3D_Ref b, const Graphene::Point3D_Ref c) noexcept;
GI_INLINE_DECL Graphene::Triangle_Ref init_from_point3d () noexcept;

// graphene_triangle_t* /*none*/ graphene_triangle_init_from_vec3 (graphene_triangle_t* t /*none*/, const graphene_vec3_t* a /*none,nullable*/, const graphene_vec3_t* b /*none,nullable*/, const graphene_vec3_t* c /*none,nullable*/);
// ::graphene_triangle_t* /*none*/ graphene_triangle_init_from_vec3 (::graphene_triangle_t* t /*none*/, const ::graphene_vec3_t* a /*none,nullable*/, const ::graphene_vec3_t* b /*none,nullable*/, const ::graphene_vec3_t* c /*none,nullable*/);
GI_INLINE_DECL Graphene::Triangle_Ref init_from_vec3 (const Graphene::Vec3_Ref a, const Graphene::Vec3_Ref b, const Graphene::Vec3_Ref c) noexcept;
GI_INLINE_DECL Graphene::Triangle_Ref init_from_vec3 () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/triangle_extra_def.hpp>)
#include <graphene/triangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/triangle_extra.hpp>)
#include <graphene/triangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Triangle_Ref;

class Triangle : public gi::detail::GBoxedWrapper<Triangle, ::graphene_triangle_t, GI_GRAPHENE_TRIANGLE_BASE, Triangle_Ref>
{ typedef gi::detail::GBoxedWrapper<Triangle, ::graphene_triangle_t, GI_GRAPHENE_TRIANGLE_BASE, Triangle_Ref> super_type; using super_type::super_type; };


class Triangle_Ref : public gi::detail::GBoxedRefWrapper<Triangle, ::graphene_triangle_t, GI_GRAPHENE_TRIANGLE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Triangle, ::graphene_triangle_t, GI_GRAPHENE_TRIANGLE_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_triangle_t>
{ typedef Graphene::Triangle type; }; 

} // namespace repository

} // namespace gi

#endif
