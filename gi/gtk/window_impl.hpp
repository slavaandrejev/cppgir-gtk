// AUTO-GENERATED

#ifndef _GI_GTK_WINDOW_IMPL_HPP_
#define _GI_GTK_WINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Native WindowBase::interface_ (gi::interface_tag<Gtk::Native>)
{ return gi::wrap ((Gtk::Native::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WindowBase::operator Gtk::Native ()
{ return interface_ (gi::interface_tag<Gtk::Native>()); }

Gtk::Root WindowBase::interface_ (gi::interface_tag<Gtk::Root>)
{ return gi::wrap ((Gtk::Root::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WindowBase::operator Gtk::Root ()
{ return interface_ (gi::interface_tag<Gtk::Root>()); }

Gtk::ShortcutManager WindowBase::interface_ (gi::interface_tag<Gtk::ShortcutManager>)
{ return gi::wrap ((Gtk::ShortcutManager::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WindowBase::operator Gtk::ShortcutManager ()
{ return interface_ (gi::interface_tag<Gtk::ShortcutManager>()); }

// GtkWidget* /*none*/ gtk_window_new ();
// ::GtkWindow* /*none*/ gtk_window_new ();
Gtk::Window base::WindowBase::new_ () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_window_get_default_icon_name ();
// const char* /*none,nullable*/ gtk_window_get_default_icon_name ();
gi::cstring_v base::WindowBase::get_default_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_default_icon_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none*/ gtk_window_get_toplevels ();
// ::GListModel* /*none*/ gtk_window_get_toplevels ();
Gio::ListModel base::WindowBase::get_toplevels () noexcept
{
  typedef ::GListModel* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_toplevels;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*container*/ gtk_window_list_toplevels ();
// ::GList* /*container*/ gtk_window_list_toplevels ();
gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t> base::WindowBase::list_toplevels () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_list_toplevels;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_window_set_auto_startup_notification (gboolean setting);
// void gtk_window_set_auto_startup_notification (gboolean setting);
void base::WindowBase::set_auto_startup_notification (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_auto_startup_notification;
  auto setting_to_c = setting;
  call_wrap_v ((gboolean) (setting_to_c));
}

// void gtk_window_set_default_icon_name (const char* name /*none*/);
// void gtk_window_set_default_icon_name (const char* name /*none*/);
void base::WindowBase::set_default_icon_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_default_icon_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((const char*) (name_to_c));
}

// void gtk_window_set_interactive_debugging (gboolean enable);
// void gtk_window_set_interactive_debugging (gboolean enable);
void base::WindowBase::set_interactive_debugging (gboolean enable) noexcept
{
  typedef void (*call_wrap_t) (gboolean enable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_interactive_debugging;
  auto enable_to_c = enable;
  call_wrap_v ((gboolean) (enable_to_c));
}

// void gtk_window_close (GtkWindow* window /*none*/);
// void gtk_window_close (::GtkWindow* window /*none*/);
void base::WindowBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_close;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_destroy (GtkWindow* window /*none*/);
// void gtk_window_destroy (::GtkWindow* window /*none*/);
void base::WindowBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_destroy;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_fullscreen (GtkWindow* window /*none*/);
// void gtk_window_fullscreen (::GtkWindow* window /*none*/);
void base::WindowBase::fullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_fullscreen;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_fullscreen_on_monitor (GtkWindow* window /*none*/, GdkMonitor* monitor /*none*/);
// void gtk_window_fullscreen_on_monitor (::GtkWindow* window /*none*/, ::GdkMonitor* monitor /*none*/);
void base::WindowBase::fullscreen_on_monitor (Gdk::Monitor monitor) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_fullscreen_on_monitor;
  auto monitor_to_c = gi::unwrap (monitor, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkMonitor*) (monitor_to_c));
}

// GtkApplication* /*none,nullable*/ gtk_window_get_application (GtkWindow* window /*none*/);
// ::GtkApplication* /*none,nullable*/ gtk_window_get_application (::GtkWindow* window /*none*/);
Gtk::Application base::WindowBase::get_application () noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_application;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_window_get_child (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_child (::GtkWindow* window /*none*/);
Gtk::Widget base::WindowBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_child;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_get_decorated (GtkWindow* window /*none*/);
// gboolean gtk_window_get_decorated (::GtkWindow* window /*none*/);
bool base::WindowBase::get_decorated () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_decorated;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_window_get_default_size (GtkWindow* window /*none*/, int* width, int* height);
// void gtk_window_get_default_size (::GtkWindow* window /*none*/, gint* width, gint* height);
void base::WindowBase::get_default_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_default_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::WindowBase::get_default_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_default_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkWidget* /*none,nullable*/ gtk_window_get_default_widget (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_default_widget (::GtkWindow* window /*none*/);
Gtk::Widget base::WindowBase::get_default_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_default_widget;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_get_deletable (GtkWindow* window /*none*/);
// gboolean gtk_window_get_deletable (::GtkWindow* window /*none*/);
bool base::WindowBase::get_deletable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_deletable;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_destroy_with_parent (GtkWindow* window /*none*/);
// gboolean gtk_window_get_destroy_with_parent (::GtkWindow* window /*none*/);
bool base::WindowBase::get_destroy_with_parent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_destroy_with_parent;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_window_get_focus (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_focus (::GtkWindow* window /*none*/);
Gtk::Widget base::WindowBase::get_focus () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_focus;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_get_focus_visible (GtkWindow* window /*none*/);
// gboolean gtk_window_get_focus_visible (::GtkWindow* window /*none*/);
bool base::WindowBase::get_focus_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_focus_visible;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWindowGroup* /*none*/ gtk_window_get_group (GtkWindow* window /*none,nullable*/);
// ::GtkWindowGroup* /*none*/ gtk_window_get_group (::GtkWindow* window /*none,nullable*/);
Gtk::WindowGroup base::WindowBase::get_group () noexcept
{
  typedef ::GtkWindowGroup* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_group;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_get_handle_menubar_accel (GtkWindow* window /*none*/);
// gboolean gtk_window_get_handle_menubar_accel (::GtkWindow* window /*none*/);
bool base::WindowBase::get_handle_menubar_accel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_handle_menubar_accel;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_hide_on_close (GtkWindow* window /*none*/);
// gboolean gtk_window_get_hide_on_close (::GtkWindow* window /*none*/);
bool base::WindowBase::get_hide_on_close () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_hide_on_close;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_window_get_icon_name (GtkWindow* window /*none*/);
// const char* /*none,nullable*/ gtk_window_get_icon_name (::GtkWindow* window /*none*/);
gi::cstring_v base::WindowBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_get_mnemonics_visible (GtkWindow* window /*none*/);
// gboolean gtk_window_get_mnemonics_visible (::GtkWindow* window /*none*/);
bool base::WindowBase::get_mnemonics_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_mnemonics_visible;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_modal (GtkWindow* window /*none*/);
// gboolean gtk_window_get_modal (::GtkWindow* window /*none*/);
bool base::WindowBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_resizable (GtkWindow* window /*none*/);
// gboolean gtk_window_get_resizable (::GtkWindow* window /*none*/);
bool base::WindowBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_resizable;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_window_get_title (GtkWindow* window /*none*/);
// const char* /*none,nullable*/ gtk_window_get_title (::GtkWindow* window /*none*/);
gi::cstring_v base::WindowBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_title;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_window_get_titlebar (GtkWindow* window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_get_titlebar (::GtkWindow* window /*none*/);
Gtk::Widget base::WindowBase::get_titlebar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_titlebar;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWindow* /*none,nullable*/ gtk_window_get_transient_for (GtkWindow* window /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_window_get_transient_for (::GtkWindow* window /*none*/);
Gtk::Window base::WindowBase::get_transient_for () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_get_transient_for;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_has_group (GtkWindow* window /*none*/);
// gboolean gtk_window_has_group (::GtkWindow* window /*none*/);
bool base::WindowBase::has_group () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_has_group;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_is_active (GtkWindow* window /*none*/);
// gboolean gtk_window_is_active (::GtkWindow* window /*none*/);
bool base::WindowBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_is_active;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_is_fullscreen (GtkWindow* window /*none*/);
// gboolean gtk_window_is_fullscreen (::GtkWindow* window /*none*/);
bool base::WindowBase::is_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_is_fullscreen;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_is_maximized (GtkWindow* window /*none*/);
// gboolean gtk_window_is_maximized (::GtkWindow* window /*none*/);
bool base::WindowBase::is_maximized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_is_maximized;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_is_suspended (GtkWindow* window /*none*/);
// gboolean gtk_window_is_suspended (::GtkWindow* window /*none*/);
bool base::WindowBase::is_suspended () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_is_suspended;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_window_maximize (GtkWindow* window /*none*/);
// void gtk_window_maximize (::GtkWindow* window /*none*/);
void base::WindowBase::maximize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_maximize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_minimize (GtkWindow* window /*none*/);
// void gtk_window_minimize (::GtkWindow* window /*none*/);
void base::WindowBase::minimize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_minimize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_present (GtkWindow* window /*none*/);
// void gtk_window_present (::GtkWindow* window /*none*/);
void base::WindowBase::present () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_present;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_present_with_time (GtkWindow* window /*none*/, guint32 timestamp);
// void gtk_window_present_with_time (::GtkWindow* window /*none*/, guint32 timestamp);
void base::WindowBase::present_with_time (guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_present_with_time;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GtkWindow*) (gobj_()), (guint32) (timestamp_to_c));
}

// void gtk_window_set_application (GtkWindow* window /*none*/, GtkApplication* application /*none,nullable*/);
// void gtk_window_set_application (::GtkWindow* window /*none*/, ::GtkApplication* application /*none,nullable*/);
void base::WindowBase::set_application (Gtk::Application application) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_application;
  auto application_to_c = gi::unwrap (application, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkApplication*) (application_to_c));
}
void base::WindowBase::set_application () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_application;
  auto application_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkApplication*) (application_to_c));
}

// void gtk_window_set_child (GtkWindow* window /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_window_set_child (::GtkWindow* window /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::WindowBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::WindowBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_window_set_decorated (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_decorated (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_decorated (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_decorated;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_default_size (GtkWindow* window /*none*/, int width, int height);
// void gtk_window_set_default_size (::GtkWindow* window /*none*/, gint width, gint height);
void base::WindowBase::set_default_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_default_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_window_set_default_widget (GtkWindow* window /*none*/, GtkWidget* default_widget /*none,nullable*/);
// void gtk_window_set_default_widget (::GtkWindow* window /*none*/, ::GtkWidget* default_widget /*none,nullable*/);
void base::WindowBase::set_default_widget (Gtk::Widget default_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_default_widget;
  auto default_widget_to_c = gi::unwrap (default_widget, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}
void base::WindowBase::set_default_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_default_widget;
  auto default_widget_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}

// void gtk_window_set_deletable (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_deletable (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_deletable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_deletable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_destroy_with_parent (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_destroy_with_parent (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_destroy_with_parent (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_destroy_with_parent;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_display (GtkWindow* window /*none*/, GdkDisplay* display /*none*/);
// void gtk_window_set_display (::GtkWindow* window /*none*/, ::GdkDisplay* display /*none*/);
void base::WindowBase::set_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkDisplay*) (display_to_c));
}

// void gtk_window_set_focus (GtkWindow* window /*none*/, GtkWidget* focus /*none,nullable*/);
// void gtk_window_set_focus (::GtkWindow* window /*none*/, ::GtkWidget* focus /*none,nullable*/);
void base::WindowBase::set_focus (Gtk::Widget focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_focus;
  auto focus_to_c = gi::unwrap (focus, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (focus_to_c));
}
void base::WindowBase::set_focus () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_focus;
  auto focus_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (focus_to_c));
}

// void gtk_window_set_focus_visible (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_focus_visible (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_focus_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_focus_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_handle_menubar_accel (GtkWindow* window /*none*/, gboolean handle_menubar_accel);
// void gtk_window_set_handle_menubar_accel (::GtkWindow* window /*none*/, gboolean handle_menubar_accel);
void base::WindowBase::set_handle_menubar_accel (gboolean handle_menubar_accel) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean handle_menubar_accel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_handle_menubar_accel;
  auto handle_menubar_accel_to_c = handle_menubar_accel;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (handle_menubar_accel_to_c));
}

