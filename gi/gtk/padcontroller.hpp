// AUTO-GENERATED

#ifndef _GI_GTK_PADCONTROLLER_HPP_
#define _GI_GTK_PADCONTROLLER_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class PadActionEntry;
class PadActionEntry_Ref;

class PadController;

namespace base {


#define GI_GTK_PADCONTROLLER_BASE base::PadControllerBase
class PadControllerBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkPadController BaseObjectType;

PadControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_pad_controller_get_type(); } 

// GtkPadController* /*full*/ gtk_pad_controller_new (GActionGroup* group /*none*/, GdkDevice* pad /*none,nullable*/);
// ::GtkPadController* /*full*/ gtk_pad_controller_new (::GActionGroup* group /*none*/, ::GdkDevice* pad /*none,nullable*/);
static GI_INLINE_DECL Gtk::PadController new_ (Gio::ActionGroup group, Gdk::Device pad) noexcept;
static GI_INLINE_DECL Gtk::PadController new_ (Gio::ActionGroup group) noexcept;

// void gtk_pad_controller_set_action (GtkPadController* controller /*none*/, GtkPadActionType type, int index, int mode, const char* label /*none*/, const char* action_name /*none*/);
// void gtk_pad_controller_set_action (::GtkPadController* controller /*none*/, ::GtkPadActionType type, gint index, gint mode, const char* label /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void set_action (Gtk::PadActionType type, gint index, gint mode, const gi::cstring_v label, const gi::cstring_v action_name) noexcept;

// void gtk_pad_controller_set_action_entries (GtkPadController* controller /*none*/, const GtkPadActionEntry* entries /*none*/, int n_entries);
// void gtk_pad_controller_set_action_entries (::GtkPadController* controller /*none*/, const ::GtkPadActionEntry** entries /*none*/, gint n_entries);
// SKIP; entries in boxed array not supported (depth 1)

gi::property_proxy<Gio::ActionGroup, base::PadControllerBase> property_action_group()
{ return gi::property_proxy<Gio::ActionGroup, base::PadControllerBase> (*this, "action-group"); }
const gi::property_proxy<Gio::ActionGroup, base::PadControllerBase> property_action_group() const
{ return gi::property_proxy<Gio::ActionGroup, base::PadControllerBase> (*this, "action-group"); }

gi::property_proxy<Gdk::Device, base::PadControllerBase> property_pad()
{ return gi::property_proxy<Gdk::Device, base::PadControllerBase> (*this, "pad"); }
const gi::property_proxy<Gdk::Device, base::PadControllerBase> property_pad() const
{ return gi::property_proxy<Gdk::Device, base::PadControllerBase> (*this, "pad"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra_def.hpp>)
#include <gtk/padcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra.hpp>)
#include <gtk/padcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PadController : public GI_GTK_PADCONTROLLER_BASE
{ typedef GI_GTK_PADCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPadController>
{ typedef Gtk::PadController type; }; 

} // namespace repository

} // namespace gi

#endif
