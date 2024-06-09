// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMAP_HPP_
#define _GI_PANGO_FONTMAP_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Context;
class Font;
class FontDescription;
class FontDescription_Ref;
class FontFamily;
class Fontset;
class Language;
class Language_Ref;

class FontMap;

namespace base {


#define GI_PANGO_FONTMAP_BASE base::FontMapBase
class FontMapBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontMap BaseObjectType;

FontMapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_map_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// void pango_font_map_changed (PangoFontMap* fontmap /*none*/);
// void pango_font_map_changed (::PangoFontMap* fontmap /*none*/);
GI_INLINE_DECL void changed () noexcept;

// PangoContext* /*full*/ pango_font_map_create_context (PangoFontMap* fontmap /*none*/);
// ::PangoContext* /*full*/ pango_font_map_create_context (::PangoFontMap* fontmap /*none*/);
GI_INLINE_DECL Pango::Context create_context () noexcept;

// PangoFontFamily* /*none*/ pango_font_map_get_family (PangoFontMap* fontmap /*none*/, const char* name /*none*/);
// ::PangoFontFamily* /*none*/ pango_font_map_get_family (::PangoFontMap* fontmap /*none*/, const char* name /*none*/);
GI_INLINE_DECL Pango::FontFamily get_family (const gi::cstring_v name) noexcept;

// guint pango_font_map_get_serial (PangoFontMap* fontmap /*none*/);
// guint pango_font_map_get_serial (::PangoFontMap* fontmap /*none*/);
GI_INLINE_DECL guint get_serial () noexcept;

// void pango_font_map_list_families (PangoFontMap* fontmap /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void pango_font_map_list_families (::PangoFontMap* fontmap /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
GI_INLINE_DECL void list_families (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept;
GI_INLINE_DECL gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> list_families () noexcept;

// PangoFont* /*full,nullable*/ pango_font_map_load_font (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ pango_font_map_load_font (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Font load_font (Pango::Context context, const Pango::FontDescription_Ref desc) noexcept;

// PangoFontset* /*full,nullable*/ pango_font_map_load_fontset (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ pango_font_map_load_fontset (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL Pango::Fontset load_fontset (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept;

gi::property_proxy<GType, base::FontMapBase> property_item_type()
{ return gi::property_proxy<GType, base::FontMapBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::FontMapBase> property_item_type() const
{ return gi::property_proxy<GType, base::FontMapBase> (*this, "item-type"); }

gi::property_proxy<guint, base::FontMapBase> property_n_items()
{ return gi::property_proxy<guint, base::FontMapBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::FontMapBase> property_n_items() const
{ return gi::property_proxy<guint, base::FontMapBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_def.hpp>)
#include <pango/fontmap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra.hpp>)
#include <pango/fontmap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontMap : public GI_PANGO_FONTMAP_BASE
{ typedef GI_PANGO_FONTMAP_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontMap>
{ typedef Pango::FontMap type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontMapClassDef
{
typedef FontMapClassDef self;
public:
typedef Pango::FontMap instance_type;
typedef ::PangoFontMapClass class_type;

using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(get_family) = self;
using GI_MEMBER_CHECK_CONFLICT(get_serial) = self;
using GI_MEMBER_CHECK_CONFLICT(list_families) = self;
using GI_MEMBER_CHECK_CONFLICT(load_font) = self;
using GI_MEMBER_CHECK_CONFLICT(load_fontset) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontMapClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FontMap::changed (PangoFontMap* fontmap /*none*/);
// void FontMap::changed (::PangoFontMap* fontmap /*none*/);
virtual void changed_ () noexcept = 0;

// PangoFontFamily* /*none*/ FontMap::get_family (PangoFontMap* fontmap /*none*/, const char* name /*none*/);
// ::PangoFontFamily* /*none*/ FontMap::get_family (::PangoFontMap* fontmap /*none*/, const char* name /*none*/);
virtual Pango::FontFamily get_family_ (const gi::cstring_v name) noexcept = 0;

// guint FontMap::get_serial (PangoFontMap* fontmap /*none*/);
// guint FontMap::get_serial (::PangoFontMap* fontmap /*none*/);
virtual guint get_serial_ () noexcept = 0;

// void FontMap::list_families (PangoFontMap* fontmap /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
virtual void list_families_ (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept = 0;

// PangoFont* /*full,nullable*/ FontMap::load_font (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ FontMap::load_font (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
virtual Pango::Font load_font_ (Pango::Context context, const Pango::FontDescription_Ref desc) noexcept = 0;

// PangoFontset* /*full,nullable*/ FontMap::load_fontset (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ FontMap::load_fontset (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
virtual Pango::Fontset load_fontset_ (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontMapClass: public detail::ClassTemplate<Pango::impl::internal::FontMapClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::FontMapClassDef;
typedef FontMapClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontMapClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;


// void FontMap::changed (PangoFontMap* fontmap /*none*/);
// void FontMap::changed (::PangoFontMap* fontmap /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// PangoFontFamily* /*none*/ FontMap::get_family (PangoFontMap* fontmap /*none*/, const char* name /*none*/);
// ::PangoFontFamily* /*none*/ FontMap::get_family (::PangoFontMap* fontmap /*none*/, const char* name /*none*/);
GI_INLINE_DECL Pango::FontFamily get_family_ (const gi::cstring_v name) noexcept override;

// guint FontMap::get_serial (PangoFontMap* fontmap /*none*/);
// guint FontMap::get_serial (::PangoFontMap* fontmap /*none*/);
GI_INLINE_DECL guint get_serial_ () noexcept override;

// void FontMap::list_families (PangoFontMap* fontmap /*none*/, PangoFontFamily*** families /*container,out*/, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap /*none*/, ::PangoFontFamily*** families /*container,out*/, gint* n_families);
GI_INLINE_DECL void list_families_ (gi::Collection<gi::DSpan, ::PangoFontFamily*, gi::transfer_container_t> & families) noexcept override;

// PangoFont* /*full,nullable*/ FontMap::load_font (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/);
// ::PangoFont* /*full,nullable*/ FontMap::load_font (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/);
GI_INLINE_DECL Pango::Font load_font_ (Pango::Context context, const Pango::FontDescription_Ref desc) noexcept override;

// PangoFontset* /*full,nullable*/ FontMap::load_fontset (PangoFontMap* fontmap /*none*/, PangoContext* context /*none*/, const PangoFontDescription* desc /*none*/, PangoLanguage* language /*none*/);
// ::PangoFontset* /*full,nullable*/ FontMap::load_fontset (::PangoFontMap* fontmap /*none*/, ::PangoContext* context /*none*/, const ::PangoFontDescription* desc /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL Pango::Fontset load_fontset_ (Pango::Context context, const Pango::FontDescription_Ref desc, Pango::Language_Ref language) noexcept override;


};


struct FontMapClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontMapClass, changed)
  GI_MEMBER_DEFINE(FontMapClass, get_family)
  GI_MEMBER_DEFINE(FontMapClass, get_serial)
  GI_MEMBER_DEFINE(FontMapClass, list_families)
  GI_MEMBER_DEFINE(FontMapClass, load_font)
  GI_MEMBER_DEFINE(FontMapClass, load_fontset)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_family),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_serial),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, list_families),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load_font),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load_fontset)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontMapImpl = detail::ObjectImpl<FontMap, internal::FontMapClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
