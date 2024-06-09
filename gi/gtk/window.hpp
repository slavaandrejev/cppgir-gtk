// AUTO-GENERATED

#ifndef _GI_GTK_WINDOW_HPP_
#define _GI_GTK_WINDOW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Application;
class Native;
class Root;
class ShortcutManager;
class Widget;
class WindowGroup;

class Window;

namespace base {


#define GI_GTK_WINDOW_BASE base::WindowBase
class WindowBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkWindow BaseObjectType;

WindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_get_type(); } 

GI_INLINE_DECL Gtk::Native interface_ (gi::interface_tag<Gtk::Native>);

GI_INLINE_DECL operator Gtk::Native ();

GI_INLINE_DECL Gtk::Root interface_ (gi::interface_tag<Gtk::Root>);

GI_INLINE_DECL operator Gtk::Root ();

GI_INLINE_DECL Gtk::ShortcutManager interface_ (gi::interface_tag<Gtk::ShortcutManager>);

GI_INLINE_DECL operator Gtk::ShortcutManager ();

// GtkWidget* /*none*/ gtk_window_new ();
// ::GtkWindow* /*none*/ gtk_window_new ();
static GI_INLINE_DECL Gtk::Window new_ () noexcept;

// const char* /*none,nullable*/ gtk_window_get_default_icon_name ();
// const char* /*none,nullable*/ gtk_window_get_default_icon_name ();
static GI_INLINE_DECL gi::cstring_v get_default_icon_name () noexcept;

// GListModel* /*none*/ gtk_window_get_toplevels ();
// ::GListModel* /*none*/ gtk_window_get_toplevels ();
static GI_INLINE_DECL Gio::ListModel get_toplevels () noexcept;

// GList* /*container*/ gtk_window_list_toplevels ();
// ::GList* /*container*/ gtk_window_list_toplevels ();
static GI_INLINE_DECL gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t> list_toplevels () noexcept;

// void gtk_window_set_auto_startup_notification (gboolean setting);
// void gtk_window_set_auto_startup_notification (gboolean setting);
static GI_INLINE_DECL void set_auto_startup_notification (gboolean setting) noexcept;

// void gtk_window_set_default_icon_name (const char* name /*none*/);
// void gtk_window_set_default_icon_name (const char* name /*none*/);
static GI_INLINE_DECL void set_default_icon_name (const gi::cstring_v name) noexcept;

// void gtk_window_set_interactive_debugging (gboolean enable);
// void gtk_window_set_interactive_debugging (gboolean enable);
static GI_INLINE_DECL void set_interactive_debugging (gboolean enable) noexcept;

// void gtk_window_close (GtkWindow* window /*none*/);
// void gtk_window_close (::GtkWindow* window /*none*/);
GI_INLINE_DECL void close () noexcept;

// void gtk_window_destroy (GtkWindow* window /*none*/);
// void gtk_window_destroy (::GtkWindow* window /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// void gtk_window_fullscreen (GtkWindow* window /*none*/);
// void gtk_window_fullscreen (::GtkWindow* window /*none*/);
GI_INLINE_DECL void fullscreen () noexcept;

// void gtk_window_fullscreen_on_monitor (GtkWindow* window /*none*/, GdkMonitor* monitor /*none*/);
// void gtk_window_fullscreen_on_monitor (::GtkWindow* window /*none*/, ::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL void fullscreen_on_monitor (Gdk::Monitor monitor) noexcept;

// GtkApplication* /*none,nullable*/ gtk_window_get_application (GtkWindow* window /*none*/);
// ::GtkApplication* /*none,nullable*/ gtk_window_get_application (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Application get_application () noexcept;

// GtkWidget* /*none,nullable*/ gtk_window_get_child (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_child (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_window_get_decorated (GtkWindow* window /*none*/);
// gboolean gtk_window_get_decorated (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_decorated () noexcept;

// void gtk_window_get_default_size (GtkWindow* window /*none*/, int* width, int* height);
// void gtk_window_get_default_size (::GtkWindow* window /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_default_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_default_size () noexcept;

// GtkWidget* /*none,nullable*/ gtk_window_get_default_widget (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_default_widget (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Widget get_default_widget () noexcept;

// gboolean gtk_window_get_deletable (GtkWindow* window /*none*/);
// gboolean gtk_window_get_deletable (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_deletable () noexcept;

// gboolean gtk_window_get_destroy_with_parent (GtkWindow* window /*none*/);
// gboolean gtk_window_get_destroy_with_parent (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_destroy_with_parent () noexcept;

