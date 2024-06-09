// AUTO-GENERATED

#ifndef _GI_PANGO__FUNCTIONS_IMPL_HPP_
#define _GI_PANGO__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace AttrTypeNS_ {

// const char* /*none,nullable*/ pango_attr_type_get_name (PangoAttrType type);
// const char* /*none,nullable*/ pango_attr_type_get_name (::PangoAttrType type);
gi::cstring_v get_name (Pango::AttrType type) noexcept
{
  typedef const char* (*call_wrap_t) (::PangoAttrType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::PangoAttrType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrType pango_attr_type_register (const char* name /*none*/);
// ::PangoAttrType pango_attr_type_register (const char* name /*none*/);
Pango::AttrType register_ (const gi::cstring_v name) noexcept
{
  typedef ::PangoAttrType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_type_register;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace AttrTypeNS_

namespace GravityNS_ {

// PangoGravity pango_gravity_get_for_matrix (const PangoMatrix* matrix /*none,nullable*/);
// ::PangoGravity pango_gravity_get_for_matrix (const ::PangoMatrix* matrix /*none,nullable*/);
Pango::Gravity get_for_matrix (const Pango::Matrix_Ref matrix) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_gravity_get_for_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoMatrix*) (matrix_to_c));
  return gi::wrap (_temp_ret);
}
Pango::Gravity get_for_matrix () noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_gravity_get_for_matrix;
  auto matrix_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::PangoMatrix*) (matrix_to_c));
  return gi::wrap (_temp_ret);
}

// PangoGravity pango_gravity_get_for_script (PangoScript script, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script (::PangoScript script, ::PangoGravity base_gravity, ::PangoGravityHint hint);
Pango::Gravity get_for_script (Pango::Script script, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoScript script, ::PangoGravity base_gravity, ::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_gravity_get_for_script;
  auto hint_to_c = gi::unwrap (hint);
  auto base_gravity_to_c = gi::unwrap (base_gravity);
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c), (::PangoGravity) (base_gravity_to_c), (::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret);
}

// PangoGravity pango_gravity_get_for_script_and_width (PangoScript script, gboolean wide, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script_and_width (::PangoScript script, gboolean wide, ::PangoGravity base_gravity, ::PangoGravityHint hint);
Pango::Gravity get_for_script_and_width (Pango::Script script, gboolean wide, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoScript script, gboolean wide, ::PangoGravity base_gravity, ::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_gravity_get_for_script_and_width;
  auto hint_to_c = gi::unwrap (hint);
  auto base_gravity_to_c = gi::unwrap (base_gravity);
  auto wide_to_c = wide;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c), (gboolean) (wide_to_c), (::PangoGravity) (base_gravity_to_c), (::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret);
}

// double pango_gravity_to_rotation (PangoGravity gravity);
// gdouble pango_gravity_to_rotation (::PangoGravity gravity);
gdouble to_rotation (Pango::Gravity gravity) noexcept
{
  typedef gdouble (*call_wrap_t) (::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_gravity_to_rotation;
  auto gravity_to_c = gi::unwrap (gravity);
  auto _temp_ret = call_wrap_v ((::PangoGravity) (gravity_to_c));
  return _temp_ret;
}

} // namespace GravityNS_

