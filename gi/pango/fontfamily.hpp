// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFAMILY_HPP_
#define _GI_PANGO_FONTFAMILY_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontFace;

class FontFamily;

namespace base {


#define GI_PANGO_FONTFAMILY_BASE base::FontFamilyBase
class FontFamilyBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontFamily BaseObjectType;

FontFamilyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_family_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// PangoFontFace* /*none,nullable*/ pango_font_family_get_face (PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
// ::PangoFontFace* /*none,nullable*/ pango_font_family_get_face (::PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL Pango::FontFace get_face (const gi::cstring_v name) noexcept;
GI_INLINE_DECL Pango::FontFace get_face () noexcept;

// const char* /*none*/ pango_font_family_get_name (PangoFontFamily* family /*none*/);
// const char* /*none*/ pango_font_family_get_name (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean pango_font_family_is_monospace (PangoFontFamily* family /*none*/);
// gboolean pango_font_family_is_monospace (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL bool is_monospace () noexcept;

// gboolean pango_font_family_is_variable (PangoFontFamily* family /*none*/);
// gboolean pango_font_family_is_variable (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL bool is_variable () noexcept;

// void pango_font_family_list_faces (PangoFontFamily* family /*none*/, PangoFontFace*** faces /*container,out,opt*/, int* n_faces);
// void pango_font_family_list_faces (::PangoFontFamily* family /*none*/, ::PangoFontFace*** faces /*container,out,opt*/, gint* n_faces);
GI_INLINE_DECL void list_faces (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces) noexcept;
GI_INLINE_DECL gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> list_faces () noexcept;

gi::property_proxy<GType, base::FontFamilyBase> property_item_type()
{ return gi::property_proxy<GType, base::FontFamilyBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::FontFamilyBase> property_item_type() const
{ return gi::property_proxy<GType, base::FontFamilyBase> (*this, "item-type"); }

gi::property_proxy<guint, base::FontFamilyBase> property_n_items()
{ return gi::property_proxy<guint, base::FontFamilyBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::FontFamilyBase> property_n_items() const
{ return gi::property_proxy<guint, base::FontFamilyBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_def.hpp>)
#include <pango/fontfamily_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra.hpp>)
#include <pango/fontfamily_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontFamily : public GI_PANGO_FONTFAMILY_BASE
{ typedef GI_PANGO_FONTFAMILY_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontFamily>
{ typedef Pango::FontFamily type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontFamilyClassDef
{
typedef FontFamilyClassDef self;
public:
typedef Pango::FontFamily instance_type;
typedef ::PangoFontFamilyClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_face) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(is_monospace) = self;
using GI_MEMBER_CHECK_CONFLICT(is_variable) = self;
using GI_MEMBER_CHECK_CONFLICT(list_faces) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontFamilyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// PangoFontFace* /*none,nullable*/ FontFamily::get_face (PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
// ::PangoFontFace* /*none,nullable*/ FontFamily::get_face (::PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
virtual Pango::FontFace get_face_ (const gi::cstring_v name) noexcept = 0;

// const char* /*none*/ FontFamily::get_name (PangoFontFamily* family /*none*/);
// const char* /*none*/ FontFamily::get_name (::PangoFontFamily* family /*none*/);
virtual gi::cstring_v get_name_ () noexcept = 0;

// gboolean FontFamily::is_monospace (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family /*none*/);
virtual bool is_monospace_ () noexcept = 0;

// gboolean FontFamily::is_variable (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_variable (::PangoFontFamily* family /*none*/);
virtual bool is_variable_ () noexcept = 0;

// void FontFamily::list_faces (PangoFontFamily* family /*none*/, PangoFontFace*** faces /*container,out,opt*/, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family /*none*/, ::PangoFontFace*** faces /*container,out,opt*/, gint* n_faces);
virtual void list_faces_ (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontFamilyClass: public detail::ClassTemplate<Pango::impl::internal::FontFamilyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::FontFamilyClassDef;
typedef FontFamilyClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontFamilyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;


// PangoFontFace* /*none,nullable*/ FontFamily::get_face (PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
// ::PangoFontFace* /*none,nullable*/ FontFamily::get_face (::PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL Pango::FontFace get_face_ (const gi::cstring_v name) noexcept override;

// const char* /*none*/ FontFamily::get_name (PangoFontFamily* family /*none*/);
// const char* /*none*/ FontFamily::get_name (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL gi::cstring_v get_name_ () noexcept override;

// gboolean FontFamily::is_monospace (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL bool is_monospace_ () noexcept override;

// gboolean FontFamily::is_variable (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_variable (::PangoFontFamily* family /*none*/);
GI_INLINE_DECL bool is_variable_ () noexcept override;

// void FontFamily::list_faces (PangoFontFamily* family /*none*/, PangoFontFace*** faces /*container,out,opt*/, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family /*none*/, ::PangoFontFace*** faces /*container,out,opt*/, gint* n_faces);
GI_INLINE_DECL void list_faces_ (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces) noexcept override;


};


struct FontFamilyClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontFamilyClass, get_face)
  GI_MEMBER_DEFINE(FontFamilyClass, get_name)
  GI_MEMBER_DEFINE(FontFamilyClass, is_monospace)
  GI_MEMBER_DEFINE(FontFamilyClass, is_variable)
  GI_MEMBER_DEFINE(FontFamilyClass, list_faces)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_face),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_monospace),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_variable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, list_faces)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontFamilyImpl = detail::ObjectImpl<FontFamily, internal::FontFamilyClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
