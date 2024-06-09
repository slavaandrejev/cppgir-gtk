// AUTO-GENERATED

#ifndef _GI_PANGO__FUNCTIONS_HPP_
#define _GI_PANGO__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace AttrTypeNS_ {

// const char* /*none,nullable*/ pango_attr_type_get_name (PangoAttrType type);
// const char* /*none,nullable*/ pango_attr_type_get_name (::PangoAttrType type);
GI_INLINE_DECL gi::cstring_v get_name (Pango::AttrType type) noexcept;

// PangoAttrType pango_attr_type_register (const char* name /*none*/);
// ::PangoAttrType pango_attr_type_register (const char* name /*none*/);
GI_INLINE_DECL Pango::AttrType register_ (const gi::cstring_v name) noexcept;

} // namespace AttrTypeNS_

namespace GravityNS_ {

// PangoGravity pango_gravity_get_for_matrix (const PangoMatrix* matrix /*none,nullable*/);
// ::PangoGravity pango_gravity_get_for_matrix (const ::PangoMatrix* matrix /*none,nullable*/);
GI_INLINE_DECL Pango::Gravity get_for_matrix (const Pango::Matrix_Ref matrix) noexcept;
GI_INLINE_DECL Pango::Gravity get_for_matrix () noexcept;

// PangoGravity pango_gravity_get_for_script (PangoScript script, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script (::PangoScript script, ::PangoGravity base_gravity, ::PangoGravityHint hint);
GI_INLINE_DECL Pango::Gravity get_for_script (Pango::Script script, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept;

// PangoGravity pango_gravity_get_for_script_and_width (PangoScript script, gboolean wide, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script_and_width (::PangoScript script, gboolean wide, ::PangoGravity base_gravity, ::PangoGravityHint hint);
GI_INLINE_DECL Pango::Gravity get_for_script_and_width (Pango::Script script, gboolean wide, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept;

// double pango_gravity_to_rotation (PangoGravity gravity);
// gdouble pango_gravity_to_rotation (::PangoGravity gravity);
GI_INLINE_DECL gdouble to_rotation (Pango::Gravity gravity) noexcept;

} // namespace GravityNS_

namespace LayoutDeserializeErrorNS_ {

// GQuark pango_layout_deserialize_error_quark ();
// ::GQuark pango_layout_deserialize_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace LayoutDeserializeErrorNS_

namespace ScriptNS_ {

// PangoScript pango_script_for_unichar (gunichar ch);
// ::PangoScript pango_script_for_unichar (gunichar ch);
// IGNORE; deprecated

// PangoLanguage* /*full,nullable*/ pango_script_get_sample_language (PangoScript script);
// ::PangoLanguage* /*full,nullable*/ pango_script_get_sample_language (::PangoScript script);
GI_INLINE_DECL Pango::Language get_sample_language (Pango::Script script) noexcept;

} // namespace ScriptNS_

// PangoAttribute* /*full*/ pango_attr_allow_breaks_new (gboolean allow_breaks);
// ::PangoAttribute* /*full*/ pango_attr_allow_breaks_new (gboolean allow_breaks);
GI_INLINE_DECL Pango::Attribute attr_allow_breaks_new (gboolean allow_breaks) noexcept;

// PangoAttribute* /*full*/ pango_attr_background_alpha_new (guint16 alpha);
// ::PangoAttribute* /*full*/ pango_attr_background_alpha_new (guint16 alpha);
GI_INLINE_DECL Pango::Attribute attr_background_alpha_new (guint16 alpha) noexcept;

// PangoAttribute* /*full*/ pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
GI_INLINE_DECL Pango::Attribute attr_background_new (guint16 red, guint16 green, guint16 blue) noexcept;

// PangoAttribute* /*full*/ pango_attr_baseline_shift_new (int shift);
// ::PangoAttribute* /*full*/ pango_attr_baseline_shift_new (gint shift);
GI_INLINE_DECL Pango::Attribute attr_baseline_shift_new (gint shift) noexcept;

// void pango_attr_break (const char* text /*none*/, int length, PangoAttrList* attr_list /*none*/, int offset, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_attr_break (const char* text /*none*/, gint length, ::PangoAttrList* attr_list /*none*/, gint offset, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// PangoAttribute* /*full*/ pango_attr_fallback_new (gboolean enable_fallback);
// ::PangoAttribute* /*full*/ pango_attr_fallback_new (gboolean enable_fallback);
GI_INLINE_DECL Pango::Attribute attr_fallback_new (gboolean enable_fallback) noexcept;

// PangoAttribute* /*full*/ pango_attr_family_new (const char* family /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_family_new (const char* family /*none*/);
GI_INLINE_DECL Pango::Attribute attr_family_new (const gi::cstring_v family) noexcept;

// PangoAttribute* /*full*/ pango_attr_font_scale_new (PangoFontScale scale);
// ::PangoAttribute* /*full*/ pango_attr_font_scale_new (::PangoFontScale scale);
GI_INLINE_DECL Pango::Attribute attr_font_scale_new (Pango::FontScale scale) noexcept;

// PangoAttribute* /*full*/ pango_attr_foreground_alpha_new (guint16 alpha);
// ::PangoAttribute* /*full*/ pango_attr_foreground_alpha_new (guint16 alpha);
GI_INLINE_DECL Pango::Attribute attr_foreground_alpha_new (guint16 alpha) noexcept;

// PangoAttribute* /*full*/ pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
GI_INLINE_DECL Pango::Attribute attr_foreground_new (guint16 red, guint16 green, guint16 blue) noexcept;

// PangoAttribute* /*full*/ pango_attr_gravity_hint_new (PangoGravityHint hint);
// ::PangoAttribute* /*full*/ pango_attr_gravity_hint_new (::PangoGravityHint hint);
GI_INLINE_DECL Pango::Attribute attr_gravity_hint_new (Pango::GravityHint hint) noexcept;

// PangoAttribute* /*full*/ pango_attr_gravity_new (PangoGravity gravity);
// ::PangoAttribute* /*full*/ pango_attr_gravity_new (::PangoGravity gravity);
GI_INLINE_DECL Pango::Attribute attr_gravity_new (Pango::Gravity gravity) noexcept;

// PangoAttribute* /*full*/ pango_attr_insert_hyphens_new (gboolean insert_hyphens);
// ::PangoAttribute* /*full*/ pango_attr_insert_hyphens_new (gboolean insert_hyphens);
GI_INLINE_DECL Pango::Attribute attr_insert_hyphens_new (gboolean insert_hyphens) noexcept;

// PangoAttribute* /*full*/ pango_attr_letter_spacing_new (int letter_spacing);
// ::PangoAttribute* /*full*/ pango_attr_letter_spacing_new (gint letter_spacing);
GI_INLINE_DECL Pango::Attribute attr_letter_spacing_new (gint letter_spacing) noexcept;

// PangoAttribute* /*full*/ pango_attr_line_height_new (double factor);
// ::PangoAttribute* /*full*/ pango_attr_line_height_new (gdouble factor);
GI_INLINE_DECL Pango::Attribute attr_line_height_new (gdouble factor) noexcept;

// PangoAttribute* /*full*/ pango_attr_line_height_new_absolute (int height);
// ::PangoAttribute* /*full*/ pango_attr_line_height_new_absolute (gint height);
GI_INLINE_DECL Pango::Attribute attr_line_height_new_absolute (gint height) noexcept;

// PangoAttribute* /*full*/ pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
GI_INLINE_DECL Pango::Attribute attr_overline_color_new (guint16 red, guint16 green, guint16 blue) noexcept;

// PangoAttribute* /*full*/ pango_attr_overline_new (PangoOverline overline);
// ::PangoAttribute* /*full*/ pango_attr_overline_new (::PangoOverline overline);
GI_INLINE_DECL Pango::Attribute attr_overline_new (Pango::Overline overline) noexcept;

// PangoAttribute* /*full*/ pango_attr_rise_new (int rise);
// ::PangoAttribute* /*full*/ pango_attr_rise_new (gint rise);
GI_INLINE_DECL Pango::Attribute attr_rise_new (gint rise) noexcept;

// PangoAttribute* /*full*/ pango_attr_scale_new (double scale_factor);
// ::PangoAttribute* /*full*/ pango_attr_scale_new (gdouble scale_factor);
GI_INLINE_DECL Pango::Attribute attr_scale_new (gdouble scale_factor) noexcept;

// PangoAttribute* /*full*/ pango_attr_sentence_new ();
// ::PangoAttribute* /*full*/ pango_attr_sentence_new ();
GI_INLINE_DECL Pango::Attribute attr_sentence_new () noexcept;

// PangoAttribute* /*full*/ pango_attr_show_new (PangoShowFlags flags);
// ::PangoAttribute* /*full*/ pango_attr_show_new (::PangoShowFlags flags);
GI_INLINE_DECL Pango::Attribute attr_show_new (Pango::ShowFlags flags) noexcept;

// PangoAttribute* /*full*/ pango_attr_stretch_new (PangoStretch stretch);
// ::PangoAttribute* /*full*/ pango_attr_stretch_new (::PangoStretch stretch);
GI_INLINE_DECL Pango::Attribute attr_stretch_new (Pango::Stretch stretch) noexcept;

// PangoAttribute* /*full*/ pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
GI_INLINE_DECL Pango::Attribute attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue) noexcept;

// PangoAttribute* /*full*/ pango_attr_strikethrough_new (gboolean strikethrough);
// ::PangoAttribute* /*full*/ pango_attr_strikethrough_new (gboolean strikethrough);
GI_INLINE_DECL Pango::Attribute attr_strikethrough_new (gboolean strikethrough) noexcept;

// PangoAttribute* /*full*/ pango_attr_style_new (PangoStyle style);
// ::PangoAttribute* /*full*/ pango_attr_style_new (::PangoStyle style);
GI_INLINE_DECL Pango::Attribute attr_style_new (Pango::Style style) noexcept;

// PangoAttribute* /*full*/ pango_attr_text_transform_new (PangoTextTransform transform);
// ::PangoAttribute* /*full*/ pango_attr_text_transform_new (::PangoTextTransform transform);
GI_INLINE_DECL Pango::Attribute attr_text_transform_new (Pango::TextTransform transform) noexcept;

// PangoAttribute* /*full*/ pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
GI_INLINE_DECL Pango::Attribute attr_underline_color_new (guint16 red, guint16 green, guint16 blue) noexcept;

// PangoAttribute* /*full*/ pango_attr_underline_new (PangoUnderline underline);
// ::PangoAttribute* /*full*/ pango_attr_underline_new (::PangoUnderline underline);
GI_INLINE_DECL Pango::Attribute attr_underline_new (Pango::Underline underline) noexcept;

// PangoAttribute* /*full*/ pango_attr_variant_new (PangoVariant variant);
// ::PangoAttribute* /*full*/ pango_attr_variant_new (::PangoVariant variant);
GI_INLINE_DECL Pango::Attribute attr_variant_new (Pango::Variant variant) noexcept;

// PangoAttribute* /*full*/ pango_attr_weight_new (PangoWeight weight);
// ::PangoAttribute* /*full*/ pango_attr_weight_new (::PangoWeight weight);
GI_INLINE_DECL Pango::Attribute attr_weight_new (Pango::Weight weight) noexcept;

// PangoAttribute* /*full*/ pango_attr_word_new ();
// ::PangoAttribute* /*full*/ pango_attr_word_new ();
GI_INLINE_DECL Pango::Attribute attr_word_new () noexcept;

// void pango_default_break (const char* text /*none*/, int length, PangoAnalysis* analysis /*none,nullable*/, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_default_break (const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none,nullable*/, ::PangoLogAttr* attrs /*none*/, gint attrs_len);
GI_INLINE_DECL void default_break (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint attrs_len) noexcept;
GI_INLINE_DECL void default_break (const gi::cstring_v text, gint length, Pango::LogAttr_Ref attrs, gint attrs_len) noexcept;

// void pango_extents_to_pixels (PangoRectangle* inclusive /*none,nullable*/, PangoRectangle* nearest /*none,nullable*/);
// void pango_extents_to_pixels (::PangoRectangle* inclusive /*none,nullable*/, ::PangoRectangle* nearest /*none,nullable*/);
GI_INLINE_DECL void extents_to_pixels (Pango::Rectangle_Ref inclusive, Pango::Rectangle_Ref nearest) noexcept;
GI_INLINE_DECL void extents_to_pixels () noexcept;

// PangoDirection pango_find_base_dir (const gchar* text /*none*/, gint length);
// ::PangoDirection pango_find_base_dir (const char* text /*none*/, gint length);
GI_INLINE_DECL Pango::Direction find_base_dir (const gi::cstring_v text, gint length) noexcept;

// void pango_find_paragraph_boundary (const char* text /*none*/, int length, int* paragraph_delimiter_index, int* next_paragraph_start);
// void pango_find_paragraph_boundary (const char* text /*none*/, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
GI_INLINE_DECL void find_paragraph_boundary (const gi::cstring_v text, gint length, gint & paragraph_delimiter_index, gint & next_paragraph_start) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> find_paragraph_boundary (const gi::cstring_v text, gint length) noexcept;

// void pango_get_log_attrs (const char* text /*none*/, int length, int level, PangoLanguage* language /*none*/, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_get_log_attrs (const char* text /*none*/, gint length, gint level, ::PangoLanguage* language /*none*/, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// gboolean pango_is_zero_width (gunichar ch);
// gboolean pango_is_zero_width (gunichar ch);
GI_INLINE_DECL bool is_zero_width (gunichar ch) noexcept;

// GList* /*full*/ pango_itemize (PangoContext* context /*none*/, const char* text /*none*/, int start_index, int length, PangoAttrList* attrs /*none*/, PangoAttrIterator* cached_iter /*none,nullable*/);
// ::GList* /*full*/ pango_itemize (::PangoContext* context /*none*/, const char* text /*none*/, gint start_index, gint length, ::PangoAttrList* attrs /*none*/, ::PangoAttrIterator* cached_iter /*none,nullable*/);
GI_INLINE_DECL gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize (Pango::Context context, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs, Pango::AttrIterator_Ref cached_iter) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize (Pango::Context context, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs) noexcept;

// GList* /*full*/ pango_itemize_with_base_dir (PangoContext* context /*none*/, PangoDirection base_dir, const char* text /*none*/, int start_index, int length, PangoAttrList* attrs /*none*/, PangoAttrIterator* cached_iter /*none,nullable*/);
// ::GList* /*full*/ pango_itemize_with_base_dir (::PangoContext* context /*none*/, ::PangoDirection base_dir, const char* text /*none*/, gint start_index, gint length, ::PangoAttrList* attrs /*none*/, ::PangoAttrIterator* cached_iter /*none,nullable*/);
GI_INLINE_DECL gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs, Pango::AttrIterator_Ref cached_iter) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs) noexcept;

