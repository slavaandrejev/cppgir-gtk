// AUTO-GENERATED

#ifndef _GI_GSK_TRANSFORM_IMPL_HPP_
#define _GI_GSK_TRANSFORM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskTransform* /*full*/ gsk_transform_new ();
// ::GskTransform* /*full*/ gsk_transform_new ();
Gsk::Transform base::TransformBase::new_ () noexcept
{
  typedef ::GskTransform* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_transform_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gsk_transform_equal (GskTransform* first /*none,nullable*/, GskTransform* second /*none,nullable*/);
// gboolean gsk_transform_equal (::GskTransform* first /*none,nullable*/, ::GskTransform* second /*none,nullable*/);
bool base::TransformBase::equal (Gsk::Transform_Ref second) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskTransform* first, ::GskTransform* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_equal;
  auto second_to_c = gi::unwrap (second, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (::GskTransform*) (second_to_c));
  return _temp_ret;
}
bool base::TransformBase::equal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskTransform* first, ::GskTransform* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_equal;
  auto second_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (::GskTransform*) (second_to_c));
  return _temp_ret;
}

// GskTransformCategory gsk_transform_get_category (GskTransform* self /*none,nullable*/);
// ::GskTransformCategory gsk_transform_get_category (::GskTransform* self /*none,nullable*/);
Gsk::TransformCategory base::TransformBase::get_category () noexcept
{
  typedef ::GskTransformCategory (*call_wrap_t) (::GskTransform* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_get_category;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GskTransform* /*full,nullable*/ gsk_transform_invert (GskTransform* self /*full,nullable*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_invert (::GskTransform* self /*full,nullable*/);
Gsk::Transform base::TransformBase::invert () noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_invert;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full*/ gsk_transform_matrix (GskTransform* next /*full,nullable*/, const graphene_matrix_t* matrix /*none*/);
// ::GskTransform* /*full*/ gsk_transform_matrix (::GskTransform* next /*full,nullable*/, const ::graphene_matrix_t* matrix /*none*/);
Gsk::Transform base::TransformBase::matrix (const Graphene::Matrix_Ref matrix) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, const ::graphene_matrix_t* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full*/ gsk_transform_perspective (GskTransform* next /*full,nullable*/, float depth);
// ::GskTransform* /*full*/ gsk_transform_perspective (::GskTransform* next /*full,nullable*/, gfloat depth);
Gsk::Transform base::TransformBase::perspective (gfloat depth) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat depth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_perspective;
  auto depth_to_c = depth;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (depth_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_transform_print (GskTransform* self /*none,nullable*/, GString* string /*none*/);
// void gsk_transform_print (::GskTransform* self /*none,nullable*/, ::GString* string /*none*/);
void base::TransformBase::print (GLib::String_Ref string) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GskTransform*) (gobj_()), (::GString*) (string_to_c));
}

// GskTransform* /*none,nullable*/ gsk_transform_ref (GskTransform* self /*none,nullable*/);
// ::GskTransform* /*none,nullable*/ gsk_transform_ref (::GskTransform* self /*none,nullable*/);
// IGNORE; marked ignore

