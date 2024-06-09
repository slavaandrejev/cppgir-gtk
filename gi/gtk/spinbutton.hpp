// AUTO-GENERATED

#ifndef _GI_GTK_SPINBUTTON_HPP_
#define _GI_GTK_SPINBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange;
class Adjustment;
class CellEditable;
class Editable;
class Orientable;

class SpinButton;

namespace base {


#define GI_GTK_SPINBUTTON_BASE base::SpinButtonBase
class SpinButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSpinButton BaseObjectType;

SpinButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spin_button_get_type(); } 

GI_INLINE_DECL Gtk::AccessibleRange interface_ (gi::interface_tag<Gtk::AccessibleRange>);

GI_INLINE_DECL operator Gtk::AccessibleRange ();

GI_INLINE_DECL Gtk::CellEditable interface_ (gi::interface_tag<Gtk::CellEditable>);

GI_INLINE_DECL operator Gtk::CellEditable ();

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_spin_button_new (GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// ::GtkSpinButton* /*none*/ gtk_spin_button_new (::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
static GI_INLINE_DECL Gtk::SpinButton new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
static GI_INLINE_DECL Gtk::SpinButton new_ (gdouble climb_rate, guint digits) noexcept;

// GtkWidget* /*none*/ gtk_spin_button_new_with_range (double min, double max, double step);
// ::GtkSpinButton* /*none*/ gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
static GI_INLINE_DECL Gtk::SpinButton new_with_range (gdouble min, gdouble max, gdouble step) noexcept;

// void gtk_spin_button_configure (GtkSpinButton* spin_button /*none*/, GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// void gtk_spin_button_configure (::GtkSpinButton* spin_button /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
GI_INLINE_DECL void configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
GI_INLINE_DECL void configure (gdouble climb_rate, guint digits) noexcept;

// GtkAdjustment* /*none*/ gtk_spin_button_get_adjustment (GtkSpinButton* spin_button /*none*/);
// ::GtkAdjustment* /*none*/ gtk_spin_button_get_adjustment (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// double gtk_spin_button_get_climb_rate (GtkSpinButton* spin_button /*none*/);
// gdouble gtk_spin_button_get_climb_rate (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL gdouble get_climb_rate () noexcept;

// guint gtk_spin_button_get_digits (GtkSpinButton* spin_button /*none*/);
// guint gtk_spin_button_get_digits (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL guint get_digits () noexcept;

// void gtk_spin_button_get_increments (GtkSpinButton* spin_button /*none*/, double* step, double* page);
// void gtk_spin_button_get_increments (::GtkSpinButton* spin_button /*none*/, gdouble* step, gdouble* page);
GI_INLINE_DECL void get_increments (gdouble * step, gdouble * page) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_increments () noexcept;

// gboolean gtk_spin_button_get_numeric (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_numeric (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL bool get_numeric () noexcept;

// void gtk_spin_button_get_range (GtkSpinButton* spin_button /*none*/, double* min, double* max);
// void gtk_spin_button_get_range (::GtkSpinButton* spin_button /*none*/, gdouble* min, gdouble* max);
GI_INLINE_DECL void get_range (gdouble * min, gdouble * max) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_range () noexcept;

// gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_snap_to_ticks (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL bool get_snap_to_ticks () noexcept;

// GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton* spin_button /*none*/);
// ::GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL Gtk::SpinButtonUpdatePolicy get_update_policy () noexcept;

// double gtk_spin_button_get_value (GtkSpinButton* spin_button /*none*/);
// gdouble gtk_spin_button_get_value (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL gdouble get_value () noexcept;

// int gtk_spin_button_get_value_as_int (GtkSpinButton* spin_button /*none*/);
// gint gtk_spin_button_get_value_as_int (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL gint get_value_as_int () noexcept;

// gboolean gtk_spin_button_get_wrap (GtkSpinButton* spin_button /*none*/);
// gboolean gtk_spin_button_get_wrap (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL bool get_wrap () noexcept;

// void gtk_spin_button_set_adjustment (GtkSpinButton* spin_button /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_spin_button_set_adjustment (::GtkSpinButton* spin_button /*none*/, ::GtkAdjustment* adjustment /*none*/);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_spin_button_set_climb_rate (GtkSpinButton* spin_button /*none*/, double climb_rate);
// void gtk_spin_button_set_climb_rate (::GtkSpinButton* spin_button /*none*/, gdouble climb_rate);
GI_INLINE_DECL void set_climb_rate (gdouble climb_rate) noexcept;

// void gtk_spin_button_set_digits (GtkSpinButton* spin_button /*none*/, guint digits);
// void gtk_spin_button_set_digits (::GtkSpinButton* spin_button /*none*/, guint digits);
GI_INLINE_DECL void set_digits (guint digits) noexcept;

// void gtk_spin_button_set_increments (GtkSpinButton* spin_button /*none*/, double step, double page);
// void gtk_spin_button_set_increments (::GtkSpinButton* spin_button /*none*/, gdouble step, gdouble page);
GI_INLINE_DECL void set_increments (gdouble step, gdouble page) noexcept;

// void gtk_spin_button_set_numeric (GtkSpinButton* spin_button /*none*/, gboolean numeric);
// void gtk_spin_button_set_numeric (::GtkSpinButton* spin_button /*none*/, gboolean numeric);
GI_INLINE_DECL void set_numeric (gboolean numeric) noexcept;

// void gtk_spin_button_set_range (GtkSpinButton* spin_button /*none*/, double min, double max);
// void gtk_spin_button_set_range (::GtkSpinButton* spin_button /*none*/, gdouble min, gdouble max);
GI_INLINE_DECL void set_range (gdouble min, gdouble max) noexcept;

// void gtk_spin_button_set_snap_to_ticks (GtkSpinButton* spin_button /*none*/, gboolean snap_to_ticks);
// void gtk_spin_button_set_snap_to_ticks (::GtkSpinButton* spin_button /*none*/, gboolean snap_to_ticks);
GI_INLINE_DECL void set_snap_to_ticks (gboolean snap_to_ticks) noexcept;

// void gtk_spin_button_set_update_policy (GtkSpinButton* spin_button /*none*/, GtkSpinButtonUpdatePolicy policy);
// void gtk_spin_button_set_update_policy (::GtkSpinButton* spin_button /*none*/, ::GtkSpinButtonUpdatePolicy policy);
GI_INLINE_DECL void set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept;

// void gtk_spin_button_set_value (GtkSpinButton* spin_button /*none*/, double value);
// void gtk_spin_button_set_value (::GtkSpinButton* spin_button /*none*/, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

// void gtk_spin_button_set_wrap (GtkSpinButton* spin_button /*none*/, gboolean wrap);
// void gtk_spin_button_set_wrap (::GtkSpinButton* spin_button /*none*/, gboolean wrap);
GI_INLINE_DECL void set_wrap (gboolean wrap) noexcept;

// void gtk_spin_button_spin (GtkSpinButton* spin_button /*none*/, GtkSpinType direction, double increment);
// void gtk_spin_button_spin (::GtkSpinButton* spin_button /*none*/, ::GtkSpinType direction, gdouble increment);
GI_INLINE_DECL void spin (Gtk::SpinType direction, gdouble increment) noexcept;

// void gtk_spin_button_update (GtkSpinButton* spin_button /*none*/);
// void gtk_spin_button_update (::GtkSpinButton* spin_button /*none*/);
GI_INLINE_DECL void update () noexcept;

gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::SpinButtonBase> property_climb_rate()
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "climb-rate"); }
const gi::property_proxy<gdouble, base::SpinButtonBase> property_climb_rate() const
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "climb-rate"); }

