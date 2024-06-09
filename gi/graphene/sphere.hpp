// AUTO-GENERATED

#ifndef _GI_GRAPHENE_SPHERE_HPP_
#define _GI_GRAPHENE_SPHERE_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box;
class Box_Ref;
class Point3D;
class Point3D_Ref;
class Sphere_Ref;
class Vec3;
class Vec3_Ref;

class Sphere;

namespace base {


#define GI_GRAPHENE_SPHERE_BASE base::SphereBase
class SphereBase : public gi::detail::GBoxedWrapperBase<SphereBase, ::graphene_sphere_t>
{
typedef gi::detail::GBoxedWrapperBase<SphereBase, ::graphene_sphere_t> super_type;
public:

SphereBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_sphere_get_type(); } 

// graphene_sphere_t* /*full*/ graphene_sphere_alloc ();
// ::graphene_sphere_t* /*full*/ graphene_sphere_alloc ();
static GI_INLINE_DECL Graphene::Sphere alloc () noexcept;

// _Bool graphene_sphere_contains_point (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_sphere_contains_point (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point3D_Ref point) const noexcept;

// float graphene_sphere_distance (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/);
// gfloat graphene_sphere_distance (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL gfloat distance (const Graphene::Point3D_Ref point) const noexcept;

// _Bool graphene_sphere_equal (const graphene_sphere_t* a /*none*/, const graphene_sphere_t* b /*none*/);
// gboolean graphene_sphere_equal (const ::graphene_sphere_t* a /*none*/, const ::graphene_sphere_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Sphere_Ref b) const noexcept;

// void graphene_sphere_free (graphene_sphere_t* s /*none*/);
// void graphene_sphere_free (::graphene_sphere_t* s /*none*/);
// IGNORE; marked ignore

// void graphene_sphere_get_bounding_box (const graphene_sphere_t* s /*none*/, graphene_box_t* box /*none,out,ca*/);
// void graphene_sphere_get_bounding_box (const ::graphene_sphere_t* s /*none*/, ::graphene_box_t* box /*none,out,ca*/);
GI_INLINE_DECL void get_bounding_box (Graphene::Box & box) const noexcept;
GI_INLINE_DECL Graphene::Box get_bounding_box () const noexcept;

// void graphene_sphere_get_center (const graphene_sphere_t* s /*none*/, graphene_point3d_t* center /*none,out,ca*/);
// void graphene_sphere_get_center (const ::graphene_sphere_t* s /*none*/, ::graphene_point3d_t* center /*none,out,ca*/);
GI_INLINE_DECL void get_center (Graphene::Point3D & center) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_center () const noexcept;

// float graphene_sphere_get_radius (const graphene_sphere_t* s /*none*/);
// gfloat graphene_sphere_get_radius (const ::graphene_sphere_t* s /*none*/);
GI_INLINE_DECL gfloat get_radius () const noexcept;

// graphene_sphere_t* /*none*/ graphene_sphere_init (graphene_sphere_t* s /*none*/, const graphene_point3d_t* center /*none,nullable*/, float radius);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init (::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* center /*none,nullable*/, gfloat radius);
GI_INLINE_DECL Graphene::Sphere_Ref init (const Graphene::Point3D_Ref center, gfloat radius) noexcept;
GI_INLINE_DECL Graphene::Sphere_Ref init (gfloat radius) noexcept;

// graphene_sphere_t* /*none*/ graphene_sphere_init_from_points (graphene_sphere_t* s /*none*/, unsigned int n_points, const graphene_point3d_t* points /*none*/, const graphene_point3d_t* center /*none,nullable*/);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init_from_points (::graphene_sphere_t* s /*none*/, guint n_points, const ::graphene_point3d_t** points /*none*/, const ::graphene_point3d_t* center /*none,nullable*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_sphere_t* /*none*/ graphene_sphere_init_from_vectors (graphene_sphere_t* s /*none*/, unsigned int n_vectors, const graphene_vec3_t* vectors /*none*/, const graphene_point3d_t* center /*none,nullable*/);
// ::graphene_sphere_t* /*none*/ graphene_sphere_init_from_vectors (::graphene_sphere_t* s /*none*/, guint n_vectors, const ::graphene_vec3_t** vectors /*none*/, const ::graphene_point3d_t* center /*none,nullable*/);
// SKIP; vectors in boxed array not supported (depth 1)

// _Bool graphene_sphere_is_empty (const graphene_sphere_t* s /*none*/);
// gboolean graphene_sphere_is_empty (const ::graphene_sphere_t* s /*none*/);
GI_INLINE_DECL bool is_empty () const noexcept;

// void graphene_sphere_translate (const graphene_sphere_t* s /*none*/, const graphene_point3d_t* point /*none*/, graphene_sphere_t* res /*none,out,ca*/);
// void graphene_sphere_translate (const ::graphene_sphere_t* s /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_sphere_t* res /*none,out,ca*/);
GI_INLINE_DECL void translate (const Graphene::Point3D_Ref point, Graphene::Sphere & res) const noexcept;
GI_INLINE_DECL Graphene::Sphere translate (const Graphene::Point3D_Ref point) const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/sphere_extra_def.hpp>)
#include <graphene/sphere_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/sphere_extra.hpp>)
#include <graphene/sphere_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Sphere_Ref;

class Sphere : public gi::detail::GBoxedWrapper<Sphere, ::graphene_sphere_t, GI_GRAPHENE_SPHERE_BASE, Sphere_Ref>
{ typedef gi::detail::GBoxedWrapper<Sphere, ::graphene_sphere_t, GI_GRAPHENE_SPHERE_BASE, Sphere_Ref> super_type; using super_type::super_type; };


class Sphere_Ref : public gi::detail::GBoxedRefWrapper<Sphere, ::graphene_sphere_t, GI_GRAPHENE_SPHERE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Sphere, ::graphene_sphere_t, GI_GRAPHENE_SPHERE_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_sphere_t>
{ typedef Graphene::Sphere type; }; 

} // namespace repository

} // namespace gi

#endif
