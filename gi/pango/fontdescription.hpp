// AUTO-GENERATED

#ifndef _GI_PANGO_FONTDESCRIPTION_HPP_
#define _GI_PANGO_FONTDESCRIPTION_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontDescription_Ref;

class FontDescription;

namespace base {


#define GI_PANGO_FONTDESCRIPTION_BASE base::FontDescriptionBase
class FontDescriptionBase : public gi::detail::GBoxedWrapperBase<FontDescriptionBase, ::PangoFontDescription>
{
typedef gi::detail::GBoxedWrapperBase<FontDescriptionBase, ::PangoFontDescription> super_type;
public:

FontDescriptionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_font_description_get_type(); } 

// PangoFontDescription* /*full*/ pango_font_description_new ();
// ::PangoFontDescription* /*full*/ pango_font_description_new ();
static GI_INLINE_DECL Pango::FontDescription new_ () noexcept;

// gboolean pango_font_description_better_match (const PangoFontDescription* desc /*none*/, const PangoFontDescription* old_match /*none,nullable*/, const PangoFontDescription* new_match /*none*/);
// gboolean pango_font_description_better_match (const ::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* old_match /*none,nullable*/, const ::PangoFontDescription* new_match /*none*/);
GI_INLINE_DECL bool better_match (const Pango::FontDescription_Ref old_match, const Pango::FontDescription_Ref new_match) const noexcept;
GI_INLINE_DECL bool better_match (const Pango::FontDescription_Ref new_match) const noexcept;

// PangoFontDescription* /*full,nullable*/ pango_font_description_copy (const PangoFontDescription* desc /*none,nullable*/);
// ::PangoFontDescription* /*full,nullable*/ pango_font_description_copy (const ::PangoFontDescription* desc /*none,nullable*/);
GI_INLINE_DECL Pango::FontDescription copy () const noexcept;

// PangoFontDescription* /*full,nullable*/ pango_font_description_copy_static (const PangoFontDescription* desc /*none,nullable*/);
// ::PangoFontDescription* /*full,nullable*/ pango_font_description_copy_static (const ::PangoFontDescription* desc /*none,nullable*/);
GI_INLINE_DECL Pango::FontDescription copy_static () const noexcept;

// gboolean pango_font_description_equal (const PangoFontDescription* desc1 /*none*/, const PangoFontDescription* desc2 /*none*/);
// gboolean pango_font_description_equal (const ::PangoFontDescription* desc1 /*none*/, const ::PangoFontDescription* desc2 /*none*/);
GI_INLINE_DECL bool equal (const Pango::FontDescription_Ref desc2) const noexcept;

// void pango_font_description_free (PangoFontDescription* desc /*none,nullable*/);
// void pango_font_description_free (::PangoFontDescription* desc /*none,nullable*/);
// IGNORE; marked ignore

// const char* /*none,nullable*/ pango_font_description_get_family (const PangoFontDescription* desc /*none*/);
// const char* /*none,nullable*/ pango_font_description_get_family (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL gi::cstring_v get_family () const noexcept;

// PangoGravity pango_font_description_get_gravity (const PangoFontDescription* desc /*none*/);
// ::PangoGravity pango_font_description_get_gravity (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Gravity get_gravity () const noexcept;

// PangoFontMask pango_font_description_get_set_fields (const PangoFontDescription* desc /*none*/);
// ::PangoFontMask pango_font_description_get_set_fields (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::FontMask get_set_fields () const noexcept;

// gint pango_font_description_get_size (const PangoFontDescription* desc /*none*/);
// gint pango_font_description_get_size (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL gint get_size () const noexcept;

// gboolean pango_font_description_get_size_is_absolute (const PangoFontDescription* desc /*none*/);
// gboolean pango_font_description_get_size_is_absolute (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL bool get_size_is_absolute () const noexcept;

// PangoStretch pango_font_description_get_stretch (const PangoFontDescription* desc /*none*/);
// ::PangoStretch pango_font_description_get_stretch (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Stretch get_stretch () const noexcept;

// PangoStyle pango_font_description_get_style (const PangoFontDescription* desc /*none*/);
// ::PangoStyle pango_font_description_get_style (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Style get_style () const noexcept;

// PangoVariant pango_font_description_get_variant (const PangoFontDescription* desc /*none*/);
// ::PangoVariant pango_font_description_get_variant (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Variant get_variant () const noexcept;

// const char* /*none,nullable*/ pango_font_description_get_variations (const PangoFontDescription* desc /*none*/);
// const char* /*none,nullable*/ pango_font_description_get_variations (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL gi::cstring_v get_variations () const noexcept;

// PangoWeight pango_font_description_get_weight (const PangoFontDescription* desc /*none*/);
// ::PangoWeight pango_font_description_get_weight (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Weight get_weight () const noexcept;

// guint pango_font_description_hash (const PangoFontDescription* desc /*none*/);
// guint pango_font_description_hash (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// void pango_font_description_merge (PangoFontDescription* desc /*none*/, const PangoFontDescription* desc_to_merge /*none,nullable*/, gboolean replace_existing);
// void pango_font_description_merge (::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* desc_to_merge /*none,nullable*/, gboolean replace_existing);
GI_INLINE_DECL void merge (const Pango::FontDescription_Ref desc_to_merge, gboolean replace_existing) noexcept;
GI_INLINE_DECL void merge (gboolean replace_existing) noexcept;

// void pango_font_description_merge_static (PangoFontDescription* desc /*none*/, const PangoFontDescription* desc_to_merge /*none*/, gboolean replace_existing);
// void pango_font_description_merge_static (::PangoFontDescription* desc /*none*/, const ::PangoFontDescription* desc_to_merge /*none*/, gboolean replace_existing);
GI_INLINE_DECL void merge_static (const Pango::FontDescription_Ref desc_to_merge, gboolean replace_existing) noexcept;

// void pango_font_description_set_absolute_size (PangoFontDescription* desc /*none*/, double size);
// void pango_font_description_set_absolute_size (::PangoFontDescription* desc /*none*/, gdouble size);
GI_INLINE_DECL void set_absolute_size (gdouble size) noexcept;

// void pango_font_description_set_family (PangoFontDescription* desc /*none*/, const char* family /*none*/);
// void pango_font_description_set_family (::PangoFontDescription* desc /*none*/, const char* family /*none*/);
GI_INLINE_DECL void set_family (const gi::cstring_v family) noexcept;

// void pango_font_description_set_family_static (PangoFontDescription* desc /*none*/, const char* family /*none*/);
// void pango_font_description_set_family_static (::PangoFontDescription* desc /*none*/, const char* family /*none*/);
GI_INLINE_DECL void set_family_static (const gi::cstring_v family) noexcept;

// void pango_font_description_set_gravity (PangoFontDescription* desc /*none*/, PangoGravity gravity);
// void pango_font_description_set_gravity (::PangoFontDescription* desc /*none*/, ::PangoGravity gravity);
GI_INLINE_DECL void set_gravity (Pango::Gravity gravity) noexcept;

// void pango_font_description_set_size (PangoFontDescription* desc /*none*/, gint size);
// void pango_font_description_set_size (::PangoFontDescription* desc /*none*/, gint size);
GI_INLINE_DECL void set_size (gint size) noexcept;

// void pango_font_description_set_stretch (PangoFontDescription* desc /*none*/, PangoStretch stretch);
// void pango_font_description_set_stretch (::PangoFontDescription* desc /*none*/, ::PangoStretch stretch);
GI_INLINE_DECL void set_stretch (Pango::Stretch stretch) noexcept;

// void pango_font_description_set_style (PangoFontDescription* desc /*none*/, PangoStyle style);
// void pango_font_description_set_style (::PangoFontDescription* desc /*none*/, ::PangoStyle style);
GI_INLINE_DECL void set_style (Pango::Style style) noexcept;

// void pango_font_description_set_variant (PangoFontDescription* desc /*none*/, PangoVariant variant);
// void pango_font_description_set_variant (::PangoFontDescription* desc /*none*/, ::PangoVariant variant);
GI_INLINE_DECL void set_variant (Pango::Variant variant) noexcept;

// void pango_font_description_set_variations (PangoFontDescription* desc /*none*/, const char* variations /*none,nullable*/);
// void pango_font_description_set_variations (::PangoFontDescription* desc /*none*/, const char* variations /*none,nullable*/);
GI_INLINE_DECL void set_variations (const gi::cstring_v variations) noexcept;
GI_INLINE_DECL void set_variations () noexcept;

// void pango_font_description_set_variations_static (PangoFontDescription* desc /*none*/, const char* variations /*none*/);
// void pango_font_description_set_variations_static (::PangoFontDescription* desc /*none*/, const char* variations /*none*/);
GI_INLINE_DECL void set_variations_static (const gi::cstring_v variations) noexcept;

// void pango_font_description_set_weight (PangoFontDescription* desc /*none*/, PangoWeight weight);
// void pango_font_description_set_weight (::PangoFontDescription* desc /*none*/, ::PangoWeight weight);
GI_INLINE_DECL void set_weight (Pango::Weight weight) noexcept;

// char* /*full,nullable*/ pango_font_description_to_filename (const PangoFontDescription* desc /*none*/);
// char* /*full,nullable*/ pango_font_description_to_filename (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL gi::cstring to_filename () const noexcept;

// char* /*full*/ pango_font_description_to_string (const PangoFontDescription* desc /*none*/);
// char* /*full*/ pango_font_description_to_string (const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL gi::cstring to_string () const noexcept;

// void pango_font_description_unset_fields (PangoFontDescription* desc /*none*/, PangoFontMask to_unset);
// void pango_font_description_unset_fields (::PangoFontDescription* desc /*none*/, ::PangoFontMask to_unset);
GI_INLINE_DECL void unset_fields (Pango::FontMask to_unset) noexcept;

// PangoFontDescription* /*full*/ pango_font_description_from_string (const char* str /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_description_from_string (const char* str /*none*/);
static GI_INLINE_DECL Pango::FontDescription from_string (const gi::cstring_v str) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_def.hpp>)
#include <pango/fontdescription_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra.hpp>)
#include <pango/fontdescription_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontDescription_Ref;

class FontDescription : public gi::detail::GBoxedWrapper<FontDescription, ::PangoFontDescription, GI_PANGO_FONTDESCRIPTION_BASE, FontDescription_Ref>
{ typedef gi::detail::GBoxedWrapper<FontDescription, ::PangoFontDescription, GI_PANGO_FONTDESCRIPTION_BASE, FontDescription_Ref> super_type; using super_type::super_type; };


class FontDescription_Ref : public gi::detail::GBoxedRefWrapper<FontDescription, ::PangoFontDescription, GI_PANGO_FONTDESCRIPTION_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FontDescription, ::PangoFontDescription, GI_PANGO_FONTDESCRIPTION_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontDescription>
{ typedef Pango::FontDescription type; }; 

} // namespace repository

} // namespace gi

#endif
