// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFACE_HPP_
#define _GI_PANGO_FONTFACE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontDescription;
class FontDescription_Ref;
class FontFamily;

class FontFace;

namespace base {


#define GI_PANGO_FONTFACE_BASE base::FontFaceBase
class FontFaceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontFace BaseObjectType;

FontFaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_face_get_type(); } 

// PangoFontDescription* /*full*/ pango_font_face_describe (PangoFontFace* face /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_face_describe (::PangoFontFace* face /*none*/);
GI_INLINE_DECL Pango::FontDescription describe () noexcept;

// const char* /*none*/ pango_font_face_get_face_name (PangoFontFace* face /*none*/);
// const char* /*none*/ pango_font_face_get_face_name (::PangoFontFace* face /*none*/);
GI_INLINE_DECL gi::cstring_v get_face_name () noexcept;

// PangoFontFamily* /*none*/ pango_font_face_get_family (PangoFontFace* face /*none*/);
// ::PangoFontFamily* /*none*/ pango_font_face_get_family (::PangoFontFace* face /*none*/);
GI_INLINE_DECL Pango::FontFamily get_family () noexcept;

// gboolean pango_font_face_is_synthesized (PangoFontFace* face /*none*/);
// gboolean pango_font_face_is_synthesized (::PangoFontFace* face /*none*/);
GI_INLINE_DECL bool is_synthesized () noexcept;

// void pango_font_face_list_sizes (PangoFontFace* face /*none*/, int** sizes /*full,out,opt,nullable*/, int* n_sizes);
// void pango_font_face_list_sizes (::PangoFontFace* face /*none*/, gint** sizes /*full,out,opt,nullable*/, gint* n_sizes);
GI_INLINE_DECL void list_sizes (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes) noexcept;
GI_INLINE_DECL gi::Collection<gi::DSpan, gint, gi::transfer_full_t> list_sizes () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_def.hpp>)
#include <pango/fontface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontface_extra.hpp>)
#include <pango/fontface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontFace : public GI_PANGO_FONTFACE_BASE
{ typedef GI_PANGO_FONTFACE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontFace>
{ typedef Pango::FontFace type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontFaceClassDef
{
typedef FontFaceClassDef self;
public:
typedef Pango::FontFace instance_type;
typedef ::PangoFontFaceClass class_type;

using GI_MEMBER_CHECK_CONFLICT(describe) = self;
using GI_MEMBER_CHECK_CONFLICT(get_face_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_family) = self;
using GI_MEMBER_CHECK_CONFLICT(is_synthesized) = self;
using GI_MEMBER_CHECK_CONFLICT(list_sizes) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontFaceClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// PangoFontDescription* /*full*/ FontFace::describe (PangoFontFace* face /*none*/);
// ::PangoFontDescription* /*full*/ FontFace::describe (::PangoFontFace* face /*none*/);
virtual Pango::FontDescription describe_ () noexcept = 0;

// const char* /*none*/ FontFace::get_face_name (PangoFontFace* face /*none*/);
// const char* /*none*/ FontFace::get_face_name (::PangoFontFace* face /*none*/);
virtual gi::cstring_v get_face_name_ () noexcept = 0;

// PangoFontFamily* /*none*/ FontFace::get_family (PangoFontFace* face /*none*/);
// ::PangoFontFamily* /*none*/ FontFace::get_family (::PangoFontFace* face /*none*/);
virtual Pango::FontFamily get_family_ () noexcept = 0;

// gboolean FontFace::is_synthesized (PangoFontFace* face /*none*/);
// gboolean FontFace::is_synthesized (::PangoFontFace* face /*none*/);
virtual bool is_synthesized_ () noexcept = 0;

// void FontFace::list_sizes (PangoFontFace* face /*none*/, int** sizes /*full,out,opt,nullable*/, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face /*none*/, gint** sizes /*full,out,opt,nullable*/, gint* n_sizes);
virtual void list_sizes_ (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontFaceClass: public detail::ClassTemplate<Pango::impl::internal::FontFaceClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FontFaceClassDef;
typedef FontFaceClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontFaceClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// PangoFontDescription* /*full*/ FontFace::describe (PangoFontFace* face /*none*/);
// ::PangoFontDescription* /*full*/ FontFace::describe (::PangoFontFace* face /*none*/);
GI_INLINE_DECL Pango::FontDescription describe_ () noexcept override;

// const char* /*none*/ FontFace::get_face_name (PangoFontFace* face /*none*/);
// const char* /*none*/ FontFace::get_face_name (::PangoFontFace* face /*none*/);
GI_INLINE_DECL gi::cstring_v get_face_name_ () noexcept override;

// PangoFontFamily* /*none*/ FontFace::get_family (PangoFontFace* face /*none*/);
// ::PangoFontFamily* /*none*/ FontFace::get_family (::PangoFontFace* face /*none*/);
GI_INLINE_DECL Pango::FontFamily get_family_ () noexcept override;

// gboolean FontFace::is_synthesized (PangoFontFace* face /*none*/);
// gboolean FontFace::is_synthesized (::PangoFontFace* face /*none*/);
GI_INLINE_DECL bool is_synthesized_ () noexcept override;

// void FontFace::list_sizes (PangoFontFace* face /*none*/, int** sizes /*full,out,opt,nullable*/, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face /*none*/, gint** sizes /*full,out,opt,nullable*/, gint* n_sizes);
GI_INLINE_DECL void list_sizes_ (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes) noexcept override;


};


struct FontFaceClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontFaceClass, describe)
  GI_MEMBER_DEFINE(FontFaceClass, get_face_name)
  GI_MEMBER_DEFINE(FontFaceClass, get_family)
  GI_MEMBER_DEFINE(FontFaceClass, is_synthesized)
  GI_MEMBER_DEFINE(FontFaceClass, list_sizes)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, describe),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_face_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_family),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_synthesized),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, list_sizes)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontFaceImpl = detail::ObjectImpl<FontFace, internal::FontFaceClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
