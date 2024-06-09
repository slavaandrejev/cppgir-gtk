// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModulePattern_Ref;

class PixbufModulePattern;

namespace base {


#define GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE base::PixbufModulePatternBase
class PixbufModulePatternBase : public gi::detail::CBoxedWrapperBase<PixbufModulePatternBase, ::GdkPixbufModulePattern>
{
typedef gi::detail::CBoxedWrapperBase<PixbufModulePatternBase, ::GdkPixbufModulePattern> super_type;
public:

PixbufModulePatternBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj /*none*/);
// char* /*none*/ PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj /*none*/);
GI_INLINE_DECL gi::cstring_v prefix_ () const noexcept;

// char* /*none*/ PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj /*none*/);
// char* /*none*/ PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj /*none*/);
GI_INLINE_DECL gi::cstring_v mask_ () const noexcept;

// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj /*none*/);
// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj /*none*/);
GI_INLINE_DECL gint relevance_ () const noexcept;

//  PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj /*none*/, gint _value);
// void PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj /*none*/, gint _value);
GI_INLINE_DECL void relevance_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra_def.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModulePattern_Ref;

class PixbufModulePattern : public gi::detail::CBoxedWrapper<PixbufModulePattern, ::GdkPixbufModulePattern, GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE, PixbufModulePattern_Ref>
{ typedef gi::detail::CBoxedWrapper<PixbufModulePattern, ::GdkPixbufModulePattern, GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE, PixbufModulePattern_Ref> super_type; using super_type::super_type; };


class PixbufModulePattern_Ref : public gi::detail::CBoxedRefWrapper<PixbufModulePattern, ::GdkPixbufModulePattern, GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE>
{ typedef gi::detail::CBoxedRefWrapper<PixbufModulePattern, ::GdkPixbufModulePattern, GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE> super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufModulePattern>
{ typedef GdkPixbuf::PixbufModulePattern type; }; 

} // namespace repository

} // namespace gi

#endif
