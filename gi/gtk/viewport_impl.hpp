// AUTO-GENERATED

#ifndef _GI_GTK_VIEWPORT_IMPL_HPP_
#define _GI_GTK_VIEWPORT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable ViewportBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ViewportBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* /*none*/ gtk_viewport_new (GtkAdjustment* hadjustment /*none,nullable*/, GtkAdjustment* vadjustment /*none,nullable*/);
// ::GtkViewport* /*none*/ gtk_viewport_new (::GtkAdjustment* hadjustment /*none,nullable*/, ::GtkAdjustment* vadjustment /*none,nullable*/);
Gtk::Viewport base::ViewportBase::new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept
{
  typedef ::GtkViewport* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_new;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none);
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Viewport base::ViewportBase::new_ () noexcept
{
  typedef ::GtkViewport* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_new;
  auto vadjustment_to_c = nullptr;
  auto hadjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_viewport_get_child (GtkViewport* viewport /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_viewport_get_child (::GtkViewport* viewport /*none*/);
Gtk::Widget base::ViewportBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkViewport* viewport);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_get_child;
  auto _temp_ret = call_wrap_v ((::GtkViewport*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_viewport_get_scroll_to_focus (GtkViewport* viewport /*none*/);
// gboolean gtk_viewport_get_scroll_to_focus (::GtkViewport* viewport /*none*/);
bool base::ViewportBase::get_scroll_to_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkViewport* viewport);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_get_scroll_to_focus;
  auto _temp_ret = call_wrap_v ((::GtkViewport*) (gobj_()));
  return _temp_ret;
}

// void gtk_viewport_scroll_to (GtkViewport* viewport /*none*/, GtkWidget* descendant /*none*/, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_viewport_scroll_to (::GtkViewport* viewport /*none*/, ::GtkWidget* descendant /*none*/, ::GtkScrollInfo* scroll /*full,nullable*/);
void base::ViewportBase::scroll_to (Gtk::Widget descendant, Gtk::ScrollInfo scroll) noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, ::GtkWidget* descendant, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_scroll_to;
  auto scroll_to_c = gi::unwrap (std::move(scroll), gi::transfer_full);
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  call_wrap_v ((::GtkViewport*) (gobj_()), (::GtkWidget*) (descendant_to_c), (::GtkScrollInfo*) (scroll_to_c));
}
void base::ViewportBase::scroll_to (Gtk::Widget descendant) noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, ::GtkWidget* descendant, ::GtkScrollInfo* scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_scroll_to;
  auto scroll_to_c = nullptr;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  call_wrap_v ((::GtkViewport*) (gobj_()), (::GtkWidget*) (descendant_to_c), (::GtkScrollInfo*) (scroll_to_c));
}

// void gtk_viewport_set_child (GtkViewport* viewport /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_viewport_set_child (::GtkViewport* viewport /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ViewportBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkViewport*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ViewportBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkViewport*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_viewport_set_scroll_to_focus (GtkViewport* viewport /*none*/, gboolean scroll_to_focus);
// void gtk_viewport_set_scroll_to_focus (::GtkViewport* viewport /*none*/, gboolean scroll_to_focus);
void base::ViewportBase::set_scroll_to_focus (gboolean scroll_to_focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, gboolean scroll_to_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_viewport_set_scroll_to_focus;
  auto scroll_to_focus_to_c = scroll_to_focus;
  call_wrap_v ((::GtkViewport*) (gobj_()), (gboolean) (scroll_to_focus_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_def_impl.hpp>)
#include <gtk/viewport_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_impl.hpp>)
#include <gtk/viewport_extra_impl.hpp>
#endif
#endif

#endif