// guint8* pango_log2vis_get_embedding_levels (const gchar* text /*none*/, int length, PangoDirection* pbase_dir);
// guint8 pango_log2vis_get_embedding_levels (const char* text /*none*/, gint length, ::PangoDirection pbase_dir);
// SKIP; inconsistent pbase_dir in pointer depth (1 vs 0), inconsistent  return pointer depth (1 vs 0)

// gboolean pango_markup_parser_finish (GMarkupParseContext* context /*none*/, PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
// gboolean pango_markup_parser_finish (::GMarkupParseContext* context /*none*/, ::PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
GI_INLINE_DECL bool markup_parser_finish (GLib::MarkupParseContext_Ref context, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char);
GI_INLINE_DECL bool markup_parser_finish (GLib::MarkupParseContext_Ref context, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> markup_parser_finish (GLib::MarkupParseContext_Ref context);
GI_INLINE_DECL std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> markup_parser_finish (GLib::MarkupParseContext_Ref context, GLib::Error * _error) noexcept;

// GMarkupParseContext* /*none*/ pango_markup_parser_new (gunichar accel_marker);
// ::GMarkupParseContext* /*none*/ pango_markup_parser_new (gunichar accel_marker);
GI_INLINE_DECL GLib::MarkupParseContext_Ref markup_parser_new (gunichar accel_marker) noexcept;

// gboolean pango_parse_markup (const char* markup_text /*none*/, int length, gunichar accel_marker, PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
// gboolean pango_parse_markup (const char* markup_text /*none*/, gint length, gunichar accel_marker, ::PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
GI_INLINE_DECL bool parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char);
GI_INLINE_DECL bool parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker);
GI_INLINE_DECL std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, GLib::Error * _error) noexcept;

