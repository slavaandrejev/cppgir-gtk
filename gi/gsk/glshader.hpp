// AUTO-GENERATED

#ifndef _GI_GSK_GLSHADER_HPP_
#define _GI_GSK_GLSHADER_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Renderer;

class GLShader;

namespace base {


#define GI_GSK_GLSHADER_BASE base::GLShaderBase
class GLShaderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GskGLShader BaseObjectType;

GLShaderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gsk_gl_shader_get_type(); } 

// GskGLShader* /*full*/ gsk_gl_shader_new_from_bytes (GBytes* sourcecode /*none*/);
// ::GskGLShader* /*full*/ gsk_gl_shader_new_from_bytes (::GBytes* sourcecode /*none*/);
static GI_INLINE_DECL Gsk::GLShader new_from_bytes (GLib::Bytes_Ref sourcecode) noexcept;

// GskGLShader* /*full*/ gsk_gl_shader_new_from_resource (const char* resource_path /*none*/);
// ::GskGLShader* /*full*/ gsk_gl_shader_new_from_resource (const char* resource_path /*none*/);
static GI_INLINE_DECL Gsk::GLShader new_from_resource (const gi::cstring_v resource_path) noexcept;

// gboolean gsk_gl_shader_compile (GskGLShader* shader /*none*/, GskRenderer* renderer /*none*/, GError ** error);
// gboolean gsk_gl_shader_compile (::GskGLShader* shader /*none*/, ::GskRenderer* renderer /*none*/, GError ** error);
GI_INLINE_DECL bool compile (Gsk::Renderer renderer);
GI_INLINE_DECL bool compile (Gsk::Renderer renderer, GLib::Error * _error) noexcept;

// int gsk_gl_shader_find_uniform_by_name (GskGLShader* shader /*none*/, const char* name /*none*/);
// gint gsk_gl_shader_find_uniform_by_name (::GskGLShader* shader /*none*/, const char* name /*none*/);
GI_INLINE_DECL gint find_uniform_by_name (const gi::cstring_v name) noexcept;

// GBytes* /*full*/ gsk_gl_shader_format_args (GskGLShader* shader /*none*/,  ..._ /*none*/);
// ::GBytes* /*full*/ gsk_gl_shader_format_args (::GskGLShader* shader /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GBytes* /*full*/ gsk_gl_shader_format_args_va (GskGLShader* shader /*none*/, va_list uniforms /*none*/);
// ::GBytes* /*full*/ gsk_gl_shader_format_args_va (::GskGLShader* shader /*none*/,  uniforms /*none*/);
// IGNORE; not introspectable, uniforms type  not supported

// gboolean gsk_gl_shader_get_arg_bool (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gboolean gsk_gl_shader_get_arg_bool (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
GI_INLINE_DECL bool get_arg_bool (GLib::Bytes_Ref args, gint idx) noexcept;

// float gsk_gl_shader_get_arg_float (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gfloat gsk_gl_shader_get_arg_float (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
GI_INLINE_DECL gfloat get_arg_float (GLib::Bytes_Ref args, gint idx) noexcept;

// gint32 gsk_gl_shader_get_arg_int (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// gint32 gsk_gl_shader_get_arg_int (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
GI_INLINE_DECL gint32 get_arg_int (GLib::Bytes_Ref args, gint idx) noexcept;

// guint32 gsk_gl_shader_get_arg_uint (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx);
// guint32 gsk_gl_shader_get_arg_uint (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx);
GI_INLINE_DECL guint32 get_arg_uint (GLib::Bytes_Ref args, gint idx) noexcept;

// void gsk_gl_shader_get_arg_vec2 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec2_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec2 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec2_t* out_value /*none*/);
GI_INLINE_DECL void get_arg_vec2 (GLib::Bytes_Ref args, gint idx, Graphene::Vec2_Ref out_value) noexcept;

// void gsk_gl_shader_get_arg_vec3 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec3_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec3 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec3_t* out_value /*none*/);
GI_INLINE_DECL void get_arg_vec3 (GLib::Bytes_Ref args, gint idx, Graphene::Vec3_Ref out_value) noexcept;

