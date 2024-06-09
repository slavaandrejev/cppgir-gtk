// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO__FUNCTIONS_HPP_
#define _GI_PANGOCAIRO__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {

// const cairo_font_options_t* /*none,nullable*/ pango_cairo_context_get_font_options (PangoContext* context /*none*/);
// const ::cairo_font_options_t* /*none,nullable*/ pango_cairo_context_get_font_options (::PangoContext* context /*none*/);
GI_INLINE_DECL cairo::FontOptions_Ref context_get_font_options (Pango::Context context) noexcept;

// double pango_cairo_context_get_resolution (PangoContext* context /*none*/);
// gdouble pango_cairo_context_get_resolution (::PangoContext* context /*none*/);
GI_INLINE_DECL gdouble context_get_resolution (Pango::Context context) noexcept;

// PangoCairoShapeRendererFunc /*none,nullable*/ pango_cairo_context_get_shape_renderer (PangoContext* context /*none*/, gpointer* data);
// PangoCairo::ShapeRendererFunc::cfunction_type /*none,nullable*/ pango_cairo_context_get_shape_renderer (::PangoContext* context /*none*/, void* data);
// IGNORE; not introspectable, function return callback parameter not supported

// void pango_cairo_context_set_font_options (PangoContext* context /*none*/, const cairo_font_options_t* options /*none,nullable*/);
// void pango_cairo_context_set_font_options (::PangoContext* context /*none*/, const ::cairo_font_options_t* options /*none,nullable*/);
GI_INLINE_DECL void context_set_font_options (Pango::Context context, const cairo::FontOptions_Ref options) noexcept;
GI_INLINE_DECL void context_set_font_options (Pango::Context context) noexcept;

// void pango_cairo_context_set_resolution (PangoContext* context /*none*/, double dpi);
// void pango_cairo_context_set_resolution (::PangoContext* context /*none*/, gdouble dpi);
GI_INLINE_DECL void context_set_resolution (Pango::Context context, gdouble dpi) noexcept;

// void pango_cairo_context_set_shape_renderer (PangoContext* context /*none*/, PangoCairoShapeRendererFunc func /*none,nullable*/, gpointer data, GDestroyNotify dnotify /*none,nullable*/);
// void pango_cairo_context_set_shape_renderer (::PangoContext* context /*none*/, PangoCairo::ShapeRendererFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type dnotify /*none,nullable*/);
GI_INLINE_DECL void context_set_shape_renderer (Pango::Context context, PangoCairo::ShapeRendererFunc func) noexcept;

// PangoContext* /*full*/ pango_cairo_create_context (cairo_t* cr /*none*/);
// ::PangoContext* /*full*/ pango_cairo_create_context (::cairo_t* cr /*none*/);
GI_INLINE_DECL Pango::Context create_context (cairo::Context_Ref cr) noexcept;

// PangoLayout* /*full*/ pango_cairo_create_layout (cairo_t* cr /*none*/);
// ::PangoLayout* /*full*/ pango_cairo_create_layout (::cairo_t* cr /*none*/);
GI_INLINE_DECL Pango::Layout create_layout (cairo::Context_Ref cr) noexcept;

// void pango_cairo_error_underline_path (cairo_t* cr /*none*/, double x, double y, double width, double height);
// void pango_cairo_error_underline_path (::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void error_underline_path (cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void pango_cairo_glyph_string_path (cairo_t* cr /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_cairo_glyph_string_path (::cairo_t* cr /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/);
GI_INLINE_DECL void glyph_string_path (cairo::Context_Ref cr, Pango::Font font, Pango::GlyphString_Ref glyphs) noexcept;

// void pango_cairo_layout_line_path (cairo_t* cr /*none*/, PangoLayoutLine* line /*none*/);
// void pango_cairo_layout_line_path (::cairo_t* cr /*none*/, ::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL void layout_line_path (cairo::Context_Ref cr, Pango::LayoutLine_Ref line) noexcept;

// void pango_cairo_layout_path (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_layout_path (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void layout_path (cairo::Context_Ref cr, Pango::Layout layout) noexcept;

// void pango_cairo_show_error_underline (cairo_t* cr /*none*/, double x, double y, double width, double height);
// void pango_cairo_show_error_underline (::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void show_error_underline (cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void pango_cairo_show_glyph_item (cairo_t* cr /*none*/, const char* text /*none*/, PangoGlyphItem* glyph_item /*none*/);
// void pango_cairo_show_glyph_item (::cairo_t* cr /*none*/, const char* text /*none*/, ::PangoGlyphItem* glyph_item /*none*/);
GI_INLINE_DECL void show_glyph_item (cairo::Context_Ref cr, const gi::cstring_v text, Pango::GlyphItem_Ref glyph_item) noexcept;

// void pango_cairo_show_glyph_string (cairo_t* cr /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_cairo_show_glyph_string (::cairo_t* cr /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/);
GI_INLINE_DECL void show_glyph_string (cairo::Context_Ref cr, Pango::Font font, Pango::GlyphString_Ref glyphs) noexcept;

// void pango_cairo_show_layout (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_show_layout (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void show_layout (cairo::Context_Ref cr, Pango::Layout layout) noexcept;

// void pango_cairo_show_layout_line (cairo_t* cr /*none*/, PangoLayoutLine* line /*none*/);
// void pango_cairo_show_layout_line (::cairo_t* cr /*none*/, ::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL void show_layout_line (cairo::Context_Ref cr, Pango::LayoutLine_Ref line) noexcept;

// void pango_cairo_update_context (cairo_t* cr /*none*/, PangoContext* context /*none*/);
// void pango_cairo_update_context (::cairo_t* cr /*none*/, ::PangoContext* context /*none*/);
GI_INLINE_DECL void update_context (cairo::Context_Ref cr, Pango::Context context) noexcept;

// void pango_cairo_update_layout (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_update_layout (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void update_layout (cairo::Context_Ref cr, Pango::Layout layout) noexcept;

} // namespace PangoCairo

} // namespace repository

} // namespace gi

#endif
