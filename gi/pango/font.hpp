// AUTO-GENERATED

#ifndef _GI_PANGO_FONT_HPP_
#define _GI_PANGO_FONT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Context;
class Coverage;
class FontDescription;
class FontDescription_Ref;
class FontFace;
class FontMap;
class FontMetrics;
class FontMetrics_Ref;
class Language;
class Language_Ref;
class Rectangle;
class Rectangle_Ref;

class Font;

namespace base {


#define GI_PANGO_FONT_BASE base::FontBase
class FontBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFont BaseObjectType;

FontBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_get_type(); } 

// void pango_font_descriptions_free (PangoFontDescription** descs /*full,nullable*/, int n_descs);
// void pango_font_descriptions_free (::PangoFontDescription** descs /*full,nullable*/, gint n_descs);
// IGNORE; marked ignore

// PangoFont* /*full,nullable*/ pango_font_deserialize (PangoContext* context /*none*/, GBytes* bytes /*none*/, GError ** error);
// ::PangoFont* /*full,nullable*/ pango_font_deserialize (::PangoContext* context /*none*/, ::GBytes* bytes /*none*/, GError ** error);
static GI_INLINE_DECL Pango::Font deserialize (Pango::Context context, GLib::Bytes_Ref bytes);
static GI_INLINE_DECL Pango::Font deserialize (Pango::Context context, GLib::Bytes_Ref bytes, GLib::Error * _error) noexcept;

// PangoFontDescription* /*full*/ pango_font_describe (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_describe (::PangoFont* font /*none*/);
GI_INLINE_DECL Pango::FontDescription describe () noexcept;

// PangoFontDescription* /*full*/ pango_font_describe_with_absolute_size (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_describe_with_absolute_size (::PangoFont* font /*none*/);
GI_INLINE_DECL Pango::FontDescription describe_with_absolute_size () noexcept;

// PangoCoverage* /*full*/ pango_font_get_coverage (PangoFont* font /*none*/, PangoLanguage* language /*none*/);
// ::PangoCoverage* /*full*/ pango_font_get_coverage (::PangoFont* font /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL Pango::Coverage get_coverage (Pango::Language_Ref language) noexcept;

// PangoFontFace* /*none*/ pango_font_get_face (PangoFont* font /*none*/);
// ::PangoFontFace* /*none*/ pango_font_get_face (::PangoFont* font /*none*/);
GI_INLINE_DECL Pango::FontFace get_face () noexcept;

// void pango_font_get_features (PangoFont* font /*none*/, hb_feature_t* features /*none,out,ca*/, guint len, guint* num_features);
// void pango_font_get_features (::PangoFont* font /*none*/, * features /*none,out,ca*/, guint len, guint* num_features);
// SKIP; container element not supported

// PangoFontMap* /*none,nullable*/ pango_font_get_font_map (PangoFont* font /*none,nullable*/);
// ::PangoFontMap* /*none,nullable*/ pango_font_get_font_map (::PangoFont* font /*none,nullable*/);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// void pango_font_get_glyph_extents (PangoFont* font /*none,nullable*/, PangoGlyph glyph, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_font_get_glyph_extents (::PangoFont* font /*none,nullable*/, ::PangoGlyph glyph, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_glyph_extents (::PangoGlyph glyph, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_glyph_extents (::PangoGlyph glyph) noexcept;

// hb_font_t* /*none,nullable*/ pango_font_get_hb_font (PangoFont* font /*none*/);
//  /*none,nullable*/ pango_font_get_hb_font (::PangoFont* font /*none*/);
// IGNORE; not introspectable,  type  not supported

// PangoLanguage** /*none,nullable*/ pango_font_get_languages (PangoFont* font /*none*/);
// ::PangoLanguage** /*none,nullable*/ pango_font_get_languages (::PangoFont* font /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t> get_languages () noexcept;

// PangoFontMetrics* /*full*/ pango_font_get_metrics (PangoFont* font /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ pango_font_get_metrics (::PangoFont* font /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL Pango::FontMetrics get_metrics (Pango::Language_Ref language) noexcept;
GI_INLINE_DECL Pango::FontMetrics get_metrics () noexcept;

// gboolean pango_font_has_char (PangoFont* font /*none*/, gunichar wc);
// gboolean pango_font_has_char (::PangoFont* font /*none*/, gunichar wc);
GI_INLINE_DECL bool has_char (gunichar wc) noexcept;