// gboolean pango_parse_stretch (const char* str /*none*/, PangoStretch* stretch, gboolean warn);
// gboolean pango_parse_stretch (const char* str /*none*/, ::PangoStretch* stretch, gboolean warn);
GI_INLINE_DECL bool parse_stretch (const gi::cstring_v str, Pango::Stretch & stretch, gboolean warn) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::Stretch> parse_stretch (const gi::cstring_v str, gboolean warn) noexcept;

// gboolean pango_parse_style (const char* str /*none*/, PangoStyle* style, gboolean warn);
// gboolean pango_parse_style (const char* str /*none*/, ::PangoStyle* style, gboolean warn);
GI_INLINE_DECL bool parse_style (const gi::cstring_v str, Pango::Style & style, gboolean warn) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::Style> parse_style (const gi::cstring_v str, gboolean warn) noexcept;

// gboolean pango_parse_variant (const char* str /*none*/, PangoVariant* variant, gboolean warn);
// gboolean pango_parse_variant (const char* str /*none*/, ::PangoVariant* variant, gboolean warn);
GI_INLINE_DECL bool parse_variant (const gi::cstring_v str, Pango::Variant & variant, gboolean warn) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::Variant> parse_variant (const gi::cstring_v str, gboolean warn) noexcept;

// gboolean pango_parse_weight (const char* str /*none*/, PangoWeight* weight, gboolean warn);
// gboolean pango_parse_weight (const char* str /*none*/, ::PangoWeight* weight, gboolean warn);
GI_INLINE_DECL bool parse_weight (const gi::cstring_v str, Pango::Weight & weight, gboolean warn) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::Weight> parse_weight (const gi::cstring_v str, gboolean warn) noexcept;

