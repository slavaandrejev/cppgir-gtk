// AUTO-GENERATED

#ifndef _GI_GTK_MNEMONICTRIGGER_HPP_
#define _GI_GTK_MNEMONICTRIGGER_HPP_

#include "shortcuttrigger.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MnemonicTrigger;

namespace base {


#define GI_GTK_MNEMONICTRIGGER_BASE base::MnemonicTriggerBase
class MnemonicTriggerBase : public Gtk::ShortcutTrigger
{
typedef Gtk::ShortcutTrigger super_type;
public:
typedef ::GtkMnemonicTrigger BaseObjectType;

MnemonicTriggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_mnemonic_trigger_get_type(); } 

// GtkShortcutTrigger* /*full*/ gtk_mnemonic_trigger_new (guint keyval);
// ::GtkMnemonicTrigger* /*full*/ gtk_mnemonic_trigger_new (guint keyval);
static GI_INLINE_DECL Gtk::MnemonicTrigger new_ (guint keyval) noexcept;

// guint gtk_mnemonic_trigger_get_keyval (GtkMnemonicTrigger* self /*none*/);
// guint gtk_mnemonic_trigger_get_keyval (::GtkMnemonicTrigger* self /*none*/);
GI_INLINE_DECL guint get_keyval () noexcept;

gi::property_proxy<guint, base::MnemonicTriggerBase> property_keyval()
{ return gi::property_proxy<guint, base::MnemonicTriggerBase> (*this, "keyval"); }
const gi::property_proxy<guint, base::MnemonicTriggerBase> property_keyval() const
{ return gi::property_proxy<guint, base::MnemonicTriggerBase> (*this, "keyval"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mnemonictrigger_extra_def.hpp>)
#include <gtk/mnemonictrigger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mnemonictrigger_extra.hpp>)
#include <gtk/mnemonictrigger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MnemonicTrigger : public GI_GTK_MNEMONICTRIGGER_BASE
{ typedef GI_GTK_MNEMONICTRIGGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMnemonicTrigger>
{ typedef Gtk::MnemonicTrigger type; }; 

} // namespace repository

} // namespace gi

#endif
