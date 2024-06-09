// AUTO-GENERATED

#ifndef _GI_GSK_GLSHADER_IMPL_HPP_
#define _GI_GSK_GLSHADER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskGLShader* /*full*/ gsk_gl_shader_new_from_bytes (GBytes* sourcecode /*none*/);
// ::GskGLShader* /*full*/ gsk_gl_shader_new_from_bytes (::GBytes* sourcecode /*none*/);
Gsk::GLShader base::GLShaderBase::new_from_bytes (GLib::Bytes_Ref sourcecode) noexcept
{
  typedef ::GskGLShader* (*call_wrap_t) (::GBytes* sourcecode);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_gl_shader_new_from_bytes;
  auto sourcecode_to_c = gi::unwrap (sourcecode, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GBytes*) (sourcecode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskGLShader* /*full*/ gsk_gl_shader_new_from_resource (const char* resource_path /*none*/);
// ::GskGLShader* /*full*/ gsk_gl_shader_new_from_resource (const char* resource_path /*none*/);
Gsk::GLShader base::GLShaderBase::new_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GskGLShader* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_gl_shader_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gsk_gl_shader_compile (GskGLShader* shader /*none*/, GskRenderer* renderer /*none*/, GError ** error);
// gboolean gsk_gl_shader_compile (::GskGLShader* shader /*none*/, ::GskRenderer* renderer /*none*/, GError ** error);
bool base::GLShaderBase::compile (Gsk::Renderer renderer)
{
  typedef gboolean (*call_wrap_t) (::GskGLShader* shader, ::GskRenderer* renderer, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_compile;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GskRenderer*) (renderer_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::GLShaderBase::compile (Gsk::Renderer renderer, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskGLShader* shader, ::GskRenderer* renderer, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_compile;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GskRenderer*) (renderer_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// int gsk_gl_shader_find_uniform_by_name (GskGLShader* shader /*none*/, const char* name /*none*/);
// gint gsk_gl_shader_find_uniform_by_name (::GskGLShader* shader /*none*/, const char* name /*none*/);
gint base::GLShaderBase::find_uniform_by_name (const gi::cstring_v name) noexcept
{
  typedef gint (*call_wrap_t) (::GskGLShader* shader, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_find_uniform_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// GBytes* /*full*/ gsk_gl_shader_format_args (GskGLShader* shader /*none*/,  ..._ /*none*/);
// ::GBytes* /*full*/ gsk_gl_shader_format_args (::GskGLShader* shader /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GBytes* /*full*/ gsk_gl_shader_format_args_va (GskGLShader* shader /*none*/, va_list uniforms /*none*/);
// ::GBytes* /*full*/ gsk_gl_shader_format_args_va (::GskGLShader* shader /*none*/,  uniforms /*none*/);
// IGNORE; not introspectable, uniforms type  not supported

// gboolean gsk_gl_shader_get_arg_bool (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gboolean gsk_gl_shader_get_arg_bool (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
bool base::GLShaderBase::get_arg_bool (GLib::Bytes_Ref args, gint idx) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_bool;
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c));
  return _temp_ret;
}

// float gsk_gl_shader_get_arg_float (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gfloat gsk_gl_shader_get_arg_float (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
gfloat base::GLShaderBase::get_arg_float (GLib::Bytes_Ref args, gint idx) noexcept
{
  typedef gfloat (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_float;
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c));
  return _temp_ret;
}

// gint32 gsk_gl_shader_get_arg_int (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gint32 gsk_gl_shader_get_arg_int (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
gint32 base::GLShaderBase::get_arg_int (GLib::Bytes_Ref args, gint idx) noexcept
{
  typedef gint32 (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_int;
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c));
  return _temp_ret;
}

// guint32 gsk_gl_shader_get_arg_uint (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// guint32 gsk_gl_shader_get_arg_uint (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
guint32 base::GLShaderBase::get_arg_uint (GLib::Bytes_Ref args, gint idx) noexcept
{
  typedef guint32 (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_uint;
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c));
  return _temp_ret;
}

// void gsk_gl_shader_get_arg_vec2 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec2_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec2 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec2_t* out_value /*none*/);
void base::GLShaderBase::get_arg_vec2 (GLib::Bytes_Ref args, gint idx, Graphene::Vec2_Ref out_value) noexcept
{
  typedef void (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx, ::graphene_vec2_t* out_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_vec2;
  auto out_value_to_c = gi::unwrap (out_value, gi::transfer_none);
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c), (::graphene_vec2_t*) (out_value_to_c));
}

