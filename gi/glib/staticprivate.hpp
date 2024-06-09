// AUTO-GENERATED

#ifndef _GI_GLIB_STATICPRIVATE_HPP_
#define _GI_GLIB_STATICPRIVATE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class StaticPrivate_Ref;

class StaticPrivate;

namespace base {


#define GI_GLIB_STATICPRIVATE_BASE base::StaticPrivateBase
class StaticPrivateBase : public gi::detail::CBoxedWrapperBase<StaticPrivateBase, ::GStaticPrivate>
{
typedef gi::detail::CBoxedWrapperBase<StaticPrivateBase, ::GStaticPrivate> super_type;
public:

StaticPrivateBase (std::nullptr_t = nullptr) : super_type() {}

// void g_static_private_free (GStaticPrivate* private_key /*none*/);
// void g_static_private_free (::GStaticPrivate* private_key /*none*/);
// IGNORE; marked ignore

// gpointer g_static_private_get (GStaticPrivate* private_key /*none*/);
// void* g_static_private_get (::GStaticPrivate* private_key /*none*/);
GI_INLINE_DECL gpointer get () noexcept;

// void g_static_private_init (GStaticPrivate* private_key /*none*/);
// void g_static_private_init (::GStaticPrivate* private_key /*none*/);
GI_INLINE_DECL void init () noexcept;

// void g_static_private_set (GStaticPrivate* private_key /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void g_static_private_set (::GStaticPrivate* private_key /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/staticprivate_extra_def.hpp>)
#include <glib/staticprivate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/staticprivate_extra.hpp>)
#include <glib/staticprivate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class StaticPrivate_Ref;

class StaticPrivate : public gi::detail::CBoxedWrapper<StaticPrivate, ::GStaticPrivate, GI_GLIB_STATICPRIVATE_BASE, StaticPrivate_Ref>
{ typedef gi::detail::CBoxedWrapper<StaticPrivate, ::GStaticPrivate, GI_GLIB_STATICPRIVATE_BASE, StaticPrivate_Ref> super_type; using super_type::super_type; };


class StaticPrivate_Ref : public gi::detail::CBoxedRefWrapper<StaticPrivate, ::GStaticPrivate, GI_GLIB_STATICPRIVATE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<StaticPrivate, ::GStaticPrivate, GI_GLIB_STATICPRIVATE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GStaticPrivate>
{ typedef GLib::StaticPrivate type; }; 

} // namespace repository

} // namespace gi

#endif
