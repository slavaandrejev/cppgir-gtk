// AUTO-GENERATED

#ifndef _GI_GRAPHENE_QUATERNION_HPP_
#define _GI_GRAPHENE_QUATERNION_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Euler;
class Euler_Ref;
class Matrix;
class Matrix_Ref;
class Quaternion_Ref;
class Vec3;
class Vec3_Ref;
class Vec4;
class Vec4_Ref;

class Quaternion;

namespace base {


#define GI_GRAPHENE_QUATERNION_BASE base::QuaternionBase
class QuaternionBase : public gi::detail::GBoxedWrapperBase<QuaternionBase, ::graphene_quaternion_t>
{
typedef gi::detail::GBoxedWrapperBase<QuaternionBase, ::graphene_quaternion_t> super_type;
public:

QuaternionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_quaternion_get_type(); } 

// graphene_quaternion_t* /*full*/ graphene_quaternion_alloc ();
// ::graphene_quaternion_t* /*full*/ graphene_quaternion_alloc ();
static GI_INLINE_DECL Graphene::Quaternion alloc () noexcept;

// void graphene_quaternion_add (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_add (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void add (const Graphene::Quaternion_Ref b, Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion add (const Graphene::Quaternion_Ref b) const noexcept;

// float graphene_quaternion_dot (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/);
// gfloat graphene_quaternion_dot (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/);
GI_INLINE_DECL gfloat dot (const Graphene::Quaternion_Ref b) const noexcept;

// _Bool graphene_quaternion_equal (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/);
// gboolean graphene_quaternion_equal (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Quaternion_Ref b) const noexcept;

// void graphene_quaternion_free (graphene_quaternion_t* q /*none*/);
// void graphene_quaternion_free (::graphene_quaternion_t* q /*none*/);
// IGNORE; marked ignore

// graphene_quaternion_t* /*none*/ graphene_quaternion_init (graphene_quaternion_t* q /*none*/, float x, float y, float z, float w);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init (::graphene_quaternion_t* q /*none*/, gfloat x, gfloat y, gfloat z, gfloat w);
GI_INLINE_DECL Graphene::Quaternion_Ref init (gfloat x, gfloat y, gfloat z, gfloat w) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angle_vec3 (graphene_quaternion_t* q /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angle_vec3 (::graphene_quaternion_t* q /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_angle_vec3 (gfloat angle, const Graphene::Vec3_Ref axis) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angles (graphene_quaternion_t* q /*none*/, float deg_x, float deg_y, float deg_z);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_angles (::graphene_quaternion_t* q /*none*/, gfloat deg_x, gfloat deg_y, gfloat deg_z);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_angles (gfloat deg_x, gfloat deg_y, gfloat deg_z) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_euler (graphene_quaternion_t* q /*none*/, const graphene_euler_t* e /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_euler (::graphene_quaternion_t* q /*none*/, const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_euler (const Graphene::Euler_Ref e) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_matrix (graphene_quaternion_t* q /*none*/, const graphene_matrix_t* m /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_matrix (::graphene_quaternion_t* q /*none*/, const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_matrix (const Graphene::Matrix_Ref m) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_quaternion (graphene_quaternion_t* q /*none*/, const graphene_quaternion_t* src /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_quaternion (::graphene_quaternion_t* q /*none*/, const ::graphene_quaternion_t* src /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_quaternion (const Graphene::Quaternion_Ref src) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_radians (graphene_quaternion_t* q /*none*/, float rad_x, float rad_y, float rad_z);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_radians (::graphene_quaternion_t* q /*none*/, gfloat rad_x, gfloat rad_y, gfloat rad_z);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_radians (gfloat rad_x, gfloat rad_y, gfloat rad_z) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_vec4 (graphene_quaternion_t* q /*none*/, const graphene_vec4_t* src /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_from_vec4 (::graphene_quaternion_t* q /*none*/, const ::graphene_vec4_t* src /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_from_vec4 (const Graphene::Vec4_Ref src) noexcept;

// graphene_quaternion_t* /*none*/ graphene_quaternion_init_identity (graphene_quaternion_t* q /*none*/);
// ::graphene_quaternion_t* /*none*/ graphene_quaternion_init_identity (::graphene_quaternion_t* q /*none*/);
GI_INLINE_DECL Graphene::Quaternion_Ref init_identity () noexcept;

// void graphene_quaternion_invert (const graphene_quaternion_t* q /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_invert (const ::graphene_quaternion_t* q /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void invert (Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion invert () const noexcept;

// void graphene_quaternion_multiply (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_multiply (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void multiply (const Graphene::Quaternion_Ref b, Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion multiply (const Graphene::Quaternion_Ref b) const noexcept;

// void graphene_quaternion_normalize (const graphene_quaternion_t* q /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_normalize (const ::graphene_quaternion_t* q /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion normalize () const noexcept;

// void graphene_quaternion_scale (const graphene_quaternion_t* q /*none*/, float factor, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_scale (const ::graphene_quaternion_t* q /*none*/, gfloat factor, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion scale (gfloat factor) const noexcept;

// void graphene_quaternion_slerp (const graphene_quaternion_t* a /*none*/, const graphene_quaternion_t* b /*none*/, float factor, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_quaternion_slerp (const ::graphene_quaternion_t* a /*none*/, const ::graphene_quaternion_t* b /*none*/, gfloat factor, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void slerp (const Graphene::Quaternion_Ref b, gfloat factor, Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion slerp (const Graphene::Quaternion_Ref b, gfloat factor) const noexcept;

// void graphene_quaternion_to_angle_vec3 (const graphene_quaternion_t* q /*none*/, float* angle, graphene_vec3_t* axis /*none,out,ca*/);
// void graphene_quaternion_to_angle_vec3 (const ::graphene_quaternion_t* q /*none*/, gfloat* angle, ::graphene_vec3_t* axis /*none,out,ca*/);
GI_INLINE_DECL void to_angle_vec3 (gfloat & angle, Graphene::Vec3 & axis) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, Graphene::Vec3> to_angle_vec3 () const noexcept;

// void graphene_quaternion_to_angles (const graphene_quaternion_t* q /*none*/, float* deg_x, float* deg_y, float* deg_z);
// void graphene_quaternion_to_angles (const ::graphene_quaternion_t* q /*none*/, gfloat* deg_x, gfloat* deg_y, gfloat* deg_z);
GI_INLINE_DECL void to_angles (gfloat * deg_x, gfloat * deg_y, gfloat * deg_z) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat> to_angles () const noexcept;

// void graphene_quaternion_to_matrix (const graphene_quaternion_t* q /*none*/, graphene_matrix_t* m /*none,out,ca*/);
// void graphene_quaternion_to_matrix (const ::graphene_quaternion_t* q /*none*/, ::graphene_matrix_t* m /*none,out,ca*/);
GI_INLINE_DECL void to_matrix (Graphene::Matrix & m) const noexcept;
GI_INLINE_DECL Graphene::Matrix to_matrix () const noexcept;

// void graphene_quaternion_to_radians (const graphene_quaternion_t* q /*none*/, float* rad_x, float* rad_y, float* rad_z);
// void graphene_quaternion_to_radians (const ::graphene_quaternion_t* q /*none*/, gfloat* rad_x, gfloat* rad_y, gfloat* rad_z);
GI_INLINE_DECL void to_radians (gfloat * rad_x, gfloat * rad_y, gfloat * rad_z) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat> to_radians () const noexcept;

// void graphene_quaternion_to_vec4 (const graphene_quaternion_t* q /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_quaternion_to_vec4 (const ::graphene_quaternion_t* q /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void to_vec4 (Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 to_vec4 () const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/quaternion_extra_def.hpp>)
#include <graphene/quaternion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/quaternion_extra.hpp>)
#include <graphene/quaternion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Quaternion_Ref;

class Quaternion : public gi::detail::GBoxedWrapper<Quaternion, ::graphene_quaternion_t, GI_GRAPHENE_QUATERNION_BASE, Quaternion_Ref>
{ typedef gi::detail::GBoxedWrapper<Quaternion, ::graphene_quaternion_t, GI_GRAPHENE_QUATERNION_BASE, Quaternion_Ref> super_type; using super_type::super_type; };


class Quaternion_Ref : public gi::detail::GBoxedRefWrapper<Quaternion, ::graphene_quaternion_t, GI_GRAPHENE_QUATERNION_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Quaternion, ::graphene_quaternion_t, GI_GRAPHENE_QUATERNION_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_quaternion_t>
{ typedef Graphene::Quaternion type; }; 

} // namespace repository

} // namespace gi

#endif
