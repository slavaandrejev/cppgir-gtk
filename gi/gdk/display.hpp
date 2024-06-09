// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAY_HPP_
#define _GI_GDK_DISPLAY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class AppLaunchContext;
class Clipboard;
class Device;
class GLContext;
class KeymapKey;
class KeymapKey_Ref;
class Monitor;
class Seat;
class Surface;

class Display;

namespace base {


#define GI_GDK_DISPLAY_BASE base::DisplayBase
class DisplayBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDisplay BaseObjectType;

DisplayBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_display_get_type(); } 

// GdkDisplay* /*none,nullable*/ gdk_display_get_default ();
// ::GdkDisplay* /*none,nullable*/ gdk_display_get_default ();
static GI_INLINE_DECL Gdk::Display get_default () noexcept;

// GdkDisplay* /*none,nullable*/ gdk_display_open (const char* display_name /*none,nullable*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_open (const char* display_name /*none,nullable*/);
static GI_INLINE_DECL Gdk::Display open (const gi::cstring_v display_name) noexcept;
static GI_INLINE_DECL Gdk::Display open () noexcept;

// void gdk_display_beep (GdkDisplay* display /*none*/);
// void gdk_display_beep (::GdkDisplay* display /*none*/);
GI_INLINE_DECL void beep () noexcept;

// void gdk_display_close (GdkDisplay* display /*none*/);
// void gdk_display_close (::GdkDisplay* display /*none*/);
GI_INLINE_DECL void close () noexcept;

// GdkGLContext* /*full*/ gdk_display_create_gl_context (GdkDisplay* self /*none*/, GError ** error);
// ::GdkGLContext* /*full*/ gdk_display_create_gl_context (::GdkDisplay* self /*none*/, GError ** error);
GI_INLINE_DECL Gdk::GLContext create_gl_context ();
GI_INLINE_DECL Gdk::GLContext create_gl_context (GLib::Error * _error) noexcept;

// gboolean gdk_display_device_is_grabbed (GdkDisplay* display /*none*/, GdkDevice* device /*none*/);
// gboolean gdk_display_device_is_grabbed (::GdkDisplay* display /*none*/, ::GdkDevice* device /*none*/);
GI_INLINE_DECL bool device_is_grabbed (Gdk::Device device) noexcept;

// void gdk_display_flush (GdkDisplay* display /*none*/);
// void gdk_display_flush (::GdkDisplay* display /*none*/);
GI_INLINE_DECL void flush () noexcept;

// GdkAppLaunchContext* /*full*/ gdk_display_get_app_launch_context (GdkDisplay* display /*none*/);
// ::GdkAppLaunchContext* /*full*/ gdk_display_get_app_launch_context (::GdkDisplay* display /*none*/);
GI_INLINE_DECL Gdk::AppLaunchContext get_app_launch_context () noexcept;

// GdkClipboard* /*none*/ gdk_display_get_clipboard (GdkDisplay* display /*none*/);
// ::GdkClipboard* /*none*/ gdk_display_get_clipboard (::GdkDisplay* display /*none*/);
GI_INLINE_DECL Gdk::Clipboard get_clipboard () noexcept;

// GdkSeat* /*none,nullable*/ gdk_display_get_default_seat (GdkDisplay* display /*none*/);
// ::GdkSeat* /*none,nullable*/ gdk_display_get_default_seat (::GdkDisplay* display /*none*/);
GI_INLINE_DECL Gdk::Seat get_default_seat () noexcept;

// GdkMonitor* /*none,nullable*/ gdk_display_get_monitor_at_surface (GdkDisplay* display /*none*/, GdkSurface* surface /*none*/);
// ::GdkMonitor* /*none,nullable*/ gdk_display_get_monitor_at_surface (::GdkDisplay* display /*none*/, ::GdkSurface* surface /*none*/);
GI_INLINE_DECL Gdk::Monitor get_monitor_at_surface (Gdk::Surface surface) noexcept;

// GListModel* /*none*/ gdk_display_get_monitors (GdkDisplay* self /*none*/);
// ::GListModel* /*none*/ gdk_display_get_monitors (::GdkDisplay* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_monitors () noexcept;

// const char* /*none*/ gdk_display_get_name (GdkDisplay* display /*none*/);
// const char* /*none*/ gdk_display_get_name (::GdkDisplay* display /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// GdkClipboard* /*none*/ gdk_display_get_primary_clipboard (GdkDisplay* display /*none*/);
// ::GdkClipboard* /*none*/ gdk_display_get_primary_clipboard (::GdkDisplay* display /*none*/);
GI_INLINE_DECL Gdk::Clipboard get_primary_clipboard () noexcept;

// gboolean gdk_display_get_setting (GdkDisplay* display /*none*/, const char* name /*none*/, GValue* value /*none*/);
// gboolean gdk_display_get_setting (::GdkDisplay* display /*none*/, const char* name /*none*/, ::GValue* value /*none*/);
GI_INLINE_DECL bool get_setting (const gi::cstring_v name, GObject::Value_Ref value) noexcept;

