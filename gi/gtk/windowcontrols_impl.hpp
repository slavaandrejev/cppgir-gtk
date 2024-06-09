// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWCONTROLS_IMPL_HPP_
#define _GI_GTK_WINDOWCONTROLS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_window_controls_new (GtkPackType side);
// ::GtkWindowControls* /*none*/ gtk_window_controls_new (::GtkPackType side);
Gtk::WindowControls base::WindowControlsBase::new_ (Gtk::PackType side) noexcept
{
  typedef ::GtkWindowControls* (*call_wrap_t) (::GtkPackType side);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_controls_new;
  auto side_to_c = gi::unwrap (side);
  auto _temp_ret = call_wrap_v ((::GtkPackType) (side_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_window_controls_get_decoration_layout (GtkWindowControls* self /*none*/);
// const char* /*none,nullable*/ gtk_window_controls_get_decoration_layout (::GtkWindowControls* self /*none*/);
gi::cstring_v base::WindowControlsBase::get_decoration_layout () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindowControls* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_get_decoration_layout;
  auto _temp_ret = call_wrap_v ((::GtkWindowControls*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_window_controls_get_empty (GtkWindowControls* self /*none*/);
// gboolean gtk_window_controls_get_empty (::GtkWindowControls* self /*none*/);
bool base::WindowControlsBase::get_empty () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindowControls* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_get_empty;
  auto _temp_ret = call_wrap_v ((::GtkWindowControls*) (gobj_()));
  return _temp_ret;
}

// GtkPackType gtk_window_controls_get_side (GtkWindowControls* self /*none*/);
// ::GtkPackType gtk_window_controls_get_side (::GtkWindowControls* self /*none*/);
Gtk::PackType base::WindowControlsBase::get_side () noexcept
{
  typedef ::GtkPackType (*call_wrap_t) (::GtkWindowControls* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_get_side;
  auto _temp_ret = call_wrap_v ((::GtkWindowControls*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_window_controls_set_decoration_layout (GtkWindowControls* self /*none*/, const char* layout /*none,nullable*/);
// void gtk_window_controls_set_decoration_layout (::GtkWindowControls* self /*none*/, const char* layout /*none,nullable*/);
void base::WindowControlsBase::set_decoration_layout (const gi::cstring_v layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowControls* self, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_set_decoration_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::GtkWindowControls*) (gobj_()), (const char*) (layout_to_c));
}
void base::WindowControlsBase::set_decoration_layout () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowControls* self, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_set_decoration_layout;
  auto layout_to_c = nullptr;
  call_wrap_v ((::GtkWindowControls*) (gobj_()), (const char*) (layout_to_c));
}

// void gtk_window_controls_set_side (GtkWindowControls* self /*none*/, GtkPackType side);
// void gtk_window_controls_set_side (::GtkWindowControls* self /*none*/, ::GtkPackType side);
void base::WindowControlsBase::set_side (Gtk::PackType side) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowControls* self, ::GtkPackType side);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_window_controls_set_side;
  auto side_to_c = gi::unwrap (side);
  call_wrap_v ((::GtkWindowControls*) (gobj_()), (::GtkPackType) (side_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowcontrols_extra_def_impl.hpp>)
#include <gtk/windowcontrols_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowcontrols_extra_impl.hpp>)
#include <gtk/windowcontrols_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowControlsClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWindowControlsClass *methods = (::GtkWindowControlsClass *) class_struct;
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
