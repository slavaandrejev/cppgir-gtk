// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTCONTROLLER_HPP_
#define _GI_GTK_SHORTCUTCONTROLLER_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class Shortcut;

class ShortcutController;

namespace base {


#define GI_GTK_SHORTCUTCONTROLLER_BASE base::ShortcutControllerBase
class ShortcutControllerBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkShortcutController BaseObjectType;

ShortcutControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_controller_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkEventController* /*full*/ gtk_shortcut_controller_new ();
// ::GtkShortcutController* /*full*/ gtk_shortcut_controller_new ();
static GI_INLINE_DECL Gtk::ShortcutController new_ () noexcept;

// GtkEventController* /*full*/ gtk_shortcut_controller_new_for_model (GListModel* model /*none*/);
// ::GtkShortcutController* /*full*/ gtk_shortcut_controller_new_for_model (::GListModel* model /*none*/);
static GI_INLINE_DECL Gtk::ShortcutController new_for_model (Gio::ListModel model) noexcept;

// void gtk_shortcut_controller_add_shortcut (GtkShortcutController* self /*none*/, GtkShortcut* shortcut /*full*/);
// void gtk_shortcut_controller_add_shortcut (::GtkShortcutController* self /*none*/, ::GtkShortcut* shortcut /*full*/);
GI_INLINE_DECL void add_shortcut (Gtk::Shortcut shortcut) noexcept;

// GdkModifierType gtk_shortcut_controller_get_mnemonics_modifiers (GtkShortcutController* self /*none*/);
// ::GdkModifierType gtk_shortcut_controller_get_mnemonics_modifiers (::GtkShortcutController* self /*none*/);
GI_INLINE_DECL Gdk::ModifierType get_mnemonics_modifiers () noexcept;

// GtkShortcutScope gtk_shortcut_controller_get_scope (GtkShortcutController* self /*none*/);
// ::GtkShortcutScope gtk_shortcut_controller_get_scope (::GtkShortcutController* self /*none*/);
GI_INLINE_DECL Gtk::ShortcutScope get_scope () noexcept;

// void gtk_shortcut_controller_remove_shortcut (GtkShortcutController* self /*none*/, GtkShortcut* shortcut /*none*/);
// void gtk_shortcut_controller_remove_shortcut (::GtkShortcutController* self /*none*/, ::GtkShortcut* shortcut /*none*/);
GI_INLINE_DECL void remove_shortcut (Gtk::Shortcut shortcut) noexcept;

// void gtk_shortcut_controller_set_mnemonics_modifiers (GtkShortcutController* self /*none*/, GdkModifierType modifiers);
// void gtk_shortcut_controller_set_mnemonics_modifiers (::GtkShortcutController* self /*none*/, ::GdkModifierType modifiers);
GI_INLINE_DECL void set_mnemonics_modifiers (Gdk::ModifierType modifiers) noexcept;

// void gtk_shortcut_controller_set_scope (GtkShortcutController* self /*none*/, GtkShortcutScope scope);
// void gtk_shortcut_controller_set_scope (::GtkShortcutController* self /*none*/, ::GtkShortcutScope scope);
GI_INLINE_DECL void set_scope (Gtk::ShortcutScope scope) noexcept;

gi::property_proxy<GType, base::ShortcutControllerBase> property_item_type()
{ return gi::property_proxy<GType, base::ShortcutControllerBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::ShortcutControllerBase> property_item_type() const
{ return gi::property_proxy<GType, base::ShortcutControllerBase> (*this, "item-type"); }

gi::property_proxy<Gdk::ModifierType, base::ShortcutControllerBase> property_mnemonic_modifiers()
{ return gi::property_proxy<Gdk::ModifierType, base::ShortcutControllerBase> (*this, "mnemonic-modifiers"); }
const gi::property_proxy<Gdk::ModifierType, base::ShortcutControllerBase> property_mnemonic_modifiers() const
{ return gi::property_proxy<Gdk::ModifierType, base::ShortcutControllerBase> (*this, "mnemonic-modifiers"); }

gi::property_proxy_write<Gio::ListModel, base::ShortcutControllerBase> property_model()
{ return gi::property_proxy_write<Gio::ListModel, base::ShortcutControllerBase> (*this, "model"); }

gi::property_proxy<guint, base::ShortcutControllerBase> property_n_items()
{ return gi::property_proxy<guint, base::ShortcutControllerBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::ShortcutControllerBase> property_n_items() const
{ return gi::property_proxy<guint, base::ShortcutControllerBase> (*this, "n-items"); }

gi::property_proxy<Gtk::ShortcutScope, base::ShortcutControllerBase> property_scope()
{ return gi::property_proxy<Gtk::ShortcutScope, base::ShortcutControllerBase> (*this, "scope"); }
const gi::property_proxy<Gtk::ShortcutScope, base::ShortcutControllerBase> property_scope() const
{ return gi::property_proxy<Gtk::ShortcutScope, base::ShortcutControllerBase> (*this, "scope"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutcontroller_extra_def.hpp>)
#include <gtk/shortcutcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutcontroller_extra.hpp>)
#include <gtk/shortcutcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutController : public GI_GTK_SHORTCUTCONTROLLER_BASE
{ typedef GI_GTK_SHORTCUTCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutController>
{ typedef Gtk::ShortcutController type; }; 

} // namespace repository

} // namespace gi

#endif
