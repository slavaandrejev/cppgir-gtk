// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHVISATTR_HPP_
#define _GI_PANGO_GLYPHVISATTR_HPP_


namespace gi {

namespace repository {

namespace Pango {

class GlyphVisAttr_Ref;

class GlyphVisAttr;

namespace base {


#define GI_PANGO_GLYPHVISATTR_BASE base::GlyphVisAttrBase
class GlyphVisAttrBase : public gi::detail::CBoxedWrapperBase<GlyphVisAttrBase, ::PangoGlyphVisAttr>
{
typedef gi::detail::CBoxedWrapperBase<GlyphVisAttrBase, ::PangoGlyphVisAttr> super_type;
public:

GlyphVisAttrBase (std::nullptr_t = nullptr) : super_type() {}

// guint GlyphVisAttr::is_cluster_start (const ::PangoGlyphVisAttr* obj /*none*/);
// guint GlyphVisAttr::is_cluster_start (const ::PangoGlyphVisAttr* obj /*none*/);
GI_INLINE_DECL guint is_cluster_start_ () const noexcept;

//  GlyphVisAttr::is_cluster_start (::PangoGlyphVisAttr* obj /*none*/, guint _value);
// void GlyphVisAttr::is_cluster_start (::PangoGlyphVisAttr* obj /*none*/, guint _value);
GI_INLINE_DECL void is_cluster_start_ (guint _value) noexcept;

// guint GlyphVisAttr::is_color (const ::PangoGlyphVisAttr* obj /*none*/);
// guint GlyphVisAttr::is_color (const ::PangoGlyphVisAttr* obj /*none*/);
GI_INLINE_DECL guint is_color_ () const noexcept;

//  GlyphVisAttr::is_color (::PangoGlyphVisAttr* obj /*none*/, guint _value);
// void GlyphVisAttr::is_color (::PangoGlyphVisAttr* obj /*none*/, guint _value);
GI_INLINE_DECL void is_color_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphvisattr_extra_def.hpp>)
#include <pango/glyphvisattr_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphvisattr_extra.hpp>)
#include <pango/glyphvisattr_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphVisAttr_Ref;

class GlyphVisAttr : public gi::detail::CBoxedWrapper<GlyphVisAttr, ::PangoGlyphVisAttr, GI_PANGO_GLYPHVISATTR_BASE, GlyphVisAttr_Ref>
{ typedef gi::detail::CBoxedWrapper<GlyphVisAttr, ::PangoGlyphVisAttr, GI_PANGO_GLYPHVISATTR_BASE, GlyphVisAttr_Ref> super_type; using super_type::super_type; };


class GlyphVisAttr_Ref : public gi::detail::CBoxedRefWrapper<GlyphVisAttr, ::PangoGlyphVisAttr, GI_PANGO_GLYPHVISATTR_BASE>
{ typedef gi::detail::CBoxedRefWrapper<GlyphVisAttr, ::PangoGlyphVisAttr, GI_PANGO_GLYPHVISATTR_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphVisAttr>
{ typedef Pango::GlyphVisAttr type; }; 

} // namespace repository

} // namespace gi

#endif
