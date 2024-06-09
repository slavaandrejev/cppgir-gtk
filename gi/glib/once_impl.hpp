// AUTO-GENERATED

#ifndef _GI_GLIB_ONCE_IMPL_HPP_
#define _GI_GLIB_ONCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// gpointer g_once_impl (GOnce* once /*none*/, GThreadFunc func /*none*/, gpointer arg);
// void* g_once_impl (::GOnce* once /*none*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* arg);
// IGNORE; not introspectable, callback misses closure info

// gboolean g_once_init_enter (void* location);
// gboolean g_once_init_enter (void** location);
// SKIP; inconsistent location inout pointer depth (1 vs 2)

// gboolean g_once_init_enter_impl (volatile gsize* location);
// gboolean g_once_init_enter_impl (gsize location);
// SKIP; inconsistent location in pointer depth (1 vs 0)

// gboolean g_once_init_enter_pointer (void* location);
// gboolean g_once_init_enter_pointer (void* location);
bool base::OnceBase::init_enter_pointer (void* location) noexcept
{
  typedef gboolean (*call_wrap_t) (void* location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_once_init_enter_pointer;
  auto location_to_c = location;
  auto _temp_ret = call_wrap_v ((void*) (location_to_c));
  return _temp_ret;
}

// void g_once_init_leave (void* location, gsize result);
// void g_once_init_leave (void** location, gsize result);
// SKIP; inconsistent location inout pointer depth (1 vs 2)

// void g_once_init_leave_pointer (void* location, gpointer result);
// void g_once_init_leave_pointer (void* location, void* result);
void base::OnceBase::init_leave_pointer (void* location, void* result) noexcept
{
  typedef void (*call_wrap_t) (void* location, void* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_once_init_leave_pointer;
  auto result_to_c = result;
  auto location_to_c = location;
  call_wrap_v ((void*) (location_to_c), (void*) (result_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/once_extra_def_impl.hpp>)
#include <glib/once_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/once_extra_impl.hpp>)
#include <glib/once_extra_impl.hpp>
#endif
#endif

#endif
