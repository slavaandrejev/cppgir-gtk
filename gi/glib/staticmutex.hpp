// AUTO-GENERATED

#ifndef _GI_GLIB_STATICMUTEX_HPP_
#define _GI_GLIB_STATICMUTEX_HPP_


namespace gi {

namespace repository {

namespace GLib {

class StaticMutex_Ref;

class StaticMutex;

namespace base {


#define GI_GLIB_STATICMUTEX_BASE base::StaticMutexBase
class StaticMutexBase : public gi::detail::CBoxedWrapperBase<StaticMutexBase, ::GStaticMutex>
{
typedef gi::detail::CBoxedWrapperBase<StaticMutexBase, ::GStaticMutex> super_type;
public:

StaticMutexBase (std::nullptr_t = nullptr) : super_type() {}

// void g_static_mutex_free (GStaticMutex* mutex /*none*/);
// void g_static_mutex_free (::GStaticMutex* mutex /*none*/);
// IGNORE; marked ignore

// FAILURE on g_static_mutex_get_mutex_impl; No such node (<xmlattr>.transfer-ownership)
// void g_static_mutex_init (GStaticMutex* mutex /*none*/);
// void g_static_mutex_init (::GStaticMutex* mutex /*none*/);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/staticmutex_extra_def.hpp>)
#include <glib/staticmutex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/staticmutex_extra.hpp>)
#include <glib/staticmutex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class StaticMutex_Ref;

class StaticMutex : public gi::detail::CBoxedWrapper<StaticMutex, ::GStaticMutex, GI_GLIB_STATICMUTEX_BASE, StaticMutex_Ref>
{ typedef gi::detail::CBoxedWrapper<StaticMutex, ::GStaticMutex, GI_GLIB_STATICMUTEX_BASE, StaticMutex_Ref> super_type; using super_type::super_type; };


class StaticMutex_Ref : public gi::detail::CBoxedRefWrapper<StaticMutex, ::GStaticMutex, GI_GLIB_STATICMUTEX_BASE>
{ typedef gi::detail::CBoxedRefWrapper<StaticMutex, ::GStaticMutex, GI_GLIB_STATICMUTEX_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GStaticMutex>
{ typedef GLib::StaticMutex type; }; 

} // namespace repository

} // namespace gi

#endif
