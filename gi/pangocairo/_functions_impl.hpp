// AUTO-GENERATED

#ifndef _GI_PANGOCAIRO__FUNCTIONS_IMPL_HPP_
#define _GI_PANGOCAIRO__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace PangoCairo {

// const cairo_font_options_t* /*none,nullable*/ pango_cairo_context_get_font_options (PangoContext* context /*none*/);
// const ::cairo_font_options_t* /*none,nullable*/ pango_cairo_context_get_font_options (::PangoContext* context /*none*/);
cairo::FontOptions_Ref context_get_font_options (Pango::Context context) noexcept
{
  typedef const ::cairo_font_options_t* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_get_font_options;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double pango_cairo_context_get_resolution (PangoContext* context /*none*/);
// gdouble pango_cairo_context_get_resolution (::PangoContext* context /*none*/);
gdouble context_get_resolution (Pango::Context context) noexcept
{
  typedef gdouble (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_get_resolution;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c));
  return _temp_ret;
}

// PangoCairoShapeRendererFunc /*none,nullable*/ pango_cairo_context_get_shape_renderer (PangoContext* context /*none*/, gpointer* data);
// PangoCairo::ShapeRendererFunc::cfunction_type /*none,nullable*/ pango_cairo_context_get_shape_renderer (::PangoContext* context /*none*/, void* data);
// IGNORE; not introspectable, function return callback parameter not supported

// void pango_cairo_context_set_font_options (PangoContext* context /*none*/, const cairo_font_options_t* options /*none,nullable*/);
// void pango_cairo_context_set_font_options (::PangoContext* context /*none*/, const ::cairo_font_options_t* options /*none,nullable*/);
void context_set_font_options (Pango::Context context, const cairo::FontOptions_Ref options) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_set_font_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (context_to_c), (const ::cairo_font_options_t*) (options_to_c));
}
void context_set_font_options (Pango::Context context) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_set_font_options;
  auto options_to_c = nullptr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (context_to_c), (const ::cairo_font_options_t*) (options_to_c));
}

// void pango_cairo_context_set_resolution (PangoContext* context /*none*/, double dpi);
// void pango_cairo_context_set_resolution (::PangoContext* context /*none*/, gdouble dpi);
void context_set_resolution (Pango::Context context, gdouble dpi) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, gdouble dpi);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_set_resolution;
  auto dpi_to_c = dpi;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (context_to_c), (gdouble) (dpi_to_c));
}

// void pango_cairo_context_set_shape_renderer (PangoContext* context /*none*/, PangoCairoShapeRendererFunc func /*none,nullable*/, gpointer data, GDestroyNotify dnotify /*none,nullable*/);
// void pango_cairo_context_set_shape_renderer (::PangoContext* context /*none*/, PangoCairo::ShapeRendererFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type dnotify /*none,nullable*/);
void context_set_shape_renderer (Pango::Context context, PangoCairo::ShapeRendererFunc func) noexcept
{
  typedef void (*call_wrap_t) (::PangoContext* context, PangoCairo::ShapeRendererFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_context_set_shape_renderer;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::PangoContext*) (context_to_c), (PangoCairo::ShapeRendererFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// PangoContext* /*full*/ pango_cairo_create_context (cairo_t* cr /*none*/);
// ::PangoContext* /*full*/ pango_cairo_create_context (::cairo_t* cr /*none*/);
Pango::Context create_context (cairo::Context_Ref cr) noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_create_context;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoLayout* /*full*/ pango_cairo_create_layout (cairo_t* cr /*none*/);
// ::PangoLayout* /*full*/ pango_cairo_create_layout (::cairo_t* cr /*none*/);
Pango::Layout create_layout (cairo::Context_Ref cr) noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_create_layout;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_cairo_error_underline_path (cairo_t* cr /*none*/, double x, double y, double width, double height);
// void pango_cairo_error_underline_path (::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void error_underline_path (cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_error_underline_path;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void pango_cairo_glyph_string_path (cairo_t* cr /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_cairo_glyph_string_path (::cairo_t* cr /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/);
void glyph_string_path (cairo::Context_Ref cr, Pango::Font font, Pango::GlyphString_Ref glyphs) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoFont* font, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_glyph_string_path;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoFont*) (font_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_cairo_layout_line_path (cairo_t* cr /*none*/, PangoLayoutLine* line /*none*/);
// void pango_cairo_layout_line_path (::cairo_t* cr /*none*/, ::PangoLayoutLine* line /*none*/);
void layout_line_path (cairo::Context_Ref cr, Pango::LayoutLine_Ref line) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_layout_line_path;
  auto line_to_c = gi::unwrap (line, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoLayoutLine*) (line_to_c));
}

// void pango_cairo_layout_path (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_layout_path (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
void layout_path (cairo::Context_Ref cr, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_layout_path;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoLayout*) (layout_to_c));
}

// void pango_cairo_show_error_underline (cairo_t* cr /*none*/, double x, double y, double width, double height);
// void pango_cairo_show_error_underline (::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void show_error_underline (cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_show_error_underline;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void pango_cairo_show_glyph_item (cairo_t* cr /*none*/, const char* text /*none*/, PangoGlyphItem* glyph_item /*none*/);
// void pango_cairo_show_glyph_item (::cairo_t* cr /*none*/, const char* text /*none*/, ::PangoGlyphItem* glyph_item /*none*/);
void show_glyph_item (cairo::Context_Ref cr, const gi::cstring_v text, Pango::GlyphItem_Ref glyph_item) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const char* text, ::PangoGlyphItem* glyph_item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_show_glyph_item;
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none);
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const char*) (text_to_c), (::PangoGlyphItem*) (glyph_item_to_c));
}

// void pango_cairo_show_glyph_string (cairo_t* cr /*none*/, PangoFont* font /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_cairo_show_glyph_string (::cairo_t* cr /*none*/, ::PangoFont* font /*none*/, ::PangoGlyphString* glyphs /*none*/);
void show_glyph_string (cairo::Context_Ref cr, Pango::Font font, Pango::GlyphString_Ref glyphs) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoFont* font, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_show_glyph_string;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto font_to_c = gi::unwrap (font, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoFont*) (font_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_cairo_show_layout (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_show_layout (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
void show_layout (cairo::Context_Ref cr, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_show_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoLayout*) (layout_to_c));
}

// void pango_cairo_show_layout_line (cairo_t* cr /*none*/, PangoLayoutLine* line /*none*/);
// void pango_cairo_show_layout_line (::cairo_t* cr /*none*/, ::PangoLayoutLine* line /*none*/);
void show_layout_line (cairo::Context_Ref cr, Pango::LayoutLine_Ref line) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_show_layout_line;
  auto line_to_c = gi::unwrap (line, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoLayoutLine*) (line_to_c));
}

// void pango_cairo_update_context (cairo_t* cr /*none*/, PangoContext* context /*none*/);
// void pango_cairo_update_context (::cairo_t* cr /*none*/, ::PangoContext* context /*none*/);
void update_context (cairo::Context_Ref cr, Pango::Context context) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_update_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoContext*) (context_to_c));
}

// void pango_cairo_update_layout (cairo_t* cr /*none*/, PangoLayout* layout /*none*/);
// void pango_cairo_update_layout (::cairo_t* cr /*none*/, ::PangoLayout* layout /*none*/);
void update_layout (cairo::Context_Ref cr, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_cairo_update_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::PangoLayout*) (layout_to_c));
}

} // namespace PangoCairo

} // namespace repository

} // namespace gi

#endif
