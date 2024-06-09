// AUTO-GENERATED

#ifndef _GI_PANGO_RENDERER_HPP_
#define _GI_PANGO_RENDERER_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrShape;
class AttrShape_Ref;
class Color;
class Color_Ref;
class Font;
class GlyphItem;
class GlyphItem_Ref;
class GlyphString;
class GlyphString_Ref;
class Layout;
class LayoutLine;
class LayoutLine_Ref;
class Matrix;
class Matrix_Ref;

class Renderer;

namespace base {


#define GI_PANGO_RENDERER_BASE base::RendererBase
class RendererBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoRenderer BaseObjectType;

RendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_renderer_get_type(); } 

// void pango_renderer_activate (PangoRenderer* renderer /*none*/);
// void pango_renderer_activate (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL void activate () noexcept;

// void pango_renderer_deactivate (PangoRenderer* renderer /*none*/);
// void pango_renderer_deactivate (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL void deactivate () noexcept;

// void pango_renderer_draw_error_underline (PangoRenderer* renderer /*none*/, int x, int y, int width, int height);
// void pango_renderer_draw_error_underline (::PangoRenderer* renderer /*none*/, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_error_underline (gint x, gint y, gint width, gint height) noexcept;

// void pango_renderer_draw_glyph (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyph glyph, double x, double y);
// void pango_renderer_draw_glyph (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyph glyph, gdouble x, gdouble y);
GI_INLINE_DECL void draw_glyph (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept;

// void pango_renderer_draw_glyph_item (PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, PangoGlyphItem* glyph_item /*none*/, int x, int y);
// void pango_renderer_draw_glyph_item (::PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, ::PangoGlyphItem* glyph_item /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_glyph_item (const gi::cstring_v text, Pango::GlyphItem_Ref glyph_item, gint x, gint y) noexcept;
GI_INLINE_DECL void draw_glyph_item (Pango::GlyphItem_Ref glyph_item, gint x, gint y) noexcept;

// void pango_renderer_draw_glyphs (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/, int x, int y);
// void pango_renderer_draw_glyphs (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_glyphs (Pango::Font font, Pango::GlyphString_Ref glyphs, gint x, gint y) noexcept;

// void pango_renderer_draw_layout (PangoRenderer* renderer /*none*/, PangoLayout* layout /*none*/, int x, int y);
// void pango_renderer_draw_layout (::PangoRenderer* renderer /*none*/, ::PangoLayout* layout /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_layout (Pango::Layout layout, gint x, gint y) noexcept;

// void pango_renderer_draw_layout_line (PangoRenderer* renderer /*none*/, PangoLayoutLine* line /*none*/, int x, int y);
// void pango_renderer_draw_layout_line (::PangoRenderer* renderer /*none*/, ::PangoLayoutLine* line /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_layout_line (Pango::LayoutLine_Ref line, gint x, gint y) noexcept;

// void pango_renderer_draw_rectangle (PangoRenderer* renderer /*none*/, PangoRenderPart part, int x, int y, int width, int height);
// void pango_renderer_draw_rectangle (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_rectangle (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept;

// void pango_renderer_draw_trapezoid (PangoRenderer* renderer /*none*/, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void pango_renderer_draw_trapezoid (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
GI_INLINE_DECL void draw_trapezoid (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept;

// guint16 pango_renderer_get_alpha (PangoRenderer* renderer /*none*/, PangoRenderPart part);
// guint16 pango_renderer_get_alpha (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part);
GI_INLINE_DECL guint16 get_alpha (Pango::RenderPart part) noexcept;

// PangoColor* /*none,nullable*/ pango_renderer_get_color (PangoRenderer* renderer /*none*/, PangoRenderPart part);
// ::PangoColor* /*none,nullable*/ pango_renderer_get_color (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part);
GI_INLINE_DECL Pango::Color_Ref get_color (Pango::RenderPart part) noexcept;

// PangoLayout* /*none,nullable*/ pango_renderer_get_layout (PangoRenderer* renderer /*none*/);
// ::PangoLayout* /*none,nullable*/ pango_renderer_get_layout (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// PangoLayoutLine* /*none,nullable*/ pango_renderer_get_layout_line (PangoRenderer* renderer /*none*/);
// ::PangoLayoutLine* /*none,nullable*/ pango_renderer_get_layout_line (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL Pango::LayoutLine_Ref get_layout_line () noexcept;

// const PangoMatrix* /*none,nullable*/ pango_renderer_get_matrix (PangoRenderer* renderer /*none*/);
// const ::PangoMatrix* /*none,nullable*/ pango_renderer_get_matrix (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL Pango::Matrix_Ref get_matrix () noexcept;

// void pango_renderer_part_changed (PangoRenderer* renderer /*none*/, PangoRenderPart part);
// void pango_renderer_part_changed (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part);
GI_INLINE_DECL void part_changed (Pango::RenderPart part) noexcept;

// void pango_renderer_set_alpha (PangoRenderer* renderer /*none*/, PangoRenderPart part, guint16 alpha);
// void pango_renderer_set_alpha (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, guint16 alpha);
GI_INLINE_DECL void set_alpha (Pango::RenderPart part, guint16 alpha) noexcept;

// void pango_renderer_set_color (PangoRenderer* renderer /*none*/, PangoRenderPart part, const PangoColor* color /*none,nullable*/);
// void pango_renderer_set_color (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, const ::PangoColor* color /*none,nullable*/);
GI_INLINE_DECL void set_color (Pango::RenderPart part, const Pango::Color_Ref color) noexcept;
GI_INLINE_DECL void set_color (Pango::RenderPart part) noexcept;

// void pango_renderer_set_matrix (PangoRenderer* renderer /*none*/, const PangoMatrix* matrix /*none,nullable*/);
// void pango_renderer_set_matrix (::PangoRenderer* renderer /*none*/, const ::PangoMatrix* matrix /*none,nullable*/);
GI_INLINE_DECL void set_matrix (const Pango::Matrix_Ref matrix) noexcept;
GI_INLINE_DECL void set_matrix () noexcept;

// ::PangoMatrix* /*none*/ Renderer::matrix (const ::PangoRenderer* obj /*none*/);
// ::PangoMatrix* /*none*/ Renderer::matrix (const ::PangoRenderer* obj /*none*/);
GI_INLINE_DECL Pango::Matrix_Ref matrix_ () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/renderer_extra_def.hpp>)
#include <pango/renderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/renderer_extra.hpp>)
#include <pango/renderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Renderer : public GI_PANGO_RENDERER_BASE
{ typedef GI_PANGO_RENDERER_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoRenderer>
{ typedef Pango::Renderer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class RendererClassDef
{
typedef RendererClassDef self;
public:
typedef Pango::Renderer instance_type;
typedef ::PangoRendererClass class_type;

using GI_MEMBER_CHECK_CONFLICT(begin) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_error_underline) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_glyph) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_glyph_item) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_glyphs) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_rectangle) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_shape) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_trapezoid) = self;
using GI_MEMBER_CHECK_CONFLICT(end) = self;
using GI_MEMBER_CHECK_CONFLICT(part_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~RendererClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Renderer::begin (PangoRenderer* renderer /*none*/);
// void Renderer::begin (::PangoRenderer* renderer /*none*/);
virtual void begin_ () noexcept = 0;

// void Renderer::draw_error_underline (PangoRenderer* renderer /*none*/, int x, int y, int width, int height);
// void Renderer::draw_error_underline (::PangoRenderer* renderer /*none*/, gint x, gint y, gint width, gint height);
virtual void draw_error_underline_ (gint x, gint y, gint width, gint height) noexcept = 0;

// void Renderer::draw_glyph (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyph glyph, double x, double y);
// void Renderer::draw_glyph (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyph glyph, gdouble x, gdouble y);
virtual void draw_glyph_ (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept = 0;

// void Renderer::draw_glyph_item (PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, PangoGlyphItem* glyph_item /*none*/, int x, int y);
// void Renderer::draw_glyph_item (::PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, ::PangoGlyphItem* glyph_item /*none*/, gint x, gint y);
virtual void draw_glyph_item_ (const gi::cstring_v text, Pango::GlyphItem_Ref glyph_item, gint x, gint y) noexcept = 0;

// void Renderer::draw_glyphs (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/, int x, int y);
// void Renderer::draw_glyphs (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/, gint x, gint y);
virtual void draw_glyphs_ (Pango::Font font, Pango::GlyphString_Ref glyphs, gint x, gint y) noexcept = 0;

// void Renderer::draw_rectangle (PangoRenderer* renderer /*none*/, PangoRenderPart part, int x, int y, int width, int height);
// void Renderer::draw_rectangle (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
virtual void draw_rectangle_ (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept = 0;

// void Renderer::draw_shape (PangoRenderer* renderer /*none*/, PangoAttrShape* attr /*none*/, int x, int y);
// void Renderer::draw_shape (::PangoRenderer* renderer /*none*/, ::PangoAttrShape* attr /*none*/, gint x, gint y);
virtual void draw_shape_ (Pango::AttrShape_Ref attr, gint x, gint y) noexcept = 0;

// void Renderer::draw_trapezoid (PangoRenderer* renderer /*none*/, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void Renderer::draw_trapezoid (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
virtual void draw_trapezoid_ (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept = 0;

// void Renderer::end (PangoRenderer* renderer /*none*/);
// void Renderer::end (::PangoRenderer* renderer /*none*/);
virtual void end_ () noexcept = 0;

// void Renderer::part_changed (PangoRenderer* renderer /*none*/, PangoRenderPart part);
// void Renderer::part_changed (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part);
virtual void part_changed_ (Pango::RenderPart part) noexcept = 0;

// void Renderer::prepare_run (PangoRenderer* renderer /*none*/, PangoLayoutRun* run /*none*/);
// void Renderer::prepare_run (::PangoRenderer* renderer /*none*/,  run /*none*/);
// SKIP; run type  not supported


};

GI_CLASS_IMPL_BEGIN


class RendererClass: public detail::ClassTemplate<Pango::impl::internal::RendererClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::RendererClassDef;
typedef RendererClass self;
typedef detail::ClassTemplate<Pango::impl::internal::RendererClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Renderer::begin (PangoRenderer* renderer /*none*/);
// void Renderer::begin (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL void begin_ () noexcept override;

// void Renderer::draw_error_underline (PangoRenderer* renderer /*none*/, int x, int y, int width, int height);
// void Renderer::draw_error_underline (::PangoRenderer* renderer /*none*/, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_error_underline_ (gint x, gint y, gint width, gint height) noexcept override;

// void Renderer::draw_glyph (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyph glyph, double x, double y);
// void Renderer::draw_glyph (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyph glyph, gdouble x, gdouble y);
GI_INLINE_DECL void draw_glyph_ (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept override;

// void Renderer::draw_glyph_item (PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, PangoGlyphItem* glyph_item /*none*/, int x, int y);
// void Renderer::draw_glyph_item (::PangoRenderer* renderer /*none*/, const char* text /*none,nullable*/, ::PangoGlyphItem* glyph_item /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_glyph_item_ (const gi::cstring_v text, Pango::GlyphItem_Ref glyph_item, gint x, gint y) noexcept override;

// void Renderer::draw_glyphs (PangoRenderer* renderer /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/, int x, int y);
// void Renderer::draw_glyphs (::PangoRenderer* renderer /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_glyphs_ (Pango::Font font, Pango::GlyphString_Ref glyphs, gint x, gint y) noexcept override;

// void Renderer::draw_rectangle (PangoRenderer* renderer /*none*/, PangoRenderPart part, int x, int y, int width, int height);
// void Renderer::draw_rectangle (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_rectangle_ (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept override;

// void Renderer::draw_shape (PangoRenderer* renderer /*none*/, PangoAttrShape* attr /*none*/, int x, int y);
// void Renderer::draw_shape (::PangoRenderer* renderer /*none*/, ::PangoAttrShape* attr /*none*/, gint x, gint y);
GI_INLINE_DECL void draw_shape_ (Pango::AttrShape_Ref attr, gint x, gint y) noexcept override;

// void Renderer::draw_trapezoid (PangoRenderer* renderer /*none*/, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void Renderer::draw_trapezoid (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
GI_INLINE_DECL void draw_trapezoid_ (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept override;

// void Renderer::end (PangoRenderer* renderer /*none*/);
// void Renderer::end (::PangoRenderer* renderer /*none*/);
GI_INLINE_DECL void end_ () noexcept override;

// void Renderer::part_changed (PangoRenderer* renderer /*none*/, PangoRenderPart part);
// void Renderer::part_changed (::PangoRenderer* renderer /*none*/, ::PangoRenderPart part);
GI_INLINE_DECL void part_changed_ (Pango::RenderPart part) noexcept override;

// void Renderer::prepare_run (PangoRenderer* renderer /*none*/, PangoLayoutRun* run /*none*/);
// void Renderer::prepare_run (::PangoRenderer* renderer /*none*/,  run /*none*/);
// SKIP; run type  not supported


};


struct RendererClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(RendererClass, begin)
  GI_MEMBER_DEFINE(RendererClass, draw_error_underline)
  GI_MEMBER_DEFINE(RendererClass, draw_glyph)
  GI_MEMBER_DEFINE(RendererClass, draw_glyph_item)
  GI_MEMBER_DEFINE(RendererClass, draw_glyphs)
  GI_MEMBER_DEFINE(RendererClass, draw_rectangle)
  GI_MEMBER_DEFINE(RendererClass, draw_shape)
  GI_MEMBER_DEFINE(RendererClass, draw_trapezoid)
  GI_MEMBER_DEFINE(RendererClass, end)
  GI_MEMBER_DEFINE(RendererClass, part_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, begin),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_error_underline),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_glyph),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_glyph_item),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_glyphs),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_rectangle),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_shape),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_trapezoid),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, end),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, part_changed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using RendererImpl = detail::ObjectImpl<Renderer, internal::RendererClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
