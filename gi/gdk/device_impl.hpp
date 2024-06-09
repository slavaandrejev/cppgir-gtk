// AUTO-GENERATED

#ifndef _GI_GDK_DEVICE_IMPL_HPP_
#define _GI_GDK_DEVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gboolean gdk_device_get_caps_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_caps_lock_state (::GdkDevice* device /*none*/);
bool base::DeviceBase::get_caps_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_caps_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// GdkDeviceTool* /*none,nullable*/ gdk_device_get_device_tool (GdkDevice* device /*none*/);
// ::GdkDeviceTool* /*none,nullable*/ gdk_device_get_device_tool (::GdkDevice* device /*none*/);
Gdk::DeviceTool base::DeviceBase::get_device_tool () noexcept
{
  typedef ::GdkDeviceTool* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_device_tool;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoDirection gdk_device_get_direction (GdkDevice* device /*none*/);
// ::PangoDirection gdk_device_get_direction (::GdkDevice* device /*none*/);
Pango::Direction base::DeviceBase::get_direction () noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_direction;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* /*none*/ gdk_device_get_display (GdkDevice* device /*none*/);
// ::GdkDisplay* /*none*/ gdk_device_get_display (::GdkDevice* device /*none*/);
Gdk::Display base::DeviceBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_device_get_has_cursor (GdkDevice* device /*none*/);
// gboolean gdk_device_get_has_cursor (::GdkDevice* device /*none*/);
bool base::DeviceBase::get_has_cursor () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_has_cursor;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// GdkModifierType gdk_device_get_modifier_state (GdkDevice* device /*none*/);
// ::GdkModifierType gdk_device_get_modifier_state (::GdkDevice* device /*none*/);
Gdk::ModifierType base::DeviceBase::get_modifier_state () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_modifier_state;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ gdk_device_get_name (GdkDevice* device /*none*/);
// const char* /*none*/ gdk_device_get_name (::GdkDevice* device /*none*/);
gi::cstring_v base::DeviceBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_name;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_device_get_num_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_num_lock_state (::GdkDevice* device /*none*/);
bool base::DeviceBase::get_num_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_num_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// guint gdk_device_get_num_touches (GdkDevice* device /*none*/);
// guint gdk_device_get_num_touches (::GdkDevice* device /*none*/);
guint base::DeviceBase::get_num_touches () noexcept
{
  typedef guint (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_num_touches;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_device_get_product_id (GdkDevice* device /*none*/);
// const char* /*none,nullable*/ gdk_device_get_product_id (::GdkDevice* device /*none*/);
gi::cstring_v base::DeviceBase::get_product_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_product_id;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_device_get_scroll_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_scroll_lock_state (::GdkDevice* device /*none*/);
bool base::DeviceBase::get_scroll_lock_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_scroll_lock_state;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// GdkSeat* /*none*/ gdk_device_get_seat (GdkDevice* device /*none*/);
// ::GdkSeat* /*none*/ gdk_device_get_seat (::GdkDevice* device /*none*/);
Gdk::Seat base::DeviceBase::get_seat () noexcept
{
  typedef ::GdkSeat* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_seat;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkInputSource gdk_device_get_source (GdkDevice* device /*none*/);
// ::GdkInputSource gdk_device_get_source (::GdkDevice* device /*none*/);
Gdk::InputSource base::DeviceBase::get_source () noexcept
{
  typedef ::GdkInputSource (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_source;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkSurface* /*none,nullable*/ gdk_device_get_surface_at_position (GdkDevice* device /*none*/, double* win_x, double* win_y);
// ::GdkSurface* /*none,nullable*/ gdk_device_get_surface_at_position (::GdkDevice* device /*none*/, gdouble* win_x, gdouble* win_y);
Gdk::Surface base::DeviceBase::get_surface_at_position (gdouble * win_x, gdouble * win_y) noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_surface_at_position;
  gdouble win_y_o {};
  gdouble win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gdouble*) (win_x ? &win_x_o : nullptr), (gdouble*) (win_y ? &win_y_o : nullptr));
  if (win_y) *win_y = win_y_o;
  if (win_x) *win_x = win_x_o;
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<Gdk::Surface, gdouble, gdouble> base::DeviceBase::get_surface_at_position () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_surface_at_position;
  gdouble win_y_o {};
  gdouble win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gdouble*) (&win_x_o), (gdouble*) (&win_y_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = win_x_o;
  auto &&tmp_return_3 = win_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// guint32 gdk_device_get_timestamp (GdkDevice* device /*none*/);
// guint32 gdk_device_get_timestamp (::GdkDevice* device /*none*/);
guint32 base::DeviceBase::get_timestamp () noexcept
{
  typedef guint32 (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_timestamp;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_device_get_vendor_id (GdkDevice* device /*none*/);
// const char* /*none,nullable*/ gdk_device_get_vendor_id (::GdkDevice* device /*none*/);
gi::cstring_v base::DeviceBase::get_vendor_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_get_vendor_id;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_device_has_bidi_layouts (GdkDevice* device /*none*/);
// gboolean gdk_device_has_bidi_layouts (::GdkDevice* device /*none*/);
bool base::DeviceBase::has_bidi_layouts () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_device_has_bidi_layouts;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}




} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/device_extra_def_impl.hpp>)
#include <gdk/device_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/device_extra_impl.hpp>)
#include <gdk/device_extra_impl.hpp>
#endif
#endif

#endif