gi::property_proxy<guint, base::SpinButtonBase> property_digits()
{ return gi::property_proxy<guint, base::SpinButtonBase> (*this, "digits"); }
const gi::property_proxy<guint, base::SpinButtonBase> property_digits() const
{ return gi::property_proxy<guint, base::SpinButtonBase> (*this, "digits"); }

gi::property_proxy<bool, base::SpinButtonBase> property_numeric()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "numeric"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_numeric() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "numeric"); }

gi::property_proxy<bool, base::SpinButtonBase> property_snap_to_ticks()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "snap-to-ticks"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_snap_to_ticks() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "snap-to-ticks"); }

gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> property_update_policy()
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> (*this, "update-policy"); }
const gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> property_update_policy() const
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> (*this, "update-policy"); }

gi::property_proxy<gdouble, base::SpinButtonBase> property_value()
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::SpinButtonBase> property_value() const
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "value"); }

gi::property_proxy<bool, base::SpinButtonBase> property_wrap()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "wrap"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_wrap() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "wrap"); }

// (signal) void change-value ( scroll);
// (signal) void change-value (::GtkScrollType scroll);
gi::signal_proxy<void(Gtk::SpinButton, Gtk::ScrollType scroll)> signal_change_value()
{ return gi::signal_proxy<void(Gtk::SpinButton, Gtk::ScrollType scroll)> (*this, "change-value"); }

// (signal) gint input (gpointer new_value);
// (signal) gint input (gdouble* new_value);
gi::signal_proxy<gint(Gtk::SpinButton, gdouble & new_value)> signal_input()
{ return gi::signal_proxy<gint(Gtk::SpinButton, gdouble & new_value)> (*this, "input"); }

// (signal) gboolean output ();
// (signal) gboolean output ();
gi::signal_proxy<bool(Gtk::SpinButton)> signal_output()
{ return gi::signal_proxy<bool(Gtk::SpinButton)> (*this, "output"); }

// (signal) void value-changed ();
// (signal) void value-changed ();
gi::signal_proxy<void(Gtk::SpinButton)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::SpinButton)> (*this, "value-changed"); }

// (signal) void wrapped ();
// (signal) void wrapped ();
gi::signal_proxy<void(Gtk::SpinButton)> signal_wrapped()
{ return gi::signal_proxy<void(Gtk::SpinButton)> (*this, "wrapped"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_def.hpp>)
#include <gtk/spinbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra.hpp>)
#include <gtk/spinbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SpinButton : public GI_GTK_SPINBUTTON_BASE
{ typedef GI_GTK_SPINBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinButton>
{ typedef Gtk::SpinButton type; }; 

} // namespace repository

} // namespace gi

#endif
