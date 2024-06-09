// AUTO-GENERATED

#ifndef _GI_GLIB_MAINLOOP_IMPL_HPP_
#define _GI_GLIB_MAINLOOP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMainLoop* /*full*/ g_main_loop_new (GMainContext* context /*none,nullable*/, gboolean is_running);
// ::GMainLoop* /*full*/ g_main_loop_new (::GMainContext* context /*none,nullable*/, gboolean is_running);
GLib::MainLoop base::MainLoopBase::new_ (GLib::MainContext_Ref context, gboolean is_running) noexcept
{
  typedef ::GMainLoop* (*call_wrap_t) (::GMainContext* context, gboolean is_running);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_loop_new;
  auto is_running_to_c = is_running;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMainContext*) (context_to_c), (gboolean) (is_running_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::MainLoop base::MainLoopBase::new_ (gboolean is_running) noexcept
{
  typedef ::GMainLoop* (*call_wrap_t) (::GMainContext* context, gboolean is_running);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_loop_new;
  auto is_running_to_c = is_running;
  auto context_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (context_to_c), (gboolean) (is_running_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMainContext* /*none*/ g_main_loop_get_context (GMainLoop* loop /*none*/);
// ::GMainContext* /*none*/ g_main_loop_get_context (::GMainLoop* loop /*none*/);
GLib::MainContext_Ref base::MainLoopBase::get_context () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::GMainLoop* loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_loop_get_context;
  auto _temp_ret = call_wrap_v ((::GMainLoop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_main_loop_is_running (GMainLoop* loop /*none*/);
// gboolean g_main_loop_is_running (::GMainLoop* loop /*none*/);
bool base::MainLoopBase::is_running () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainLoop* loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_loop_is_running;
  auto _temp_ret = call_wrap_v ((::GMainLoop*) (gobj_()));
  return _temp_ret;
}

// void g_main_loop_quit (GMainLoop* loop /*none*/);
// void g_main_loop_quit (::GMainLoop* loop /*none*/);
void base::MainLoopBase::quit () noexcept
{
  typedef void (*call_wrap_t) (::GMainLoop* loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_loop_quit;
  call_wrap_v ((::GMainLoop*) (gobj_()));
}

// GMainLoop* /*full*/ g_main_loop_ref (GMainLoop* loop /*none*/);
// ::GMainLoop* /*full*/ g_main_loop_ref (::GMainLoop* loop /*none*/);
// IGNORE; marked ignore

// void g_main_loop_run (GMainLoop* loop /*none*/);
// void g_main_loop_run (::GMainLoop* loop /*none*/);
void base::MainLoopBase::run () noexcept
{
  typedef void (*call_wrap_t) (::GMainLoop* loop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_main_loop_run;
  call_wrap_v ((::GMainLoop*) (gobj_()));
}

// void g_main_loop_unref (GMainLoop* loop /*none*/);
// void g_main_loop_unref (::GMainLoop* loop /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra_def_impl.hpp>)
#include <glib/mainloop_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra_impl.hpp>)
#include <glib/mainloop_extra_impl.hpp>
#endif
#endif

#endif