// void gtk_window_set_hide_on_close (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_hide_on_close (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_hide_on_close (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_hide_on_close;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_icon_name (GtkWindow* window /*none*/, const char* name /*none,nullable*/);
// void gtk_window_set_icon_name (::GtkWindow* window /*none*/, const char* name /*none,nullable*/);
void base::WindowBase::set_icon_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_icon_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (name_to_c));
}
void base::WindowBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_icon_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_window_set_mnemonics_visible (GtkWindow* window /*none*/, gboolean setting);
// void gtk_window_set_mnemonics_visible (::GtkWindow* window /*none*/, gboolean setting);
void base::WindowBase::set_mnemonics_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_mnemonics_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_modal (GtkWindow* window /*none*/, gboolean modal);
// void gtk_window_set_modal (::GtkWindow* window /*none*/, gboolean modal);
void base::WindowBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_window_set_resizable (GtkWindow* window /*none*/, gboolean resizable);
// void gtk_window_set_resizable (::GtkWindow* window /*none*/, gboolean resizable);
void base::WindowBase::set_resizable (gboolean resizable) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean resizable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_resizable;
  auto resizable_to_c = resizable;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (resizable_to_c));
}

// void gtk_window_set_startup_id (GtkWindow* window /*none*/, const char* startup_id /*none*/);
// void gtk_window_set_startup_id (::GtkWindow* window /*none*/, const char* startup_id /*none*/);
void base::WindowBase::set_startup_id (const gi::cstring_v startup_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_startup_id;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (startup_id_to_c));
}

