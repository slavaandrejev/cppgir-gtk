// AUTO-GENERATED

#ifndef _GI_CAIRO_CONTEXT_HPP_
#define _GI_CAIRO_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Context;

namespace base {


#define GI_CAIRO_CONTEXT_BASE base::ContextBase
class ContextBase : public gi::detail::GBoxedWrapperBase<ContextBase, ::cairo_t>
{
typedef gi::detail::GBoxedWrapperBase<ContextBase, ::cairo_t> super_type;
public:

ContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_context_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/context_extra_def.hpp>)
#include <cairo/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/context_extra.hpp>)
#include <cairo/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Context_Ref;

class Context : public gi::detail::GBoxedWrapper<Context, ::cairo_t, GI_CAIRO_CONTEXT_BASE, Context_Ref>
{ typedef gi::detail::GBoxedWrapper<Context, ::cairo_t, GI_CAIRO_CONTEXT_BASE, Context_Ref> super_type; using super_type::super_type; };


class Context_Ref : public gi::detail::GBoxedRefWrapper<Context, ::cairo_t, GI_CAIRO_CONTEXT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Context, ::cairo_t, GI_CAIRO_CONTEXT_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_t>
{ typedef cairo::Context type; }; 

} // namespace repository

} // namespace gi

#endif
