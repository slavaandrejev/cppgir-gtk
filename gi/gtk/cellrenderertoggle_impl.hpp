// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTOGGLE_IMPL_HPP_
#define _GI_GTK_CELLRENDERERTOGGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* /*none*/ gtk_cell_renderer_toggle_new ();
// ::GtkCellRendererToggle* /*none*/ gtk_cell_renderer_toggle_new ();
Gtk::CellRendererToggle base::CellRendererToggleBase::new_ () noexcept
{
  typedef ::GtkCellRendererToggle* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_cell_renderer_toggle_get_activatable (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_activatable (::GtkCellRendererToggle* toggle /*none*/);
bool base::CellRendererToggleBase::get_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_get_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_toggle_get_active (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_active (::GtkCellRendererToggle* toggle /*none*/);
bool base::CellRendererToggleBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_get_active;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_toggle_get_radio (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_radio (::GtkCellRendererToggle* toggle /*none*/);
bool base::CellRendererToggleBase::get_radio () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_get_radio;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_toggle_set_activatable (GtkCellRendererToggle* toggle /*none*/, gboolean setting);
// void gtk_cell_renderer_toggle_set_activatable (::GtkCellRendererToggle* toggle /*none*/, gboolean setting);
void base::CellRendererToggleBase::set_activatable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_set_activatable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_cell_renderer_toggle_set_active (GtkCellRendererToggle* toggle /*none*/, gboolean setting);
// void gtk_cell_renderer_toggle_set_active (::GtkCellRendererToggle* toggle /*none*/, gboolean setting);
void base::CellRendererToggleBase::set_active (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_set_active;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_cell_renderer_toggle_set_radio (GtkCellRendererToggle* toggle /*none*/, gboolean radio);
// void gtk_cell_renderer_toggle_set_radio (::GtkCellRendererToggle* toggle /*none*/, gboolean radio);
void base::CellRendererToggleBase::set_radio (gboolean radio) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean radio);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_toggle_set_radio;
  auto radio_to_c = radio;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (radio_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra_def_impl.hpp>)
#include <gtk/cellrenderertoggle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra_impl.hpp>)
#include <gtk/cellrenderertoggle_extra_impl.hpp>
#endif
#endif

#endif
