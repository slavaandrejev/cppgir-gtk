// AUTO-GENERATED

#ifndef _GI_GDK_CURSOR_IMPL_HPP_
#define _GI_GDK_CURSOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkCursor* /*full,nullable*/ gdk_cursor_new_from_name (const char* name /*none*/, GdkCursor* fallback /*none,nullable*/);
// ::GdkCursor* /*full,nullable*/ gdk_cursor_new_from_name (const char* name /*none*/, ::GdkCursor* fallback /*none,nullable*/);
Gdk::Cursor base::CursorBase::new_from_name (const gi::cstring_v name, Gdk::Cursor fallback) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (const char* name, ::GdkCursor* fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_name;
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GdkCursor*) (fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Cursor base::CursorBase::new_from_name (const gi::cstring_v name) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (const char* name, ::GdkCursor* fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_name;
  auto fallback_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GdkCursor*) (fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkCursor* /*full*/ gdk_cursor_new_from_texture (GdkTexture* texture /*none*/, int hotspot_x, int hotspot_y, GdkCursor* fallback /*none,nullable*/);
// ::GdkCursor* /*full*/ gdk_cursor_new_from_texture (::GdkTexture* texture /*none*/, gint hotspot_x, gint hotspot_y, ::GdkCursor* fallback /*none,nullable*/);
Gdk::Cursor base::CursorBase::new_from_texture (Gdk::Texture texture, gint hotspot_x, gint hotspot_y, Gdk::Cursor fallback) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkTexture* texture, gint hotspot_x, gint hotspot_y, ::GdkCursor* fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_texture;
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none);
  auto hotspot_y_to_c = hotspot_y;
  auto hotspot_x_to_c = hotspot_x;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (texture_to_c), (gint) (hotspot_x_to_c), (gint) (hotspot_y_to_c), (::GdkCursor*) (fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Cursor base::CursorBase::new_from_texture (Gdk::Texture texture, gint hotspot_x, gint hotspot_y) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkTexture* texture, gint hotspot_x, gint hotspot_y, ::GdkCursor* fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_texture;
  auto fallback_to_c = nullptr;
  auto hotspot_y_to_c = hotspot_y;
  auto hotspot_x_to_c = hotspot_x;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (texture_to_c), (gint) (hotspot_x_to_c), (gint) (hotspot_y_to_c), (::GdkCursor*) (fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkCursor* /*none,nullable*/ gdk_cursor_get_fallback (GdkCursor* cursor /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_cursor_get_fallback (::GdkCursor* cursor /*none*/);
Gdk::Cursor base::CursorBase::get_fallback () noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cursor_get_fallback;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_cursor_get_hotspot_x (GdkCursor* cursor /*none*/);
// gint gdk_cursor_get_hotspot_x (::GdkCursor* cursor /*none*/);
gint base::CursorBase::get_hotspot_x () noexcept
{
  typedef gint (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cursor_get_hotspot_x;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return _temp_ret;
}

// int gdk_cursor_get_hotspot_y (GdkCursor* cursor /*none*/);
// gint gdk_cursor_get_hotspot_y (::GdkCursor* cursor /*none*/);
gint base::CursorBase::get_hotspot_y () noexcept
{
  typedef gint (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cursor_get_hotspot_y;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_cursor_get_name (GdkCursor* cursor /*none*/);
// const char* /*none,nullable*/ gdk_cursor_get_name (::GdkCursor* cursor /*none*/);
gi::cstring_v base::CursorBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cursor_get_name;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkTexture* /*none,nullable*/ gdk_cursor_get_texture (GdkCursor* cursor /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_cursor_get_texture (::GdkCursor* cursor /*none*/);
Gdk::Texture base::CursorBase::get_texture () noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cursor_get_texture;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_def_impl.hpp>)
#include <gdk/cursor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_impl.hpp>)
#include <gdk/cursor_extra_impl.hpp>
#endif
#endif

#endif
