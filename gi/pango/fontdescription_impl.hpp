// AUTO-GENERATED

#ifndef _GI_PANGO_FONTDESCRIPTION_IMPL_HPP_
#define _GI_PANGO_FONTDESCRIPTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontDescription* /*full*/ pango_font_description_new ();
// ::PangoFontDescription* /*full*/ pango_font_description_new ();
Pango::FontDescription base::FontDescriptionBase::new_ () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_font_description_better_match (const PangoFontDescription* desc /*none*/, const PangoFontDescription* old_match /*none,nullable*/, const PangoFontDescription* new_match /*none*/);
// gboolean pango_font_description_better_match (const ::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* old_match /*none,nullable*/, const ::PangoFontDescription* new_match /*none*/);
bool base::FontDescriptionBase::better_match (const Pango::FontDescription_Ref old_match, const Pango::FontDescription_Ref new_match) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_better_match;
  auto new_match_to_c = gi::unwrap (new_match, gi::transfer_none);
  auto old_match_to_c = gi::unwrap (old_match, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (old_match_to_c), (const ::PangoFontDescription*) (new_match_to_c));
  return _temp_ret;
}
bool base::FontDescriptionBase::better_match (const Pango::FontDescription_Ref new_match) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_better_match;
  auto new_match_to_c = gi::unwrap (new_match, gi::transfer_none);
  auto old_match_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (old_match_to_c), (const ::PangoFontDescription*) (new_match_to_c));
  return _temp_ret;
}

// PangoFontDescription* /*full,nullable*/ pango_font_description_copy (const PangoFontDescription* desc /*none,nullable*/);
// ::PangoFontDescription* /*full,nullable*/ pango_font_description_copy (const ::PangoFontDescription* desc /*none,nullable*/);
Pango::FontDescription base::FontDescriptionBase::copy () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_copy;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontDescription* /*full,nullable*/ pango_font_description_copy_static (const PangoFontDescription* desc /*none,nullable*/);
// ::PangoFontDescription* /*full,nullable*/ pango_font_description_copy_static (const ::PangoFontDescription* desc /*none,nullable*/);
Pango::FontDescription base::FontDescriptionBase::copy_static () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_copy_static;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_font_description_equal (const PangoFontDescription* desc1 /*none*/, const PangoFontDescription* desc2 /*none*/);
// gboolean pango_font_description_equal (const ::PangoFontDescription* desc1 /*none*/, const ::PangoFontDescription* desc2 /*none*/);
bool base::FontDescriptionBase::equal (const Pango::FontDescription_Ref desc2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc1, const ::PangoFontDescription* desc2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_equal;
  auto desc2_to_c = gi::unwrap (desc2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc2_to_c));
  return _temp_ret;
}

// void pango_font_description_free (PangoFontDescription* desc /*none,nullable*/);
// void pango_font_description_free (::PangoFontDescription* desc /*none,nullable*/);
// IGNORE; marked ignore

