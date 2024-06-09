// AUTO-GENERATED

#ifndef _GI_GLIB_COND_IMPL_HPP_
#define _GI_GLIB_COND_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_cond_broadcast (GCond* cond /*none*/);
// void g_cond_broadcast (::GCond* cond /*none*/);
void base::CondBase::broadcast () noexcept
{
  typedef void (*call_wrap_t) (::GCond* cond);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cond_broadcast;
  call_wrap_v ((::GCond*) (gobj_()));
}

// void g_cond_clear (GCond* cond /*none*/);
// void g_cond_clear (::GCond* cond /*none*/);
void base::CondBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GCond* cond);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cond_clear;
  call_wrap_v ((::GCond*) (gobj_()));
}

// void g_cond_free (GCond* cond /*none*/);
// void g_cond_free (::GCond* cond /*none*/);
// IGNORE; marked ignore

// void g_cond_init (GCond* cond /*none*/);
// void g_cond_init (::GCond* cond /*none*/);
void base::CondBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GCond* cond);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cond_init;
  call_wrap_v ((::GCond*) (gobj_()));
}

// void g_cond_signal (GCond* cond /*none*/);
// void g_cond_signal (::GCond* cond /*none*/);
void base::CondBase::signal () noexcept
{
  typedef void (*call_wrap_t) (::GCond* cond);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cond_signal;
  call_wrap_v ((::GCond*) (gobj_()));
}

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

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/cond_extra_def_impl.hpp>)
#include <glib/cond_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/cond_extra_impl.hpp>)
#include <glib/cond_extra_impl.hpp>
#endif
#endif

#endif
