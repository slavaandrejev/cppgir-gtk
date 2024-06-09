// AUTO-GENERATED

#ifndef _GI_GSK_TRANSFORM_HPP_
#define _GI_GSK_TRANSFORM_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Transform_Ref;

class Transform;

namespace base {


#define GI_GSK_TRANSFORM_BASE base::TransformBase
class TransformBase : public gi::detail::GBoxedWrapperBase<TransformBase, ::GskTransform>
{
typedef gi::detail::GBoxedWrapperBase<TransformBase, ::GskTransform> super_type;
public:

TransformBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_transform_get_type(); } 

// GskTransform* /*full*/ gsk_transform_new ();
// ::GskTransform* /*full*/ gsk_transform_new ();
static GI_INLINE_DECL Gsk::Transform new_ () noexcept;

// gboolean gsk_transform_equal (GskTransform* first /*none,nullable*/, GskTransform* second /*none,nullable*/);
// gboolean gsk_transform_equal (::GskTransform* first /*none,nullable*/, ::GskTransform* second /*none,nullable*/);
GI_INLINE_DECL bool equal (Gsk::Transform_Ref second) noexcept;
GI_INLINE_DECL bool equal () noexcept;

// GskTransformCategory gsk_transform_get_category (GskTransform* self /*none,nullable*/);
// ::GskTransformCategory gsk_transform_get_category (::GskTransform* self /*none,nullable*/);
GI_INLINE_DECL Gsk::TransformCategory get_category () noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_invert (GskTransform* self /*full,nullable*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_invert (::GskTransform* self /*full,nullable*/);
GI_INLINE_DECL Gsk::Transform invert () noexcept;

// GskTransform* /*full*/ gsk_transform_matrix (GskTransform* next /*full,nullable*/, const graphene_matrix_t* matrix /*none*/);
// ::GskTransform* /*full*/ gsk_transform_matrix (::GskTransform* next /*full,nullable*/, const ::graphene_matrix_t* matrix /*none*/);
GI_INLINE_DECL Gsk::Transform matrix (const Graphene::Matrix_Ref matrix) noexcept;

// GskTransform* /*full*/ gsk_transform_perspective (GskTransform* next /*full,nullable*/, float depth);
// ::GskTransform* /*full*/ gsk_transform_perspective (::GskTransform* next /*full,nullable*/, gfloat depth);
GI_INLINE_DECL Gsk::Transform perspective (gfloat depth) noexcept;

// void gsk_transform_print (GskTransform* self /*none,nullable*/, GString* string /*none*/);
// void gsk_transform_print (::GskTransform* self /*none,nullable*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) noexcept;

// GskTransform* /*none,nullable*/ gsk_transform_ref (GskTransform* self /*none,nullable*/);
// ::GskTransform* /*none,nullable*/ gsk_transform_ref (::GskTransform* self /*none,nullable*/);
// IGNORE; marked ignore

// GskTransform* /*full,nullable*/ gsk_transform_rotate (GskTransform* next /*full,nullable*/, float angle);
// ::GskTransform* /*full,nullable*/ gsk_transform_rotate (::GskTransform* next /*full,nullable*/, gfloat angle);
GI_INLINE_DECL Gsk::Transform rotate (gfloat angle) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_rotate_3d (GskTransform* next /*full,nullable*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_rotate_3d (::GskTransform* next /*full,nullable*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
GI_INLINE_DECL Gsk::Transform rotate_3d (gfloat angle, const Graphene::Vec3_Ref axis) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_scale (GskTransform* next /*full,nullable*/, float factor_x, float factor_y);
// ::GskTransform* /*full,nullable*/ gsk_transform_scale (::GskTransform* next /*full,nullable*/, gfloat factor_x, gfloat factor_y);
GI_INLINE_DECL Gsk::Transform scale (gfloat factor_x, gfloat factor_y) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_scale_3d (GskTransform* next /*full,nullable*/, float factor_x, float factor_y, float factor_z);
// ::GskTransform* /*full,nullable*/ gsk_transform_scale_3d (::GskTransform* next /*full,nullable*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
GI_INLINE_DECL Gsk::Transform scale_3d (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_skew (GskTransform* next /*full,nullable*/, float skew_x, float skew_y);
// ::GskTransform* /*full,nullable*/ gsk_transform_skew (::GskTransform* next /*full,nullable*/, gfloat skew_x, gfloat skew_y);
GI_INLINE_DECL Gsk::Transform skew (gfloat skew_x, gfloat skew_y) noexcept;

// void gsk_transform_to_2d (GskTransform* self /*none*/, float* out_xx, float* out_yx, float* out_xy, float* out_yy, float* out_dx, float* out_dy);
// void gsk_transform_to_2d (::GskTransform* self /*none*/, gfloat* out_xx, gfloat* out_yx, gfloat* out_xy, gfloat* out_yy, gfloat* out_dx, gfloat* out_dy);
GI_INLINE_DECL void to_2d (gfloat & out_xx, gfloat & out_yx, gfloat & out_xy, gfloat & out_yy, gfloat & out_dx, gfloat & out_dy) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat, gfloat, gfloat, gfloat> to_2d () noexcept;

// void gsk_transform_to_2d_components (GskTransform* self /*none*/, float* out_skew_x, float* out_skew_y, float* out_scale_x, float* out_scale_y, float* out_angle, float* out_dx, float* out_dy);
// void gsk_transform_to_2d_components (::GskTransform* self /*none*/, gfloat* out_skew_x, gfloat* out_skew_y, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_angle, gfloat* out_dx, gfloat* out_dy);
GI_INLINE_DECL void to_2d_components (gfloat & out_skew_x, gfloat & out_skew_y, gfloat & out_scale_x, gfloat & out_scale_y, gfloat & out_angle, gfloat & out_dx, gfloat & out_dy) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat, gfloat, gfloat, gfloat, gfloat> to_2d_components () noexcept;

// void gsk_transform_to_affine (GskTransform* self /*none*/, float* out_scale_x, float* out_scale_y, float* out_dx, float* out_dy);
// void gsk_transform_to_affine (::GskTransform* self /*none*/, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_dx, gfloat* out_dy);
GI_INLINE_DECL void to_affine (gfloat & out_scale_x, gfloat & out_scale_y, gfloat & out_dx, gfloat & out_dy) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat, gfloat> to_affine () noexcept;

// void gsk_transform_to_matrix (GskTransform* self /*none,nullable*/, graphene_matrix_t* out_matrix /*none,out,ca*/);
// void gsk_transform_to_matrix (::GskTransform* self /*none,nullable*/, ::graphene_matrix_t* out_matrix /*none,out,ca*/);
GI_INLINE_DECL void to_matrix (Graphene::Matrix & out_matrix) noexcept;
GI_INLINE_DECL Graphene::Matrix to_matrix () noexcept;

// char* /*full*/ gsk_transform_to_string (GskTransform* self /*none,nullable*/);
// char* /*full*/ gsk_transform_to_string (::GskTransform* self /*none,nullable*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// void gsk_transform_to_translate (GskTransform* self /*none*/, float* out_dx, float* out_dy);
// void gsk_transform_to_translate (::GskTransform* self /*none*/, gfloat* out_dx, gfloat* out_dy);
GI_INLINE_DECL void to_translate (gfloat & out_dx, gfloat & out_dy) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat> to_translate () noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_transform (GskTransform* next /*full,nullable*/, GskTransform* other /*none,nullable*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_transform (::GskTransform* next /*full,nullable*/, ::GskTransform* other /*none,nullable*/);
GI_INLINE_DECL Gsk::Transform transform (Gsk::Transform_Ref other) noexcept;
GI_INLINE_DECL Gsk::Transform transform () noexcept;

// void gsk_transform_transform_bounds (GskTransform* self /*none*/, const graphene_rect_t* rect /*none*/, graphene_rect_t* out_rect /*none,out,ca*/);
// void gsk_transform_transform_bounds (::GskTransform* self /*none*/, const ::graphene_rect_t* rect /*none*/, ::graphene_rect_t* out_rect /*none,out,ca*/);
GI_INLINE_DECL void transform_bounds (const Graphene::Rect_Ref rect, Graphene::Rect & out_rect) noexcept;
GI_INLINE_DECL Graphene::Rect transform_bounds (const Graphene::Rect_Ref rect) noexcept;

// void gsk_transform_transform_point (GskTransform* self /*none*/, const graphene_point_t* point /*none*/, graphene_point_t* out_point /*none,out,ca*/);
// void gsk_transform_transform_point (::GskTransform* self /*none*/, const ::graphene_point_t* point /*none*/, ::graphene_point_t* out_point /*none,out,ca*/);
GI_INLINE_DECL void transform_point (const Graphene::Point_Ref point, Graphene::Point & out_point) noexcept;
GI_INLINE_DECL Graphene::Point transform_point (const Graphene::Point_Ref point) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_translate (GskTransform* next /*full,nullable*/, const graphene_point_t* point /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_translate (::GskTransform* next /*full,nullable*/, const ::graphene_point_t* point /*none*/);
GI_INLINE_DECL Gsk::Transform translate (const Graphene::Point_Ref point) noexcept;

// GskTransform* /*full,nullable*/ gsk_transform_translate_3d (GskTransform* next /*full,nullable*/, const graphene_point3d_t* point /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_translate_3d (::GskTransform* next /*full,nullable*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL Gsk::Transform translate_3d (const Graphene::Point3D_Ref point) noexcept;

// void gsk_transform_unref (GskTransform* self /*none,nullable*/);
// void gsk_transform_unref (::GskTransform* self /*none,nullable*/);
// IGNORE; marked ignore

// gboolean gsk_transform_parse (const char* string /*none*/, GskTransform** out_transform /*full,out*/);
// gboolean gsk_transform_parse (const char* string /*none*/, ::GskTransform** out_transform /*full,out*/);
static GI_INLINE_DECL bool parse (const gi::cstring_v string, Gsk::Transform & out_transform) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gsk::Transform> parse (const gi::cstring_v string) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/transform_extra_def.hpp>)
#include <gsk/transform_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/transform_extra.hpp>)
#include <gsk/transform_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class Transform_Ref;

class Transform : public gi::detail::GBoxedWrapper<Transform, ::GskTransform, GI_GSK_TRANSFORM_BASE, Transform_Ref>
{ typedef gi::detail::GBoxedWrapper<Transform, ::GskTransform, GI_GSK_TRANSFORM_BASE, Transform_Ref> super_type; using super_type::super_type; };


class Transform_Ref : public gi::detail::GBoxedRefWrapper<Transform, ::GskTransform, GI_GSK_TRANSFORM_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Transform, ::GskTransform, GI_GSK_TRANSFORM_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskTransform>
{ typedef Gsk::Transform type; }; 

} // namespace repository

} // namespace gi

#endif
