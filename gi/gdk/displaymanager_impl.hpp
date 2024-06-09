// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAYMANAGER_IMPL_HPP_
#define _GI_GDK_DISPLAYMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDisplayManager* /*none*/ gdk_display_manager_get ();
// ::GdkDisplayManager* /*none*/ gdk_display_manager_get ();
Gdk::DisplayManager base::DisplayManagerBase::get () noexcept
{
  typedef ::GdkDisplayManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none,nullable*/ gdk_display_manager_get_default_display (GdkDisplayManager* manager /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_manager_get_default_display (::GdkDisplayManager* manager /*none*/);
Gdk::Display base::DisplayManagerBase::get_default_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDisplayManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_get_default_display;
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GSList* /*container*/ gdk_display_manager_list_displays (GdkDisplayManager* manager /*none*/);
// ::GSList* /*container*/ gdk_display_manager_list_displays (::GdkDisplayManager* manager /*none*/);
gi::Collection<GSList, ::GdkDisplay*, gi::transfer_container_t> base::DisplayManagerBase::list_displays () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GdkDisplayManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_list_displays;
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::GdkDisplay*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// GdkDisplay* /*none,nullable*/ gdk_display_manager_open_display (GdkDisplayManager* manager /*none*/, const char* name /*none,nullable*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_manager_open_display (::GdkDisplayManager* manager /*none*/, const char* name /*none,nullable*/);
Gdk::Display base::DisplayManagerBase::open_display (const gi::cstring_v name) noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDisplayManager* manager, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_open_display;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gdk::Display base::DisplayManagerBase::open_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDisplayManager* manager, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_open_display;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_display_manager_set_default_display (GdkDisplayManager* manager /*none*/, GdkDisplay* display /*none*/);
// void gdk_display_manager_set_default_display (::GdkDisplayManager* manager /*none*/, ::GdkDisplay* display /*none*/);
void base::DisplayManagerBase::set_default_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplayManager* manager, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_manager_set_default_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GdkDisplayManager*) (gobj_()), (::GdkDisplay*) (display_to_c));
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra_def_impl.hpp>)
#include <gdk/displaymanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra_impl.hpp>)
#include <gdk/displaymanager_extra_impl.hpp>
#endif
#endif

#endif
