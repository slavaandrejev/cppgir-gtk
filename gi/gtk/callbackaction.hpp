// AUTO-GENERATED

#ifndef _GI_GTK_CALLBACKACTION_HPP_
#define _GI_GTK_CALLBACKACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CallbackAction;

namespace base {


#define GI_GTK_CALLBACKACTION_BASE base::CallbackActionBase
class CallbackActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkCallbackAction BaseObjectType;

CallbackActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_callback_action_get_type(); } 

// GtkShortcutAction* /*full*/ gtk_callback_action_new (GtkShortcutFunc callback /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// ::GtkCallbackAction* /*full*/ gtk_callback_action_new (Gtk::ShortcutFunc::cfunction_type callback /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
static GI_INLINE_DECL Gtk::CallbackAction new_ (Gtk::ShortcutFunc callback) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/callbackaction_extra_def.hpp>)
#include <gtk/callbackaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/callbackaction_extra.hpp>)
#include <gtk/callbackaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CallbackAction : public GI_GTK_CALLBACKACTION_BASE
{ typedef GI_GTK_CALLBACKACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCallbackAction>
{ typedef Gtk::CallbackAction type; }; 

} // namespace repository

} // namespace gi

#endif
