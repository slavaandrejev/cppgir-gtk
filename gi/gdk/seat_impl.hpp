// AUTO-GENERATED

#ifndef _GI_GDK_SEAT_IMPL_HPP_
#define _GI_GDK_SEAT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkSeatCapabilities gdk_seat_get_capabilities (GdkSeat* seat /*none*/);
// ::GdkSeatCapabilities gdk_seat_get_capabilities (::GdkSeat* seat /*none*/);
Gdk::SeatCapabilities base::SeatBase::get_capabilities () noexcept
{
  typedef ::GdkSeatCapabilities (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_capabilities;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GList* /*container*/ gdk_seat_get_devices (GdkSeat* seat /*none*/, GdkSeatCapabilities capabilities);
// ::GList* /*container*/ gdk_seat_get_devices (::GdkSeat* seat /*none*/, ::GdkSeatCapabilities capabilities);
gi::Collection<GList, ::GdkDevice*, gi::transfer_container_t> base::SeatBase::get_devices (Gdk::SeatCapabilities capabilities) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkSeat* seat, ::GdkSeatCapabilities capabilities);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_devices;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()), (::GdkSeatCapabilities) (capabilities_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GdkDevice*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// GdkDisplay* /*none*/ gdk_seat_get_display (GdkSeat* seat /*none*/);
// ::GdkDisplay* /*none*/ gdk_seat_get_display (::GdkSeat* seat /*none*/);
Gdk::Display base::SeatBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_display;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDevice* /*none,nullable*/ gdk_seat_get_keyboard (GdkSeat* seat /*none*/);
// ::GdkDevice* /*none,nullable*/ gdk_seat_get_keyboard (::GdkSeat* seat /*none*/);
Gdk::Device base::SeatBase::get_keyboard () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_keyboard;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDevice* /*none,nullable*/ gdk_seat_get_pointer (GdkSeat* seat /*none*/);
// ::GdkDevice* /*none,nullable*/ gdk_seat_get_pointer (::GdkSeat* seat /*none*/);
Gdk::Device base::SeatBase::get_pointer () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_pointer;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*container*/ gdk_seat_get_tools (GdkSeat* seat /*none*/);
// ::GList* /*container*/ gdk_seat_get_tools (::GdkSeat* seat /*none*/);
gi::Collection<GList, ::GdkDeviceTool*, gi::transfer_container_t> base::SeatBase::get_tools () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkSeat* seat);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_seat_get_tools;
  auto _temp_ret = call_wrap_v ((::GdkSeat*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GdkDeviceTool*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}






} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_def_impl.hpp>)
#include <gdk/seat_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_impl.hpp>)
#include <gdk/seat_extra_impl.hpp>
#endif
#endif

#endif
