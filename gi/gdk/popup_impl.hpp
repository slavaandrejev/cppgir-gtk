// AUTO-GENERATED

#ifndef _GI_GDK_POPUP_IMPL_HPP_
#define _GI_GDK_POPUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gboolean gdk_popup_get_autohide (GdkPopup* popup /*none*/);
// gboolean gdk_popup_get_autohide (::GdkPopup* popup /*none*/);
bool base::PopupBase::get_autohide () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_autohide;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return _temp_ret;
}

// GdkSurface* /*none,nullable*/ gdk_popup_get_parent (GdkPopup* popup /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_popup_get_parent (::GdkPopup* popup /*none*/);
Gdk::Surface base::PopupBase::get_parent () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_parent;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_popup_get_position_x (GdkPopup* popup /*none*/);
// gint gdk_popup_get_position_x (::GdkPopup* popup /*none*/);
gint base::PopupBase::get_position_x () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_position_x;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return _temp_ret;
}

// int gdk_popup_get_position_y (GdkPopup* popup /*none*/);
// gint gdk_popup_get_position_y (::GdkPopup* popup /*none*/);
gint base::PopupBase::get_position_y () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_position_y;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return _temp_ret;
}

// GdkGravity gdk_popup_get_rect_anchor (GdkPopup* popup /*none*/);
// ::GdkGravity gdk_popup_get_rect_anchor (::GdkPopup* popup /*none*/);
Gdk::Gravity base::PopupBase::get_rect_anchor () noexcept
{
  typedef ::GdkGravity (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_rect_anchor;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkGravity gdk_popup_get_surface_anchor (GdkPopup* popup /*none*/);
// ::GdkGravity gdk_popup_get_surface_anchor (::GdkPopup* popup /*none*/);
Gdk::Gravity base::PopupBase::get_surface_anchor () noexcept
{
  typedef ::GdkGravity (*call_wrap_t) (::GdkPopup* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_get_surface_anchor;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_popup_present (GdkPopup* popup /*none*/, int width, int height, GdkPopupLayout* layout /*none*/);
// gboolean gdk_popup_present (::GdkPopup* popup /*none*/, gint width, gint height, ::GdkPopupLayout* layout /*none*/);
bool base::PopupBase::present (gint width, gint height, Gdk::PopupLayout_Ref layout) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPopup* popup, gint width, gint height, ::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_present;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::GdkPopup*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c), (::GdkPopupLayout*) (layout_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/popup_extra_def_impl.hpp>)
#include <gdk/popup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/popup_extra_impl.hpp>)
#include <gdk/popup_extra_impl.hpp>
#endif
#endif

#endif
