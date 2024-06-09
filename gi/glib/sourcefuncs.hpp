// AUTO-GENERATED

#ifndef _GI_GLIB_SOURCEFUNCS_HPP_
#define _GI_GLIB_SOURCEFUNCS_HPP_


namespace gi {

namespace repository {

namespace GLib {


class SourceFuncs;

namespace base {


#define GI_GLIB_SOURCEFUNCS_BASE base::SourceFuncsBase
class SourceFuncsBase : public gi::detail::CBoxedWrapperBase<SourceFuncsBase, ::GSourceFuncs>
{
typedef gi::detail::CBoxedWrapperBase<SourceFuncsBase, ::GSourceFuncs> super_type;
public:

SourceFuncsBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/sourcefuncs_extra_def.hpp>)
#include <glib/sourcefuncs_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/sourcefuncs_extra.hpp>)
#include <glib/sourcefuncs_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class SourceFuncs_Ref;

class SourceFuncs : public gi::detail::CBoxedWrapper<SourceFuncs, ::GSourceFuncs, GI_GLIB_SOURCEFUNCS_BASE, SourceFuncs_Ref>
{ typedef gi::detail::CBoxedWrapper<SourceFuncs, ::GSourceFuncs, GI_GLIB_SOURCEFUNCS_BASE, SourceFuncs_Ref> super_type; using super_type::super_type; };


class SourceFuncs_Ref : public gi::detail::CBoxedRefWrapper<SourceFuncs, ::GSourceFuncs, GI_GLIB_SOURCEFUNCS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<SourceFuncs, ::GSourceFuncs, GI_GLIB_SOURCEFUNCS_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GSourceFuncs>
{ typedef GLib::SourceFuncs type; }; 

} // namespace repository

} // namespace gi

#endif
