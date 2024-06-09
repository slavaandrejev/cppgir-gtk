// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHITEM_IMPL_HPP_
#define _GI_PANGO_GLYPHITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoItem* _field_item_get (const ::PangoGlyphItem* obj) { return (::PangoItem*) obj->item; }
// ::PangoItem* /*none*/ GlyphItem::item (const ::PangoGlyphItem* obj /*none*/);
// ::PangoItem* /*none*/ GlyphItem::item (const ::PangoGlyphItem* obj /*none*/);
Pango::Item_Ref base::GlyphItemBase::item_ () const noexcept
{
  typedef ::PangoItem* (*call_wrap_t) (const ::PangoGlyphItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_item_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::PangoGlyphString* _field_glyphs_get (const ::PangoGlyphItem* obj) { return (::PangoGlyphString*) obj->glyphs; }
// ::PangoGlyphString* /*none*/ GlyphItem::glyphs (const ::PangoGlyphItem* obj /*none*/);
// ::PangoGlyphString* /*none*/ GlyphItem::glyphs (const ::PangoGlyphItem* obj /*none*/);
Pango::GlyphString_Ref base::GlyphItemBase::glyphs_ () const noexcept
{
  typedef ::PangoGlyphString* (*call_wrap_t) (const ::PangoGlyphItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyphs_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static gint _field_y_offset_get (const ::PangoGlyphItem* obj) { return (gint) obj->y_offset; }
// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj /*none*/);
gint base::GlyphItemBase::y_offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItem*) (gobj_()));
  return _temp_ret;
}

static void _field_y_offset_set (::PangoGlyphItem* obj, gint _value) { obj->y_offset = (decltype(obj->y_offset)) _value; }
//  GlyphItem::y_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::y_offset (::PangoGlyphItem* obj /*none*/, gint _value);
void base::GlyphItemBase::y_offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItem*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_start_x_offset_get (const ::PangoGlyphItem* obj) { return (gint) obj->start_x_offset; }
// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj /*none*/);
gint base::GlyphItemBase::start_x_offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_x_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItem*) (gobj_()));
  return _temp_ret;
}

static void _field_start_x_offset_set (::PangoGlyphItem* obj, gint _value) { obj->start_x_offset = (decltype(obj->start_x_offset)) _value; }
//  GlyphItem::start_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::start_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
void base::GlyphItemBase::start_x_offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_x_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItem*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_x_offset_get (const ::PangoGlyphItem* obj) { return (gint) obj->end_x_offset; }
// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj /*none*/);
// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj /*none*/);
gint base::GlyphItemBase::end_x_offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_x_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItem*) (gobj_()));
  return _temp_ret;
}

static void _field_end_x_offset_set (::PangoGlyphItem* obj, gint _value) { obj->end_x_offset = (decltype(obj->end_x_offset)) _value; }
//  GlyphItem::end_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
// void GlyphItem::end_x_offset (::PangoGlyphItem* obj /*none*/, gint _value);
void base::GlyphItemBase::end_x_offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_x_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItem*) (gobj_()), (gint) (_value_to_c));
}

// GSList* /*full*/ pango_glyph_item_apply_attrs (PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, PangoAttrList* list /*none*/);
// ::GSList* /*full*/ pango_glyph_item_apply_attrs (::PangoGlyphItem* glyph_item /*none*/, const char* text /*none*/, ::PangoAttrList* list /*none*/);
gi::Collection<GSList, ::PangoGlyphItem*, gi::transfer_full_t> base::GlyphItemBase::apply_attrs (const gi::cstring_v text, Pango::AttrList_Ref list) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoGlyphItem* glyph_item, const char* text, ::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_item_apply_attrs;
  auto list_to_c = gi::unwrap (list, gi::transfer_none);
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoGlyphItem*) (gobj_()), (const char*) (text_to_c), (::PangoAttrList*) (list_to_c));
  return gi::wrap_to<gi::Collection<GSList, ::PangoGlyphItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// PangoGlyphItem* /*full,nullable*/ pango_glyph_item_copy (PangoGlyphItem* orig /*none,nullable*/);
// ::PangoGlyphItem* /*full,nullable*/ pango_glyph_item_copy (::PangoGlyphItem* orig /*none,nullable*/);
Pango::GlyphItem base::GlyphItemBase::copy () noexcept
{
  typedef ::PangoGlyphItem* (*call_wrap_t) (::PangoGlyphItem* orig);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_item_copy;
  auto _temp_ret = call_wrap_v ((::PangoGlyphItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

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
Pango::GlyphItem base::GlyphItemBase::split (const gi::cstring_v text, gint split_index) noexcept
{
  typedef ::PangoGlyphItem* (*call_wrap_t) (::PangoGlyphItem* orig, const char* text, gint split_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_item_split;
  auto split_index_to_c = split_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoGlyphItem*) (gobj_()), (const char*) (text_to_c), (gint) (split_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra_def_impl.hpp>)
#include <pango/glyphitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra_impl.hpp>)
#include <pango/glyphitem_extra_impl.hpp>
#endif
#endif

#endif
