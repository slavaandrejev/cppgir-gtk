// AUTO-GENERATED

#ifndef _GI_GLIB_UNIXPIPE_HPP_
#define _GI_GLIB_UNIXPIPE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class UnixPipe;

namespace base {


#define GI_GLIB_UNIXPIPE_BASE base::UnixPipeBase
class UnixPipeBase : public gi::detail::CBoxedWrapperBase<UnixPipeBase, ::GUnixPipe>
{
typedef gi::detail::CBoxedWrapperBase<UnixPipeBase, ::GUnixPipe> super_type;
public:

UnixPipeBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/unixpipe_extra_def.hpp>)
#include <glib/unixpipe_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/unixpipe_extra.hpp>)
#include <glib/unixpipe_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class UnixPipe_Ref;

class UnixPipe : public gi::detail::CBoxedWrapper<UnixPipe, ::GUnixPipe, GI_GLIB_UNIXPIPE_BASE, UnixPipe_Ref>
{ typedef gi::detail::CBoxedWrapper<UnixPipe, ::GUnixPipe, GI_GLIB_UNIXPIPE_BASE, UnixPipe_Ref> super_type; using super_type::super_type; };


class UnixPipe_Ref : public gi::detail::CBoxedRefWrapper<UnixPipe, ::GUnixPipe, GI_GLIB_UNIXPIPE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<UnixPipe, ::GUnixPipe, GI_GLIB_UNIXPIPE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GUnixPipe>
{ typedef GLib::UnixPipe type; }; 

} // namespace repository

} // namespace gi

#endif
