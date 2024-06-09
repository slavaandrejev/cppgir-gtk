// AUTO-GENERATED

#ifndef _GI_PANGO_CONTEXT_HPP_
#define _GI_PANGO_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Font;
class FontDescription;
class FontDescription_Ref;
class FontFamily;
class FontMap;
class FontMetrics;
class FontMetrics_Ref;
class Fontset;
class Language;
class Language_Ref;
class Matrix;
class Matrix_Ref;

class Context;

namespace base {


#define GI_PANGO_CONTEXT_BASE base::ContextBase
class ContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoContext BaseObjectType;

ContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_context_get_type(); } 

// PangoContext* /*full*/ pango_context_new ();
// ::PangoContext* /*full*/ pango_context_new ();
static GI_INLINE_DECL Pango::Context new_ () noexcept;

// void pango_context_changed (PangoContext* context /*none*/);
// void pango_context_changed (::PangoContext* context /*none*/);
GI_INLINE_DECL void changed () noexcept;

// PangoDirection pango_context_get_base_dir (PangoContext* context /*none*/);
// ::PangoDirection pango_context_get_base_dir (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::Direction get_base_dir () noexcept;

// PangoGravity pango_context_get_base_gravity (PangoContext* context /*none*/);
// ::PangoGravity pango_context_get_base_gravity (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::Gravity get_base_gravity () noexcept;

// PangoFontDescription* /*none,nullable*/ pango_context_get_font_description (PangoContext* context /*none*/);
// ::PangoFontDescription* /*none,nullable*/ pango_context_get_font_description (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::FontDescription_Ref get_font_description () noexcept;

// PangoFontMap* /*none,nullable*/ pango_context_get_font_map (PangoContext* context /*none*/);
// ::PangoFontMap* /*none,nullable*/ pango_context_get_font_map (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// PangoGravity pango_context_get_gravity (PangoContext* context /*none*/);
// ::PangoGravity pango_context_get_gravity (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::Gravity get_gravity () noexcept;

// PangoGravityHint pango_context_get_gravity_hint (PangoContext* context /*none*/);
// ::PangoGravityHint pango_context_get_gravity_hint (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::GravityHint get_gravity_hint () noexcept;

// PangoLanguage* /*none*/ pango_context_get_language (PangoContext* context /*none*/);
// ::PangoLanguage* /*none*/ pango_context_get_language (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::Language_Ref get_language () noexcept;

// const PangoMatrix* /*none,nullable*/ pango_context_get_matrix (PangoContext* context /*none*/);
// const ::PangoMatrix* /*none,nullable*/ pango_context_get_matrix (::PangoContext* context /*none*/);
GI_INLINE_DECL Pango::Matrix_Ref get_matrix () noexcept;

// PangoFontMetrics* /*full*/ pango_context_get_metrics (PangoContext* context /*none*/, const PangoFontDescription* desc /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ pango_context_get_metrics (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL Pango::FontMetrics get_metrics (const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept;
GI_INLINE_DECL Pango::FontMetrics get_metrics () noexcept;

// gboolean pango_context_get_round_glyph_positions (PangoContext* context /*none*/);
// gboolean pango_context_get_round_glyph_positions (::PangoContext* context /*none*/);
GI_INLINE_DECL bool get_round_glyph_positions () noexcept;

// guint pango_context_get_serial (PangoContext* context /*none*/);
// guint pango_context_get_serial (::PangoContext* context /*none*/);
GI_INLINE_DECL guint get_serial () noexcept;

// void pango_context_list_families (PangoContext* context /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void pango_context_list_families (::PangoContext* context /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
GI_INLINE_DECL void list_families (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept;
GI_INLINE_DECL gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> list_families () noexcept;

// PangoFont* /*full,nullable*/ pango_context_load_font (PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ pango_context_load_font (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Font load_font (const Pango::FontDescription_Ref desc) noexcept;

// PangoFontset* /*full,nullable*/ pango_context_load_fontset (PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ pango_context_load_fontset (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL Pango::Fontset load_fontset (const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept;

// void pango_context_set_base_dir (PangoContext* context /*none*/, PangoDirection direction);
// void pango_context_set_base_dir (::PangoContext* context /*none*/, ::PangoDirection direction);
GI_INLINE_DECL void set_base_dir (Pango::Direction direction) noexcept;

// void pango_context_set_base_gravity (PangoContext* context /*none*/, PangoGravity gravity);
// void pango_context_set_base_gravity (::PangoContext* context /*none*/, ::PangoGravity gravity);
GI_INLINE_DECL void set_base_gravity (Pango::Gravity gravity) noexcept;

// void pango_context_set_font_description (PangoContext* context /*none*/, const PangoFontDescription* desc /*none,nullable*/);
// void pango_context_set_font_description (::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none,nullable*/);
GI_INLINE_DECL void set_font_description (const Pango::FontDescription_Ref desc) noexcept;
GI_INLINE_DECL void set_font_description () noexcept;

// void pango_context_set_font_map (PangoContext* context /*none*/, PangoFontMap* font_map /*none,nullable*/);
// void pango_context_set_font_map (::PangoContext* context /*none*/, ::PangoFontMap* font_map /*none,nullable*/);
GI_INLINE_DECL void set_font_map (Pango::FontMap font_map) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void pango_context_set_gravity_hint (PangoContext* context /*none*/, PangoGravityHint hint);
// void pango_context_set_gravity_hint (::PangoContext* context /*none*/, ::PangoGravityHint hint);
GI_INLINE_DECL void set_gravity_hint (Pango::GravityHint hint) noexcept;

// void pango_context_set_language (PangoContext* context /*none*/, PangoLanguage* language /*none,nullable*/);
// void pango_context_set_language (::PangoContext* context /*none*/, ::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL void set_language (Pango::Language_Ref language) noexcept;
GI_INLINE_DECL void set_language () noexcept;

// void pango_context_set_matrix (PangoContext* context /*none*/, const PangoMatrix* matrix /*none,nullable*/);
// void pango_context_set_matrix (::PangoContext* context /*none*/, const ::PangoMatrix* matrix /*none,nullable*/);
GI_INLINE_DECL void set_matrix (const Pango::Matrix_Ref matrix) noexcept;
GI_INLINE_DECL void set_matrix () noexcept;

// void pango_context_set_round_glyph_positions (PangoContext* context /*none*/, gboolean round_positions);
// void pango_context_set_round_glyph_positions (::PangoContext* context /*none*/, gboolean round_positions);
GI_INLINE_DECL void set_round_glyph_positions (gboolean round_positions) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/context_extra_def.hpp>)
#include <pango/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/context_extra.hpp>)
#include <pango/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Context : public GI_PANGO_CONTEXT_BASE
{ typedef GI_PANGO_CONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoContext>
{ typedef Pango::Context type; }; 

} // namespace repository

} // namespace gi

#endif
