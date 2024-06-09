// AUTO-GENERATED

#ifndef _GI_GSK_SHADERARGSBUILDER_IMPL_HPP_
#define _GI_GSK_SHADERARGSBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_new (GskGLShader* shader /*none*/, GBytes* initial_values /*none,nullable*/);
// ::GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_new (::GskGLShader* shader /*none*/, ::GBytes* initial_values /*none,nullable*/);
Gsk::ShaderArgsBuilder base::ShaderArgsBuilderBase::new_ (Gsk::GLShader shader, GLib::Bytes_Ref initial_values) noexcept
{
  typedef ::GskShaderArgsBuilder* (*call_wrap_t) (::GskGLShader* shader, ::GBytes* initial_values);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_shader_args_builder_new;
  auto initial_values_to_c = gi::unwrap (initial_values, gi::transfer_none);
  auto shader_to_c = gi::unwrap (shader, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (shader_to_c), (::GBytes*) (initial_values_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gsk::ShaderArgsBuilder base::ShaderArgsBuilderBase::new_ (Gsk::GLShader shader) noexcept
{
  typedef ::GskShaderArgsBuilder* (*call_wrap_t) (::GskGLShader* shader, ::GBytes* initial_values);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_shader_args_builder_new;
  auto initial_values_to_c = nullptr;
  auto shader_to_c = gi::unwrap (shader, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (shader_to_c), (::GBytes*) (initial_values_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ gsk_shader_args_builder_free_to_args (GskShaderArgsBuilder* builder /*none*/);
// ::GBytes* /*full*/ gsk_shader_args_builder_free_to_args (::GskShaderArgsBuilder* builder /*none*/);
GLib::Bytes base::ShaderArgsBuilderBase::free_to_args () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GskShaderArgsBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_free_to_args;
  auto _temp_ret = call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_ref (GskShaderArgsBuilder* builder /*none*/);
// ::GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_ref (::GskShaderArgsBuilder* builder /*none*/);
// IGNORE; marked ignore

// void gsk_shader_args_builder_set_bool (GskShaderArgsBuilder* builder /*none*/, int idx, gboolean value);
// void gsk_shader_args_builder_set_bool (::GskShaderArgsBuilder* builder /*none*/, gint idx, gboolean value);
void base::ShaderArgsBuilderBase::set_bool (gint idx, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_bool;
  auto value_to_c = value;
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (gboolean) (value_to_c));
}

// void gsk_shader_args_builder_set_float (GskShaderArgsBuilder* builder /*none*/, int idx, float value);
// void gsk_shader_args_builder_set_float (::GskShaderArgsBuilder* builder /*none*/, gint idx, gfloat value);
void base::ShaderArgsBuilderBase::set_float (gint idx, gfloat value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, gfloat value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_float;
  auto value_to_c = value;
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (gfloat) (value_to_c));
}

// void gsk_shader_args_builder_set_int (GskShaderArgsBuilder* builder /*none*/, int idx, gint32 value);
// void gsk_shader_args_builder_set_int (::GskShaderArgsBuilder* builder /*none*/, gint idx, gint32 value);
void base::ShaderArgsBuilderBase::set_int (gint idx, gint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, gint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_int;
  auto value_to_c = value;
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (gint32) (value_to_c));
}

// void gsk_shader_args_builder_set_uint (GskShaderArgsBuilder* builder /*none*/, int idx, guint32 value);
// void gsk_shader_args_builder_set_uint (::GskShaderArgsBuilder* builder /*none*/, gint idx, guint32 value);
void base::ShaderArgsBuilderBase::set_uint (gint idx, guint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_uint;
  auto value_to_c = value;
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (guint32) (value_to_c));
}

// void gsk_shader_args_builder_set_vec2 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec2_t* value /*none*/);
// void gsk_shader_args_builder_set_vec2 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec2_t* value /*none*/);
void base::ShaderArgsBuilderBase::set_vec2 (gint idx, const Graphene::Vec2_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, const ::graphene_vec2_t* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_vec2;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (const ::graphene_vec2_t*) (value_to_c));
}

// void gsk_shader_args_builder_set_vec3 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec3_t* value /*none*/);
// void gsk_shader_args_builder_set_vec3 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec3_t* value /*none*/);
void base::ShaderArgsBuilderBase::set_vec3 (gint idx, const Graphene::Vec3_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, const ::graphene_vec3_t* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_vec3;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (const ::graphene_vec3_t*) (value_to_c));
}

// void gsk_shader_args_builder_set_vec4 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec4_t* value /*none*/);
// void gsk_shader_args_builder_set_vec4 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec4_t* value /*none*/);
void base::ShaderArgsBuilderBase::set_vec4 (gint idx, const Graphene::Vec4_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GskShaderArgsBuilder* builder, gint idx, const ::graphene_vec4_t* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_set_vec4;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto idx_to_c = idx;
  call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()), (gint) (idx_to_c), (const ::graphene_vec4_t*) (value_to_c));
}

// GBytes* /*full*/ gsk_shader_args_builder_to_args (GskShaderArgsBuilder* builder /*none*/);
// ::GBytes* /*full*/ gsk_shader_args_builder_to_args (::GskShaderArgsBuilder* builder /*none*/);
GLib::Bytes base::ShaderArgsBuilderBase::to_args () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GskShaderArgsBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_shader_args_builder_to_args;
  auto _temp_ret = call_wrap_v ((::GskShaderArgsBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_shader_args_builder_unref (GskShaderArgsBuilder* builder /*none*/);
// void gsk_shader_args_builder_unref (::GskShaderArgsBuilder* builder /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/shaderargsbuilder_extra_def_impl.hpp>)
#include <gsk/shaderargsbuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/shaderargsbuilder_extra_impl.hpp>)
#include <gsk/shaderargsbuilder_extra_impl.hpp>
#endif
#endif

#endif