// GtkWidget* /*none,nullable*/ gtk_window_get_focus (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_focus (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Widget get_focus () noexcept;

// gboolean gtk_window_get_focus_visible (GtkWindow* window /*none*/);
// gboolean gtk_window_get_focus_visible (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_focus_visible () noexcept;

// GtkWindowGroup* /*none*/ gtk_window_get_group (GtkWindow* window /*none,nullable*/);
// ::GtkWindowGroup* /*none*/ gtk_window_get_group (::GtkWindow* window /*none,nullable*/);
GI_INLINE_DECL Gtk::WindowGroup get_group () noexcept;

// gboolean gtk_window_get_handle_menubar_accel (GtkWindow* window /*none*/);
// gboolean gtk_window_get_handle_menubar_accel (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_handle_menubar_accel () noexcept;

// gboolean gtk_window_get_hide_on_close (GtkWindow* window /*none*/);
// gboolean gtk_window_get_hide_on_close (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_hide_on_close () noexcept;

// const char* /*none,nullable*/ gtk_window_get_icon_name (GtkWindow* window /*none*/);
// const char* /*none,nullable*/ gtk_window_get_icon_name (::GtkWindow* window /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// gboolean gtk_window_get_mnemonics_visible (GtkWindow* window /*none*/);
// gboolean gtk_window_get_mnemonics_visible (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_mnemonics_visible () noexcept;

// gboolean gtk_window_get_modal (GtkWindow* window /*none*/);
// gboolean gtk_window_get_modal (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// gboolean gtk_window_get_resizable (GtkWindow* window /*none*/);
// gboolean gtk_window_get_resizable (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool get_resizable () noexcept;

// const char* /*none,nullable*/ gtk_window_get_title (GtkWindow* window /*none*/);
// const char* /*none,nullable*/ gtk_window_get_title (::GtkWindow* window /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// GtkWidget* /*none,nullable*/ gtk_window_get_titlebar (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_titlebar (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Widget get_titlebar () noexcept;

// GtkWindow* /*none,nullable*/ gtk_window_get_transient_for (GtkWindow* window /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_window_get_transient_for (::GtkWindow* window /*none*/);
GI_INLINE_DECL Gtk::Window get_transient_for () noexcept;

// gboolean gtk_window_has_group (GtkWindow* window /*none*/);
// gboolean gtk_window_has_group (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool has_group () noexcept;

// gboolean gtk_window_is_active (GtkWindow* window /*none*/);
// gboolean gtk_window_is_active (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gtk_window_is_fullscreen (GtkWindow* window /*none*/);
// gboolean gtk_window_is_fullscreen (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool is_fullscreen () noexcept;

// gboolean gtk_window_is_maximized (GtkWindow* window /*none*/);
// gboolean gtk_window_is_maximized (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool is_maximized () noexcept;

// gboolean gtk_window_is_suspended (GtkWindow* window /*none*/);
// gboolean gtk_window_is_suspended (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool is_suspended () noexcept;

// void gtk_window_maximize (GtkWindow* window /*none*/);
// void gtk_window_maximize (::GtkWindow* window /*none*/);
GI_INLINE_DECL void maximize () noexcept;

// void gtk_window_minimize (GtkWindow* window /*none*/);
// void gtk_window_minimize (::GtkWindow* window /*none*/);
GI_INLINE_DECL void minimize () noexcept;

// void gtk_window_present (GtkWindow* window /*none*/);
// void gtk_window_present (::GtkWindow* window /*none*/);
GI_INLINE_DECL void present () noexcept;

// void gtk_window_present_with_time (GtkWindow* window /*none*/, guint32 timestamp);
// void gtk_window_present_with_time (::GtkWindow* window /*none*/, guint32 timestamp);
GI_INLINE_DECL void present_with_time (guint32 timestamp) noexcept;

// void gtk_window_set_application (GtkWindow* window /*none*/, GtkApplication* application /*none,nullable*/);
// void gtk_window_set_application (::GtkWindow* window /*none*/, ::GtkApplication* application /*none,nullable*/);
GI_INLINE_DECL void set_application (Gtk::Application application) noexcept;
GI_INLINE_DECL void set_application () noexcept;

// void gtk_window_set_child (GtkWindow* window /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_window_set_child (::GtkWindow* window /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_window_set_decorated (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_decorated (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_decorated (gboolean setting) noexcept;

// void gtk_window_set_default_size (GtkWindow* window /*none*/, int width, int height);
// void gtk_window_set_default_size (::GtkWindow* window /*none*/, gint width, gint height);
GI_INLINE_DECL void set_default_size (gint width, gint height) noexcept;

