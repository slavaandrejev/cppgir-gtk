// AUTO-GENERATED

#ifndef _GI_GTK_SIGNALACTION_HPP_
#define _GI_GTK_SIGNALACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SignalAction;

namespace base {


#define GI_GTK_SIGNALACTION_BASE base::SignalActionBase
class SignalActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkSignalAction BaseObjectType;

SignalActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_signal_action_get_type(); } 

// GtkShortcutAction* /*full*/ gtk_signal_action_new (const char* signal_name /*none*/);
// ::GtkSignalAction* /*full*/ gtk_signal_action_new (const char* signal_name /*none*/);
static GI_INLINE_DECL Gtk::SignalAction new_ (const gi::cstring_v signal_name) noexcept;

// const char* /*none*/ gtk_signal_action_get_signal_name (GtkSignalAction* self /*none*/);
// const char* /*none*/ gtk_signal_action_get_signal_name (::GtkSignalAction* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_signal_name () noexcept;

gi::property_proxy<gi::cstring, base::SignalActionBase> property_signal_name()
{ return gi::property_proxy<gi::cstring, base::SignalActionBase> (*this, "signal-name"); }
const gi::property_proxy<gi::cstring, base::SignalActionBase> property_signal_name() const
{ return gi::property_proxy<gi::cstring, base::SignalActionBase> (*this, "signal-name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/signalaction_extra_def.hpp>)
#include <gtk/signalaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/signalaction_extra.hpp>)
#include <gtk/signalaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SignalAction : public GI_GTK_SIGNALACTION_BASE
{ typedef GI_GTK_SIGNALACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSignalAction>
{ typedef Gtk::SignalAction type; }; 

} // namespace repository

} // namespace gi

#endif
