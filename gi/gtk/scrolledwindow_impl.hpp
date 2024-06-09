// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLEDWINDOW_IMPL_HPP_
#define _GI_GTK_SCROLLEDWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_scrolled_window_new ();
// ::GtkScrolledWindow* /*none*/ gtk_scrolled_window_new ();
Gtk::ScrolledWindow base::ScrolledWindowBase::new_ () noexcept
{
  typedef ::GtkScrolledWindow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_scrolled_window_get_child (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_scrolled_window_get_child (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::Widget base::ScrolledWindowBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_child;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAdjustment* /*none*/ gtk_scrolled_window_get_hadjustment (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrolled_window_get_hadjustment (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::Adjustment base::ScrolledWindowBase::get_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_scrolled_window_get_has_frame (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_has_frame (::GtkScrolledWindow* scrolled_window /*none*/);
bool base::ScrolledWindowBase::get_has_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_has_frame;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none*/ gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none*/ gtk_scrolled_window_get_hscrollbar (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::Widget base::ScrolledWindowBase::get_hscrollbar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_hscrollbar;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_scrolled_window_get_kinetic_scrolling (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_kinetic_scrolling (::GtkScrolledWindow* scrolled_window /*none*/);
bool base::ScrolledWindowBase::get_kinetic_scrolling () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_kinetic_scrolling;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// int gtk_scrolled_window_get_max_content_height (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_max_content_height (::GtkScrolledWindow* scrolled_window /*none*/);
gint base::ScrolledWindowBase::get_max_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_max_content_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// int gtk_scrolled_window_get_max_content_width (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_max_content_width (::GtkScrolledWindow* scrolled_window /*none*/);
gint base::ScrolledWindowBase::get_max_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_max_content_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// int gtk_scrolled_window_get_min_content_height (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_min_content_height (::GtkScrolledWindow* scrolled_window /*none*/);
gint base::ScrolledWindowBase::get_min_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_min_content_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// int gtk_scrolled_window_get_min_content_width (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_min_content_width (::GtkScrolledWindow* scrolled_window /*none*/);
gint base::ScrolledWindowBase::get_min_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_min_content_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scrolled_window_get_overlay_scrolling (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_overlay_scrolling (::GtkScrolledWindow* scrolled_window /*none*/);
bool base::ScrolledWindowBase::get_overlay_scrolling () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_overlay_scrolling;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkCornerType gtk_scrolled_window_get_placement (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::CornerType base::ScrolledWindowBase::get_placement () noexcept
{
  typedef ::GtkCornerType (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_placement;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scrolled_window_get_policy (GtkScrolledWindow* scrolled_window /*none*/, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy);
// void gtk_scrolled_window_get_policy (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
void base::ScrolledWindowBase::get_policy (Gtk::PolicyType * hscrollbar_policy, Gtk::PolicyType * vscrollbar_policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_policy;
  ::GtkPolicyType vscrollbar_policy_o {};
  ::GtkPolicyType hscrollbar_policy_o {};
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType*) (hscrollbar_policy ? &hscrollbar_policy_o : nullptr), (::GtkPolicyType*) (vscrollbar_policy ? &vscrollbar_policy_o : nullptr));
  if (vscrollbar_policy) *vscrollbar_policy = gi::wrap (vscrollbar_policy_o);
  if (hscrollbar_policy) *hscrollbar_policy = gi::wrap (hscrollbar_policy_o);
}
std::tuple<Gtk::PolicyType, Gtk::PolicyType> base::ScrolledWindowBase::get_policy () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_policy;
  ::GtkPolicyType vscrollbar_policy_o {};
  ::GtkPolicyType hscrollbar_policy_o {};
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType*) (&hscrollbar_policy_o), (::GtkPolicyType*) (&vscrollbar_policy_o));
  auto &&tmp_return_1 = gi::wrap (hscrollbar_policy_o);
  auto &&tmp_return_2 = gi::wrap (vscrollbar_policy_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_scrolled_window_get_propagate_natural_height (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_propagate_natural_height (::GtkScrolledWindow* scrolled_window /*none*/);
bool base::ScrolledWindowBase::get_propagate_natural_height () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_propagate_natural_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scrolled_window_get_propagate_natural_width (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_propagate_natural_width (::GtkScrolledWindow* scrolled_window /*none*/);
bool base::ScrolledWindowBase::get_propagate_natural_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_propagate_natural_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkAdjustment* /*none*/ gtk_scrolled_window_get_vadjustment (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrolled_window_get_vadjustment (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::Adjustment base::ScrolledWindowBase::get_vadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_vadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none*/ gtk_scrolled_window_get_vscrollbar (::GtkScrolledWindow* scrolled_window /*none*/);
Gtk::Widget base::ScrolledWindowBase::get_vscrollbar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_get_vscrollbar;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_scrolled_window_set_child (GtkScrolledWindow* scrolled_window /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_scrolled_window_set_child (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ScrolledWindowBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ScrolledWindowBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow* scrolled_window /*none*/, GtkAdjustment* hadjustment /*none,nullable*/);
// void gtk_scrolled_window_set_hadjustment (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkAdjustment* hadjustment /*none,nullable*/);
void base::ScrolledWindowBase::set_hadjustment (Gtk::Adjustment hadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_hadjustment;
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}
void base::ScrolledWindowBase::set_hadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_hadjustment;
  auto hadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}

// void gtk_scrolled_window_set_has_frame (GtkScrolledWindow* scrolled_window /*none*/, gboolean has_frame);
// void gtk_scrolled_window_set_has_frame (::GtkScrolledWindow* scrolled_window /*none*/, gboolean has_frame);
void base::ScrolledWindowBase::set_has_frame (gboolean has_frame) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean has_frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_has_frame;
  auto has_frame_to_c = has_frame;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (has_frame_to_c));
}

// void gtk_scrolled_window_set_kinetic_scrolling (GtkScrolledWindow* scrolled_window /*none*/, gboolean kinetic_scrolling);
// void gtk_scrolled_window_set_kinetic_scrolling (::GtkScrolledWindow* scrolled_window /*none*/, gboolean kinetic_scrolling);
void base::ScrolledWindowBase::set_kinetic_scrolling (gboolean kinetic_scrolling) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_kinetic_scrolling;
  auto kinetic_scrolling_to_c = kinetic_scrolling;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (kinetic_scrolling_to_c));
}

// void gtk_scrolled_window_set_max_content_height (GtkScrolledWindow* scrolled_window /*none*/, int height);
// void gtk_scrolled_window_set_max_content_height (::GtkScrolledWindow* scrolled_window /*none*/, gint height);
void base::ScrolledWindowBase::set_max_content_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_max_content_height;
  auto height_to_c = height;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (height_to_c));
}

// void gtk_scrolled_window_set_max_content_width (GtkScrolledWindow* scrolled_window /*none*/, int width);
// void gtk_scrolled_window_set_max_content_width (::GtkScrolledWindow* scrolled_window /*none*/, gint width);
void base::ScrolledWindowBase::set_max_content_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_max_content_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (width_to_c));
}

// void gtk_scrolled_window_set_min_content_height (GtkScrolledWindow* scrolled_window /*none*/, int height);
// void gtk_scrolled_window_set_min_content_height (::GtkScrolledWindow* scrolled_window /*none*/, gint height);
void base::ScrolledWindowBase::set_min_content_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_min_content_height;
  auto height_to_c = height;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (height_to_c));
}

// void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow* scrolled_window /*none*/, int width);
// void gtk_scrolled_window_set_min_content_width (::GtkScrolledWindow* scrolled_window /*none*/, gint width);
void base::ScrolledWindowBase::set_min_content_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_min_content_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (width_to_c));
}

// void gtk_scrolled_window_set_overlay_scrolling (GtkScrolledWindow* scrolled_window /*none*/, gboolean overlay_scrolling);
// void gtk_scrolled_window_set_overlay_scrolling (::GtkScrolledWindow* scrolled_window /*none*/, gboolean overlay_scrolling);
void base::ScrolledWindowBase::set_overlay_scrolling (gboolean overlay_scrolling) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_overlay_scrolling;
  auto overlay_scrolling_to_c = overlay_scrolling;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (overlay_scrolling_to_c));
}

