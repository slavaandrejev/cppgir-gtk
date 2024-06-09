// AUTO-GENERATED

#ifndef _GI_GRAPHENE_MATRIX_IMPL_HPP_
#define _GI_GRAPHENE_MATRIX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Graphene {

namespace base {

// graphene_matrix_t* /*full*/ graphene_matrix_alloc ();
// ::graphene_matrix_t* /*full*/ graphene_matrix_alloc ();
Graphene::Matrix base::MatrixBase::alloc () noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) graphene_matrix_alloc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// _Bool graphene_matrix_decompose (const graphene_matrix_t* m /*none*/, graphene_vec3_t* translate /*none,out,ca*/, graphene_vec3_t* scale /*none,out,ca*/, graphene_quaternion_t* rotate /*none,out,ca*/, graphene_vec3_t* shear /*none,out,ca*/, graphene_vec4_t* perspective /*none,out,ca*/);
// gboolean graphene_matrix_decompose (const ::graphene_matrix_t* m /*none*/, ::graphene_vec3_t* translate /*none,out,ca*/, ::graphene_vec3_t* scale /*none,out,ca*/, ::graphene_quaternion_t* rotate /*none,out,ca*/, ::graphene_vec3_t* shear /*none,out,ca*/, ::graphene_vec4_t* perspective /*none,out,ca*/);
bool base::MatrixBase::decompose (Graphene::Vec3 & translate, Graphene::Vec3 & scale, Graphene::Quaternion & rotate, Graphene::Vec3 & shear, Graphene::Vec4 & perspective) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_vec3_t* translate, ::graphene_vec3_t* scale, ::graphene_quaternion_t* rotate, ::graphene_vec3_t* shear, ::graphene_vec4_t* perspective);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_decompose;
  detail::allocate(perspective);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(perspective).gobj_()), "");
  detail::allocate(shear);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(shear).gobj_()), "");
  detail::allocate(rotate);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(rotate).gobj_()), "");
  detail::allocate(scale);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(scale).gobj_()), "");
  detail::allocate(translate);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(translate).gobj_()), "");
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (translate).gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (scale).gobj_()), (::graphene_quaternion_t*) ((::graphene_quaternion_t*) (rotate).gobj_()), (::graphene_vec3_t*) ((::graphene_vec3_t*) (shear).gobj_()), (::graphene_vec4_t*) ((::graphene_vec4_t*) (perspective).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Vec3, Graphene::Vec3, Graphene::Quaternion, Graphene::Vec3, Graphene::Vec4> base::MatrixBase::decompose () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_vec3_t* translate, ::graphene_vec3_t* scale, ::graphene_quaternion_t* rotate, ::graphene_vec3_t* shear, ::graphene_vec4_t* perspective);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_decompose;
  Graphene::Vec4 perspective_c;
  auto perspective = &perspective_c;
  detail::allocate(*perspective);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*perspective).gobj_()), "");
  Graphene::Vec3 shear_c;
  auto shear = &shear_c;
  detail::allocate(*shear);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*shear).gobj_()), "");
  Graphene::Quaternion rotate_c;
  auto rotate = &rotate_c;
  detail::allocate(*rotate);
  static_assert(sizeof(::graphene_quaternion_t) == sizeof(*(*rotate).gobj_()), "");
  Graphene::Vec3 scale_c;
  auto scale = &scale_c;
  detail::allocate(*scale);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*scale).gobj_()), "");
  Graphene::Vec3 translate_c;
  auto translate = &translate_c;
  detail::allocate(*translate);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*translate).gobj_()), "");
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_vec3_t*) (translate ? (::graphene_vec3_t*) (*translate).gobj_() : nullptr), (::graphene_vec3_t*) (scale ? (::graphene_vec3_t*) (*scale).gobj_() : nullptr), (::graphene_quaternion_t*) (rotate ? (::graphene_quaternion_t*) (*rotate).gobj_() : nullptr), (::graphene_vec3_t*) (shear ? (::graphene_vec3_t*) (*shear).gobj_() : nullptr), (::graphene_vec4_t*) (perspective ? (::graphene_vec4_t*) (*perspective).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = translate_c;
  auto &&tmp_return_3 = scale_c;
  auto &&tmp_return_4 = rotate_c;
  auto &&tmp_return_5 = shear_c;
  auto &&tmp_return_6 = perspective_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6));
}

// float graphene_matrix_determinant (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_determinant (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::determinant () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_determinant;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_matrix_equal (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/);
// gboolean graphene_matrix_equal (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/);
bool base::MatrixBase::equal (const Graphene::Matrix_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c));
  return _temp_ret;
}

// _Bool graphene_matrix_equal_fast (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/);
// gboolean graphene_matrix_equal_fast (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/);
bool base::MatrixBase::equal_fast (const Graphene::Matrix_Ref b) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_equal_fast;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c));
  return _temp_ret;
}

// void graphene_matrix_free (graphene_matrix_t* m /*none*/);
// void graphene_matrix_free (::graphene_matrix_t* m /*none*/);
// IGNORE; marked ignore

