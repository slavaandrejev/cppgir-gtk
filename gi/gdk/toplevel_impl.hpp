// AUTO-GENERATED

#ifndef _GI_GDK_TOPLEVEL_IMPL_HPP_
#define _GI_GDK_TOPLEVEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_toplevel_begin_move (GdkToplevel* toplevel /*none*/, GdkDevice* device /*none*/, int button, double x, double y, guint32 timestamp);
// void gdk_toplevel_begin_move (::GdkToplevel* toplevel /*none*/, ::GdkDevice* device /*none*/, gint button, gdouble x, gdouble y, guint32 timestamp);
void base::ToplevelBase::begin_move (Gdk::Device device, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkDevice* device, gint button, gdouble x, gdouble y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_begin_move;
  auto timestamp_to_c = timestamp;
  auto y_to_c = y;
  auto x_to_c = x;
  auto button_to_c = button;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkDevice*) (device_to_c), (gint) (button_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_toplevel_begin_resize (GdkToplevel* toplevel /*none*/, GdkSurfaceEdge edge, GdkDevice* device /*none,nullable*/, int button, double x, double y, guint32 timestamp);
// void gdk_toplevel_begin_resize (::GdkToplevel* toplevel /*none*/, ::GdkSurfaceEdge edge, ::GdkDevice* device /*none,nullable*/, gint button, gdouble x, gdouble y, guint32 timestamp);
void base::ToplevelBase::begin_resize (Gdk::SurfaceEdge edge, Gdk::Device device, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkSurfaceEdge edge, ::GdkDevice* device, gint button, gdouble x, gdouble y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_begin_resize;
  auto timestamp_to_c = timestamp;
  auto y_to_c = y;
  auto x_to_c = x;
  auto button_to_c = button;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto edge_to_c = gi::unwrap (edge);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkSurfaceEdge) (edge_to_c), (::GdkDevice*) (device_to_c), (gint) (button_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (guint32) (timestamp_to_c));
}
void base::ToplevelBase::begin_resize (Gdk::SurfaceEdge edge, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkSurfaceEdge edge, ::GdkDevice* device, gint button, gdouble x, gdouble y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_begin_resize;
  auto timestamp_to_c = timestamp;
  auto y_to_c = y;
  auto x_to_c = x;
  auto button_to_c = button;
  auto device_to_c = nullptr;
  auto edge_to_c = gi::unwrap (edge);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkSurfaceEdge) (edge_to_c), (::GdkDevice*) (device_to_c), (gint) (button_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_toplevel_focus (GdkToplevel* toplevel /*none*/, guint32 timestamp);
// void gdk_toplevel_focus (::GdkToplevel* toplevel /*none*/, guint32 timestamp);
void base::ToplevelBase::focus (guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_focus;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GdkToplevel*) (gobj_()), (guint32) (timestamp_to_c));
}

// GdkToplevelState gdk_toplevel_get_state (GdkToplevel* toplevel /*none*/);
// ::GdkToplevelState gdk_toplevel_get_state (::GdkToplevel* toplevel /*none*/);
Gdk::ToplevelState base::ToplevelBase::get_state () noexcept
{
  typedef ::GdkToplevelState (*call_wrap_t) (::GdkToplevel* toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_get_state;
  auto _temp_ret = call_wrap_v ((::GdkToplevel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gdk_toplevel_inhibit_system_shortcuts (GdkToplevel* toplevel /*none*/, GdkEvent* event /*none,nullable*/);
// void gdk_toplevel_inhibit_system_shortcuts (::GdkToplevel* toplevel /*none*/,  event /*none,nullable*/);
// SKIP; event type  not supported

// gboolean gdk_toplevel_lower (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_lower (::GdkToplevel* toplevel /*none*/);
bool base::ToplevelBase::lower () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevel* toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_lower;
  auto _temp_ret = call_wrap_v ((::GdkToplevel*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_toplevel_minimize (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_minimize (::GdkToplevel* toplevel /*none*/);
bool base::ToplevelBase::minimize () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevel* toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_minimize;
  auto _temp_ret = call_wrap_v ((::GdkToplevel*) (gobj_()));
  return _temp_ret;
}

// void gdk_toplevel_present (GdkToplevel* toplevel /*none*/, GdkToplevelLayout* layout /*none*/);
// void gdk_toplevel_present (::GdkToplevel* toplevel /*none*/, ::GdkToplevelLayout* layout /*none*/);
void base::ToplevelBase::present (Gdk::ToplevelLayout_Ref layout) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkToplevelLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_present;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkToplevelLayout*) (layout_to_c));
}

// void gdk_toplevel_restore_system_shortcuts (GdkToplevel* toplevel /*none*/);
// void gdk_toplevel_restore_system_shortcuts (::GdkToplevel* toplevel /*none*/);
void base::ToplevelBase::restore_system_shortcuts () noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_restore_system_shortcuts;
  call_wrap_v ((::GdkToplevel*) (gobj_()));
}

// void gdk_toplevel_set_decorated (GdkToplevel* toplevel /*none*/, gboolean decorated);
// void gdk_toplevel_set_decorated (::GdkToplevel* toplevel /*none*/, gboolean decorated);
void base::ToplevelBase::set_decorated (gboolean decorated) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, gboolean decorated);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_decorated;
  auto decorated_to_c = decorated;
  call_wrap_v ((::GdkToplevel*) (gobj_()), (gboolean) (decorated_to_c));
}