// void gtk_window_set_default_widget (GtkWindow* window /*none*/, GtkWidget* default_widget /*none,nullable*/);
// void gtk_window_set_default_widget (::GtkWindow* window /*none*/, ::GtkWidget* default_widget /*none,nullable*/);
GI_INLINE_DECL void set_default_widget (Gtk::Widget default_widget) noexcept;
GI_INLINE_DECL void set_default_widget () noexcept;

// void gtk_window_set_deletable (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_deletable (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_deletable (gboolean setting) noexcept;

// void gtk_window_set_destroy_with_parent (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_destroy_with_parent (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_destroy_with_parent (gboolean setting) noexcept;

// void gtk_window_set_display (GtkWindow* window /*none*/, GdkDisplay* display /*none*/);
// void gtk_window_set_display (::GtkWindow* window /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL void set_display (Gdk::Display display) noexcept;

// void gtk_window_set_focus (GtkWindow* window /*none*/, GtkWidget* focus /*none,nullable*/);
// void gtk_window_set_focus (::GtkWindow* window /*none*/, ::GtkWidget* focus /*none,nullable*/);
GI_INLINE_DECL void set_focus (Gtk::Widget focus) noexcept;
GI_INLINE_DECL void set_focus () noexcept;

// void gtk_window_set_focus_visible (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_focus_visible (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_focus_visible (gboolean setting) noexcept;

// void gtk_window_set_handle_menubar_accel (GtkWindow* window /*none*/, gboolean handle_menubar_accel);
// void gtk_window_set_handle_menubar_accel (::GtkWindow* window /*none*/, gboolean handle_menubar_accel);
GI_INLINE_DECL void set_handle_menubar_accel (gboolean handle_menubar_accel) noexcept;

// void gtk_window_set_hide_on_close (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_hide_on_close (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_hide_on_close (gboolean setting) noexcept;

// void gtk_window_set_icon_name (GtkWindow* window /*none*/, const char* name /*none,nullable*/);
// void gtk_window_set_icon_name (::GtkWindow* window /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void gtk_window_set_mnemonics_visible (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_mnemonics_visible (::GtkWindow* window /*none*/, gboolean setting);
GI_INLINE_DECL void set_mnemonics_visible (gboolean setting) noexcept;

// void gtk_window_set_modal (GtkWindow* window /*none*/, gboolean modal);
// void gtk_window_set_modal (::GtkWindow* window /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_window_set_resizable (GtkWindow* window /*none*/, gboolean resizable);
// void gtk_window_set_resizable (::GtkWindow* window /*none*/, gboolean resizable);
GI_INLINE_DECL void set_resizable (gboolean resizable) noexcept;

// void gtk_window_set_startup_id (GtkWindow* window /*none*/, const char* startup_id /*none*/);
// void gtk_window_set_startup_id (::GtkWindow* window /*none*/, const char* startup_id /*none*/);
GI_INLINE_DECL void set_startup_id (const gi::cstring_v startup_id) noexcept;

// void gtk_window_set_title (GtkWindow* window /*none*/, const char* title /*none,nullable*/);
// void gtk_window_set_title (::GtkWindow* window /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

// void gtk_window_set_titlebar (GtkWindow* window /*none*/, GtkWidget* titlebar /*none,nullable*/);
// void gtk_window_set_titlebar (::GtkWindow* window /*none*/, ::GtkWidget* titlebar /*none,nullable*/);
GI_INLINE_DECL void set_titlebar (Gtk::Widget titlebar) noexcept;
GI_INLINE_DECL void set_titlebar () noexcept;

// void gtk_window_set_transient_for (GtkWindow* window /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_window_set_transient_for (::GtkWindow* window /*none*/, ::GtkWindow* parent /*none,nullable*/);
GI_INLINE_DECL void set_transient_for (Gtk::Window parent) noexcept;
GI_INLINE_DECL void set_transient_for () noexcept;

// void gtk_window_unfullscreen (GtkWindow* window /*none*/);
// void gtk_window_unfullscreen (::GtkWindow* window /*none*/);
GI_INLINE_DECL void unfullscreen () noexcept;

// void gtk_window_unmaximize (GtkWindow* window /*none*/);
// void gtk_window_unmaximize (::GtkWindow* window /*none*/);
GI_INLINE_DECL void unmaximize () noexcept;

