// AUTO-GENERATED

#ifndef _GI_GTK_PANED_HPP_
#define _GI_GTK_PANED_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange;
class Orientable;
class Widget;

class Paned;

namespace base {


#define GI_GTK_PANED_BASE base::PanedBase
class PanedBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPaned BaseObjectType;

PanedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_paned_get_type(); } 

GI_INLINE_DECL Gtk::AccessibleRange interface_ (gi::interface_tag<Gtk::AccessibleRange>);

GI_INLINE_DECL operator Gtk::AccessibleRange ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_paned_new (GtkOrientation orientation);
// ::GtkPaned* /*none*/ gtk_paned_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::Paned new_ (Gtk::Orientation orientation) noexcept;

// GtkWidget* /*none,nullable*/ gtk_paned_get_end_child (GtkPaned* paned /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_paned_get_end_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL Gtk::Widget get_end_child () noexcept;

// int gtk_paned_get_position (GtkPaned* paned /*none*/);
// gint gtk_paned_get_position (::GtkPaned* paned /*none*/);
GI_INLINE_DECL gint get_position () noexcept;

// gboolean gtk_paned_get_resize_end_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_resize_end_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL bool get_resize_end_child () noexcept;

// gboolean gtk_paned_get_resize_start_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_resize_start_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL bool get_resize_start_child () noexcept;

// gboolean gtk_paned_get_shrink_end_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_shrink_end_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL bool get_shrink_end_child () noexcept;

// gboolean gtk_paned_get_shrink_start_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_shrink_start_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL bool get_shrink_start_child () noexcept;

// GtkWidget* /*none,nullable*/ gtk_paned_get_start_child (GtkPaned* paned /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_paned_get_start_child (::GtkPaned* paned /*none*/);
GI_INLINE_DECL Gtk::Widget get_start_child () noexcept;

// gboolean gtk_paned_get_wide_handle (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_wide_handle (::GtkPaned* paned /*none*/);
GI_INLINE_DECL bool get_wide_handle () noexcept;

// void gtk_paned_set_end_child (GtkPaned* paned /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_paned_set_end_child (::GtkPaned* paned /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_end_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_end_child () noexcept;

// void gtk_paned_set_position (GtkPaned* paned /*none*/, int position);
// void gtk_paned_set_position (::GtkPaned* paned /*none*/, gint position);
GI_INLINE_DECL void set_position (gint position) noexcept;

// void gtk_paned_set_resize_end_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_resize_end_child (::GtkPaned* paned /*none*/, gboolean resize);
GI_INLINE_DECL void set_resize_end_child (gboolean resize) noexcept;

// void gtk_paned_set_resize_start_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_resize_start_child (::GtkPaned* paned /*none*/, gboolean resize);
GI_INLINE_DECL void set_resize_start_child (gboolean resize) noexcept;

// void gtk_paned_set_shrink_end_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_shrink_end_child (::GtkPaned* paned /*none*/, gboolean resize);
GI_INLINE_DECL void set_shrink_end_child (gboolean resize) noexcept;

// void gtk_paned_set_shrink_start_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_shrink_start_child (::GtkPaned* paned /*none*/, gboolean resize);
GI_INLINE_DECL void set_shrink_start_child (gboolean resize) noexcept;

// void gtk_paned_set_start_child (GtkPaned* paned /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_paned_set_start_child (::GtkPaned* paned /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_start_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_start_child () noexcept;

// void gtk_paned_set_wide_handle (GtkPaned* paned /*none*/, gboolean wide);
// void gtk_paned_set_wide_handle (::GtkPaned* paned /*none*/, gboolean wide);
GI_INLINE_DECL void set_wide_handle (gboolean wide) noexcept;

gi::property_proxy<Gtk::Widget, base::PanedBase> property_end_child()
{ return gi::property_proxy<Gtk::Widget, base::PanedBase> (*this, "end-child"); }
const gi::property_proxy<Gtk::Widget, base::PanedBase> property_end_child() const
{ return gi::property_proxy<Gtk::Widget, base::PanedBase> (*this, "end-child"); }

