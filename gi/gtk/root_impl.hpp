// AUTO-GENERATED

#ifndef _GI_GTK_ROOT_IMPL_HPP_
#define _GI_GTK_ROOT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GdkDisplay* /*none*/ gtk_root_get_display (GtkRoot* self /*none*/);
// ::GdkDisplay* /*none*/ gtk_root_get_display (::GtkRoot* self /*none*/);
Gdk::Display base::RootBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkRoot* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_root_get_display;
  auto _temp_ret = call_wrap_v ((::GtkRoot*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_root_get_focus (GtkRoot* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_root_get_focus (::GtkRoot* self /*none*/);
Gtk::Widget base::RootBase::get_focus () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkRoot* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_root_get_focus;
  auto _temp_ret = call_wrap_v ((::GtkRoot*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_root_set_focus (GtkRoot* self /*none*/, GtkWidget* focus /*none,nullable*/);
// void gtk_root_set_focus (::GtkRoot* self /*none*/, ::GtkWidget* focus /*none,nullable*/);
void base::RootBase::set_focus (Gtk::Widget focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkRoot* self, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_root_set_focus;
  auto focus_to_c = gi::unwrap (focus, gi::transfer_none);
  call_wrap_v ((::GtkRoot*) (gobj_()), (::GtkWidget*) (focus_to_c));
}
void base::RootBase::set_focus () noexcept
{
  typedef void (*call_wrap_t) (::GtkRoot* self, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_root_set_focus;
  auto focus_to_c = nullptr;
  call_wrap_v ((::GtkRoot*) (gobj_()), (::GtkWidget*) (focus_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/root_extra_def_impl.hpp>)
#include <gtk/root_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/root_extra_impl.hpp>)
#include <gtk/root_extra_impl.hpp>
#endif
#endif

#endif
