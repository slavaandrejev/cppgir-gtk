// AUTO-GENERATED

#ifndef _GI_GOBJECT_OBJECTCONSTRUCTPARAM_IMPL_HPP_
#define _GI_GOBJECT_OBJECTCONSTRUCTPARAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static ::GParamSpec* _field_pspec_get (const ::GObjectConstructParam* obj) { return (::GParamSpec*) obj->pspec; }
// ::GParamSpec* /*none*/ ObjectConstructParam::pspec (const ::GObjectConstructParam* obj /*none*/);
// ::GParamSpec* /*none*/ ObjectConstructParam::pspec (const ::GObjectConstructParam* obj /*none*/);
GObject::ParamSpec base::ObjectConstructParamBase::pspec_ () const noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const ::GObjectConstructParam* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pspec_get;
  auto _temp_ret = call_wrap_v ((const ::GObjectConstructParam*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GValue* _field_value_get (const ::GObjectConstructParam* obj) { return (::GValue*) obj->value; }
// ::GValue* /*none*/ ObjectConstructParam::value (const ::GObjectConstructParam* obj /*none*/);
// ::GValue* /*none*/ ObjectConstructParam::value (const ::GObjectConstructParam* obj /*none*/);
GObject::Value_Ref base::ObjectConstructParamBase::value_ () const noexcept
{
  typedef ::GValue* (*call_wrap_t) (const ::GObjectConstructParam* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GObjectConstructParam*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra_def_impl.hpp>)
#include <gobject/objectconstructparam_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra_impl.hpp>)
#include <gobject/objectconstructparam_extra_impl.hpp>
#endif
#endif

#endif
