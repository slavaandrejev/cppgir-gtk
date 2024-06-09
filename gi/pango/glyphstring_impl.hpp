// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHSTRING_IMPL_HPP_
#define _GI_PANGO_GLYPHSTRING_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static gint _field_num_glyphs_get (const ::PangoGlyphString* obj) { return (gint) obj->num_glyphs; }
// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj /*none*/);
// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj /*none*/);
gint base::GlyphStringBase::num_glyphs_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_glyphs_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphString*) (gobj_()));
  return _temp_ret;
}

static void _field_num_glyphs_set (::PangoGlyphString* obj, gint _value) { obj->num_glyphs = (decltype(obj->num_glyphs)) _value; }
//  GlyphString::num_glyphs (::PangoGlyphString* obj /*none*/, gint _value);
// void GlyphString::num_glyphs (::PangoGlyphString* obj /*none*/, gint _value);
void base::GlyphStringBase::num_glyphs_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_glyphs_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (gint) (_value_to_c));
}

// PangoGlyphString* /*full*/ pango_glyph_string_new ();
// ::PangoGlyphString* /*full*/ pango_glyph_string_new ();
Pango::GlyphString base::GlyphStringBase::new_ () noexcept
{
  typedef ::PangoGlyphString* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_string_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoGlyphString* /*full,nullable*/ pango_glyph_string_copy (PangoGlyphString* string /*none,nullable*/);
// ::PangoGlyphString* /*full,nullable*/ pango_glyph_string_copy (::PangoGlyphString* string /*none,nullable*/);
Pango::GlyphString base::GlyphStringBase::copy () noexcept
{
  typedef ::PangoGlyphString* (*call_wrap_t) (::PangoGlyphString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_copy;
  auto _temp_ret = call_wrap_v ((::PangoGlyphString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_glyph_string_extents (PangoGlyphString* glyphs /*none*/, PangoFont* font /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_glyph_string_extents (::PangoGlyphString* glyphs /*none*/, ::PangoFont* font /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::GlyphStringBase::extents (Pango::Font font, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::GlyphStringBase::extents (Pango::Font font) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_glyph_string_extents_range (PangoGlyphString* glyphs /*none*/, int start, int end, PangoFont* font /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_glyph_string_extents_range (::PangoGlyphString* glyphs /*none*/, gint start, gint end, ::PangoFont* font /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::GlyphStringBase::extents_range (gint start, gint end, Pango::Font font, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, gint start, gint end, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_extents_range;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  auto end_to_c = end;
  auto start_to_c = start;
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (gint) (start_to_c), (gint) (end_to_c), (::PangoFont*) (font_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::GlyphStringBase::extents_range (gint start, gint end, Pango::Font font) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, gint start, gint end, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_extents_range;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  auto end_to_c = end;
  auto start_to_c = start;
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (gint) (start_to_c), (gint) (end_to_c), (::PangoFont*) (font_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_glyph_string_free (PangoGlyphString* string /*none,nullable*/);
// void pango_glyph_string_free (::PangoGlyphString* string /*none,nullable*/);
// IGNORE; marked ignore

// void pango_glyph_string_get_logical_widths (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, int embedding_level,  logical_widths /*none*/);
// void pango_glyph_string_get_logical_widths (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, gint embedding_level, * logical_widths /*none*/);
// SKIP; inconsistent array info

// int pango_glyph_string_get_width (PangoGlyphString* glyphs /*none*/);
// gint pango_glyph_string_get_width (::PangoGlyphString* glyphs /*none*/);
gint base::GlyphStringBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_get_width;
  auto _temp_ret = call_wrap_v ((::PangoGlyphString*) (gobj_()));
  return _temp_ret;
}

// void pango_glyph_string_index_to_x (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint index_, gboolean trailing, gint* x_pos);
void base::GlyphStringBase::index_to_x (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing, gint & x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  x_pos = x_pos_o;
}
gint base::GlyphStringBase::index_to_x (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  return x_pos_o;
}

// void pango_glyph_string_index_to_x_full (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, PangoLogAttr* attrs /*none,nullable*/, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x_full (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, ::PangoLogAttr* attrs /*none,nullable*/, gint index_, gboolean trailing, gint* x_pos);
void base::GlyphStringBase::index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint index_, gboolean trailing, gint & x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x_full;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  x_pos = x_pos_o;
}
void base::GlyphStringBase::index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing, gint & x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x_full;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto attrs_to_c = nullptr;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  x_pos = x_pos_o;
}
gint base::GlyphStringBase::index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint index_, gboolean trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x_full;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  return x_pos_o;
}
gint base::GlyphStringBase::index_to_x_full (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint index_, gboolean trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_index_to_x_full;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  auto attrs_to_c = nullptr;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  return x_pos_o;
}

// void pango_glyph_string_set_size (PangoGlyphString* string /*none*/, int new_len);
// void pango_glyph_string_set_size (::PangoGlyphString* string /*none*/, gint new_len);
void base::GlyphStringBase::set_size (gint new_len) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* string, gint new_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_set_size;
  auto new_len_to_c = new_len;
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (gint) (new_len_to_c));
}

// void pango_glyph_string_x_to_index (PangoGlyphString* glyphs /*none*/, const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int x_pos, int* index_, int* trailing);
// void pango_glyph_string_x_to_index (::PangoGlyphString* glyphs /*none*/, const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint x_pos, gint* index_, gint* trailing);
void base::GlyphStringBase::x_to_index (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint x_pos, gint & index_, gint & trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint x_pos, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_x_to_index;
  gint trailing_o {};
  gint index__o {};
  auto x_pos_to_c = x_pos;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (gint) (x_pos_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  trailing = trailing_o;
  index_ = index__o;
}
std::tuple<gint, gint> base::GlyphStringBase::x_to_index (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, gint x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint x_pos, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_glyph_string_x_to_index;
  gint trailing_o {};
  gint index__o {};
  auto x_pos_to_c = x_pos;
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoGlyphString*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (gint) (x_pos_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  auto &&tmp_return_1 = index__o;
  auto &&tmp_return_2 = trailing_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra_def_impl.hpp>)
#include <pango/glyphstring_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra_impl.hpp>)
#include <pango/glyphstring_extra_impl.hpp>
#endif
#endif

#endif
