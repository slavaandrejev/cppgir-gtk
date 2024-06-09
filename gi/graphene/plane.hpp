// AUTO-GENERATED

#ifndef _GI_GRAPHENE_PLANE_HPP_
#define _GI_GRAPHENE_PLANE_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Matrix;
class Matrix_Ref;
class Plane_Ref;
class Point3D;
class Point3D_Ref;
class Vec3;
class Vec3_Ref;
class Vec4;
class Vec4_Ref;

class Plane;

namespace base {


#define GI_GRAPHENE_PLANE_BASE base::PlaneBase
class PlaneBase : public gi::detail::GBoxedWrapperBase<PlaneBase, ::graphene_plane_t>
{
typedef gi::detail::GBoxedWrapperBase<PlaneBase, ::graphene_plane_t> super_type;
public:

PlaneBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_plane_get_type(); } 

// graphene_plane_t* /*full*/ graphene_plane_alloc ();
// ::graphene_plane_t* /*full*/ graphene_plane_alloc ();
static GI_INLINE_DECL Graphene::Plane alloc () noexcept;

// float graphene_plane_distance (const graphene_plane_t* p /*none*/, const graphene_point3d_t* point /*none*/);
// gfloat graphene_plane_distance (const ::graphene_plane_t* p /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL gfloat distance (const Graphene::Point3D_Ref point) const noexcept;

// _Bool graphene_plane_equal (const graphene_plane_t* a /*none*/, const graphene_plane_t* b /*none*/);
// gboolean graphene_plane_equal (const ::graphene_plane_t* a /*none*/, const ::graphene_plane_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Plane_Ref b) const noexcept;

// void graphene_plane_free (graphene_plane_t* p /*none*/);
// void graphene_plane_free (::graphene_plane_t* p /*none*/);
// IGNORE; marked ignore

// float graphene_plane_get_constant (const graphene_plane_t* p /*none*/);
// gfloat graphene_plane_get_constant (const ::graphene_plane_t* p /*none*/);
GI_INLINE_DECL gfloat get_constant () const noexcept;

// void graphene_plane_get_normal (const graphene_plane_t* p /*none*/, graphene_vec3_t* normal /*none,out,ca*/);
// void graphene_plane_get_normal (const ::graphene_plane_t* p /*none*/, ::graphene_vec3_t* normal /*none,out,ca*/);
GI_INLINE_DECL void get_normal (Graphene::Vec3 & normal) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_normal () const noexcept;

// graphene_plane_t* /*none*/ graphene_plane_init (graphene_plane_t* p /*none*/, const graphene_vec3_t* normal /*none,nullable*/, float constant);
// ::graphene_plane_t* /*none*/ graphene_plane_init (::graphene_plane_t* p /*none*/, const ::graphene_vec3_t* normal /*none,nullable*/, gfloat constant);
GI_INLINE_DECL Graphene::Plane_Ref init (const Graphene::Vec3_Ref normal, gfloat constant) noexcept;
GI_INLINE_DECL Graphene::Plane_Ref init (gfloat constant) noexcept;

// graphene_plane_t* /*none*/ graphene_plane_init_from_plane (graphene_plane_t* p /*none*/, const graphene_plane_t* src /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_plane (::graphene_plane_t* p /*none*/, const ::graphene_plane_t* src /*none*/);
GI_INLINE_DECL Graphene::Plane_Ref init_from_plane (const Graphene::Plane_Ref src) noexcept;

// graphene_plane_t* /*none*/ graphene_plane_init_from_point (graphene_plane_t* p /*none*/, const graphene_vec3_t* normal /*none*/, const graphene_point3d_t* point /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_point (::graphene_plane_t* p /*none*/, const ::graphene_vec3_t* normal /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL Graphene::Plane_Ref init_from_point (const Graphene::Vec3_Ref normal, const Graphene::Point3D_Ref point) noexcept;

// graphene_plane_t* /*none*/ graphene_plane_init_from_points (graphene_plane_t* p /*none*/, const graphene_point3d_t* a /*none*/, const graphene_point3d_t* b /*none*/, const graphene_point3d_t* c /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_points (::graphene_plane_t* p /*none*/, const ::graphene_point3d_t* a /*none*/, const ::graphene_point3d_t* b /*none*/, const ::graphene_point3d_t* c /*none*/);
GI_INLINE_DECL Graphene::Plane_Ref init_from_points (const Graphene::Point3D_Ref a, const Graphene::Point3D_Ref b, const Graphene::Point3D_Ref c) noexcept;

// graphene_plane_t* /*none*/ graphene_plane_init_from_vec4 (graphene_plane_t* p /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_plane_t* /*none*/ graphene_plane_init_from_vec4 (::graphene_plane_t* p /*none*/, const ::graphene_vec4_t* src /*none*/);
GI_INLINE_DECL Graphene::Plane_Ref init_from_vec4 (const Graphene::Vec4_Ref src) noexcept;

// void graphene_plane_negate (const graphene_plane_t* p /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_negate (const ::graphene_plane_t* p /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
GI_INLINE_DECL void negate (Graphene::Plane & res) const noexcept;
GI_INLINE_DECL Graphene::Plane negate () const noexcept;

// void graphene_plane_normalize (const graphene_plane_t* p /*none*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_normalize (const ::graphene_plane_t* p /*none*/, ::graphene_plane_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Plane & res) const noexcept;
GI_INLINE_DECL Graphene::Plane normalize () const noexcept;

// void graphene_plane_transform (const graphene_plane_t* p /*none*/, const graphene_matrix_t* matrix /*none*/, const graphene_matrix_t* normal_matrix /*none,nullable*/, graphene_plane_t* res /*none,out,ca*/);
// void graphene_plane_transform (const ::graphene_plane_t* p /*none*/, const ::graphene_matrix_t* matrix /*none*/, const ::graphene_matrix_t* normal_matrix /*none,nullable*/, ::graphene_plane_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform (const Graphene::Matrix_Ref matrix, const Graphene::Matrix_Ref normal_matrix, Graphene::Plane & res) const noexcept;
GI_INLINE_DECL void transform (const Graphene::Matrix_Ref matrix, Graphene::Plane & res) const noexcept;
GI_INLINE_DECL Graphene::Plane transform (const Graphene::Matrix_Ref matrix, const Graphene::Matrix_Ref normal_matrix) const noexcept;
GI_INLINE_DECL Graphene::Plane transform (const Graphene::Matrix_Ref matrix) const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/plane_extra_def.hpp>)
#include <graphene/plane_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/plane_extra.hpp>)
#include <graphene/plane_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Plane_Ref;

class Plane : public gi::detail::GBoxedWrapper<Plane, ::graphene_plane_t, GI_GRAPHENE_PLANE_BASE, Plane_Ref>
{ typedef gi::detail::GBoxedWrapper<Plane, ::graphene_plane_t, GI_GRAPHENE_PLANE_BASE, Plane_Ref> super_type; using super_type::super_type; };


class Plane_Ref : public gi::detail::GBoxedRefWrapper<Plane, ::graphene_plane_t, GI_GRAPHENE_PLANE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Plane, ::graphene_plane_t, GI_GRAPHENE_PLANE_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_plane_t>
{ typedef Graphene::Plane type; }; 

} // namespace repository

} // namespace gi

#endif