// void graphene_matrix_get_row (const graphene_matrix_t* m /*none*/, unsigned int index_, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_matrix_get_row (const ::graphene_matrix_t* m /*none*/, guint index_, ::graphene_vec4_t* res /*none,out,ca*/);
void base::MatrixBase::get_row (guint index_, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, guint index_, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_row;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (guint) (index__to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::MatrixBase::get_row (guint index_) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, guint index_, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_row;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (guint) (index__to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// float graphene_matrix_get_value (const graphene_matrix_t* m /*none*/, unsigned int row, unsigned int col);
// gfloat graphene_matrix_get_value (const ::graphene_matrix_t* m /*none*/, guint row, guint col);
gfloat base::MatrixBase::get_value (guint row, guint col) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m, guint row, guint col);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_value;
  auto col_to_c = col;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (guint) (row_to_c), (guint) (col_to_c));
  return _temp_ret;
}

// float graphene_matrix_get_x_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_x_scale (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_x_scale () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_x_scale;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_matrix_get_x_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_x_translation (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_x_translation () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_x_translation;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_matrix_get_y_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_y_scale (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_y_scale () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_y_scale;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_matrix_get_y_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_y_translation (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_y_translation () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_y_translation;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_matrix_get_z_scale (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_z_scale (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_z_scale () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_z_scale;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// float graphene_matrix_get_z_translation (const graphene_matrix_t* m /*none*/);
// gfloat graphene_matrix_get_z_translation (const ::graphene_matrix_t* m /*none*/);
gfloat base::MatrixBase::get_z_translation () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_get_z_translation;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_2d (graphene_matrix_t* m /*none*/, double xx, double yx, double xy, double yy, double x_0, double y_0);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_2d (::graphene_matrix_t* m /*none*/, gdouble xx, gdouble yx, gdouble xy, gdouble yy, gdouble x_0, gdouble y_0);
Graphene::Matrix_Ref base::MatrixBase::init_from_2d (gdouble xx, gdouble yx, gdouble xy, gdouble yy, gdouble x_0, gdouble y_0) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gdouble xx, gdouble yx, gdouble xy, gdouble yy, gdouble x_0, gdouble y_0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_from_2d;
  auto y_0_to_c = y_0;
  auto x_0_to_c = x_0;
  auto yy_to_c = yy;
  auto xy_to_c = xy;
  auto yx_to_c = yx;
  auto xx_to_c = xx;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gdouble) (xx_to_c), (gdouble) (yx_to_c), (gdouble) (xy_to_c), (gdouble) (yy_to_c), (gdouble) (x_0_to_c), (gdouble) (y_0_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_float (graphene_matrix_t* m /*none*/, const float* v /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_float (::graphene_matrix_t* m /*none*/, const gfloat* v /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_from_float (gi::CollectionParameter<gi::FSpan<16>, gfloat, gi::transfer_none_t> v) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, const gfloat* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_from_float;
  auto v_w = unwrap (std::move(v), gi::transfer_none);
  auto v_to_c = v_w;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const gfloat*) (v_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_matrix (graphene_matrix_t* m /*none*/, const graphene_matrix_t* src /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_matrix (::graphene_matrix_t* m /*none*/, const ::graphene_matrix_t* src /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_from_matrix (const Graphene::Matrix_Ref src) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_matrix_t* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_from_matrix;
  auto src_to_c = gi::unwrap (src, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_from_vec4 (graphene_matrix_t* m /*none*/, const graphene_vec4_t* v0 /*none*/, const graphene_vec4_t* v1 /*none*/, const graphene_vec4_t* v2 /*none*/, const graphene_vec4_t* v3 /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_from_vec4 (::graphene_matrix_t* m /*none*/, const ::graphene_vec4_t* v0 /*none*/, const ::graphene_vec4_t* v1 /*none*/, const ::graphene_vec4_t* v2 /*none*/, const ::graphene_vec4_t* v3 /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_from_vec4 (const Graphene::Vec4_Ref v0, const Graphene::Vec4_Ref v1, const Graphene::Vec4_Ref v2, const Graphene::Vec4_Ref v3) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_vec4_t* v0, const ::graphene_vec4_t* v1, const ::graphene_vec4_t* v2, const ::graphene_vec4_t* v3);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_from_vec4;
  auto v3_to_c = gi::unwrap (v3, gi::transfer_none);
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto v1_to_c = gi::unwrap (v1, gi::transfer_none);
  auto v0_to_c = gi::unwrap (v0, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_vec4_t*) (v0_to_c), (const ::graphene_vec4_t*) (v1_to_c), (const ::graphene_vec4_t*) (v2_to_c), (const ::graphene_vec4_t*) (v3_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_frustum (graphene_matrix_t* m /*none*/, float left, float right, float bottom, float top, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_frustum (::graphene_matrix_t* m /*none*/, gfloat left, gfloat right, gfloat bottom, gfloat top, gfloat z_near, gfloat z_far);
Graphene::Matrix_Ref base::MatrixBase::init_frustum (gfloat left, gfloat right, gfloat bottom, gfloat top, gfloat z_near, gfloat z_far) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat left, gfloat right, gfloat bottom, gfloat top, gfloat z_near, gfloat z_far);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_frustum;
  auto z_far_to_c = z_far;
  auto z_near_to_c = z_near;
  auto top_to_c = top;
  auto bottom_to_c = bottom;
  auto right_to_c = right;
  auto left_to_c = left;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (left_to_c), (gfloat) (right_to_c), (gfloat) (bottom_to_c), (gfloat) (top_to_c), (gfloat) (z_near_to_c), (gfloat) (z_far_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_identity (graphene_matrix_t* m /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_identity (::graphene_matrix_t* m /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_identity () noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_identity;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_look_at (graphene_matrix_t* m /*none*/, const graphene_vec3_t* eye /*none*/, const graphene_vec3_t* center /*none*/, const graphene_vec3_t* up /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_look_at (::graphene_matrix_t* m /*none*/, const ::graphene_vec3_t* eye /*none*/, const ::graphene_vec3_t* center /*none*/, const ::graphene_vec3_t* up /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_look_at (const Graphene::Vec3_Ref eye, const Graphene::Vec3_Ref center, const Graphene::Vec3_Ref up) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_vec3_t* eye, const ::graphene_vec3_t* center, const ::graphene_vec3_t* up);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_look_at;
  auto up_to_c = gi::unwrap (up, gi::transfer_none);
  auto center_to_c = gi::unwrap (center, gi::transfer_none);
  auto eye_to_c = gi::unwrap (eye, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_vec3_t*) (eye_to_c), (const ::graphene_vec3_t*) (center_to_c), (const ::graphene_vec3_t*) (up_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_ortho (graphene_matrix_t* m /*none*/, float left, float right, float top, float bottom, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_ortho (::graphene_matrix_t* m /*none*/, gfloat left, gfloat right, gfloat top, gfloat bottom, gfloat z_near, gfloat z_far);
Graphene::Matrix_Ref base::MatrixBase::init_ortho (gfloat left, gfloat right, gfloat top, gfloat bottom, gfloat z_near, gfloat z_far) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat left, gfloat right, gfloat top, gfloat bottom, gfloat z_near, gfloat z_far);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_ortho;
  auto z_far_to_c = z_far;
  auto z_near_to_c = z_near;
  auto bottom_to_c = bottom;
  auto top_to_c = top;
  auto right_to_c = right;
  auto left_to_c = left;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (left_to_c), (gfloat) (right_to_c), (gfloat) (top_to_c), (gfloat) (bottom_to_c), (gfloat) (z_near_to_c), (gfloat) (z_far_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_perspective (graphene_matrix_t* m /*none*/, float fovy, float aspect, float z_near, float z_far);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_perspective (::graphene_matrix_t* m /*none*/, gfloat fovy, gfloat aspect, gfloat z_near, gfloat z_far);
Graphene::Matrix_Ref base::MatrixBase::init_perspective (gfloat fovy, gfloat aspect, gfloat z_near, gfloat z_far) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat fovy, gfloat aspect, gfloat z_near, gfloat z_far);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_perspective;
  auto z_far_to_c = z_far;
  auto z_near_to_c = z_near;
  auto aspect_to_c = aspect;
  auto fovy_to_c = fovy;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (fovy_to_c), (gfloat) (aspect_to_c), (gfloat) (z_near_to_c), (gfloat) (z_far_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_rotate (graphene_matrix_t* m /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_rotate (::graphene_matrix_t* m /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_rotate (gfloat angle, const Graphene::Vec3_Ref axis) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat angle, const ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_rotate;
  auto axis_to_c = gi::unwrap (axis, gi::transfer_none);
  auto angle_to_c = angle;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (angle_to_c), (const ::graphene_vec3_t*) (axis_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_scale (graphene_matrix_t* m /*none*/, float x, float y, float z);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_scale (::graphene_matrix_t* m /*none*/, gfloat x, gfloat y, gfloat z);
Graphene::Matrix_Ref base::MatrixBase::init_scale (gfloat x, gfloat y, gfloat z) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat x, gfloat y, gfloat z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_scale;
  auto z_to_c = z;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c), (gfloat) (z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_skew (graphene_matrix_t* m /*none*/, float x_skew, float y_skew);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_skew (::graphene_matrix_t* m /*none*/, gfloat x_skew, gfloat y_skew);
Graphene::Matrix_Ref base::MatrixBase::init_skew (gfloat x_skew, gfloat y_skew) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, gfloat x_skew, gfloat y_skew);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_skew;
  auto y_skew_to_c = y_skew;
  auto x_skew_to_c = x_skew;
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (x_skew_to_c), (gfloat) (y_skew_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// graphene_matrix_t* /*none*/ graphene_matrix_init_translate (graphene_matrix_t* m /*none*/, const graphene_point3d_t* p /*none*/);
// ::graphene_matrix_t* /*none*/ graphene_matrix_init_translate (::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* p /*none*/);
Graphene::Matrix_Ref base::MatrixBase::init_translate (const Graphene::Point3D_Ref p) noexcept
{
  typedef ::graphene_matrix_t* (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_point3d_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_init_translate;
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void graphene_matrix_interpolate (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, double factor, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_interpolate (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, gdouble factor, ::graphene_matrix_t* res /*none,out,ca*/);
void base::MatrixBase::interpolate (const Graphene::Matrix_Ref b, gdouble factor, Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b, gdouble factor, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_interpolate;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::MatrixBase::interpolate (const Graphene::Matrix_Ref b, gdouble factor) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b, gdouble factor, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_interpolate;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  auto factor_to_c = factor;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c), (gdouble) (factor_to_c), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_matrix_inverse (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// gboolean graphene_matrix_inverse (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
bool base::MatrixBase::inverse (Graphene::Matrix & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_inverse;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Matrix> base::MatrixBase::inverse () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_inverse;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// _Bool graphene_matrix_is_2d (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_2d (const ::graphene_matrix_t* m /*none*/);
bool base::MatrixBase::is_2d () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_is_2d;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_matrix_is_backface_visible (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_backface_visible (const ::graphene_matrix_t* m /*none*/);
bool base::MatrixBase::is_backface_visible () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_is_backface_visible;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_matrix_is_identity (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_identity (const ::graphene_matrix_t* m /*none*/);
bool base::MatrixBase::is_identity () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_is_identity;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// _Bool graphene_matrix_is_singular (const graphene_matrix_t* m /*none*/);
// gboolean graphene_matrix_is_singular (const ::graphene_matrix_t* m /*none*/);
bool base::MatrixBase::is_singular () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_is_singular;
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
  return _temp_ret;
}

// void graphene_matrix_multiply (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_multiply (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
void base::MatrixBase::multiply (const Graphene::Matrix_Ref b, Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_multiply;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::MatrixBase::multiply (const Graphene::Matrix_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_multiply;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_matrix_near (const graphene_matrix_t* a /*none*/, const graphene_matrix_t* b /*none*/, float epsilon);
// gboolean graphene_matrix_near (const ::graphene_matrix_t* a /*none*/, const ::graphene_matrix_t* b /*none*/, gfloat epsilon);
bool base::MatrixBase::near (const Graphene::Matrix_Ref b, gfloat epsilon) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* a, const ::graphene_matrix_t* b, gfloat epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_near;
  auto epsilon_to_c = epsilon;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (b_to_c), (gfloat) (epsilon_to_c));
  return _temp_ret;
}

// void graphene_matrix_normalize (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_normalize (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
void base::MatrixBase::normalize (Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_normalize;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::MatrixBase::normalize () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_normalize;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_perspective (const graphene_matrix_t* m /*none*/, float depth, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_perspective (const ::graphene_matrix_t* m /*none*/, gfloat depth, ::graphene_matrix_t* res /*none,out,ca*/);
void base::MatrixBase::perspective (gfloat depth, Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, gfloat depth, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_perspective;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  auto depth_to_c = depth;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (gfloat) (depth_to_c), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::MatrixBase::perspective (gfloat depth) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, gfloat depth, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_perspective;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  auto depth_to_c = depth;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (gfloat) (depth_to_c), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_print (const graphene_matrix_t* m /*none*/);
// void graphene_matrix_print (const ::graphene_matrix_t* m /*none*/);
void base::MatrixBase::print () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_print;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()));
}

// void graphene_matrix_project_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, graphene_point_t* res /*none,out,ca*/);
// void graphene_matrix_project_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_point_t* res /*none,out,ca*/);
void base::MatrixBase::project_point (const Graphene::Point_Ref p, Graphene::Point & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_point;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_point_t*) ((::graphene_point_t*) (res).gobj_()));
}
Graphene::Point base::MatrixBase::project_point (const Graphene::Point_Ref p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_point;
  Graphene::Point res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_point_t*) (res ? (::graphene_point_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_project_rect (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_quad_t* res /*none,out,ca*/);
// void graphene_matrix_project_rect (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_quad_t* res /*none,out,ca*/);
void base::MatrixBase::project_rect (const Graphene::Rect_Ref r, Graphene::Quad & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_quad_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_rect;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quad_t) == sizeof(*(res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_quad_t*) ((::graphene_quad_t*) (res).gobj_()));
}
Graphene::Quad base::MatrixBase::project_rect (const Graphene::Rect_Ref r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_quad_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_rect;
  Graphene::Quad res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quad_t) == sizeof(*(*res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_quad_t*) (res ? (::graphene_quad_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_project_rect_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_project_rect_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::MatrixBase::project_rect_bounds (const Graphene::Rect_Ref r, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_rect_bounds;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::MatrixBase::project_rect_bounds (const Graphene::Rect_Ref r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_project_rect_bounds;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_rotate (graphene_matrix_t* m /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// void graphene_matrix_rotate (::graphene_matrix_t* m /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
void base::MatrixBase::rotate (gfloat angle, const Graphene::Vec3_Ref axis) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat angle, const ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate;
  auto axis_to_c = gi::unwrap (axis, gi::transfer_none);
  auto angle_to_c = angle;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (angle_to_c), (const ::graphene_vec3_t*) (axis_to_c));
}

// void graphene_matrix_rotate_euler (graphene_matrix_t* m /*none*/, const graphene_euler_t* e /*none*/);
// void graphene_matrix_rotate_euler (::graphene_matrix_t* m /*none*/, const ::graphene_euler_t* e /*none*/);
void base::MatrixBase::rotate_euler (const Graphene::Euler_Ref e) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_euler_t* e);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate_euler;
  auto e_to_c = gi::unwrap (e, gi::transfer_none);
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_euler_t*) (e_to_c));
}

// void graphene_matrix_rotate_quaternion (graphene_matrix_t* m /*none*/, const graphene_quaternion_t* q /*none*/);
// void graphene_matrix_rotate_quaternion (::graphene_matrix_t* m /*none*/, const ::graphene_quaternion_t* q /*none*/);
void base::MatrixBase::rotate_quaternion (const Graphene::Quaternion_Ref q) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_quaternion_t* q);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate_quaternion;
  auto q_to_c = gi::unwrap (q, gi::transfer_none);
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_quaternion_t*) (q_to_c));
}

// void graphene_matrix_rotate_x (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_x (::graphene_matrix_t* m /*none*/, gfloat angle);
void base::MatrixBase::rotate_x (gfloat angle) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate_x;
  auto angle_to_c = angle;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (angle_to_c));
}

// void graphene_matrix_rotate_y (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_y (::graphene_matrix_t* m /*none*/, gfloat angle);
void base::MatrixBase::rotate_y (gfloat angle) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate_y;
  auto angle_to_c = angle;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (angle_to_c));
}

// void graphene_matrix_rotate_z (graphene_matrix_t* m /*none*/, float angle);
// void graphene_matrix_rotate_z (::graphene_matrix_t* m /*none*/, gfloat angle);
void base::MatrixBase::rotate_z (gfloat angle) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_rotate_z;
  auto angle_to_c = angle;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (angle_to_c));
}

// void graphene_matrix_scale (graphene_matrix_t* m /*none*/, float factor_x, float factor_y, float factor_z);
// void graphene_matrix_scale (::graphene_matrix_t* m /*none*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
void base::MatrixBase::scale (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat factor_x, gfloat factor_y, gfloat factor_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_scale;
  auto factor_z_to_c = factor_z;
  auto factor_y_to_c = factor_y;
  auto factor_x_to_c = factor_x;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (factor_x_to_c), (gfloat) (factor_y_to_c), (gfloat) (factor_z_to_c));
}

// void graphene_matrix_skew_xy (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_xy (::graphene_matrix_t* m /*none*/, gfloat factor);
void base::MatrixBase::skew_xy (gfloat factor) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_skew_xy;
  auto factor_to_c = factor;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (factor_to_c));
}

// void graphene_matrix_skew_xz (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_xz (::graphene_matrix_t* m /*none*/, gfloat factor);
void base::MatrixBase::skew_xz (gfloat factor) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_skew_xz;
  auto factor_to_c = factor;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (factor_to_c));
}

// void graphene_matrix_skew_yz (graphene_matrix_t* m /*none*/, float factor);
// void graphene_matrix_skew_yz (::graphene_matrix_t* m /*none*/, gfloat factor);
void base::MatrixBase::skew_yz (gfloat factor) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, gfloat factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_skew_yz;
  auto factor_to_c = factor;
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (gfloat) (factor_to_c));
}

// _Bool graphene_matrix_to_2d (const graphene_matrix_t* m /*none*/, double* xx, double* yx, double* xy, double* yy, double* x_0, double* y_0);
// gboolean graphene_matrix_to_2d (const ::graphene_matrix_t* m /*none*/, gdouble* xx, gdouble* yx, gdouble* xy, gdouble* yy, gdouble* x_0, gdouble* y_0);
bool base::MatrixBase::to_2d (gdouble & xx, gdouble & yx, gdouble & xy, gdouble & yy, gdouble & x_0, gdouble & y_0) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, gdouble* xx, gdouble* yx, gdouble* xy, gdouble* yy, gdouble* x_0, gdouble* y_0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_to_2d;
  gdouble y_0_o {};
  gdouble x_0_o {};
  gdouble yy_o {};
  gdouble xy_o {};
  gdouble yx_o {};
  gdouble xx_o {};
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (gdouble*) (&xx_o), (gdouble*) (&yx_o), (gdouble*) (&xy_o), (gdouble*) (&yy_o), (gdouble*) (&x_0_o), (gdouble*) (&y_0_o));
  y_0 = y_0_o;
  x_0 = x_0_o;
  yy = yy_o;
  xy = xy_o;
  yx = yx_o;
  xx = xx_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble, gdouble, gdouble, gdouble, gdouble> base::MatrixBase::to_2d () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, gdouble* xx, gdouble* yx, gdouble* xy, gdouble* yy, gdouble* x_0, gdouble* y_0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_to_2d;
  gdouble y_0_o {};
  gdouble x_0_o {};
  gdouble yy_o {};
  gdouble xy_o {};
  gdouble yx_o {};
  gdouble xx_o {};
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (gdouble*) (&xx_o), (gdouble*) (&yx_o), (gdouble*) (&xy_o), (gdouble*) (&yy_o), (gdouble*) (&x_0_o), (gdouble*) (&y_0_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = xx_o;
  auto &&tmp_return_3 = yx_o;
  auto &&tmp_return_4 = xy_o;
  auto &&tmp_return_5 = yy_o;
  auto &&tmp_return_6 = x_0_o;
  auto &&tmp_return_7 = y_0_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7));
}

// void graphene_matrix_to_float (const graphene_matrix_t* m /*none*/, float* v /*none,out,ca*/);
// void graphene_matrix_to_float (const ::graphene_matrix_t* m /*none*/, gfloat* v /*none,out,ca*/);
void base::MatrixBase::to_float (gfloat v[16]) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, gfloat* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_to_float;
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (gfloat*) (v));
}

