// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONENTRY_IMPL_HPP_
#define _GI_GIO_ACTIONENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static const char* _field_name_get (const ::GActionEntry* obj) { return (const char*) obj->name; }
// const char* /*none*/ ActionEntry::name (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::name (const ::GActionEntry* obj /*none*/);
gi::cstring_v base::ActionEntryBase::name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static const char* _field_parameter_type_get (const ::GActionEntry* obj) { return (const char*) obj->parameter_type; }
// const char* /*none*/ ActionEntry::parameter_type (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::parameter_type (const ::GActionEntry* obj /*none*/);
gi::cstring_v base::ActionEntryBase::parameter_type_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parameter_type_get;
  auto _temp_ret = call_wrap_v ((const ::GActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static const char* _field_state_get (const ::GActionEntry* obj) { return (const char*) obj->state; }
// const char* /*none*/ ActionEntry::state (const ::GActionEntry* obj /*none*/);
// const char* /*none*/ ActionEntry::state (const ::GActionEntry* obj /*none*/);
gi::cstring_v base::ActionEntryBase::state_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra_def_impl.hpp>)
#include <gio/actionentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra_impl.hpp>)
#include <gio/actionentry_extra_impl.hpp>
#endif
#endif

#endif
