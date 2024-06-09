// AUTO-GENERATED

#ifndef _GI_GLIB_DEBUGKEY_IMPL_HPP_
#define _GI_GLIB_DEBUGKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static const char* _field_key_get (const ::GDebugKey* obj) { return (const char*) obj->key; }
// const char* /*none*/ DebugKey::key (const ::GDebugKey* obj /*none*/);
// const char* /*none*/ DebugKey::key (const ::GDebugKey* obj /*none*/);
gi::cstring_v base::DebugKeyBase::key_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GDebugKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_key_get;
  auto _temp_ret = call_wrap_v ((const ::GDebugKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static guint _field_value_get (const ::GDebugKey* obj) { return (guint) obj->value; }
// guint DebugKey::value (const ::GDebugKey* obj /*none*/);
// guint DebugKey::value (const ::GDebugKey* obj /*none*/);
guint base::DebugKeyBase::value_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDebugKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GDebugKey*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::GDebugKey* obj, guint _value) { obj->value = (decltype(obj->value)) _value; }
//  DebugKey::value (::GDebugKey* obj /*none*/, guint _value);
// void DebugKey::value (::GDebugKey* obj /*none*/, guint _value);
void base::DebugKeyBase::value_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDebugKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDebugKey*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/debugkey_extra_def_impl.hpp>)
#include <glib/debugkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/debugkey_extra_impl.hpp>)
#include <glib/debugkey_extra_impl.hpp>
#endif
#endif

#endif
