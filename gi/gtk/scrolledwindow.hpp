// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLEDWINDOW_HPP_
#define _GI_GTK_SCROLLEDWINDOW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Widget;

class ScrolledWindow;

namespace base {


#define GI_GTK_SCROLLEDWINDOW_BASE base::ScrolledWindowBase
class ScrolledWindowBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkScrolledWindow BaseObjectType;

ScrolledWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scrolled_window_get_type(); } 

// GtkWidget* /*none*/ gtk_scrolled_window_new ();
// ::GtkScrolledWindow* /*none*/ gtk_scrolled_window_new ();
static GI_INLINE_DECL Gtk::ScrolledWindow new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_scrolled_window_get_child (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_scrolled_window_get_child (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkAdjustment* /*none*/ gtk_scrolled_window_get_hadjustment (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrolled_window_get_hadjustment (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_hadjustment () noexcept;

// gboolean gtk_scrolled_window_get_has_frame (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_has_frame (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL bool get_has_frame () noexcept;

// GtkWidget* /*none*/ gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none*/ gtk_scrolled_window_get_hscrollbar (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::Widget get_hscrollbar () noexcept;

// gboolean gtk_scrolled_window_get_kinetic_scrolling (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_kinetic_scrolling (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL bool get_kinetic_scrolling () noexcept;

// int gtk_scrolled_window_get_max_content_height (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_max_content_height (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL gint get_max_content_height () noexcept;

// int gtk_scrolled_window_get_max_content_width (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_max_content_width (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL gint get_max_content_width () noexcept;

// int gtk_scrolled_window_get_min_content_height (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_min_content_height (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL gint get_min_content_height () noexcept;

// int gtk_scrolled_window_get_min_content_width (GtkScrolledWindow* scrolled_window /*none*/);
// gint gtk_scrolled_window_get_min_content_width (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL gint get_min_content_width () noexcept;

// gboolean gtk_scrolled_window_get_overlay_scrolling (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_overlay_scrolling (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL bool get_overlay_scrolling () noexcept;

// GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkCornerType gtk_scrolled_window_get_placement (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::CornerType get_placement () noexcept;

// void gtk_scrolled_window_get_policy (GtkScrolledWindow* scrolled_window /*none*/, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy);
// void gtk_scrolled_window_get_policy (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
GI_INLINE_DECL void get_policy (Gtk::PolicyType * hscrollbar_policy, Gtk::PolicyType * vscrollbar_policy) noexcept;
GI_INLINE_DECL std::tuple<Gtk::PolicyType, Gtk::PolicyType> get_policy () noexcept;

// gboolean gtk_scrolled_window_get_propagate_natural_height (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_propagate_natural_height (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL bool get_propagate_natural_height () noexcept;

// gboolean gtk_scrolled_window_get_propagate_natural_width (GtkScrolledWindow* scrolled_window /*none*/);
// gboolean gtk_scrolled_window_get_propagate_natural_width (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL bool get_propagate_natural_width () noexcept;

// GtkAdjustment* /*none*/ gtk_scrolled_window_get_vadjustment (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrolled_window_get_vadjustment (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_vadjustment () noexcept;

// GtkWidget* /*none*/ gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow* scrolled_window /*none*/);
// ::GtkWidget* /*none*/ gtk_scrolled_window_get_vscrollbar (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL Gtk::Widget get_vscrollbar () noexcept;

// void gtk_scrolled_window_set_child (GtkScrolledWindow* scrolled_window /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_scrolled_window_set_child (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow* scrolled_window /*none*/, GtkAdjustment* hadjustment /*none,nullable*/);
// void gtk_scrolled_window_set_hadjustment (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkAdjustment* hadjustment /*none,nullable*/);
GI_INLINE_DECL void set_hadjustment (Gtk::Adjustment hadjustment) noexcept;
GI_INLINE_DECL void set_hadjustment () noexcept;

// void gtk_scrolled_window_set_has_frame (GtkScrolledWindow* scrolled_window /*none*/, gboolean has_frame);
// void gtk_scrolled_window_set_has_frame (::GtkScrolledWindow* scrolled_window /*none*/, gboolean has_frame);
GI_INLINE_DECL void set_has_frame (gboolean has_frame) noexcept;

// void gtk_scrolled_window_set_kinetic_scrolling (GtkScrolledWindow* scrolled_window /*none*/, gboolean kinetic_scrolling);
// void gtk_scrolled_window_set_kinetic_scrolling (::GtkScrolledWindow* scrolled_window /*none*/, gboolean kinetic_scrolling);
GI_INLINE_DECL void set_kinetic_scrolling (gboolean kinetic_scrolling) noexcept;

// void gtk_scrolled_window_set_max_content_height (GtkScrolledWindow* scrolled_window /*none*/, int height);
// void gtk_scrolled_window_set_max_content_height (::GtkScrolledWindow* scrolled_window /*none*/, gint height);
GI_INLINE_DECL void set_max_content_height (gint height) noexcept;

// void gtk_scrolled_window_set_max_content_width (GtkScrolledWindow* scrolled_window /*none*/, int width);
// void gtk_scrolled_window_set_max_content_width (::GtkScrolledWindow* scrolled_window /*none*/, gint width);
GI_INLINE_DECL void set_max_content_width (gint width) noexcept;

// void gtk_scrolled_window_set_min_content_height (GtkScrolledWindow* scrolled_window /*none*/, int height);
// void gtk_scrolled_window_set_min_content_height (::GtkScrolledWindow* scrolled_window /*none*/, gint height);
GI_INLINE_DECL void set_min_content_height (gint height) noexcept;

// void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow* scrolled_window /*none*/, int width);
// void gtk_scrolled_window_set_min_content_width (::GtkScrolledWindow* scrolled_window /*none*/, gint width);
GI_INLINE_DECL void set_min_content_width (gint width) noexcept;

// void gtk_scrolled_window_set_overlay_scrolling (GtkScrolledWindow* scrolled_window /*none*/, gboolean overlay_scrolling);
// void gtk_scrolled_window_set_overlay_scrolling (::GtkScrolledWindow* scrolled_window /*none*/, gboolean overlay_scrolling);
GI_INLINE_DECL void set_overlay_scrolling (gboolean overlay_scrolling) noexcept;

// void gtk_scrolled_window_set_placement (GtkScrolledWindow* scrolled_window /*none*/, GtkCornerType window_placement);
// void gtk_scrolled_window_set_placement (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkCornerType window_placement);
GI_INLINE_DECL void set_placement (Gtk::CornerType window_placement) noexcept;

// void gtk_scrolled_window_set_policy (GtkScrolledWindow* scrolled_window /*none*/, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy);
// void gtk_scrolled_window_set_policy (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
GI_INLINE_DECL void set_policy (Gtk::PolicyType hscrollbar_policy, Gtk::PolicyType vscrollbar_policy) noexcept;

// void gtk_scrolled_window_set_propagate_natural_height (GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_height (::GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
GI_INLINE_DECL void set_propagate_natural_height (gboolean propagate) noexcept;

// void gtk_scrolled_window_set_propagate_natural_width (GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_width (::GtkScrolledWindow* scrolled_window /*none*/, gboolean propagate);
GI_INLINE_DECL void set_propagate_natural_width (gboolean propagate) noexcept;

// void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow* scrolled_window /*none*/, GtkAdjustment* vadjustment /*none,nullable*/);
// void gtk_scrolled_window_set_vadjustment (::GtkScrolledWindow* scrolled_window /*none*/, ::GtkAdjustment* vadjustment /*none,nullable*/);
GI_INLINE_DECL void set_vadjustment (Gtk::Adjustment vadjustment) noexcept;
GI_INLINE_DECL void set_vadjustment () noexcept;

// void gtk_scrolled_window_unset_placement (GtkScrolledWindow* scrolled_window /*none*/);
// void gtk_scrolled_window_unset_placement (::GtkScrolledWindow* scrolled_window /*none*/);
GI_INLINE_DECL void unset_placement () noexcept;

gi::property_proxy<Gtk::Widget, base::ScrolledWindowBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ScrolledWindowBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ScrolledWindowBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ScrolledWindowBase> (*this, "child"); }

gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_hadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "hadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_hadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "hadjustment"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_has_frame()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_has_frame() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "has-frame"); }

gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_hscrollbar_policy()
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "hscrollbar-policy"); }
const gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_hscrollbar_policy() const
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "hscrollbar-policy"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_kinetic_scrolling()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "kinetic-scrolling"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_kinetic_scrolling() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "kinetic-scrolling"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_height()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-height"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_height() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-height"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_width()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-width"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_width() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-width"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_height()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-height"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_height() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-height"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_width()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-width"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_width() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-width"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_overlay_scrolling()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "overlay-scrolling"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_overlay_scrolling() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "overlay-scrolling"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_height()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-height"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_height() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-height"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_width()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-width"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_width() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-width"); }

gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_vadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "vadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_vadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "vadjustment"); }

gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_vscrollbar_policy()
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "vscrollbar-policy"); }
const gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_vscrollbar_policy() const
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "vscrollbar-policy"); }

gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> property_window_placement()
{ return gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> (*this, "window-placement"); }
const gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> property_window_placement() const
{ return gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> (*this, "window-placement"); }

// (signal) void edge-overshot ( pos);
// (signal) void edge-overshot (::GtkPositionType pos);
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> signal_edge_overshot()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> (*this, "edge-overshot"); }

// (signal) void edge-reached ( pos);
// (signal) void edge-reached (::GtkPositionType pos);
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> signal_edge_reached()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> (*this, "edge-reached"); }

// (signal) void move-focus-out ( direction_type);
// (signal) void move-focus-out (::GtkDirectionType direction_type);
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::DirectionType direction_type)> signal_move_focus_out()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::DirectionType direction_type)> (*this, "move-focus-out"); }

// (signal) gboolean scroll-child ( scroll, gboolean horizontal);
// (signal) gboolean scroll-child (::GtkScrollType scroll, gboolean horizontal);
gi::signal_proxy<bool(Gtk::ScrolledWindow, Gtk::ScrollType scroll, gboolean horizontal)> signal_scroll_child()
{ return gi::signal_proxy<bool(Gtk::ScrolledWindow, Gtk::ScrollType scroll, gboolean horizontal)> (*this, "scroll-child"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_def.hpp>)
#include <gtk/scrolledwindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra.hpp>)
#include <gtk/scrolledwindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScrolledWindow : public GI_GTK_SCROLLEDWINDOW_BASE
{ typedef GI_GTK_SCROLLEDWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrolledWindow>
{ typedef Gtk::ScrolledWindow type; }; 

} // namespace repository

} // namespace gi

#endif
