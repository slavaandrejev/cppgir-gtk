// AUTO-GENERATED

#ifndef _GI_GRAPHENE_EULER_HPP_
#define _GI_GRAPHENE_EULER_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Euler_Ref;
class Matrix;
class Matrix_Ref;
class Quaternion;
class Quaternion_Ref;
class Vec3;
class Vec3_Ref;

class Euler;

namespace base {


#define GI_GRAPHENE_EULER_BASE base::EulerBase
class EulerBase : public gi::detail::GBoxedWrapperBase<EulerBase, ::graphene_euler_t>
{
typedef gi::detail::GBoxedWrapperBase<EulerBase, ::graphene_euler_t> super_type;
public:

EulerBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_euler_get_type(); } 

// graphene_euler_t* /*full*/ graphene_euler_alloc ();
// ::graphene_euler_t* /*full*/ graphene_euler_alloc ();
static GI_INLINE_DECL Graphene::Euler alloc () noexcept;

// _Bool graphene_euler_equal (const graphene_euler_t* a /*none*/, const graphene_euler_t* b /*none*/);
// gboolean graphene_euler_equal (const ::graphene_euler_t* a /*none*/, const ::graphene_euler_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Euler_Ref b) const noexcept;

// void graphene_euler_free (graphene_euler_t* e /*none*/);
// void graphene_euler_free (::graphene_euler_t* e /*none*/);
// IGNORE; marked ignore

// float graphene_euler_get_alpha (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_alpha (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_alpha () const noexcept;

// float graphene_euler_get_beta (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_beta (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_beta () const noexcept;

// float graphene_euler_get_gamma (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_gamma (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_gamma () const noexcept;

// graphene_euler_order_t graphene_euler_get_order (const graphene_euler_t* e /*none*/);
// ::graphene_euler_order_t graphene_euler_get_order (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL Graphene::EulerOrder get_order () const noexcept;

// float graphene_euler_get_x (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_x (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_x () const noexcept;

// float graphene_euler_get_y (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_y (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_y () const noexcept;

// float graphene_euler_get_z (const graphene_euler_t* e /*none*/);
// gfloat graphene_euler_get_z (const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL gfloat get_z () const noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init (graphene_euler_t* e /*none*/, float x, float y, float z);
// ::graphene_euler_t* /*none*/ graphene_euler_init (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z);
GI_INLINE_DECL Graphene::Euler_Ref init (gfloat x, gfloat y, gfloat z) noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_from_euler (graphene_euler_t* e /*none*/, const graphene_euler_t* src /*none,nullable*/);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_euler (::graphene_euler_t* e /*none*/, const ::graphene_euler_t* src /*none,nullable*/);
GI_INLINE_DECL Graphene::Euler_Ref init_from_euler (const Graphene::Euler_Ref src) noexcept;
GI_INLINE_DECL Graphene::Euler_Ref init_from_euler () noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_from_matrix (graphene_euler_t* e /*none*/, const graphene_matrix_t* m /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_matrix (::graphene_euler_t* e /*none*/, const ::graphene_matrix_t* m /*none,nullable*/, ::graphene_euler_order_t order);
GI_INLINE_DECL Graphene::Euler_Ref init_from_matrix (const Graphene::Matrix_Ref m, Graphene::EulerOrder order) noexcept;
GI_INLINE_DECL Graphene::Euler_Ref init_from_matrix (Graphene::EulerOrder order) noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_from_quaternion (graphene_euler_t* e /*none*/, const graphene_quaternion_t* q /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_quaternion (::graphene_euler_t* e /*none*/, const ::graphene_quaternion_t* q /*none,nullable*/, ::graphene_euler_order_t order);
GI_INLINE_DECL Graphene::Euler_Ref init_from_quaternion (const Graphene::Quaternion_Ref q, Graphene::EulerOrder order) noexcept;
GI_INLINE_DECL Graphene::Euler_Ref init_from_quaternion (Graphene::EulerOrder order) noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_from_radians (graphene_euler_t* e /*none*/, float x, float y, float z, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_radians (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
GI_INLINE_DECL Graphene::Euler_Ref init_from_radians (gfloat x, gfloat y, gfloat z, Graphene::EulerOrder order) noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_from_vec3 (graphene_euler_t* e /*none*/, const graphene_vec3_t* v /*none,nullable*/, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_from_vec3 (::graphene_euler_t* e /*none*/, const ::graphene_vec3_t* v /*none,nullable*/, ::graphene_euler_order_t order);
GI_INLINE_DECL Graphene::Euler_Ref init_from_vec3 (const Graphene::Vec3_Ref v, Graphene::EulerOrder order) noexcept;
GI_INLINE_DECL Graphene::Euler_Ref init_from_vec3 (Graphene::EulerOrder order) noexcept;

// graphene_euler_t* /*none*/ graphene_euler_init_with_order (graphene_euler_t* e /*none*/, float x, float y, float z, graphene_euler_order_t order);
// ::graphene_euler_t* /*none*/ graphene_euler_init_with_order (::graphene_euler_t* e /*none*/, gfloat x, gfloat y, gfloat z, ::graphene_euler_order_t order);
GI_INLINE_DECL Graphene::Euler_Ref init_with_order (gfloat x, gfloat y, gfloat z, Graphene::EulerOrder order) noexcept;

// void graphene_euler_reorder (const graphene_euler_t* e /*none*/, graphene_euler_order_t order, graphene_euler_t* res /*none,out,ca*/);
// void graphene_euler_reorder (const ::graphene_euler_t* e /*none*/, ::graphene_euler_order_t order, ::graphene_euler_t* res /*none,out,ca*/);
GI_INLINE_DECL void reorder (Graphene::EulerOrder order, Graphene::Euler & res) const noexcept;
GI_INLINE_DECL Graphene::Euler reorder (Graphene::EulerOrder order) const noexcept;

// void graphene_euler_to_matrix (const graphene_euler_t* e /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_euler_to_matrix (const ::graphene_euler_t* e /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void to_matrix (Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix to_matrix () const noexcept;

// void graphene_euler_to_quaternion (const graphene_euler_t* e /*none*/, graphene_quaternion_t* res /*none,out,ca*/);
// void graphene_euler_to_quaternion (const ::graphene_euler_t* e /*none*/, ::graphene_quaternion_t* res /*none,out,ca*/);
GI_INLINE_DECL void to_quaternion (Graphene::Quaternion & res) const noexcept;
GI_INLINE_DECL Graphene::Quaternion to_quaternion () const noexcept;

// void graphene_euler_to_vec3 (const graphene_euler_t* e /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_euler_to_vec3 (const ::graphene_euler_t* e /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void to_vec3 (Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 to_vec3 () const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/euler_extra_def.hpp>)
#include <graphene/euler_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/euler_extra.hpp>)
#include <graphene/euler_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Euler_Ref;

class Euler : public gi::detail::GBoxedWrapper<Euler, ::graphene_euler_t, GI_GRAPHENE_EULER_BASE, Euler_Ref>
{ typedef gi::detail::GBoxedWrapper<Euler, ::graphene_euler_t, GI_GRAPHENE_EULER_BASE, Euler_Ref> super_type; using super_type::super_type; };


class Euler_Ref : public gi::detail::GBoxedRefWrapper<Euler, ::graphene_euler_t, GI_GRAPHENE_EULER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Euler, ::graphene_euler_t, GI_GRAPHENE_EULER_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_euler_t>
{ typedef Graphene::Euler type; }; 

} // namespace repository

} // namespace gi

#endif
