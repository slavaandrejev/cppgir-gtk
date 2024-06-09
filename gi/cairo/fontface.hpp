// AUTO-GENERATED

#ifndef _GI_CAIRO_FONTFACE_HPP_
#define _GI_CAIRO_FONTFACE_HPP_


namespace gi {

namespace repository {

namespace cairo {


class FontFace;

namespace base {


#define GI_CAIRO_FONTFACE_BASE base::FontFaceBase
class FontFaceBase : public gi::detail::GBoxedWrapperBase<FontFaceBase, ::cairo_font_face_t>
{
typedef gi::detail::GBoxedWrapperBase<FontFaceBase, ::cairo_font_face_t> super_type;
public:

FontFaceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_font_face_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/fontface_extra_def.hpp>)
#include <cairo/fontface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/fontface_extra.hpp>)
#include <cairo/fontface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class FontFace_Ref;

class FontFace : public gi::detail::GBoxedWrapper<FontFace, ::cairo_font_face_t, GI_CAIRO_FONTFACE_BASE, FontFace_Ref>
{ typedef gi::detail::GBoxedWrapper<FontFace, ::cairo_font_face_t, GI_CAIRO_FONTFACE_BASE, FontFace_Ref> super_type; using super_type::super_type; };


class FontFace_Ref : public gi::detail::GBoxedRefWrapper<FontFace, ::cairo_font_face_t, GI_CAIRO_FONTFACE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FontFace, ::cairo_font_face_t, GI_CAIRO_FONTFACE_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_font_face_t>
{ typedef cairo::FontFace type; }; 

} // namespace repository

} // namespace gi

#endif