gi::property_proxy<gint, base::PanedBase> property_max_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "max-position"); }
const gi::property_proxy<gint, base::PanedBase> property_max_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "max-position"); }

gi::property_proxy<gint, base::PanedBase> property_min_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "min-position"); }
const gi::property_proxy<gint, base::PanedBase> property_min_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "min-position"); }

gi::property_proxy<gint, base::PanedBase> property_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "position"); }
const gi::property_proxy<gint, base::PanedBase> property_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "position"); }

gi::property_proxy<bool, base::PanedBase> property_position_set()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "position-set"); }
const gi::property_proxy<bool, base::PanedBase> property_position_set() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "position-set"); }

gi::property_proxy<bool, base::PanedBase> property_resize_end_child()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "resize-end-child"); }
const gi::property_proxy<bool, base::PanedBase> property_resize_end_child() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "resize-end-child"); }

gi::property_proxy<bool, base::PanedBase> property_resize_start_child()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "resize-start-child"); }
const gi::property_proxy<bool, base::PanedBase> property_resize_start_child() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "resize-start-child"); }

gi::property_proxy<bool, base::PanedBase> property_shrink_end_child()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "shrink-end-child"); }
const gi::property_proxy<bool, base::PanedBase> property_shrink_end_child() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "shrink-end-child"); }

gi::property_proxy<bool, base::PanedBase> property_shrink_start_child()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "shrink-start-child"); }
const gi::property_proxy<bool, base::PanedBase> property_shrink_start_child() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "shrink-start-child"); }

gi::property_proxy<Gtk::Widget, base::PanedBase> property_start_child()
{ return gi::property_proxy<Gtk::Widget, base::PanedBase> (*this, "start-child"); }
const gi::property_proxy<Gtk::Widget, base::PanedBase> property_start_child() const
{ return gi::property_proxy<Gtk::Widget, base::PanedBase> (*this, "start-child"); }

gi::property_proxy<bool, base::PanedBase> property_wide_handle()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "wide-handle"); }
const gi::property_proxy<bool, base::PanedBase> property_wide_handle() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "wide-handle"); }

// (signal) gboolean accept-position ();
// (signal) gboolean accept-position ();
gi::signal_proxy<bool(Gtk::Paned)> signal_accept_position()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "accept-position"); }

// (signal) gboolean cancel-position ();
// (signal) gboolean cancel-position ();
gi::signal_proxy<bool(Gtk::Paned)> signal_cancel_position()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "cancel-position"); }

// (signal) gboolean cycle-child-focus (gboolean reversed);
// (signal) gboolean cycle-child-focus (gboolean reversed);
gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> signal_cycle_child_focus()
{ return gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> (*this, "cycle-child-focus"); }

// (signal) gboolean cycle-handle-focus (gboolean reversed);
// (signal) gboolean cycle-handle-focus (gboolean reversed);
gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> signal_cycle_handle_focus()
{ return gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> (*this, "cycle-handle-focus"); }

// (signal) gboolean move-handle ( scroll_type);
// (signal) gboolean move-handle (::GtkScrollType scroll_type);
gi::signal_proxy<bool(Gtk::Paned, Gtk::ScrollType scroll_type)> signal_move_handle()
{ return gi::signal_proxy<bool(Gtk::Paned, Gtk::ScrollType scroll_type)> (*this, "move-handle"); }

// (signal) gboolean toggle-handle-focus ();
// (signal) gboolean toggle-handle-focus ();
gi::signal_proxy<bool(Gtk::Paned)> signal_toggle_handle_focus()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "toggle-handle-focus"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_def.hpp>)
#include <gtk/paned_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/paned_extra.hpp>)
#include <gtk/paned_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Paned : public GI_GTK_PANED_BASE
{ typedef GI_GTK_PANED_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPaned>
{ typedef Gtk::Paned type; }; 

} // namespace repository

} // namespace gi

#endif
