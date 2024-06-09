// AUTO-GENERATED

#ifndef _GI_GDK_CAIROCONTEXT_HPP_
#define _GI_GDK_CAIROCONTEXT_HPP_

#include "drawcontext.hpp"

namespace gi {

namespace repository {

namespace Gdk {


class CairoContext;

namespace base {


#define GI_GDK_CAIROCONTEXT_BASE base::CairoContextBase
class CairoContextBase : public Gdk::DrawContext
{
typedef Gdk::DrawContext super_type;
public:
typedef ::GdkCairoContext BaseObjectType;

CairoContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_cairo_context_get_type(); } 

// cairo_t* /*full,nullable*/ gdk_cairo_context_cairo_create (GdkCairoContext* self /*none*/);
// ::cairo_t* /*full,nullable*/ gdk_cairo_context_cairo_create (::GdkCairoContext* self /*none*/);
GI_INLINE_DECL cairo::Context cairo_create () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cairocontext_extra_def.hpp>)
#include <gdk/cairocontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cairocontext_extra.hpp>)
#include <gdk/cairocontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class CairoContext : public GI_GDK_CAIROCONTEXT_BASE
{ typedef GI_GDK_CAIROCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkCairoContext>
{ typedef Gdk::CairoContext type; }; 

} // namespace repository

} // namespace gi

#endif
