// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHINFO_HPP_
#define _GI_PANGO_GLYPHINFO_HPP_


namespace gi {

namespace repository {

namespace Pango {

class GlyphInfo_Ref;

class GlyphInfo;

namespace base {


#define GI_PANGO_GLYPHINFO_BASE base::GlyphInfoBase
class GlyphInfoBase : public gi::detail::CBoxedWrapperBase<GlyphInfoBase, ::PangoGlyphInfo>
{
typedef gi::detail::CBoxedWrapperBase<GlyphInfoBase, ::PangoGlyphInfo> super_type;
public:

GlyphInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj /*none*/);
// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj /*none*/);
GI_INLINE_DECL Pango::Glyph glyph_ () const noexcept;

//  GlyphInfo::glyph (::PangoGlyphInfo* obj /*none*/, ::PangoGlyph _value);
// void GlyphInfo::glyph (::PangoGlyphInfo* obj /*none*/, ::PangoGlyph _value);
GI_INLINE_DECL void glyph_ (::PangoGlyph _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra_def.hpp>)
#include <pango/glyphinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra.hpp>)
#include <pango/glyphinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphInfo_Ref;

class GlyphInfo : public gi::detail::CBoxedWrapper<GlyphInfo, ::PangoGlyphInfo, GI_PANGO_GLYPHINFO_BASE, GlyphInfo_Ref>
{ typedef gi::detail::CBoxedWrapper<GlyphInfo, ::PangoGlyphInfo, GI_PANGO_GLYPHINFO_BASE, GlyphInfo_Ref> super_type; using super_type::super_type; };


class GlyphInfo_Ref : public gi::detail::CBoxedRefWrapper<GlyphInfo, ::PangoGlyphInfo, GI_PANGO_GLYPHINFO_BASE>
{ typedef gi::detail::CBoxedRefWrapper<GlyphInfo, ::PangoGlyphInfo, GI_PANGO_GLYPHINFO_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphInfo>
{ typedef Pango::GlyphInfo type; }; 

} // namespace repository

} // namespace gi

#endif
