// AUTO-GENERATED

#ifndef _GI_GTK_ALTERNATIVETRIGGER_HPP_
#define _GI_GTK_ALTERNATIVETRIGGER_HPP_

#include "shortcuttrigger.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutTrigger;

class AlternativeTrigger;

namespace base {


#define GI_GTK_ALTERNATIVETRIGGER_BASE base::AlternativeTriggerBase
class AlternativeTriggerBase : public Gtk::ShortcutTrigger
{
typedef Gtk::ShortcutTrigger super_type;
public:
typedef ::GtkAlternativeTrigger BaseObjectType;

AlternativeTriggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_alternative_trigger_get_type(); } 

// GtkShortcutTrigger* /*full*/ gtk_alternative_trigger_new (GtkShortcutTrigger* first /*full*/, GtkShortcutTrigger* second /*full*/);
// ::GtkAlternativeTrigger* /*full*/ gtk_alternative_trigger_new (::GtkShortcutTrigger* first /*full*/, ::GtkShortcutTrigger* second /*full*/);
static GI_INLINE_DECL Gtk::AlternativeTrigger new_ (Gtk::ShortcutTrigger first, Gtk::ShortcutTrigger second) noexcept;

// GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_first (GtkAlternativeTrigger* self /*none*/);
// ::GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_first (::GtkAlternativeTrigger* self /*none*/);
GI_INLINE_DECL Gtk::ShortcutTrigger get_first () noexcept;

// GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_second (GtkAlternativeTrigger* self /*none*/);
// ::GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_second (::GtkAlternativeTrigger* self /*none*/);
GI_INLINE_DECL Gtk::ShortcutTrigger get_second () noexcept;

gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> property_first()
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> (*this, "first"); }
const gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> property_first() const
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> (*this, "first"); }

gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> property_second()
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> (*this, "second"); }
const gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> property_second() const
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::AlternativeTriggerBase> (*this, "second"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/alternativetrigger_extra_def.hpp>)
#include <gtk/alternativetrigger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/alternativetrigger_extra.hpp>)
#include <gtk/alternativetrigger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AlternativeTrigger : public GI_GTK_ALTERNATIVETRIGGER_BASE
{ typedef GI_GTK_ALTERNATIVETRIGGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAlternativeTrigger>
{ typedef Gtk::AlternativeTrigger type; }; 

} // namespace repository

} // namespace gi

#endif
