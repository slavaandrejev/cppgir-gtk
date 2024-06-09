// AUTO-GENERATED

#ifndef _GI_GSK__ENUMS_HPP_
#define _GI_GSK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gsk {

enum class BlendMode : std::underlying_type<GskBlendMode>::type {
  DEFAULT_ = GSK_BLEND_MODE_DEFAULT,
  MULTIPLY_ = GSK_BLEND_MODE_MULTIPLY,
  SCREEN_ = GSK_BLEND_MODE_SCREEN,
  OVERLAY_ = GSK_BLEND_MODE_OVERLAY,
  DARKEN_ = GSK_BLEND_MODE_DARKEN,
  LIGHTEN_ = GSK_BLEND_MODE_LIGHTEN,
  COLOR_DODGE_ = GSK_BLEND_MODE_COLOR_DODGE,
  COLOR_BURN_ = GSK_BLEND_MODE_COLOR_BURN,
  HARD_LIGHT_ = GSK_BLEND_MODE_HARD_LIGHT,
  SOFT_LIGHT_ = GSK_BLEND_MODE_SOFT_LIGHT,
  DIFFERENCE_ = GSK_BLEND_MODE_DIFFERENCE,
  EXCLUSION_ = GSK_BLEND_MODE_EXCLUSION,
  COLOR_ = GSK_BLEND_MODE_COLOR,
  HUE_ = GSK_BLEND_MODE_HUE,
  SATURATION_ = GSK_BLEND_MODE_SATURATION,
  LUMINOSITY_ = GSK_BLEND_MODE_LUMINOSITY,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::BlendMode>
{ typedef GskBlendMode type; }; 
template<> struct declare_cpptype_of<GskBlendMode>
{ typedef Gsk::BlendMode type; }; 

template<> struct declare_gtype_of<Gsk::BlendMode>
{ static GType get_type() { return gsk_blend_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class Corner : std::underlying_type<GskCorner>::type {
  TOP_LEFT_ = GSK_CORNER_TOP_LEFT,
  TOP_RIGHT_ = GSK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT_ = GSK_CORNER_BOTTOM_RIGHT,
  BOTTOM_LEFT_ = GSK_CORNER_BOTTOM_LEFT,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::Corner>
{ typedef GskCorner type; }; 
template<> struct declare_cpptype_of<GskCorner>
{ typedef Gsk::Corner type; }; 

template<> struct declare_gtype_of<Gsk::Corner>
{ static GType get_type() { return gsk_corner_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class GLUniformType : std::underlying_type<GskGLUniformType>::type {
  NONE_ = GSK_GL_UNIFORM_TYPE_NONE,
  FLOAT_ = GSK_GL_UNIFORM_TYPE_FLOAT,
  INT_ = GSK_GL_UNIFORM_TYPE_INT,
  UINT_ = GSK_GL_UNIFORM_TYPE_UINT,
  BOOL_ = GSK_GL_UNIFORM_TYPE_BOOL,
  VEC2_ = GSK_GL_UNIFORM_TYPE_VEC2,
  VEC3_ = GSK_GL_UNIFORM_TYPE_VEC3,
  VEC4_ = GSK_GL_UNIFORM_TYPE_VEC4,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::GLUniformType>
{ typedef GskGLUniformType type; }; 
template<> struct declare_cpptype_of<GskGLUniformType>
{ typedef Gsk::GLUniformType type; }; 

template<> struct declare_gtype_of<Gsk::GLUniformType>
{ static GType get_type() { return gsk_gl_uniform_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class MaskMode : std::underlying_type<GskMaskMode>::type {
  ALPHA_ = GSK_MASK_MODE_ALPHA,
  INVERTED_ALPHA_ = GSK_MASK_MODE_INVERTED_ALPHA,
  LUMINANCE_ = GSK_MASK_MODE_LUMINANCE,
  INVERTED_LUMINANCE_ = GSK_MASK_MODE_INVERTED_LUMINANCE,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::MaskMode>
{ typedef GskMaskMode type; }; 
template<> struct declare_cpptype_of<GskMaskMode>
{ typedef Gsk::MaskMode type; }; 

template<> struct declare_gtype_of<Gsk::MaskMode>
{ static GType get_type() { return gsk_mask_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class RenderNodeType : std::underlying_type<GskRenderNodeType>::type {
  NOT_A_RENDER_NODE_ = GSK_NOT_A_RENDER_NODE,
  CONTAINER_NODE_ = GSK_CONTAINER_NODE,
  CAIRO_NODE_ = GSK_CAIRO_NODE,
  COLOR_NODE_ = GSK_COLOR_NODE,
  LINEAR_GRADIENT_NODE_ = GSK_LINEAR_GRADIENT_NODE,
  REPEATING_LINEAR_GRADIENT_NODE_ = GSK_REPEATING_LINEAR_GRADIENT_NODE,
  RADIAL_GRADIENT_NODE_ = GSK_RADIAL_GRADIENT_NODE,
  REPEATING_RADIAL_GRADIENT_NODE_ = GSK_REPEATING_RADIAL_GRADIENT_NODE,
  CONIC_GRADIENT_NODE_ = GSK_CONIC_GRADIENT_NODE,
  BORDER_NODE_ = GSK_BORDER_NODE,
  TEXTURE_NODE_ = GSK_TEXTURE_NODE,
  INSET_SHADOW_NODE_ = GSK_INSET_SHADOW_NODE,
  OUTSET_SHADOW_NODE_ = GSK_OUTSET_SHADOW_NODE,
  TRANSFORM_NODE_ = GSK_TRANSFORM_NODE,
  OPACITY_NODE_ = GSK_OPACITY_NODE,
  COLOR_MATRIX_NODE_ = GSK_COLOR_MATRIX_NODE,
  REPEAT_NODE_ = GSK_REPEAT_NODE,
  CLIP_NODE_ = GSK_CLIP_NODE,
  ROUNDED_CLIP_NODE_ = GSK_ROUNDED_CLIP_NODE,
  SHADOW_NODE_ = GSK_SHADOW_NODE,
  BLEND_NODE_ = GSK_BLEND_NODE,
  CROSS_FADE_NODE_ = GSK_CROSS_FADE_NODE,
  TEXT_NODE_ = GSK_TEXT_NODE,
  BLUR_NODE_ = GSK_BLUR_NODE,
  DEBUG_NODE_ = GSK_DEBUG_NODE,
  GL_SHADER_NODE_ = GSK_GL_SHADER_NODE,
  TEXTURE_SCALE_NODE_ = GSK_TEXTURE_SCALE_NODE,
  MASK_NODE_ = GSK_MASK_NODE,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::RenderNodeType>
{ typedef GskRenderNodeType type; }; 
template<> struct declare_cpptype_of<GskRenderNodeType>
{ typedef Gsk::RenderNodeType type; }; 

template<> struct declare_gtype_of<Gsk::RenderNodeType>
{ static GType get_type() { return gsk_render_node_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class ScalingFilter : std::underlying_type<GskScalingFilter>::type {
  LINEAR_ = GSK_SCALING_FILTER_LINEAR,
  NEAREST_ = GSK_SCALING_FILTER_NEAREST,
  TRILINEAR_ = GSK_SCALING_FILTER_TRILINEAR,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::ScalingFilter>
{ typedef GskScalingFilter type; }; 
template<> struct declare_cpptype_of<GskScalingFilter>
{ typedef Gsk::ScalingFilter type; }; 

template<> struct declare_gtype_of<Gsk::ScalingFilter>
{ static GType get_type() { return gsk_scaling_filter_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class SerializationError : std::underlying_type<GskSerializationError>::type {
  UNSUPPORTED_FORMAT_ = GSK_SERIALIZATION_UNSUPPORTED_FORMAT,
  UNSUPPORTED_VERSION_ = GSK_SERIALIZATION_UNSUPPORTED_VERSION,
  INVALID_DATA_ = GSK_SERIALIZATION_INVALID_DATA,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::SerializationError>
{ typedef GskSerializationError type; }; 
template<> struct declare_cpptype_of<GskSerializationError>
{ typedef Gsk::SerializationError type; }; 

template<> struct declare_gtype_of<Gsk::SerializationError>
{ static GType get_type() { return gsk_serialization_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class TransformCategory : std::underlying_type<GskTransformCategory>::type {
  UNKNOWN_ = GSK_TRANSFORM_CATEGORY_UNKNOWN,
  ANY_ = GSK_TRANSFORM_CATEGORY_ANY,
  _3D = GSK_TRANSFORM_CATEGORY_3D,
  _2D = GSK_TRANSFORM_CATEGORY_2D,
  _2D_AFFINE = GSK_TRANSFORM_CATEGORY_2D_AFFINE,
  _2D_TRANSLATE = GSK_TRANSFORM_CATEGORY_2D_TRANSLATE,
  IDENTITY_ = GSK_TRANSFORM_CATEGORY_IDENTITY,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::TransformCategory>
{ typedef GskTransformCategory type; }; 
template<> struct declare_cpptype_of<GskTransformCategory>
{ typedef Gsk::TransformCategory type; }; 

template<> struct declare_gtype_of<Gsk::TransformCategory>
{ static GType get_type() { return gsk_transform_category_get_type(); } };


} // namespace repository

} // namespace gi


#endif
