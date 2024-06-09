// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHITEMITER_HPP_
#define _GI_PANGO_GLYPHITEMITER_HPP_


namespace gi {

namespace repository {

namespace Pango {

class GlyphItem;
class GlyphItemIter_Ref;
class GlyphItem_Ref;

class GlyphItemIter;

namespace base {


#define GI_PANGO_GLYPHITEMITER_BASE base::GlyphItemIterBase
class GlyphItemIterBase : public gi::detail::GBoxedWrapperBase<GlyphItemIterBase, ::PangoGlyphItemIter>
{
typedef gi::detail::GBoxedWrapperBase<GlyphItemIterBase, ::PangoGlyphItemIter> super_type;
public:

GlyphItemIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_glyph_item_iter_get_type(); } 

// ::PangoGlyphItem* /*none*/ GlyphItemIter::glyph_item (const ::PangoGlyphItemIter* obj /*none*/);
// ::PangoGlyphItem* /*none*/ GlyphItemIter::glyph_item (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL Pango::GlyphItem_Ref glyph_item_ () const noexcept;

// const char* /*none*/ GlyphItemIter::text (const ::PangoGlyphItemIter* obj /*none*/);
// const char* /*none*/ GlyphItemIter::text (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gi::cstring_v text_ () const noexcept;

// gint GlyphItemIter::start_glyph (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::start_glyph (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint start_glyph_ () const noexcept;

//  GlyphItemIter::start_glyph (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::start_glyph (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void start_glyph_ (gint _value) noexcept;

// gint GlyphItemIter::start_index (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::start_index (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint start_index_ () const noexcept;

//  GlyphItemIter::start_index (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::start_index (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void start_index_ (gint _value) noexcept;

// gint GlyphItemIter::start_char (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::start_char (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint start_char_ () const noexcept;

//  GlyphItemIter::start_char (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::start_char (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void start_char_ (gint _value) noexcept;

// gint GlyphItemIter::end_glyph (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::end_glyph (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint end_glyph_ () const noexcept;

//  GlyphItemIter::end_glyph (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::end_glyph (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void end_glyph_ (gint _value) noexcept;

// gint GlyphItemIter::end_index (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::end_index (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint end_index_ () const noexcept;

//  GlyphItemIter::end_index (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::end_index (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void end_index_ (gint _value) noexcept;

// gint GlyphItemIter::end_char (const ::PangoGlyphItemIter* obj /*none*/);
// gint GlyphItemIter::end_char (const ::PangoGlyphItemIter* obj /*none*/);
GI_INLINE_DECL gint end_char_ () const noexcept;

//  GlyphItemIter::end_char (::PangoGlyphItemIter* obj /*none*/, gint _value);
// void GlyphItemIter::end_char (::PangoGlyphItemIter* obj /*none*/, gint _value);
GI_INLINE_DECL void end_char_ (gint _value) noexcept;

// PangoGlyphItemIter* /*full,nullable*/ pango_glyph_item_iter_copy (PangoGlyphItemIter* orig /*none,nullable*/);
// ::PangoGlyphItemIter* /*full,nullable*/ pango_glyph_item_iter_copy (::PangoGlyphItemIter* orig /*none,nullable*/);
GI_INLINE_DECL Pango::GlyphItemIter copy () noexcept;

// void pango_glyph_item_iter_free (PangoGlyphItemIter* iter /*none,nullable*/);
// void pango_glyph_item_iter_free (::PangoGlyphItemIter* iter /*none,nullable*/);
// IGNORE; marked ignore

// gboolean pango_glyph_item_iter_init_end (PangoGlyphItemIter* iter /*none*/, PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/);
// gboolean pango_glyph_item_iter_init_end (::PangoGlyphItemIter* iter /*none*/, ::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/);
GI_INLINE_DECL bool init_end (Pango::GlyphItem_Ref glyph_item, const gi::cstring_v text) noexcept;

// gboolean pango_glyph_item_iter_init_start (PangoGlyphItemIter* iter /*none*/, PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/);
// gboolean pango_glyph_item_iter_init_start (::PangoGlyphItemIter* iter /*none*/, ::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/);
GI_INLINE_DECL bool init_start (Pango::GlyphItem_Ref glyph_item, const gi::cstring_v text) noexcept;

// gboolean pango_glyph_item_iter_next_cluster (PangoGlyphItemIter* iter /*none*/);
// gboolean pango_glyph_item_iter_next_cluster (::PangoGlyphItemIter* iter /*none*/);
GI_INLINE_DECL bool next_cluster () noexcept;

// gboolean pango_glyph_item_iter_prev_cluster (PangoGlyphItemIter* iter /*none*/);
// gboolean pango_glyph_item_iter_prev_cluster (::PangoGlyphItemIter* iter /*none*/);
GI_INLINE_DECL bool prev_cluster () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphitemiter_extra_def.hpp>)
#include <pango/glyphitemiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphitemiter_extra.hpp>)
#include <pango/glyphitemiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphItemIter_Ref;

class GlyphItemIter : public gi::detail::GBoxedWrapper<GlyphItemIter, ::PangoGlyphItemIter, GI_PANGO_GLYPHITEMITER_BASE, GlyphItemIter_Ref>
{ typedef gi::detail::GBoxedWrapper<GlyphItemIter, ::PangoGlyphItemIter, GI_PANGO_GLYPHITEMITER_BASE, GlyphItemIter_Ref> super_type; using super_type::super_type; };


class GlyphItemIter_Ref : public gi::detail::GBoxedRefWrapper<GlyphItemIter, ::PangoGlyphItemIter, GI_PANGO_GLYPHITEMITER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<GlyphItemIter, ::PangoGlyphItemIter, GI_PANGO_GLYPHITEMITER_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphItemIter>
{ typedef Pango::GlyphItemIter type; }; 

} // namespace repository

} // namespace gi

#endif
