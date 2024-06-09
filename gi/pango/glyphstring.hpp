// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHSTRING_HPP_
#define _GI_PANGO_GLYPHSTRING_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Analysis;
class Analysis_Ref;
class Font;
class GlyphString_Ref;
class LogAttr;
class LogAttr_Ref;
class Rectangle;
class Rectangle_Ref;

class GlyphString;

namespace base {


#define GI_PANGO_GLYPHSTRING_BASE base::GlyphStringBase
class GlyphStringBase : public gi::detail::GBoxedWrapperBase<GlyphStringBase, ::PangoGlyphString>
{
typedef gi::detail::GBoxedWrapperBase<GlyphStringBase, ::PangoGlyphString> super_type;
public:

GlyphStringBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_glyph_string_get_type(); } 

// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj /*none*/);
// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj /*none*/);
GI_INLINE_DECL gint num_glyphs_ () const noexcept;

//  GlyphString::num_glyphs (::PangoGlyphString* obj /*none*/, gint _value);
// void GlyphString::num_glyphs (::PangoGlyphString* obj /*none*/, gint _value);
GI_INLINE_DECL void num_glyphs_ (gint _value) noexcept;

// PangoGlyphString* /*full*/ pango_glyph_string_new ();
// ::PangoGlyphString* /*full*/ pango_glyph_string_new ();
static GI_INLINE_DECL Pango::GlyphString new_ () noexcept;

// PangoGlyphString* /*full,nullable*/ pango_glyph_string_copy (PangoGlyphString* string /*none,nullable*/);
// ::PangoGlyphString* /*full,nullable*/ pango_glyph_string_copy (::PangoGlyphString* string /*none,nullable*/);
GI_INLINE_DECL Pango::GlyphString copy () noexcept;

// void pango_glyph_string_extents (PangoGlyphString* glyphs /*none*/, PangoFont* font /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_glyph_string_extents (::PangoGlyphString* glyphs /*none*/, ::PangoFont* font /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void extents (Pango::Font font, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> extents (Pango::Font font) noexcept;

// void pango_glyph_string_extents_range (PangoGlyphString* glyphs /*none*/, int start, int end, PangoFont* font /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_glyph_string_extents_range (::PangoGlyphString* glyphs /*none*/, gint start, gint end, ::PangoFont* font /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void extents_range (gint start, gint end, Pango::Font font, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> extents_range (gint start, gint end, Pango::Font font) noexcept;

// void pango_glyph_string_free (PangoGlyphString* string /*none,nullable*/);
// void pango_glyph_string_free (::PangoGlyphString* string /*none,nullable*/);
// IGNORE; marked ignore

// void pango_glyph_string_get_logical_widths (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, int embedding_level,  logical_widths /*none*/);
// void pango_glyph_string_get_logical_widths (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, gint embedding_level, * logical_widths /*none*/);
// SKIP; inconsistent array info

// int pango_glyph_string_get_width (PangoGlyphString* glyphs /*none*/);
// gint pango_glyph_string_get_width (::PangoGlyphString* glyphs /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// void pango_glyph_string_index_to_x (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint index_, gboolean trailing, gint* x_pos);
GI_INLINE_DECL void index_to_x (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL gint index_to_x (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing) noexcept;

// void pango_glyph_string_index_to_x_full (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, PangoLogAttr* attrs /*none,nullable*/, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x_full (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, ::PangoLogAttr* attrs /*none,nullable*/, gint index_, gboolean trailing, gint* x_pos);
GI_INLINE_DECL void index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL void index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL gint index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint index_, gboolean trailing) noexcept;
GI_INLINE_DECL gint index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing) noexcept;

// void pango_glyph_string_set_size (PangoGlyphString* string /*none*/, int new_len);
// void pango_glyph_string_set_size (::PangoGlyphString* string /*none*/, gint new_len);
GI_INLINE_DECL void set_size (gint new_len) noexcept;

// void pango_glyph_string_x_to_index (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int x_pos, int* index_, int* trailing);
// void pango_glyph_string_x_to_index (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint x_pos, gint* index_, gint* trailing);
GI_INLINE_DECL void x_to_index (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint x_pos, gint & index_, gint & trailing) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> x_to_index (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint x_pos) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra_def.hpp>)
#include <pango/glyphstring_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra.hpp>)
#include <pango/glyphstring_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphString_Ref;

class GlyphString : public gi::detail::GBoxedWrapper<GlyphString, ::PangoGlyphString, GI_PANGO_GLYPHSTRING_BASE, GlyphString_Ref>
{ typedef gi::detail::GBoxedWrapper<GlyphString, ::PangoGlyphString, GI_PANGO_GLYPHSTRING_BASE, GlyphString_Ref> super_type; using super_type::super_type; };


class GlyphString_Ref : public gi::detail::GBoxedRefWrapper<GlyphString, ::PangoGlyphString, GI_PANGO_GLYPHSTRING_BASE>
{ typedef gi::detail::GBoxedRefWrapper<GlyphString, ::PangoGlyphString, GI_PANGO_GLYPHSTRING_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphString>
{ typedef Pango::GlyphString type; }; 

} // namespace repository

} // namespace gi

#endif
