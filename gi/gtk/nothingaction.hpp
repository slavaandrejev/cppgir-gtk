// AUTO-GENERATED

#ifndef _GI_GTK_NOTHINGACTION_HPP_
#define _GI_GTK_NOTHINGACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class NothingAction;

namespace base {


#define GI_GTK_NOTHINGACTION_BASE base::NothingActionBase
class NothingActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkNothingAction BaseObjectType;

NothingActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_nothing_action_get_type(); } 

// GtkShortcutAction* /*none*/ gtk_nothing_action_get ();
// ::GtkNothingAction* /*none*/ gtk_nothing_action_get ();
static GI_INLINE_DECL Gtk::NothingAction get () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nothingaction_extra_def.hpp>)
#include <gtk/nothingaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nothingaction_extra.hpp>)
#include <gtk/nothingaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NothingAction : public GI_GTK_NOTHINGACTION_BASE
{ typedef GI_GTK_NOTHINGACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNothingAction>
{ typedef Gtk::NothingAction type; }; 

} // namespace repository

} // namespace gi

#endif
