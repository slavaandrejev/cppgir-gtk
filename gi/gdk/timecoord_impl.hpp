// AUTO-GENERATED

#ifndef _GI_GDK_TIMECOORD_IMPL_HPP_
#define _GI_GDK_TIMECOORD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static guint32 _field_time_get (const ::GdkTimeCoord* obj) { return (guint32) obj->time; }
// guint32 TimeCoord::time (const ::GdkTimeCoord* obj /*none*/);
// guint32 TimeCoord::time (const ::GdkTimeCoord* obj /*none*/);
guint32 base::TimeCoordBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkTimeCoord* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkTimeCoord*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkTimeCoord* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  TimeCoord::time (::GdkTimeCoord* obj /*none*/, guint32 _value);
// void TimeCoord::time (::GdkTimeCoord* obj /*none*/, guint32 _value);
void base::TimeCoordBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkTimeCoord* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkTimeCoord*) (gobj_()), (guint32) (_value_to_c));
}

static ::GdkAxisFlags _field_flags_get (const ::GdkTimeCoord* obj) { return (::GdkAxisFlags) obj->flags; }
// ::GdkAxisFlags TimeCoord::flags (const ::GdkTimeCoord* obj /*none*/);
// ::GdkAxisFlags TimeCoord::flags (const ::GdkTimeCoord* obj /*none*/);
Gdk::AxisFlags base::TimeCoordBase::flags_ () const noexcept
{
  typedef ::GdkAxisFlags (*call_wrap_t) (const ::GdkTimeCoord* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GdkTimeCoord*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GdkTimeCoord* obj, ::GdkAxisFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  TimeCoord::flags (::GdkTimeCoord* obj /*none*/, ::GdkAxisFlags _value);
// void TimeCoord::flags (::GdkTimeCoord* obj /*none*/, ::GdkAxisFlags _value);
void base::TimeCoordBase::flags_ (Gdk::AxisFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkTimeCoord* obj, ::GdkAxisFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkTimeCoord*) (gobj_()), (::GdkAxisFlags) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra_def_impl.hpp>)
#include <gdk/timecoord_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra_impl.hpp>)
#include <gdk/timecoord_extra_impl.hpp>
#endif
#endif

#endif