// void gdk_toplevel_set_deletable (GdkToplevel* toplevel /*none*/, gboolean deletable);
// void gdk_toplevel_set_deletable (::GdkToplevel* toplevel /*none*/, gboolean deletable);
void base::ToplevelBase::set_deletable (gboolean deletable) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, gboolean deletable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_deletable;
  auto deletable_to_c = deletable;
  call_wrap_v ((::GdkToplevel*) (gobj_()), (gboolean) (deletable_to_c));
}

// void gdk_toplevel_set_icon_list (GdkToplevel* toplevel /*none*/, GList* surfaces /*none*/);
// void gdk_toplevel_set_icon_list (::GdkToplevel* toplevel /*none*/, ::GList* surfaces /*none*/);
void base::ToplevelBase::set_icon_list (gi::CollectionParameter<GList, ::GdkTexture*, gi::transfer_none_t> surfaces) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GList* surfaces);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_icon_list;
  auto surfaces_w = unwrap (std::move(surfaces), gi::transfer_none);
  auto surfaces_to_c = surfaces_w;
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GList*) (surfaces_to_c));
}

// void gdk_toplevel_set_modal (GdkToplevel* toplevel /*none*/, gboolean modal);
// void gdk_toplevel_set_modal (::GdkToplevel* toplevel /*none*/, gboolean modal);
void base::ToplevelBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GdkToplevel*) (gobj_()), (gboolean) (modal_to_c));
}

// void gdk_toplevel_set_startup_id (GdkToplevel* toplevel /*none*/, const char* startup_id /*none*/);
// void gdk_toplevel_set_startup_id (::GdkToplevel* toplevel /*none*/, const char* startup_id /*none*/);
void base::ToplevelBase::set_startup_id (const gi::cstring_v startup_id) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_startup_id;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (const char*) (startup_id_to_c));
}

// void gdk_toplevel_set_title (GdkToplevel* toplevel /*none*/, const char* title /*none*/);
// void gdk_toplevel_set_title (::GdkToplevel* toplevel /*none*/, const char* title /*none*/);
void base::ToplevelBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (const char*) (title_to_c));
}

// void gdk_toplevel_set_transient_for (GdkToplevel* toplevel /*none*/, GdkSurface* parent /*none*/);
// void gdk_toplevel_set_transient_for (::GdkToplevel* toplevel /*none*/, ::GdkSurface* parent /*none*/);
void base::ToplevelBase::set_transient_for (Gdk::Surface parent) noexcept
{
  typedef void (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkSurface* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_set_transient_for;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkSurface*) (parent_to_c));
}

// gboolean gdk_toplevel_show_window_menu (GdkToplevel* toplevel /*none*/, GdkEvent* event /*none*/);
// gboolean gdk_toplevel_show_window_menu (::GdkToplevel* toplevel /*none*/,  event /*none*/);
// SKIP; event type  not supported

// gboolean gdk_toplevel_supports_edge_constraints (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_supports_edge_constraints (::GdkToplevel* toplevel /*none*/);
bool base::ToplevelBase::supports_edge_constraints () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevel* toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_supports_edge_constraints;
  auto _temp_ret = call_wrap_v ((::GdkToplevel*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_toplevel_titlebar_gesture (GdkToplevel* toplevel /*none*/, GdkTitlebarGesture gesture);
// gboolean gdk_toplevel_titlebar_gesture (::GdkToplevel* toplevel /*none*/, ::GdkTitlebarGesture gesture);
bool base::ToplevelBase::titlebar_gesture (Gdk::TitlebarGesture gesture) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkToplevel* toplevel, ::GdkTitlebarGesture gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_titlebar_gesture;
  auto gesture_to_c = gi::unwrap (gesture);
  auto _temp_ret = call_wrap_v ((::GdkToplevel*) (gobj_()), (::GdkTitlebarGesture) (gesture_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/toplevel_extra_def_impl.hpp>)
#include <gdk/toplevel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/toplevel_extra_impl.hpp>)
#include <gdk/toplevel_extra_impl.hpp>
#endif
#endif

#endif
