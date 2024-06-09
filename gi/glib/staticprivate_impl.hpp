// AUTO-GENERATED

#ifndef _GI_GLIB_STATICPRIVATE_IMPL_HPP_
#define _GI_GLIB_STATICPRIVATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_static_private_free (GStaticPrivate* private_key /*none*/);
// void g_static_private_free (::GStaticPrivate* private_key /*none*/);
// IGNORE; marked ignore

// gpointer g_static_private_get (GStaticPrivate* private_key /*none*/);
// void* g_static_private_get (::GStaticPrivate* private_key /*none*/);
gpointer base::StaticPrivateBase::get () noexcept
{
  typedef void* (*call_wrap_t) (::GStaticPrivate* private_key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_static_private_get;
  auto _temp_ret = call_wrap_v ((::GStaticPrivate*) (gobj_()));
  return _temp_ret;
}

// void g_static_private_init (GStaticPrivate* private_key /*none*/);
// void g_static_private_init (::GStaticPrivate* private_key /*none*/);
void base::StaticPrivateBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GStaticPrivate* private_key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_static_private_init;
  call_wrap_v ((::GStaticPrivate*) (gobj_()));
}

// void g_static_private_set (GStaticPrivate* private_key /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void g_static_private_set (::GStaticPrivate* private_key /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/staticprivate_extra_def_impl.hpp>)
#include <glib/staticprivate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/staticprivate_extra_impl.hpp>)
#include <glib/staticprivate_extra_impl.hpp>
#endif
#endif

#endif
