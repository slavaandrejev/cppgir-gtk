// AUTO-GENERATED

#ifndef _GI_GDK_GLTEXTURE_HPP_
#define _GI_GDK_GLTEXTURE_HPP_

#include "texture.hpp"

namespace gi {

namespace repository {

namespace Gdk {

class GLContext;

class GLTexture;

namespace base {


#define GI_GDK_GLTEXTURE_BASE base::GLTextureBase
class GLTextureBase : public Gdk::Texture
{
typedef Gdk::Texture super_type;
public:
typedef ::GdkGLTexture BaseObjectType;

GLTextureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_gl_texture_get_type(); } 

// GdkTexture* /*full*/ gdk_gl_texture_new (GdkGLContext* context /*none*/, guint id, int width, int height, GDestroyNotify destroy /*none*/, gpointer data);
// ::GdkGLTexture* /*full*/ gdk_gl_texture_new (::GdkGLContext* context /*none*/, guint id, gint width, gint height, GLib::DestroyNotify::cfunction_type destroy /*none*/, void* data);
// IGNORE; deprecated

// void gdk_gl_texture_release (GdkGLTexture* self /*none*/);
// void gdk_gl_texture_release (::GdkGLTexture* self /*none*/);
GI_INLINE_DECL void release () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/gltexture_extra_def.hpp>)
#include <gdk/gltexture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/gltexture_extra.hpp>)
#include <gdk/gltexture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class GLTexture : public GI_GDK_GLTEXTURE_BASE
{ typedef GI_GDK_GLTEXTURE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkGLTexture>
{ typedef Gdk::GLTexture type; }; 

} // namespace repository

} // namespace gi

#endif
