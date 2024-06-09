// AUTO-GENERATED

#ifndef _GI_GTK_ACTIVATEACTION_HPP_
#define _GI_GTK_ACTIVATEACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ActivateAction;

namespace base {


#define GI_GTK_ACTIVATEACTION_BASE base::ActivateActionBase
class ActivateActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkActivateAction BaseObjectType;

ActivateActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_activate_action_get_type(); } 

// GtkShortcutAction* /*none*/ gtk_activate_action_get ();
// ::GtkActivateAction* /*none*/ gtk_activate_action_get ();
static GI_INLINE_DECL Gtk::ActivateAction get () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/activateaction_extra_def.hpp>)
#include <gtk/activateaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/activateaction_extra.hpp>)
#include <gtk/activateaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ActivateAction : public GI_GTK_ACTIVATEACTION_BASE
{ typedef GI_GTK_ACTIVATEACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActivateAction>
{ typedef Gtk::ActivateAction type; }; 

} // namespace repository

} // namespace gi

#endif
