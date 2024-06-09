// AUTO-GENERATED

#ifndef _GI_GSK_SHADERARGSBUILDER_HPP_
#define _GI_GSK_SHADERARGSBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class GLShader;
class ShaderArgsBuilder_Ref;

class ShaderArgsBuilder;

namespace base {


#define GI_GSK_SHADERARGSBUILDER_BASE base::ShaderArgsBuilderBase
class ShaderArgsBuilderBase : public gi::detail::GBoxedWrapperBase<ShaderArgsBuilderBase, ::GskShaderArgsBuilder>
{
typedef gi::detail::GBoxedWrapperBase<ShaderArgsBuilderBase, ::GskShaderArgsBuilder> super_type;
public:

ShaderArgsBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_shader_args_builder_get_type(); } 

// GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_new (GskGLShader* shader /*none*/, GBytes* initial_values /*none,nullable*/);
// ::GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_new (::GskGLShader* shader /*none*/, ::GBytes* initial_values /*none,nullable*/);
static GI_INLINE_DECL Gsk::ShaderArgsBuilder new_ (Gsk::GLShader shader, GLib::Bytes_Ref initial_values) noexcept;
static GI_INLINE_DECL Gsk::ShaderArgsBuilder new_ (Gsk::GLShader shader) noexcept;

// GBytes* /*full*/ gsk_shader_args_builder_free_to_args (GskShaderArgsBuilder* builder /*none*/);
// ::GBytes* /*full*/ gsk_shader_args_builder_free_to_args (::GskShaderArgsBuilder* builder /*none*/);
GI_INLINE_DECL GLib::Bytes free_to_args () noexcept;

// GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_ref (GskShaderArgsBuilder* builder /*none*/);
// ::GskShaderArgsBuilder* /*full*/ gsk_shader_args_builder_ref (::GskShaderArgsBuilder* builder /*none*/);
// IGNORE; marked ignore

// void gsk_shader_args_builder_set_bool (GskShaderArgsBuilder* builder /*none*/, int idx, gboolean value);
// void gsk_shader_args_builder_set_bool (::GskShaderArgsBuilder* builder /*none*/, gint idx, gboolean value);
GI_INLINE_DECL void set_bool (gint idx, gboolean value) noexcept;

// void gsk_shader_args_builder_set_float (GskShaderArgsBuilder* builder /*none*/, int idx, float value);
// void gsk_shader_args_builder_set_float (::GskShaderArgsBuilder* builder /*none*/, gint idx, gfloat value);
GI_INLINE_DECL void set_float (gint idx, gfloat value) noexcept;

// void gsk_shader_args_builder_set_int (GskShaderArgsBuilder* builder /*none*/, int idx, gint32 value);
// void gsk_shader_args_builder_set_int (::GskShaderArgsBuilder* builder /*none*/, gint idx, gint32 value);
GI_INLINE_DECL void set_int (gint idx, gint32 value) noexcept;

// void gsk_shader_args_builder_set_uint (GskShaderArgsBuilder* builder /*none*/, int idx, guint32 value);
// void gsk_shader_args_builder_set_uint (::GskShaderArgsBuilder* builder /*none*/, gint idx, guint32 value);
GI_INLINE_DECL void set_uint (gint idx, guint32 value) noexcept;

// void gsk_shader_args_builder_set_vec2 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec2_t* value /*none*/);
// void gsk_shader_args_builder_set_vec2 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec2_t* value /*none*/);
GI_INLINE_DECL void set_vec2 (gint idx, const Graphene::Vec2_Ref value) noexcept;

// void gsk_shader_args_builder_set_vec3 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec3_t* value /*none*/);
// void gsk_shader_args_builder_set_vec3 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec3_t* value /*none*/);
GI_INLINE_DECL void set_vec3 (gint idx, const Graphene::Vec3_Ref value) noexcept;

// void gsk_shader_args_builder_set_vec4 (GskShaderArgsBuilder* builder /*none*/, int idx, const graphene_vec4_t* value /*none*/);
// void gsk_shader_args_builder_set_vec4 (::GskShaderArgsBuilder* builder /*none*/, gint idx, const ::graphene_vec4_t* value /*none*/);
GI_INLINE_DECL void set_vec4 (gint idx, const Graphene::Vec4_Ref value) noexcept;

// GBytes* /*full*/ gsk_shader_args_builder_to_args (GskShaderArgsBuilder* builder /*none*/);
// ::GBytes* /*full*/ gsk_shader_args_builder_to_args (::GskShaderArgsBuilder* builder /*none*/);
GI_INLINE_DECL GLib::Bytes to_args () noexcept;

// void gsk_shader_args_builder_unref (GskShaderArgsBuilder* builder /*none*/);
// void gsk_shader_args_builder_unref (::GskShaderArgsBuilder* builder /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/shaderargsbuilder_extra_def.hpp>)
#include <gsk/shaderargsbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/shaderargsbuilder_extra.hpp>)
#include <gsk/shaderargsbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class ShaderArgsBuilder_Ref;

class ShaderArgsBuilder : public gi::detail::GBoxedWrapper<ShaderArgsBuilder, ::GskShaderArgsBuilder, GI_GSK_SHADERARGSBUILDER_BASE, ShaderArgsBuilder_Ref>
{ typedef gi::detail::GBoxedWrapper<ShaderArgsBuilder, ::GskShaderArgsBuilder, GI_GSK_SHADERARGSBUILDER_BASE, ShaderArgsBuilder_Ref> super_type; using super_type::super_type; };


class ShaderArgsBuilder_Ref : public gi::detail::GBoxedRefWrapper<ShaderArgsBuilder, ::GskShaderArgsBuilder, GI_GSK_SHADERARGSBUILDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ShaderArgsBuilder, ::GskShaderArgsBuilder, GI_GSK_SHADERARGSBUILDER_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskShaderArgsBuilder>
{ typedef Gsk::ShaderArgsBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