// GskTransform* /*full,nullable*/ gsk_transform_rotate (GskTransform* next /*full,nullable*/, float angle);
// ::GskTransform* /*full,nullable*/ gsk_transform_rotate (::GskTransform* next /*full,nullable*/, gfloat angle);
Gsk::Transform base::TransformBase::rotate (gfloat angle) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_rotate;
  auto angle_to_c = angle;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (angle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full,nullable*/ gsk_transform_rotate_3d (GskTransform* next /*full,nullable*/, float angle, const graphene_vec3_t* axis /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_rotate_3d (::GskTransform* next /*full,nullable*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
Gsk::Transform base::TransformBase::rotate_3d (gfloat angle, const Graphene::Vec3_Ref axis) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat angle, const ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_rotate_3d;
  auto axis_to_c = gi::unwrap (axis, gi::transfer_none);
  auto angle_to_c = angle;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (angle_to_c), (const ::graphene_vec3_t*) (axis_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full,nullable*/ gsk_transform_scale (GskTransform* next /*full,nullable*/, float factor_x, float factor_y);
// ::GskTransform* /*full,nullable*/ gsk_transform_scale (::GskTransform* next /*full,nullable*/, gfloat factor_x, gfloat factor_y);
Gsk::Transform base::TransformBase::scale (gfloat factor_x, gfloat factor_y) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat factor_x, gfloat factor_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_scale;
  auto factor_y_to_c = factor_y;
  auto factor_x_to_c = factor_x;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (factor_x_to_c), (gfloat) (factor_y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full,nullable*/ gsk_transform_scale_3d (GskTransform* next /*full,nullable*/, float factor_x, float factor_y, float factor_z);
// ::GskTransform* /*full,nullable*/ gsk_transform_scale_3d (::GskTransform* next /*full,nullable*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
Gsk::Transform base::TransformBase::scale_3d (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat factor_x, gfloat factor_y, gfloat factor_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_scale_3d;
  auto factor_z_to_c = factor_z;
  auto factor_y_to_c = factor_y;
  auto factor_x_to_c = factor_x;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (factor_x_to_c), (gfloat) (factor_y_to_c), (gfloat) (factor_z_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full,nullable*/ gsk_transform_skew (GskTransform* next /*full,nullable*/, float skew_x, float skew_y);
// ::GskTransform* /*full,nullable*/ gsk_transform_skew (::GskTransform* next /*full,nullable*/, gfloat skew_x, gfloat skew_y);
Gsk::Transform base::TransformBase::skew (gfloat skew_x, gfloat skew_y) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, gfloat skew_x, gfloat skew_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_skew;
  auto skew_y_to_c = skew_y;
  auto skew_x_to_c = skew_x;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (gfloat) (skew_x_to_c), (gfloat) (skew_y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_transform_to_2d (GskTransform* self /*none*/, float* out_xx, float* out_yx, float* out_xy, float* out_yy, float* out_dx, float* out_dy);
// void gsk_transform_to_2d (::GskTransform* self /*none*/, gfloat* out_xx, gfloat* out_yx, gfloat* out_xy, gfloat* out_yy, gfloat* out_dx, gfloat* out_dy);
void base::TransformBase::to_2d (gfloat & out_xx, gfloat & out_yx, gfloat & out_xy, gfloat & out_yy, gfloat & out_dx, gfloat & out_dy) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_xx, gfloat* out_yx, gfloat* out_xy, gfloat* out_yy, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_2d;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_yy_o {};
  gfloat out_xy_o {};
  gfloat out_yx_o {};
  gfloat out_xx_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_xx_o), (gfloat*) (&out_yx_o), (gfloat*) (&out_xy_o), (gfloat*) (&out_yy_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  out_dy = out_dy_o;
  out_dx = out_dx_o;
  out_yy = out_yy_o;
  out_xy = out_xy_o;
  out_yx = out_yx_o;
  out_xx = out_xx_o;
}
std::tuple<gfloat, gfloat, gfloat, gfloat, gfloat, gfloat> base::TransformBase::to_2d () noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_xx, gfloat* out_yx, gfloat* out_xy, gfloat* out_yy, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_2d;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_yy_o {};
  gfloat out_xy_o {};
  gfloat out_yx_o {};
  gfloat out_xx_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_xx_o), (gfloat*) (&out_yx_o), (gfloat*) (&out_xy_o), (gfloat*) (&out_yy_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  auto &&tmp_return_1 = out_xx_o;
  auto &&tmp_return_2 = out_yx_o;
  auto &&tmp_return_3 = out_xy_o;
  auto &&tmp_return_4 = out_yy_o;
  auto &&tmp_return_5 = out_dx_o;
  auto &&tmp_return_6 = out_dy_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6));
}

// void gsk_transform_to_2d_components (GskTransform* self /*none*/, float* out_skew_x, float* out_skew_y, float* out_scale_x, float* out_scale_y, float* out_angle, float* out_dx, float* out_dy);
// void gsk_transform_to_2d_components (::GskTransform* self /*none*/, gfloat* out_skew_x, gfloat* out_skew_y, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_angle, gfloat* out_dx, gfloat* out_dy);
void base::TransformBase::to_2d_components (gfloat & out_skew_x, gfloat & out_skew_y, gfloat & out_scale_x, gfloat & out_scale_y, gfloat & out_angle, gfloat & out_dx, gfloat & out_dy) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_skew_x, gfloat* out_skew_y, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_angle, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_2d_components;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_angle_o {};
  gfloat out_scale_y_o {};
  gfloat out_scale_x_o {};
  gfloat out_skew_y_o {};
  gfloat out_skew_x_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_skew_x_o), (gfloat*) (&out_skew_y_o), (gfloat*) (&out_scale_x_o), (gfloat*) (&out_scale_y_o), (gfloat*) (&out_angle_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  out_dy = out_dy_o;
  out_dx = out_dx_o;
  out_angle = out_angle_o;
  out_scale_y = out_scale_y_o;
  out_scale_x = out_scale_x_o;
  out_skew_y = out_skew_y_o;
  out_skew_x = out_skew_x_o;
}
std::tuple<gfloat, gfloat, gfloat, gfloat, gfloat, gfloat, gfloat> base::TransformBase::to_2d_components () noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_skew_x, gfloat* out_skew_y, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_angle, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_2d_components;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_angle_o {};
  gfloat out_scale_y_o {};
  gfloat out_scale_x_o {};
  gfloat out_skew_y_o {};
  gfloat out_skew_x_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_skew_x_o), (gfloat*) (&out_skew_y_o), (gfloat*) (&out_scale_x_o), (gfloat*) (&out_scale_y_o), (gfloat*) (&out_angle_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  auto &&tmp_return_1 = out_skew_x_o;
  auto &&tmp_return_2 = out_skew_y_o;
  auto &&tmp_return_3 = out_scale_x_o;
  auto &&tmp_return_4 = out_scale_y_o;
  auto &&tmp_return_5 = out_angle_o;
  auto &&tmp_return_6 = out_dx_o;
  auto &&tmp_return_7 = out_dy_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6),std::move(tmp_return_7));
}

