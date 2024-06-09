// AUTO-GENERATED

#ifndef _GI_GTK_DROPCONTROLLERMOTION_HPP_
#define _GI_GTK_DROPCONTROLLERMOTION_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DropControllerMotion;

namespace base {


#define GI_GTK_DROPCONTROLLERMOTION_BASE base::DropControllerMotionBase
class DropControllerMotionBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkDropControllerMotion BaseObjectType;

DropControllerMotionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drop_controller_motion_get_type(); } 

// GtkEventController* /*full*/ gtk_drop_controller_motion_new ();
// ::GtkDropControllerMotion* /*full*/ gtk_drop_controller_motion_new ();
static GI_INLINE_DECL Gtk::DropControllerMotion new_ () noexcept;

// gboolean gtk_drop_controller_motion_contains_pointer (GtkDropControllerMotion* self /*none*/);
// gboolean gtk_drop_controller_motion_contains_pointer (::GtkDropControllerMotion* self /*none*/);
GI_INLINE_DECL bool contains_pointer () noexcept;

// GdkDrop* /*none,nullable*/ gtk_drop_controller_motion_get_drop (GtkDropControllerMotion* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_controller_motion_get_drop (::GtkDropControllerMotion* self /*none*/);
GI_INLINE_DECL Gdk::Drop get_drop () noexcept;

// gboolean gtk_drop_controller_motion_is_pointer (GtkDropControllerMotion* self /*none*/);
// gboolean gtk_drop_controller_motion_is_pointer (::GtkDropControllerMotion* self /*none*/);
GI_INLINE_DECL bool is_pointer () noexcept;

gi::property_proxy<bool, base::DropControllerMotionBase> property_contains_pointer()
{ return gi::property_proxy<bool, base::DropControllerMotionBase> (*this, "contains-pointer"); }
const gi::property_proxy<bool, base::DropControllerMotionBase> property_contains_pointer() const
{ return gi::property_proxy<bool, base::DropControllerMotionBase> (*this, "contains-pointer"); }

gi::property_proxy<Gdk::Drop, base::DropControllerMotionBase> property_drop()
{ return gi::property_proxy<Gdk::Drop, base::DropControllerMotionBase> (*this, "drop"); }
const gi::property_proxy<Gdk::Drop, base::DropControllerMotionBase> property_drop() const
{ return gi::property_proxy<Gdk::Drop, base::DropControllerMotionBase> (*this, "drop"); }

gi::property_proxy<bool, base::DropControllerMotionBase> property_is_pointer()
{ return gi::property_proxy<bool, base::DropControllerMotionBase> (*this, "is-pointer"); }
const gi::property_proxy<bool, base::DropControllerMotionBase> property_is_pointer() const
{ return gi::property_proxy<bool, base::DropControllerMotionBase> (*this, "is-pointer"); }

// (signal) void enter (gdouble x, gdouble y);
// (signal) void enter (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::DropControllerMotion, gdouble x, gdouble y)> signal_enter()
{ return gi::signal_proxy<void(Gtk::DropControllerMotion, gdouble x, gdouble y)> (*this, "enter"); }

// (signal) void leave ();
// (signal) void leave ();
gi::signal_proxy<void(Gtk::DropControllerMotion)> signal_leave()
{ return gi::signal_proxy<void(Gtk::DropControllerMotion)> (*this, "leave"); }

// (signal) void motion (gdouble x, gdouble y);
// (signal) void motion (gdouble x, gdouble y);
gi::signal_proxy<void(Gtk::DropControllerMotion, gdouble x, gdouble y)> signal_motion()
{ return gi::signal_proxy<void(Gtk::DropControllerMotion, gdouble x, gdouble y)> (*this, "motion"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dropcontrollermotion_extra_def.hpp>)
#include <gtk/dropcontrollermotion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dropcontrollermotion_extra.hpp>)
#include <gtk/dropcontrollermotion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DropControllerMotion : public GI_GTK_DROPCONTROLLERMOTION_BASE
{ typedef GI_GTK_DROPCONTROLLERMOTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDropControllerMotion>
{ typedef Gtk::DropControllerMotion type; }; 

} // namespace repository

} // namespace gi

#endif