// GBytes* /*full*/ pango_font_serialize (PangoFont* font /*none*/);
// ::GBytes* /*full*/ pango_font_serialize (::PangoFont* font /*none*/);
GI_INLINE_DECL GLib::Bytes serialize () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/font_extra_def.hpp>)
#include <pango/font_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/font_extra.hpp>)
#include <pango/font_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Font : public GI_PANGO_FONT_BASE
{ typedef GI_PANGO_FONT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFont>
{ typedef Pango::Font type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontClassDef
{
typedef FontClassDef self;
public:
typedef Pango::Font instance_type;
typedef ::PangoFontClass class_type;

using GI_MEMBER_CHECK_CONFLICT(describe) = self;
using GI_MEMBER_CHECK_CONFLICT(describe_absolute) = self;
using GI_MEMBER_CHECK_CONFLICT(get_coverage) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font_map) = self;
using GI_MEMBER_CHECK_CONFLICT(get_glyph_extents) = self;
using GI_MEMBER_CHECK_CONFLICT(get_metrics) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// hb_font_t* /*full*/ Font::create_hb_font (PangoFont* font /*none*/);
//  /*full*/ Font::create_hb_font (::PangoFont* font /*none*/);
// SKIP;  type  not supported

// PangoFontDescription* /*full*/ Font::describe (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe (::PangoFont* font /*none*/);
virtual Pango::FontDescription describe_ () noexcept = 0;

// PangoFontDescription* /*full*/ Font::describe_absolute (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe_absolute (::PangoFont* font /*none*/);
virtual Pango::FontDescription describe_absolute_ () noexcept = 0;

// PangoCoverage* /*full*/ Font::get_coverage (PangoFont* font /*none*/, PangoLanguage* language /*none*/);
// ::PangoCoverage* /*full*/ Font::get_coverage (::PangoFont* font /*none*/, ::PangoLanguage* language /*none*/);
virtual Pango::Coverage get_coverage_ (Pango::Language_Ref language) noexcept = 0;

// void Font::get_features (PangoFont* font /*none*/, hb_feature_t* features /*none,out,ca*/, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font /*none*/, * features /*none,out,ca*/, guint len, guint* num_features);
// SKIP; container element not supported

// PangoFontMap* /*none,nullable*/ Font::get_font_map (PangoFont* font /*none,nullable*/);
// ::PangoFontMap* /*none,nullable*/ Font::get_font_map (::PangoFont* font /*none,nullable*/);
virtual Pango::FontMap get_font_map_ () noexcept = 0;

// void Font::get_glyph_extents (PangoFont* font /*none,nullable*/, PangoGlyph glyph, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void Font::get_glyph_extents (::PangoFont* font /*none,nullable*/, ::PangoGlyph glyph, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
virtual void get_glyph_extents_ (::PangoGlyph glyph, Pango::Rectangle_Ref ink_rect, Pango::Rectangle_Ref logical_rect) noexcept = 0;

// PangoFontMetrics* /*full*/ Font::get_metrics (PangoFont* font /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ Font::get_metrics (::PangoFont* font /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
virtual Pango::FontMetrics get_metrics_ (Pango::Language_Ref language) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontClass: public detail::ClassTemplate<Pango::impl::internal::FontClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FontClassDef;
typedef FontClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// hb_font_t* /*full*/ Font::create_hb_font (PangoFont* font /*none*/);
//  /*full*/ Font::create_hb_font (::PangoFont* font /*none*/);
// SKIP;  type  not supported

// PangoFontDescription* /*full*/ Font::describe (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe (::PangoFont* font /*none*/);
GI_INLINE_DECL Pango::FontDescription describe_ () noexcept override;

// PangoFontDescription* /*full*/ Font::describe_absolute (PangoFont* font /*none*/);
// ::PangoFontDescription* /*full*/ Font::describe_absolute (::PangoFont* font /*none*/);
GI_INLINE_DECL Pango::FontDescription describe_absolute_ () noexcept override;

// PangoCoverage* /*full*/ Font::get_coverage (PangoFont* font /*none*/, PangoLanguage* language /*none*/);
// ::PangoCoverage* /*full*/ Font::get_coverage (::PangoFont* font /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL Pango::Coverage get_coverage_ (Pango::Language_Ref language) noexcept override;

// void Font::get_features (PangoFont* font /*none*/, hb_feature_t* features /*none,out,ca*/, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font /*none*/, * features /*none,out,ca*/, guint len, guint* num_features);
// SKIP; container element not supported

// PangoFontMap* /*none,nullable*/ Font::get_font_map (PangoFont* font /*none,nullable*/);
// ::PangoFontMap* /*none,nullable*/ Font::get_font_map (::PangoFont* font /*none,nullable*/);
GI_INLINE_DECL Pango::FontMap get_font_map_ () noexcept override;

// void Font::get_glyph_extents (PangoFont* font /*none,nullable*/, PangoGlyph glyph, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void Font::get_glyph_extents (::PangoFont* font /*none,nullable*/, ::PangoGlyph glyph, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_glyph_extents_ (::PangoGlyph glyph, Pango::Rectangle_Ref ink_rect, Pango::Rectangle_Ref logical_rect) noexcept override;

// PangoFontMetrics* /*full*/ Font::get_metrics (PangoFont* font /*none,nullable*/, PangoLanguage* language /*none,nullable*/);
// ::PangoFontMetrics* /*full*/ Font::get_metrics (::PangoFont* font /*none,nullable*/, ::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL Pango::FontMetrics get_metrics_ (Pango::Language_Ref language) noexcept override;


};


struct FontClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontClass, describe)
  GI_MEMBER_DEFINE(FontClass, describe_absolute)
  GI_MEMBER_DEFINE(FontClass, get_coverage)
  GI_MEMBER_DEFINE(FontClass, get_font_map)
  GI_MEMBER_DEFINE(FontClass, get_glyph_extents)
  GI_MEMBER_DEFINE(FontClass, get_metrics)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, describe),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, describe_absolute),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_coverage),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font_map),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_glyph_extents),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_metrics)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontImpl = detail::ObjectImpl<Font, internal::FontClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
