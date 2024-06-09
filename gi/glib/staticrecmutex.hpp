// AUTO-GENERATED

#ifndef _GI_GLIB_STATICRECMUTEX_HPP_
#define _GI_GLIB_STATICRECMUTEX_HPP_


namespace gi {

namespace repository {

namespace GLib {

class StaticRecMutex_Ref;

class StaticRecMutex;

namespace base {


#define GI_GLIB_STATICRECMUTEX_BASE base::StaticRecMutexBase
class StaticRecMutexBase : public gi::detail::CBoxedWrapperBase<StaticRecMutexBase, ::GStaticRecMutex>
{
typedef gi::detail::CBoxedWrapperBase<StaticRecMutexBase, ::GStaticRecMutex> super_type;
public:

StaticRecMutexBase (std::nullptr_t = nullptr) : super_type() {}

// void g_static_rec_mutex_free (GStaticRecMutex* mutex /*none*/);
// void g_static_rec_mutex_free (::GStaticRecMutex* mutex /*none*/);
// IGNORE; marked ignore

// void g_static_rec_mutex_init (GStaticRecMutex* mutex /*none*/);
// void g_static_rec_mutex_init (::GStaticRecMutex* mutex /*none*/);
// IGNORE; deprecated

// void g_static_rec_mutex_lock (GStaticRecMutex* mutex /*none*/);
// void g_static_rec_mutex_lock (::GStaticRecMutex* mutex /*none*/);
// IGNORE; deprecated

// void g_static_rec_mutex_lock_full (GStaticRecMutex* mutex /*none*/, guint depth);
// void g_static_rec_mutex_lock_full (::GStaticRecMutex* mutex /*none*/, guint depth);
// IGNORE; deprecated

// gboolean g_static_rec_mutex_trylock (GStaticRecMutex* mutex /*none*/);
// gboolean g_static_rec_mutex_trylock (::GStaticRecMutex* mutex /*none*/);
// IGNORE; deprecated

// void g_static_rec_mutex_unlock (GStaticRecMutex* mutex /*none*/);
// void g_static_rec_mutex_unlock (::GStaticRecMutex* mutex /*none*/);
// IGNORE; deprecated

// guint g_static_rec_mutex_unlock_full (GStaticRecMutex* mutex /*none*/);
// guint g_static_rec_mutex_unlock_full (::GStaticRecMutex* mutex /*none*/);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/staticrecmutex_extra_def.hpp>)
#include <glib/staticrecmutex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/staticrecmutex_extra.hpp>)
#include <glib/staticrecmutex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class StaticRecMutex_Ref;

class StaticRecMutex : public gi::detail::CBoxedWrapper<StaticRecMutex, ::GStaticRecMutex, GI_GLIB_STATICRECMUTEX_BASE, StaticRecMutex_Ref>
{ typedef gi::detail::CBoxedWrapper<StaticRecMutex, ::GStaticRecMutex, GI_GLIB_STATICRECMUTEX_BASE, StaticRecMutex_Ref> super_type; using super_type::super_type; };


class StaticRecMutex_Ref : public gi::detail::CBoxedRefWrapper<StaticRecMutex, ::GStaticRecMutex, GI_GLIB_STATICRECMUTEX_BASE>
{ typedef gi::detail::CBoxedRefWrapper<StaticRecMutex, ::GStaticRecMutex, GI_GLIB_STATICRECMUTEX_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GStaticRecMutex>
{ typedef GLib::StaticRecMutex type; }; 

} // namespace repository

} // namespace gi

#endif