// const char* /*none,nullable*/ pango_font_description_get_family (const PangoFontDescription* desc /*none*/);
// const char* /*none,nullable*/ pango_font_description_get_family (const ::PangoFontDescription* desc /*none*/);
gi::cstring_v base::FontDescriptionBase::get_family () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_family;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoGravity pango_font_description_get_gravity (const PangoFontDescription* desc /*none*/);
// ::PangoGravity pango_font_description_get_gravity (const ::PangoFontDescription* desc /*none*/);
Pango::Gravity base::FontDescriptionBase::get_gravity () const noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_gravity;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoFontMask pango_font_description_get_set_fields (const PangoFontDescription* desc /*none*/);
// ::PangoFontMask pango_font_description_get_set_fields (const ::PangoFontDescription* desc /*none*/);
Pango::FontMask base::FontDescriptionBase::get_set_fields () const noexcept
{
  typedef ::PangoFontMask (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_set_fields;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint pango_font_description_get_size (const PangoFontDescription* desc /*none*/);
// gint pango_font_description_get_size (const ::PangoFontDescription* desc /*none*/);
gint base::FontDescriptionBase::get_size () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_size;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_font_description_get_size_is_absolute (const PangoFontDescription* desc /*none*/);
// gboolean pango_font_description_get_size_is_absolute (const ::PangoFontDescription* desc /*none*/);
bool base::FontDescriptionBase::get_size_is_absolute () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_size_is_absolute;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// PangoStretch pango_font_description_get_stretch (const PangoFontDescription* desc /*none*/);
// ::PangoStretch pango_font_description_get_stretch (const ::PangoFontDescription* desc /*none*/);
Pango::Stretch base::FontDescriptionBase::get_stretch () const noexcept
{
  typedef ::PangoStretch (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_stretch;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoStyle pango_font_description_get_style (const PangoFontDescription* desc /*none*/);
// ::PangoStyle pango_font_description_get_style (const ::PangoFontDescription* desc /*none*/);
Pango::Style base::FontDescriptionBase::get_style () const noexcept
{
  typedef ::PangoStyle (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_style;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoVariant pango_font_description_get_variant (const PangoFontDescription* desc /*none*/);
// ::PangoVariant pango_font_description_get_variant (const ::PangoFontDescription* desc /*none*/);
Pango::Variant base::FontDescriptionBase::get_variant () const noexcept
{
  typedef ::PangoVariant (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_variant;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ pango_font_description_get_variations (const PangoFontDescription* desc /*none*/);
// const char* /*none,nullable*/ pango_font_description_get_variations (const ::PangoFontDescription* desc /*none*/);
gi::cstring_v base::FontDescriptionBase::get_variations () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_variations;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoWeight pango_font_description_get_weight (const PangoFontDescription* desc /*none*/);
// ::PangoWeight pango_font_description_get_weight (const ::PangoFontDescription* desc /*none*/);
Pango::Weight base::FontDescriptionBase::get_weight () const noexcept
{
  typedef ::PangoWeight (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_get_weight;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint pango_font_description_hash (const PangoFontDescription* desc /*none*/);
// guint pango_font_description_hash (const ::PangoFontDescription* desc /*none*/);
guint base::FontDescriptionBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_hash;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// void pango_font_description_merge (PangoFontDescription* desc /*none*/, const PangoFontDescription* desc_to_merge /*none,nullable*/, gboolean replace_existing);
// void pango_font_description_merge (::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* desc_to_merge /*none,nullable*/, gboolean replace_existing);
void base::FontDescriptionBase::merge (const Pango::FontDescription_Ref desc_to_merge, gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_merge;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = gi::unwrap (desc_to_merge, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}
void base::FontDescriptionBase::merge (gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_merge;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = nullptr;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}

// void pango_font_description_merge_static (PangoFontDescription* desc /*none*/, const PangoFontDescription* desc_to_merge /*none*/, gboolean replace_existing);
// void pango_font_description_merge_static (::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* desc_to_merge /*none*/, gboolean replace_existing);
void base::FontDescriptionBase::merge_static (const Pango::FontDescription_Ref desc_to_merge, gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_merge_static;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = gi::unwrap (desc_to_merge, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}

// void pango_font_description_set_absolute_size (PangoFontDescription* desc /*none*/, double size);
// void pango_font_description_set_absolute_size (::PangoFontDescription* desc /*none*/, gdouble size);
void base::FontDescriptionBase::set_absolute_size (gdouble size) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, gdouble size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_absolute_size;
  auto size_to_c = size;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (gdouble) (size_to_c));
}

// void pango_font_description_set_family (PangoFontDescription* desc /*none*/, const char* family /*none*/);
// void pango_font_description_set_family (::PangoFontDescription* desc /*none*/, const char* family /*none*/);
void base::FontDescriptionBase::set_family (const gi::cstring_v family) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_family;
  auto family_to_c = gi::unwrap (family, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (family_to_c));
}

// void pango_font_description_set_family_static (PangoFontDescription* desc /*none*/, const char* family /*none*/);
// void pango_font_description_set_family_static (::PangoFontDescription* desc /*none*/, const char* family /*none*/);
void base::FontDescriptionBase::set_family_static (const gi::cstring_v family) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_family_static;
  auto family_to_c = gi::unwrap (family, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (family_to_c));
}

// void pango_font_description_set_gravity (PangoFontDescription* desc /*none*/, PangoGravity gravity);
// void pango_font_description_set_gravity (::PangoFontDescription* desc /*none*/, ::PangoGravity gravity);
void base::FontDescriptionBase::set_gravity (Pango::Gravity gravity) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_gravity;
  auto gravity_to_c = gi::unwrap (gravity);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoGravity) (gravity_to_c));
}

// void pango_font_description_set_size (PangoFontDescription* desc /*none*/, gint size);
// void pango_font_description_set_size (::PangoFontDescription* desc /*none*/, gint size);
void base::FontDescriptionBase::set_size (gint size) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_size;
  auto size_to_c = size;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (gint) (size_to_c));
}

// void pango_font_description_set_stretch (PangoFontDescription* desc /*none*/, PangoStretch stretch);
// void pango_font_description_set_stretch (::PangoFontDescription* desc /*none*/, ::PangoStretch stretch);
void base::FontDescriptionBase::set_stretch (Pango::Stretch stretch) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoStretch stretch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_stretch;
  auto stretch_to_c = gi::unwrap (stretch);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoStretch) (stretch_to_c));
}

