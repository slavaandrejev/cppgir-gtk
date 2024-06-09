// AUTO-GENERATED

#ifndef _GI_GTK_NEVERTRIGGER_HPP_
#define _GI_GTK_NEVERTRIGGER_HPP_

#include "shortcuttrigger.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class NeverTrigger;

namespace base {


#define GI_GTK_NEVERTRIGGER_BASE base::NeverTriggerBase
class NeverTriggerBase : public Gtk::ShortcutTrigger
{
typedef Gtk::ShortcutTrigger super_type;
public:
typedef ::GtkNeverTrigger BaseObjectType;

NeverTriggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_never_trigger_get_type(); } 

// GtkShortcutTrigger* /*none*/ gtk_never_trigger_get ();
// ::GtkNeverTrigger* /*none*/ gtk_never_trigger_get ();
static GI_INLINE_DECL Gtk::NeverTrigger get () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nevertrigger_extra_def.hpp>)
#include <gtk/nevertrigger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nevertrigger_extra.hpp>)
#include <gtk/nevertrigger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NeverTrigger : public GI_GTK_NEVERTRIGGER_BASE
{ typedef GI_GTK_NEVERTRIGGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNeverTrigger>
{ typedef Gtk::NeverTrigger type; }; 

} // namespace repository

} // namespace gi

#endif
