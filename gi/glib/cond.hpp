// AUTO-GENERATED

#ifndef _GI_GLIB_COND_HPP_
#define _GI_GLIB_COND_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Cond_Ref;

class Cond;

namespace base {


#define GI_GLIB_COND_BASE base::CondBase
class CondBase : public gi::detail::CBoxedWrapperBase<CondBase, ::GCond>
{
typedef gi::detail::CBoxedWrapperBase<CondBase, ::GCond> super_type;
public:

CondBase (std::nullptr_t = nullptr) : super_type() {}

// void g_cond_broadcast (GCond* cond /*none*/);
// void g_cond_broadcast (::GCond* cond /*none*/);
GI_INLINE_DECL void broadcast () noexcept;

// void g_cond_clear (GCond* cond /*none*/);
// void g_cond_clear (::GCond* cond /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void g_cond_free (GCond* cond /*none*/);
// void g_cond_free (::GCond* cond /*none*/);
// IGNORE; marked ignore

// void g_cond_init (GCond* cond /*none*/);
// void g_cond_init (::GCond* cond /*none*/);
GI_INLINE_DECL void init () noexcept;

// void g_cond_signal (GCond* cond /*none*/);
// void g_cond_signal (::GCond* cond /*none*/);
GI_INLINE_DECL void signal () noexcept;

// gboolean g_cond_timed_wait (GCond* cond /*none*/, GMutex* mutex /*none*/, GTimeVal* abs_time /*none*/);
// gboolean g_cond_timed_wait (::GCond* cond /*none*/,  mutex /*none*/,  abs_time /*none*/);
// IGNORE; deprecated

// void g_cond_wait (GCond* cond /*none*/, GMutex* mutex /*none*/);
// void g_cond_wait (::GCond* cond /*none*/,  mutex /*none*/);
// SKIP; mutex type  not supported

// gboolean g_cond_wait_until (GCond* cond /*none*/, GMutex* mutex /*none*/, gint64 end_time);
// gboolean g_cond_wait_until (::GCond* cond /*none*/,  mutex /*none*/, gint64 end_time);
// SKIP; mutex type  not supported

// FAILURE on g_cond_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/cond_extra_def.hpp>)
#include <glib/cond_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/cond_extra.hpp>)
#include <glib/cond_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Cond_Ref;

class Cond : public gi::detail::CBoxedWrapper<Cond, ::GCond, GI_GLIB_COND_BASE, Cond_Ref>
{ typedef gi::detail::CBoxedWrapper<Cond, ::GCond, GI_GLIB_COND_BASE, Cond_Ref> super_type; using super_type::super_type; };


class Cond_Ref : public gi::detail::CBoxedRefWrapper<Cond, ::GCond, GI_GLIB_COND_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Cond, ::GCond, GI_GLIB_COND_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GCond>
{ typedef GLib::Cond type; }; 

} // namespace repository

} // namespace gi

#endif