// void graphene_matrix_transform_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_transform_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::MatrixBase::transform_bounds (const Graphene::Rect_Ref r, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_bounds;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::MatrixBase::transform_bounds (const Graphene::Rect_Ref r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_bounds;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_box (const graphene_matrix_t* m /*none*/, const graphene_box_t* b /*none*/, graphene_box_t* res /*none,out,ca*/);
// void graphene_matrix_transform_box (const ::graphene_matrix_t* m /*none*/, const ::graphene_box_t* b /*none*/, ::graphene_box_t* res /*none,out,ca*/);
void base::MatrixBase::transform_box (const Graphene::Box_Ref b, Graphene::Box & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_box;
  detail::allocate(res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) ((::graphene_box_t*) (res).gobj_()));
}
Graphene::Box base::MatrixBase::transform_box (const Graphene::Box_Ref b) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_box_t* b, ::graphene_box_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_box;
  Graphene::Box res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_box_t) == sizeof(*(*res).gobj_()), "");
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_box_t*) (b_to_c), (::graphene_box_t*) (res ? (::graphene_box_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, graphene_point_t* res /*none,out,ca*/);
// void graphene_matrix_transform_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, ::graphene_point_t* res /*none,out,ca*/);
void base::MatrixBase::transform_point (const Graphene::Point_Ref p, Graphene::Point & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_point;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_point_t*) ((::graphene_point_t*) (res).gobj_()));
}
Graphene::Point base::MatrixBase::transform_point (const Graphene::Point_Ref p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_point;
  Graphene::Point res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (::graphene_point_t*) (res ? (::graphene_point_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_point3d (const graphene_matrix_t* m /*none*/, const graphene_point3d_t* p /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_matrix_transform_point3d (const ::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* p /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::MatrixBase::transform_point3d (const Graphene::Point3D_Ref p, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_point3d;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::MatrixBase::transform_point3d (const Graphene::Point3D_Ref p) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point3d_t* p, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_point3d;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point3d_t*) (p_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_ray (const graphene_matrix_t* m /*none*/, const graphene_ray_t* r /*none*/, graphene_ray_t* res /*none,out,ca*/);
// void graphene_matrix_transform_ray (const ::graphene_matrix_t* m /*none*/, const ::graphene_ray_t* r /*none*/, ::graphene_ray_t* res /*none,out,ca*/);
void base::MatrixBase::transform_ray (const Graphene::Ray_Ref r, Graphene::Ray & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_ray_t* r, ::graphene_ray_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_ray;
  detail::allocate(res);
  static_assert(sizeof(::graphene_ray_t) == sizeof(*(res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_ray_t*) (r_to_c), (::graphene_ray_t*) ((::graphene_ray_t*) (res).gobj_()));
}
Graphene::Ray base::MatrixBase::transform_ray (const Graphene::Ray_Ref r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_ray_t* r, ::graphene_ray_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_ray;
  Graphene::Ray res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_ray_t) == sizeof(*(*res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_ray_t*) (r_to_c), (::graphene_ray_t*) (res ? (::graphene_ray_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_rect (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, graphene_quad_t* res /*none,out,ca*/);
// void graphene_matrix_transform_rect (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, ::graphene_quad_t* res /*none,out,ca*/);
void base::MatrixBase::transform_rect (const Graphene::Rect_Ref r, Graphene::Quad & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_quad_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_rect;
  detail::allocate(res);
  static_assert(sizeof(::graphene_quad_t) == sizeof(*(res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_quad_t*) ((::graphene_quad_t*) (res).gobj_()));
}
Graphene::Quad base::MatrixBase::transform_rect (const Graphene::Rect_Ref r) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, ::graphene_quad_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_rect;
  Graphene::Quad res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_quad_t) == sizeof(*(*res).gobj_()), "");
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (::graphene_quad_t*) (res ? (::graphene_quad_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_sphere (const graphene_matrix_t* m /*none*/, const graphene_sphere_t* s /*none*/, graphene_sphere_t* res /*none,out,ca*/);
// void graphene_matrix_transform_sphere (const ::graphene_matrix_t* m /*none*/, const ::graphene_sphere_t* s /*none*/, ::graphene_sphere_t* res /*none,out,ca*/);
void base::MatrixBase::transform_sphere (const Graphene::Sphere_Ref s, Graphene::Sphere & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_sphere_t* s, ::graphene_sphere_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_sphere;
  detail::allocate(res);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(res).gobj_()), "");
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_sphere_t*) (s_to_c), (::graphene_sphere_t*) ((::graphene_sphere_t*) (res).gobj_()));
}
Graphene::Sphere base::MatrixBase::transform_sphere (const Graphene::Sphere_Ref s) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_sphere_t* s, ::graphene_sphere_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_sphere;
  Graphene::Sphere res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_sphere_t) == sizeof(*(*res).gobj_()), "");
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_sphere_t*) (s_to_c), (::graphene_sphere_t*) (res ? (::graphene_sphere_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_vec3 (const graphene_matrix_t* m /*none*/, const graphene_vec3_t* v /*none*/, graphene_vec3_t* res /*none,out,ca*/);
// void graphene_matrix_transform_vec3 (const ::graphene_matrix_t* m /*none*/, const ::graphene_vec3_t* v /*none*/, ::graphene_vec3_t* res /*none,out,ca*/);
void base::MatrixBase::transform_vec3 (const Graphene::Vec3_Ref v, Graphene::Vec3 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_vec3;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(res).gobj_()), "");
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_vec3_t*) (v_to_c), (::graphene_vec3_t*) ((::graphene_vec3_t*) (res).gobj_()));
}
Graphene::Vec3 base::MatrixBase::transform_vec3 (const Graphene::Vec3_Ref v) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_vec3_t* v, ::graphene_vec3_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_vec3;
  Graphene::Vec3 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec3_t) == sizeof(*(*res).gobj_()), "");
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_vec3_t*) (v_to_c), (::graphene_vec3_t*) (res ? (::graphene_vec3_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_transform_vec4 (const graphene_matrix_t* m /*none*/, const graphene_vec4_t* v /*none*/, graphene_vec4_t* res /*none,out,ca*/);
// void graphene_matrix_transform_vec4 (const ::graphene_matrix_t* m /*none*/, const ::graphene_vec4_t* v /*none*/, ::graphene_vec4_t* res /*none,out,ca*/);
void base::MatrixBase::transform_vec4 (const Graphene::Vec4_Ref v, Graphene::Vec4 & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_vec4;
  detail::allocate(res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(res).gobj_()), "");
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_vec4_t*) (v_to_c), (::graphene_vec4_t*) ((::graphene_vec4_t*) (res).gobj_()));
}
Graphene::Vec4 base::MatrixBase::transform_vec4 (const Graphene::Vec4_Ref v) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_vec4_t* v, ::graphene_vec4_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transform_vec4;
  Graphene::Vec4 res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_vec4_t) == sizeof(*(*res).gobj_()), "");
  auto v_to_c = gi::unwrap (v, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_vec4_t*) (v_to_c), (::graphene_vec4_t*) (res ? (::graphene_vec4_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_translate (graphene_matrix_t* m /*none*/, const graphene_point3d_t* pos /*none*/);
// void graphene_matrix_translate (::graphene_matrix_t* m /*none*/, const ::graphene_point3d_t* pos /*none*/);
void base::MatrixBase::translate (const Graphene::Point3D_Ref pos) noexcept
{
  typedef void (*call_wrap_t) (::graphene_matrix_t* m, const ::graphene_point3d_t* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_translate;
  auto pos_to_c = gi::unwrap (pos, gi::transfer_none);
  call_wrap_v ((::graphene_matrix_t*) (gobj_()), (const ::graphene_point3d_t*) (pos_to_c));
}

// void graphene_matrix_transpose (const graphene_matrix_t* m /*none*/, graphene_matrix_t* res /*none,out,ca*/);
// void graphene_matrix_transpose (const ::graphene_matrix_t* m /*none*/, ::graphene_matrix_t* res /*none,out,ca*/);
void base::MatrixBase::transpose (Graphene::Matrix & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transpose;
  detail::allocate(res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(res).gobj_()), "");
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (res).gobj_()));
}
Graphene::Matrix base::MatrixBase::transpose () const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, ::graphene_matrix_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_transpose;
  Graphene::Matrix res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*res).gobj_()), "");
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (::graphene_matrix_t*) (res ? (::graphene_matrix_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_unproject_point3d (const graphene_matrix_t* projection /*none*/, const graphene_matrix_t* modelview /*none*/, const graphene_point3d_t* point /*none*/, graphene_point3d_t* res /*none,out,ca*/);
// void graphene_matrix_unproject_point3d (const ::graphene_matrix_t* projection /*none*/, const ::graphene_matrix_t* modelview /*none*/, const ::graphene_point3d_t* point /*none*/, ::graphene_point3d_t* res /*none,out,ca*/);
void base::MatrixBase::unproject_point3d (const Graphene::Matrix_Ref modelview, const Graphene::Point3D_Ref point, Graphene::Point3D & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* projection, const ::graphene_matrix_t* modelview, const ::graphene_point3d_t* point, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_unproject_point3d;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto modelview_to_c = gi::unwrap (modelview, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (modelview_to_c), (const ::graphene_point3d_t*) (point_to_c), (::graphene_point3d_t*) ((::graphene_point3d_t*) (res).gobj_()));
}
Graphene::Point3D base::MatrixBase::unproject_point3d (const Graphene::Matrix_Ref modelview, const Graphene::Point3D_Ref point) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* projection, const ::graphene_matrix_t* modelview, const ::graphene_point3d_t* point, ::graphene_point3d_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_unproject_point3d;
  Graphene::Point3D res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point3d_t) == sizeof(*(*res).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto modelview_to_c = gi::unwrap (modelview, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_matrix_t*) (modelview_to_c), (const ::graphene_point3d_t*) (point_to_c), (::graphene_point3d_t*) (res ? (::graphene_point3d_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// void graphene_matrix_untransform_bounds (const graphene_matrix_t* m /*none*/, const graphene_rect_t* r /*none*/, const graphene_rect_t* bounds /*none*/, graphene_rect_t* res /*none,out,ca*/);
// void graphene_matrix_untransform_bounds (const ::graphene_matrix_t* m /*none*/, const ::graphene_rect_t* r /*none*/, const ::graphene_rect_t* bounds /*none*/, ::graphene_rect_t* res /*none,out,ca*/);
void base::MatrixBase::untransform_bounds (const Graphene::Rect_Ref r, const Graphene::Rect_Ref bounds, Graphene::Rect & res) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, const ::graphene_rect_t* bounds, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_untransform_bounds;
  detail::allocate(res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(res).gobj_()), "");
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (const ::graphene_rect_t*) (bounds_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (res).gobj_()));
}
Graphene::Rect base::MatrixBase::untransform_bounds (const Graphene::Rect_Ref r, const Graphene::Rect_Ref bounds) const noexcept
{
  typedef void (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_rect_t* r, const ::graphene_rect_t* bounds, ::graphene_rect_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_untransform_bounds;
  Graphene::Rect res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*res).gobj_()), "");
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto r_to_c = gi::unwrap (r, gi::transfer_none);
  call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_rect_t*) (r_to_c), (const ::graphene_rect_t*) (bounds_to_c), (::graphene_rect_t*) (res ? (::graphene_rect_t*) (*res).gobj_() : nullptr));
  return res_c;
}

