// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDING_IMPL_HPP_
#define _GI_GOBJECT_BINDING_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// GObject* /*full,nullable*/ g_binding_dup_source (GBinding* binding /*none*/);
// ::GObject* /*full,nullable*/ g_binding_dup_source (::GBinding* binding /*none*/);
GObject::Object base::BindingBase::dup_source () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_dup_source;
  auto _temp_ret = call_wrap_v ((::GBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GObject* /*full,nullable*/ g_binding_dup_target (GBinding* binding /*none*/);
// ::GObject* /*full,nullable*/ g_binding_dup_target (::GBinding* binding /*none*/);
GObject::Object base::BindingBase::dup_target () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_dup_target;
  auto _temp_ret = call_wrap_v ((::GBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBindingFlags g_binding_get_flags (GBinding* binding /*none*/);
// ::GBindingFlags g_binding_get_flags (::GBinding* binding /*none*/);
GObject::BindingFlags base::BindingBase::get_flags () noexcept
{
  typedef ::GBindingFlags (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_get_flags;
  auto _temp_ret = call_wrap_v ((::GBinding*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GObject* /*none,nullable*/ g_binding_get_source (GBinding* binding /*none*/);
// ::GObject* /*none,nullable*/ g_binding_get_source (::GBinding* binding /*none*/);
// IGNORE; deprecated

// const gchar* /*none*/ g_binding_get_source_property (GBinding* binding /*none*/);
// const char* /*none*/ g_binding_get_source_property (::GBinding* binding /*none*/);
gi::cstring_v base::BindingBase::get_source_property () noexcept
{
  typedef const char* (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_get_source_property;
  auto _temp_ret = call_wrap_v ((::GBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GObject* /*none,nullable*/ g_binding_get_target (GBinding* binding /*none*/);
// ::GObject* /*none,nullable*/ g_binding_get_target (::GBinding* binding /*none*/);
// IGNORE; deprecated

// const gchar* /*none*/ g_binding_get_target_property (GBinding* binding /*none*/);
// const char* /*none*/ g_binding_get_target_property (::GBinding* binding /*none*/);
gi::cstring_v base::BindingBase::get_target_property () noexcept
{
  typedef const char* (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_get_target_property;
  auto _temp_ret = call_wrap_v ((::GBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_binding_unbind (GBinding* binding /*none*/);
// void g_binding_unbind (::GBinding* binding /*none*/);
void base::BindingBase::unbind () noexcept
{
  typedef void (*call_wrap_t) (::GBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_unbind;
  call_wrap_v ((::GBinding*) (gobj_()));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/binding_extra_def_impl.hpp>)
#include <gobject/binding_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/binding_extra_impl.hpp>)
#include <gobject/binding_extra_impl.hpp>
#endif
#endif

#endif