// const char* /*none,nullable*/ gdk_display_get_startup_notification_id (GdkDisplay* display /*none*/);
// const char* /*none,nullable*/ gdk_display_get_startup_notification_id (::GdkDisplay* display /*none*/);
// IGNORE; deprecated

// gboolean gdk_display_is_closed (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_closed (::GdkDisplay* display /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean gdk_display_is_composited (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_composited (::GdkDisplay* display /*none*/);
GI_INLINE_DECL bool is_composited () noexcept;

// gboolean gdk_display_is_rgba (GdkDisplay* display /*none*/);
// gboolean gdk_display_is_rgba (::GdkDisplay* display /*none*/);
GI_INLINE_DECL bool is_rgba () noexcept;

// GList* /*container*/ gdk_display_list_seats (GdkDisplay* display /*none*/);
// ::GList* /*container*/ gdk_display_list_seats (::GdkDisplay* display /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GdkSeat*, gi::transfer_container_t> list_seats () noexcept;

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
GI_INLINE_DECL bool prepare_gl ();
GI_INLINE_DECL bool prepare_gl (GLib::Error * _error) noexcept;

// void gdk_display_put_event (GdkDisplay* display /*none*/, GdkEvent* event /*none*/);
// void gdk_display_put_event (::GdkDisplay* display /*none*/,  event /*none*/);
// IGNORE; deprecated

// gboolean gdk_display_supports_input_shapes (GdkDisplay* display /*none*/);
// gboolean gdk_display_supports_input_shapes (::GdkDisplay* display /*none*/);
GI_INLINE_DECL bool supports_input_shapes () noexcept;

// void gdk_display_sync (GdkDisplay* display /*none*/);
// void gdk_display_sync (::GdkDisplay* display /*none*/);
GI_INLINE_DECL void sync () noexcept;

// gboolean gdk_display_translate_key (GdkDisplay* display /*none*/, guint keycode, GdkModifierType state, int group, guint* keyval, int* effective_group, int* level, GdkModifierType* consumed);
// gboolean gdk_display_translate_key (::GdkDisplay* display /*none*/, guint keycode, ::GdkModifierType state, gint group, guint* keyval, gint* effective_group, gint* level, ::GdkModifierType* consumed);
GI_INLINE_DECL bool translate_key (guint keycode, Gdk::ModifierType state, gint group, guint * keyval, gint * effective_group, gint * level, Gdk::ModifierType * consumed) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, gint, gint, Gdk::ModifierType> translate_key (guint keycode, Gdk::ModifierType state, gint group) noexcept;

gi::property_proxy<bool, base::DisplayBase> property_composited()
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "composited"); }
const gi::property_proxy<bool, base::DisplayBase> property_composited() const
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "composited"); }

gi::property_proxy<bool, base::DisplayBase> property_input_shapes()
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "input-shapes"); }
const gi::property_proxy<bool, base::DisplayBase> property_input_shapes() const
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "input-shapes"); }

gi::property_proxy<bool, base::DisplayBase> property_rgba()
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "rgba"); }
const gi::property_proxy<bool, base::DisplayBase> property_rgba() const
{ return gi::property_proxy<bool, base::DisplayBase> (*this, "rgba"); }

// (signal) void closed (gboolean is_error);
// (signal) void closed (gboolean is_error);
gi::signal_proxy<void(Gdk::Display, gboolean is_error)> signal_closed()
{ return gi::signal_proxy<void(Gdk::Display, gboolean is_error)> (*this, "closed"); }

// (signal) void opened ();
// (signal) void opened ();
gi::signal_proxy<void(Gdk::Display)> signal_opened()
{ return gi::signal_proxy<void(Gdk::Display)> (*this, "opened"); }

// (signal) void seat-added ( seat /*none*/);
// (signal) void seat-added (::GdkSeat* seat /*none*/);
gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> signal_seat_added()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> (*this, "seat-added"); }

// (signal) void seat-removed ( seat /*none*/);
// (signal) void seat-removed (::GdkSeat* seat /*none*/);
gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> signal_seat_removed()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> (*this, "seat-removed"); }

// (signal) void setting-changed (gchar* setting /*none*/);
// (signal) void setting-changed (char* setting /*none*/);
gi::signal_proxy<void(Gdk::Display, gi::cstring_v setting)> signal_setting_changed()
{ return gi::signal_proxy<void(Gdk::Display, gi::cstring_v setting)> (*this, "setting-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/display_extra_def.hpp>)
#include <gdk/display_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/display_extra.hpp>)
#include <gdk/display_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Display : public GI_GDK_DISPLAY_BASE
{ typedef GI_GDK_DISPLAY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDisplay>
{ typedef Gdk::Display type; }; 

} // namespace repository

} // namespace gi

#endif
