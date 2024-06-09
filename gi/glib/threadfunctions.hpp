// AUTO-GENERATED

#ifndef _GI_GLIB_THREADFUNCTIONS_HPP_
#define _GI_GLIB_THREADFUNCTIONS_HPP_


namespace gi {

namespace repository {

namespace GLib {


class ThreadFunctions;

namespace base {


#define GI_GLIB_THREADFUNCTIONS_BASE base::ThreadFunctionsBase
class ThreadFunctionsBase : public gi::detail::CBoxedWrapperBase<ThreadFunctionsBase, ::GThreadFunctions>
{
typedef gi::detail::CBoxedWrapperBase<ThreadFunctionsBase, ::GThreadFunctions> super_type;
public:

ThreadFunctionsBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/threadfunctions_extra_def.hpp>)
#include <glib/threadfunctions_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/threadfunctions_extra.hpp>)
#include <glib/threadfunctions_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class ThreadFunctions_Ref;

class ThreadFunctions : public gi::detail::CBoxedWrapper<ThreadFunctions, ::GThreadFunctions, GI_GLIB_THREADFUNCTIONS_BASE, ThreadFunctions_Ref>
{ typedef gi::detail::CBoxedWrapper<ThreadFunctions, ::GThreadFunctions, GI_GLIB_THREADFUNCTIONS_BASE, ThreadFunctions_Ref> super_type; using super_type::super_type; };


class ThreadFunctions_Ref : public gi::detail::CBoxedRefWrapper<ThreadFunctions, ::GThreadFunctions, GI_GLIB_THREADFUNCTIONS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ThreadFunctions, ::GThreadFunctions, GI_GLIB_THREADFUNCTIONS_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GThreadFunctions>
{ typedef GLib::ThreadFunctions type; }; 

} // namespace repository

} // namespace gi

#endif