// void gsk_transform_to_affine (GskTransform* self /*none*/, float* out_scale_x, float* out_scale_y, float* out_dx, float* out_dy);
// void gsk_transform_to_affine (::GskTransform* self /*none*/, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_dx, gfloat* out_dy);
void base::TransformBase::to_affine (gfloat & out_scale_x, gfloat & out_scale_y, gfloat & out_dx, gfloat & out_dy) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_affine;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_scale_y_o {};
  gfloat out_scale_x_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_scale_x_o), (gfloat*) (&out_scale_y_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  out_dy = out_dy_o;
  out_dx = out_dx_o;
  out_scale_y = out_scale_y_o;
  out_scale_x = out_scale_x_o;
}
std::tuple<gfloat, gfloat, gfloat, gfloat> base::TransformBase::to_affine () noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_scale_x, gfloat* out_scale_y, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_affine;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  gfloat out_scale_y_o {};
  gfloat out_scale_x_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_scale_x_o), (gfloat*) (&out_scale_y_o), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  auto &&tmp_return_1 = out_scale_x_o;
  auto &&tmp_return_2 = out_scale_y_o;
  auto &&tmp_return_3 = out_dx_o;
  auto &&tmp_return_4 = out_dy_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// void gsk_transform_to_matrix (GskTransform* self /*none,nullable*/, graphene_matrix_t* out_matrix /*none,out,ca*/);
// void gsk_transform_to_matrix (::GskTransform* self /*none,nullable*/, ::graphene_matrix_t* out_matrix /*none,out,ca*/);
void base::TransformBase::to_matrix (Graphene::Matrix & out_matrix) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, ::graphene_matrix_t* out_matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_matrix;
  detail::allocate(out_matrix);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(out_matrix).gobj_()), "");
  call_wrap_v ((::GskTransform*) (gobj_()), (::graphene_matrix_t*) ((::graphene_matrix_t*) (out_matrix).gobj_()));
}
Graphene::Matrix base::TransformBase::to_matrix () noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, ::graphene_matrix_t* out_matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_matrix;
  Graphene::Matrix out_matrix_c;
  auto out_matrix = &out_matrix_c;
  detail::allocate(*out_matrix);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*out_matrix).gobj_()), "");
  call_wrap_v ((::GskTransform*) (gobj_()), (::graphene_matrix_t*) (out_matrix ? (::graphene_matrix_t*) (*out_matrix).gobj_() : nullptr));
  return out_matrix_c;
}

// char* /*full*/ gsk_transform_to_string (GskTransform* self /*none,nullable*/);
// char* /*full*/ gsk_transform_to_string (::GskTransform* self /*none,nullable*/);
gi::cstring base::TransformBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GskTransform* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_string;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_transform_to_translate (GskTransform* self /*none*/, float* out_dx, float* out_dy);
// void gsk_transform_to_translate (::GskTransform* self /*none*/, gfloat* out_dx, gfloat* out_dy);
void base::TransformBase::to_translate (gfloat & out_dx, gfloat & out_dy) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_translate;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  out_dy = out_dy_o;
  out_dx = out_dx_o;
}
std::tuple<gfloat, gfloat> base::TransformBase::to_translate () noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, gfloat* out_dx, gfloat* out_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_to_translate;
  gfloat out_dy_o {};
  gfloat out_dx_o {};
  call_wrap_v ((::GskTransform*) (gobj_()), (gfloat*) (&out_dx_o), (gfloat*) (&out_dy_o));
  auto &&tmp_return_1 = out_dx_o;
  auto &&tmp_return_2 = out_dy_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GskTransform* /*full,nullable*/ gsk_transform_transform (GskTransform* next /*full,nullable*/, GskTransform* other /*none,nullable*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_transform (::GskTransform* next /*full,nullable*/, ::GskTransform* other /*none,nullable*/);
