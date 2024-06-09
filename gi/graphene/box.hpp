// AUTO-GENERATED

#ifndef _GI_GRAPHENE_BOX_HPP_
#define _GI_GRAPHENE_BOX_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box_Ref;
class Point3D;
class Point3D_Ref;
class Sphere;
class Sphere_Ref;
class Vec3;
class Vec3_Ref;

class Box;

namespace base {


#define GI_GRAPHENE_BOX_BASE base::BoxBase
class BoxBase : public gi::detail::GBoxedWrapperBase<BoxBase, ::graphene_box_t>
{
typedef gi::detail::GBoxedWrapperBase<BoxBase, ::graphene_box_t> super_type;
public:

BoxBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_box_get_type(); } 

// graphene_box_t* /*full*/ graphene_box_alloc ();
// ::graphene_box_t* /*full*/ graphene_box_alloc ();
static GI_INLINE_DECL Graphene::Box alloc () noexcept;

// _Bool graphene_box_contains_box (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_box_contains_box (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/);
GI_INLINE_DECL bool contains_box (const Graphene::Box_Ref b) const noexcept;

// _Bool graphene_box_contains_point (const graphene_box_t* box /*none*/, const graphene_point3d_t* point /*none*/);
// gboolean graphene_box_contains_point (const ::graphene_box_t* box /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point3D_Ref point) const noexcept;

// _Bool graphene_box_equal (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/);
// gboolean graphene_box_equal (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Box_Ref b) const noexcept;

// void graphene_box_expand (const graphene_box_t* box /*none*/, const graphene_point3d_t* point /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand (const ::graphene_box_t* box /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void expand (const Graphene::Point3D_Ref point, Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box expand (const Graphene::Point3D_Ref point) const noexcept;

// void graphene_box_expand_scalar (const graphene_box_t* box /*none*/, float scalar, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand_scalar (const ::graphene_box_t* box /*none*/, gfloat scalar, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void expand_scalar (gfloat scalar, Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box expand_scalar (gfloat scalar) const noexcept;

// void graphene_box_expand_vec3 (const graphene_box_t* box /*none*/, const graphene_vec3_t* vec /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_expand_vec3 (const ::graphene_box_t* box /*none*/, const ::graphene_vec3_t* vec /*none*/, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void expand_vec3 (const Graphene::Vec3_Ref vec, Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box expand_vec3 (const Graphene::Vec3_Ref vec) const noexcept;

// void graphene_box_free (graphene_box_t* box /*none*/);
// void graphene_box_free (::graphene_box_t* box /*none*/);
// IGNORE; marked ignore

// void graphene_box_get_bounding_sphere (const graphene_box_t* box /*none*/, graphene_sphere_t* sphere /*none,out,ca*/);
// void graphene_box_get_bounding_sphere (const ::graphene_box_t* box /*none*/, ::graphene_sphere_t* sphere /*none,out,ca*/);
GI_INLINE_DECL void get_bounding_sphere (Graphene::Sphere & sphere) const noexcept;
GI_INLINE_DECL Graphene::Sphere get_bounding_sphere () const noexcept;

// void graphene_box_get_center (const graphene_box_t* box /*none*/, graphene_point3d_t* center /*none,out,ca*/);
// void graphene_box_get_center (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* center /*none,out,ca*/);
GI_INLINE_DECL void get_center (Graphene::Point3D & center) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_center () const noexcept;

// float graphene_box_get_depth (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_depth (const ::graphene_box_t* box /*none*/);
GI_INLINE_DECL gfloat get_depth () const noexcept;

// float graphene_box_get_height (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_height (const ::graphene_box_t* box /*none*/);
GI_INLINE_DECL gfloat get_height () const noexcept;

// void graphene_box_get_max (const graphene_box_t* box /*none*/, graphene_point3d_t* max /*none,out,ca*/);
// void graphene_box_get_max (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* max /*none,out,ca*/);
GI_INLINE_DECL void get_max (Graphene::Point3D & max) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_max () const noexcept;

// void graphene_box_get_min (const graphene_box_t* box /*none*/, graphene_point3d_t* min /*none,out,ca*/);
// void graphene_box_get_min (const ::graphene_box_t* box /*none*/, ::graphene_point3d_t* min /*none,out,ca*/);
GI_INLINE_DECL void get_min (Graphene::Point3D & min) const noexcept;
GI_INLINE_DECL Graphene::Point3D get_min () const noexcept;

// void graphene_box_get_size (const graphene_box_t* box /*none*/, graphene_vec3_t* size /*none,out,ca*/);
// void graphene_box_get_size (const ::graphene_box_t* box /*none*/, ::graphene_vec3_t* size /*none,out,ca*/);
GI_INLINE_DECL void get_size (Graphene::Vec3 & size) const noexcept;
GI_INLINE_DECL Graphene::Vec3 get_size () const noexcept;

// void graphene_box_get_vertices (const graphene_box_t* box /*none*/, graphene_vec3_t* vertices /*none,out,ca*/);
// void graphene_box_get_vertices (const ::graphene_box_t* box /*none*/, ::graphene_vec3_t** vertices /*none,out,ca*/);
// SKIP; vertices out boxed array not supported (depth 1)

// float graphene_box_get_width (const graphene_box_t* box /*none*/);
// gfloat graphene_box_get_width (const ::graphene_box_t* box /*none*/);
GI_INLINE_DECL gfloat get_width () const noexcept;

// graphene_box_t* /*none*/ graphene_box_init (graphene_box_t* box /*none*/, const graphene_point3d_t* min /*none,nullable*/, const graphene_point3d_t* max /*none,nullable*/);
// ::graphene_box_t* /*none*/ graphene_box_init (::graphene_box_t* box /*none*/, const ::graphene_point3d_t* min /*none,nullable*/, const ::graphene_point3d_t* max /*none,nullable*/);
GI_INLINE_DECL Graphene::Box_Ref init (const Graphene::Point3D_Ref min, const Graphene::Point3D_Ref max) noexcept;
GI_INLINE_DECL Graphene::Box_Ref init () noexcept;

// graphene_box_t* /*none*/ graphene_box_init_from_box (graphene_box_t* box /*none*/, const graphene_box_t* src /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_box (::graphene_box_t* box /*none*/, const ::graphene_box_t* src /*none*/);
GI_INLINE_DECL Graphene::Box_Ref init_from_box (const Graphene::Box_Ref src) noexcept;

// graphene_box_t* /*none*/ graphene_box_init_from_points (graphene_box_t* box /*none*/, unsigned int n_points, const graphene_point3d_t* points /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_points (::graphene_box_t* box /*none*/, guint n_points, const ::graphene_point3d_t** points /*none*/);
// SKIP; points in boxed array not supported (depth 1)

// graphene_box_t* /*none*/ graphene_box_init_from_vec3 (graphene_box_t* box /*none*/, const graphene_vec3_t* min /*none,nullable*/, const graphene_vec3_t* max /*none,nullable*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_vec3 (::graphene_box_t* box /*none*/, const ::graphene_vec3_t* min /*none,nullable*/, const ::graphene_vec3_t* max /*none,nullable*/);
GI_INLINE_DECL Graphene::Box_Ref init_from_vec3 (const Graphene::Vec3_Ref min, const Graphene::Vec3_Ref max) noexcept;
GI_INLINE_DECL Graphene::Box_Ref init_from_vec3 () noexcept;

// graphene_box_t* /*none*/ graphene_box_init_from_vectors (graphene_box_t* box /*none*/, unsigned int n_vectors, const graphene_vec3_t* vectors /*none*/);
// ::graphene_box_t* /*none*/ graphene_box_init_from_vectors (::graphene_box_t* box /*none*/, guint n_vectors, const ::graphene_vec3_t** vectors /*none*/);
// SKIP; vectors in boxed array not supported (depth 1)

// _Bool graphene_box_intersection (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,opt,ca*/);
// gboolean graphene_box_intersection (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,opt,ca*/);
GI_INLINE_DECL bool intersection (const Graphene::Box_Ref b, Graphene::Box * res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Box> intersection (const Graphene::Box_Ref b) const noexcept;

// void graphene_box_union (const graphene_box_t* a /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_box_union (const ::graphene_box_t* a /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void union_ (const Graphene::Box_Ref b, Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box union_ (const Graphene::Box_Ref b) const noexcept;

// const graphene_box_t* /*none*/ graphene_box_empty ();
// const ::graphene_box_t* /*none*/ graphene_box_empty ();
static GI_INLINE_DECL Graphene::Box_Ref empty () noexcept;

// const graphene_box_t* /*none*/ graphene_box_infinite ();
// const ::graphene_box_t* /*none*/ graphene_box_infinite ();
static GI_INLINE_DECL Graphene::Box_Ref infinite () noexcept;

// const graphene_box_t* /*none*/ graphene_box_minus_one ();
// const ::graphene_box_t* /*none*/ graphene_box_minus_one ();
static GI_INLINE_DECL Graphene::Box_Ref minus_one () noexcept;

// const graphene_box_t* /*none*/ graphene_box_one ();
// const ::graphene_box_t* /*none*/ graphene_box_one ();
static GI_INLINE_DECL Graphene::Box_Ref one () noexcept;

// const graphene_box_t* /*none*/ graphene_box_one_minus_one ();
// const ::graphene_box_t* /*none*/ graphene_box_one_minus_one ();
static GI_INLINE_DECL Graphene::Box_Ref one_minus_one () noexcept;

// const graphene_box_t* /*none*/ graphene_box_zero ();
// const ::graphene_box_t* /*none*/ graphene_box_zero ();
static GI_INLINE_DECL Graphene::Box_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/box_extra_def.hpp>)
#include <graphene/box_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/box_extra.hpp>)
#include <graphene/box_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Box_Ref;

class Box : public gi::detail::GBoxedWrapper<Box, ::graphene_box_t, GI_GRAPHENE_BOX_BASE, Box_Ref>
{ typedef gi::detail::GBoxedWrapper<Box, ::graphene_box_t, GI_GRAPHENE_BOX_BASE, Box_Ref> super_type; using super_type::super_type; };


class Box_Ref : public gi::detail::GBoxedRefWrapper<Box, ::graphene_box_t, GI_GRAPHENE_BOX_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Box, ::graphene_box_t, GI_GRAPHENE_BOX_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_box_t>
{ typedef Graphene::Box type; }; 

} // namespace repository

} // namespace gi

#endif
