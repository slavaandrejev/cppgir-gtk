// AUTO-GENERATED

#ifndef _GI_GTK_SWITCH_HPP_
#define _GI_GTK_SWITCH_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;

class Switch;

namespace base {


#define GI_GTK_SWITCH_BASE base::SwitchBase
class SwitchBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSwitch BaseObjectType;

SwitchBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_switch_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ gtk_switch_new ();
// ::GtkSwitch* /*none*/ gtk_switch_new ();
static GI_INLINE_DECL Gtk::Switch new_ () noexcept;

// gboolean gtk_switch_get_active (GtkSwitch* self /*none*/);
// gboolean gtk_switch_get_active (::GtkSwitch* self /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_switch_get_state (GtkSwitch* self /*none*/);
// gboolean gtk_switch_get_state (::GtkSwitch* self /*none*/);
GI_INLINE_DECL bool get_state () noexcept;

// void gtk_switch_set_active (GtkSwitch* self /*none*/, gboolean is_active);
// void gtk_switch_set_active (::GtkSwitch* self /*none*/, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

// void gtk_switch_set_state (GtkSwitch* self /*none*/, gboolean state);
// void gtk_switch_set_state (::GtkSwitch* self /*none*/, gboolean state);
GI_INLINE_DECL void set_state (gboolean state) noexcept;

gi::property_proxy<bool, base::SwitchBase> property_active()
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "active"); }
const gi::property_proxy<bool, base::SwitchBase> property_active() const
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "active"); }

gi::property_proxy<bool, base::SwitchBase> property_state()
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "state"); }
const gi::property_proxy<bool, base::SwitchBase> property_state() const
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "state"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::Switch)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Switch)> (*this, "activate"); }

// (signal) gboolean state-set (gboolean state);
// (signal) gboolean state-set (gboolean state);
gi::signal_proxy<bool(Gtk::Switch, gboolean state)> signal_state_set()
{ return gi::signal_proxy<bool(Gtk::Switch, gboolean state)> (*this, "state-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_def.hpp>)
#include <gtk/switch_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switch_extra.hpp>)
#include <gtk/switch_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Switch : public GI_GTK_SWITCH_BASE
{ typedef GI_GTK_SWITCH_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSwitch>
{ typedef Gtk::Switch type; }; 

} // namespace repository

} // namespace gi

#endif
