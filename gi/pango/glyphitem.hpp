// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHITEM_HPP_
#define _GI_PANGO_GLYPHITEM_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrList;
class AttrList_Ref;
class GlyphItem_Ref;
class GlyphString;
class GlyphString_Ref;
class Item;
class Item_Ref;

class GlyphItem;

namespace base {


#define GI_PANGO_GLYPHITEM_BASE base::GlyphItemBase
class GlyphItemBase : public gi::detail::GBoxedWrapperBase<GlyphItemBase, ::PangoGlyphItem>
{
typedef gi::detail::GBoxedWrapperBase<GlyphItemBase, ::PangoGlyphItem> super_type;
public:

GlyphItemBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_glyph_item_get_type(); } 

// ::PangoItem* /*none*/ GlyphItem::item (const ::PangoGlyphItem* obj /*none*/);
// ::PangoItem* /*none*/ GlyphItem::item (const ::PangoGlyphItem* obj /*none*/);
GI_INLINE_DECL Pango::Item_Ref item_ () const noexcept;

// ::PangoGlyphString* /*none*/ GlyphItem::glyphs (const ::PangoGlyphItem* obj /*none*/);
// ::PangoGlyphString* /*none*/ GlyphItem::glyphs (const ::PangoGlyphItem* obj /*none*/);
GI_INLINE_DECL Pango::GlyphString_Ref glyphs_ () const noexcept;

// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj /*none*/);
GI_INLINE_DECL gint y_offset_ () const noexcept;

//  GlyphItem::y_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::y_offset (::PangoGlyphItem* obj /*none*/, gint _value);
GI_INLINE_DECL void y_offset_ (gint _value) noexcept;

// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj /*none*/);
GI_INLINE_DECL gint start_x_offset_ () const noexcept;

//  GlyphItem::start_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::start_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
GI_INLINE_DECL void start_x_offset_ (gint _value) noexcept;

// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj /*none*/);
GI_INLINE_DECL gint end_x_offset_ () const noexcept;

//  GlyphItem::end_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::end_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
GI_INLINE_DECL void end_x_offset_ (gint _value) noexcept;

// GSList* /*full*/ pango_glyph_item_apply_attrs (PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, PangoAttrList* list /*none*/);
// ::GSList* /*full*/ pango_glyph_item_apply_attrs (::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, ::PangoAttrList* list /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::PangoGlyphItem*, gi::transfer_full_t> apply_attrs (const gi::cstring_v text, Pango::AttrList_Ref list) noexcept;

// PangoGlyphItem* /*full,nullable*/ pango_glyph_item_copy (PangoGlyphItem* orig /*none,nullable*/);
// ::PangoGlyphItem* /*full,nullable*/ pango_glyph_item_copy (::PangoGlyphItem* orig /*none,nullable*/);
GI_INLINE_DECL Pango::GlyphItem copy () noexcept;

// void pango_glyph_item_free (PangoGlyphItem* glyph_item /*none,nullable*/);
// void pango_glyph_item_free (::PangoGlyphItem* glyph_item /*none,nullable*/);
// IGNORE; marked ignore

// void pango_glyph_item_get_logical_widths (PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/,  logical_widths /*none*/);
// void pango_glyph_item_get_logical_widths (::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, * logical_widths /*none*/);
// SKIP; inconsistent array info

// void pango_glyph_item_letter_space (PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/,  log_attrs /*none*/, int letter_spacing);
// void pango_glyph_item_letter_space (::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, * log_attrs /*none*/, gint letter_spacing);
// SKIP; inconsistent array info

// PangoGlyphItem* /*full,nullable*/ pango_glyph_item_split (PangoGlyphItem* orig /*none*/, const char* text /*none*/, int split_index);
// ::PangoGlyphItem* /*full,nullable*/ pango_glyph_item_split (::PangoGlyphItem* orig /*none*/, const char* text /*none*/, gint split_index);
GI_INLINE_DECL Pango::GlyphItem split (const gi::cstring_v text, gint split_index) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra_def.hpp>)
#include <pango/glyphitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra.hpp>)
#include <pango/glyphitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphItem_Ref;

class GlyphItem : public gi::detail::GBoxedWrapper<GlyphItem, ::PangoGlyphItem, GI_PANGO_GLYPHITEM_BASE, GlyphItem_Ref>
{ typedef gi::detail::GBoxedWrapper<GlyphItem, ::PangoGlyphItem, GI_PANGO_GLYPHITEM_BASE, GlyphItem_Ref> super_type; using super_type::super_type; };


class GlyphItem_Ref : public gi::detail::GBoxedRefWrapper<GlyphItem, ::PangoGlyphItem, GI_PANGO_GLYPHITEM_BASE>
{ typedef gi::detail::GBoxedRefWrapper<GlyphItem, ::PangoGlyphItem, GI_PANGO_GLYPHITEM_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphItem>
{ typedef Pango::GlyphItem type; }; 

} // namespace repository

} // namespace gi

#endif
