// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAY_IMPL_HPP_
#define _GI_GTK_OVERLAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_overlay_new ();
// ::GtkOverlay* /*none*/ gtk_overlay_new ();
Gtk::Overlay base::OverlayBase::new_ () noexcept
{
  typedef ::GtkOverlay* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_overlay_add_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// void gtk_overlay_add_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
void base::OverlayBase::add_overlay (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_add_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// GtkWidget* /*none,nullable*/ gtk_overlay_get_child (GtkOverlay* overlay /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_overlay_get_child (::GtkOverlay* overlay /*none*/);
Gtk::Widget base::OverlayBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkOverlay* overlay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_get_child;
  auto _temp_ret = call_wrap_v ((::GtkOverlay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_overlay_get_clip_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_overlay_get_clip_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
bool base::OverlayBase::get_clip_overlay (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_get_clip_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// gboolean gtk_overlay_get_measure_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_overlay_get_measure_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
bool base::OverlayBase::get_measure_overlay (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_get_measure_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// void gtk_overlay_remove_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// void gtk_overlay_remove_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
void base::OverlayBase::remove_overlay (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_remove_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_overlay_set_child (GtkOverlay* overlay /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_overlay_set_child (::GtkOverlay* overlay /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::OverlayBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::OverlayBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_overlay_set_clip_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/, gboolean clip_overlay);
// void gtk_overlay_set_clip_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/, gboolean clip_overlay);
void base::OverlayBase::set_clip_overlay (Gtk::Widget widget, gboolean clip_overlay) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget, gboolean clip_overlay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_set_clip_overlay;
  auto clip_overlay_to_c = clip_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c), (gboolean) (clip_overlay_to_c));
}

// void gtk_overlay_set_measure_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/, gboolean measure);
// void gtk_overlay_set_measure_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/, gboolean measure);
void base::OverlayBase::set_measure_overlay (Gtk::Widget widget, gboolean measure) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget, gboolean measure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_set_measure_overlay;
  auto measure_to_c = measure;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c), (gboolean) (measure_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_def_impl.hpp>)
#include <gtk/overlay_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_impl.hpp>)
#include <gtk/overlay_extra_impl.hpp>
#endif
#endif

#endif