// _Bool graphene_matrix_untransform_point (const graphene_matrix_t* m /*none*/, const graphene_point_t* p /*none*/, const graphene_rect_t* bounds /*none*/, graphene_point_t* res /*none,out,ca*/);
// gboolean graphene_matrix_untransform_point (const ::graphene_matrix_t* m /*none*/, const ::graphene_point_t* p /*none*/, const ::graphene_rect_t* bounds /*none*/, ::graphene_point_t* res /*none,out,ca*/);
bool base::MatrixBase::untransform_point (const Graphene::Point_Ref p, const Graphene::Rect_Ref bounds, Graphene::Point & res) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, const ::graphene_rect_t* bounds, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_untransform_point;
  detail::allocate(res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(res).gobj_()), "");
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (const ::graphene_rect_t*) (bounds_to_c), (::graphene_point_t*) ((::graphene_point_t*) (res).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Point> base::MatrixBase::untransform_point (const Graphene::Point_Ref p, const Graphene::Rect_Ref bounds) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::graphene_matrix_t* m, const ::graphene_point_t* p, const ::graphene_rect_t* bounds, ::graphene_point_t* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::graphene_matrix_untransform_point;
  Graphene::Point res_c;
  auto res = &res_c;
  detail::allocate(*res);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*res).gobj_()), "");
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto p_to_c = gi::unwrap (p, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::graphene_matrix_t*) (gobj_()), (const ::graphene_point_t*) (p_to_c), (const ::graphene_rect_t*) (bounds_to_c), (::graphene_point_t*) (res ? (::graphene_point_t*) (*res).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = res_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/matrix_extra_def_impl.hpp>)
#include <graphene/matrix_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/matrix_extra_impl.hpp>)
#include <graphene/matrix_extra_impl.hpp>
#endif
#endif

#endif