// void gsk_gl_shader_get_arg_vec4 (GskGLShader* shader /*none*/, GBytes* args /*none*/, int idx, graphene_vec4_t* out_value /*none*/);
// void gsk_gl_shader_get_arg_vec4 (::GskGLShader* shader /*none*/, ::GBytes* args /*none*/, gint idx, ::graphene_vec4_t* out_value /*none*/);
GI_INLINE_DECL void get_arg_vec4 (GLib::Bytes_Ref args, gint idx, Graphene::Vec4_Ref out_value) noexcept;

// gsize gsk_gl_shader_get_args_size (GskGLShader* shader /*none*/);
// gsize gsk_gl_shader_get_args_size (::GskGLShader* shader /*none*/);
GI_INLINE_DECL gsize get_args_size () noexcept;

// int gsk_gl_shader_get_n_textures (GskGLShader* shader /*none*/);
// gint gsk_gl_shader_get_n_textures (::GskGLShader* shader /*none*/);
GI_INLINE_DECL gint get_n_textures () noexcept;

// int gsk_gl_shader_get_n_uniforms (GskGLShader* shader /*none*/);
// gint gsk_gl_shader_get_n_uniforms (::GskGLShader* shader /*none*/);
GI_INLINE_DECL gint get_n_uniforms () noexcept;

// const char* /*none,nullable*/ gsk_gl_shader_get_resource (GskGLShader* shader /*none*/);
// const char* /*none,nullable*/ gsk_gl_shader_get_resource (::GskGLShader* shader /*none*/);
GI_INLINE_DECL gi::cstring_v get_resource () noexcept;

// GBytes* /*none*/ gsk_gl_shader_get_source (GskGLShader* shader /*none*/);
// ::GBytes* /*none*/ gsk_gl_shader_get_source (::GskGLShader* shader /*none*/);
GI_INLINE_DECL GLib::Bytes_Ref get_source () noexcept;

// const char* /*none*/ gsk_gl_shader_get_uniform_name (GskGLShader* shader /*none*/, int idx);
// const char* /*none*/ gsk_gl_shader_get_uniform_name (::GskGLShader* shader /*none*/, gint idx);
GI_INLINE_DECL gi::cstring_v get_uniform_name (gint idx) noexcept;

// int gsk_gl_shader_get_uniform_offset (GskGLShader* shader /*none*/, int idx);
// gint gsk_gl_shader_get_uniform_offset (::GskGLShader* shader /*none*/, gint idx);
GI_INLINE_DECL gint get_uniform_offset (gint idx) noexcept;

// GskGLUniformType gsk_gl_shader_get_uniform_type (GskGLShader* shader /*none*/, int idx);
// ::GskGLUniformType gsk_gl_shader_get_uniform_type (::GskGLShader* shader /*none*/, gint idx);
GI_INLINE_DECL Gsk::GLUniformType get_uniform_type (gint idx) noexcept;

gi::property_proxy<gi::cstring, base::GLShaderBase> property_resource()
{ return gi::property_proxy<gi::cstring, base::GLShaderBase> (*this, "resource"); }
const gi::property_proxy<gi::cstring, base::GLShaderBase> property_resource() const
{ return gi::property_proxy<gi::cstring, base::GLShaderBase> (*this, "resource"); }

gi::property_proxy<GLib::Bytes, base::GLShaderBase> property_source()
{ return gi::property_proxy<GLib::Bytes, base::GLShaderBase> (*this, "source"); }
const gi::property_proxy<GLib::Bytes, base::GLShaderBase> property_source() const
{ return gi::property_proxy<GLib::Bytes, base::GLShaderBase> (*this, "source"); }

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/glshader_extra_def.hpp>)
#include <gsk/glshader_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/glshader_extra.hpp>)
#include <gsk/glshader_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class GLShader : public GI_GSK_GLSHADER_BASE
{ typedef GI_GSK_GLSHADER_BASE super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskGLShader>
{ typedef Gsk::GLShader type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

namespace impl {

namespace internal {


class GLShaderClassDef
{
typedef GLShaderClassDef self;
public:
typedef Gsk::GLShader instance_type;
typedef ::GskGLShaderClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~GLShaderClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GLShaderClass: public detail::ClassTemplate<Gsk::impl::internal::GLShaderClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::GLShaderClassDef;
typedef GLShaderClass self;
typedef detail::ClassTemplate<Gsk::impl::internal::GLShaderClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct GLShaderClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using GLShaderImpl = detail::ObjectImpl<GLShader, internal::GLShaderClass>;

} // namespace impl

} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