// void gtk_window_unminimize (GtkWindow* window /*none*/);
// void gtk_window_unminimize (::GtkWindow* window /*none*/);
GI_INLINE_DECL void unminimize () noexcept;

gi::property_proxy<Gtk::Application, base::WindowBase> property_application()
{ return gi::property_proxy<Gtk::Application, base::WindowBase> (*this, "application"); }
const gi::property_proxy<Gtk::Application, base::WindowBase> property_application() const
{ return gi::property_proxy<Gtk::Application, base::WindowBase> (*this, "application"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "child"); }

gi::property_proxy<bool, base::WindowBase> property_decorated()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "decorated"); }
const gi::property_proxy<bool, base::WindowBase> property_decorated() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "decorated"); }

gi::property_proxy<gint, base::WindowBase> property_default_height()
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-height"); }
const gi::property_proxy<gint, base::WindowBase> property_default_height() const
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-height"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_default_widget()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "default-widget"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_default_widget() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "default-widget"); }

gi::property_proxy<gint, base::WindowBase> property_default_width()
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-width"); }
const gi::property_proxy<gint, base::WindowBase> property_default_width() const
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-width"); }

gi::property_proxy<bool, base::WindowBase> property_deletable()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "deletable"); }
const gi::property_proxy<bool, base::WindowBase> property_deletable() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "deletable"); }

gi::property_proxy<bool, base::WindowBase> property_destroy_with_parent()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "destroy-with-parent"); }
const gi::property_proxy<bool, base::WindowBase> property_destroy_with_parent() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "destroy-with-parent"); }

gi::property_proxy<Gdk::Display, base::WindowBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::WindowBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::WindowBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::WindowBase> (*this, "display"); }

gi::property_proxy<bool, base::WindowBase> property_focus_visible()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-visible"); }
const gi::property_proxy<bool, base::WindowBase> property_focus_visible() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-visible"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_focus_widget()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "focus-widget"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_focus_widget() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "focus-widget"); }

gi::property_proxy<bool, base::WindowBase> property_fullscreened()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "fullscreened"); }
const gi::property_proxy<bool, base::WindowBase> property_fullscreened() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "fullscreened"); }

gi::property_proxy<bool, base::WindowBase> property_handle_menubar_accel()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "handle-menubar-accel"); }
const gi::property_proxy<bool, base::WindowBase> property_handle_menubar_accel() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "handle-menubar-accel"); }

gi::property_proxy<bool, base::WindowBase> property_hide_on_close()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "hide-on-close"); }
const gi::property_proxy<bool, base::WindowBase> property_hide_on_close() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "hide-on-close"); }

gi::property_proxy<gi::cstring, base::WindowBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::WindowBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::WindowBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::WindowBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::WindowBase> property_is_active()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-active"); }
const gi::property_proxy<bool, base::WindowBase> property_is_active() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-active"); }

gi::property_proxy<bool, base::WindowBase> property_maximized()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "maximized"); }
const gi::property_proxy<bool, base::WindowBase> property_maximized() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "maximized"); }

gi::property_proxy<bool, base::WindowBase> property_mnemonics_visible()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "mnemonics-visible"); }
const gi::property_proxy<bool, base::WindowBase> property_mnemonics_visible() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "mnemonics-visible"); }

gi::property_proxy<bool, base::WindowBase> property_modal()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "modal"); }
const gi::property_proxy<bool, base::WindowBase> property_modal() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "modal"); }

gi::property_proxy<bool, base::WindowBase> property_resizable()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resizable"); }
const gi::property_proxy<bool, base::WindowBase> property_resizable() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resizable"); }

gi::property_proxy_write<gi::cstring, base::WindowBase> property_startup_id()
{ return gi::property_proxy_write<gi::cstring, base::WindowBase> (*this, "startup-id"); }

gi::property_proxy<bool, base::WindowBase> property_suspended()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "suspended"); }
const gi::property_proxy<bool, base::WindowBase> property_suspended() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "suspended"); }

gi::property_proxy<gi::cstring, base::WindowBase> property_title()
{ return gi::property_proxy<gi::cstring, base::WindowBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::WindowBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::WindowBase> (*this, "title"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_titlebar()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "titlebar"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_titlebar() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "titlebar"); }

gi::property_proxy<Gtk::Window, base::WindowBase> property_transient_for()
{ return gi::property_proxy<Gtk::Window, base::WindowBase> (*this, "transient-for"); }
const gi::property_proxy<Gtk::Window, base::WindowBase> property_transient_for() const
{ return gi::property_proxy<Gtk::Window, base::WindowBase> (*this, "transient-for"); }

