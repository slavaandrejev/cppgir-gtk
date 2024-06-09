// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERLEGACY_HPP_
#define _GI_GTK_EVENTCONTROLLERLEGACY_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EventControllerLegacy;

namespace base {


#define GI_GTK_EVENTCONTROLLERLEGACY_BASE base::EventControllerLegacyBase
class EventControllerLegacyBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkEventControllerLegacy BaseObjectType;

EventControllerLegacyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_legacy_get_type(); } 

// GtkEventController* /*full*/ gtk_event_controller_legacy_new ();
// ::GtkEventControllerLegacy* /*full*/ gtk_event_controller_legacy_new ();
static GI_INLINE_DECL Gtk::EventControllerLegacy new_ () noexcept;

// (signal) gboolean event ( event /*none*/);
// (signal) gboolean event ( event /*none*/);
// SKIP; event type  not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerlegacy_extra_def.hpp>)
#include <gtk/eventcontrollerlegacy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerlegacy_extra.hpp>)
#include <gtk/eventcontrollerlegacy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventControllerLegacy : public GI_GTK_EVENTCONTROLLERLEGACY_BASE
{ typedef GI_GTK_EVENTCONTROLLERLEGACY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventControllerLegacy>
{ typedef Gtk::EventControllerLegacy type; }; 

} // namespace repository

} // namespace gi

#endif
