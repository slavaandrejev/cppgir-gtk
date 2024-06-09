// AUTO-GENERATED

#ifndef _GI_GLIB_RECMUTEX_HPP_
#define _GI_GLIB_RECMUTEX_HPP_


namespace gi {

namespace repository {

namespace GLib {

class RecMutex_Ref;

class RecMutex;

namespace base {


#define GI_GLIB_RECMUTEX_BASE base::RecMutexBase
class RecMutexBase : public gi::detail::CBoxedWrapperBase<RecMutexBase, ::GRecMutex>
{
typedef gi::detail::CBoxedWrapperBase<RecMutexBase, ::GRecMutex> super_type;
public:

RecMutexBase (std::nullptr_t = nullptr) : super_type() {}

// void g_rec_mutex_clear (GRecMutex* rec_mutex /*none*/);
// void g_rec_mutex_clear (::GRecMutex* rec_mutex /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void g_rec_mutex_init (GRecMutex* rec_mutex /*none*/);
// void g_rec_mutex_init (::GRecMutex* rec_mutex /*none*/);
GI_INLINE_DECL void init () noexcept;

// void g_rec_mutex_lock (GRecMutex* rec_mutex /*none*/);
// void g_rec_mutex_lock (::GRecMutex* rec_mutex /*none*/);
GI_INLINE_DECL void lock () noexcept;

// gboolean g_rec_mutex_trylock (GRecMutex* rec_mutex /*none*/);
// gboolean g_rec_mutex_trylock (::GRecMutex* rec_mutex /*none*/);
GI_INLINE_DECL bool trylock () noexcept;

// void g_rec_mutex_unlock (GRecMutex* rec_mutex /*none*/);
// void g_rec_mutex_unlock (::GRecMutex* rec_mutex /*none*/);
GI_INLINE_DECL void unlock () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra_def.hpp>)
#include <glib/recmutex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra.hpp>)
#include <glib/recmutex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class RecMutex_Ref;

class RecMutex : public gi::detail::CBoxedWrapper<RecMutex, ::GRecMutex, GI_GLIB_RECMUTEX_BASE, RecMutex_Ref>
{ typedef gi::detail::CBoxedWrapper<RecMutex, ::GRecMutex, GI_GLIB_RECMUTEX_BASE, RecMutex_Ref> super_type; using super_type::super_type; };


class RecMutex_Ref : public gi::detail::CBoxedRefWrapper<RecMutex, ::GRecMutex, GI_GLIB_RECMUTEX_BASE>
{ typedef gi::detail::CBoxedRefWrapper<RecMutex, ::GRecMutex, GI_GLIB_RECMUTEX_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRecMutex>
{ typedef GLib::RecMutex type; }; 

} // namespace repository

} // namespace gi

#endif
