// AUTO-GENERATED

#ifndef _GI_GDK_MEMORYTEXTURE_HPP_
#define _GI_GDK_MEMORYTEXTURE_HPP_

#include "texture.hpp"

namespace gi {

namespace repository {

namespace Gdk {


class MemoryTexture;

namespace base {


#define GI_GDK_MEMORYTEXTURE_BASE base::MemoryTextureBase
class MemoryTextureBase : public Gdk::Texture
{
typedef Gdk::Texture super_type;
public:
typedef ::GdkMemoryTexture BaseObjectType;

MemoryTextureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_memory_texture_get_type(); } 

// GdkTexture* /*full*/ gdk_memory_texture_new (int width, int height, GdkMemoryFormat format, GBytes* bytes /*none*/, gsize stride);
// ::GdkMemoryTexture* /*full*/ gdk_memory_texture_new (gint width, gint height, ::GdkMemoryFormat format, ::GBytes* bytes /*none*/, gsize stride);
static GI_INLINE_DECL Gdk::MemoryTexture new_ (gint width, gint height, Gdk::MemoryFormat format, GLib::Bytes_Ref bytes, gsize stride) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/memorytexture_extra_def.hpp>)
#include <gdk/memorytexture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/memorytexture_extra.hpp>)
#include <gdk/memorytexture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class MemoryTexture : public GI_GDK_MEMORYTEXTURE_BASE
{ typedef GI_GDK_MEMORYTEXTURE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkMemoryTexture>
{ typedef Gdk::MemoryTexture type; }; 

} // namespace repository

} // namespace gi

#endif
