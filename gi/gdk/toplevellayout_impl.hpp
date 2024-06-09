// AUTO-GENERATED

#ifndef _GI_GDK_TOPLEVELLAYOUT_IMPL_HPP_
#define _GI_GDK_TOPLEVELLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_new ();
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_new ();
Gdk::ToplevelLayout base::ToplevelLayoutBase::new_ () noexcept
{
  typedef ::GdkToplevelLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_toplevel_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_copy (GdkToplevelLayout* layout /*none*/);
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_copy (::GdkToplevelLayout* layout /*none*/);
Gdk::ToplevelLayout base::ToplevelLayoutBase::copy () noexcept
{
  typedef ::GdkToplevelLayout* (*call_wrap_t) (::GdkToplevelLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_copy;
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_toplevel_layout_equal (GdkToplevelLayout* layout /*none*/, GdkToplevelLayout* other /*none*/);
// gboolean gdk_toplevel_layout_equal (::GdkToplevelLayout* layout /*none*/, ::GdkToplevelLayout* other /*none*/);
bool base::ToplevelLayoutBase::equal (Gdk::ToplevelLayout_Ref other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout, ::GdkToplevelLayout* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_equal;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (::GdkToplevelLayout*) (other_to_c));
  return _temp_ret;
}

// gboolean gdk_toplevel_layout_get_fullscreen (GdkToplevelLayout* layout /*none*/, gboolean* fullscreen);
// gboolean gdk_toplevel_layout_get_fullscreen (::GdkToplevelLayout* layout /*none*/, gboolean* fullscreen);
bool base::ToplevelLayoutBase::get_fullscreen (bool & fullscreen) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean* fullscreen);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_fullscreen;
  gboolean fullscreen_o {};
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean*) (&fullscreen_o));
  fullscreen = fullscreen_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::ToplevelLayoutBase::get_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean* fullscreen);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_fullscreen;
  gboolean fullscreen_o {};
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean*) (&fullscreen_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = fullscreen_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GdkMonitor* /*none,nullable*/ gdk_toplevel_layout_get_fullscreen_monitor (GdkToplevelLayout* layout /*none*/);
// ::GdkMonitor* /*none,nullable*/ gdk_toplevel_layout_get_fullscreen_monitor (::GdkToplevelLayout* layout /*none*/);
Gdk::Monitor base::ToplevelLayoutBase::get_fullscreen_monitor () noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkToplevelLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_fullscreen_monitor;
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_toplevel_layout_get_maximized (GdkToplevelLayout* layout /*none*/, gboolean* maximized);
// gboolean gdk_toplevel_layout_get_maximized (::GdkToplevelLayout* layout /*none*/, gboolean* maximized);
bool base::ToplevelLayoutBase::get_maximized (bool & maximized) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean* maximized);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_maximized;
  gboolean maximized_o {};
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean*) (&maximized_o));
  maximized = maximized_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::ToplevelLayoutBase::get_maximized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean* maximized);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_maximized;
  gboolean maximized_o {};
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean*) (&maximized_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = maximized_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gdk_toplevel_layout_get_resizable (GdkToplevelLayout* layout /*none*/);
// gboolean gdk_toplevel_layout_get_resizable (::GdkToplevelLayout* layout /*none*/);
bool base::ToplevelLayoutBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevelLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_get_resizable;
  auto _temp_ret = call_wrap_v ((::GdkToplevelLayout*) (gobj_()));
  return _temp_ret;
}

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_ref (GdkToplevelLayout* layout /*none*/);
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_ref (::GdkToplevelLayout* layout /*none*/);
// IGNORE; marked ignore

// void gdk_toplevel_layout_set_fullscreen (GdkToplevelLayout* layout /*none*/, gboolean fullscreen, GdkMonitor* monitor /*none,nullable*/);
// void gdk_toplevel_layout_set_fullscreen (::GdkToplevelLayout* layout /*none*/, gboolean fullscreen, ::GdkMonitor* monitor /*none,nullable*/);
void base::ToplevelLayoutBase::set_fullscreen (gboolean fullscreen, Gdk::Monitor monitor) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean fullscreen, ::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_set_fullscreen;
  auto monitor_to_c = gi::unwrap (monitor, gi::transfer_none);
  auto fullscreen_to_c = fullscreen;
  call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean) (fullscreen_to_c), (::GdkMonitor*) (monitor_to_c));
}
void base::ToplevelLayoutBase::set_fullscreen (gboolean fullscreen) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean fullscreen, ::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_set_fullscreen;
  auto monitor_to_c = nullptr;
  auto fullscreen_to_c = fullscreen;
  call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean) (fullscreen_to_c), (::GdkMonitor*) (monitor_to_c));
}

// void gdk_toplevel_layout_set_maximized (GdkToplevelLayout* layout /*none*/, gboolean maximized);
// void gdk_toplevel_layout_set_maximized (::GdkToplevelLayout* layout /*none*/, gboolean maximized);
void base::ToplevelLayoutBase::set_maximized (gboolean maximized) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean maximized);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_set_maximized;
  auto maximized_to_c = maximized;
  call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean) (maximized_to_c));
}

// void gdk_toplevel_layout_set_resizable (GdkToplevelLayout* layout /*none*/, gboolean resizable);
// void gdk_toplevel_layout_set_resizable (::GdkToplevelLayout* layout /*none*/, gboolean resizable);
void base::ToplevelLayoutBase::set_resizable (gboolean resizable) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevelLayout* layout, gboolean resizable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_layout_set_resizable;
  auto resizable_to_c = resizable;
  call_wrap_v ((::GdkToplevelLayout*) (gobj_()), (gboolean) (resizable_to_c));
}

// void gdk_toplevel_layout_unref (GdkToplevelLayout* layout /*none*/);
// void gdk_toplevel_layout_unref (::GdkToplevelLayout* layout /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/toplevellayout_extra_def_impl.hpp>)
#include <gdk/toplevellayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/toplevellayout_extra_impl.hpp>)
#include <gdk/toplevellayout_extra_impl.hpp>
#endif
#endif

#endif
