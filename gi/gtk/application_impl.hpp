// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATION_IMPL_HPP_
#define _GI_GTK_APPLICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkApplication* /*full*/ gtk_application_new (const char* application_id /*none,nullable*/, GApplicationFlags flags);
// ::GtkApplication* /*full*/ gtk_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
Gtk::Application base::ApplicationBase::new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::Application base::ApplicationBase::new_ (Gio::ApplicationFlags flags) noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_application_add_window (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void gtk_application_add_window (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
void base::ApplicationBase::add_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_add_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// char** /*full*/ gtk_application_get_accels_for_action (GtkApplication* application /*none*/, const char* detailed_action_name /*none*/);
// char** /*full*/ gtk_application_get_accels_for_action (::GtkApplication* application /*none*/, const char* detailed_action_name /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ApplicationBase::get_accels_for_action (const gi::cstring_v detailed_action_name) noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_accels_for_action;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (detailed_action_name_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char** /*full*/ gtk_application_get_actions_for_accel (GtkApplication* application /*none*/, const char* accel /*none*/);
// char** /*full*/ gtk_application_get_actions_for_accel (::GtkApplication* application /*none*/, const char* accel /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ApplicationBase::get_actions_for_accel (const gi::cstring_v accel) noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application, const char* accel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_actions_for_accel;
  auto accel_to_c = gi::unwrap (accel, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (accel_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GtkWindow* /*none,nullable*/ gtk_application_get_active_window (GtkApplication* application /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_application_get_active_window (::GtkApplication* application /*none*/);
Gtk::Window base::ApplicationBase::get_active_window () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_active_window;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GMenu* /*none,nullable*/ gtk_application_get_menu_by_id (GtkApplication* application /*none*/, const char* id /*none*/);
// ::GMenu* /*none,nullable*/ gtk_application_get_menu_by_id (::GtkApplication* application /*none*/, const char* id /*none*/);
Gio::Menu base::ApplicationBase::get_menu_by_id (const gi::cstring_v id) noexcept
{
  typedef ::GMenu* (*call_wrap_t) (::GtkApplication* application, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_menu_by_id;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GMenuModel* /*none,nullable*/ gtk_application_get_menubar (GtkApplication* application /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_application_get_menubar (::GtkApplication* application /*none*/);
Gio::MenuModel base::ApplicationBase::get_menubar () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_menubar;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWindow* /*none,nullable*/ gtk_application_get_window_by_id (GtkApplication* application /*none*/, guint id);
// ::GtkWindow* /*none,nullable*/ gtk_application_get_window_by_id (::GtkApplication* application /*none*/, guint id);
Gtk::Window base::ApplicationBase::get_window_by_id (guint id) noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkApplication* application, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_window_by_id;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (guint) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*none*/ gtk_application_get_windows (GtkApplication* application /*none*/);
// ::GList* /*none*/ gtk_application_get_windows (::GtkApplication* application /*none*/);
gi::Collection<GList, ::GtkWindow*, gi::transfer_none_t> base::ApplicationBase::get_windows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_get_windows;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkWindow*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// guint gtk_application_inhibit (GtkApplication* application /*none*/, GtkWindow* window /*none,nullable*/, GtkApplicationInhibitFlags flags, const char* reason /*none,nullable*/);
// guint gtk_application_inhibit (::GtkApplication* application /*none*/, ::GtkWindow* window /*none,nullable*/, ::GtkApplicationInhibitFlags flags, const char* reason /*none,nullable*/);
guint base::ApplicationBase::inhibit (Gtk::Window window, Gtk::ApplicationInhibitFlags flags, const gi::cstring_v reason) noexcept
{
  typedef guint (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_inhibit;
  auto reason_to_c = gi::unwrap (reason, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c), (::GtkApplicationInhibitFlags) (flags_to_c), (const char*) (reason_to_c));
  return _temp_ret;
}
guint base::ApplicationBase::inhibit (Gtk::ApplicationInhibitFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_inhibit;
  auto reason_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto window_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c), (::GtkApplicationInhibitFlags) (flags_to_c), (const char*) (reason_to_c));
  return _temp_ret;
}

// char** /*full*/ gtk_application_list_action_descriptions (GtkApplication* application /*none*/);
// char** /*full*/ gtk_application_list_action_descriptions (::GtkApplication* application /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ApplicationBase::list_action_descriptions () noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_list_action_descriptions;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void gtk_application_remove_window (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void gtk_application_remove_window (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
void base::ApplicationBase::remove_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_remove_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// void gtk_application_set_accels_for_action (GtkApplication* application /*none*/, const char* detailed_action_name /*none*/, const char* const* accels /*none*/);
// void gtk_application_set_accels_for_action (::GtkApplication* application /*none*/, const char* detailed_action_name /*none*/, const char** accels /*none*/);
void base::ApplicationBase::set_accels_for_action (const gi::cstring_v detailed_action_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> accels) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, const char* detailed_action_name, const char** accels);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_set_accels_for_action;
  auto accels_w = unwrap (std::move(accels), gi::transfer_none);
  auto accels_to_c = accels_w;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (detailed_action_name_to_c), (const char**) (accels_to_c));
}

// void gtk_application_set_menubar (GtkApplication* application /*none*/, GMenuModel* menubar /*none,nullable*/);
// void gtk_application_set_menubar (::GtkApplication* application /*none*/, ::GMenuModel* menubar /*none,nullable*/);
void base::ApplicationBase::set_menubar (Gio::MenuModel menubar) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_set_menubar;
  auto menubar_to_c = gi::unwrap (menubar, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (menubar_to_c));
}
void base::ApplicationBase::set_menubar () noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_set_menubar;
  auto menubar_to_c = nullptr;
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (menubar_to_c));
}

// void gtk_application_uninhibit (GtkApplication* application /*none*/, guint cookie);
// void gtk_application_uninhibit (::GtkApplication* application /*none*/, guint cookie);
void base::ApplicationBase::uninhibit (guint cookie) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, guint cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_application_uninhibit;
  auto cookie_to_c = cookie;
  call_wrap_v ((::GtkApplication*) (gobj_()), (guint) (cookie_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/application_extra_def_impl.hpp>)
#include <gtk/application_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/application_extra_impl.hpp>)
#include <gtk/application_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ApplicationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkApplicationClass *methods = (::GtkApplicationClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.window_added) methods->window_added = (decltype (methods->window_added)) detail::method_wrapper<self, void (*) (Gtk::Window window), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::window_added_>;
  if (init_data.window_removed) methods->window_removed = (decltype (methods->window_removed)) detail::method_wrapper<self, void (*) (Gtk::Window window), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::window_removed_>;
}

// void Application::window_added (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_added (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
void ApplicationClass::window_added_ (Gtk::Window window) noexcept
{
  if (!get_struct_()->window_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->window_added;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// void Application::window_removed (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_removed (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
void ApplicationClass::window_removed_ (Gtk::Window window) noexcept
{
  if (!get_struct_()->window_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->window_removed;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
