// AUTO-GENERATED

#ifndef _GI_GDK_GLTEXTUREBUILDER_HPP_
#define _GI_GDK_GLTEXTUREBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class GLContext;
class Texture;

class GLTextureBuilder;

namespace base {


#define GI_GDK_GLTEXTUREBUILDER_BASE base::GLTextureBuilderBase
class GLTextureBuilderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkGLTextureBuilder BaseObjectType;

GLTextureBuilderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_gl_texture_builder_get_type(); } 

// GdkGLTextureBuilder* /*full*/ gdk_gl_texture_builder_new ();
// ::GdkGLTextureBuilder* /*full*/ gdk_gl_texture_builder_new ();
static GI_INLINE_DECL Gdk::GLTextureBuilder new_ () noexcept;

// GdkTexture* /*full*/ gdk_gl_texture_builder_build (GdkGLTextureBuilder* self /*none*/, GDestroyNotify destroy /*none,nullable*/, gpointer data);
// ::GdkTexture* /*full*/ gdk_gl_texture_builder_build (::GdkGLTextureBuilder* self /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/, void* data);
// SKIP; callback misses closure info

// GdkGLContext* /*none,nullable*/ gdk_gl_texture_builder_get_context (GdkGLTextureBuilder* self /*none*/);
// ::GdkGLContext* /*none,nullable*/ gdk_gl_texture_builder_get_context (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::GLContext get_context () noexcept;

// GdkMemoryFormat gdk_gl_texture_builder_get_format (GdkGLTextureBuilder* self /*none*/);
// ::GdkMemoryFormat gdk_gl_texture_builder_get_format (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::MemoryFormat get_format () noexcept;

// gboolean gdk_gl_texture_builder_get_has_mipmap (GdkGLTextureBuilder* self /*none*/);
// gboolean gdk_gl_texture_builder_get_has_mipmap (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL bool get_has_mipmap () noexcept;

// int gdk_gl_texture_builder_get_height (GdkGLTextureBuilder* self /*none*/);
// gint gdk_gl_texture_builder_get_height (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// guint gdk_gl_texture_builder_get_id (GdkGLTextureBuilder* self /*none*/);
// guint gdk_gl_texture_builder_get_id (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL guint get_id () noexcept;

// gpointer gdk_gl_texture_builder_get_sync (GdkGLTextureBuilder* self /*none*/);
// void* gdk_gl_texture_builder_get_sync (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL gpointer get_sync () noexcept;

// cairo_region_t* /*none,nullable*/ gdk_gl_texture_builder_get_update_region (GdkGLTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_gl_texture_builder_get_update_region (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL cairo::Region_Ref get_update_region () noexcept;

// GdkTexture* /*none,nullable*/ gdk_gl_texture_builder_get_update_texture (GdkGLTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_gl_texture_builder_get_update_texture (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::Texture get_update_texture () noexcept;

// int gdk_gl_texture_builder_get_width (GdkGLTextureBuilder* self /*none*/);
// gint gdk_gl_texture_builder_get_width (::GdkGLTextureBuilder* self /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// void gdk_gl_texture_builder_set_context (GdkGLTextureBuilder* self /*none*/, GdkGLContext* context /*none,nullable*/);
// void gdk_gl_texture_builder_set_context (::GdkGLTextureBuilder* self /*none*/, ::GdkGLContext* context /*none,nullable*/);
GI_INLINE_DECL void set_context (Gdk::GLContext context) noexcept;
GI_INLINE_DECL void set_context () noexcept;

// void gdk_gl_texture_builder_set_format (GdkGLTextureBuilder* self /*none*/, GdkMemoryFormat format);
// void gdk_gl_texture_builder_set_format (::GdkGLTextureBuilder* self /*none*/, ::GdkMemoryFormat format);
GI_INLINE_DECL void set_format (Gdk::MemoryFormat format) noexcept;

// void gdk_gl_texture_builder_set_has_mipmap (GdkGLTextureBuilder* self /*none*/, gboolean has_mipmap);
// void gdk_gl_texture_builder_set_has_mipmap (::GdkGLTextureBuilder* self /*none*/, gboolean has_mipmap);
GI_INLINE_DECL void set_has_mipmap (gboolean has_mipmap) noexcept;

// void gdk_gl_texture_builder_set_height (GdkGLTextureBuilder* self /*none*/, int height);
// void gdk_gl_texture_builder_set_height (::GdkGLTextureBuilder* self /*none*/, gint height);
GI_INLINE_DECL void set_height (gint height) noexcept;

// void gdk_gl_texture_builder_set_id (GdkGLTextureBuilder* self /*none*/, guint id);
// void gdk_gl_texture_builder_set_id (::GdkGLTextureBuilder* self /*none*/, guint id);
GI_INLINE_DECL void set_id (guint id) noexcept;

// void gdk_gl_texture_builder_set_sync (GdkGLTextureBuilder* self /*none*/, gpointer sync);
// void gdk_gl_texture_builder_set_sync (::GdkGLTextureBuilder* self /*none*/, void* sync);
GI_INLINE_DECL void set_sync (void* sync) noexcept;

