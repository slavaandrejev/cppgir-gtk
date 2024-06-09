// AUTO-GENERATED

#ifndef _GI_GDK_RGBA_HPP_
#define _GI_GDK_RGBA_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class RGBA_Ref;

class RGBA;

namespace base {


#define GI_GDK_RGBA_BASE base::RGBABase
class RGBABase : public gi::detail::GBoxedWrapperBase<RGBABase, ::GdkRGBA>
{
typedef gi::detail::GBoxedWrapperBase<RGBABase, ::GdkRGBA> super_type;
public:

RGBABase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_rgba_get_type(); } 

// gfloat RGBA::red (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::red (const ::GdkRGBA* obj /*none*/);
GI_INLINE_DECL gfloat red_ () const noexcept;

//  RGBA::red (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::red (::GdkRGBA* obj /*none*/, gfloat _value);
GI_INLINE_DECL void red_ (gfloat _value) noexcept;

// gfloat RGBA::green (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::green (const ::GdkRGBA* obj /*none*/);
GI_INLINE_DECL gfloat green_ () const noexcept;

//  RGBA::green (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::green (::GdkRGBA* obj /*none*/, gfloat _value);
GI_INLINE_DECL void green_ (gfloat _value) noexcept;

// gfloat RGBA::blue (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::blue (const ::GdkRGBA* obj /*none*/);
GI_INLINE_DECL gfloat blue_ () const noexcept;

//  RGBA::blue (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::blue (::GdkRGBA* obj /*none*/, gfloat _value);
GI_INLINE_DECL void blue_ (gfloat _value) noexcept;

// gfloat RGBA::alpha (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::alpha (const ::GdkRGBA* obj /*none*/);
GI_INLINE_DECL gfloat alpha_ () const noexcept;

//  RGBA::alpha (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::alpha (::GdkRGBA* obj /*none*/, gfloat _value);
GI_INLINE_DECL void alpha_ (gfloat _value) noexcept;

// GdkRGBA* /*full*/ gdk_rgba_copy (const GdkRGBA* rgba /*none*/);
// ::GdkRGBA* /*full*/ gdk_rgba_copy (const ::GdkRGBA* rgba /*none*/);
GI_INLINE_DECL Gdk::RGBA copy () const noexcept;

// gboolean gdk_rgba_equal (gconstpointer p1 /*none*/, gconstpointer p2 /*none*/);
// gboolean gdk_rgba_equal (const ::GdkRGBA* p1 /*none*/, const ::GdkRGBA* p2 /*none*/);
GI_INLINE_DECL bool equal (const Gdk::RGBA_Ref p2) const noexcept;

// void gdk_rgba_free (GdkRGBA* rgba /*none*/);
// void gdk_rgba_free (::GdkRGBA* rgba /*none*/);
// IGNORE; marked ignore

// guint gdk_rgba_hash (gconstpointer p /*none*/);
// guint gdk_rgba_hash (const ::GdkRGBA* p /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean gdk_rgba_is_clear (const GdkRGBA* rgba /*none*/);
// gboolean gdk_rgba_is_clear (const ::GdkRGBA* rgba /*none*/);
GI_INLINE_DECL bool is_clear () const noexcept;

// gboolean gdk_rgba_is_opaque (const GdkRGBA* rgba /*none*/);
// gboolean gdk_rgba_is_opaque (const ::GdkRGBA* rgba /*none*/);
GI_INLINE_DECL bool is_opaque () const noexcept;

// gboolean gdk_rgba_parse (GdkRGBA* rgba /*none*/, const char* spec /*none*/);
// gboolean gdk_rgba_parse (::GdkRGBA* rgba /*none*/, const char* spec /*none*/);
GI_INLINE_DECL bool parse (const gi::cstring_v spec) noexcept;

// char* /*full*/ gdk_rgba_to_string (const GdkRGBA* rgba /*none*/);
// char* /*full*/ gdk_rgba_to_string (const ::GdkRGBA* rgba /*none*/);
GI_INLINE_DECL gi::cstring to_string () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_def.hpp>)
#include <gdk/rgba_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra.hpp>)
#include <gdk/rgba_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class RGBA_Ref;

class RGBA : public gi::detail::GBoxedWrapper<RGBA, ::GdkRGBA, GI_GDK_RGBA_BASE, RGBA_Ref>
{ typedef gi::detail::GBoxedWrapper<RGBA, ::GdkRGBA, GI_GDK_RGBA_BASE, RGBA_Ref> super_type; using super_type::super_type; };


class RGBA_Ref : public gi::detail::GBoxedRefWrapper<RGBA, ::GdkRGBA, GI_GDK_RGBA_BASE>
{ typedef gi::detail::GBoxedRefWrapper<RGBA, ::GdkRGBA, GI_GDK_RGBA_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkRGBA>
{ typedef Gdk::RGBA type; }; 

} // namespace repository

} // namespace gi

#endif