Gsk::Transform base::TransformBase::transform (Gsk::Transform_Ref other) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, ::GskTransform* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (::GskTransform*) (other_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gsk::Transform base::TransformBase::transform () noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, ::GskTransform* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform;
  auto other_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (::GskTransform*) (other_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_transform_transform_bounds (GskTransform* self /*none*/, const graphene_rect_t* rect /*none*/, graphene_rect_t* out_rect /*none,out,ca*/);
// void gsk_transform_transform_bounds (::GskTransform* self /*none*/, const ::graphene_rect_t* rect /*none*/, ::graphene_rect_t* out_rect /*none,out,ca*/);
void base::TransformBase::transform_bounds (const Graphene::Rect_Ref rect, Graphene::Rect & out_rect) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, const ::graphene_rect_t* rect, ::graphene_rect_t* out_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform_bounds;
  detail::allocate(out_rect);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(out_rect).gobj_()), "");
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_rect_t*) (rect_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (out_rect).gobj_()));
}
Graphene::Rect base::TransformBase::transform_bounds (const Graphene::Rect_Ref rect) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, const ::graphene_rect_t* rect, ::graphene_rect_t* out_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform_bounds;
  Graphene::Rect out_rect_c;
  auto out_rect = &out_rect_c;
  detail::allocate(*out_rect);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*out_rect).gobj_()), "");
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_rect_t*) (rect_to_c), (::graphene_rect_t*) (out_rect ? (::graphene_rect_t*) (*out_rect).gobj_() : nullptr));
  return out_rect_c;
}

// void gsk_transform_transform_point (GskTransform* self /*none*/, const graphene_point_t* point /*none*/, graphene_point_t* out_point /*none,out,ca*/);
// void gsk_transform_transform_point (::GskTransform* self /*none*/, const ::graphene_point_t* point /*none*/, ::graphene_point_t* out_point /*none,out,ca*/);
void base::TransformBase::transform_point (const Graphene::Point_Ref point, Graphene::Point & out_point) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, const ::graphene_point_t* point, ::graphene_point_t* out_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform_point;
  detail::allocate(out_point);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(out_point).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (::graphene_point_t*) ((::graphene_point_t*) (out_point).gobj_()));
}
Graphene::Point base::TransformBase::transform_point (const Graphene::Point_Ref point) noexcept
{
  typedef void (*call_wrap_t) (::GskTransform* self, const ::graphene_point_t* point, ::graphene_point_t* out_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_transform_point;
  Graphene::Point out_point_c;
  auto out_point = &out_point_c;
  detail::allocate(*out_point);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*out_point).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (::graphene_point_t*) (out_point ? (::graphene_point_t*) (*out_point).gobj_() : nullptr));
  return out_point_c;
}

// GskTransform* /*full,nullable*/ gsk_transform_translate (GskTransform* next /*full,nullable*/, const graphene_point_t* point /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_translate (::GskTransform* next /*full,nullable*/, const ::graphene_point_t* point /*none*/);
Gsk::Transform base::TransformBase::translate (const Graphene::Point_Ref point) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, const ::graphene_point_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_translate;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_point_t*) (point_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskTransform* /*full,nullable*/ gsk_transform_translate_3d (GskTransform* next /*full,nullable*/, const graphene_point3d_t* point /*none*/);
// ::GskTransform* /*full,nullable*/ gsk_transform_translate_3d (::GskTransform* next /*full,nullable*/, const ::graphene_point3d_t* point /*none*/);
Gsk::Transform base::TransformBase::translate_3d (const Graphene::Point3D_Ref point) noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GskTransform* next, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_translate_3d;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskTransform*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_transform_unref (GskTransform* self /*none,nullable*/);
// void gsk_transform_unref (::GskTransform* self /*none,nullable*/);
// IGNORE; marked ignore

// gboolean gsk_transform_parse (const char* string /*none*/, GskTransform** out_transform /*full,out*/);
// gboolean gsk_transform_parse (const char* string /*none*/, ::GskTransform** out_transform /*full,out*/);
bool base::TransformBase::parse (const gi::cstring_v string, Gsk::Transform & out_transform) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, ::GskTransform** out_transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_parse;
  ::GskTransform* out_transform_o {};
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (::GskTransform**) (&out_transform_o));
  out_transform = gi::wrap (out_transform_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gsk::Transform> base::TransformBase::parse (const gi::cstring_v string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, ::GskTransform** out_transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_transform_parse;
  ::GskTransform* out_transform_o {};
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (::GskTransform**) (&out_transform_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_transform_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/transform_extra_def_impl.hpp>)
#include <gsk/transform_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/transform_extra_impl.hpp>)
#include <gsk/transform_extra_impl.hpp>
#endif
#endif

#endif