// void gtk_scrolled_window_set_placement (GtkScrolledWindow* scrolled_window /*none*/, GtkCornerType window_placement);
// void gtk_scrolled_window_set_placement (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkCornerType window_placement);
void base::ScrolledWindowBase::set_placement (Gtk::CornerType window_placement) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkCornerType window_placement);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_placement;
  auto window_placement_to_c = gi::unwrap (window_placement);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkCornerType) (window_placement_to_c));
}

// void gtk_scrolled_window_set_policy (GtkScrolledWindow* scrolled_window /*none*/, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy);
// void gtk_scrolled_window_set_policy (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
void base::ScrolledWindowBase::set_policy (Gtk::PolicyType hscrollbar_policy, Gtk::PolicyType vscrollbar_policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_policy;
  auto vscrollbar_policy_to_c = gi::unwrap (vscrollbar_policy);
  auto hscrollbar_policy_to_c = gi::unwrap (hscrollbar_policy);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType) (hscrollbar_policy_to_c), (::GtkPolicyType) (vscrollbar_policy_to_c));
}

// void gtk_scrolled_window_set_propagate_natural_height (GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_height (::GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
void base::ScrolledWindowBase::set_propagate_natural_height (gboolean propagate) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean propagate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_propagate_natural_height;
  auto propagate_to_c = propagate;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (propagate_to_c));
}

// void gtk_scrolled_window_set_propagate_natural_width (GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_width (::GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
void base::ScrolledWindowBase::set_propagate_natural_width (gboolean propagate) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean propagate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_propagate_natural_width;
  auto propagate_to_c = propagate;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (propagate_to_c));
}

// void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow* scrolled_window /*none*/, GtkAdjustment* vadjustment /*none,nullable*/);
// void gtk_scrolled_window_set_vadjustment (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkAdjustment* vadjustment /*none,nullable*/);
void base::ScrolledWindowBase::set_vadjustment (Gtk::Adjustment vadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_vadjustment;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}
void base::ScrolledWindowBase::set_vadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_set_vadjustment;
  auto vadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}

// void gtk_scrolled_window_unset_placement (GtkScrolledWindow* scrolled_window /*none*/);
// void gtk_scrolled_window_unset_placement (::GtkScrolledWindow* scrolled_window /*none*/);
void base::ScrolledWindowBase::unset_placement () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrolled_window_unset_placement;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_def_impl.hpp>)
#include <gtk/scrolledwindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_impl.hpp>)
#include <gtk/scrolledwindow_extra_impl.hpp>
#endif
#endif

#endif
