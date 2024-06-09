// AUTO-GENERATED

#ifndef _GI_GLIB_SOURCECALLBACKFUNCS_HPP_
#define _GI_GLIB_SOURCECALLBACKFUNCS_HPP_


namespace gi {

namespace repository {

namespace GLib {


class SourceCallbackFuncs;

namespace base {


#define GI_GLIB_SOURCECALLBACKFUNCS_BASE base::SourceCallbackFuncsBase
class SourceCallbackFuncsBase : public gi::detail::CBoxedWrapperBase<SourceCallbackFuncsBase, ::GSourceCallbackFuncs>
{
typedef gi::detail::CBoxedWrapperBase<SourceCallbackFuncsBase, ::GSourceCallbackFuncs> super_type;
public:

SourceCallbackFuncsBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/sourcecallbackfuncs_extra_def.hpp>)
#include <glib/sourcecallbackfuncs_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/sourcecallbackfuncs_extra.hpp>)
#include <glib/sourcecallbackfuncs_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class SourceCallbackFuncs_Ref;

class SourceCallbackFuncs : public gi::detail::CBoxedWrapper<SourceCallbackFuncs, ::GSourceCallbackFuncs, GI_GLIB_SOURCECALLBACKFUNCS_BASE, SourceCallbackFuncs_Ref>
{ typedef gi::detail::CBoxedWrapper<SourceCallbackFuncs, ::GSourceCallbackFuncs, GI_GLIB_SOURCECALLBACKFUNCS_BASE, SourceCallbackFuncs_Ref> super_type; using super_type::super_type; };


class SourceCallbackFuncs_Ref : public gi::detail::CBoxedRefWrapper<SourceCallbackFuncs, ::GSourceCallbackFuncs, GI_GLIB_SOURCECALLBACKFUNCS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<SourceCallbackFuncs, ::GSourceCallbackFuncs, GI_GLIB_SOURCECALLBACKFUNCS_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GSourceCallbackFuncs>
{ typedef GLib::SourceCallbackFuncs type; }; 

} // namespace repository

} // namespace gi

#endif