// void gdk_gl_texture_builder_set_update_region (GdkGLTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_gl_texture_builder_set_update_region (::GdkGLTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
GI_INLINE_DECL void set_update_region (cairo::Region_Ref region) noexcept;
GI_INLINE_DECL void set_update_region () noexcept;

// void gdk_gl_texture_builder_set_update_texture (GdkGLTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_gl_texture_builder_set_update_texture (::GdkGLTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
GI_INLINE_DECL void set_update_texture (Gdk::Texture texture) noexcept;
GI_INLINE_DECL void set_update_texture () noexcept;

// void gdk_gl_texture_builder_set_width (GdkGLTextureBuilder* self /*none*/, int width);
// void gdk_gl_texture_builder_set_width (::GdkGLTextureBuilder* self /*none*/, gint width);
GI_INLINE_DECL void set_width (gint width) noexcept;

gi::property_proxy<Gdk::GLContext, base::GLTextureBuilderBase> property_context()
{ return gi::property_proxy<Gdk::GLContext, base::GLTextureBuilderBase> (*this, "context"); }
const gi::property_proxy<Gdk::GLContext, base::GLTextureBuilderBase> property_context() const
{ return gi::property_proxy<Gdk::GLContext, base::GLTextureBuilderBase> (*this, "context"); }

gi::property_proxy<Gdk::MemoryFormat, base::GLTextureBuilderBase> property_format()
{ return gi::property_proxy<Gdk::MemoryFormat, base::GLTextureBuilderBase> (*this, "format"); }
const gi::property_proxy<Gdk::MemoryFormat, base::GLTextureBuilderBase> property_format() const
{ return gi::property_proxy<Gdk::MemoryFormat, base::GLTextureBuilderBase> (*this, "format"); }

gi::property_proxy<bool, base::GLTextureBuilderBase> property_has_mipmap()
{ return gi::property_proxy<bool, base::GLTextureBuilderBase> (*this, "has-mipmap"); }
const gi::property_proxy<bool, base::GLTextureBuilderBase> property_has_mipmap() const
{ return gi::property_proxy<bool, base::GLTextureBuilderBase> (*this, "has-mipmap"); }

gi::property_proxy<gint, base::GLTextureBuilderBase> property_height()
{ return gi::property_proxy<gint, base::GLTextureBuilderBase> (*this, "height"); }
const gi::property_proxy<gint, base::GLTextureBuilderBase> property_height() const
{ return gi::property_proxy<gint, base::GLTextureBuilderBase> (*this, "height"); }

gi::property_proxy<guint, base::GLTextureBuilderBase> property_id()
{ return gi::property_proxy<guint, base::GLTextureBuilderBase> (*this, "id"); }
const gi::property_proxy<guint, base::GLTextureBuilderBase> property_id() const
{ return gi::property_proxy<guint, base::GLTextureBuilderBase> (*this, "id"); }

gi::property_proxy<gpointer, base::GLTextureBuilderBase> property_sync()
{ return gi::property_proxy<gpointer, base::GLTextureBuilderBase> (*this, "sync"); }
const gi::property_proxy<gpointer, base::GLTextureBuilderBase> property_sync() const
{ return gi::property_proxy<gpointer, base::GLTextureBuilderBase> (*this, "sync"); }

gi::property_proxy<cairo::Region, base::GLTextureBuilderBase> property_update_region()
{ return gi::property_proxy<cairo::Region, base::GLTextureBuilderBase> (*this, "update-region"); }
const gi::property_proxy<cairo::Region, base::GLTextureBuilderBase> property_update_region() const
{ return gi::property_proxy<cairo::Region, base::GLTextureBuilderBase> (*this, "update-region"); }

gi::property_proxy<Gdk::Texture, base::GLTextureBuilderBase> property_update_texture()
{ return gi::property_proxy<Gdk::Texture, base::GLTextureBuilderBase> (*this, "update-texture"); }
const gi::property_proxy<Gdk::Texture, base::GLTextureBuilderBase> property_update_texture() const
{ return gi::property_proxy<Gdk::Texture, base::GLTextureBuilderBase> (*this, "update-texture"); }

gi::property_proxy<gint, base::GLTextureBuilderBase> property_width()
{ return gi::property_proxy<gint, base::GLTextureBuilderBase> (*this, "width"); }
const gi::property_proxy<gint, base::GLTextureBuilderBase> property_width() const
{ return gi::property_proxy<gint, base::GLTextureBuilderBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/gltexturebuilder_extra_def.hpp>)
#include <gdk/gltexturebuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/gltexturebuilder_extra.hpp>)
#include <gdk/gltexturebuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class GLTextureBuilder : public GI_GDK_GLTEXTUREBUILDER_BASE
{ typedef GI_GDK_GLTEXTUREBUILDER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkGLTextureBuilder>
{ typedef Gdk::GLTextureBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