// void pango_font_description_set_style (PangoFontDescription* desc /*none*/, PangoStyle style);
// void pango_font_description_set_style (::PangoFontDescription* desc /*none*/, ::PangoStyle style);
void base::FontDescriptionBase::set_style (Pango::Style style) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoStyle) (style_to_c));
}

// void pango_font_description_set_variant (PangoFontDescription* desc /*none*/, PangoVariant variant);
// void pango_font_description_set_variant (::PangoFontDescription* desc /*none*/, ::PangoVariant variant);
void base::FontDescriptionBase::set_variant (Pango::Variant variant) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoVariant variant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_variant;
  auto variant_to_c = gi::unwrap (variant);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoVariant) (variant_to_c));
}

// void pango_font_description_set_variations (PangoFontDescription* desc /*none*/, const char* variations /*none,nullable*/);
// void pango_font_description_set_variations (::PangoFontDescription* desc /*none*/, const char* variations /*none,nullable*/);
void base::FontDescriptionBase::set_variations (const gi::cstring_v variations) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_variations;
  auto variations_to_c = gi::unwrap (variations, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}
void base::FontDescriptionBase::set_variations () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_variations;
  auto variations_to_c = nullptr;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}

// void pango_font_description_set_variations_static (PangoFontDescription* desc /*none*/, const char* variations /*none*/);
// void pango_font_description_set_variations_static (::PangoFontDescription* desc /*none*/, const char* variations /*none*/);
void base::FontDescriptionBase::set_variations_static (const gi::cstring_v variations) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_variations_static;
  auto variations_to_c = gi::unwrap (variations, gi::transfer_none);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}

// void pango_font_description_set_weight (PangoFontDescription* desc /*none*/, PangoWeight weight);
// void pango_font_description_set_weight (::PangoFontDescription* desc /*none*/, ::PangoWeight weight);
void base::FontDescriptionBase::set_weight (Pango::Weight weight) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoWeight weight);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_set_weight;
  auto weight_to_c = gi::unwrap (weight);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoWeight) (weight_to_c));
}

// char* /*full,nullable*/ pango_font_description_to_filename (const PangoFontDescription* desc /*none*/);
// char* /*full,nullable*/ pango_font_description_to_filename (const ::PangoFontDescription* desc /*none*/);
gi::cstring base::FontDescriptionBase::to_filename () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_to_filename;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ pango_font_description_to_string (const PangoFontDescription* desc /*none*/);
// char* /*full*/ pango_font_description_to_string (const ::PangoFontDescription* desc /*none*/);
gi::cstring base::FontDescriptionBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_to_string;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_font_description_unset_fields (PangoFontDescription* desc /*none*/, PangoFontMask to_unset);
// void pango_font_description_unset_fields (::PangoFontDescription* desc /*none*/, ::PangoFontMask to_unset);
void base::FontDescriptionBase::unset_fields (Pango::FontMask to_unset) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoFontMask to_unset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_unset_fields;
  auto to_unset_to_c = gi::unwrap (to_unset);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoFontMask) (to_unset_to_c));
}

// PangoFontDescription* /*full*/ pango_font_description_from_string (const char* str /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_description_from_string (const char* str /*none*/);
Pango::FontDescription base::FontDescriptionBase::from_string (const gi::cstring_v str) noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_description_from_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_def_impl.hpp>)
#include <pango/fontdescription_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_impl.hpp>)
#include <pango/fontdescription_extra_impl.hpp>
#endif
#endif

#endif
