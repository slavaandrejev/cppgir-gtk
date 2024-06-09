// AUTO-GENERATED

#ifndef _GI_GRAPHENE_FRUSTUM_HPP_
#define _GI_GRAPHENE_FRUSTUM_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box;
class Box_Ref;
class Frustum_Ref;
class Matrix;
class Matrix_Ref;
class Plane;
class Plane_Ref;
class Point3D;
class Point3D_Ref;
class Sphere;
class Sphere_Ref;

class Frustum;

namespace base {


#define GI_GRAPHENE_FRUSTUM_BASE base::FrustumBase
class FrustumBase : public gi::detail::GBoxedWrapperBase<FrustumBase, ::graphene_frustum_t>
{
typedef gi::detail::GBoxedWrapperBase<FrustumBase, ::graphene_frustum_t> super_type;
public:

FrustumBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_frustum_get_type(); } 

// graphene_frustum_t* /*full*/ graphene_frustum_alloc ();
// ::graphene_frustum_t* /*full*/ graphene_frustum_alloc ();
static GI_INLINE_DECL Graphene::Frustum alloc () noexcept;

// _Bool graphene_frustum_contains_point (const graphene_frustum_t* f /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_frustum_contains_point (const ::graphene_frustum_t* f /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point3D_Ref point) const noexcept;

// _Bool graphene_frustum_equal (const graphene_frustum_t* a /*none*/, const graphene_frustum_t* b /*none*/);
// gboolean graphene_frustum_equal (const ::graphene_frustum_t* a /*none*/, const ::graphene_frustum_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Frustum_Ref b) const noexcept;

// void graphene_frustum_free (graphene_frustum_t* f /*none*/);
// void graphene_frustum_free (::graphene_frustum_t* f /*none*/);
// IGNORE; marked ignore

// void graphene_frustum_get_planes (const graphene_frustum_t* f /*none*/, graphene_plane_t* planes /*none,out,ca*/);
// void graphene_frustum_get_planes (const ::graphene_frustum_t* f /*none*/, ::graphene_plane_t** planes /*none,out,ca*/);
// SKIP; planes out boxed array not supported (depth 1)

// graphene_frustum_t* /*none*/ graphene_frustum_init (graphene_frustum_t* f /*none*/, const graphene_plane_t* p0 /*none*/, const graphene_plane_t* p1 /*none*/, const graphene_plane_t* p2 /*none*/, const graphene_plane_t* p3 /*none*/, const graphene_plane_t* p4 /*none*/, const graphene_plane_t* p5 /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init (::graphene_frustum_t* f /*none*/, const ::graphene_plane_t* p0 /*none*/, const ::graphene_plane_t* p1 /*none*/, const ::graphene_plane_t* p2 /*none*/, const ::graphene_plane_t* p3 /*none*/, const ::graphene_plane_t* p4 /*none*/, const ::graphene_plane_t* p5 /*none*/);
GI_INLINE_DECL Graphene::Frustum_Ref init (const Graphene::Plane_Ref p0, const Graphene::Plane_Ref p1, const Graphene::Plane_Ref p2, const Graphene::Plane_Ref p3, const Graphene::Plane_Ref p4, const Graphene::Plane_Ref p5) noexcept;

// graphene_frustum_t* /*none*/ graphene_frustum_init_from_frustum (graphene_frustum_t* f /*none*/, const graphene_frustum_t* src /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init_from_frustum (::graphene_frustum_t* f /*none*/, const ::graphene_frustum_t* src /*none*/);
GI_INLINE_DECL Graphene::Frustum_Ref init_from_frustum (const Graphene::Frustum_Ref src) noexcept;

// graphene_frustum_t* /*none*/ graphene_frustum_init_from_matrix (graphene_frustum_t* f /*none*/, const graphene_matrix_t* matrix /*none*/);
// ::graphene_frustum_t* /*none*/ graphene_frustum_init_from_matrix (::graphene_frustum_t* f /*none*/, const ::graphene_matrix_t* matrix /*none*/);
GI_INLINE_DECL Graphene::Frustum_Ref init_from_matrix (const Graphene::Matrix_Ref matrix) noexcept;

// _Bool graphene_frustum_intersects_box (const graphene_frustum_t* f /*none*/, const graphene_box_t* box /*none*/);
// gboolean graphene_frustum_intersects_box (const ::graphene_frustum_t* f /*none*/, const ::graphene_box_t* box /*none*/);
GI_INLINE_DECL bool intersects_box (const Graphene::Box_Ref box) const noexcept;

// _Bool graphene_frustum_intersects_sphere (const graphene_frustum_t* f /*none*/, const graphene_sphere_t* sphere /*none*/);
// gboolean graphene_frustum_intersects_sphere (const ::graphene_frustum_t* f /*none*/, const ::graphene_sphere_t* sphere /*none*/);
GI_INLINE_DECL bool intersects_sphere (const Graphene::Sphere_Ref sphere) const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/frustum_extra_def.hpp>)
#include <graphene/frustum_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/frustum_extra.hpp>)
#include <graphene/frustum_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Frustum_Ref;

class Frustum : public gi::detail::GBoxedWrapper<Frustum, ::graphene_frustum_t, GI_GRAPHENE_FRUSTUM_BASE, Frustum_Ref>
{ typedef gi::detail::GBoxedWrapper<Frustum, ::graphene_frustum_t, GI_GRAPHENE_FRUSTUM_BASE, Frustum_Ref> super_type; using super_type::super_type; };


class Frustum_Ref : public gi::detail::GBoxedRefWrapper<Frustum, ::graphene_frustum_t, GI_GRAPHENE_FRUSTUM_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Frustum, ::graphene_frustum_t, GI_GRAPHENE_FRUSTUM_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_frustum_t>
{ typedef Graphene::Frustum type; }; 

} // namespace repository

} // namespace gi

#endif