// void gtk_window_set_title (GtkWindow* window /*none*/, const char* title /*none,nullable*/);
// void gtk_window_set_title (::GtkWindow* window /*none*/, const char* title /*none,nullable*/);
void base::WindowBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (title_to_c));
}
void base::WindowBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_window_set_titlebar (GtkWindow* window /*none*/, GtkWidget* titlebar /*none,nullable*/);
// void gtk_window_set_titlebar (::GtkWindow* window /*none*/, ::GtkWidget* titlebar /*none,nullable*/);
void base::WindowBase::set_titlebar (Gtk::Widget titlebar) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* titlebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_titlebar;
  auto titlebar_to_c = gi::unwrap (titlebar, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (titlebar_to_c));
}
void base::WindowBase::set_titlebar () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* titlebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_titlebar;
  auto titlebar_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (titlebar_to_c));
}

// void gtk_window_set_transient_for (GtkWindow* window /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_window_set_transient_for (::GtkWindow* window /*none*/, ::GtkWindow* parent /*none,nullable*/);
void base::WindowBase::set_transient_for (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_transient_for;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::WindowBase::set_transient_for () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_set_transient_for;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWindow*) (parent_to_c));
}

// void gtk_window_unfullscreen (GtkWindow* window /*none*/);
// void gtk_window_unfullscreen (::GtkWindow* window /*none*/);
void base::WindowBase::unfullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_unfullscreen;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_unmaximize (GtkWindow* window /*none*/);
// void gtk_window_unmaximize (::GtkWindow* window /*none*/);
void base::WindowBase::unmaximize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_unmaximize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_unminimize (GtkWindow* window /*none*/);
// void gtk_window_unminimize (::GtkWindow* window /*none*/);
void base::WindowBase::unminimize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_unminimize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/window_extra_def_impl.hpp>)
#include <gtk/window_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/window_extra_impl.hpp>)
#include <gtk/window_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWindowClass *methods = (::GtkWindowClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate_default) methods->activate_default = (decltype (methods->activate_default)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_default_>;
  if (init_data.activate_focus) methods->activate_focus = (decltype (methods->activate_focus)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_focus_>;
  if (init_data.close_request) methods->close_request = (decltype (methods->close_request)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::close_request_>;
  if (init_data.enable_debugging) methods->enable_debugging = (decltype (methods->enable_debugging)) detail::method_wrapper<self, bool (*) (gboolean toggle), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::enable_debugging_>;
  if (init_data.keys_changed) methods->keys_changed = (decltype (methods->keys_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::keys_changed_>;
}

// void Window::activate_default (GtkWindow* window /*none*/);
// void Window::activate_default (::GtkWindow* window /*none*/);
void WindowClass::activate_default_ () noexcept
{
  if (!get_struct_()->activate_default) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_default;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void Window::activate_focus (GtkWindow* window /*none*/);
// void Window::activate_focus (::GtkWindow* window /*none*/);
void WindowClass::activate_focus_ () noexcept
{
  if (!get_struct_()->activate_focus) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_focus;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// gboolean Window::close_request (GtkWindow* window /*none*/);
// gboolean Window::close_request (::GtkWindow* window /*none*/);
bool WindowClass::close_request_ () noexcept
{
  if (!get_struct_()->close_request) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_request;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean Window::enable_debugging (GtkWindow* window /*none*/, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window /*none*/, gboolean toggle);
bool WindowClass::enable_debugging_ (gboolean toggle) noexcept
{
  if (!get_struct_()->enable_debugging) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, gboolean toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enable_debugging;
  auto toggle_to_c = toggle;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (toggle_to_c));
  return _temp_ret;
}

// void Window::keys_changed (GtkWindow* window /*none*/);
// void Window::keys_changed (::GtkWindow* window /*none*/);
void WindowClass::keys_changed_ () noexcept
{
  if (!get_struct_()->keys_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->keys_changed;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