// void pango_quantize_line_geometry (int* thickness, int* position);
// void pango_quantize_line_geometry (gint* thickness, gint* position);
GI_INLINE_DECL void quantize_line_geometry (gint & thickness, gint & position) noexcept;

// GList* /*full*/ pango_reorder_items (GList* items /*none*/);
// ::GList* /*full*/ pango_reorder_items (::GList* items /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> reorder_items (gi::CollectionParameter<GList, ::PangoItem*, gi::transfer_none_t> items) noexcept;

// void pango_shape (const char* text /*none*/, int length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_shape (const char* text /*none*/, gint length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/);
GI_INLINE_DECL void shape (const gi::cstring_v text, gint length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept;

// void pango_shape_full (const char* item_text /*none*/, int item_length, const char* paragraph_text /*none,nullable*/, int paragraph_length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_shape_full (const char* item_text /*none*/, gint item_length, const char* paragraph_text /*none,nullable*/, gint paragraph_length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/);
GI_INLINE_DECL void shape_full (const gi::cstring_v item_text, gint item_length, const gi::cstring_v paragraph_text, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept;
GI_INLINE_DECL void shape_full (const gi::cstring_v item_text, gint item_length, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept;

// void pango_shape_item (PangoItem* item /*none*/, const char* paragraph_text /*none,nullable*/, int paragraph_length, PangoLogAttr* log_attrs /*none,nullable*/, PangoGlyphString* glyphs /*none*/, PangoShapeFlags flags);
// void pango_shape_item (::PangoItem* item /*none*/, const char* paragraph_text /*none,nullable*/, gint paragraph_length, ::PangoLogAttr* log_attrs /*none,nullable*/, ::PangoGlyphString* glyphs /*none*/, ::PangoShapeFlags flags);
GI_INLINE_DECL void shape_item (Pango::Item_Ref item, const gi::cstring_v paragraph_text, gint paragraph_length, Pango::LogAttr_Ref log_attrs, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept;
GI_INLINE_DECL void shape_item (Pango::Item_Ref item, gint paragraph_length, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept;

// void pango_shape_with_flags (const char* item_text /*none*/, int item_length, const char* paragraph_text /*none,nullable*/, int paragraph_length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/, PangoShapeFlags flags);
// void pango_shape_with_flags (const char* item_text /*none*/, gint item_length, const char* paragraph_text /*none,nullable*/, gint paragraph_length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/, ::PangoShapeFlags flags);
GI_INLINE_DECL void shape_with_flags (const gi::cstring_v item_text, gint item_length, const gi::cstring_v paragraph_text, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept;
GI_INLINE_DECL void shape_with_flags (const gi::cstring_v item_text, gint item_length, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept;

// void pango_tailor_break (const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int offset, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_tailor_break (const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint offset, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// PangoDirection pango_unichar_direction (gunichar ch);
// ::PangoDirection pango_unichar_direction (gunichar ch);
GI_INLINE_DECL Pango::Direction unichar_direction (gunichar ch) noexcept;

// int pango_units_from_double (double d);
// gint pango_units_from_double (gdouble d);
GI_INLINE_DECL gint units_from_double (gdouble d) noexcept;

// double pango_units_to_double (int i);
// gdouble pango_units_to_double (gint i);
GI_INLINE_DECL gdouble units_to_double (gint i) noexcept;

// int pango_version ();
// gint pango_version ();
GI_INLINE_DECL gint version () noexcept;

// const char* /*none,nullable*/ pango_version_check (int required_major, int required_minor, int required_micro);
// const char* /*none,nullable*/ pango_version_check (gint required_major, gint required_minor, gint required_micro);
GI_INLINE_DECL gi::cstring_v version_check (gint required_major, gint required_minor, gint required_micro) noexcept;

// const char* /*none*/ pango_version_string ();
// const char* /*none*/ pango_version_string ();
GI_INLINE_DECL gi::cstring_v version_string () noexcept;

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
