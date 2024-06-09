// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWGROUP_IMPL_HPP_
#define _GI_GTK_WINDOWGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWindowGroup* /*full*/ gtk_window_group_new ();
// ::GtkWindowGroup* /*full*/ gtk_window_group_new ();
Gtk::WindowGroup base::WindowGroupBase::new_ () noexcept
{
  typedef ::GtkWindowGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_window_group_add_window (GtkWindowGroup* window_group /*none*/, GtkWindow* window /*none*/);
// void gtk_window_group_add_window (::GtkWindowGroup* window_group /*none*/, ::GtkWindow* window /*none*/);
void base::WindowGroupBase::add_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowGroup* window_group, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_group_add_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkWindowGroup*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// GList* /*container*/ gtk_window_group_list_windows (GtkWindowGroup* window_group /*none*/);
// ::GList* /*container*/ gtk_window_group_list_windows (::GtkWindowGroup* window_group /*none*/);
gi::Collection<GList, ::GtkWindow*, gi::transfer_container_t> base::WindowGroupBase::list_windows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWindowGroup* window_group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_group_list_windows;
  auto _temp_ret = call_wrap_v ((::GtkWindowGroup*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkWindow*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_window_group_remove_window (GtkWindowGroup* window_group /*none*/, GtkWindow* window /*none*/);
// void gtk_window_group_remove_window (::GtkWindowGroup* window_group /*none*/, ::GtkWindow* window /*none*/);
void base::WindowGroupBase::remove_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowGroup* window_group, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_group_remove_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none);
  call_wrap_v ((::GtkWindowGroup*) (gobj_()), (::GtkWindow*) (window_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra_def_impl.hpp>)
#include <gtk/windowgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra_impl.hpp>)
#include <gtk/windowgroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowGroupClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWindowGroupClass *methods = (::GtkWindowGroupClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
