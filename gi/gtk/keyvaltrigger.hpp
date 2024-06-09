// AUTO-GENERATED

#ifndef _GI_GTK_KEYVALTRIGGER_HPP_
#define _GI_GTK_KEYVALTRIGGER_HPP_

#include "shortcuttrigger.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class KeyvalTrigger;

namespace base {


#define GI_GTK_KEYVALTRIGGER_BASE base::KeyvalTriggerBase
class KeyvalTriggerBase : public Gtk::ShortcutTrigger
{
typedef Gtk::ShortcutTrigger super_type;
public:
typedef ::GtkKeyvalTrigger BaseObjectType;

KeyvalTriggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_keyval_trigger_get_type(); } 

// GtkShortcutTrigger* /*full*/ gtk_keyval_trigger_new (guint keyval, GdkModifierType modifiers);
// ::GtkKeyvalTrigger* /*full*/ gtk_keyval_trigger_new (guint keyval, ::GdkModifierType modifiers);
static GI_INLINE_DECL Gtk::KeyvalTrigger new_ (guint keyval, Gdk::ModifierType modifiers) noexcept;

// guint gtk_keyval_trigger_get_keyval (GtkKeyvalTrigger* self /*none*/);
// guint gtk_keyval_trigger_get_keyval (::GtkKeyvalTrigger* self /*none*/);
GI_INLINE_DECL guint get_keyval () noexcept;

// GdkModifierType gtk_keyval_trigger_get_modifiers (GtkKeyvalTrigger* self /*none*/);
// ::GdkModifierType gtk_keyval_trigger_get_modifiers (::GtkKeyvalTrigger* self /*none*/);
GI_INLINE_DECL Gdk::ModifierType get_modifiers () noexcept;

gi::property_proxy<guint, base::KeyvalTriggerBase> property_keyval()
{ return gi::property_proxy<guint, base::KeyvalTriggerBase> (*this, "keyval"); }
const gi::property_proxy<guint, base::KeyvalTriggerBase> property_keyval() const
{ return gi::property_proxy<guint, base::KeyvalTriggerBase> (*this, "keyval"); }

gi::property_proxy<Gdk::ModifierType, base::KeyvalTriggerBase> property_modifiers()
{ return gi::property_proxy<Gdk::ModifierType, base::KeyvalTriggerBase> (*this, "modifiers"); }
const gi::property_proxy<Gdk::ModifierType, base::KeyvalTriggerBase> property_modifiers() const
{ return gi::property_proxy<Gdk::ModifierType, base::KeyvalTriggerBase> (*this, "modifiers"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/keyvaltrigger_extra_def.hpp>)
#include <gtk/keyvaltrigger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/keyvaltrigger_extra.hpp>)
#include <gtk/keyvaltrigger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class KeyvalTrigger : public GI_GTK_KEYVALTRIGGER_BASE
{ typedef GI_GTK_KEYVALTRIGGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkKeyvalTrigger>
{ typedef Gtk::KeyvalTrigger type; }; 

} // namespace repository

} // namespace gi

#endif
