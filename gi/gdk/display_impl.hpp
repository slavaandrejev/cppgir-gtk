// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAY_IMPL_HPP_
#define _GI_GDK_DISPLAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDisplay* /*none,nullable*/ gdk_display_get_default ();
// ::GdkDisplay* /*none,nullable*/ gdk_display_get_default ();
Gdk::Display base::DisplayBase::get_default () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none,nullable*/ gdk_display_open (const char* display_name /*none,nullable*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_open (const char* display_name /*none,nullable*/);
Gdk::Display base::DisplayBase::open (const gi::cstring_v display_name) noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (const char* display_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_open;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (display_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gdk::Display base::DisplayBase::open () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (const char* display_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_open;
  auto display_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (display_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_display_beep (GdkDisplay* display /*none*/);
// void gdk_display_beep (::GdkDisplay* display /*none*/);
void base::DisplayBase::beep () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_beep;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// void gdk_display_close (GdkDisplay* display /*none*/);
// void gdk_display_close (::GdkDisplay* display /*none*/);
void base::DisplayBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_close;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// GdkGLContext* /*full*/ gdk_display_create_gl_context (GdkDisplay* self /*none*/, GError ** error);
// ::GdkGLContext* /*full*/ gdk_display_create_gl_context (::GdkDisplay* self /*none*/, GError ** error);
Gdk::GLContext base::DisplayBase::create_gl_context ()
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkDisplay* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_create_gl_context;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::GLContext base::DisplayBase::create_gl_context (GLib::Error * _error) noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkDisplay* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_create_gl_context;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_display_device_is_grabbed (GdkDisplay* display /*none*/, GdkDevice* device /*none*/);
// gboolean gdk_display_device_is_grabbed (::GdkDisplay* display /*none*/, ::GdkDevice* device /*none*/);
bool base::DisplayBase::device_is_grabbed (Gdk::Device device) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_device_is_grabbed;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (::GdkDevice*) (device_to_c));
  return _temp_ret;
}

// void gdk_display_flush (GdkDisplay* display /*none*/);
// void gdk_display_flush (::GdkDisplay* display /*none*/);
void base::DisplayBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_flush;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// GdkAppLaunchContext* /*full*/ gdk_display_get_app_launch_context (GdkDisplay* display /*none*/);
// ::GdkAppLaunchContext* /*full*/ gdk_display_get_app_launch_context (::GdkDisplay* display /*none*/);
Gdk::AppLaunchContext base::DisplayBase::get_app_launch_context () noexcept
{
  typedef ::GdkAppLaunchContext* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_app_launch_context;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkClipboard* /*none*/ gdk_display_get_clipboard (GdkDisplay* display /*none*/);
// ::GdkClipboard* /*none*/ gdk_display_get_clipboard (::GdkDisplay* display /*none*/);
Gdk::Clipboard base::DisplayBase::get_clipboard () noexcept
{
  typedef ::GdkClipboard* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_clipboard;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkSeat* /*none,nullable*/ gdk_display_get_default_seat (GdkDisplay* display /*none*/);
// ::GdkSeat* /*none,nullable*/ gdk_display_get_default_seat (::GdkDisplay* display /*none*/);
Gdk::Seat base::DisplayBase::get_default_seat () noexcept
{
  typedef ::GdkSeat* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_default_seat;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkMonitor* /*none,nullable*/ gdk_display_get_monitor_at_surface (GdkDisplay* display /*none*/, GdkSurface* surface /*none*/);
// ::GdkMonitor* /*none,nullable*/ gdk_display_get_monitor_at_surface (::GdkDisplay* display /*none*/, ::GdkSurface* surface /*none*/);
Gdk::Monitor base::DisplayBase::get_monitor_at_surface (Gdk::Surface surface) noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkDisplay* display, ::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_monitor_at_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (::GdkSurface*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none*/ gdk_display_get_monitors (GdkDisplay* self /*none*/);
// ::GListModel* /*none*/ gdk_display_get_monitors (::GdkDisplay* self /*none*/);
Gio::ListModel base::DisplayBase::get_monitors () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GdkDisplay* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_monitors;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gdk_display_get_name (GdkDisplay* display /*none*/);
// const char* /*none*/ gdk_display_get_name (::GdkDisplay* display /*none*/);
gi::cstring_v base::DisplayBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_name;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkClipboard* /*none*/ gdk_display_get_primary_clipboard (GdkDisplay* display /*none*/);
// ::GdkClipboard* /*none*/ gdk_display_get_primary_clipboard (::GdkDisplay* display /*none*/);
Gdk::Clipboard base::DisplayBase::get_primary_clipboard () noexcept
{
  typedef ::GdkClipboard* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_primary_clipboard;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_display_get_setting (GdkDisplay* display /*none*/, const char* name /*none*/, GValue* value /*none*/);
// gboolean gdk_display_get_setting (::GdkDisplay* display /*none*/, const char* name /*none*/, ::GValue* value /*none*/);
bool base::DisplayBase::get_setting (const gi::cstring_v name, GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display, const char* name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_get_setting;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (const char*) (name_to_c), (::GValue*) (value_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_display_get_startup_notification_id (GdkDisplay* display /*none*/);
// const char* /*none,nullable*/ gdk_display_get_startup_notification_id (::GdkDisplay* display /*none*/);
// IGNORE; deprecated

// gboolean gdk_display_is_closed (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_closed (::GdkDisplay* display /*none*/);
bool base::DisplayBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_is_closed;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_is_composited (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_composited (::GdkDisplay* display /*none*/);
bool base::DisplayBase::is_composited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_is_composited;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_is_rgba (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_rgba (::GdkDisplay* display /*none*/);
bool base::DisplayBase::is_rgba () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_is_rgba;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// GList* /*container*/ gdk_display_list_seats (GdkDisplay* display /*none*/);
// ::GList* /*container*/ gdk_display_list_seats (::GdkDisplay* display /*none*/);
gi::Collection<GList, ::GdkSeat*, gi::transfer_container_t> base::DisplayBase::list_seats () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_list_seats;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GdkSeat*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// gboolean gdk_display_map_keycode (GdkDisplay* display /*none*/, guint keycode, GdkKeymapKey** keys /*full,out,opt*/, guint** keyvals /*full,out,opt*/, int* n_entries);
// gboolean gdk_display_map_keycode (::GdkDisplay* display /*none*/, guint keycode, ::GdkKeymapKey*** keys /*full,out,opt*/, guint** keyvals /*full,out,opt*/, gint* n_entries);
// SKIP; keys out boxed array not supported (depth 2)

// gboolean gdk_display_map_keyval (GdkDisplay* display /*none*/, guint keyval, GdkKeymapKey** keys /*full,out*/, int* n_keys);
// gboolean gdk_display_map_keyval (::GdkDisplay* display /*none*/, guint keyval, ::GdkKeymapKey*** keys /*full,out*/, gint* n_keys);
// SKIP; keys out boxed array not supported (depth 2)

// void gdk_display_notify_startup_complete (GdkDisplay* display /*none*/, const char* startup_id /*none*/);
// void gdk_display_notify_startup_complete (::GdkDisplay* display /*none*/, const char* startup_id /*none*/);
// IGNORE; deprecated

// gboolean gdk_display_prepare_gl (GdkDisplay* self /*none*/, GError ** error);
// gboolean gdk_display_prepare_gl (::GdkDisplay* self /*none*/, GError ** error);
bool base::DisplayBase::prepare_gl ()
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_prepare_gl;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DisplayBase::prepare_gl (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_prepare_gl;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gdk_display_put_event (GdkDisplay* display /*none*/, GdkEvent* event /*none*/);
// void gdk_display_put_event (::GdkDisplay* display /*none*/,  event /*none*/);
// IGNORE; deprecated

// gboolean gdk_display_supports_input_shapes (GdkDisplay* display /*none*/);
// gboolean gdk_display_supports_input_shapes (::GdkDisplay* display /*none*/);
bool base::DisplayBase::supports_input_shapes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_supports_input_shapes;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// void gdk_display_sync (GdkDisplay* display /*none*/);
// void gdk_display_sync (::GdkDisplay* display /*none*/);
void base::DisplayBase::sync () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_sync;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// gboolean gdk_display_translate_key (GdkDisplay* display /*none*/, guint keycode, GdkModifierType state, int group, guint* keyval, int* effective_group, int* level, GdkModifierType* consumed);
// gboolean gdk_display_translate_key (::GdkDisplay* display /*none*/, guint keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed);
bool base::DisplayBase::translate_key (guint keycode, Gdk::ModifierType state, gint group, guint * keyval, gint * effective_group, gint * level, Gdk::ModifierType * consumed) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display, guint keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_translate_key;
  ::GdkModifierType consumed_o {};
  gint level_o {};
  gint effective_group_o {};
  guint keyval_o {};
  auto group_to_c = group;
  auto state_to_c = gi::unwrap (state);
  auto keycode_to_c = keycode;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (guint) (keycode_to_c), (::GdkModifierType) (state_to_c), (gint) (group_to_c), (guint*) (keyval ? &keyval_o : nullptr), (gint*) (effective_group ? &effective_group_o : nullptr), (gint*) (level ? &level_o : nullptr), (::GdkModifierType*) (consumed ? &consumed_o : nullptr));
  if (consumed) *consumed = gi::wrap (consumed_o);
  if (level) *level = level_o;
  if (effective_group) *effective_group = effective_group_o;
  if (keyval) *keyval = keyval_o;
  return _temp_ret;
}
std::tuple<bool, guint, gint, gint, Gdk::ModifierType> base::DisplayBase::translate_key (guint keycode, Gdk::ModifierType state, gint group) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display, guint keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_display_translate_key;
  ::GdkModifierType consumed_o {};
  gint level_o {};
  gint effective_group_o {};
  guint keyval_o {};
  auto group_to_c = group;
  auto state_to_c = gi::unwrap (state);
  auto keycode_to_c = keycode;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (guint) (keycode_to_c), (::GdkModifierType) (state_to_c), (gint) (group_to_c), (guint*) (&keyval_o), (gint*) (&effective_group_o), (gint*) (&level_o), (::GdkModifierType*) (&consumed_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = keyval_o;
  auto &&tmp_return_3 = effective_group_o;
  auto &&tmp_return_4 = level_o;
  auto &&tmp_return_5 = gi::wrap (consumed_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}







} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/display_extra_def_impl.hpp>)
#include <gdk/display_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/display_extra_impl.hpp>)
#include <gdk/display_extra_impl.hpp>
#endif
#endif

#endif