// (signal) void activate-default ();
// (signal) void activate-default ();
gi::signal_proxy<void(Gtk::Window)> signal_activate_default()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "activate-default"); }

// (signal) void activate-focus ();
// (signal) void activate-focus ();
gi::signal_proxy<void(Gtk::Window)> signal_activate_focus()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "activate-focus"); }

// (signal) gboolean close-request ();
// (signal) gboolean close-request ();
gi::signal_proxy<bool(Gtk::Window)> signal_close_request()
{ return gi::signal_proxy<bool(Gtk::Window)> (*this, "close-request"); }

// (signal) gboolean enable-debugging (gboolean toggle);
// (signal) gboolean enable-debugging (gboolean toggle);
gi::signal_proxy<bool(Gtk::Window, gboolean toggle)> signal_enable_debugging()
{ return gi::signal_proxy<bool(Gtk::Window, gboolean toggle)> (*this, "enable-debugging"); }

// (signal) void keys-changed ();
// (signal) void keys-changed ();
gi::signal_proxy<void(Gtk::Window)> signal_keys_changed()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "keys-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/window_extra_def.hpp>)
#include <gtk/window_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/window_extra.hpp>)
#include <gtk/window_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Window : public GI_GTK_WINDOW_BASE
{ typedef GI_GTK_WINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindow>
{ typedef Gtk::Window type; }; 

} // namespace repository

} // namespace gi

#include "shortcutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowClassDef
{
typedef WindowClassDef self;
public:
typedef Gtk::Window instance_type;
typedef ::GtkWindowClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate_default) = self;
using GI_MEMBER_CHECK_CONFLICT(activate_focus) = self;
using GI_MEMBER_CHECK_CONFLICT(close_request) = self;
using GI_MEMBER_CHECK_CONFLICT(enable_debugging) = self;
using GI_MEMBER_CHECK_CONFLICT(keys_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Window::activate_default (GtkWindow* window /*none*/);
// void Window::activate_default (::GtkWindow* window /*none*/);
virtual void activate_default_ () noexcept = 0;

// void Window::activate_focus (GtkWindow* window /*none*/);
// void Window::activate_focus (::GtkWindow* window /*none*/);
virtual void activate_focus_ () noexcept = 0;

// gboolean Window::close_request (GtkWindow* window /*none*/);
// gboolean Window::close_request (::GtkWindow* window /*none*/);
virtual bool close_request_ () noexcept = 0;

// gboolean Window::enable_debugging (GtkWindow* window /*none*/, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window /*none*/, gboolean toggle);
virtual bool enable_debugging_ (gboolean toggle) noexcept = 0;

// void Window::keys_changed (GtkWindow* window /*none*/);
// void Window::keys_changed (::GtkWindow* window /*none*/);
virtual void keys_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WindowClass: public detail::ClassTemplate<Gtk::impl::internal::WindowClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl>
{
friend class internal::WindowClassDef;
typedef WindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ShortcutManagerInterfaceClassImpl GtkShortcutManagerInterface_type;


// void Window::activate_default (GtkWindow* window /*none*/);
// void Window::activate_default (::GtkWindow* window /*none*/);
GI_INLINE_DECL void activate_default_ () noexcept override;

// void Window::activate_focus (GtkWindow* window /*none*/);
// void Window::activate_focus (::GtkWindow* window /*none*/);
GI_INLINE_DECL void activate_focus_ () noexcept override;

// gboolean Window::close_request (GtkWindow* window /*none*/);
// gboolean Window::close_request (::GtkWindow* window /*none*/);
GI_INLINE_DECL bool close_request_ () noexcept override;

// gboolean Window::enable_debugging (GtkWindow* window /*none*/, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window /*none*/, gboolean toggle);
GI_INLINE_DECL bool enable_debugging_ (gboolean toggle) noexcept override;

// void Window::keys_changed (GtkWindow* window /*none*/);
// void Window::keys_changed (::GtkWindow* window /*none*/);
GI_INLINE_DECL void keys_changed_ () noexcept override;


};


struct WindowClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(WindowClass, activate_default)
  GI_MEMBER_DEFINE(WindowClass, activate_focus)
  GI_MEMBER_DEFINE(WindowClass, close_request)
  GI_MEMBER_DEFINE(WindowClass, enable_debugging)
  GI_MEMBER_DEFINE(WindowClass, keys_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_default),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_focus),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_request),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enable_debugging),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, keys_changed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using WindowImpl = detail::ObjectImpl<Window, internal::WindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
