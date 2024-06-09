// AUTO-GENERATED

#ifndef _GI_GRAPHENE_MATRIX_HPP_
#define _GI_GRAPHENE_MATRIX_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Box;
class Box_Ref;
class Euler;
class Euler_Ref;
class Matrix_Ref;
class Point;
class Point3D;
class Point3D_Ref;
class Point_Ref;
class Quad;
class Quad_Ref;
class Quaternion;
class Quaternion_Ref;
class Ray;
class Ray_Ref;
class Rect;
class Rect_Ref;
class Sphere;
class Sphere_Ref;
class Vec3;
class Vec3_Ref;
class Vec4;
class Vec4_Ref;

class Matrix;

namespace base {


#define GI_GRAPHENE_MATRIX_BASE base::MatrixBase
class MatrixBase : public gi::detail::GBoxedWrapperBase<MatrixBase, ::graphene_matrix_t>
{
typedef gi::detail::GBoxedWrapperBase<MatrixBase, ::graphene_matrix_t> super_type;
public:

MatrixBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_matrix_get_type(); } 

// graphene_matrix_t* /*full*/ graphene_matrix_alloc ();
// ::graphene_matrix_t* /*full*/ graphene_matrix_alloc ();
static GI_INLINE_DECL Graphene::Matrix alloc () noexcept;

// _Bool graphene_matrix_decompose (const graphene_matrix_t* m /*none*/, graphene_vec3_t* translate /*none,out,ca*/, graphene_vec3_t* scale /*none,out,ca*/, graphene_quaternion_t* rotate /*none,out,ca*/, graphene_vec3_t* shear /*none,out,ca*/, graphene_vec4_t* perspective /*none,out,ca*/);
// gboolean graphene_matrix_decompose (const ::graphene_matrix_t* m /*none*/, ::graphene_vec3_t* translate /*none,out,ca*/, ::graphene_vec3_t* scale /*none,out,ca*/, ::graphene_quaternion_t* rotate /*none,out,ca*/, ::graphene_vec3_t* shear /*none,out,ca*/, ::graphene_vec4_t* perspective /*none,out,ca*/);
GI_INLINE_DECL bool decompose (Graphene::Vec3 & translate, Graphene::Vec3 & scale, Graphene::Quaternion & rotate, Graphene::Vec3 & shear, Graphene::Vec4 & perspective) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Vec3, Graphene::Vec3, Graphene::Quaternion, Graphene::Vec3, Graphene::Vec4> decompose () const noexcept;

// float graphene_matrix_determinant (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_determinant (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat determinant () const noexcept;

// _Bool graphene_matrix_equal (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/);
// gboolean graphene_matrix_equal (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Matrix_Ref b) const noexcept;

// _Bool graphene_matrix_equal_fast (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/);
// gboolean graphene_matrix_equal_fast (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/);
GI_INLINE_DECL bool equal_fast (const Graphene::Matrix_Ref b) const noexcept;

// void graphene_matrix_free (graphene_matrix_t* m /*none*/);
// void graphene_matrix_free (::graphene_matrix_t* m /*none*/);
// IGNORE; marked ignore

// void graphene_matrix_get_row (const graphene_matrix_t* m /*none*/, unsigned int index_, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_matrix_get_row (const ::graphene_matrix_t* m /*none*/, guint index_, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void get_row (guint index_, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 get_row (guint index_) const noexcept;

// float graphene_matrix_get_value (const graphene_matrix_t* m /*none*/, unsigned int row, unsigned int col);
// gfloat graphene_matrix_get_value (const ::graphene_matrix_t* m /*none*/, guint row, guint col);
GI_INLINE_DECL gfloat get_value (guint row, guint col) const noexcept;

// float graphene_matrix_get_x_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_x_scale (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_x_scale () const noexcept;

// float graphene_matrix_get_x_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_x_translation (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_x_translation () const noexcept;

// float graphene_matrix_get_y_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_y_scale (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_y_scale () const noexcept;

// float graphene_matrix_get_y_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_y_translation (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_y_translation () const noexcept;

// float graphene_matrix_get_z_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_z_scale (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_z_scale () const noexcept;

// float graphene_matrix_get_z_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_z_translation (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL gfloat get_z_translation () const noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_2d (graphene_matrix_t* m /*none*/, double xx, double yx, double xy, double yy, double x_0, double y_0);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_2d (::graphene_matrix_t* m /*none*/, gdouble xx, gdouble yx, gdouble xy, gdouble yy, gdouble x_0, gdouble y_0);
GI_INLINE_DECL Graphene::Matrix_Ref init_from_2d (gdouble xx, gdouble yx, gdouble xy, gdouble yy, gdouble x_0, gdouble y_0) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_float (graphene_matrix_t* m /*none*/, const float* v /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_float (::graphene_matrix_t* m /*none*/, const gfloat* v /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_from_float (gi::CollectionParameter<gi::FSpan<16>, gfloat, gi::transfer_none_t> v) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_matrix (graphene_matrix_t* m /*none*/, const graphene_matrix_t* src /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_matrix (::graphene_matrix_t* m /*none*/, const ::graphene_matrix_t* src /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_from_matrix (const Graphene::Matrix_Ref src) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_vec4 (graphene_matrix_t* m /*none*/, const graphene_vec4_t* v0 /*none*/, const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, const graphene_vec4_t* v3 /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_vec4 (::graphene_matrix_t* m /*none*/, const ::graphene_vec4_t* v0 /*none*/, const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, const ::graphene_vec4_t* v3 /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_from_vec4 (const Graphene::Vec4_Ref v0, const Graphene::Vec4_Ref v1, const Graphene::Vec4_Ref v2, const Graphene::Vec4_Ref v3) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_frustum (graphene_matrix_t* m /*none*/, float left, float right, float bottom, float top, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_frustum (::graphene_matrix_t* m /*none*/, gfloat left, gfloat right, gfloat bottom, gfloat top, gfloat z_near, gfloat z_far);
GI_INLINE_DECL Graphene::Matrix_Ref init_frustum (gfloat left, gfloat right, gfloat bottom, gfloat top, gfloat z_near, gfloat z_far) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_identity (graphene_matrix_t* m /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_identity (::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_identity () noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_look_at (graphene_matrix_t* m /*none*/, const graphene_vec3_t* eye /*none*/, const graphene_vec3_t* center /*none*/, const graphene_vec3_t* up /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_look_at (::graphene_matrix_t* m /*none*/, const ::graphene_vec3_t* eye /*none*/, const ::graphene_vec3_t* center /*none*/, const ::graphene_vec3_t* up /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_look_at (const Graphene::Vec3_Ref eye, const Graphene::Vec3_Ref center, const Graphene::Vec3_Ref up) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_ortho (graphene_matrix_t* m /*none*/, float left, float right, float top, float bottom, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_ortho (::graphene_matrix_t* m /*none*/, gfloat left, gfloat right, gfloat top, gfloat bottom, gfloat z_near, gfloat z_far);
GI_INLINE_DECL Graphene::Matrix_Ref init_ortho (gfloat left, gfloat right, gfloat top, gfloat bottom, gfloat z_near, gfloat z_far) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_perspective (graphene_matrix_t* m /*none*/, float fovy, float aspect, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_perspective (::graphene_matrix_t* m /*none*/, gfloat fovy, gfloat aspect, gfloat z_near, gfloat z_far);
GI_INLINE_DECL Graphene::Matrix_Ref init_perspective (gfloat fovy, gfloat aspect, gfloat z_near, gfloat z_far) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_rotate (graphene_matrix_t* m /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_rotate (::graphene_matrix_t* m /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_rotate (gfloat angle, const Graphene::Vec3_Ref axis) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_scale (graphene_matrix_t* m /*none*/, float x, float y, float z);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_scale (::graphene_matrix_t* m /*none*/, gfloat x, gfloat y, gfloat z);
GI_INLINE_DECL Graphene::Matrix_Ref init_scale (gfloat x, gfloat y, gfloat z) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_skew (graphene_matrix_t* m /*none*/, float x_skew, float y_skew);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_skew (::graphene_matrix_t* m /*none*/, gfloat x_skew, gfloat y_skew);
GI_INLINE_DECL Graphene::Matrix_Ref init_skew (gfloat x_skew, gfloat y_skew) noexcept;

// graphene_matrix_t* /*none*/ graphene_matrix_init_translate (graphene_matrix_t* m /*none*/, const graphene_point3d_t* p /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_translate (::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* p /*none*/);
GI_INLINE_DECL Graphene::Matrix_Ref init_translate (const Graphene::Point3D_Ref p) noexcept;

// void graphene_matrix_interpolate (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, double factor, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_interpolate (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, gdouble factor, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Matrix_Ref b, gdouble factor, Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix interpolate (const Graphene::Matrix_Ref b, gdouble factor) const noexcept;

// _Bool graphene_matrix_inverse (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// gboolean graphene_matrix_inverse (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL bool inverse (Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Matrix> inverse () const noexcept;

// _Bool graphene_matrix_is_2d (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_2d (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL bool is_2d () const noexcept;

// _Bool graphene_matrix_is_backface_visible (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_backface_visible (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL bool is_backface_visible () const noexcept;

// _Bool graphene_matrix_is_identity (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_identity (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL bool is_identity () const noexcept;

// _Bool graphene_matrix_is_singular (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_singular (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL bool is_singular () const noexcept;

// void graphene_matrix_multiply (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_multiply (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void multiply (const Graphene::Matrix_Ref b, Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix multiply (const Graphene::Matrix_Ref b) const noexcept;

// _Bool graphene_matrix_near (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, float epsilon);
// gboolean graphene_matrix_near (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, gfloat epsilon);
GI_INLINE_DECL bool near (const Graphene::Matrix_Ref b, gfloat epsilon) const noexcept;

// void graphene_matrix_normalize (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_normalize (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void normalize (Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix normalize () const noexcept;

// void graphene_matrix_perspective (const graphene_matrix_t* m /*none*/, float depth, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_perspective (const ::graphene_matrix_t* m /*none*/, gfloat depth, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void perspective (gfloat depth, Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix perspective (gfloat depth) const noexcept;

// void graphene_matrix_print (const graphene_matrix_t* m /*none*/);
// void graphene_matrix_print (const ::graphene_matrix_t* m /*none*/);
GI_INLINE_DECL void print () const noexcept;

// void graphene_matrix_project_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, graphene_point_t* res /*none,out,ca*/);
// void graphene_matrix_project_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_point_t* res /*none,out,ca*/);
GI_INLINE_DECL void project_point (const Graphene::Point_Ref p, Graphene::Point & res) const noexcept;
GI_INLINE_DECL Graphene::Point project_point (const Graphene::Point_Ref p) const noexcept;

// void graphene_matrix_project_rect (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_quad_t* res /*none,out,ca*/);
// void graphene_matrix_project_rect (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_quad_t* res /*none,out,ca*/);
GI_INLINE_DECL void project_rect (const Graphene::Rect_Ref r, Graphene::Quad & res) const noexcept;
GI_INLINE_DECL Graphene::Quad project_rect (const Graphene::Rect_Ref r) const noexcept;

// void graphene_matrix_project_rect_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_project_rect_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void project_rect_bounds (const Graphene::Rect_Ref r, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect project_rect_bounds (const Graphene::Rect_Ref r) const noexcept;

// void graphene_matrix_rotate (graphene_matrix_t* m /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// void graphene_matrix_rotate (::graphene_matrix_t* m /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
GI_INLINE_DECL void rotate (gfloat angle, const Graphene::Vec3_Ref axis) noexcept;

// void graphene_matrix_rotate_euler (graphene_matrix_t* m /*none*/, const graphene_euler_t* e /*none*/);
// void graphene_matrix_rotate_euler (::graphene_matrix_t* m /*none*/, const ::graphene_euler_t* e /*none*/);
GI_INLINE_DECL void rotate_euler (const Graphene::Euler_Ref e) noexcept;

// void graphene_matrix_rotate_quaternion (graphene_matrix_t* m /*none*/, const graphene_quaternion_t* q /*none*/);
// void graphene_matrix_rotate_quaternion (::graphene_matrix_t* m /*none*/, const ::graphene_quaternion_t* q /*none*/);
GI_INLINE_DECL void rotate_quaternion (const Graphene::Quaternion_Ref q) noexcept;

// void graphene_matrix_rotate_x (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_x (::graphene_matrix_t* m /*none*/, gfloat angle);
GI_INLINE_DECL void rotate_x (gfloat angle) noexcept;

// void graphene_matrix_rotate_y (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_y (::graphene_matrix_t* m /*none*/, gfloat angle);
GI_INLINE_DECL void rotate_y (gfloat angle) noexcept;

// void graphene_matrix_rotate_z (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_z (::graphene_matrix_t* m /*none*/, gfloat angle);
GI_INLINE_DECL void rotate_z (gfloat angle) noexcept;

// void graphene_matrix_scale (graphene_matrix_t* m /*none*/, float factor_x, float factor_y, float factor_z);
// void graphene_matrix_scale (::graphene_matrix_t* m /*none*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
GI_INLINE_DECL void scale (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept;

// void graphene_matrix_skew_xy (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_xy (::graphene_matrix_t* m /*none*/, gfloat factor);
GI_INLINE_DECL void skew_xy (gfloat factor) noexcept;

// void graphene_matrix_skew_xz (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_xz (::graphene_matrix_t* m /*none*/, gfloat factor);
GI_INLINE_DECL void skew_xz (gfloat factor) noexcept;

// void graphene_matrix_skew_yz (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_yz (::graphene_matrix_t* m /*none*/, gfloat factor);
GI_INLINE_DECL void skew_yz (gfloat factor) noexcept;

// _Bool graphene_matrix_to_2d (const graphene_matrix_t* m /*none*/, double* xx, double* yx, double* xy, double* yy, double* x_0, double* y_0);
// gboolean graphene_matrix_to_2d (const ::graphene_matrix_t* m /*none*/, gdouble* xx, gdouble* yx, gdouble* xy, gdouble* yy, gdouble* x_0, gdouble* y_0);
GI_INLINE_DECL bool to_2d (gdouble & xx, gdouble & yx, gdouble & xy, gdouble & yy, gdouble & x_0, gdouble & y_0) const noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, gdouble, gdouble, gdouble, gdouble> to_2d () const noexcept;

// void graphene_matrix_to_float (const graphene_matrix_t* m /*none*/, float* v /*none,out,ca*/);
// void graphene_matrix_to_float (const ::graphene_matrix_t* m /*none*/, gfloat* v /*none,out,ca*/);
GI_INLINE_DECL void to_float (gfloat v[16]) const noexcept;

// void graphene_matrix_transform_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_transform_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_bounds (const Graphene::Rect_Ref r, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect transform_bounds (const Graphene::Rect_Ref r) const noexcept;

// void graphene_matrix_transform_box (const graphene_matrix_t* m /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_matrix_transform_box (const ::graphene_matrix_t* m /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_box (const Graphene::Box_Ref b, Graphene::Box & res) const noexcept;
GI_INLINE_DECL Graphene::Box transform_box (const Graphene::Box_Ref b) const noexcept;

// void graphene_matrix_transform_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, graphene_point_t* res /*none,out,ca*/);
// void graphene_matrix_transform_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_point_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_point (const Graphene::Point_Ref p, Graphene::Point & res) const noexcept;
GI_INLINE_DECL Graphene::Point transform_point (const Graphene::Point_Ref p) const noexcept;

// void graphene_matrix_transform_point3d (const graphene_matrix_t* m /*none*/, const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_matrix_transform_point3d (const ::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_point3d (const Graphene::Point3D_Ref p, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D transform_point3d (const Graphene::Point3D_Ref p) const noexcept;

// void graphene_matrix_transform_ray (const graphene_matrix_t* m /*none*/, const graphene_ray_t* r /*none*/, graphene_ray_t* res /*none,out,ca*/);
// void graphene_matrix_transform_ray (const ::graphene_matrix_t* m /*none*/, const ::graphene_ray_t* r /*none*/, ::graphene_ray_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_ray (const Graphene::Ray_Ref r, Graphene::Ray & res) const noexcept;
GI_INLINE_DECL Graphene::Ray transform_ray (const Graphene::Ray_Ref r) const noexcept;

// void graphene_matrix_transform_rect (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_quad_t* res /*none,out,ca*/);
// void graphene_matrix_transform_rect (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_quad_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_rect (const Graphene::Rect_Ref r, Graphene::Quad & res) const noexcept;
GI_INLINE_DECL Graphene::Quad transform_rect (const Graphene::Rect_Ref r) const noexcept;

// void graphene_matrix_transform_sphere (const graphene_matrix_t* m /*none*/, const graphene_sphere_t* s /*none*/, graphene_sphere_t* res /*none,out,ca*/);
// void graphene_matrix_transform_sphere (const ::graphene_matrix_t* m /*none*/, const ::graphene_sphere_t* s /*none*/, ::graphene_sphere_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_sphere (const Graphene::Sphere_Ref s, Graphene::Sphere & res) const noexcept;
GI_INLINE_DECL Graphene::Sphere transform_sphere (const Graphene::Sphere_Ref s) const noexcept;

// void graphene_matrix_transform_vec3 (const graphene_matrix_t* m /*none*/, const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_matrix_transform_vec3 (const ::graphene_matrix_t* m /*none*/, const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_vec3 (const Graphene::Vec3_Ref v, Graphene::Vec3 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec3 transform_vec3 (const Graphene::Vec3_Ref v) const noexcept;

// void graphene_matrix_transform_vec4 (const graphene_matrix_t* m /*none*/, const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_matrix_transform_vec4 (const ::graphene_matrix_t* m /*none*/, const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
GI_INLINE_DECL void transform_vec4 (const Graphene::Vec4_Ref v, Graphene::Vec4 & res) const noexcept;
GI_INLINE_DECL Graphene::Vec4 transform_vec4 (const Graphene::Vec4_Ref v) const noexcept;

// void graphene_matrix_translate (graphene_matrix_t* m /*none*/, const graphene_point3d_t* pos /*none*/);
// void graphene_matrix_translate (::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* pos /*none*/);
GI_INLINE_DECL void translate (const Graphene::Point3D_Ref pos) noexcept;

// void graphene_matrix_transpose (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_transpose (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
GI_INLINE_DECL void transpose (Graphene::Matrix & res) const noexcept;
GI_INLINE_DECL Graphene::Matrix transpose () const noexcept;

// void graphene_matrix_unproject_point3d (const graphene_matrix_t* projection /*none*/, const graphene_matrix_t* modelview /*none*/, const graphene_point3d_t* point /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_matrix_unproject_point3d (const ::graphene_matrix_t* projection /*none*/, const ::graphene_matrix_t* modelview /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
GI_INLINE_DECL void unproject_point3d (const Graphene::Matrix_Ref modelview, const Graphene::Point3D_Ref point, Graphene::Point3D & res) const noexcept;
GI_INLINE_DECL Graphene::Point3D unproject_point3d (const Graphene::Matrix_Ref modelview, const Graphene::Point3D_Ref point) const noexcept;

// void graphene_matrix_untransform_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, const graphene_rect_t* bounds /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_untransform_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, const ::graphene_rect_t* bounds /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
GI_INLINE_DECL void untransform_bounds (const Graphene::Rect_Ref r, const Graphene::Rect_Ref bounds, Graphene::Rect & res) const noexcept;
GI_INLINE_DECL Graphene::Rect untransform_bounds (const Graphene::Rect_Ref r, const Graphene::Rect_Ref bounds) const noexcept;

// _Bool graphene_matrix_untransform_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, const graphene_rect_t* bounds /*none*/, graphene_point_t* res /*none,out,ca*/);
// gboolean graphene_matrix_untransform_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, const ::graphene_rect_t* bounds /*none*/, ::graphene_point_t* res /*none,out,ca*/);
GI_INLINE_DECL bool untransform_point (const Graphene::Point_Ref p, const Graphene::Rect_Ref bounds, Graphene::Point & res) const noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Point> untransform_point (const Graphene::Point_Ref p, const Graphene::Rect_Ref bounds) const noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/matrix_extra_def.hpp>)
#include <graphene/matrix_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/matrix_extra.hpp>)
#include <graphene/matrix_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Matrix_Ref;

class Matrix : public gi::detail::GBoxedWrapper<Matrix, ::graphene_matrix_t, GI_GRAPHENE_MATRIX_BASE, Matrix_Ref>
{ typedef gi::detail::GBoxedWrapper<Matrix, ::graphene_matrix_t, GI_GRAPHENE_MATRIX_BASE, Matrix_Ref> super_type; using super_type::super_type; };


class Matrix_Ref : public gi::detail::GBoxedRefWrapper<Matrix, ::graphene_matrix_t, GI_GRAPHENE_MATRIX_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Matrix, ::graphene_matrix_t, GI_GRAPHENE_MATRIX_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_matrix_t>
{ typedef Graphene::Matrix type; }; 

} // namespace repository

} // namespace gi

#endif
