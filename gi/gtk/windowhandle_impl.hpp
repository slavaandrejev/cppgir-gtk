// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWHANDLE_IMPL_HPP_
#define _GI_GTK_WINDOWHANDLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_window_handle_new ();
// ::GtkWindowHandle* /*none*/ gtk_window_handle_new ();
Gtk::WindowHandle base::WindowHandleBase::new_ () noexcept
{
  typedef ::GtkWindowHandle* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_handle_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_window_handle_get_child (GtkWindowHandle* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_handle_get_child (::GtkWindowHandle* self /*none*/);
Gtk::Widget base::WindowHandleBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindowHandle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_handle_get_child;
  auto _temp_ret = call_wrap_v ((::GtkWindowHandle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_window_handle_set_child (GtkWindowHandle* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_window_handle_set_child (::GtkWindowHandle* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::WindowHandleBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowHandle* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_handle_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkWindowHandle*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::WindowHandleBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowHandle* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_handle_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkWindowHandle*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowhandle_extra_def_impl.hpp>)
#include <gtk/windowhandle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowhandle_extra_impl.hpp>)
#include <gtk/windowhandle_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowHandleClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWindowHandleClass *methods = (::GtkWindowHandleClass *) class_struct;
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