// void gsk_gl_shader_get_arg_vec3 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec3_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec3 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec3_t* out_value /*none*/);
void base::GLShaderBase::get_arg_vec3 (GLib::Bytes_Ref args, gint idx, Graphene::Vec3_Ref out_value) noexcept
{
  typedef void (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx, ::graphene_vec3_t* out_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_vec3;
  auto out_value_to_c = gi::unwrap (out_value, gi::transfer_none);
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c), (::graphene_vec3_t*) (out_value_to_c));
}

// void gsk_gl_shader_get_arg_vec4 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec4_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec4 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec4_t* out_value /*none*/);
void base::GLShaderBase::get_arg_vec4 (GLib::Bytes_Ref args, gint idx, Graphene::Vec4_Ref out_value) noexcept
{
  typedef void (*call_wrap_t) (::GskGLShader* shader, ::GBytes* args, gint idx, ::graphene_vec4_t* out_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_arg_vec4;
  auto out_value_to_c = gi::unwrap (out_value, gi::transfer_none);
  auto idx_to_c = idx;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  call_wrap_v ((::GskGLShader*) (gobj_()), (::GBytes*) (args_to_c), (gint) (idx_to_c), (::graphene_vec4_t*) (out_value_to_c));
}

// gsize gsk_gl_shader_get_args_size (GskGLShader* shader /*none*/);
// gsize gsk_gl_shader_get_args_size (::GskGLShader* shader /*none*/);
gsize base::GLShaderBase::get_args_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GskGLShader* shader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_args_size;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()));
  return _temp_ret;
}

// int gsk_gl_shader_get_n_textures (GskGLShader* shader /*none*/);
// gint gsk_gl_shader_get_n_textures (::GskGLShader* shader /*none*/);
gint base::GLShaderBase::get_n_textures () noexcept
{
  typedef gint (*call_wrap_t) (::GskGLShader* shader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_n_textures;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()));
  return _temp_ret;
}

// int gsk_gl_shader_get_n_uniforms (GskGLShader* shader /*none*/);
// gint gsk_gl_shader_get_n_uniforms (::GskGLShader* shader /*none*/);
gint base::GLShaderBase::get_n_uniforms () noexcept
{
  typedef gint (*call_wrap_t) (::GskGLShader* shader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_n_uniforms;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gsk_gl_shader_get_resource (GskGLShader* shader /*none*/);
// const char* /*none,nullable*/ gsk_gl_shader_get_resource (::GskGLShader* shader /*none*/);
gi::cstring_v base::GLShaderBase::get_resource () noexcept
{
  typedef const char* (*call_wrap_t) (::GskGLShader* shader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_resource;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GBytes* /*none*/ gsk_gl_shader_get_source (GskGLShader* shader /*none*/);
// ::GBytes* /*none*/ gsk_gl_shader_get_source (::GskGLShader* shader /*none*/);
GLib::Bytes_Ref base::GLShaderBase::get_source () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GskGLShader* shader);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_source;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gsk_gl_shader_get_uniform_name (GskGLShader* shader /*none*/, int idx);
// const char* /*none*/ gsk_gl_shader_get_uniform_name (::GskGLShader* shader /*none*/, gint idx);
gi::cstring_v base::GLShaderBase::get_uniform_name (gint idx) noexcept
{
  typedef const char* (*call_wrap_t) (::GskGLShader* shader, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_uniform_name;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (gint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gsk_gl_shader_get_uniform_offset (GskGLShader* shader /*none*/, int idx);
// gint gsk_gl_shader_get_uniform_offset (::GskGLShader* shader /*none*/, gint idx);
gint base::GLShaderBase::get_uniform_offset (gint idx) noexcept
{
  typedef gint (*call_wrap_t) (::GskGLShader* shader, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_uniform_offset;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (gint) (idx_to_c));
  return _temp_ret;
}

// GskGLUniformType gsk_gl_shader_get_uniform_type (GskGLShader* shader /*none*/, int idx);
// ::GskGLUniformType gsk_gl_shader_get_uniform_type (::GskGLShader* shader /*none*/, gint idx);
Gsk::GLUniformType base::GLShaderBase::get_uniform_type (gint idx) noexcept
{
  typedef ::GskGLUniformType (*call_wrap_t) (::GskGLShader* shader, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_gl_shader_get_uniform_type;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GskGLShader*) (gobj_()), (gint) (idx_to_c));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/glshader_extra_def_impl.hpp>)
#include <gsk/glshader_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/glshader_extra_impl.hpp>)
#include <gsk/glshader_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

namespace impl {

namespace internal {

void GLShaderClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GskGLShaderClass *methods = (::GskGLShaderClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