namespace LayoutDeserializeErrorNS_ {

// GQuark pango_layout_deserialize_error_quark ();
// ::GQuark pango_layout_deserialize_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_deserialize_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace LayoutDeserializeErrorNS_

namespace ScriptNS_ {

// PangoScript pango_script_for_unichar (gunichar ch);
// ::PangoScript pango_script_for_unichar (gunichar ch);
// IGNORE; deprecated

// PangoLanguage* /*full,nullable*/ pango_script_get_sample_language (PangoScript script);
// ::PangoLanguage* /*full,nullable*/ pango_script_get_sample_language (::PangoScript script);
Pango::Language get_sample_language (Pango::Script script) noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (::PangoScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_script_get_sample_language;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace ScriptNS_

// PangoAttribute* /*full*/ pango_attr_allow_breaks_new (gboolean allow_breaks);
// ::PangoAttribute* /*full*/ pango_attr_allow_breaks_new (gboolean allow_breaks);
Pango::Attribute attr_allow_breaks_new (gboolean allow_breaks) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean allow_breaks);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_allow_breaks_new;
  auto allow_breaks_to_c = allow_breaks;
  auto _temp_ret = call_wrap_v ((gboolean) (allow_breaks_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_background_alpha_new (guint16 alpha);
// ::PangoAttribute* /*full*/ pango_attr_background_alpha_new (guint16 alpha);
Pango::Attribute attr_background_alpha_new (guint16 alpha) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_background_alpha_new;
  auto alpha_to_c = alpha;
  auto _temp_ret = call_wrap_v ((guint16) (alpha_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_background_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_background_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_baseline_shift_new (int shift);
// ::PangoAttribute* /*full*/ pango_attr_baseline_shift_new (gint shift);
Pango::Attribute attr_baseline_shift_new (gint shift) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint shift);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_baseline_shift_new;
  auto shift_to_c = shift;
  auto _temp_ret = call_wrap_v ((gint) (shift_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_attr_break (const char* text /*none*/, int length, PangoAttrList* attr_list /*none*/, int offset, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_attr_break (const char* text /*none*/, gint length, ::PangoAttrList* attr_list /*none*/, gint offset, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// PangoAttribute* /*full*/ pango_attr_fallback_new (gboolean enable_fallback);
// ::PangoAttribute* /*full*/ pango_attr_fallback_new (gboolean enable_fallback);
Pango::Attribute attr_fallback_new (gboolean enable_fallback) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean enable_fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_fallback_new;
  auto enable_fallback_to_c = enable_fallback;
  auto _temp_ret = call_wrap_v ((gboolean) (enable_fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_family_new (const char* family /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_family_new (const char* family /*none*/);
Pango::Attribute attr_family_new (const gi::cstring_v family) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_family_new;
  auto family_to_c = gi::unwrap (family, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (family_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_font_scale_new (PangoFontScale scale);
// ::PangoAttribute* /*full*/ pango_attr_font_scale_new (::PangoFontScale scale);
Pango::Attribute attr_font_scale_new (Pango::FontScale scale) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoFontScale scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_font_scale_new;
  auto scale_to_c = gi::unwrap (scale);
  auto _temp_ret = call_wrap_v ((::PangoFontScale) (scale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_foreground_alpha_new (guint16 alpha);
// ::PangoAttribute* /*full*/ pango_attr_foreground_alpha_new (guint16 alpha);
Pango::Attribute attr_foreground_alpha_new (guint16 alpha) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_foreground_alpha_new;
  auto alpha_to_c = alpha;
  auto _temp_ret = call_wrap_v ((guint16) (alpha_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_foreground_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_foreground_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_gravity_hint_new (PangoGravityHint hint);
// ::PangoAttribute* /*full*/ pango_attr_gravity_hint_new (::PangoGravityHint hint);
Pango::Attribute attr_gravity_hint_new (Pango::GravityHint hint) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_gravity_hint_new;
  auto hint_to_c = gi::unwrap (hint);
  auto _temp_ret = call_wrap_v ((::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_gravity_new (PangoGravity gravity);
// ::PangoAttribute* /*full*/ pango_attr_gravity_new (::PangoGravity gravity);
Pango::Attribute attr_gravity_new (Pango::Gravity gravity) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_gravity_new;
  auto gravity_to_c = gi::unwrap (gravity);
  auto _temp_ret = call_wrap_v ((::PangoGravity) (gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_insert_hyphens_new (gboolean insert_hyphens);
// ::PangoAttribute* /*full*/ pango_attr_insert_hyphens_new (gboolean insert_hyphens);
Pango::Attribute attr_insert_hyphens_new (gboolean insert_hyphens) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean insert_hyphens);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_insert_hyphens_new;
  auto insert_hyphens_to_c = insert_hyphens;
  auto _temp_ret = call_wrap_v ((gboolean) (insert_hyphens_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_letter_spacing_new (int letter_spacing);
// ::PangoAttribute* /*full*/ pango_attr_letter_spacing_new (gint letter_spacing);
Pango::Attribute attr_letter_spacing_new (gint letter_spacing) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint letter_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_letter_spacing_new;
  auto letter_spacing_to_c = letter_spacing;
  auto _temp_ret = call_wrap_v ((gint) (letter_spacing_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_line_height_new (double factor);
// ::PangoAttribute* /*full*/ pango_attr_line_height_new (gdouble factor);
Pango::Attribute attr_line_height_new (gdouble factor) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gdouble factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_line_height_new;
  auto factor_to_c = factor;
  auto _temp_ret = call_wrap_v ((gdouble) (factor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_line_height_new_absolute (int height);
// ::PangoAttribute* /*full*/ pango_attr_line_height_new_absolute (gint height);
Pango::Attribute attr_line_height_new_absolute (gint height) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_line_height_new_absolute;
  auto height_to_c = height;
  auto _temp_ret = call_wrap_v ((gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_overline_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_overline_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_overline_new (PangoOverline overline);
// ::PangoAttribute* /*full*/ pango_attr_overline_new (::PangoOverline overline);
Pango::Attribute attr_overline_new (Pango::Overline overline) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoOverline overline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_overline_new;
  auto overline_to_c = gi::unwrap (overline);
  auto _temp_ret = call_wrap_v ((::PangoOverline) (overline_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_rise_new (int rise);
// ::PangoAttribute* /*full*/ pango_attr_rise_new (gint rise);
Pango::Attribute attr_rise_new (gint rise) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint rise);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_rise_new;
  auto rise_to_c = rise;
  auto _temp_ret = call_wrap_v ((gint) (rise_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_scale_new (double scale_factor);
// ::PangoAttribute* /*full*/ pango_attr_scale_new (gdouble scale_factor);
Pango::Attribute attr_scale_new (gdouble scale_factor) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gdouble scale_factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_scale_new;
  auto scale_factor_to_c = scale_factor;
  auto _temp_ret = call_wrap_v ((gdouble) (scale_factor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_sentence_new ();
// ::PangoAttribute* /*full*/ pango_attr_sentence_new ();
Pango::Attribute attr_sentence_new () noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_sentence_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_show_new (PangoShowFlags flags);
// ::PangoAttribute* /*full*/ pango_attr_show_new (::PangoShowFlags flags);
Pango::Attribute attr_show_new (Pango::ShowFlags flags) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoShowFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_show_new;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::PangoShowFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_stretch_new (PangoStretch stretch);
// ::PangoAttribute* /*full*/ pango_attr_stretch_new (::PangoStretch stretch);
Pango::Attribute attr_stretch_new (Pango::Stretch stretch) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoStretch stretch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_stretch_new;
  auto stretch_to_c = gi::unwrap (stretch);
  auto _temp_ret = call_wrap_v ((::PangoStretch) (stretch_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_strikethrough_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_strikethrough_new (gboolean strikethrough);
// ::PangoAttribute* /*full*/ pango_attr_strikethrough_new (gboolean strikethrough);
Pango::Attribute attr_strikethrough_new (gboolean strikethrough) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean strikethrough);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_strikethrough_new;
  auto strikethrough_to_c = strikethrough;
  auto _temp_ret = call_wrap_v ((gboolean) (strikethrough_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_style_new (PangoStyle style);
// ::PangoAttribute* /*full*/ pango_attr_style_new (::PangoStyle style);
Pango::Attribute attr_style_new (Pango::Style style) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_style_new;
  auto style_to_c = gi::unwrap (style);
  auto _temp_ret = call_wrap_v ((::PangoStyle) (style_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_text_transform_new (PangoTextTransform transform);
// ::PangoAttribute* /*full*/ pango_attr_text_transform_new (::PangoTextTransform transform);
Pango::Attribute attr_text_transform_new (Pango::TextTransform transform) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoTextTransform transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_text_transform_new;
  auto transform_to_c = gi::unwrap (transform);
  auto _temp_ret = call_wrap_v ((::PangoTextTransform) (transform_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* /*full*/ pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_underline_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_underline_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_underline_new (PangoUnderline underline);
// ::PangoAttribute* /*full*/ pango_attr_underline_new (::PangoUnderline underline);
Pango::Attribute attr_underline_new (Pango::Underline underline) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoUnderline underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_underline_new;
  auto underline_to_c = gi::unwrap (underline);
  auto _temp_ret = call_wrap_v ((::PangoUnderline) (underline_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_variant_new (PangoVariant variant);
// ::PangoAttribute* /*full*/ pango_attr_variant_new (::PangoVariant variant);
Pango::Attribute attr_variant_new (Pango::Variant variant) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoVariant variant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_variant_new;
  auto variant_to_c = gi::unwrap (variant);
  auto _temp_ret = call_wrap_v ((::PangoVariant) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_weight_new (PangoWeight weight);
// ::PangoAttribute* /*full*/ pango_attr_weight_new (::PangoWeight weight);
Pango::Attribute attr_weight_new (Pango::Weight weight) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoWeight weight);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_weight_new;
  auto weight_to_c = gi::unwrap (weight);
  auto _temp_ret = call_wrap_v ((::PangoWeight) (weight_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAttribute* /*full*/ pango_attr_word_new ();
// ::PangoAttribute* /*full*/ pango_attr_word_new ();
Pango::Attribute attr_word_new () noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_word_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_default_break (const char* text /*none*/, int length, PangoAnalysis* analysis /*none,nullable*/, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_default_break (const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none,nullable*/, ::PangoLogAttr* attrs /*none*/, gint attrs_len);
void default_break (const gi::cstring_v text, gint length, Pango::Analysis_Ref analysis, Pango::LogAttr_Ref attrs, gint attrs_len) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint attrs_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_default_break;
  auto attrs_len_to_c = attrs_len;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (attrs_len_to_c));
}
void default_break (const gi::cstring_v text, gint length, Pango::LogAttr_Ref attrs, gint attrs_len) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint attrs_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_default_break;
  auto attrs_len_to_c = attrs_len;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto analysis_to_c = nullptr;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (attrs_len_to_c));
}

// void pango_extents_to_pixels (PangoRectangle* inclusive /*none,nullable*/, PangoRectangle* nearest /*none,nullable*/);
// void pango_extents_to_pixels (::PangoRectangle* inclusive /*none,nullable*/, ::PangoRectangle* nearest /*none,nullable*/);
void extents_to_pixels (Pango::Rectangle_Ref inclusive, Pango::Rectangle_Ref nearest) noexcept
{
  typedef void (*call_wrap_t) (::PangoRectangle* inclusive, ::PangoRectangle* nearest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_extents_to_pixels;
  auto nearest_to_c = gi::unwrap (nearest, gi::transfer_none);
  auto inclusive_to_c = gi::unwrap (inclusive, gi::transfer_none);
  call_wrap_v ((::PangoRectangle*) (inclusive_to_c), (::PangoRectangle*) (nearest_to_c));
}
void extents_to_pixels () noexcept
{
  typedef void (*call_wrap_t) (::PangoRectangle* inclusive, ::PangoRectangle* nearest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_extents_to_pixels;
  auto nearest_to_c = nullptr;
  auto inclusive_to_c = nullptr;
  call_wrap_v ((::PangoRectangle*) (inclusive_to_c), (::PangoRectangle*) (nearest_to_c));
}

// PangoDirection pango_find_base_dir (const gchar* text /*none*/, gint length);
// ::PangoDirection pango_find_base_dir (const char* text /*none*/, gint length);
Pango::Direction find_base_dir (const gi::cstring_v text, gint length) noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (const char* text, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_find_base_dir;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret);
}

// void pango_find_paragraph_boundary (const char* text /*none*/, int length, int* paragraph_delimiter_index, int* next_paragraph_start);
// void pango_find_paragraph_boundary (const char* text /*none*/, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
void find_paragraph_boundary (const gi::cstring_v text, gint length, gint & paragraph_delimiter_index, gint & next_paragraph_start) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_find_paragraph_boundary;
  gint next_paragraph_start_o {};
  gint paragraph_delimiter_index_o {};
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (gint*) (&paragraph_delimiter_index_o), (gint*) (&next_paragraph_start_o));
  next_paragraph_start = next_paragraph_start_o;
  paragraph_delimiter_index = paragraph_delimiter_index_o;
}
std::tuple<gint, gint> find_paragraph_boundary (const gi::cstring_v text, gint length) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_find_paragraph_boundary;
  gint next_paragraph_start_o {};
  gint paragraph_delimiter_index_o {};
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (gint*) (&paragraph_delimiter_index_o), (gint*) (&next_paragraph_start_o));
  auto &&tmp_return_1 = paragraph_delimiter_index_o;
  auto &&tmp_return_2 = next_paragraph_start_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_get_log_attrs (const char* text /*none*/, int length, int level, PangoLanguage* language /*none*/, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_get_log_attrs (const char* text /*none*/, gint length, gint level, ::PangoLanguage* language /*none*/, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// gboolean pango_is_zero_width (gunichar ch);
// gboolean pango_is_zero_width (gunichar ch);
bool is_zero_width (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_is_zero_width;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return _temp_ret;
}

// GList* /*full*/ pango_itemize (PangoContext* context /*none*/, const char* text /*none*/, int start_index, int length, PangoAttrList* attrs /*none*/, PangoAttrIterator* cached_iter /*none,nullable*/);
// ::GList* /*full*/ pango_itemize (::PangoContext* context /*none*/, const char* text /*none*/, gint start_index, gint length, ::PangoAttrList* attrs /*none*/, ::PangoAttrIterator* cached_iter /*none,nullable*/);
gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize (Pango::Context context, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs, Pango::AttrIterator_Ref cached_iter) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_itemize;
  auto cached_iter_to_c = gi::unwrap (cached_iter, gi::transfer_none);
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::wrap_to<gi::Collection<GList, ::PangoItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize (Pango::Context context, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_itemize;
  auto cached_iter_to_c = nullptr;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::wrap_to<gi::Collection<GList, ::PangoItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GList* /*full*/ pango_itemize_with_base_dir (PangoContext* context /*none*/, PangoDirection base_dir, const char* text /*none*/, int start_index, int length, PangoAttrList* attrs /*none*/, PangoAttrIterator* cached_iter /*none,nullable*/);
// ::GList* /*full*/ pango_itemize_with_base_dir (::PangoContext* context /*none*/, ::PangoDirection base_dir, const char* text /*none*/, gint start_index, gint length, ::PangoAttrList* attrs /*none*/, ::PangoAttrIterator* cached_iter /*none,nullable*/);
gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs, Pango::AttrIterator_Ref cached_iter) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, ::PangoDirection base_dir, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_itemize_with_base_dir;
  auto cached_iter_to_c = gi::unwrap (cached_iter, gi::transfer_none);
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto base_dir_to_c = gi::unwrap (base_dir);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::PangoDirection) (base_dir_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::wrap_to<gi::Collection<GList, ::PangoItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const gi::cstring_v text, gint start_index, gint length, Pango::AttrList_Ref attrs) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, ::PangoDirection base_dir, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_itemize_with_base_dir;
  auto cached_iter_to_c = nullptr;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto base_dir_to_c = gi::unwrap (base_dir);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::PangoDirection) (base_dir_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::wrap_to<gi::Collection<GList, ::PangoItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// guint8* pango_log2vis_get_embedding_levels (const gchar* text /*none*/, int length, PangoDirection* pbase_dir);
// guint8 pango_log2vis_get_embedding_levels (const char* text /*none*/, gint length, ::PangoDirection pbase_dir);
// SKIP; inconsistent pbase_dir in pointer depth (1 vs 0), inconsistent  return pointer depth (1 vs 0)

// gboolean pango_markup_parser_finish (GMarkupParseContext* context /*none*/, PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
// gboolean pango_markup_parser_finish (::GMarkupParseContext* context /*none*/, ::PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
bool markup_parser_finish (GLib::MarkupParseContext_Ref context, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), &error);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool markup_parser_finish (GLib::MarkupParseContext_Ref context, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), _error ? &_error_o : nullptr);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> markup_parser_finish (GLib::MarkupParseContext_Ref context)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attr_list_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_4 = accel_char_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> markup_parser_finish (GLib::MarkupParseContext_Ref context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attr_list_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_4 = accel_char_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// GMarkupParseContext* /*none*/ pango_markup_parser_new (gunichar accel_marker);
// ::GMarkupParseContext* /*none*/ pango_markup_parser_new (gunichar accel_marker);
GLib::MarkupParseContext_Ref markup_parser_new (gunichar accel_marker) noexcept
{
  typedef ::GMarkupParseContext* (*call_wrap_t) (gunichar accel_marker);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_markup_parser_new;
  auto accel_marker_to_c = accel_marker;
  auto _temp_ret = call_wrap_v ((gunichar) (accel_marker_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean pango_parse_markup (const char* markup_text /*none*/, int length, gunichar accel_marker, PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
// gboolean pango_parse_markup (const char* markup_text /*none*/, gint length, gunichar accel_marker, ::PangoAttrList** attr_list /*full,out,opt*/, char** text /*full,out,opt*/, gunichar* accel_char, GError ** error);
bool parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char)
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), &error);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, gi::cstring * text, gunichar * accel_char, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), _error ? &_error_o : nullptr);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker)
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attr_list_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_4 = accel_char_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, Pango::AttrList, gi::cstring, gunichar> parse_markup (const gi::cstring_v markup_text, gint length, gunichar accel_marker, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attr_list_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_4 = accel_char_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gboolean pango_parse_stretch (const char* str /*none*/, PangoStretch* stretch, gboolean warn);
// gboolean pango_parse_stretch (const char* str /*none*/, ::PangoStretch* stretch, gboolean warn);
bool parse_stretch (const gi::cstring_v str, Pango::Stretch & stretch, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStretch* stretch, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_stretch;
  auto warn_to_c = warn;
  ::PangoStretch stretch_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStretch*) (&stretch_o), (gboolean) (warn_to_c));
  stretch = gi::wrap (stretch_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Stretch> parse_stretch (const gi::cstring_v str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStretch* stretch, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_stretch;
  auto warn_to_c = warn;
  ::PangoStretch stretch_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStretch*) (&stretch_o), (gboolean) (warn_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stretch_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean pango_parse_style (const char* str /*none*/, PangoStyle* style, gboolean warn);
// gboolean pango_parse_style (const char* str /*none*/, ::PangoStyle* style, gboolean warn);
bool parse_style (const gi::cstring_v str, Pango::Style & style, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStyle* style, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_style;
  auto warn_to_c = warn;
  ::PangoStyle style_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStyle*) (&style_o), (gboolean) (warn_to_c));
  style = gi::wrap (style_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Style> parse_style (const gi::cstring_v str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStyle* style, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_style;
  auto warn_to_c = warn;
  ::PangoStyle style_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStyle*) (&style_o), (gboolean) (warn_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (style_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean pango_parse_variant (const char* str /*none*/, PangoVariant* variant, gboolean warn);
// gboolean pango_parse_variant (const char* str /*none*/, ::PangoVariant* variant, gboolean warn);
bool parse_variant (const gi::cstring_v str, Pango::Variant & variant, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoVariant* variant, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_variant;
  auto warn_to_c = warn;
  ::PangoVariant variant_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoVariant*) (&variant_o), (gboolean) (warn_to_c));
  variant = gi::wrap (variant_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Variant> parse_variant (const gi::cstring_v str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoVariant* variant, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_variant;
  auto warn_to_c = warn;
  ::PangoVariant variant_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoVariant*) (&variant_o), (gboolean) (warn_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (variant_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean pango_parse_weight (const char* str /*none*/, PangoWeight* weight, gboolean warn);
// gboolean pango_parse_weight (const char* str /*none*/, ::PangoWeight* weight, gboolean warn);
bool parse_weight (const gi::cstring_v str, Pango::Weight & weight, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoWeight* weight, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_weight;
  auto warn_to_c = warn;
  ::PangoWeight weight_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoWeight*) (&weight_o), (gboolean) (warn_to_c));
  weight = gi::wrap (weight_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Weight> parse_weight (const gi::cstring_v str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoWeight* weight, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_parse_weight;
  auto warn_to_c = warn;
  ::PangoWeight weight_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoWeight*) (&weight_o), (gboolean) (warn_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (weight_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_quantize_line_geometry (int* thickness, int* position);
// void pango_quantize_line_geometry (gint* thickness, gint* position);
void quantize_line_geometry (gint & thickness, gint & position) noexcept
{
  typedef void (*call_wrap_t) (gint* thickness, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_quantize_line_geometry;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto thickness_to_c = thickness;
  gint thickness_o = thickness_to_c;
  call_wrap_v ((gint*) (&thickness_o), (gint*) (&position_o));
  position = position_o;
  thickness = thickness_o;
}

// GList* /*full*/ pango_reorder_items (GList* items /*none*/);
// ::GList* /*full*/ pango_reorder_items (::GList* items /*none*/);
gi::Collection<GList, ::PangoItem*, gi::transfer_full_t> reorder_items (gi::CollectionParameter<GList, ::PangoItem*, gi::transfer_none_t> items) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GList* items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_reorder_items;
  auto items_w = unwrap (std::move(items), gi::transfer_none);
  auto items_to_c = items_w;
  auto _temp_ret = call_wrap_v ((::GList*) (items_to_c));
  return gi::wrap_to<gi::Collection<GList, ::PangoItem*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void pango_shape (const char* text /*none*/, int length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_shape (const char* text /*none*/, gint length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/);
void shape (const gi::cstring_v text, gint length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_shape_full (const char* item_text /*none*/, int item_length, const char* paragraph_text /*none,nullable*/, int paragraph_length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/);
// void pango_shape_full (const char* item_text /*none*/, gint item_length, const char* paragraph_text /*none,nullable*/, gint paragraph_length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/);
void shape_full (const gi::cstring_v item_text, gint item_length, const gi::cstring_v paragraph_text, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_full;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none);
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}
void shape_full (const gi::cstring_v item_text, gint item_length, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_full;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_shape_item (PangoItem* item /*none*/, const char* paragraph_text /*none,nullable*/, int paragraph_length, PangoLogAttr* log_attrs /*none,nullable*/, PangoGlyphString* glyphs /*none*/, PangoShapeFlags flags);
// void pango_shape_item (::PangoItem* item /*none*/, const char* paragraph_text /*none,nullable*/, gint paragraph_length, ::PangoLogAttr* log_attrs /*none,nullable*/, ::PangoGlyphString* glyphs /*none*/, ::PangoShapeFlags flags);
void shape_item (Pango::Item_Ref item, const gi::cstring_v paragraph_text, gint paragraph_length, Pango::LogAttr_Ref log_attrs, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* item, const char* paragraph_text, gint paragraph_length, ::PangoLogAttr* log_attrs, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_item;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto log_attrs_to_c = gi::unwrap (log_attrs, gi::transfer_none);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none);
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::PangoItem*) (item_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (::PangoLogAttr*) (log_attrs_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}
void shape_item (Pango::Item_Ref item, gint paragraph_length, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* item, const char* paragraph_text, gint paragraph_length, ::PangoLogAttr* log_attrs, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_item;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto log_attrs_to_c = nullptr;
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::PangoItem*) (item_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (::PangoLogAttr*) (log_attrs_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}

// void pango_shape_with_flags (const char* item_text /*none*/, int item_length, const char* paragraph_text /*none,nullable*/, int paragraph_length, const PangoAnalysis* analysis /*none*/, PangoGlyphString* glyphs /*none*/, PangoShapeFlags flags);
// void pango_shape_with_flags (const char* item_text /*none*/, gint item_length, const char* paragraph_text /*none,nullable*/, gint paragraph_length, const ::PangoAnalysis* analysis /*none*/, ::PangoGlyphString* glyphs /*none*/, ::PangoShapeFlags flags);
void shape_with_flags (const gi::cstring_v item_text, gint item_length, const gi::cstring_v paragraph_text, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none);
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}
void shape_with_flags (const gi::cstring_v item_text, gint item_length, gint paragraph_length, const Pango::Analysis_Ref analysis, Pango::GlyphString_Ref glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_shape_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}

// void pango_tailor_break (const char* text /*none*/, int length, PangoAnalysis* analysis /*none*/, int offset, PangoLogAttr* attrs /*none*/, int attrs_len);
// void pango_tailor_break (const char* text /*none*/, gint length, ::PangoAnalysis* analysis /*none*/, gint offset, ::PangoLogAttr** attrs /*none*/, gint attrs_len);
// SKIP; attrs in boxed array not supported (depth 1)

// PangoDirection pango_unichar_direction (gunichar ch);
// ::PangoDirection pango_unichar_direction (gunichar ch);
Pango::Direction unichar_direction (gunichar ch) noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_unichar_direction;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return gi::wrap (_temp_ret);
}

// int pango_units_from_double (double d);
// gint pango_units_from_double (gdouble d);
gint units_from_double (gdouble d) noexcept
{
  typedef gint (*call_wrap_t) (gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_units_from_double;
  auto d_to_c = d;
  auto _temp_ret = call_wrap_v ((gdouble) (d_to_c));
  return _temp_ret;
}

// double pango_units_to_double (int i);
// gdouble pango_units_to_double (gint i);
gdouble units_to_double (gint i) noexcept
{
  typedef gdouble (*call_wrap_t) (gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_units_to_double;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((gint) (i_to_c));
  return _temp_ret;
}

// int pango_version ();
// gint pango_version ();
gint version () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const char* /*none,nullable*/ pango_version_check (int required_major, int required_minor, int required_micro);
// const char* /*none,nullable*/ pango_version_check (gint required_major, gint required_minor, gint required_micro);
gi::cstring_v version_check (gint required_major, gint required_minor, gint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (gint required_major, gint required_minor, gint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_version_check;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((gint) (required_major_to_c), (gint) (required_minor_to_c), (gint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ pango_version_string ();
// const char* /*none*/ pango_version_string ();
gi::cstring_v version_string () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_version_string;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
