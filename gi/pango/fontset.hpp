// AUTO-GENERATED

#ifndef _GI_PANGO_FONTSET_HPP_
#define _GI_PANGO_FONTSET_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Font;
class FontMetrics;
class FontMetrics_Ref;
class Language;
class Language_Ref;

class Fontset;

namespace base {


#define GI_PANGO_FONTSET_BASE base::FontsetBase
class FontsetBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontset BaseObjectType;

FontsetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_fontset_get_type(); } 

// void pango_fontset_foreach (PangoFontset* fontset /*none*/, PangoFontsetForeachFunc func /*none*/, gpointer data);
// void pango_fontset_foreach (::PangoFontset* fontset /*none*/, Pango::FontsetForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void foreach (Pango::FontsetForeachFunc func) noexcept;

// PangoFont* /*full*/ pango_fontset_get_font (PangoFontset* fontset /*none*/, guint wc);
// ::PangoFont* /*full*/ pango_fontset_get_font (::PangoFontset* fontset /*none*/, guint wc);
GI_INLINE_DECL Pango::Font get_font (guint wc) noexcept;

// PangoFontMetrics* /*full*/ pango_fontset_get_metrics (PangoFontset* fontset /*none*/);
// ::PangoFontMetrics* /*full*/ pango_fontset_get_metrics (::PangoFontset* fontset /*none*/);
GI_INLINE_DECL Pango::FontMetrics get_metrics () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontset_extra_def.hpp>)
#include <pango/fontset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontset_extra.hpp>)
#include <pango/fontset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Fontset : public GI_PANGO_FONTSET_BASE
{ typedef GI_PANGO_FONTSET_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontset>
{ typedef Pango::Fontset type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontsetClassDef
{
typedef FontsetClassDef self;
public:
typedef Pango::Fontset instance_type;
typedef ::PangoFontsetClass class_type;

using GI_MEMBER_CHECK_CONFLICT(foreach) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font) = self;
using GI_MEMBER_CHECK_CONFLICT(get_language) = self;
using GI_MEMBER_CHECK_CONFLICT(get_metrics) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontsetClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Fontset::foreach (PangoFontset* fontset /*none*/, PangoFontsetForeachFunc func /*none*/, gpointer data);
// void Fontset::foreach (::PangoFontset* fontset /*none*/, Pango::FontsetForeachFunc::cfunction_type func /*none*/, void* data);
virtual void foreach_ (Pango::FontsetForeachFunc func) noexcept = 0;

// PangoFont* /*full*/ Fontset::get_font (PangoFontset* fontset /*none*/, guint wc);
// ::PangoFont* /*full*/ Fontset::get_font (::PangoFontset* fontset /*none*/, guint wc);
virtual Pango::Font get_font_ (guint wc) noexcept = 0;

// PangoLanguage* /*full*/ Fontset::get_language (PangoFontset* fontset /*none*/);
// ::PangoLanguage* /*full*/ Fontset::get_language (::PangoFontset* fontset /*none*/);
virtual Pango::Language get_language_ () noexcept = 0;

// PangoFontMetrics* /*full*/ Fontset::get_metrics (PangoFontset* fontset /*none*/);
// ::PangoFontMetrics* /*full*/ Fontset::get_metrics (::PangoFontset* fontset /*none*/);
virtual Pango::FontMetrics get_metrics_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontsetClass: public detail::ClassTemplate<Pango::impl::internal::FontsetClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FontsetClassDef;
typedef FontsetClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontsetClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Fontset::foreach (PangoFontset* fontset /*none*/, PangoFontsetForeachFunc func /*none*/, gpointer data);
// void Fontset::foreach (::PangoFontset* fontset /*none*/, Pango::FontsetForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void foreach_ (Pango::FontsetForeachFunc func) noexcept override;

// PangoFont* /*full*/ Fontset::get_font (PangoFontset* fontset /*none*/, guint wc);
// ::PangoFont* /*full*/ Fontset::get_font (::PangoFontset* fontset /*none*/, guint wc);
GI_INLINE_DECL Pango::Font get_font_ (guint wc) noexcept override;

// PangoLanguage* /*full*/ Fontset::get_language (PangoFontset* fontset /*none*/);
// ::PangoLanguage* /*full*/ Fontset::get_language (::PangoFontset* fontset /*none*/);
GI_INLINE_DECL Pango::Language get_language_ () noexcept override;

// PangoFontMetrics* /*full*/ Fontset::get_metrics (PangoFontset* fontset /*none*/);
// ::PangoFontMetrics* /*full*/ Fontset::get_metrics (::PangoFontset* fontset /*none*/);
GI_INLINE_DECL Pango::FontMetrics get_metrics_ () noexcept override;


};


struct FontsetClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontsetClass, foreach)
  GI_MEMBER_DEFINE(FontsetClass, get_font)
  GI_MEMBER_DEFINE(FontsetClass, get_language)
  GI_MEMBER_DEFINE(FontsetClass, get_metrics)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, foreach),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_language),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_metrics)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontsetImpl = detail::ObjectImpl<Fontset, internal::FontsetClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
