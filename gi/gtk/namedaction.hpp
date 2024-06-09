// AUTO-GENERATED

#ifndef _GI_GTK_NAMEDACTION_HPP_
#define _GI_GTK_NAMEDACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class NamedAction;

namespace base {


#define GI_GTK_NAMEDACTION_BASE base::NamedActionBase
class NamedActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkNamedAction BaseObjectType;

NamedActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_named_action_get_type(); } 

// GtkShortcutAction* /*full*/ gtk_named_action_new (const char* name /*none*/);
// ::GtkNamedAction* /*full*/ gtk_named_action_new (const char* name /*none*/);
static GI_INLINE_DECL Gtk::NamedAction new_ (const gi::cstring_v name) noexcept;

// const char* /*none*/ gtk_named_action_get_action_name (GtkNamedAction* self /*none*/);
// const char* /*none*/ gtk_named_action_get_action_name (::GtkNamedAction* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_action_name () noexcept;

gi::property_proxy<gi::cstring, base::NamedActionBase> property_action_name()
{ return gi::property_proxy<gi::cstring, base::NamedActionBase> (*this, "action-name"); }
const gi::property_proxy<gi::cstring, base::NamedActionBase> property_action_name() const
{ return gi::property_proxy<gi::cstring, base::NamedActionBase> (*this, "action-name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/namedaction_extra_def.hpp>)
#include <gtk/namedaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/namedaction_extra.hpp>)
#include <gtk/namedaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NamedAction : public GI_GTK_NAMEDACTION_BASE
{ typedef GI_GTK_NAMEDACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNamedAction>
{ typedef Gtk::NamedAction type; }; 

} // namespace repository

} // namespace gi

#endif
