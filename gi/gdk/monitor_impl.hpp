// AUTO-GENERATED

#ifndef _GI_GDK_MONITOR_IMPL_HPP_
#define _GI_GDK_MONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// const char* /*none,nullable*/ gdk_monitor_get_connector (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_connector (::GdkMonitor* monitor /*none*/);
gi::cstring_v base::MonitorBase::get_connector () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_connector;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gdk_monitor_get_description (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_description (::GdkMonitor* monitor /*none*/);
gi::cstring_v base::MonitorBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_description;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none*/ gdk_monitor_get_display (GdkMonitor* monitor /*none*/);
// ::GdkDisplay* /*none*/ gdk_monitor_get_display (::GdkMonitor* monitor /*none*/);
Gdk::Display base::MonitorBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_display;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_monitor_get_geometry (GdkMonitor* monitor /*none*/, GdkRectangle* geometry /*none,out,ca*/);
// void gdk_monitor_get_geometry (::GdkMonitor* monitor /*none*/, ::GdkRectangle* geometry /*none,out,ca*/);
void base::MonitorBase::get_geometry (Gdk::Rectangle & geometry) noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_geometry;
  detail::allocate(geometry);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(geometry).gobj_()), "");
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) (geometry).gobj_()));
}
Gdk::Rectangle base::MonitorBase::get_geometry () noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_geometry;
  Gdk::Rectangle geometry_c;
  auto geometry = &geometry_c;
  detail::allocate(*geometry);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*geometry).gobj_()), "");
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) (geometry ? (::GdkRectangle*) (*geometry).gobj_() : nullptr));
  return geometry_c;
}

// int gdk_monitor_get_height_mm (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_height_mm (::GdkMonitor* monitor /*none*/);
gint base::MonitorBase::get_height_mm () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_height_mm;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_monitor_get_manufacturer (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_manufacturer (::GdkMonitor* monitor /*none*/);
gi::cstring_v base::MonitorBase::get_manufacturer () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_manufacturer;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gdk_monitor_get_model (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_model (::GdkMonitor* monitor /*none*/);
gi::cstring_v base::MonitorBase::get_model () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_model;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_monitor_get_refresh_rate (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_refresh_rate (::GdkMonitor* monitor /*none*/);
gint base::MonitorBase::get_refresh_rate () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_refresh_rate;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// int gdk_monitor_get_scale_factor (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_scale_factor (::GdkMonitor* monitor /*none*/);
gint base::MonitorBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// GdkSubpixelLayout gdk_monitor_get_subpixel_layout (GdkMonitor* monitor /*none*/);
// ::GdkSubpixelLayout gdk_monitor_get_subpixel_layout (::GdkMonitor* monitor /*none*/);
Gdk::SubpixelLayout base::MonitorBase::get_subpixel_layout () noexcept
{
  typedef ::GdkSubpixelLayout (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_subpixel_layout;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gdk_monitor_get_width_mm (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_width_mm (::GdkMonitor* monitor /*none*/);
gint base::MonitorBase::get_width_mm () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_get_width_mm;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_monitor_is_valid (GdkMonitor* monitor /*none*/);
// gboolean gdk_monitor_is_valid (::GdkMonitor* monitor /*none*/);
bool base::MonitorBase::is_valid () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_monitor_is_valid;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra_def_impl.hpp>)
#include <gdk/monitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra_impl.hpp>)
#include <gdk/monitor_extra_impl.hpp>
#endif
#endif

#endif
