// AUTO-GENERATED

#ifndef _GI_GSK_COLORSTOP_IMPL_HPP_
#define _GI_GSK_COLORSTOP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

static gfloat _field_offset_get (const ::GskColorStop* obj) { return (gfloat) obj->offset; }
// gfloat ColorStop::offset (const ::GskColorStop* obj /*none*/);
// gfloat ColorStop::offset (const ::GskColorStop* obj /*none*/);
gfloat base::ColorStopBase::offset_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskColorStop* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GskColorStop*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GskColorStop* obj, gfloat _value) { obj->offset = (decltype(obj->offset)) _value; }
//  ColorStop::offset (::GskColorStop* obj /*none*/, gfloat _value);
// void ColorStop::offset (::GskColorStop* obj /*none*/, gfloat _value);
void base::ColorStopBase::offset_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GskColorStop* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GskColorStop*) (gobj_()), (gfloat) (_value_to_c));
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/colorstop_extra_def_impl.hpp>)
#include <gsk/colorstop_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/colorstop_extra_impl.hpp>)
#include <gsk/colorstop_extra_impl.hpp>
#endif
#endif

#endif
